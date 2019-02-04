/*
** Automatically generated from `parse_tree_out_clause.m'
** by the Mercury compiler,
** version rotd-2018-09-03
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


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
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
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
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
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_clause__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_catch_5_p_0(
  MR_Word VarSet_6,
  MR_Integer Indent_7,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_mutable_var_and_comma_7_p_0(
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word MutableVar_10,
  MR_Word STATE_VARIABLE_NeedComma_0_13,
  MR_Word * STATE_VARIABLE_NeedComma_14);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_promise_eqv_solutions_goal_10_p_0(
  MR_Word tscc_proc_2_input_1_VarSet_11,
  MR_Integer tscc_proc_2_input_2_Indent_12,
  MR_Word tscc_proc_2_input_3_Vars_13,
  MR_Word tscc_proc_2_input_4_StateVars_14,
  MR_Word tscc_proc_2_input_5_DotSVars_15,
  MR_Word tscc_proc_2_input_6_ColonSVars_16,
  MR_Word tscc_proc_2_input_7_Goal_17,
  MR_String tscc_proc_2_input_8_Keyword_18);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_orelse_goals_5_p_0(
  MR_Word VarSet_6,
  MR_Integer Indent_7,
  MR_Word Goals_8);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_par_conj_5_p_0(
  MR_Word VarSet_6,
  MR_Integer Indent_7,
  MR_Word Goal_8);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_disj_5_p_0(
  MR_Word VarSet_6,
  MR_Integer Indent_7,
  MR_Word Goal_8);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(
  MR_Word VarSet_6,
  MR_Integer Indent_7,
  MR_Word Goal_8);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(
  MR_Word TraceExpr_6);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(
  MR_Word TraceExpr_6);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String HeadVar__3_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_some_5_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word VarSet_6,
  MR_Word Vars_7,
  MR_Word StateVars_8);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_call_5_p_0(
  MR_Word VarSet_6,
  MR_Word SymName_7,
  MR_Word Term_8);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_plain_or_dot_var_5_p_0(
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word PODVar_8);


static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_1[2][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_2[1][10];

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_3[1][8];

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_4[1][1];




static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity1__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_2[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__parse_tree_out_clause__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__parse_tree_out_clause__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "there_was_a_syntax_error"))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_clause__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_catch_5_p_0(
  MR_Word VarSet_6,
  MR_Integer Indent_7,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Pattern_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Goal_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer Var_19;
    MR_Integer Var_22;

    mercury__io__write_string_3_p_0((MR_String) "catch ");
    parse_tree__parse_tree_out_term__mercury_output_term_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, Pattern_8);
    mercury__io__write_string_3_p_0((MR_String) " ->");
    Var_19 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Var_19);
    Var_22 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Var_22, Goal_9);
    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_mutable_var_and_comma_7_p_0(
  MR_Word VarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word MutableVar_10,
  MR_Word STATE_VARIABLE_NeedComma_0_13,
  MR_Word * STATE_VARIABLE_NeedComma_14)
{
  {
    MR_String MutableName_34;
    MR_Word StateVar_35;

    switch (STATE_VARIABLE_NeedComma_0_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
        break;
    }
    *STATE_VARIABLE_NeedComma_14 = (MR_Integer) 1;
    MutableName_34 = ((MR_String) ((MR_hl_field(MR_mktag(0), MutableVar_10, (MR_Integer) 0))));
    StateVar_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MutableVar_10, (MR_Integer) 1))));
    mercury__io__write_string_3_p_0((MR_String) "state(");
    mercury__io__write_string_3_p_0(MutableName_34);
    mercury__io__write_string_3_p_0((MR_String) ", !");
    parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, VarNamePrint_9, StateVar_35);
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_runtime_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String EnvVarName_4 = (MR_String) (HeadVar__1_1);

    mercury__io__write_string_3_p_0((MR_String) "env(");
    mercury__term_io__quote_string_3_p_0(EnvVarName_4);
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0(
  MR_Word TypeInfo_for_T_36,
  MR_Word PrintBase_5,
  MR_Word TraceExpr_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TraceExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box Base_8 = (MR_hl_field(MR_mktag(0), TraceExpr_6, (MR_Integer) 0));
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), PrintBase_5, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_IO_12;

          func_0(((MR_Box) (PrintBase_5)), Base_8, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_12);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TraceExprA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TraceExpr_6, (MR_Integer) 0))));

          mercury__io__write_string_3_p_0((MR_String) "not(");
          parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0(TypeInfo_for_T_36, PrintBase_5, TraceExprA_9);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TraceExpr_6, (MR_Integer) 2))));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TraceExpr_6, (MR_Integer) 1))));
          MR_Word Var_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), TraceExpr_6, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), TraceExpr_6, (MR_Integer) 0)));

          switch (Var_39) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word next_value_of_TraceExpr_6;

                parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0(TypeInfo_for_T_36, PrintBase_5, Var_38);
                mercury__io__write_string_3_p_0((MR_String) " and ");
                // direct tailcall eliminated
                ;
                next_value_of_TraceExpr_6 = Var_37;
                TraceExpr_6 = next_value_of_TraceExpr_6;
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0(TypeInfo_for_T_36, PrintBase_5, Var_38);
                mercury__io__write_string_3_p_0((MR_String) ") or (");
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0(TypeInfo_for_T_36, PrintBase_5, Var_37);
                mercury__io__write_string_3_p_0((MR_String) ")");
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
parse_tree__parse_tree_out_clause__output_instance_method_clause_4_p_0(
  MR_Word MethodName_5,
  MR_Word ItemClause_6)
{
  {
    MR_bool succeeded;
    MR_Word PredOrFunc_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemClause_6, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgTerms_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_6, (MR_Integer) 2))));
    MR_Word VarSet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_6, (MR_Integer) 4))));
    MR_Word MaybeBodyGoal_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_6, (MR_Integer) 5))));
    MR_Word BodyGoal_16;
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemClause_6, (MR_Integer) 1)));

    if (((MR_tag((MR_Word) MaybeBodyGoal_13)) == (MR_Integer) 0))
    {
      MR_Word Var_29;

      Var_29 = mercury__term__context_init_0_f_0();
      {
        BodyGoal_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), BodyGoal_16, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(1), BodyGoal_16, 1) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_4[0]));
        MR_hl_field(MR_mktag(1), BodyGoal_16, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), BodyGoal_16, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
    else
      BodyGoal_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBodyGoal_13, (MR_Integer) 0))));
    switch (PredOrFunc_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncArgTerms_17;
          MR_Word ResultTerm_18;
          MR_Box conv0_ResultTerm_18;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_1[0]), ArgTerms_10, &FuncArgTerms_17, &conv0_ResultTerm_18);
          ResultTerm_18 = ((MR_Word) (conv0_ResultTerm_18));
          parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(MethodName_5);
          if (!((FuncArgTerms_17 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word HeadArg_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FuncArgTerms_17, (MR_Integer) 0))));
            MR_Word TailArgs_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FuncArgTerms_17, (MR_Integer) 1))));
            MR_Box conv1_STATE_VARIABLE_IO_23_47;

            mercury__io__write_string_3_p_0((MR_String) "(");
            parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_1[1]), VarSet_12, (MR_Integer) 0, HeadArg_40, TailArgs_41, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_47);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          mercury__io__write_string_3_p_0((MR_String) " = ");
          succeeded = ((((MR_tag((MR_Word) BodyGoal_16)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), BodyGoal_16, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            {
              MR_Box conv2_STATE_VARIABLE_IO_20;

              parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_1[1]), VarSet_12, (MR_Integer) 0, (MR_Integer) 0, ResultTerm_18, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_20);
            }
          }
          else
          {
            MR_Box conv3_STATE_VARIABLE_IO_32_56;

            parse_tree__parse_tree_out_term__mercury_format_term_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_1[1]), VarSet_12, (MR_Integer) 0, ResultTerm_18, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_32_56);
            mercury__io__write_string_3_p_0((MR_String) " :-\n\t");
            parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_12, (MR_Integer) 1, BodyGoal_16);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(MethodName_5);
          if (!((ArgTerms_10 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word HeadArg_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 0))));
            MR_Word TailArgs_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 1))));
            MR_Box conv4_STATE_VARIABLE_IO_21_81;

            mercury__io__write_string_3_p_0((MR_String) "(");
            parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_1[1]), VarSet_12, (MR_Integer) 0, HeadArg_74, TailArgs_75, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_21_81);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          succeeded = ((((MR_tag((MR_Word) BodyGoal_16)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), BodyGoal_16, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
          }
          if (!(succeeded))
          {
            mercury__io__write_string_3_p_0((MR_String) " :-\n\t");
            parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_12, (MR_Integer) 1, BodyGoal_16);
          }
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_item_clause_4_p_0(
  MR_Word Info_5,
  MR_Word ItemClause_6)
{
  {
    MR_bool succeeded;
    MR_Word PredName0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_6, (MR_Integer) 0))));
    MR_Word PredOrFunc_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemClause_6, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgTerms_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_6, (MR_Integer) 2))));
    MR_Word VarSet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_6, (MR_Integer) 4))));
    MR_Word MaybeBodyGoal_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_6, (MR_Integer) 5))));
    MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClause_6, (MR_Integer) 6))));
    MR_Word BodyGoal_16;
    MR_Word PredName_17;
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemClause_6, (MR_Integer) 1)));

    if (((MR_tag((MR_Word) MaybeBodyGoal_13)) == (MR_Integer) 0))
    {
      MR_Word Var_33;

      Var_33 = mercury__term__context_init_0_f_0();
      {
        BodyGoal_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), BodyGoal_16, 0) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(1), BodyGoal_16, 1) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_4[0]));
        MR_hl_field(MR_mktag(1), BodyGoal_16, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), BodyGoal_16, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
    else
      BodyGoal_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBodyGoal_13, (MR_Integer) 0))));
    parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(Info_5, PredName0_8, &PredName_17);
    parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(Info_5, Context_14);
    switch (PredOrFunc_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncArgTerms_18;
          MR_Word ResultTerm_19;
          MR_Box conv0_ResultTerm_19;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_1[0]), ArgTerms_10, &FuncArgTerms_18, &conv0_ResultTerm_19);
          ResultTerm_19 = ((MR_Word) (conv0_ResultTerm_19));
          parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(PredName_17);
          if (!((FuncArgTerms_18 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word HeadArg_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FuncArgTerms_18, (MR_Integer) 0))));
            MR_Word TailArgs_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FuncArgTerms_18, (MR_Integer) 1))));
            MR_Box conv1_STATE_VARIABLE_IO_23_51;

            mercury__io__write_string_3_p_0((MR_String) "(");
            parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_1[1]), VarSet_12, (MR_Integer) 0, HeadArg_44, TailArgs_45, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_51);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          mercury__io__write_string_3_p_0((MR_String) " = ");
          succeeded = ((((MR_tag((MR_Word) BodyGoal_16)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), BodyGoal_16, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            {
              MR_Box conv2_STATE_VARIABLE_IO_24_24;

              parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_1[1]), VarSet_12, (MR_Integer) 0, (MR_Integer) 0, ResultTerm_19, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_24_24);
            }
          }
          else
          {
            MR_Box conv3_STATE_VARIABLE_IO_32_60;

            parse_tree__parse_tree_out_term__mercury_format_term_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_1[1]), VarSet_12, (MR_Integer) 0, ResultTerm_19, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_32_60);
            mercury__io__write_string_3_p_0((MR_String) " :-\n\t");
            parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_12, (MR_Integer) 1, BodyGoal_16);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(PredName_17);
          if (!((ArgTerms_10 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word HeadArg_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 0))));
            MR_Word TailArgs_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 1))));
            MR_Box conv4_STATE_VARIABLE_IO_21_85;

            mercury__io__write_string_3_p_0((MR_String) "(");
            parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_1[1]), VarSet_12, (MR_Integer) 0, HeadArg_78, TailArgs_79, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_21_85);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          succeeded = ((((MR_tag((MR_Word) BodyGoal_16)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), BodyGoal_16, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
          }
          if (!(succeeded))
          {
            mercury__io__write_string_3_p_0((MR_String) " :-\n\t");
            parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_12, (MR_Integer) 1, BodyGoal_16);
          }
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) ".\n");
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_clause__mercury_output_catch_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_NeedComma_14;

    parse_tree__parse_tree_out_clause__mercury_output_trace_mutable_var_and_comma_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_NeedComma_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_NeedComma_14));
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(
  MR_Word tscc_proc_1_input_1_VarSet_6,
  MR_Integer tscc_proc_1_input_2_Indent_7,
  MR_Word tscc_proc_1_input_3_Goal_8)
{
  {
    MR_Word tscc_proc_2_input_1_VarSet_11;
    MR_Integer tscc_proc_2_input_2_Indent_12;
    MR_Word tscc_proc_2_input_3_Vars_13;
    MR_Word tscc_proc_2_input_4_StateVars_14;
    MR_Word tscc_proc_2_input_5_DotSVars_15;
    MR_Word tscc_proc_2_input_6_ColonSVars_16;
    MR_Word tscc_proc_2_input_7_Goal_17;
    MR_String tscc_proc_2_input_8_Keyword_18;

    // The code for TSCC PROC 1: pred parse_tree.parse_tree_out_clause.mercury_output_goal/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred parse_tree.parse_tree_out_clause.mercury_output_goal/5-0
    ;
    // proc 2 in TSCC: pred parse_tree.parse_tree_out_clause.mercury_output_promise_eqv_solutions_goal/10-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word VarSet_6 = tscc_proc_1_input_1_VarSet_6;
      MR_Integer Indent_7 = tscc_proc_1_input_2_Indent_7;
      MR_Word Goal_8 = tscc_proc_1_input_3_Goal_8;

      switch (MR_tag((MR_Word) Goal_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TermA_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1))));
            MR_Word TermB_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 2))));
            MR_Word Purity_453 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 3))) & (MR_Integer) 3);
            MR_Unsigned packed_args_6 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 3)));

            parse_tree__prog_out__write_purity_prefix_3_p_0(Purity_453);
            parse_tree__parse_tree_out_term__mercury_output_term_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, TermA_81);
            mercury__io__write_string_3_p_0((MR_String) " = ");
            parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, (MR_Integer) 0, TermB_82);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Purity_450 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Goal_8, (MR_Integer) 3))) & (MR_Integer) 3);
            MR_Word Name_451 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_8, (MR_Integer) 1))));
            MR_Word Terms_452 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_8, (MR_Integer) 2))));
            MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), Goal_8, (MR_Integer) 3)));

            parse_tree__prog_out__write_purity_prefix_3_p_0(Purity_450);
            parse_tree__parse_tree_out_clause__mercury_output_call_5_p_0(VarSet_6, Name_451, Terms_452);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubGoalA_442 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_8, (MR_Integer) 1))));
            MR_Word SubGoalB_443 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_8, (MR_Integer) 2))));
            MR_Word next_value_of_tscc_proc_1_input_1_VarSet_6;
            MR_Integer next_value_of_tscc_proc_1_input_2_Indent_7;
            MR_Word next_value_of_tscc_proc_1_input_3_Goal_8;

            parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent_7, SubGoalA_442);
            mercury__io__write_string_3_p_0((MR_String) ",");
            parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_VarSet_6 = VarSet_6;
            next_value_of_tscc_proc_1_input_2_Indent_7 = Indent_7;
            next_value_of_tscc_proc_1_input_3_Goal_8 = SubGoalB_443;
            tscc_proc_1_input_1_VarSet_6 = next_value_of_tscc_proc_1_input_1_VarSet_6;
            tscc_proc_1_input_2_Indent_7 = next_value_of_tscc_proc_1_input_2_Indent_7;
            tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) "true");
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Cond_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 4))));
                MR_Integer Indent1_435;
                MR_Word Vars_436 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Word StateVars_437 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Word Then_438 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 5))));
                MR_Word Else_439 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 6))));

                mercury__io__write_string_3_p_0((MR_String) "(if");
                parse_tree__parse_tree_out_clause__mercury_output_some_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, Vars_436, StateVars_437);
                Indent1_435 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_435);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_435, Cond_71);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) "then");
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_435);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_435, Then_438);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) "else");
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_435);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_435, Else_439);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubGoalA_447 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Word SubGoalB_448 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Integer Indent1_449;

                mercury__io__write_string_3_p_0((MR_String) "(");
                Indent1_449 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_449);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_449, SubGoalA_447);
                parse_tree__parse_tree_out_clause__mercury_output_disj_5_p_0(VarSet_6, Indent_7, SubGoalB_448);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer Indent1_440;
                MR_Word SubGoal_441 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));

                mercury__io__write_string_3_p_0((MR_String) "\\+ (");
                Indent1_440 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_440);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_440, SubGoal_441);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 4:
              {
                mercury__io__write_string_3_p_0((MR_String) "fail");
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoalA_444 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Word SubGoalB_445 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Integer Indent1_446;

                mercury__io__write_string_3_p_0((MR_String) "(");
                Indent1_446 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_446);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_446, SubGoalA_444);
                parse_tree__parse_tree_out_clause__mercury_output_par_conj_5_p_0(VarSet_6, Indent_7, SubGoalB_445);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word QuantType_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                MR_Word QuantVarsKind_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Vars_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Word SubGoal_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 4))));
                MR_Unsigned packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 1)));

                if ((Vars_20 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_VarSet_6 = VarSet_6;
                  MR_Integer next_value_of_tscc_proc_1_input_2_Indent_7 = Indent_7;
                  MR_Word next_value_of_tscc_proc_1_input_3_Goal_8 = SubGoal_21;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_VarSet_6 = next_value_of_tscc_proc_1_input_1_VarSet_6;
                  tscc_proc_1_input_2_Indent_7 = next_value_of_tscc_proc_1_input_2_Indent_7;
                  tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
                  goto top_of_proc_1;
                }
                else
                {
                  MR_Integer Indent1_400;

                  switch (QuantType_17) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "all");
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "some");
                      }
                      break;
                  }
                  mercury__io__write_string_3_p_0((MR_String) "[");
                  switch (QuantVarsKind_18) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, Vars_20);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        parse_tree__mercury_to_mercury__mercury_output_state_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, Vars_20);
                      }
                      break;
                  }
                  mercury__io__write_string_3_p_0((MR_String) "] (");
                  Indent1_400 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                  parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_400);
                  parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_400, SubGoal_21);
                  parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Purity_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))) & (MR_Integer) 3);
                MR_Integer Indent1_415;
                MR_Word SubGoal_416 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2)));

                switch (Purity_31) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "promise_impure (");
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "promise_pure (");
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "promise_semipure (");
                    }
                    break;
                }
                Indent1_415 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_415);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_415, SubGoal_416);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word StateVars_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Word DotSVars_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 4))));
                MR_Word ColonSVars_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 5))));
                MR_Word Vars_403 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Word SubGoal_404 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 6))));
                MR_Word next_value_of_tscc_proc_2_input_1_VarSet_11 = VarSet_6;
                MR_Integer next_value_of_tscc_proc_2_input_2_Indent_12 = Indent_7;
                MR_Word next_value_of_tscc_proc_2_input_3_Vars_13 = Vars_403;
                MR_Word next_value_of_tscc_proc_2_input_4_StateVars_14 = StateVars_25;
                MR_Word next_value_of_tscc_proc_2_input_5_DotSVars_15 = DotSVars_26;
                MR_Word next_value_of_tscc_proc_2_input_6_ColonSVars_16 = ColonSVars_27;
                MR_Word next_value_of_tscc_proc_2_input_7_Goal_17 = SubGoal_404;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_VarSet_11 = next_value_of_tscc_proc_2_input_1_VarSet_11;
                tscc_proc_2_input_2_Indent_12 = next_value_of_tscc_proc_2_input_2_Indent_12;
                tscc_proc_2_input_3_Vars_13 = next_value_of_tscc_proc_2_input_3_Vars_13;
                tscc_proc_2_input_4_StateVars_14 = next_value_of_tscc_proc_2_input_4_StateVars_14;
                tscc_proc_2_input_5_DotSVars_15 = next_value_of_tscc_proc_2_input_5_DotSVars_15;
                tscc_proc_2_input_6_ColonSVars_16 = next_value_of_tscc_proc_2_input_6_ColonSVars_16;
                tscc_proc_2_input_7_Goal_17 = next_value_of_tscc_proc_2_input_7_Goal_17;
                tscc_proc_2_input_8_Keyword_18 = (MR_String) "promise_equivalent_solutions";
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word Vars_405 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Word SubGoal_406 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 6))));
                MR_Word StateVars_407 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Word DotSVars_408 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 4))));
                MR_Word ColonSVars_409 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 5))));
                MR_Word next_value_of_tscc_proc_2_input_1_VarSet_11 = VarSet_6;
                MR_Integer next_value_of_tscc_proc_2_input_2_Indent_12 = Indent_7;
                MR_Word next_value_of_tscc_proc_2_input_3_Vars_13 = Vars_405;
                MR_Word next_value_of_tscc_proc_2_input_4_StateVars_14 = StateVars_407;
                MR_Word next_value_of_tscc_proc_2_input_5_DotSVars_15 = DotSVars_408;
                MR_Word next_value_of_tscc_proc_2_input_6_ColonSVars_16 = ColonSVars_409;
                MR_Word next_value_of_tscc_proc_2_input_7_Goal_17 = SubGoal_406;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_VarSet_11 = next_value_of_tscc_proc_2_input_1_VarSet_11;
                tscc_proc_2_input_2_Indent_12 = next_value_of_tscc_proc_2_input_2_Indent_12;
                tscc_proc_2_input_3_Vars_13 = next_value_of_tscc_proc_2_input_3_Vars_13;
                tscc_proc_2_input_4_StateVars_14 = next_value_of_tscc_proc_2_input_4_StateVars_14;
                tscc_proc_2_input_5_DotSVars_15 = next_value_of_tscc_proc_2_input_5_DotSVars_15;
                tscc_proc_2_input_6_ColonSVars_16 = next_value_of_tscc_proc_2_input_6_ColonSVars_16;
                tscc_proc_2_input_7_Goal_17 = next_value_of_tscc_proc_2_input_7_Goal_17;
                tscc_proc_2_input_8_Keyword_18 = (MR_String) "promise_equivalent_solution_sets";
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word Vars_410 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Word SubGoal_411 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 6))));
                MR_Word StateVars_412 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Word DotSVars_413 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 4))));
                MR_Word ColonSVars_414 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 5))));
                MR_Word next_value_of_tscc_proc_2_input_1_VarSet_11 = VarSet_6;
                MR_Integer next_value_of_tscc_proc_2_input_2_Indent_12 = Indent_7;
                MR_Word next_value_of_tscc_proc_2_input_3_Vars_13 = Vars_410;
                MR_Word next_value_of_tscc_proc_2_input_4_StateVars_14 = StateVars_412;
                MR_Word next_value_of_tscc_proc_2_input_5_DotSVars_15 = DotSVars_413;
                MR_Word next_value_of_tscc_proc_2_input_6_ColonSVars_16 = ColonSVars_414;
                MR_Word next_value_of_tscc_proc_2_input_7_Goal_17 = SubGoal_411;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_VarSet_11 = next_value_of_tscc_proc_2_input_1_VarSet_11;
                tscc_proc_2_input_2_Indent_12 = next_value_of_tscc_proc_2_input_2_Indent_12;
                tscc_proc_2_input_3_Vars_13 = next_value_of_tscc_proc_2_input_3_Vars_13;
                tscc_proc_2_input_4_StateVars_14 = next_value_of_tscc_proc_2_input_4_StateVars_14;
                tscc_proc_2_input_5_DotSVars_15 = next_value_of_tscc_proc_2_input_5_DotSVars_15;
                tscc_proc_2_input_6_ColonSVars_16 = next_value_of_tscc_proc_2_input_6_ColonSVars_16;
                tscc_proc_2_input_7_Goal_17 = next_value_of_tscc_proc_2_input_7_Goal_17;
                tscc_proc_2_input_8_Keyword_18 = (MR_String) "arbitrary";
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word Detism_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))) & (MR_Integer) 7);
                MR_Integer Indent1_417;
                MR_Word SubGoal_418 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Unsigned packed_args_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2)));

                switch (Detism_33) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 4:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_cc_multi");
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_cc_nondet");
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_det");
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_erroneous");
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_failure");
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_multi");
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_nondet");
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_semidet");
                    }
                    break;
                }
                mercury__io__write_string_3_p_0((MR_String) " (");
                Indent1_417 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_417);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_417, SubGoal_418);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Integer Indent1_419;
                MR_Word SubGoal_420 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));

                mercury__io__write_string_3_p_0((MR_String) "require_complete_switch [");
                parse_tree__parse_tree_out_clause__mercury_output_plain_or_dot_var_5_p_0(VarSet_6, (MR_Integer) 0, Var_35);
                mercury__io__write_string_3_p_0((MR_String) "] (");
                Indent1_419 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_419);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_419, SubGoal_420);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Integer Indent1_421;
                MR_Word SubGoal_422 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 4))));
                MR_Word Detism_423 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))) & (MR_Integer) 7);
                MR_Word Var_424 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Unsigned packed_args_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3)));

                switch (Detism_423) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 4:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_cc_multi");
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_cc_nondet");
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_det");
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_erroneous");
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_failure");
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_multi");
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_nondet");
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_semidet");
                    }
                    break;
                }
                mercury__io__write_string_3_p_0((MR_String) " [");
                parse_tree__parse_tree_out_clause__mercury_output_plain_or_dot_var_5_p_0(VarSet_6, (MR_Integer) 0, Var_424);
                mercury__io__write_string_3_p_0((MR_String) "] (");
                Indent1_421 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_421);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_421, SubGoal_422);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word HeadWarning_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word TailWarnings_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Integer Indent1_425;
                MR_Word SubGoal_426 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 4))));
                MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2)));

                mercury__io__write_string_3_p_0((MR_String) "disable_warnings [");
                parse_tree__parse_tree_out_clause__write_goal_warnings_4_p_0(HeadWarning_38, TailWarnings_39);
                mercury__io__write_string_3_p_0((MR_String) "] (");
                Indent1_425 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_425);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_425, SubGoal_426);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word MaybeCompileTime_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Word MaybeRunTime_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Word MaybeIO_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 4))));
                MR_Word MutableVars_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 5))));
                MR_Word STATE_VARIABLE_NeedComma_195_195;
                MR_Word STATE_VARIABLE_NeedComma_199_199;
                MR_Word STATE_VARIABLE_NeedComma_207_207;
                MR_Word Var_208;
                MR_Integer Var_213;
                MR_Integer Var_216;
                MR_Word SubGoal_428 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 6))));
                MR_Box conv2_Var_61;
                MR_Box conv1_STATE_VARIABLE_IO_209_209;

                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) "trace [");
                if ((MaybeCompileTime_53 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_NeedComma_195_195 = (MR_Integer) 0;
                else
                {
                  MR_Word CompileTime_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCompileTime_53, (MR_Integer) 0))));

                  parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(CompileTime_58);
                  STATE_VARIABLE_NeedComma_195_195 = (MR_Integer) 1;
                }
                if ((MaybeRunTime_54 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_NeedComma_199_199 = STATE_VARIABLE_NeedComma_195_195;
                else
                {
                  MR_Word RunTime_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRunTime_54, (MR_Integer) 0))));

                  parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_3_p_0(STATE_VARIABLE_NeedComma_195_195);
                  parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(RunTime_59);
                  STATE_VARIABLE_NeedComma_199_199 = (MR_Integer) 1;
                }
                if ((MaybeIO_55 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_NeedComma_207_207 = STATE_VARIABLE_NeedComma_199_199;
                else
                {
                  MR_Word IOStateVar_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO_55, (MR_Integer) 0))));

                  parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_3_p_0(STATE_VARIABLE_NeedComma_199_199);
                  mercury__io__write_string_3_p_0((MR_String) "io(!");
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, IOStateVar_60);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                  STATE_VARIABLE_NeedComma_207_207 = (MR_Integer) 1;
                }
                {
                  Var_208 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_208, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]));
                  MR_hl_field(MR_mktag(0), Var_208, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_208, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_208, 3) = ((MR_Box) (VarSet_6));
                  MR_hl_field(MR_mktag(0), Var_208, 4) = ((MR_Box) ((MR_Integer) 0));
                }
                mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_208, MutableVars_56, ((MR_Box) (STATE_VARIABLE_NeedComma_207_207)), &conv2_Var_61, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_209_209);
                mercury__io__write_string_3_p_0((MR_String) "]");
                Var_213 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Var_213);
                Var_216 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Var_216, SubGoal_428);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word Outer_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Word Inner_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Word MainGoal_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 5))));
                MR_Word OrElseGoals_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 6))));
                MR_Word Var_250;
                MR_Integer Indent1_427;

                mercury__io__write_string_3_p_0((MR_String) "atomic [outer(");
                if (((MR_tag((MR_Word) Outer_41)) == (MR_Integer) 0))
                {
                  MR_Word OVar_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_41, (MR_Integer) 0))));

                  mercury__io__write_string_3_p_0((MR_String) "!");
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, OVar_46);
                }
                else
                {
                  MR_Word OuterDI_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Outer_41, (MR_Integer) 0))));
                  MR_Word OuterUO_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Outer_41, (MR_Integer) 1))));

                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, OuterDI_47);
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, OuterUO_48);
                }
                mercury__io__write_string_3_p_0((MR_String) "), inner(");
                if (((MR_tag((MR_Word) Inner_42)) == (MR_Integer) 0))
                {
                  MR_Word IVar_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_42, (MR_Integer) 0))));

                  mercury__io__write_string_3_p_0((MR_String) "!");
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, IVar_49);
                }
                else
                {
                  MR_Word InnerDI_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner_42, (MR_Integer) 0))));
                  MR_Word InnerUO_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner_42, (MR_Integer) 1))));

                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, InnerDI_50);
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, InnerUO_51);
                }
                mercury__io__write_string_3_p_0((MR_String) ")] (");
                Indent1_427 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_427);
                {
                  Var_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_250, 0) = ((MR_Box) (MainGoal_44));
                  MR_hl_field(MR_mktag(1), Var_250, 1) = ((MR_Box) (OrElseGoals_45));
                }
                parse_tree__parse_tree_out_clause__mercury_output_orelse_goals_5_p_0(VarSet_6, Indent1_427, Var_250);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word Then_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 4))));
                MR_Word MaybeElse_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 5))));
                MR_Word Catches_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 6))));
                MR_Word MaybeCatchAny_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 7))));
                MR_Word Var_175;
                MR_Integer Indent1_431;
                MR_Word SubGoal_432 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Word MaybeIO_433 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Box conv3_STATE_VARIABLE_IO_176_176;

                mercury__io__write_string_3_p_0((MR_String) "(try [");
                if (!((MaybeIO_433 == (MR_Word) ((MR_Unsigned) 0U))))
                {
                  MR_Word IOStateVar_429 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO_433, (MR_Integer) 0))));

                  mercury__io__write_string_3_p_0((MR_String) "io(!");
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, IOStateVar_429);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                mercury__io__write_string_3_p_0((MR_String) "] (");
                Indent1_431 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_431);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_431, SubGoal_432);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) "then");
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_431);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_431, Then_63);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                if (!((MaybeElse_64 == (MR_Word) ((MR_Unsigned) 0U))))
                {
                  MR_Word Else_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse_64, (MR_Integer) 0))));

                  mercury__io__write_string_3_p_0((MR_String) "else");
                  parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_431);
                  parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_431, Else_67);
                }
                {
                  Var_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_175, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), Var_175, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_175, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_175, 3) = ((MR_Box) (VarSet_6));
                  MR_hl_field(MR_mktag(0), Var_175, 4) = ((MR_Box) (Indent_7));
                }
                mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_175, Catches_65, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_176_176);
                if (!((MaybeCatchAny_66 == (MR_Word) ((MR_Unsigned) 0U))))
                {
                  MR_Word CatchAnyVar_68;
                  MR_Word CatchAnyGoal_69;
                  MR_Word Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatchAny_66, (MR_Integer) 0))));

                  CatchAnyVar_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_177, (MR_Integer) 0))));
                  CatchAnyGoal_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_177, (MR_Integer) 1))));
                  mercury__io__write_string_3_p_0((MR_String) "catch_any ");
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, CatchAnyVar_68);
                  mercury__io__write_string_3_p_0((MR_String) " ->");
                  parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_431);
                  parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_431, CatchAnyGoal_69);
                }
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Word SubGoalA_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Word SubGoalB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Integer Indent1_15 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);

                mercury__io__write_string_3_p_0((MR_String) "(");
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_15);
                parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(VarSet_6, Indent1_15, SubGoalA_13);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) "=>");
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_15);
                parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(VarSet_6, Indent1_15, SubGoalB_14);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 19:
              {
                MR_Word SubGoalA_397 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Word SubGoalB_398 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Integer Indent1_399 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);

                mercury__io__write_string_3_p_0((MR_String) "(");
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_399);
                parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(VarSet_6, Indent1_399, SubGoalA_397);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) "<=>");
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_399);
                parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(VarSet_6, Indent1_399, SubGoalB_398);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 20:
              {
                MR_String Name_77 = ((MR_String) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Word Terms_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Word Var_97;

                mercury__io__write_string_3_p_0((MR_String) "event ");
                {
                  Var_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (Name_77));
                }
                parse_tree__parse_tree_out_clause__mercury_output_call_5_p_0(VarSet_6, Var_97, Terms_78);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word VarSet_11 = tscc_proc_2_input_1_VarSet_11;
      MR_Integer Indent_12 = tscc_proc_2_input_2_Indent_12;
      MR_Word Vars_13 = tscc_proc_2_input_3_Vars_13;
      MR_Word StateVars_14 = tscc_proc_2_input_4_StateVars_14;
      MR_Word DotSVars_15 = tscc_proc_2_input_5_DotSVars_15;
      MR_Word ColonSVars_16 = tscc_proc_2_input_6_ColonSVars_16;
      MR_Word Goal_17 = tscc_proc_2_input_7_Goal_17;
      MR_String Keyword_18 = tscc_proc_2_input_8_Keyword_18;
      MR_bool succeeded = (Vars_13 == (MR_Word) ((MR_Unsigned) 0U));

      if (succeeded)
      {
        succeeded = (StateVars_14 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (DotSVars_15 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (ColonSVars_16 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_1_input_1_VarSet_6 = VarSet_11;
        MR_Integer next_value_of_tscc_proc_1_input_2_Indent_7 = Indent_12;
        MR_Word next_value_of_tscc_proc_1_input_3_Goal_8 = Goal_17;

        // direct tailcall eliminated
        ;
        tscc_proc_1_input_1_VarSet_6 = next_value_of_tscc_proc_1_input_1_VarSet_6;
        tscc_proc_1_input_2_Indent_7 = next_value_of_tscc_proc_1_input_2_Indent_7;
        tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
        goto top_of_proc_1;
      }
      else
      {
        MR_Integer Indent1_38;

        mercury__io__write_string_3_p_0(Keyword_18);
        mercury__io__write_string_3_p_0((MR_String) " [");
        parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_11, (MR_Integer) 0, Vars_13);
        succeeded = ((MR_tag((MR_Word) Vars_13)) == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) StateVars_14)) == (MR_Integer) 1);
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
        parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_6_p_0(VarSet_11, (MR_Integer) 0, (MR_String) "!", StateVars_14);
        succeeded = ((MR_tag((MR_Word) Vars_13)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          succeeded = ((MR_tag((MR_Word) StateVars_14)) == (MR_Integer) 1);
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) DotSVars_15)) == (MR_Integer) 1);
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
        parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_6_p_0(VarSet_11, (MR_Integer) 0, (MR_String) "!.", DotSVars_15);
        succeeded = ((MR_tag((MR_Word) Vars_13)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          succeeded = ((MR_tag((MR_Word) StateVars_14)) == (MR_Integer) 1);
          if (succeeded)
          {
          }
          if (!(succeeded))
          {
            succeeded = ((MR_tag((MR_Word) DotSVars_15)) == (MR_Integer) 1);
            if (succeeded)
            {
            }
          }
        }
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) ColonSVars_16)) == (MR_Integer) 1);
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
        parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_6_p_0(VarSet_11, (MR_Integer) 0, (MR_String) "!:", ColonSVars_16);
        mercury__io__write_string_3_p_0((MR_String) "] (");
        Indent1_38 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) (MR_Integer) 1);
        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_38);
        parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_11, Indent1_38, Goal_17);
        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_12);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_promise_eqv_solutions_goal_10_p_0(
  MR_Word tscc_proc_2_input_1_VarSet_11,
  MR_Integer tscc_proc_2_input_2_Indent_12,
  MR_Word tscc_proc_2_input_3_Vars_13,
  MR_Word tscc_proc_2_input_4_StateVars_14,
  MR_Word tscc_proc_2_input_5_DotSVars_15,
  MR_Word tscc_proc_2_input_6_ColonSVars_16,
  MR_Word tscc_proc_2_input_7_Goal_17,
  MR_String tscc_proc_2_input_8_Keyword_18)
{
  {
    MR_Word tscc_proc_1_input_1_VarSet_6;
    MR_Integer tscc_proc_1_input_2_Indent_7;
    MR_Word tscc_proc_1_input_3_Goal_8;

    // The code for TSCC PROC 2: pred parse_tree.parse_tree_out_clause.mercury_output_promise_eqv_solutions_goal/10-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred parse_tree.parse_tree_out_clause.mercury_output_goal/5-0
    ;
    // proc 2 in TSCC: pred parse_tree.parse_tree_out_clause.mercury_output_promise_eqv_solutions_goal/10-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word VarSet_6 = tscc_proc_1_input_1_VarSet_6;
      MR_Integer Indent_7 = tscc_proc_1_input_2_Indent_7;
      MR_Word Goal_8 = tscc_proc_1_input_3_Goal_8;

      switch (MR_tag((MR_Word) Goal_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TermA_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1))));
            MR_Word TermB_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 2))));
            MR_Word Purity_453 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 3))) & (MR_Integer) 3);
            MR_Unsigned packed_args_6 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 3)));

            parse_tree__prog_out__write_purity_prefix_3_p_0(Purity_453);
            parse_tree__parse_tree_out_term__mercury_output_term_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, TermA_81);
            mercury__io__write_string_3_p_0((MR_String) " = ");
            parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, (MR_Integer) 0, TermB_82);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Purity_450 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Goal_8, (MR_Integer) 3))) & (MR_Integer) 3);
            MR_Word Name_451 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_8, (MR_Integer) 1))));
            MR_Word Terms_452 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_8, (MR_Integer) 2))));
            MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), Goal_8, (MR_Integer) 3)));

            parse_tree__prog_out__write_purity_prefix_3_p_0(Purity_450);
            parse_tree__parse_tree_out_clause__mercury_output_call_5_p_0(VarSet_6, Name_451, Terms_452);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubGoalA_442 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_8, (MR_Integer) 1))));
            MR_Word SubGoalB_443 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_8, (MR_Integer) 2))));
            MR_Word next_value_of_tscc_proc_1_input_1_VarSet_6;
            MR_Integer next_value_of_tscc_proc_1_input_2_Indent_7;
            MR_Word next_value_of_tscc_proc_1_input_3_Goal_8;

            parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent_7, SubGoalA_442);
            mercury__io__write_string_3_p_0((MR_String) ",");
            parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_VarSet_6 = VarSet_6;
            next_value_of_tscc_proc_1_input_2_Indent_7 = Indent_7;
            next_value_of_tscc_proc_1_input_3_Goal_8 = SubGoalB_443;
            tscc_proc_1_input_1_VarSet_6 = next_value_of_tscc_proc_1_input_1_VarSet_6;
            tscc_proc_1_input_2_Indent_7 = next_value_of_tscc_proc_1_input_2_Indent_7;
            tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) "true");
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Cond_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 4))));
                MR_Integer Indent1_435;
                MR_Word Vars_436 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Word StateVars_437 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Word Then_438 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 5))));
                MR_Word Else_439 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 6))));

                mercury__io__write_string_3_p_0((MR_String) "(if");
                parse_tree__parse_tree_out_clause__mercury_output_some_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, Vars_436, StateVars_437);
                Indent1_435 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_435);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_435, Cond_71);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) "then");
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_435);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_435, Then_438);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) "else");
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_435);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_435, Else_439);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubGoalA_447 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Word SubGoalB_448 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Integer Indent1_449;

                mercury__io__write_string_3_p_0((MR_String) "(");
                Indent1_449 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_449);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_449, SubGoalA_447);
                parse_tree__parse_tree_out_clause__mercury_output_disj_5_p_0(VarSet_6, Indent_7, SubGoalB_448);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer Indent1_440;
                MR_Word SubGoal_441 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));

                mercury__io__write_string_3_p_0((MR_String) "\\+ (");
                Indent1_440 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_440);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_440, SubGoal_441);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 4:
              {
                mercury__io__write_string_3_p_0((MR_String) "fail");
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoalA_444 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Word SubGoalB_445 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Integer Indent1_446;

                mercury__io__write_string_3_p_0((MR_String) "(");
                Indent1_446 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_446);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_446, SubGoalA_444);
                parse_tree__parse_tree_out_clause__mercury_output_par_conj_5_p_0(VarSet_6, Indent_7, SubGoalB_445);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word QuantType_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 1))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                MR_Word QuantVarsKind_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Vars_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Word SubGoal_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 4))));
                MR_Unsigned packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 1)));

                if ((Vars_20 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_VarSet_6 = VarSet_6;
                  MR_Integer next_value_of_tscc_proc_1_input_2_Indent_7 = Indent_7;
                  MR_Word next_value_of_tscc_proc_1_input_3_Goal_8 = SubGoal_21;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_VarSet_6 = next_value_of_tscc_proc_1_input_1_VarSet_6;
                  tscc_proc_1_input_2_Indent_7 = next_value_of_tscc_proc_1_input_2_Indent_7;
                  tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
                  goto top_of_proc_1;
                }
                else
                {
                  MR_Integer Indent1_400;

                  switch (QuantType_17) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "all");
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "some");
                      }
                      break;
                  }
                  mercury__io__write_string_3_p_0((MR_String) "[");
                  switch (QuantVarsKind_18) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, Vars_20);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        parse_tree__mercury_to_mercury__mercury_output_state_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, Vars_20);
                      }
                      break;
                  }
                  mercury__io__write_string_3_p_0((MR_String) "] (");
                  Indent1_400 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                  parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_400);
                  parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_400, SubGoal_21);
                  parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Purity_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))) & (MR_Integer) 3);
                MR_Integer Indent1_415;
                MR_Word SubGoal_416 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2)));

                switch (Purity_31) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "promise_impure (");
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "promise_pure (");
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "promise_semipure (");
                    }
                    break;
                }
                Indent1_415 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_415);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_415, SubGoal_416);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word StateVars_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Word DotSVars_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 4))));
                MR_Word ColonSVars_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 5))));
                MR_Word Vars_403 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Word SubGoal_404 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 6))));
                MR_Word next_value_of_tscc_proc_2_input_1_VarSet_11 = VarSet_6;
                MR_Integer next_value_of_tscc_proc_2_input_2_Indent_12 = Indent_7;
                MR_Word next_value_of_tscc_proc_2_input_3_Vars_13 = Vars_403;
                MR_Word next_value_of_tscc_proc_2_input_4_StateVars_14 = StateVars_25;
                MR_Word next_value_of_tscc_proc_2_input_5_DotSVars_15 = DotSVars_26;
                MR_Word next_value_of_tscc_proc_2_input_6_ColonSVars_16 = ColonSVars_27;
                MR_Word next_value_of_tscc_proc_2_input_7_Goal_17 = SubGoal_404;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_VarSet_11 = next_value_of_tscc_proc_2_input_1_VarSet_11;
                tscc_proc_2_input_2_Indent_12 = next_value_of_tscc_proc_2_input_2_Indent_12;
                tscc_proc_2_input_3_Vars_13 = next_value_of_tscc_proc_2_input_3_Vars_13;
                tscc_proc_2_input_4_StateVars_14 = next_value_of_tscc_proc_2_input_4_StateVars_14;
                tscc_proc_2_input_5_DotSVars_15 = next_value_of_tscc_proc_2_input_5_DotSVars_15;
                tscc_proc_2_input_6_ColonSVars_16 = next_value_of_tscc_proc_2_input_6_ColonSVars_16;
                tscc_proc_2_input_7_Goal_17 = next_value_of_tscc_proc_2_input_7_Goal_17;
                tscc_proc_2_input_8_Keyword_18 = (MR_String) "promise_equivalent_solutions";
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word Vars_405 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Word SubGoal_406 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 6))));
                MR_Word StateVars_407 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Word DotSVars_408 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 4))));
                MR_Word ColonSVars_409 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 5))));
                MR_Word next_value_of_tscc_proc_2_input_1_VarSet_11 = VarSet_6;
                MR_Integer next_value_of_tscc_proc_2_input_2_Indent_12 = Indent_7;
                MR_Word next_value_of_tscc_proc_2_input_3_Vars_13 = Vars_405;
                MR_Word next_value_of_tscc_proc_2_input_4_StateVars_14 = StateVars_407;
                MR_Word next_value_of_tscc_proc_2_input_5_DotSVars_15 = DotSVars_408;
                MR_Word next_value_of_tscc_proc_2_input_6_ColonSVars_16 = ColonSVars_409;
                MR_Word next_value_of_tscc_proc_2_input_7_Goal_17 = SubGoal_406;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_VarSet_11 = next_value_of_tscc_proc_2_input_1_VarSet_11;
                tscc_proc_2_input_2_Indent_12 = next_value_of_tscc_proc_2_input_2_Indent_12;
                tscc_proc_2_input_3_Vars_13 = next_value_of_tscc_proc_2_input_3_Vars_13;
                tscc_proc_2_input_4_StateVars_14 = next_value_of_tscc_proc_2_input_4_StateVars_14;
                tscc_proc_2_input_5_DotSVars_15 = next_value_of_tscc_proc_2_input_5_DotSVars_15;
                tscc_proc_2_input_6_ColonSVars_16 = next_value_of_tscc_proc_2_input_6_ColonSVars_16;
                tscc_proc_2_input_7_Goal_17 = next_value_of_tscc_proc_2_input_7_Goal_17;
                tscc_proc_2_input_8_Keyword_18 = (MR_String) "promise_equivalent_solution_sets";
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word Vars_410 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Word SubGoal_411 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 6))));
                MR_Word StateVars_412 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Word DotSVars_413 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 4))));
                MR_Word ColonSVars_414 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 5))));
                MR_Word next_value_of_tscc_proc_2_input_1_VarSet_11 = VarSet_6;
                MR_Integer next_value_of_tscc_proc_2_input_2_Indent_12 = Indent_7;
                MR_Word next_value_of_tscc_proc_2_input_3_Vars_13 = Vars_410;
                MR_Word next_value_of_tscc_proc_2_input_4_StateVars_14 = StateVars_412;
                MR_Word next_value_of_tscc_proc_2_input_5_DotSVars_15 = DotSVars_413;
                MR_Word next_value_of_tscc_proc_2_input_6_ColonSVars_16 = ColonSVars_414;
                MR_Word next_value_of_tscc_proc_2_input_7_Goal_17 = SubGoal_411;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_VarSet_11 = next_value_of_tscc_proc_2_input_1_VarSet_11;
                tscc_proc_2_input_2_Indent_12 = next_value_of_tscc_proc_2_input_2_Indent_12;
                tscc_proc_2_input_3_Vars_13 = next_value_of_tscc_proc_2_input_3_Vars_13;
                tscc_proc_2_input_4_StateVars_14 = next_value_of_tscc_proc_2_input_4_StateVars_14;
                tscc_proc_2_input_5_DotSVars_15 = next_value_of_tscc_proc_2_input_5_DotSVars_15;
                tscc_proc_2_input_6_ColonSVars_16 = next_value_of_tscc_proc_2_input_6_ColonSVars_16;
                tscc_proc_2_input_7_Goal_17 = next_value_of_tscc_proc_2_input_7_Goal_17;
                tscc_proc_2_input_8_Keyword_18 = (MR_String) "arbitrary";
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word Detism_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))) & (MR_Integer) 7);
                MR_Integer Indent1_417;
                MR_Word SubGoal_418 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Unsigned packed_args_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2)));

                switch (Detism_33) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 4:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_cc_multi");
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_cc_nondet");
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_det");
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_erroneous");
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_failure");
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_multi");
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_nondet");
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_semidet");
                    }
                    break;
                }
                mercury__io__write_string_3_p_0((MR_String) " (");
                Indent1_417 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_417);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_417, SubGoal_418);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Integer Indent1_419;
                MR_Word SubGoal_420 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));

                mercury__io__write_string_3_p_0((MR_String) "require_complete_switch [");
                parse_tree__parse_tree_out_clause__mercury_output_plain_or_dot_var_5_p_0(VarSet_6, (MR_Integer) 0, Var_35);
                mercury__io__write_string_3_p_0((MR_String) "] (");
                Indent1_419 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_419);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_419, SubGoal_420);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Integer Indent1_421;
                MR_Word SubGoal_422 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 4))));
                MR_Word Detism_423 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))) & (MR_Integer) 7);
                MR_Word Var_424 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Unsigned packed_args_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3)));

                switch (Detism_423) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 4:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_cc_multi");
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_cc_nondet");
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_det");
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_erroneous");
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_failure");
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_multi");
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_nondet");
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_semidet");
                    }
                    break;
                }
                mercury__io__write_string_3_p_0((MR_String) " [");
                parse_tree__parse_tree_out_clause__mercury_output_plain_or_dot_var_5_p_0(VarSet_6, (MR_Integer) 0, Var_424);
                mercury__io__write_string_3_p_0((MR_String) "] (");
                Indent1_421 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_421);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_421, SubGoal_422);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word HeadWarning_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word TailWarnings_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Integer Indent1_425;
                MR_Word SubGoal_426 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 4))));
                MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2)));

                mercury__io__write_string_3_p_0((MR_String) "disable_warnings [");
                parse_tree__parse_tree_out_clause__write_goal_warnings_4_p_0(HeadWarning_38, TailWarnings_39);
                mercury__io__write_string_3_p_0((MR_String) "] (");
                Indent1_425 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_425);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_425, SubGoal_426);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word MaybeCompileTime_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Word MaybeRunTime_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Word MaybeIO_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 4))));
                MR_Word MutableVars_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 5))));
                MR_Word STATE_VARIABLE_NeedComma_195_195;
                MR_Word STATE_VARIABLE_NeedComma_199_199;
                MR_Word STATE_VARIABLE_NeedComma_207_207;
                MR_Word Var_208;
                MR_Integer Var_213;
                MR_Integer Var_216;
                MR_Word SubGoal_428 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 6))));
                MR_Box conv2_Var_61;
                MR_Box conv1_STATE_VARIABLE_IO_209_209;

                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) "trace [");
                if ((MaybeCompileTime_53 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_NeedComma_195_195 = (MR_Integer) 0;
                else
                {
                  MR_Word CompileTime_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCompileTime_53, (MR_Integer) 0))));

                  parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(CompileTime_58);
                  STATE_VARIABLE_NeedComma_195_195 = (MR_Integer) 1;
                }
                if ((MaybeRunTime_54 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_NeedComma_199_199 = STATE_VARIABLE_NeedComma_195_195;
                else
                {
                  MR_Word RunTime_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRunTime_54, (MR_Integer) 0))));

                  parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_3_p_0(STATE_VARIABLE_NeedComma_195_195);
                  parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(RunTime_59);
                  STATE_VARIABLE_NeedComma_199_199 = (MR_Integer) 1;
                }
                if ((MaybeIO_55 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_NeedComma_207_207 = STATE_VARIABLE_NeedComma_199_199;
                else
                {
                  MR_Word IOStateVar_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO_55, (MR_Integer) 0))));

                  parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_3_p_0(STATE_VARIABLE_NeedComma_199_199);
                  mercury__io__write_string_3_p_0((MR_String) "io(!");
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, IOStateVar_60);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                  STATE_VARIABLE_NeedComma_207_207 = (MR_Integer) 1;
                }
                {
                  Var_208 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_208, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]));
                  MR_hl_field(MR_mktag(0), Var_208, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_208, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_208, 3) = ((MR_Box) (VarSet_6));
                  MR_hl_field(MR_mktag(0), Var_208, 4) = ((MR_Box) ((MR_Integer) 0));
                }
                mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_208, MutableVars_56, ((MR_Box) (STATE_VARIABLE_NeedComma_207_207)), &conv2_Var_61, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_209_209);
                mercury__io__write_string_3_p_0((MR_String) "]");
                Var_213 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Var_213);
                Var_216 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Var_216, SubGoal_428);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word Outer_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Word Inner_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Word MainGoal_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 5))));
                MR_Word OrElseGoals_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 6))));
                MR_Word Var_250;
                MR_Integer Indent1_427;

                mercury__io__write_string_3_p_0((MR_String) "atomic [outer(");
                if (((MR_tag((MR_Word) Outer_41)) == (MR_Integer) 0))
                {
                  MR_Word OVar_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_41, (MR_Integer) 0))));

                  mercury__io__write_string_3_p_0((MR_String) "!");
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, OVar_46);
                }
                else
                {
                  MR_Word OuterDI_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Outer_41, (MR_Integer) 0))));
                  MR_Word OuterUO_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Outer_41, (MR_Integer) 1))));

                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, OuterDI_47);
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, OuterUO_48);
                }
                mercury__io__write_string_3_p_0((MR_String) "), inner(");
                if (((MR_tag((MR_Word) Inner_42)) == (MR_Integer) 0))
                {
                  MR_Word IVar_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_42, (MR_Integer) 0))));

                  mercury__io__write_string_3_p_0((MR_String) "!");
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, IVar_49);
                }
                else
                {
                  MR_Word InnerDI_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner_42, (MR_Integer) 0))));
                  MR_Word InnerUO_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner_42, (MR_Integer) 1))));

                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, InnerDI_50);
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, InnerUO_51);
                }
                mercury__io__write_string_3_p_0((MR_String) ")] (");
                Indent1_427 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_427);
                {
                  Var_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_250, 0) = ((MR_Box) (MainGoal_44));
                  MR_hl_field(MR_mktag(1), Var_250, 1) = ((MR_Box) (OrElseGoals_45));
                }
                parse_tree__parse_tree_out_clause__mercury_output_orelse_goals_5_p_0(VarSet_6, Indent1_427, Var_250);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word Then_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 4))));
                MR_Word MaybeElse_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 5))));
                MR_Word Catches_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 6))));
                MR_Word MaybeCatchAny_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 7))));
                MR_Word Var_175;
                MR_Integer Indent1_431;
                MR_Word SubGoal_432 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Word MaybeIO_433 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Box conv3_STATE_VARIABLE_IO_176_176;

                mercury__io__write_string_3_p_0((MR_String) "(try [");
                if (!((MaybeIO_433 == (MR_Word) ((MR_Unsigned) 0U))))
                {
                  MR_Word IOStateVar_429 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO_433, (MR_Integer) 0))));

                  mercury__io__write_string_3_p_0((MR_String) "io(!");
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, IOStateVar_429);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                mercury__io__write_string_3_p_0((MR_String) "] (");
                Indent1_431 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_431);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_431, SubGoal_432);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) "then");
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_431);
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_431, Then_63);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                if (!((MaybeElse_64 == (MR_Word) ((MR_Unsigned) 0U))))
                {
                  MR_Word Else_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse_64, (MR_Integer) 0))));

                  mercury__io__write_string_3_p_0((MR_String) "else");
                  parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_431);
                  parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_431, Else_67);
                }
                {
                  Var_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_175, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), Var_175, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_175, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_175, 3) = ((MR_Box) (VarSet_6));
                  MR_hl_field(MR_mktag(0), Var_175, 4) = ((MR_Box) (Indent_7));
                }
                mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_175, Catches_65, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_176_176);
                if (!((MaybeCatchAny_66 == (MR_Word) ((MR_Unsigned) 0U))))
                {
                  MR_Word CatchAnyVar_68;
                  MR_Word CatchAnyGoal_69;
                  MR_Word Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatchAny_66, (MR_Integer) 0))));

                  CatchAnyVar_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_177, (MR_Integer) 0))));
                  CatchAnyGoal_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_177, (MR_Integer) 1))));
                  mercury__io__write_string_3_p_0((MR_String) "catch_any ");
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, CatchAnyVar_68);
                  mercury__io__write_string_3_p_0((MR_String) " ->");
                  parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_431);
                  parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_431, CatchAnyGoal_69);
                }
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Word SubGoalA_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Word SubGoalB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Integer Indent1_15 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);

                mercury__io__write_string_3_p_0((MR_String) "(");
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_15);
                parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(VarSet_6, Indent1_15, SubGoalA_13);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) "=>");
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_15);
                parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(VarSet_6, Indent1_15, SubGoalB_14);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 19:
              {
                MR_Word SubGoalA_397 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Word SubGoalB_398 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Integer Indent1_399 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);

                mercury__io__write_string_3_p_0((MR_String) "(");
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_399);
                parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(VarSet_6, Indent1_399, SubGoalA_397);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) "<=>");
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_399);
                parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(VarSet_6, Indent1_399, SubGoalB_398);
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 20:
              {
                MR_String Name_77 = ((MR_String) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
                MR_Word Terms_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
                MR_Word Var_97;

                mercury__io__write_string_3_p_0((MR_String) "event ");
                {
                  Var_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (Name_77));
                }
                parse_tree__parse_tree_out_clause__mercury_output_call_5_p_0(VarSet_6, Var_97, Terms_78);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word VarSet_11 = tscc_proc_2_input_1_VarSet_11;
      MR_Integer Indent_12 = tscc_proc_2_input_2_Indent_12;
      MR_Word Vars_13 = tscc_proc_2_input_3_Vars_13;
      MR_Word StateVars_14 = tscc_proc_2_input_4_StateVars_14;
      MR_Word DotSVars_15 = tscc_proc_2_input_5_DotSVars_15;
      MR_Word ColonSVars_16 = tscc_proc_2_input_6_ColonSVars_16;
      MR_Word Goal_17 = tscc_proc_2_input_7_Goal_17;
      MR_String Keyword_18 = tscc_proc_2_input_8_Keyword_18;
      MR_bool succeeded = (Vars_13 == (MR_Word) ((MR_Unsigned) 0U));

      if (succeeded)
      {
        succeeded = (StateVars_14 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (DotSVars_15 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (ColonSVars_16 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_1_input_1_VarSet_6 = VarSet_11;
        MR_Integer next_value_of_tscc_proc_1_input_2_Indent_7 = Indent_12;
        MR_Word next_value_of_tscc_proc_1_input_3_Goal_8 = Goal_17;

        // direct tailcall eliminated
        ;
        tscc_proc_1_input_1_VarSet_6 = next_value_of_tscc_proc_1_input_1_VarSet_6;
        tscc_proc_1_input_2_Indent_7 = next_value_of_tscc_proc_1_input_2_Indent_7;
        tscc_proc_1_input_3_Goal_8 = next_value_of_tscc_proc_1_input_3_Goal_8;
        goto top_of_proc_1;
      }
      else
      {
        MR_Integer Indent1_38;

        mercury__io__write_string_3_p_0(Keyword_18);
        mercury__io__write_string_3_p_0((MR_String) " [");
        parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_11, (MR_Integer) 0, Vars_13);
        succeeded = ((MR_tag((MR_Word) Vars_13)) == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) StateVars_14)) == (MR_Integer) 1);
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
        parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_6_p_0(VarSet_11, (MR_Integer) 0, (MR_String) "!", StateVars_14);
        succeeded = ((MR_tag((MR_Word) Vars_13)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          succeeded = ((MR_tag((MR_Word) StateVars_14)) == (MR_Integer) 1);
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) DotSVars_15)) == (MR_Integer) 1);
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
        parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_6_p_0(VarSet_11, (MR_Integer) 0, (MR_String) "!.", DotSVars_15);
        succeeded = ((MR_tag((MR_Word) Vars_13)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          succeeded = ((MR_tag((MR_Word) StateVars_14)) == (MR_Integer) 1);
          if (succeeded)
          {
          }
          if (!(succeeded))
          {
            succeeded = ((MR_tag((MR_Word) DotSVars_15)) == (MR_Integer) 1);
            if (succeeded)
            {
            }
          }
        }
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) ColonSVars_16)) == (MR_Integer) 1);
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
        parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_6_p_0(VarSet_11, (MR_Integer) 0, (MR_String) "!:", ColonSVars_16);
        mercury__io__write_string_3_p_0((MR_String) "] (");
        Indent1_38 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) (MR_Integer) 1);
        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_38);
        parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_11, Indent1_38, Goal_17);
        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_12);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_orelse_goals_5_p_0(
  MR_Word VarSet_6,
  MR_Integer Indent_7,
  MR_Word Goals_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((Goals_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadGoal_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_8, (MR_Integer) 0))));
      MR_Word TailGoals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_8, (MR_Integer) 1))));

      if ((TailGoals_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);

        parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Var_24, HeadGoal_10);
      }
      else
      {
        MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
        MR_Word next_value_of_Goals_8;

        parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Var_16, HeadGoal_10);
        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
        mercury__io__write_string_3_p_0((MR_String) "orelse");
        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
        // direct tailcall eliminated
        ;
        next_value_of_Goals_8 = TailGoals_11;
        Goals_8 = next_value_of_Goals_8;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_par_conj_5_p_0(
  MR_Word VarSet_6,
  MR_Integer Indent_7,
  MR_Word Goal_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Indent1_10;
    MR_Word SubGoalA_12;
    MR_Word SubGoalB_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "&");
    Indent1_10 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_10);
    succeeded = ((((MR_tag((MR_Word) Goal_8)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 0))) == (MR_Integer) 5)));
    if (succeeded)
    {
      SubGoalA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
      SubGoalB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
      {
        MR_Word next_value_of_Goal_8;

        parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_10, SubGoalA_12);
        // direct tailcall eliminated
        ;
        next_value_of_Goal_8 = SubGoalB_13;
        Goal_8 = next_value_of_Goal_8;
        continue;
      }
    }
    else
      parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_10, Goal_8);
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_disj_5_p_0(
  MR_Word VarSet_6,
  MR_Integer Indent_7,
  MR_Word Goal_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Indent1_10;
    MR_Word SubGoalA_12;
    MR_Word SubGoalB_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) ";");
    Indent1_10 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_10);
    succeeded = ((((MR_tag((MR_Word) Goal_8)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 0))) == (MR_Integer) 2)));
    if (succeeded)
    {
      SubGoalA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 2))));
      SubGoalB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 3))));
      {
        MR_Word next_value_of_Goal_8;

        parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_10, SubGoalA_12);
        // direct tailcall eliminated
        ;
        next_value_of_Goal_8 = SubGoalB_13;
        Goal_8 = next_value_of_Goal_8;
        continue;
      }
    }
    else
      parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_10, Goal_8);
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(
  MR_Word VarSet_6,
  MR_Integer Indent_7,
  MR_Word Goal_8)
{
  switch (MR_tag((MR_Word) Goal_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent_7, Goal_8);
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Indent1_105;

        mercury__io__write_string_3_p_0((MR_String) "(");
        Indent1_105 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_105);
        parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_105, Goal_8);
        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Goal_8, (MR_Integer) 0)))) {
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
          parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent_7, Goal_8);
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
            MR_Integer Indent1_105;

            mercury__io__write_string_3_p_0((MR_String) "(");
            Indent1_105 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
            parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent1_105);
            parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(VarSet_6, Indent1_105, Goal_8);
            parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(Indent_7);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(
  MR_Word TraceExpr_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TraceExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Base_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceExpr_6, (MR_Integer) 0))));

          parse_tree__parse_tree_out_clause__mercury_output_trace_compiletime_3_p_0(Base_8);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TraceExprA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TraceExpr_6, (MR_Integer) 0))));

          mercury__io__write_string_3_p_0((MR_String) "not(");
          parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(TraceExprA_9);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TraceExpr_6, (MR_Integer) 2))));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TraceExpr_6, (MR_Integer) 1))));
          MR_Word Var_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), TraceExpr_6, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), TraceExpr_6, (MR_Integer) 0)));

          switch (Var_39) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word next_value_of_TraceExpr_6;

                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(Var_38);
                mercury__io__write_string_3_p_0((MR_String) " and ");
                // direct tailcall eliminated
                ;
                next_value_of_TraceExpr_6 = Var_37;
                TraceExpr_6 = next_value_of_TraceExpr_6;
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(Var_38);
                mercury__io__write_string_3_p_0((MR_String) ") or (");
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(Var_37);
                mercury__io__write_string_3_p_0((MR_String) ")");
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
parse_tree__parse_tree_out_clause__mercury_output_trace_compiletime_3_p_0(
  MR_Word CompileTime_4)
{
  switch (MR_tag((MR_Word) CompileTime_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String FlagName_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), CompileTime_4, (MR_Integer) 0))));

        mercury__io__write_string_3_p_0((MR_String) "flag(");
        mercury__term_io__quote_string_3_p_0(FlagName_6);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Grade_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), CompileTime_4, (MR_Integer) 0))) & (MR_Integer) 15);
        MR_String GradeName_8;
        MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), CompileTime_4, (MR_Integer) 0)));

        parse_tree__prog_data__parse_trace_grade_name_2_p_1(&GradeName_8, Grade_7);
        mercury__io__write_string_3_p_0((MR_String) "grade(");
        mercury__io__write_string_3_p_0(GradeName_8);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Level_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), CompileTime_4, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), CompileTime_4, (MR_Integer) 0)));

        mercury__io__write_string_3_p_0((MR_String) "tracelevel(");
        switch (Level_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "deep");
            }
            break;
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "shallow");
            }
            break;
        }
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(
  MR_Word TraceExpr_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TraceExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Base_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceExpr_6, (MR_Integer) 0))));
          MR_String EnvVarName_42 = (MR_String) (Base_8);

          mercury__io__write_string_3_p_0((MR_String) "env(");
          mercury__term_io__quote_string_3_p_0(EnvVarName_42);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TraceExprA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TraceExpr_6, (MR_Integer) 0))));

          mercury__io__write_string_3_p_0((MR_String) "not(");
          parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(TraceExprA_9);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TraceExpr_6, (MR_Integer) 2))));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TraceExpr_6, (MR_Integer) 1))));
          MR_Word Var_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), TraceExpr_6, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), TraceExpr_6, (MR_Integer) 0)));

          switch (Var_39) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word next_value_of_TraceExpr_6;

                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(Var_38);
                mercury__io__write_string_3_p_0((MR_String) " and ");
                // direct tailcall eliminated
                ;
                next_value_of_TraceExpr_6 = Var_37;
                TraceExpr_6 = next_value_of_TraceExpr_6;
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(Var_38);
                mercury__io__write_string_3_p_0((MR_String) ") or (");
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(Var_37);
                mercury__io__write_string_3_p_0((MR_String) ")");
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
parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_3_p_0(
  MR_Word HeadVar__1_1)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_string_3_p_0((MR_String) ", ");
      }
      break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word SVar_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word SVars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Box conv0_STATE_VARIABLE_IO_24_24;

      mercury__io__write_string_3_p_0(HeadVar__3_3);
      parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_1[1]), HeadVar__1_1, HeadVar__2_2, SVar_16, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_24_24);
      if (!((SVars_17 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word SVar_39;
        MR_Word SVars_40;
        MR_Box conv1_STATE_VARIABLE_IO_24_47;

        mercury__io__write_string_3_p_0((MR_String) ", ");
        SVar_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SVars_17, (MR_Integer) 0))));
        SVars_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SVars_17, (MR_Integer) 1))));
        mercury__io__write_string_3_p_0(HeadVar__3_3);
        parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__parse_tree_out_clause_scalar_common_1[1]), HeadVar__1_1, HeadVar__2_2, SVar_39, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_24_47);
        if (!((SVars_40 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word next_value_of_HeadVar__4_4;

          mercury__io__write_string_3_p_0((MR_String) ", ");
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__4_4 = SVars_40;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_some_5_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word VarSet_6,
  MR_Word Vars_7,
  MR_Word StateVars_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Vars_7)) == (MR_Integer) 1);

    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = ((MR_tag((MR_Word) StateVars_8)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) " some [");
      parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(TypeInfo_for_T_30, VarSet_6, (MR_Integer) 0, Vars_7);
      succeeded = ((MR_tag((MR_Word) Vars_7)) == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) StateVars_8)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        mercury__io__write_string_3_p_0((MR_String) ", ");
        parse_tree__mercury_to_mercury__mercury_output_state_vars_5_p_0(TypeInfo_for_T_30, VarSet_6, (MR_Integer) 0, StateVars_8);
      }
      mercury__io__write_string_3_p_0((MR_String) "]");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_call_5_p_0(
  MR_Word VarSet_6,
  MR_Word SymName_7,
  MR_Word Term_8)
{
  if (((MR_tag((MR_Word) SymName_7)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_7, (MR_Integer) 0))));
    MR_String PredName_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_7, (MR_Integer) 1))));
    MR_Word Context0_12;
    MR_Word SubTerm_13;
    MR_Word Var_24;

    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, ModuleName_10);
    mercury__io__write_string_3_p_0((MR_String) ".");
    mercury__term__context_init_1_p_0(&Context0_12);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (PredName_11));
    }
    {
      SubTerm_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SubTerm_13, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), SubTerm_13, 1) = ((MR_Box) (Term_8));
      MR_hl_field(MR_mktag(0), SubTerm_13, 2) = ((MR_Box) (Context0_12));
    }
    parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, (MR_Integer) 0, SubTerm_13);
  }
  else
  {
    MR_Word Var_16;
    MR_String PredName_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_7, (MR_Integer) 0))));
    MR_Word Context0_29;
    MR_Word SubTerm_30;

    mercury__term__context_init_1_p_0(&Context0_29);
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (PredName_28));
    }
    {
      SubTerm_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SubTerm_30, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), SubTerm_30, 1) = ((MR_Box) (Term_8));
      MR_hl_field(MR_mktag(0), SubTerm_30, 2) = ((MR_Box) (Context0_29));
    }
    parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, (MR_Integer) 0, (MR_Integer) 0, SubTerm_30);
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_plain_or_dot_var_5_p_0(
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word PODVar_8)
{
  if (((MR_tag((MR_Word) PODVar_8)) == (MR_Integer) 1))
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PODVar_8, (MR_Integer) 0))));

    mercury__io__write_string_3_p_0((MR_String) "!.");
    parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, VarNamePrint_7, Var_17);
  }
  else
  {
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PODVar_8, (MR_Integer) 0))));

    parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, VarNamePrint_7, Var_10);
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__write_goal_warnings_4_p_0(
  MR_Word HeadWarning_5,
  MR_Word TailWarnings_6)
{
  while (MR_TRUE)
  {
    MR_String Var_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_12 = parse_tree__prog_out__goal_warning_to_string_1_f_0(HeadWarning_5);
    mercury__io__write_string_3_p_0(Var_12);
    if (!((TailWarnings_6 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadTailWarning_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailWarnings_6, (MR_Integer) 0))));
      MR_Word TailTailWarnings_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailWarnings_6, (MR_Integer) 1))));
      MR_Word next_value_of_HeadWarning_5;
      MR_Word next_value_of_TailWarnings_6;

      mercury__io__write_string_3_p_0((MR_String) ", ");
      // direct tailcall eliminated
      ;
      next_value_of_HeadWarning_5 = HeadTailWarning_8;
      next_value_of_TailWarnings_6 = TailTailWarnings_9;
      HeadWarning_5 = next_value_of_HeadWarning_5;
      TailWarnings_6 = next_value_of_TailWarnings_6;
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
