/*
** Automatically generated from `parse_tree_out_clause.m'
** by the Mercury compiler,
** version rotd-2016-06-09
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module parse_tree.parse_tree_out_clause. */
/* :- implementation. */

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
parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(
  MR_Word parse_tree__parse_tree_out_clause__TraceExpr_6);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(
  MR_Word parse_tree__parse_tree_out_clause__TraceExpr_6);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_3_p_0(
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__1_1);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_catch_5_p_0(
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_mutable_var_and_comma_7_p_0(
  MR_Word parse_tree__parse_tree_out_clause__VarSet_8,
  MR_Word parse_tree__parse_tree_out_clause__VarNamePrint_9,
  MR_Word parse_tree__parse_tree_out_clause__MutableVar_10,
  MR_Word parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_0_13,
  MR_Word * parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_14);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_6_p_0(
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__1_1,
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__2_2,
  MR_String parse_tree__parse_tree_out_clause__HeadVar__3_3,
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__4_4);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_promise_eqv_solutions_goal_10_p_0(
  MR_Word parse_tree__parse_tree_out_clause__VarSet_11,
  MR_Integer parse_tree__parse_tree_out_clause__Indent_12,
  MR_Word parse_tree__parse_tree_out_clause__Vars_13,
  MR_Word parse_tree__parse_tree_out_clause__StateVars_14,
  MR_Word parse_tree__parse_tree_out_clause__DotSVars_15,
  MR_Word parse_tree__parse_tree_out_clause__ColonSVars_16,
  MR_Word parse_tree__parse_tree_out_clause__Goal_17,
  MR_String parse_tree__parse_tree_out_clause__Keyword_18);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_some_5_p_0(
  MR_Word parse_tree__parse_tree_out_clause__TypeInfo_for_T_30,
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
  MR_Word parse_tree__parse_tree_out_clause__Vars_7,
  MR_Word parse_tree__parse_tree_out_clause__StateVars_8);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_orelse_goals_5_p_0(
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
  MR_Word parse_tree__parse_tree_out_clause__Goals_8);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_par_conj_5_p_0(
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
  MR_Word parse_tree__parse_tree_out_clause__Goal_8);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_disj_5_p_0(
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
  MR_Word parse_tree__parse_tree_out_clause__Goal_8);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_call_5_p_0(
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
  MR_Word parse_tree__parse_tree_out_clause__SymName_7,
  MR_Word parse_tree__parse_tree_out_clause__Term_8);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_plain_or_dot_var_5_p_0(
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
  MR_Word parse_tree__parse_tree_out_clause__VarNamePrint_7,
  MR_Word parse_tree__parse_tree_out_clause__PODVar_8);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
  MR_Word parse_tree__parse_tree_out_clause__Goal_8);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_2(
  MR_Box parse_tree__parse_tree_out_clause__closure_arg,
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_clause__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_1(
  MR_Box parse_tree__parse_tree_out_clause__closure_arg,
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_clause__wrapper_arg_3,
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_4,
  MR_Box * parse_tree__parse_tree_out_clause__wrapper_arg_5);


static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_1[2][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_2[1][1];

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_3[1][10];

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_4[1][8];




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

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "there_was_a_syntax_error"))
  },
};

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_3[1][10] = {
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

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_4[1][8] = {
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_clause__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(
  MR_Word parse_tree__parse_tree_out_clause__TraceExpr_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_tree_out_clause__succeeded;

        switch (MR_tag((MR_Word) parse_tree__parse_tree_out_clause__TraceExpr_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_tree_out_clause__Base_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));

              {
                parse_tree__parse_tree_out_clause__mercury_output_trace_compiletime_3_p_0(parse_tree__parse_tree_out_clause__Base_8);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_tree_out_clause__TraceExprA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));

              {
                mercury__io__write_string_3_p_0((MR_String) "not(");
              }
              {
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(parse_tree__parse_tree_out_clause__TraceExprA_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__parse_tree_out_clause__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 2)));
              MR_Word parse_tree__parse_tree_out_clause__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_clause__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));

              switch (parse_tree__parse_tree_out_clause__V_39_39) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    {
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(parse_tree__parse_tree_out_clause__V_38_38);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) " and ");
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word parse_tree__parse_tree_out_clause__TraceExpr__tmp_copy_6 = parse_tree__parse_tree_out_clause__V_37_37;

                      parse_tree__parse_tree_out_clause__TraceExpr_6 = parse_tree__parse_tree_out_clause__TraceExpr__tmp_copy_6;
                    }
                    continue;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
                    {
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(parse_tree__parse_tree_out_clause__V_38_38);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ") or (");
                    }
                    {
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(parse_tree__parse_tree_out_clause__V_37_37);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(
  MR_Word parse_tree__parse_tree_out_clause__TraceExpr_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_tree_out_clause__succeeded;

        switch (MR_tag((MR_Word) parse_tree__parse_tree_out_clause__TraceExpr_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_tree_out_clause__Base_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));
              MR_String parse_tree__parse_tree_out_clause__EnvVarName_42 = (MR_String) parse_tree__parse_tree_out_clause__Base_8;

              {
                mercury__io__write_string_3_p_0((MR_String) "env(");
              }
              {
                mercury__term_io__quote_string_3_p_0(parse_tree__parse_tree_out_clause__EnvVarName_42);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_tree_out_clause__TraceExprA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));

              {
                mercury__io__write_string_3_p_0((MR_String) "not(");
              }
              {
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(parse_tree__parse_tree_out_clause__TraceExprA_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__parse_tree_out_clause__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 2)));
              MR_Word parse_tree__parse_tree_out_clause__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_clause__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));

              switch (parse_tree__parse_tree_out_clause__V_39_39) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    {
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(parse_tree__parse_tree_out_clause__V_38_38);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) " and ");
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word parse_tree__parse_tree_out_clause__TraceExpr__tmp_copy_6 = parse_tree__parse_tree_out_clause__V_37_37;

                      parse_tree__parse_tree_out_clause__TraceExpr_6 = parse_tree__parse_tree_out_clause__TraceExpr__tmp_copy_6;
                    }
                    continue;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
                    {
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(parse_tree__parse_tree_out_clause__V_38_38);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ") or (");
                    }
                    {
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(parse_tree__parse_tree_out_clause__V_37_37);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_3_p_0(
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__1_1)
{
  {
    MR_bool parse_tree__parse_tree_out_clause__succeeded;

    switch (parse_tree__parse_tree_out_clause__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) ", ");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_catch_5_p_0(
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_tree_out_clause__succeeded;
    MR_Word parse_tree__parse_tree_out_clause__Pattern_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_clause__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__HeadVar__3_3, (MR_Integer) 1)));
    MR_Integer parse_tree__parse_tree_out_clause__V_19_19;
    MR_Integer parse_tree__parse_tree_out_clause__V_22_22;

    {
      mercury__io__write_string_3_p_0((MR_String) "catch ");
    }
    {
      parse_tree__parse_tree_out_term__mercury_output_term_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__Pattern_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ->");
    }
    parse_tree__parse_tree_out_clause__V_19_19 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
    {
      parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__V_19_19);
    }
    parse_tree__parse_tree_out_clause__V_22_22 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
    {
      parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__V_22_22, parse_tree__parse_tree_out_clause__Goal_9);
    }
    {
      parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_mutable_var_and_comma_7_p_0(
  MR_Word parse_tree__parse_tree_out_clause__VarSet_8,
  MR_Word parse_tree__parse_tree_out_clause__VarNamePrint_9,
  MR_Word parse_tree__parse_tree_out_clause__MutableVar_10,
  MR_Word parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_0_13,
  MR_Word * parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_14)
{
  {
    MR_bool parse_tree__parse_tree_out_clause__succeeded;
    MR_String parse_tree__parse_tree_out_clause__MutableName_34;
    MR_Word parse_tree__parse_tree_out_clause__StateVar_35;

    switch (parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_0_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) ", ");
          }
        }
        break;
    }
    *parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_14 = (MR_Integer) 1;
    parse_tree__parse_tree_out_clause__MutableName_34 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__MutableVar_10, (MR_Integer) 0)));
    parse_tree__parse_tree_out_clause__StateVar_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__MutableVar_10, (MR_Integer) 1)));
    {
      mercury__io__write_string_3_p_0((MR_String) "state(");
    }
    {
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_clause__MutableName_34);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", !");
    }
    {
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_8, parse_tree__parse_tree_out_clause__VarNamePrint_9, parse_tree__parse_tree_out_clause__StateVar_35);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_6_p_0(
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__1_1,
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__2_2,
  MR_String parse_tree__parse_tree_out_clause__HeadVar__3_3,
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_tree_out_clause__succeeded;

        if ((parse_tree__parse_tree_out_clause__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word parse_tree__parse_tree_out_clause__SVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word parse_tree__parse_tree_out_clause__SVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__HeadVar__4_4, (MR_Integer) 1)));
            MR_Box parse_tree__parse_tree_out_clause__conv0_STATE_VARIABLE_IO_24_24;

            {
              mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_clause__HeadVar__3_3);
            }
            {
              parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__HeadVar__1_1, parse_tree__parse_tree_out_clause__HeadVar__2_2, parse_tree__parse_tree_out_clause__SVar_16, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv0_STATE_VARIABLE_IO_24_24);
            }
            if ((parse_tree__parse_tree_out_clause__SVars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                MR_Word parse_tree__parse_tree_out_clause__SVar_39;
                MR_Word parse_tree__parse_tree_out_clause__SVars_40;
                MR_Box parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_24_47;

                {
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
                parse_tree__parse_tree_out_clause__SVar_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__SVars_17, (MR_Integer) 0)));
                parse_tree__parse_tree_out_clause__SVars_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__SVars_17, (MR_Integer) 1)));
                {
                  mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_clause__HeadVar__3_3);
                }
                {
                  parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__HeadVar__1_1, parse_tree__parse_tree_out_clause__HeadVar__2_2, parse_tree__parse_tree_out_clause__SVar_39, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_24_47);
                }
                if ((parse_tree__parse_tree_out_clause__SVars_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                  }
                else
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word parse_tree__parse_tree_out_clause__HeadVar__4__tmp_copy_4 = parse_tree__parse_tree_out_clause__SVars_40;

                      parse_tree__parse_tree_out_clause__HeadVar__4_4 = parse_tree__parse_tree_out_clause__HeadVar__4__tmp_copy_4;
                    }
                    continue;
                  }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_promise_eqv_solutions_goal_10_p_0(
  MR_Word parse_tree__parse_tree_out_clause__VarSet_11,
  MR_Integer parse_tree__parse_tree_out_clause__Indent_12,
  MR_Word parse_tree__parse_tree_out_clause__Vars_13,
  MR_Word parse_tree__parse_tree_out_clause__StateVars_14,
  MR_Word parse_tree__parse_tree_out_clause__DotSVars_15,
  MR_Word parse_tree__parse_tree_out_clause__ColonSVars_16,
  MR_Word parse_tree__parse_tree_out_clause__Goal_17,
  MR_String parse_tree__parse_tree_out_clause__Keyword_18)
{
  {
    MR_bool parse_tree__parse_tree_out_clause__succeeded = (parse_tree__parse_tree_out_clause__Vars_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (parse_tree__parse_tree_out_clause__succeeded)
      {
        parse_tree__parse_tree_out_clause__succeeded = (parse_tree__parse_tree_out_clause__StateVars_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_tree_out_clause__succeeded)
          {
            parse_tree__parse_tree_out_clause__succeeded = (parse_tree__parse_tree_out_clause__DotSVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__parse_tree_out_clause__succeeded)
              parse_tree__parse_tree_out_clause__succeeded = (parse_tree__parse_tree_out_clause__ColonSVars_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
      }
    if (parse_tree__parse_tree_out_clause__succeeded)
      {
        parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_11, parse_tree__parse_tree_out_clause__Indent_12, parse_tree__parse_tree_out_clause__Goal_17);
      }
    else
      {
        MR_Integer parse_tree__parse_tree_out_clause__Indent1_38;
        MR_Word parse_tree__parse_tree_out_clause__V_20_20;
        MR_Word parse_tree__parse_tree_out_clause__V_21_21;
        MR_Word parse_tree__parse_tree_out_clause__V_22_22;
        MR_Word parse_tree__parse_tree_out_clause__V_23_23;
        MR_Word parse_tree__parse_tree_out_clause__V_28_28;
        MR_Word parse_tree__parse_tree_out_clause__V_29_29;
        MR_Word parse_tree__parse_tree_out_clause__V_36_36;
        MR_Word parse_tree__parse_tree_out_clause__V_37_37;

        {
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_clause__Keyword_18);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " [");
        }
        {
          parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_11, (MR_Integer) 0, parse_tree__parse_tree_out_clause__Vars_13);
        }
        parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Vars_13)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_tree_out_clause__succeeded)
          {
            parse_tree__parse_tree_out_clause__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_13, (MR_Integer) 0)));
            parse_tree__parse_tree_out_clause__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_13, (MR_Integer) 1)));
            parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__StateVars_14)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_tree_out_clause__succeeded)
              {
                parse_tree__parse_tree_out_clause__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_14, (MR_Integer) 0)));
                parse_tree__parse_tree_out_clause__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_14, (MR_Integer) 1)));
              }
          }
        if (parse_tree__parse_tree_out_clause__succeeded)
          {
            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
          }
        else
          {
          }
        {
          parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_6_p_0(parse_tree__parse_tree_out_clause__VarSet_11, (MR_Integer) 0, (MR_String) "!", parse_tree__parse_tree_out_clause__StateVars_14);
        }
        {
          MR_Word parse_tree__parse_tree_out_clause__V_24_24;
          MR_Word parse_tree__parse_tree_out_clause__V_25_25;

          parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Vars_13)) == (MR_mktag((MR_Integer) 1)));
          if (parse_tree__parse_tree_out_clause__succeeded)
            {
              parse_tree__parse_tree_out_clause__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_13, (MR_Integer) 0)));
              parse_tree__parse_tree_out_clause__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_13, (MR_Integer) 1)));
            }
        }
        if (!(parse_tree__parse_tree_out_clause__succeeded))
          {
            MR_Word parse_tree__parse_tree_out_clause__V_26_26;
            MR_Word parse_tree__parse_tree_out_clause__V_27_27;

            parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__StateVars_14)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_tree_out_clause__succeeded)
              {
                parse_tree__parse_tree_out_clause__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_14, (MR_Integer) 0)));
                parse_tree__parse_tree_out_clause__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_14, (MR_Integer) 1)));
              }
          }
        if (parse_tree__parse_tree_out_clause__succeeded)
          {
            parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__DotSVars_15)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_tree_out_clause__succeeded)
              {
                parse_tree__parse_tree_out_clause__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__DotSVars_15, (MR_Integer) 0)));
                parse_tree__parse_tree_out_clause__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__DotSVars_15, (MR_Integer) 1)));
              }
          }
        if (parse_tree__parse_tree_out_clause__succeeded)
          {
            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
          }
        else
          {
          }
        {
          parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_6_p_0(parse_tree__parse_tree_out_clause__VarSet_11, (MR_Integer) 0, (MR_String) "!.", parse_tree__parse_tree_out_clause__DotSVars_15);
        }
        {
          MR_Word parse_tree__parse_tree_out_clause__V_30_30;
          MR_Word parse_tree__parse_tree_out_clause__V_31_31;

          parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Vars_13)) == (MR_mktag((MR_Integer) 1)));
          if (parse_tree__parse_tree_out_clause__succeeded)
            {
              parse_tree__parse_tree_out_clause__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_13, (MR_Integer) 0)));
              parse_tree__parse_tree_out_clause__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_13, (MR_Integer) 1)));
            }
        }
        if (!(parse_tree__parse_tree_out_clause__succeeded))
          {
            {
              MR_Word parse_tree__parse_tree_out_clause__V_32_32;
              MR_Word parse_tree__parse_tree_out_clause__V_33_33;

              parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__StateVars_14)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_tree_out_clause__succeeded)
                {
                  parse_tree__parse_tree_out_clause__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_14, (MR_Integer) 0)));
                  parse_tree__parse_tree_out_clause__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_14, (MR_Integer) 1)));
                }
            }
            if (!(parse_tree__parse_tree_out_clause__succeeded))
              {
                MR_Word parse_tree__parse_tree_out_clause__V_34_34;
                MR_Word parse_tree__parse_tree_out_clause__V_35_35;

                parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__DotSVars_15)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_tree_out_clause__succeeded)
                  {
                    parse_tree__parse_tree_out_clause__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__DotSVars_15, (MR_Integer) 0)));
                    parse_tree__parse_tree_out_clause__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__DotSVars_15, (MR_Integer) 1)));
                  }
              }
          }
        if (parse_tree__parse_tree_out_clause__succeeded)
          {
            parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__ColonSVars_16)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_tree_out_clause__succeeded)
              {
                parse_tree__parse_tree_out_clause__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__ColonSVars_16, (MR_Integer) 0)));
                parse_tree__parse_tree_out_clause__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__ColonSVars_16, (MR_Integer) 1)));
              }
          }
        if (parse_tree__parse_tree_out_clause__succeeded)
          {
            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
          }
        else
          {
          }
        {
          parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_6_p_0(parse_tree__parse_tree_out_clause__VarSet_11, (MR_Integer) 0, (MR_String) "!:", parse_tree__parse_tree_out_clause__ColonSVars_16);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "] (");
        }
        parse_tree__parse_tree_out_clause__Indent1_38 = (parse_tree__parse_tree_out_clause__Indent_12 + (MR_Integer) 1);
        {
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_38);
        }
        {
          parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_11, parse_tree__parse_tree_out_clause__Indent1_38, parse_tree__parse_tree_out_clause__Goal_17);
        }
        {
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_12);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_some_5_p_0(
  MR_Word parse_tree__parse_tree_out_clause__TypeInfo_for_T_30,
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
  MR_Word parse_tree__parse_tree_out_clause__Vars_7,
  MR_Word parse_tree__parse_tree_out_clause__StateVars_8)
{
  {
    MR_bool parse_tree__parse_tree_out_clause__succeeded;

    {
      MR_Word parse_tree__parse_tree_out_clause__V_10_10;
      MR_Word parse_tree__parse_tree_out_clause__V_11_11;

      parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Vars_7)) == (MR_mktag((MR_Integer) 1)));
      if (parse_tree__parse_tree_out_clause__succeeded)
        {
          parse_tree__parse_tree_out_clause__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_7, (MR_Integer) 0)));
          parse_tree__parse_tree_out_clause__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_7, (MR_Integer) 1)));
        }
    }
    if (!(parse_tree__parse_tree_out_clause__succeeded))
      {
        MR_Word parse_tree__parse_tree_out_clause__V_12_12;
        MR_Word parse_tree__parse_tree_out_clause__V_13_13;

        parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__StateVars_8)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_tree_out_clause__succeeded)
          {
            parse_tree__parse_tree_out_clause__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_8, (MR_Integer) 0)));
            parse_tree__parse_tree_out_clause__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_8, (MR_Integer) 1)));
          }
      }
    if (parse_tree__parse_tree_out_clause__succeeded)
      {
        MR_Word parse_tree__parse_tree_out_clause__V_14_14;
        MR_Word parse_tree__parse_tree_out_clause__V_15_15;
        MR_Word parse_tree__parse_tree_out_clause__V_16_16;
        MR_Word parse_tree__parse_tree_out_clause__V_17_17;

        {
          mercury__io__write_string_3_p_0((MR_String) " some [");
        }
        {
          parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(parse_tree__parse_tree_out_clause__TypeInfo_for_T_30, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__Vars_7);
        }
        parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Vars_7)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_tree_out_clause__succeeded)
          {
            parse_tree__parse_tree_out_clause__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_7, (MR_Integer) 0)));
            parse_tree__parse_tree_out_clause__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_7, (MR_Integer) 1)));
            parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__StateVars_8)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_tree_out_clause__succeeded)
              {
                parse_tree__parse_tree_out_clause__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_8, (MR_Integer) 0)));
                parse_tree__parse_tree_out_clause__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_8, (MR_Integer) 1)));
              }
          }
        if (parse_tree__parse_tree_out_clause__succeeded)
          {
            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            {
              parse_tree__mercury_to_mercury__mercury_output_state_vars_5_p_0(parse_tree__parse_tree_out_clause__TypeInfo_for_T_30, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__StateVars_8);
            }
          }
        else
          {
          }
        {
          mercury__io__write_string_3_p_0((MR_String) "]");
        }
      }
    else
      {
      }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_orelse_goals_5_p_0(
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
  MR_Word parse_tree__parse_tree_out_clause__Goals_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_tree_out_clause__succeeded;

        if ((parse_tree__parse_tree_out_clause__Goals_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word parse_tree__parse_tree_out_clause__HeadGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Goals_8, (MR_Integer) 0)));
            MR_Word parse_tree__parse_tree_out_clause__TailGoals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Goals_8, (MR_Integer) 1)));

            if ((parse_tree__parse_tree_out_clause__TailGoals_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Integer parse_tree__parse_tree_out_clause__V_24_24 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);

                {
                  parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__V_24_24, parse_tree__parse_tree_out_clause__HeadGoal_10);
                }
              }
            else
              {
                MR_Integer parse_tree__parse_tree_out_clause__V_16_16 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);

                {
                  parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__V_16_16, parse_tree__parse_tree_out_clause__HeadGoal_10);
                }
                {
                  parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "orelse");
                }
                {
                  parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word parse_tree__parse_tree_out_clause__Goals__tmp_copy_8 = parse_tree__parse_tree_out_clause__TailGoals_11;

                  parse_tree__parse_tree_out_clause__Goals_8 = parse_tree__parse_tree_out_clause__Goals__tmp_copy_8;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_par_conj_5_p_0(
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
  MR_Word parse_tree__parse_tree_out_clause__Goal_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_tree_out_clause__succeeded;
        MR_Integer parse_tree__parse_tree_out_clause__Indent1_10;
        MR_Word parse_tree__parse_tree_out_clause__SubGoalA_12;
        MR_Word parse_tree__parse_tree_out_clause__SubGoalB_13;
        MR_Word parse_tree__parse_tree_out_clause__V_11_11;

        {
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "&");
        }
        parse_tree__parse_tree_out_clause__Indent1_10 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
        {
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_10);
        }
        parse_tree__parse_tree_out_clause__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Goal_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (parse_tree__parse_tree_out_clause__succeeded)
          {
            parse_tree__parse_tree_out_clause__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
            parse_tree__parse_tree_out_clause__SubGoalA_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
            parse_tree__parse_tree_out_clause__SubGoalB_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
            {
              parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_10, parse_tree__parse_tree_out_clause__SubGoalA_12);
            }
            {
              /* direct tailcall eliminated */
              {
                MR_Word parse_tree__parse_tree_out_clause__Goal__tmp_copy_8 = parse_tree__parse_tree_out_clause__SubGoalB_13;

                parse_tree__parse_tree_out_clause__Goal_8 = parse_tree__parse_tree_out_clause__Goal__tmp_copy_8;
              }
              continue;
            }
          }
        else
          {
            parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_10, parse_tree__parse_tree_out_clause__Goal_8);
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_disj_5_p_0(
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
  MR_Word parse_tree__parse_tree_out_clause__Goal_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_tree_out_clause__succeeded;
        MR_Integer parse_tree__parse_tree_out_clause__Indent1_10;
        MR_Word parse_tree__parse_tree_out_clause__SubGoalA_12;
        MR_Word parse_tree__parse_tree_out_clause__SubGoalB_13;
        MR_Word parse_tree__parse_tree_out_clause__V_11_11;

        {
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ";");
        }
        parse_tree__parse_tree_out_clause__Indent1_10 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
        {
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_10);
        }
        parse_tree__parse_tree_out_clause__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Goal_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (parse_tree__parse_tree_out_clause__succeeded)
          {
            parse_tree__parse_tree_out_clause__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
            parse_tree__parse_tree_out_clause__SubGoalA_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
            parse_tree__parse_tree_out_clause__SubGoalB_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
            {
              parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_10, parse_tree__parse_tree_out_clause__SubGoalA_12);
            }
            {
              /* direct tailcall eliminated */
              {
                MR_Word parse_tree__parse_tree_out_clause__Goal__tmp_copy_8 = parse_tree__parse_tree_out_clause__SubGoalB_13;

                parse_tree__parse_tree_out_clause__Goal_8 = parse_tree__parse_tree_out_clause__Goal__tmp_copy_8;
              }
              continue;
            }
          }
        else
          {
            parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_10, parse_tree__parse_tree_out_clause__Goal_8);
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_call_5_p_0(
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
  MR_Word parse_tree__parse_tree_out_clause__SymName_7,
  MR_Word parse_tree__parse_tree_out_clause__Term_8)
{
  {
    MR_bool parse_tree__parse_tree_out_clause__succeeded;

    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__SymName_7)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__parse_tree_out_clause__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__SymName_7, (MR_Integer) 0)));
        MR_String parse_tree__parse_tree_out_clause__PredName_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__SymName_7, (MR_Integer) 1)));
        MR_Word parse_tree__parse_tree_out_clause__Context0_12;
        MR_Word parse_tree__parse_tree_out_clause__SubTerm_13;
        MR_Word parse_tree__parse_tree_out_clause__V_24_24;

        {
          parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, parse_tree__parse_tree_out_clause__ModuleName_10);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ".");
        }
        {
          mercury__term__context_init_1_p_0(&parse_tree__parse_tree_out_clause__Context0_12);
        }
        {
          parse_tree__parse_tree_out_clause__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_24_24, 0) = ((MR_Box) (parse_tree__parse_tree_out_clause__PredName_11));
        }
        {
          parse_tree__parse_tree_out_clause__SubTerm_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__SubTerm_13, 0) = ((MR_Box) (parse_tree__parse_tree_out_clause__V_24_24));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__SubTerm_13, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__Term_8));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__SubTerm_13, 2) = ((MR_Box) (parse_tree__parse_tree_out_clause__Context0_12));
        }
        {
          parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out_clause__SubTerm_13);
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out_clause__V_16_16;
        MR_String parse_tree__parse_tree_out_clause__PredName_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__SymName_7, (MR_Integer) 0)));
        MR_Word parse_tree__parse_tree_out_clause__Context0_29;
        MR_Word parse_tree__parse_tree_out_clause__SubTerm_30;

        {
          mercury__term__context_init_1_p_0(&parse_tree__parse_tree_out_clause__Context0_29);
        }
        {
          parse_tree__parse_tree_out_clause__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_16_16, 0) = ((MR_Box) (parse_tree__parse_tree_out_clause__PredName_28));
        }
        {
          parse_tree__parse_tree_out_clause__SubTerm_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__SubTerm_30, 0) = ((MR_Box) (parse_tree__parse_tree_out_clause__V_16_16));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__SubTerm_30, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__Term_8));
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__SubTerm_30, 2) = ((MR_Box) (parse_tree__parse_tree_out_clause__Context0_29));
        }
        {
          parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out_clause__SubTerm_30);
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_plain_or_dot_var_5_p_0(
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
  MR_Word parse_tree__parse_tree_out_clause__VarNamePrint_7,
  MR_Word parse_tree__parse_tree_out_clause__PODVar_8)
{
  {
    MR_bool parse_tree__parse_tree_out_clause__succeeded;

    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__PODVar_8)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__parse_tree_out_clause__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__PODVar_8, (MR_Integer) 0)));

        {
          mercury__io__write_string_3_p_0((MR_String) "!.");
        }
        {
          parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__VarNamePrint_7, parse_tree__parse_tree_out_clause__Var_17);
        }
      }
    else
      {
        MR_Word parse_tree__parse_tree_out_clause__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__PODVar_8, (MR_Integer) 0)));

        {
          parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__VarNamePrint_7, parse_tree__parse_tree_out_clause__Var_10);
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
  MR_Word parse_tree__parse_tree_out_clause__Goal_8)
{
  {
    MR_bool parse_tree__parse_tree_out_clause__succeeded;

    switch (MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Goal_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__Goal_8);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer parse_tree__parse_tree_out_clause__Indent1_101;

          {
            mercury__io__write_string_3_p_0((MR_String) "(");
          }
          parse_tree__parse_tree_out_clause__Indent1_101 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
          {
            parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_101);
          }
          {
            parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_101, parse_tree__parse_tree_out_clause__Goal_8);
          }
          {
            parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 16:
          case (MR_Integer) 17:
          case (MR_Integer) 18:
          case (MR_Integer) 19:
            {
              parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__Goal_8);
            }
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
            {
              MR_Integer parse_tree__parse_tree_out_clause__Indent1_101;

              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              parse_tree__parse_tree_out_clause__Indent1_101 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
              {
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_101);
              }
              {
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_101, parse_tree__parse_tree_out_clause__Goal_8);
              }
              {
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_runtime_3_p_0(
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__1_1)
{
  {
    MR_bool parse_tree__parse_tree_out_clause__succeeded;
    MR_String parse_tree__parse_tree_out_clause__EnvVarName_4 = (MR_String) parse_tree__parse_tree_out_clause__HeadVar__1_1;

    {
      mercury__io__write_string_3_p_0((MR_String) "env(");
    }
    {
      mercury__term_io__quote_string_3_p_0(parse_tree__parse_tree_out_clause__EnvVarName_4);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_compiletime_3_p_0(
  MR_Word parse_tree__parse_tree_out_clause__CompileTime_4)
{
  {
    MR_bool parse_tree__parse_tree_out_clause__succeeded;

    switch (MR_tag((MR_Word) parse_tree__parse_tree_out_clause__CompileTime_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String parse_tree__parse_tree_out_clause__FlagName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__CompileTime_4, (MR_Integer) 0)));

          {
            mercury__io__write_string_3_p_0((MR_String) "flag(");
          }
          {
            mercury__term_io__quote_string_3_p_0(parse_tree__parse_tree_out_clause__FlagName_6);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_out_clause__Grade_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__CompileTime_4, (MR_Integer) 0)));
          MR_String parse_tree__parse_tree_out_clause__GradeName_8;

          {
            parse_tree__prog_data__parse_trace_grade_name_2_p_1(&parse_tree__parse_tree_out_clause__GradeName_8, parse_tree__parse_tree_out_clause__Grade_7);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "grade(");
          }
          {
            mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_clause__GradeName_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__parse_tree_out_clause__Level_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__CompileTime_4, (MR_Integer) 0)));

          {
            mercury__io__write_string_3_p_0((MR_String) "tracelevel(");
          }
          switch (parse_tree__parse_tree_out_clause__Level_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "deep");
                }
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "shallow");
                }
              }
              break;
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0(
  MR_Word parse_tree__parse_tree_out_clause__TypeInfo_for_T_36,
  MR_Word parse_tree__parse_tree_out_clause__PrintBase_5,
  MR_Word parse_tree__parse_tree_out_clause__TraceExpr_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_tree_out_clause__succeeded;

        switch (MR_tag((MR_Word) parse_tree__parse_tree_out_clause__TraceExpr_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box parse_tree__parse_tree_out_clause__Base_8 = (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0));
              void MR_CALL (* parse_tree__parse_tree_out_clause__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__PrintBase_5, (MR_Integer) 1)));
              MR_Box parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_12;

              {
                parse_tree__parse_tree_out_clause__func_0(((MR_Box) parse_tree__parse_tree_out_clause__PrintBase_5), parse_tree__parse_tree_out_clause__Base_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_12);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_tree_out_clause__TraceExprA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));

              {
                mercury__io__write_string_3_p_0((MR_String) "not(");
              }
              {
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0(parse_tree__parse_tree_out_clause__TypeInfo_for_T_36, parse_tree__parse_tree_out_clause__PrintBase_5, parse_tree__parse_tree_out_clause__TraceExprA_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__parse_tree_out_clause__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 2)));
              MR_Word parse_tree__parse_tree_out_clause__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_clause__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));

              switch (parse_tree__parse_tree_out_clause__V_39_39) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    {
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0(parse_tree__parse_tree_out_clause__TypeInfo_for_T_36, parse_tree__parse_tree_out_clause__PrintBase_5, parse_tree__parse_tree_out_clause__V_38_38);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) " and ");
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word parse_tree__parse_tree_out_clause__TraceExpr__tmp_copy_6 = parse_tree__parse_tree_out_clause__V_37_37;

                      parse_tree__parse_tree_out_clause__TraceExpr_6 = parse_tree__parse_tree_out_clause__TraceExpr__tmp_copy_6;
                    }
                    continue;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
                    {
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0(parse_tree__parse_tree_out_clause__TypeInfo_for_T_36, parse_tree__parse_tree_out_clause__PrintBase_5, parse_tree__parse_tree_out_clause__V_38_38);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ") or (");
                    }
                    {
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0(parse_tree__parse_tree_out_clause__TypeInfo_for_T_36, parse_tree__parse_tree_out_clause__PrintBase_5, parse_tree__parse_tree_out_clause__V_37_37);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_2(
  MR_Box parse_tree__parse_tree_out_clause__closure_arg,
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_clause__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_tree_out_clause__closure = parse_tree__parse_tree_out_clause__closure_arg;

    {
      parse_tree__parse_tree_out_clause__mercury_output_catch_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_clause__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_1(
  MR_Box parse_tree__parse_tree_out_clause__closure_arg,
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_1,
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_2,
  MR_Box * parse_tree__parse_tree_out_clause__wrapper_arg_3,
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_4,
  MR_Box * parse_tree__parse_tree_out_clause__wrapper_arg_5)
{
  {
    MR_Box parse_tree__parse_tree_out_clause__closure = parse_tree__parse_tree_out_clause__closure_arg;
    MR_Word parse_tree__parse_tree_out_clause__conv0_STATE_VARIABLE_NeedComma_14;

    {
      parse_tree__parse_tree_out_clause__mercury_output_trace_mutable_var_and_comma_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_clause__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out_clause__wrapper_arg_2), &parse_tree__parse_tree_out_clause__conv0_STATE_VARIABLE_NeedComma_14);
    }
    *parse_tree__parse_tree_out_clause__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_clause__conv0_STATE_VARIABLE_NeedComma_14));
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
  MR_Word parse_tree__parse_tree_out_clause__Goal_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_tree_out_clause__succeeded;

        switch (MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Goal_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_tree_out_clause__TypeCtorInfo_469_469;
              MR_Word parse_tree__parse_tree_out_clause__TermA_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_clause__TermB_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
              MR_Word parse_tree__parse_tree_out_clause__Purity_437 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
              MR_Word parse_tree__parse_tree_out_clause__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 0)));

              {
                parse_tree__prog_out__write_purity_prefix_3_p_0(parse_tree__parse_tree_out_clause__Purity_437);
              }
              parse_tree__parse_tree_out_clause__TypeCtorInfo_469_469 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
              {
                parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(parse_tree__parse_tree_out_clause__TypeCtorInfo_469_469, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__TermA_78);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " = ");
              }
              {
                parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0(parse_tree__parse_tree_out_clause__TypeCtorInfo_469_469, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out_clause__TermB_79);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_tree_out_clause__Purity_434 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
              MR_Word parse_tree__parse_tree_out_clause__Name_435 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_clause__Terms_436 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
              MR_Word parse_tree__parse_tree_out_clause__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 0)));

              {
                parse_tree__prog_out__write_purity_prefix_3_p_0(parse_tree__parse_tree_out_clause__Purity_434);
              }
              {
                parse_tree__parse_tree_out_clause__mercury_output_call_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Name_435, parse_tree__parse_tree_out_clause__Terms_436);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__parse_tree_out_clause__SubGoalA_426 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
              MR_Word parse_tree__parse_tree_out_clause__SubGoalB_427 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
              MR_Word parse_tree__parse_tree_out_clause__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 0)));

              {
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__SubGoalA_426);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ",");
              }
              {
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
              }
              /* direct tailcall eliminated */
              {
                MR_Word parse_tree__parse_tree_out_clause__Goal__tmp_copy_8 = parse_tree__parse_tree_out_clause__SubGoalB_427;

                parse_tree__parse_tree_out_clause__Goal_8 = parse_tree__parse_tree_out_clause__Goal__tmp_copy_8;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "true");
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__parse_tree_out_clause__Cond_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_419;
                  MR_Word parse_tree__parse_tree_out_clause__Vars_420 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
                  MR_Word parse_tree__parse_tree_out_clause__StateVars_421 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
                  MR_Word parse_tree__parse_tree_out_clause__Then_422 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 5)));
                  MR_Word parse_tree__parse_tree_out_clause__Else_423 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 6)));
                  MR_Word parse_tree__parse_tree_out_clause__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

                  {
                    mercury__io__write_string_3_p_0((MR_String) "(if");
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_some_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Vars_420, parse_tree__parse_tree_out_clause__StateVars_421);
                  }
                  parse_tree__parse_tree_out_clause__Indent1_419 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_419);
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_419, parse_tree__parse_tree_out_clause__Cond_68);
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "then");
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_419);
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_419, parse_tree__parse_tree_out_clause__Then_422);
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "else");
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_419);
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_419, parse_tree__parse_tree_out_clause__Else_423);
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalA_431 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalB_432 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_433;
                  MR_Word parse_tree__parse_tree_out_clause__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  parse_tree__parse_tree_out_clause__Indent1_433 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_433);
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_433, parse_tree__parse_tree_out_clause__SubGoalA_431);
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_disj_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__SubGoalB_432);
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_424;
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_425 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
                  MR_Word parse_tree__parse_tree_out_clause__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

                  {
                    mercury__io__write_string_3_p_0((MR_String) "\\+ (");
                  }
                  parse_tree__parse_tree_out_clause__Indent1_424 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_424);
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_424, parse_tree__parse_tree_out_clause__SubGoal_425);
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "fail");
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalA_428 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalB_429 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_430;
                  MR_Word parse_tree__parse_tree_out_clause__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  parse_tree__parse_tree_out_clause__Indent1_430 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_430);
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_430, parse_tree__parse_tree_out_clause__SubGoalA_428);
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_par_conj_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__SubGoalB_429);
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word parse_tree__parse_tree_out_clause__QuantType_17 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)))) & (MR_Integer) 1);
                  MR_Word parse_tree__parse_tree_out_clause__QuantVarsKind_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word parse_tree__parse_tree_out_clause__Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));
                  MR_Word parse_tree__parse_tree_out_clause__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));

                  if ((parse_tree__parse_tree_out_clause__Vars_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word parse_tree__parse_tree_out_clause__Goal__tmp_copy_8 = parse_tree__parse_tree_out_clause__SubGoal_21;

                        parse_tree__parse_tree_out_clause__Goal_8 = parse_tree__parse_tree_out_clause__Goal__tmp_copy_8;
                      }
                      continue;
                    }
                  else
                    {
                      MR_Integer parse_tree__parse_tree_out_clause__Indent1_386;

                      switch (parse_tree__parse_tree_out_clause__QuantType_17) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "all");
                            }
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "some");
                            }
                          }
                          break;
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) "[");
                      }
                      switch (parse_tree__parse_tree_out_clause__QuantVarsKind_18) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            {
                              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__Vars_20);
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            {
                              parse_tree__mercury_to_mercury__mercury_output_state_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__Vars_20);
                            }
                          }
                          break;
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) "] (");
                      }
                      parse_tree__parse_tree_out_clause__Indent1_386 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
                      {
                        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_386);
                      }
                      {
                        parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_386, parse_tree__parse_tree_out_clause__SubGoal_21);
                      }
                      {
                        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                    }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word parse_tree__parse_tree_out_clause__Purity_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_401;
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_402 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
                  MR_Word parse_tree__parse_tree_out_clause__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

                  switch (parse_tree__parse_tree_out_clause__Purity_31) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 2:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "promise_impure (");
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "promise_pure (");
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "promise_semipure (");
                        }
                      }
                      break;
                  }
                  parse_tree__parse_tree_out_clause__Indent1_401 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_401);
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_401, parse_tree__parse_tree_out_clause__SubGoal_402);
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word parse_tree__parse_tree_out_clause__StateVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
                  MR_Word parse_tree__parse_tree_out_clause__DotSVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));
                  MR_Word parse_tree__parse_tree_out_clause__ColonSVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 5)));
                  MR_Word parse_tree__parse_tree_out_clause__Vars_389 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_390 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 6)));
                  MR_Word parse_tree__parse_tree_out_clause__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

                  {
                    parse_tree__parse_tree_out_clause__mercury_output_promise_eqv_solutions_goal_10_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__Vars_389, parse_tree__parse_tree_out_clause__StateVars_25, parse_tree__parse_tree_out_clause__DotSVars_26, parse_tree__parse_tree_out_clause__ColonSVars_27, parse_tree__parse_tree_out_clause__SubGoal_390, (MR_String) "promise_equivalent_solutions");
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word parse_tree__parse_tree_out_clause__Vars_391 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_392 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 6)));
                  MR_Word parse_tree__parse_tree_out_clause__StateVars_393 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
                  MR_Word parse_tree__parse_tree_out_clause__DotSVars_394 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));
                  MR_Word parse_tree__parse_tree_out_clause__ColonSVars_395 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 5)));
                  MR_Word parse_tree__parse_tree_out_clause__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

                  {
                    parse_tree__parse_tree_out_clause__mercury_output_promise_eqv_solutions_goal_10_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__Vars_391, parse_tree__parse_tree_out_clause__StateVars_393, parse_tree__parse_tree_out_clause__DotSVars_394, parse_tree__parse_tree_out_clause__ColonSVars_395, parse_tree__parse_tree_out_clause__SubGoal_392, (MR_String) "promise_equivalent_solution_sets");
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word parse_tree__parse_tree_out_clause__Vars_396 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_397 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 6)));
                  MR_Word parse_tree__parse_tree_out_clause__StateVars_398 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
                  MR_Word parse_tree__parse_tree_out_clause__DotSVars_399 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));
                  MR_Word parse_tree__parse_tree_out_clause__ColonSVars_400 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 5)));
                  MR_Word parse_tree__parse_tree_out_clause__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

                  {
                    parse_tree__parse_tree_out_clause__mercury_output_promise_eqv_solutions_goal_10_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__Vars_396, parse_tree__parse_tree_out_clause__StateVars_398, parse_tree__parse_tree_out_clause__DotSVars_399, parse_tree__parse_tree_out_clause__ColonSVars_400, parse_tree__parse_tree_out_clause__SubGoal_397, (MR_String) "arbitrary");
                  }
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_Word parse_tree__parse_tree_out_clause__Detism_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_403;
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_404 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
                  MR_Word parse_tree__parse_tree_out_clause__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

                  switch (parse_tree__parse_tree_out_clause__Detism_33) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 4:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "require_cc_multi");
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "require_cc_nondet");
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "require_det");
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "require_erroneous");
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "require_failure");
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "require_multi");
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "require_nondet");
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "require_semidet");
                        }
                      }
                      break;
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " (");
                  }
                  parse_tree__parse_tree_out_clause__Indent1_403 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_403);
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_403, parse_tree__parse_tree_out_clause__SubGoal_404);
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word parse_tree__parse_tree_out_clause__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_405;
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_406 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
                  MR_Word parse_tree__parse_tree_out_clause__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

                  {
                    mercury__io__write_string_3_p_0((MR_String) "require_complete_switch [");
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_plain_or_dot_var_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__Var_35);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "] (");
                  }
                  parse_tree__parse_tree_out_clause__Indent1_405 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_405);
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_405, parse_tree__parse_tree_out_clause__SubGoal_406);
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_407;
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_408 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));
                  MR_Word parse_tree__parse_tree_out_clause__Detism_409 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
                  MR_Word parse_tree__parse_tree_out_clause__Var_410 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
                  MR_Word parse_tree__parse_tree_out_clause__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

                  switch (parse_tree__parse_tree_out_clause__Detism_409) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 4:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_cc_multi");
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_cc_nondet");
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_det");
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_erroneous");
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_failure");
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_multi");
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_nondet");
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_semidet");
                        }
                      }
                      break;
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " [");
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_plain_or_dot_var_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__Var_410);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "] (");
                  }
                  parse_tree__parse_tree_out_clause__Indent1_407 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_407);
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_407, parse_tree__parse_tree_out_clause__SubGoal_408);
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Word parse_tree__parse_tree_out_clause__MaybeCompileTime_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
                  MR_Word parse_tree__parse_tree_out_clause__MaybeRunTime_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
                  MR_Word parse_tree__parse_tree_out_clause__MaybeIO_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));
                  MR_Word parse_tree__parse_tree_out_clause__MutableVars_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 5)));
                  MR_Word parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_192_192;
                  MR_Word parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_196_196;
                  MR_Word parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_204_204;
                  MR_Word parse_tree__parse_tree_out_clause__V_205_205;
                  MR_Integer parse_tree__parse_tree_out_clause__V_210_210;
                  MR_Integer parse_tree__parse_tree_out_clause__V_213_213;
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_412 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 6)));
                  MR_Word parse_tree__parse_tree_out_clause__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
                  MR_Word parse_tree__parse_tree_out_clause__V_58_58;
                  MR_Box parse_tree__parse_tree_out_clause__conv2_V_58_58;
                  MR_Box parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_206_206;

                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "trace [");
                  }
                  if ((parse_tree__parse_tree_out_clause__MaybeCompileTime_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_192_192 = (MR_Integer) 0;
                  else
                    {
                      MR_Word parse_tree__parse_tree_out_clause__CompileTime_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__MaybeCompileTime_50, (MR_Integer) 0)));

                      {
                        parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(parse_tree__parse_tree_out_clause__CompileTime_55);
                      }
                      parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_192_192 = (MR_Integer) 1;
                    }
                  if ((parse_tree__parse_tree_out_clause__MaybeRunTime_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_196_196 = parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_192_192;
                  else
                    {
                      MR_Word parse_tree__parse_tree_out_clause__RunTime_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__MaybeRunTime_51, (MR_Integer) 0)));

                      {
                        parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_3_p_0(parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_192_192);
                      }
                      {
                        parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(parse_tree__parse_tree_out_clause__RunTime_56);
                      }
                      parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_196_196 = (MR_Integer) 1;
                    }
                  if ((parse_tree__parse_tree_out_clause__MaybeIO_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_204_204 = parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_196_196;
                  else
                    {
                      MR_Word parse_tree__parse_tree_out_clause__IOStateVar_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__MaybeIO_52, (MR_Integer) 0)));

                      {
                        parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_3_p_0(parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_196_196);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) "io(!");
                      }
                      {
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__IOStateVar_57);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_204_204 = (MR_Integer) 1;
                    }
                  {
                    parse_tree__parse_tree_out_clause__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_205_205, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_3[0]));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_205_205, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_1));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_205_205, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_205_205, 3) = ((MR_Box) (parse_tree__parse_tree_out_clause__VarSet_6));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_205_205, 4) = ((MR_Box) ((MR_Integer) 0));
                  }
                  {
                    mercury__list__foldl2_6_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__parse_tree_out_clause__V_205_205, parse_tree__parse_tree_out_clause__MutableVars_53, ((MR_Box) (parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_204_204)), &parse_tree__parse_tree_out_clause__conv2_V_58_58, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_206_206);
                  }
                  parse_tree__parse_tree_out_clause__V_58_58 = ((MR_Word) parse_tree__parse_tree_out_clause__conv2_V_58_58);
                  {
                    mercury__io__write_string_3_p_0((MR_String) "]");
                  }
                  parse_tree__parse_tree_out_clause__V_210_210 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__V_210_210);
                  }
                  parse_tree__parse_tree_out_clause__V_213_213 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__V_213_213, parse_tree__parse_tree_out_clause__SubGoal_412);
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Word parse_tree__parse_tree_out_clause__Outer_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
                  MR_Word parse_tree__parse_tree_out_clause__Inner_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
                  MR_Word parse_tree__parse_tree_out_clause__MainGoal_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 5)));
                  MR_Word parse_tree__parse_tree_out_clause__OrElseGoals_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 6)));
                  MR_Word parse_tree__parse_tree_out_clause__V_247_247;
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_411;
                  MR_Word parse_tree__parse_tree_out_clause__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
                  MR_Word parse_tree__parse_tree_out_clause__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));

                  {
                    mercury__io__write_string_3_p_0((MR_String) "atomic [outer(");
                  }
                  if (((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Outer_38)) == (MR_mktag((MR_Integer) 0))))
                    {
                      MR_Word parse_tree__parse_tree_out_clause__OVar_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__Outer_38, (MR_Integer) 0)));

                      {
                        mercury__io__write_string_3_p_0((MR_String) "!");
                      }
                      {
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__OVar_43);
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__parse_tree_out_clause__TypeCtorInfo_441_441 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                      MR_Word parse_tree__parse_tree_out_clause__OuterDI_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Outer_38, (MR_Integer) 0)));
                      MR_Word parse_tree__parse_tree_out_clause__OuterUO_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Outer_38, (MR_Integer) 1)));

                      {
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(parse_tree__parse_tree_out_clause__TypeCtorInfo_441_441, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__OuterDI_44);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                      }
                      {
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(parse_tree__parse_tree_out_clause__TypeCtorInfo_441_441, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__OuterUO_45);
                      }
                    }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "), inner(");
                  }
                  if (((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Inner_39)) == (MR_mktag((MR_Integer) 0))))
                    {
                      MR_Word parse_tree__parse_tree_out_clause__IVar_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__Inner_39, (MR_Integer) 0)));

                      {
                        mercury__io__write_string_3_p_0((MR_String) "!");
                      }
                      {
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__IVar_46);
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__parse_tree_out_clause__TypeCtorInfo_443_443 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                      MR_Word parse_tree__parse_tree_out_clause__InnerDI_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Inner_39, (MR_Integer) 0)));
                      MR_Word parse_tree__parse_tree_out_clause__InnerUO_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Inner_39, (MR_Integer) 1)));

                      {
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(parse_tree__parse_tree_out_clause__TypeCtorInfo_443_443, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__InnerDI_47);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                      }
                      {
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(parse_tree__parse_tree_out_clause__TypeCtorInfo_443_443, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__InnerUO_48);
                      }
                    }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")] (");
                  }
                  parse_tree__parse_tree_out_clause__Indent1_411 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_411);
                  }
                  {
                    parse_tree__parse_tree_out_clause__V_247_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__V_247_247, 0) = ((MR_Box) (parse_tree__parse_tree_out_clause__MainGoal_41));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__V_247_247, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__OrElseGoals_42));
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_orelse_goals_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_411, parse_tree__parse_tree_out_clause__V_247_247);
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_Word parse_tree__parse_tree_out_clause__Then_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));
                  MR_Word parse_tree__parse_tree_out_clause__MaybeElse_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 5)));
                  MR_Word parse_tree__parse_tree_out_clause__Catches_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 6)));
                  MR_Word parse_tree__parse_tree_out_clause__MaybeCatchAny_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 7)));
                  MR_Word parse_tree__parse_tree_out_clause__V_172_172;
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_415;
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_416 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
                  MR_Word parse_tree__parse_tree_out_clause__MaybeIO_417 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
                  MR_Word parse_tree__parse_tree_out_clause__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
                  MR_Box parse_tree__parse_tree_out_clause__conv3_STATE_VARIABLE_IO_173_173;

                  {
                    mercury__io__write_string_3_p_0((MR_String) "(try [");
                  }
                  if ((parse_tree__parse_tree_out_clause__MaybeIO_417 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                    }
                  else
                    {
                      MR_Word parse_tree__parse_tree_out_clause__IOStateVar_413 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__MaybeIO_417, (MR_Integer) 0)));

                      {
                        mercury__io__write_string_3_p_0((MR_String) "io(!");
                      }
                      {
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__IOStateVar_413);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                    }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "] (");
                  }
                  parse_tree__parse_tree_out_clause__Indent1_415 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_415);
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_415, parse_tree__parse_tree_out_clause__SubGoal_416);
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "then");
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_415);
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_415, parse_tree__parse_tree_out_clause__Then_60);
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
                  if ((parse_tree__parse_tree_out_clause__MaybeElse_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                    }
                  else
                    {
                      MR_Word parse_tree__parse_tree_out_clause__Else_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__MaybeElse_61, (MR_Integer) 0)));

                      {
                        mercury__io__write_string_3_p_0((MR_String) "else");
                      }
                      {
                        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_415);
                      }
                      {
                        parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_415, parse_tree__parse_tree_out_clause__Else_64);
                      }
                    }
                  {
                    parse_tree__parse_tree_out_clause__V_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_172_172, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_4[0]));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_172_172, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_2));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_172_172, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_172_172, 3) = ((MR_Box) (parse_tree__parse_tree_out_clause__VarSet_6));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_172_172, 4) = ((MR_Box) (parse_tree__parse_tree_out_clause__Indent_7));
                  }
                  {
                    mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__parse_tree_out_clause__V_172_172, parse_tree__parse_tree_out_clause__Catches_62, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv3_STATE_VARIABLE_IO_173_173);
                  }
                  if ((parse_tree__parse_tree_out_clause__MaybeCatchAny_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                    }
                  else
                    {
                      MR_Word parse_tree__parse_tree_out_clause__CatchAnyVar_65;
                      MR_Word parse_tree__parse_tree_out_clause__CatchAnyGoal_66;
                      MR_Word parse_tree__parse_tree_out_clause__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__MaybeCatchAny_63, (MR_Integer) 0)));

                      parse_tree__parse_tree_out_clause__CatchAnyVar_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_174_174, (MR_Integer) 0)));
                      parse_tree__parse_tree_out_clause__CatchAnyGoal_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_174_174, (MR_Integer) 1)));
                      {
                        mercury__io__write_string_3_p_0((MR_String) "catch_any ");
                      }
                      {
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__CatchAnyVar_65);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) " ->");
                      }
                      {
                        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_415);
                      }
                      {
                        parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_415, parse_tree__parse_tree_out_clause__CatchAnyGoal_66);
                      }
                    }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalA_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_15 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
                  MR_Word parse_tree__parse_tree_out_clause__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_15);
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_15, parse_tree__parse_tree_out_clause__SubGoalA_13);
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "=>");
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_15);
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_15, parse_tree__parse_tree_out_clause__SubGoalB_14);
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 18:
                {
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalA_383 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalB_384 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_385 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
                  MR_Word parse_tree__parse_tree_out_clause__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_385);
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_385, parse_tree__parse_tree_out_clause__SubGoalA_383);
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "<=>");
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_385);
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_385, parse_tree__parse_tree_out_clause__SubGoalB_384);
                  }
                  {
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 19:
                {
                  MR_String parse_tree__parse_tree_out_clause__Name_74 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
                  MR_Word parse_tree__parse_tree_out_clause__Terms_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
                  MR_Word parse_tree__parse_tree_out_clause__V_94_94;
                  MR_Word parse_tree__parse_tree_out_clause__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

                  {
                    mercury__io__write_string_3_p_0((MR_String) "event ");
                  }
                  {
                    parse_tree__parse_tree_out_clause__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_94_94, 0) = ((MR_Box) (parse_tree__parse_tree_out_clause__Name_74));
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_call_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__V_94_94, parse_tree__parse_tree_out_clause__Terms_75);
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__output_instance_method_clause_4_p_0(
  MR_Word parse_tree__parse_tree_out_clause__MethodName_5,
  MR_Word parse_tree__parse_tree_out_clause__ItemClause_6)
{
  {
    MR_bool parse_tree__parse_tree_out_clause__succeeded;
    MR_Word parse_tree__parse_tree_out_clause__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_clause__ArgTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out_clause__VarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 4)));
    MR_Word parse_tree__parse_tree_out_clause__MaybeBodyGoal_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 5)));
    MR_Word parse_tree__parse_tree_out_clause__BodyGoal_16;
    MR_Word parse_tree__parse_tree_out_clause___PredName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_clause___MaybeAttrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 3)));
    MR_Word parse_tree__parse_tree_out_clause___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 6)));
    MR_Integer parse_tree__parse_tree_out_clause___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 7)));

    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__MaybeBodyGoal_13)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_tree_out_clause__V_29_29;

        {
          parse_tree__parse_tree_out_clause__V_29_29 = mercury__term__context_init_0_f_0();
        }
        {
          parse_tree__parse_tree_out_clause__BodyGoal_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__BodyGoal_16, 0) = ((MR_Box) (parse_tree__parse_tree_out_clause__V_29_29));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__BodyGoal_16, 1) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__BodyGoal_16, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__BodyGoal_16, 3) = ((MR_Box) ((MR_Integer) 0));
        }
      }
    else
      parse_tree__parse_tree_out_clause__BodyGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__MaybeBodyGoal_13, (MR_Integer) 0)));
    switch (parse_tree__parse_tree_out_clause__PredOrFunc_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_out_clause__FuncArgTerms_17;
          MR_Word parse_tree__parse_tree_out_clause__ResultTerm_18;
          MR_Box parse_tree__parse_tree_out_clause__conv0_ResultTerm_18;
          MR_Word parse_tree__parse_tree_out_clause__V_42_42;

          {
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[0], parse_tree__parse_tree_out_clause__ArgTerms_10, &parse_tree__parse_tree_out_clause__FuncArgTerms_17, &parse_tree__parse_tree_out_clause__conv0_ResultTerm_18);
          }
          parse_tree__parse_tree_out_clause__ResultTerm_18 = ((MR_Word) parse_tree__parse_tree_out_clause__conv0_ResultTerm_18);
          {
            parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out_clause__MethodName_5);
          }
          if ((parse_tree__parse_tree_out_clause__FuncArgTerms_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              MR_Word parse_tree__parse_tree_out_clause__HeadArg_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__FuncArgTerms_17, (MR_Integer) 0)));
              MR_Word parse_tree__parse_tree_out_clause__TailArgs_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__FuncArgTerms_17, (MR_Integer) 1)));
              MR_Box parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_23_47;

              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, parse_tree__parse_tree_out_clause__HeadArg_40, parse_tree__parse_tree_out_clause__TailArgs_41, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_23_47);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
          {
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
          parse_tree__parse_tree_out_clause__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__BodyGoal_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (parse_tree__parse_tree_out_clause__succeeded)
            {
              parse_tree__parse_tree_out_clause__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_16, (MR_Integer) 1)));
              {
                MR_Box parse_tree__parse_tree_out_clause__conv2_STATE_VARIABLE_IO_20;

                {
                  parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out_clause__ResultTerm_18, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv2_STATE_VARIABLE_IO_20);
                }
              }
            }
          else
            {
              MR_Box parse_tree__parse_tree_out_clause__conv3_STATE_VARIABLE_IO_32_56;

              {
                parse_tree__parse_tree_out_term__mercury_format_term_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, parse_tree__parse_tree_out_clause__ResultTerm_18, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv3_STATE_VARIABLE_IO_32_56);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " :-\n\t");
              }
              {
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 1, parse_tree__parse_tree_out_clause__BodyGoal_16);
              }
            }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__parse_tree_out_clause__V_76_76;

          {
            parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out_clause__MethodName_5);
          }
          if ((parse_tree__parse_tree_out_clause__ArgTerms_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              MR_Word parse_tree__parse_tree_out_clause__HeadArg_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__ArgTerms_10, (MR_Integer) 0)));
              MR_Word parse_tree__parse_tree_out_clause__TailArgs_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__ArgTerms_10, (MR_Integer) 1)));
              MR_Box parse_tree__parse_tree_out_clause__conv4_STATE_VARIABLE_IO_21_81;

              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, parse_tree__parse_tree_out_clause__HeadArg_74, parse_tree__parse_tree_out_clause__TailArgs_75, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv4_STATE_VARIABLE_IO_21_81);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
          parse_tree__parse_tree_out_clause__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__BodyGoal_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (parse_tree__parse_tree_out_clause__succeeded)
            {
              parse_tree__parse_tree_out_clause__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_16, (MR_Integer) 1)));
            }
          else
            {
              {
                mercury__io__write_string_3_p_0((MR_String) " :-\n\t");
              }
              {
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 1, parse_tree__parse_tree_out_clause__BodyGoal_16);
              }
            }
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_item_clause_4_p_0(
  MR_Word parse_tree__parse_tree_out_clause__Info_5,
  MR_Word parse_tree__parse_tree_out_clause__ItemClause_6)
{
  {
    MR_bool parse_tree__parse_tree_out_clause__succeeded;
    MR_Word parse_tree__parse_tree_out_clause__PredName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 0)));
    MR_Word parse_tree__parse_tree_out_clause__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 1)));
    MR_Word parse_tree__parse_tree_out_clause__ArgTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 2)));
    MR_Word parse_tree__parse_tree_out_clause__VarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 4)));
    MR_Word parse_tree__parse_tree_out_clause__MaybeBodyGoal_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 5)));
    MR_Word parse_tree__parse_tree_out_clause__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 6)));
    MR_Word parse_tree__parse_tree_out_clause__BodyGoal_16;
    MR_Word parse_tree__parse_tree_out_clause__PredName_17;
    MR_Word parse_tree__parse_tree_out_clause___MaybeAttrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 3)));
    MR_Integer parse_tree__parse_tree_out_clause___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 7)));

    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__MaybeBodyGoal_13)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_tree_out_clause__V_33_33;

        {
          parse_tree__parse_tree_out_clause__V_33_33 = mercury__term__context_init_0_f_0();
        }
        {
          parse_tree__parse_tree_out_clause__BodyGoal_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__BodyGoal_16, 0) = ((MR_Box) (parse_tree__parse_tree_out_clause__V_33_33));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__BodyGoal_16, 1) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__BodyGoal_16, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__BodyGoal_16, 3) = ((MR_Box) ((MR_Integer) 0));
        }
      }
    else
      parse_tree__parse_tree_out_clause__BodyGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__MaybeBodyGoal_13, (MR_Integer) 0)));
    {
      parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(parse_tree__parse_tree_out_clause__Info_5, parse_tree__parse_tree_out_clause__PredName0_8, &parse_tree__parse_tree_out_clause__PredName_17);
    }
    {
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out_clause__Info_5, parse_tree__parse_tree_out_clause__Context_14);
    }
    switch (parse_tree__parse_tree_out_clause__PredOrFunc_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_tree_out_clause__FuncArgTerms_18;
          MR_Word parse_tree__parse_tree_out_clause__ResultTerm_19;
          MR_Box parse_tree__parse_tree_out_clause__conv0_ResultTerm_19;
          MR_Word parse_tree__parse_tree_out_clause__V_46_46;

          {
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[0], parse_tree__parse_tree_out_clause__ArgTerms_10, &parse_tree__parse_tree_out_clause__FuncArgTerms_18, &parse_tree__parse_tree_out_clause__conv0_ResultTerm_19);
          }
          parse_tree__parse_tree_out_clause__ResultTerm_19 = ((MR_Word) parse_tree__parse_tree_out_clause__conv0_ResultTerm_19);
          {
            parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out_clause__PredName_17);
          }
          if ((parse_tree__parse_tree_out_clause__FuncArgTerms_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              MR_Word parse_tree__parse_tree_out_clause__HeadArg_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__FuncArgTerms_18, (MR_Integer) 0)));
              MR_Word parse_tree__parse_tree_out_clause__TailArgs_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__FuncArgTerms_18, (MR_Integer) 1)));
              MR_Box parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_23_51;

              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, parse_tree__parse_tree_out_clause__HeadArg_44, parse_tree__parse_tree_out_clause__TailArgs_45, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_23_51);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
          {
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
          parse_tree__parse_tree_out_clause__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__BodyGoal_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (parse_tree__parse_tree_out_clause__succeeded)
            {
              parse_tree__parse_tree_out_clause__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_16, (MR_Integer) 1)));
              {
                MR_Box parse_tree__parse_tree_out_clause__conv2_STATE_VARIABLE_IO_24_24;

                {
                  parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out_clause__ResultTerm_19, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv2_STATE_VARIABLE_IO_24_24);
                }
              }
            }
          else
            {
              MR_Box parse_tree__parse_tree_out_clause__conv3_STATE_VARIABLE_IO_32_60;

              {
                parse_tree__parse_tree_out_term__mercury_format_term_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, parse_tree__parse_tree_out_clause__ResultTerm_19, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv3_STATE_VARIABLE_IO_32_60);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " :-\n\t");
              }
              {
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 1, parse_tree__parse_tree_out_clause__BodyGoal_16);
              }
            }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__parse_tree_out_clause__V_80_80;

          {
            parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out_clause__PredName_17);
          }
          if ((parse_tree__parse_tree_out_clause__ArgTerms_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              MR_Word parse_tree__parse_tree_out_clause__HeadArg_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__ArgTerms_10, (MR_Integer) 0)));
              MR_Word parse_tree__parse_tree_out_clause__TailArgs_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__ArgTerms_10, (MR_Integer) 1)));
              MR_Box parse_tree__parse_tree_out_clause__conv4_STATE_VARIABLE_IO_21_85;

              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, parse_tree__parse_tree_out_clause__HeadArg_78, parse_tree__parse_tree_out_clause__TailArgs_79, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv4_STATE_VARIABLE_IO_21_85);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
          parse_tree__parse_tree_out_clause__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__BodyGoal_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (parse_tree__parse_tree_out_clause__succeeded)
            {
              parse_tree__parse_tree_out_clause__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_16, (MR_Integer) 1)));
            }
          else
            {
              {
                mercury__io__write_string_3_p_0((MR_String) " :-\n\t");
              }
              {
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 1, parse_tree__parse_tree_out_clause__BodyGoal_16);
              }
            }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.parse_tree_out_clause. */
