/*
** Automatically generated from `parse_tree_out_clause.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 102 "parse_tree.parse_tree_out_clause.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_clause__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 38 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(
#line 38 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__TraceExpr_6);

#line 38 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(
#line 38 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__TraceExpr_6);

#line 844 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_3_p_0(
#line 844 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__1_1);

#line 831 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_catch_5_p_0(
#line 831 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 831 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
#line 831 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__3_3);

#line 819 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_mutable_var_and_comma_7_p_0(
#line 819 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_8,
#line 819 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarNamePrint_9,
#line 819 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__MutableVar_10,
#line 819 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_0_13,
#line 819 "parse_tree_out_clause.m"
  MR_Word * parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_14);

#line 738 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_6_p_0(
#line 738 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__1_1,
#line 738 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__2_2,
#line 738 "parse_tree_out_clause.m"
  MR_String parse_tree__parse_tree_out_clause__HeadVar__3_3,
#line 738 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__4_4);

#line 676 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_promise_eqv_solutions_goal_10_p_0(
#line 676 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_11,
#line 676 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_12,
#line 676 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Vars_13,
#line 676 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__StateVars_14,
#line 676 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__DotSVars_15,
#line 676 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__ColonSVars_16,
#line 676 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Goal_17,
#line 676 "parse_tree_out_clause.m"
  MR_String parse_tree__parse_tree_out_clause__Keyword_18);

#line 648 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_some_5_p_0(
#line 648 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__TypeInfo_for_T_30,
#line 648 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 648 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Vars_7,
#line 648 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__StateVars_8);

#line 625 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_orelse_goals_5_p_0(
#line 625 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 625 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
#line 625 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Goals_8);

#line 608 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_par_conj_5_p_0(
#line 608 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 608 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
#line 608 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Goal_8);

#line 591 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_disj_5_p_0(
#line 591 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 591 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
#line 591 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Goal_8);

#line 568 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_call_5_p_0(
#line 568 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 568 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__SymName_7,
#line 568 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Term_8);

#line 526 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(
#line 526 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 526 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
#line 526 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Goal_8);

#line 445 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_2(
#line 445 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__closure_arg,
#line 445 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_1,
#line 445 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_2,
#line 445 "parse_tree_out_clause.m"
  MR_Box * parse_tree__parse_tree_out_clause__wrapper_arg_3);

#line 405 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_1(
#line 405 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__closure_arg,
#line 405 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_1,
#line 405 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_2,
#line 405 "parse_tree_out_clause.m"
  MR_Box * parse_tree__parse_tree_out_clause__wrapper_arg_3,
#line 405 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_4,
#line 405 "parse_tree_out_clause.m"
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



#line 340 "parse_tree.parse_tree_out_clause.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_tree_out_clause__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 38 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(
#line 38 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__TraceExpr_6)
#line 38 "parse_tree_out_clause.m"
{
#line 762 "parse_tree_out_clause.m"
  while (MR_TRUE)
#line 762 "parse_tree_out_clause.m"
    {
#line 762 "parse_tree_out_clause.m"
      /* tailcall optimized into a loop */
#line 762 "parse_tree_out_clause.m"
      {
#line 762 "parse_tree_out_clause.m"
        MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 762 "parse_tree_out_clause.m"
#line 762 "parse_tree_out_clause.m"
        switch (MR_tag((MR_Word) parse_tree__parse_tree_out_clause__TraceExpr_6)) {
#line 762 "parse_tree_out_clause.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 762 "parse_tree_out_clause.m"
          case (MR_Integer) 0:
#line 760 "parse_tree_out_clause.m"
            {
#line 760 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__Base_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));

#line 761 "parse_tree_out_clause.m"
              {
#line 761 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__mercury_output_trace_compiletime_3_p_0(parse_tree__parse_tree_out_clause__Base_8);
              }
#line 760 "parse_tree_out_clause.m"
            }
#line 762 "parse_tree_out_clause.m"
            break;
#line 762 "parse_tree_out_clause.m"
          case (MR_Integer) 1:
#line 763 "parse_tree_out_clause.m"
            {
#line 763 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__TraceExprA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));

#line 764 "parse_tree_out_clause.m"
              {
#line 764 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) "not(");
              }
#line 765 "parse_tree_out_clause.m"
              {
#line 765 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(parse_tree__parse_tree_out_clause__TraceExprA_9);
              }
#line 766 "parse_tree_out_clause.m"
              {
#line 766 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 763 "parse_tree_out_clause.m"
            }
#line 762 "parse_tree_out_clause.m"
            break;
#line 762 "parse_tree_out_clause.m"
          case (MR_Integer) 2:
#line 762 "parse_tree_out_clause.m"
            {
#line 762 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 2)));
#line 762 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 1)));
#line 762 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));

#line 762 "parse_tree_out_clause.m"
#line 762 "parse_tree_out_clause.m"
              switch (parse_tree__parse_tree_out_clause__V_39_39) {
#line 762 "parse_tree_out_clause.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 762 "parse_tree_out_clause.m"
                case (MR_Integer) 1:
#line 775 "parse_tree_out_clause.m"
                  {
#line 776 "parse_tree_out_clause.m"
                    {
#line 776 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(parse_tree__parse_tree_out_clause__V_38_38);
                    }
#line 777 "parse_tree_out_clause.m"
                    {
#line 777 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) " and ");
                    }
#line 778 "parse_tree_out_clause.m"
                    /* direct tailcall eliminated */
#line 778 "parse_tree_out_clause.m"
                    {
#line 778 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__TraceExpr__tmp_copy_6 = parse_tree__parse_tree_out_clause__V_37_37;

#line 778 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__TraceExpr_6 = parse_tree__parse_tree_out_clause__TraceExpr__tmp_copy_6;
#line 778 "parse_tree_out_clause.m"
                    }
#line 778 "parse_tree_out_clause.m"
                    continue;
#line 775 "parse_tree_out_clause.m"
                  }
#line 762 "parse_tree_out_clause.m"
                  break;
#line 762 "parse_tree_out_clause.m"
                case (MR_Integer) 0:
#line 768 "parse_tree_out_clause.m"
                  {
#line 769 "parse_tree_out_clause.m"
                    {
#line 769 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
#line 770 "parse_tree_out_clause.m"
                    {
#line 770 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(parse_tree__parse_tree_out_clause__V_38_38);
                    }
#line 771 "parse_tree_out_clause.m"
                    {
#line 771 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) ") or (");
                    }
#line 772 "parse_tree_out_clause.m"
                    {
#line 772 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(parse_tree__parse_tree_out_clause__V_37_37);
                    }
#line 773 "parse_tree_out_clause.m"
                    {
#line 773 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
#line 768 "parse_tree_out_clause.m"
                  }
#line 762 "parse_tree_out_clause.m"
                  break;
#line 762 "parse_tree_out_clause.m"
              }
#line 762 "parse_tree_out_clause.m"
            }
#line 762 "parse_tree_out_clause.m"
            break;
#line 762 "parse_tree_out_clause.m"
        }
#line 762 "parse_tree_out_clause.m"
      }
#line 762 "parse_tree_out_clause.m"
      break;
#line 762 "parse_tree_out_clause.m"
    }
#line 38 "parse_tree_out_clause.m"
}

#line 38 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(
#line 38 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__TraceExpr_6)
#line 38 "parse_tree_out_clause.m"
{
#line 762 "parse_tree_out_clause.m"
  while (MR_TRUE)
#line 762 "parse_tree_out_clause.m"
    {
#line 762 "parse_tree_out_clause.m"
      /* tailcall optimized into a loop */
#line 762 "parse_tree_out_clause.m"
      {
#line 762 "parse_tree_out_clause.m"
        MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 762 "parse_tree_out_clause.m"
#line 762 "parse_tree_out_clause.m"
        switch (MR_tag((MR_Word) parse_tree__parse_tree_out_clause__TraceExpr_6)) {
#line 762 "parse_tree_out_clause.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 762 "parse_tree_out_clause.m"
          case (MR_Integer) 0:
#line 760 "parse_tree_out_clause.m"
            {
#line 760 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__Base_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));
#line 760 "parse_tree_out_clause.m"
              MR_String parse_tree__parse_tree_out_clause__EnvVarName_42 = (MR_String) parse_tree__parse_tree_out_clause__Base_8;

#line 807 "parse_tree_out_clause.m"
              {
#line 807 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) "env(");
              }
#line 808 "parse_tree_out_clause.m"
              {
#line 808 "parse_tree_out_clause.m"
                mercury__term_io__quote_string_3_p_0(parse_tree__parse_tree_out_clause__EnvVarName_42);
              }
#line 809 "parse_tree_out_clause.m"
              {
#line 809 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 760 "parse_tree_out_clause.m"
            }
#line 762 "parse_tree_out_clause.m"
            break;
#line 762 "parse_tree_out_clause.m"
          case (MR_Integer) 1:
#line 763 "parse_tree_out_clause.m"
            {
#line 763 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__TraceExprA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));

#line 764 "parse_tree_out_clause.m"
              {
#line 764 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) "not(");
              }
#line 765 "parse_tree_out_clause.m"
              {
#line 765 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(parse_tree__parse_tree_out_clause__TraceExprA_9);
              }
#line 766 "parse_tree_out_clause.m"
              {
#line 766 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 763 "parse_tree_out_clause.m"
            }
#line 762 "parse_tree_out_clause.m"
            break;
#line 762 "parse_tree_out_clause.m"
          case (MR_Integer) 2:
#line 762 "parse_tree_out_clause.m"
            {
#line 762 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 2)));
#line 762 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 1)));
#line 762 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));

#line 762 "parse_tree_out_clause.m"
#line 762 "parse_tree_out_clause.m"
              switch (parse_tree__parse_tree_out_clause__V_39_39) {
#line 762 "parse_tree_out_clause.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 762 "parse_tree_out_clause.m"
                case (MR_Integer) 1:
#line 775 "parse_tree_out_clause.m"
                  {
#line 776 "parse_tree_out_clause.m"
                    {
#line 776 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(parse_tree__parse_tree_out_clause__V_38_38);
                    }
#line 777 "parse_tree_out_clause.m"
                    {
#line 777 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) " and ");
                    }
#line 778 "parse_tree_out_clause.m"
                    /* direct tailcall eliminated */
#line 778 "parse_tree_out_clause.m"
                    {
#line 778 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__TraceExpr__tmp_copy_6 = parse_tree__parse_tree_out_clause__V_37_37;

#line 778 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__TraceExpr_6 = parse_tree__parse_tree_out_clause__TraceExpr__tmp_copy_6;
#line 778 "parse_tree_out_clause.m"
                    }
#line 778 "parse_tree_out_clause.m"
                    continue;
#line 775 "parse_tree_out_clause.m"
                  }
#line 762 "parse_tree_out_clause.m"
                  break;
#line 762 "parse_tree_out_clause.m"
                case (MR_Integer) 0:
#line 768 "parse_tree_out_clause.m"
                  {
#line 769 "parse_tree_out_clause.m"
                    {
#line 769 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
#line 770 "parse_tree_out_clause.m"
                    {
#line 770 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(parse_tree__parse_tree_out_clause__V_38_38);
                    }
#line 771 "parse_tree_out_clause.m"
                    {
#line 771 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) ") or (");
                    }
#line 772 "parse_tree_out_clause.m"
                    {
#line 772 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(parse_tree__parse_tree_out_clause__V_37_37);
                    }
#line 773 "parse_tree_out_clause.m"
                    {
#line 773 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
#line 768 "parse_tree_out_clause.m"
                  }
#line 762 "parse_tree_out_clause.m"
                  break;
#line 762 "parse_tree_out_clause.m"
              }
#line 762 "parse_tree_out_clause.m"
            }
#line 762 "parse_tree_out_clause.m"
            break;
#line 762 "parse_tree_out_clause.m"
        }
#line 762 "parse_tree_out_clause.m"
      }
#line 762 "parse_tree_out_clause.m"
      break;
#line 762 "parse_tree_out_clause.m"
    }
#line 38 "parse_tree_out_clause.m"
}

#line 844 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_3_p_0(
#line 844 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__1_1)
#line 844 "parse_tree_out_clause.m"
{
#line 846 "parse_tree_out_clause.m"
  {
#line 846 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 846 "parse_tree_out_clause.m"
#line 846 "parse_tree_out_clause.m"
    switch (parse_tree__parse_tree_out_clause__HeadVar__1_1) {
#line 846 "parse_tree_out_clause.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 846 "parse_tree_out_clause.m"
      case (MR_Integer) 0:
#line 846 "parse_tree_out_clause.m"
        {
#line 846 "parse_tree_out_clause.m"
        }
#line 846 "parse_tree_out_clause.m"
        break;
#line 846 "parse_tree_out_clause.m"
      case (MR_Integer) 1:
#line 847 "parse_tree_out_clause.m"
        {
#line 848 "parse_tree_out_clause.m"
          {
#line 848 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) ", ");
          }
#line 847 "parse_tree_out_clause.m"
        }
#line 846 "parse_tree_out_clause.m"
        break;
#line 846 "parse_tree_out_clause.m"
    }
#line 846 "parse_tree_out_clause.m"
  }
#line 844 "parse_tree_out_clause.m"
}

#line 831 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_catch_5_p_0(
#line 831 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 831 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
#line 831 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__3_3)
#line 831 "parse_tree_out_clause.m"
{
#line 834 "parse_tree_out_clause.m"
  {
#line 834 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded;
#line 834 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__Pattern_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__HeadVar__3_3, (MR_Integer) 0)));
#line 834 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__HeadVar__3_3, (MR_Integer) 1)));
#line 834 "parse_tree_out_clause.m"
    MR_Integer parse_tree__parse_tree_out_clause__V_19_19;
#line 834 "parse_tree_out_clause.m"
    MR_Integer parse_tree__parse_tree_out_clause__V_22_22;

#line 835 "parse_tree_out_clause.m"
    {
#line 835 "parse_tree_out_clause.m"
      mercury__io__write_string_3_p_0((MR_String) "catch ");
    }
#line 836 "parse_tree_out_clause.m"
    {
#line 836 "parse_tree_out_clause.m"
      parse_tree__parse_tree_out_term__mercury_output_term_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__Pattern_8);
    }
#line 837 "parse_tree_out_clause.m"
    {
#line 837 "parse_tree_out_clause.m"
      mercury__io__write_string_3_p_0((MR_String) " ->");
    }
#line 838 "parse_tree_out_clause.m"
    parse_tree__parse_tree_out_clause__V_19_19 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 838 "parse_tree_out_clause.m"
    {
#line 838 "parse_tree_out_clause.m"
      parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__V_19_19);
    }
#line 839 "parse_tree_out_clause.m"
    parse_tree__parse_tree_out_clause__V_22_22 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 839 "parse_tree_out_clause.m"
    {
#line 839 "parse_tree_out_clause.m"
      parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__V_22_22, parse_tree__parse_tree_out_clause__Goal_9);
    }
#line 840 "parse_tree_out_clause.m"
    {
#line 840 "parse_tree_out_clause.m"
      parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
    }
#line 834 "parse_tree_out_clause.m"
  }
#line 831 "parse_tree_out_clause.m"
}

#line 819 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_mutable_var_and_comma_7_p_0(
#line 819 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_8,
#line 819 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarNamePrint_9,
#line 819 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__MutableVar_10,
#line 819 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_0_13,
#line 819 "parse_tree_out_clause.m"
  MR_Word * parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_14)
#line 819 "parse_tree_out_clause.m"
{
#line 824 "parse_tree_out_clause.m"
  {
#line 824 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 846 "parse_tree_out_clause.m"
#line 846 "parse_tree_out_clause.m"
    switch (parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_0_13) {
#line 846 "parse_tree_out_clause.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 846 "parse_tree_out_clause.m"
      case (MR_Integer) 0:
#line 846 "parse_tree_out_clause.m"
        {
#line 846 "parse_tree_out_clause.m"
        }
#line 846 "parse_tree_out_clause.m"
        break;
#line 846 "parse_tree_out_clause.m"
      case (MR_Integer) 1:
#line 847 "parse_tree_out_clause.m"
        {
#line 848 "parse_tree_out_clause.m"
          {
#line 848 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) ", ");
          }
#line 847 "parse_tree_out_clause.m"
        }
#line 846 "parse_tree_out_clause.m"
        break;
#line 846 "parse_tree_out_clause.m"
    }
#line 826 "parse_tree_out_clause.m"
    *parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_14 = (MR_Integer) 1;
#line 827 "parse_tree_out_clause.m"
    {
#line 827 "parse_tree_out_clause.m"
      parse_tree__parse_tree_out_clause__mercury_output_trace_mutable_var_5_p_0(parse_tree__parse_tree_out_clause__VarSet_8, parse_tree__parse_tree_out_clause__VarNamePrint_9, parse_tree__parse_tree_out_clause__MutableVar_10);
    }
#line 824 "parse_tree_out_clause.m"
  }
#line 819 "parse_tree_out_clause.m"
}

#line 738 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_6_p_0(
#line 738 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__1_1,
#line 738 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__2_2,
#line 738 "parse_tree_out_clause.m"
  MR_String parse_tree__parse_tree_out_clause__HeadVar__3_3,
#line 738 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__4_4)
#line 738 "parse_tree_out_clause.m"
{
#line 741 "parse_tree_out_clause.m"
  while (MR_TRUE)
#line 741 "parse_tree_out_clause.m"
    {
#line 741 "parse_tree_out_clause.m"
      /* tailcall optimized into a loop */
#line 741 "parse_tree_out_clause.m"
      {
#line 741 "parse_tree_out_clause.m"
        MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 741 "parse_tree_out_clause.m"
        if ((parse_tree__parse_tree_out_clause__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 742 "parse_tree_out_clause.m"
          {
#line 742 "parse_tree_out_clause.m"
          }
#line 741 "parse_tree_out_clause.m"
        else
#line 744 "parse_tree_out_clause.m"
          {
#line 744 "parse_tree_out_clause.m"
            MR_Word parse_tree__parse_tree_out_clause__SVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__HeadVar__4_4, (MR_Integer) 0)));
#line 744 "parse_tree_out_clause.m"
            MR_Word parse_tree__parse_tree_out_clause__SVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__HeadVar__4_4, (MR_Integer) 1)));
#line 746 "parse_tree_out_clause.m"
            MR_Box parse_tree__parse_tree_out_clause__conv0_STATE_VARIABLE_IO_24_24;

#line 745 "parse_tree_out_clause.m"
            {
#line 745 "parse_tree_out_clause.m"
              mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_clause__HeadVar__3_3);
            }
#line 746 "parse_tree_out_clause.m"
            {
#line 746 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__HeadVar__1_1, parse_tree__parse_tree_out_clause__HeadVar__2_2, parse_tree__parse_tree_out_clause__SVar_16, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv0_STATE_VARIABLE_IO_24_24);
            }
#line 752 "parse_tree_out_clause.m"
            if ((parse_tree__parse_tree_out_clause__SVars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 753 "parse_tree_out_clause.m"
              {
#line 753 "parse_tree_out_clause.m"
              }
#line 752 "parse_tree_out_clause.m"
            else
#line 748 "parse_tree_out_clause.m"
              {
#line 748 "parse_tree_out_clause.m"
                MR_Word parse_tree__parse_tree_out_clause__SVar_39;
#line 748 "parse_tree_out_clause.m"
                MR_Word parse_tree__parse_tree_out_clause__SVars_40;
#line 746 "parse_tree_out_clause.m"
                MR_Box parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_24_47;

#line 749 "parse_tree_out_clause.m"
                {
#line 749 "parse_tree_out_clause.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 744 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__SVar_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__SVars_17, (MR_Integer) 0)));
#line 744 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__SVars_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__SVars_17, (MR_Integer) 1)));
#line 745 "parse_tree_out_clause.m"
                {
#line 745 "parse_tree_out_clause.m"
                  mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_clause__HeadVar__3_3);
                }
#line 746 "parse_tree_out_clause.m"
                {
#line 746 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__HeadVar__1_1, parse_tree__parse_tree_out_clause__HeadVar__2_2, parse_tree__parse_tree_out_clause__SVar_39, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_24_47);
                }
#line 752 "parse_tree_out_clause.m"
                if ((parse_tree__parse_tree_out_clause__SVars_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 753 "parse_tree_out_clause.m"
                  {
#line 753 "parse_tree_out_clause.m"
                  }
#line 752 "parse_tree_out_clause.m"
                else
#line 748 "parse_tree_out_clause.m"
                  {
#line 749 "parse_tree_out_clause.m"
                    {
#line 749 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
#line 750 "parse_tree_out_clause.m"
                    /* direct tailcall eliminated */
#line 750 "parse_tree_out_clause.m"
                    {
#line 750 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__HeadVar__4__tmp_copy_4 = parse_tree__parse_tree_out_clause__SVars_40;

#line 750 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__HeadVar__4_4 = parse_tree__parse_tree_out_clause__HeadVar__4__tmp_copy_4;
#line 750 "parse_tree_out_clause.m"
                    }
#line 750 "parse_tree_out_clause.m"
                    continue;
#line 748 "parse_tree_out_clause.m"
                  }
#line 748 "parse_tree_out_clause.m"
              }
#line 744 "parse_tree_out_clause.m"
          }
#line 741 "parse_tree_out_clause.m"
      }
#line 741 "parse_tree_out_clause.m"
      break;
#line 741 "parse_tree_out_clause.m"
    }
#line 738 "parse_tree_out_clause.m"
}

#line 676 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_promise_eqv_solutions_goal_10_p_0(
#line 676 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_11,
#line 676 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_12,
#line 676 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Vars_13,
#line 676 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__StateVars_14,
#line 676 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__DotSVars_15,
#line 676 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__ColonSVars_16,
#line 676 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Goal_17,
#line 676 "parse_tree_out_clause.m"
  MR_String parse_tree__parse_tree_out_clause__Keyword_18)
#line 676 "parse_tree_out_clause.m"
{
#line 682 "parse_tree_out_clause.m"
  {
#line 682 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded = (parse_tree__parse_tree_out_clause__Vars_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 683 "parse_tree_out_clause.m"
    if (parse_tree__parse_tree_out_clause__succeeded)
#line 683 "parse_tree_out_clause.m"
      {
#line 684 "parse_tree_out_clause.m"
        parse_tree__parse_tree_out_clause__succeeded = (parse_tree__parse_tree_out_clause__StateVars_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 683 "parse_tree_out_clause.m"
          {
#line 685 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__succeeded = (parse_tree__parse_tree_out_clause__DotSVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "parse_tree_out_clause.m"
            if (parse_tree__parse_tree_out_clause__succeeded)
#line 686 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__succeeded = (parse_tree__parse_tree_out_clause__ColonSVars_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "parse_tree_out_clause.m"
          }
#line 683 "parse_tree_out_clause.m"
      }
#line 682 "parse_tree_out_clause.m"
    if (parse_tree__parse_tree_out_clause__succeeded)
#line 690 "parse_tree_out_clause.m"
      {
#line 690 "parse_tree_out_clause.m"
        parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_11, parse_tree__parse_tree_out_clause__Indent_12, parse_tree__parse_tree_out_clause__Goal_17);
      }
#line 682 "parse_tree_out_clause.m"
    else
#line 692 "parse_tree_out_clause.m"
      {
#line 692 "parse_tree_out_clause.m"
        MR_Integer parse_tree__parse_tree_out_clause__Indent1_38;
#line 696 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_20_20;
#line 696 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_21_21;
#line 697 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_22_22;
#line 697 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_23_23;
#line 709 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_28_28;
#line 709 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_29_29;
#line 722 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_36_36;
#line 722 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_37_37;

#line 692 "parse_tree_out_clause.m"
        {
#line 692 "parse_tree_out_clause.m"
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_clause__Keyword_18);
        }
#line 693 "parse_tree_out_clause.m"
        {
#line 693 "parse_tree_out_clause.m"
          mercury__io__write_string_3_p_0((MR_String) " [");
        }
#line 694 "parse_tree_out_clause.m"
        {
#line 694 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_11, (MR_Integer) 0, parse_tree__parse_tree_out_clause__Vars_13);
        }
#line 696 "parse_tree_out_clause.m"
        parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Vars_13)) == (MR_mktag((MR_Integer) 1)));
#line 696 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 696 "parse_tree_out_clause.m"
          {
#line 696 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_13, (MR_Integer) 0)));
#line 696 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_13, (MR_Integer) 1)));
#line 697 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__StateVars_14)) == (MR_mktag((MR_Integer) 1)));
#line 697 "parse_tree_out_clause.m"
            if (parse_tree__parse_tree_out_clause__succeeded)
#line 697 "parse_tree_out_clause.m"
              {
#line 697 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_14, (MR_Integer) 0)));
#line 697 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_14, (MR_Integer) 1)));
#line 697 "parse_tree_out_clause.m"
              }
#line 696 "parse_tree_out_clause.m"
          }
#line 695 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 699 "parse_tree_out_clause.m"
          {
#line 699 "parse_tree_out_clause.m"
            {
#line 699 "parse_tree_out_clause.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 699 "parse_tree_out_clause.m"
          }
#line 695 "parse_tree_out_clause.m"
        else
#line 695 "parse_tree_out_clause.m"
          {
#line 695 "parse_tree_out_clause.m"
          }
#line 703 "parse_tree_out_clause.m"
        {
#line 703 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_6_p_0(parse_tree__parse_tree_out_clause__VarSet_11, (MR_Integer) 0, (MR_String) "!", parse_tree__parse_tree_out_clause__StateVars_14);
        }
#line 706 "parse_tree_out_clause.m"
        {
#line 706 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__V_24_24;
#line 706 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__V_25_25;

#line 706 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Vars_13)) == (MR_mktag((MR_Integer) 1)));
#line 706 "parse_tree_out_clause.m"
          if (parse_tree__parse_tree_out_clause__succeeded)
#line 706 "parse_tree_out_clause.m"
            {
#line 706 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_13, (MR_Integer) 0)));
#line 706 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_13, (MR_Integer) 1)));
#line 706 "parse_tree_out_clause.m"
            }
#line 706 "parse_tree_out_clause.m"
        }
#line 707 "parse_tree_out_clause.m"
        if (!(parse_tree__parse_tree_out_clause__succeeded))
#line 707 "parse_tree_out_clause.m"
          {
#line 707 "parse_tree_out_clause.m"
            MR_Word parse_tree__parse_tree_out_clause__V_26_26;
#line 707 "parse_tree_out_clause.m"
            MR_Word parse_tree__parse_tree_out_clause__V_27_27;

#line 707 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__StateVars_14)) == (MR_mktag((MR_Integer) 1)));
#line 707 "parse_tree_out_clause.m"
            if (parse_tree__parse_tree_out_clause__succeeded)
#line 707 "parse_tree_out_clause.m"
              {
#line 707 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_14, (MR_Integer) 0)));
#line 707 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_14, (MR_Integer) 1)));
#line 707 "parse_tree_out_clause.m"
              }
#line 707 "parse_tree_out_clause.m"
          }
#line 708 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 708 "parse_tree_out_clause.m"
          {
#line 709 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__DotSVars_15)) == (MR_mktag((MR_Integer) 1)));
#line 709 "parse_tree_out_clause.m"
            if (parse_tree__parse_tree_out_clause__succeeded)
#line 709 "parse_tree_out_clause.m"
              {
#line 709 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__DotSVars_15, (MR_Integer) 0)));
#line 709 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__DotSVars_15, (MR_Integer) 1)));
#line 709 "parse_tree_out_clause.m"
              }
#line 708 "parse_tree_out_clause.m"
          }
#line 705 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 711 "parse_tree_out_clause.m"
          {
#line 711 "parse_tree_out_clause.m"
            {
#line 711 "parse_tree_out_clause.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 711 "parse_tree_out_clause.m"
          }
#line 705 "parse_tree_out_clause.m"
        else
#line 705 "parse_tree_out_clause.m"
          {
#line 705 "parse_tree_out_clause.m"
          }
#line 715 "parse_tree_out_clause.m"
        {
#line 715 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_6_p_0(parse_tree__parse_tree_out_clause__VarSet_11, (MR_Integer) 0, (MR_String) "!.", parse_tree__parse_tree_out_clause__DotSVars_15);
        }
#line 718 "parse_tree_out_clause.m"
        {
#line 718 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__V_30_30;
#line 718 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__V_31_31;

#line 718 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Vars_13)) == (MR_mktag((MR_Integer) 1)));
#line 718 "parse_tree_out_clause.m"
          if (parse_tree__parse_tree_out_clause__succeeded)
#line 718 "parse_tree_out_clause.m"
            {
#line 718 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_13, (MR_Integer) 0)));
#line 718 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_13, (MR_Integer) 1)));
#line 718 "parse_tree_out_clause.m"
            }
#line 718 "parse_tree_out_clause.m"
        }
#line 719 "parse_tree_out_clause.m"
        if (!(parse_tree__parse_tree_out_clause__succeeded))
#line 719 "parse_tree_out_clause.m"
          {
#line 719 "parse_tree_out_clause.m"
            {
#line 719 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_32_32;
#line 719 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_33_33;

#line 719 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__StateVars_14)) == (MR_mktag((MR_Integer) 1)));
#line 719 "parse_tree_out_clause.m"
              if (parse_tree__parse_tree_out_clause__succeeded)
#line 719 "parse_tree_out_clause.m"
                {
#line 719 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_14, (MR_Integer) 0)));
#line 719 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_14, (MR_Integer) 1)));
#line 719 "parse_tree_out_clause.m"
                }
#line 719 "parse_tree_out_clause.m"
            }
#line 719 "parse_tree_out_clause.m"
            if (!(parse_tree__parse_tree_out_clause__succeeded))
#line 720 "parse_tree_out_clause.m"
              {
#line 720 "parse_tree_out_clause.m"
                MR_Word parse_tree__parse_tree_out_clause__V_34_34;
#line 720 "parse_tree_out_clause.m"
                MR_Word parse_tree__parse_tree_out_clause__V_35_35;

#line 720 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__DotSVars_15)) == (MR_mktag((MR_Integer) 1)));
#line 720 "parse_tree_out_clause.m"
                if (parse_tree__parse_tree_out_clause__succeeded)
#line 720 "parse_tree_out_clause.m"
                  {
#line 720 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__DotSVars_15, (MR_Integer) 0)));
#line 720 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__DotSVars_15, (MR_Integer) 1)));
#line 720 "parse_tree_out_clause.m"
                  }
#line 720 "parse_tree_out_clause.m"
              }
#line 719 "parse_tree_out_clause.m"
          }
#line 721 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 721 "parse_tree_out_clause.m"
          {
#line 722 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__ColonSVars_16)) == (MR_mktag((MR_Integer) 1)));
#line 722 "parse_tree_out_clause.m"
            if (parse_tree__parse_tree_out_clause__succeeded)
#line 722 "parse_tree_out_clause.m"
              {
#line 722 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__ColonSVars_16, (MR_Integer) 0)));
#line 722 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__ColonSVars_16, (MR_Integer) 1)));
#line 722 "parse_tree_out_clause.m"
              }
#line 721 "parse_tree_out_clause.m"
          }
#line 717 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 724 "parse_tree_out_clause.m"
          {
#line 724 "parse_tree_out_clause.m"
            {
#line 724 "parse_tree_out_clause.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 724 "parse_tree_out_clause.m"
          }
#line 717 "parse_tree_out_clause.m"
        else
#line 717 "parse_tree_out_clause.m"
          {
#line 717 "parse_tree_out_clause.m"
          }
#line 728 "parse_tree_out_clause.m"
        {
#line 728 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_6_p_0(parse_tree__parse_tree_out_clause__VarSet_11, (MR_Integer) 0, (MR_String) "!:", parse_tree__parse_tree_out_clause__ColonSVars_16);
        }
#line 730 "parse_tree_out_clause.m"
        {
#line 730 "parse_tree_out_clause.m"
          mercury__io__write_string_3_p_0((MR_String) "] (");
        }
#line 731 "parse_tree_out_clause.m"
        parse_tree__parse_tree_out_clause__Indent1_38 = (parse_tree__parse_tree_out_clause__Indent_12 + (MR_Integer) 1);
#line 732 "parse_tree_out_clause.m"
        {
#line 732 "parse_tree_out_clause.m"
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_38);
        }
#line 733 "parse_tree_out_clause.m"
        {
#line 733 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_11, parse_tree__parse_tree_out_clause__Indent1_38, parse_tree__parse_tree_out_clause__Goal_17);
        }
#line 734 "parse_tree_out_clause.m"
        {
#line 734 "parse_tree_out_clause.m"
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_12);
        }
#line 735 "parse_tree_out_clause.m"
        {
#line 735 "parse_tree_out_clause.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
#line 692 "parse_tree_out_clause.m"
      }
#line 682 "parse_tree_out_clause.m"
  }
#line 676 "parse_tree_out_clause.m"
}

#line 648 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_some_5_p_0(
#line 648 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__TypeInfo_for_T_30,
#line 648 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 648 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Vars_7,
#line 648 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__StateVars_8)
#line 648 "parse_tree_out_clause.m"
{
#line 652 "parse_tree_out_clause.m"
  {
#line 652 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 653 "parse_tree_out_clause.m"
    {
#line 653 "parse_tree_out_clause.m"
      MR_Word parse_tree__parse_tree_out_clause__V_10_10;
#line 653 "parse_tree_out_clause.m"
      MR_Word parse_tree__parse_tree_out_clause__V_11_11;

#line 653 "parse_tree_out_clause.m"
      parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Vars_7)) == (MR_mktag((MR_Integer) 1)));
#line 653 "parse_tree_out_clause.m"
      if (parse_tree__parse_tree_out_clause__succeeded)
#line 653 "parse_tree_out_clause.m"
        {
#line 653 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_7, (MR_Integer) 0)));
#line 653 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_7, (MR_Integer) 1)));
#line 653 "parse_tree_out_clause.m"
        }
#line 653 "parse_tree_out_clause.m"
    }
#line 654 "parse_tree_out_clause.m"
    if (!(parse_tree__parse_tree_out_clause__succeeded))
#line 654 "parse_tree_out_clause.m"
      {
#line 654 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_12_12;
#line 654 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_13_13;

#line 654 "parse_tree_out_clause.m"
        parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__StateVars_8)) == (MR_mktag((MR_Integer) 1)));
#line 654 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 654 "parse_tree_out_clause.m"
          {
#line 654 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_8, (MR_Integer) 0)));
#line 654 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_8, (MR_Integer) 1)));
#line 654 "parse_tree_out_clause.m"
          }
#line 654 "parse_tree_out_clause.m"
      }
#line 652 "parse_tree_out_clause.m"
    if (parse_tree__parse_tree_out_clause__succeeded)
#line 657 "parse_tree_out_clause.m"
      {
#line 660 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_14_14;
#line 660 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_15_15;
#line 661 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_16_16;
#line 661 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_17_17;

#line 657 "parse_tree_out_clause.m"
        {
#line 657 "parse_tree_out_clause.m"
          mercury__io__write_string_3_p_0((MR_String) " some [");
        }
#line 658 "parse_tree_out_clause.m"
        {
#line 658 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(parse_tree__parse_tree_out_clause__TypeInfo_for_T_30, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__Vars_7);
        }
#line 660 "parse_tree_out_clause.m"
        parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Vars_7)) == (MR_mktag((MR_Integer) 1)));
#line 660 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 660 "parse_tree_out_clause.m"
          {
#line 660 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_7, (MR_Integer) 0)));
#line 660 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_7, (MR_Integer) 1)));
#line 661 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__StateVars_8)) == (MR_mktag((MR_Integer) 1)));
#line 661 "parse_tree_out_clause.m"
            if (parse_tree__parse_tree_out_clause__succeeded)
#line 661 "parse_tree_out_clause.m"
              {
#line 661 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_8, (MR_Integer) 0)));
#line 661 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_8, (MR_Integer) 1)));
#line 661 "parse_tree_out_clause.m"
              }
#line 660 "parse_tree_out_clause.m"
          }
#line 659 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 663 "parse_tree_out_clause.m"
          {
#line 663 "parse_tree_out_clause.m"
            {
#line 663 "parse_tree_out_clause.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 665 "parse_tree_out_clause.m"
            {
#line 665 "parse_tree_out_clause.m"
              parse_tree__mercury_to_mercury__mercury_output_state_vars_5_p_0(parse_tree__parse_tree_out_clause__TypeInfo_for_T_30, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__StateVars_8);
            }
#line 663 "parse_tree_out_clause.m"
          }
#line 659 "parse_tree_out_clause.m"
        else
#line 659 "parse_tree_out_clause.m"
          {
#line 659 "parse_tree_out_clause.m"
          }
#line 669 "parse_tree_out_clause.m"
        {
#line 669 "parse_tree_out_clause.m"
          mercury__io__write_string_3_p_0((MR_String) "]");
        }
#line 657 "parse_tree_out_clause.m"
      }
#line 652 "parse_tree_out_clause.m"
    else
#line 652 "parse_tree_out_clause.m"
      {
#line 652 "parse_tree_out_clause.m"
      }
#line 652 "parse_tree_out_clause.m"
  }
#line 648 "parse_tree_out_clause.m"
}

#line 625 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_orelse_goals_5_p_0(
#line 625 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 625 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
#line 625 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Goals_8)
#line 625 "parse_tree_out_clause.m"
{
#line 630 "parse_tree_out_clause.m"
  while (MR_TRUE)
#line 630 "parse_tree_out_clause.m"
    {
#line 630 "parse_tree_out_clause.m"
      /* tailcall optimized into a loop */
#line 630 "parse_tree_out_clause.m"
      {
#line 630 "parse_tree_out_clause.m"
        MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 630 "parse_tree_out_clause.m"
        if ((parse_tree__parse_tree_out_clause__Goals_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 630 "parse_tree_out_clause.m"
          {
#line 630 "parse_tree_out_clause.m"
          }
#line 630 "parse_tree_out_clause.m"
        else
#line 632 "parse_tree_out_clause.m"
          {
#line 632 "parse_tree_out_clause.m"
            MR_Word parse_tree__parse_tree_out_clause__HeadGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Goals_8, (MR_Integer) 0)));
#line 632 "parse_tree_out_clause.m"
            MR_Word parse_tree__parse_tree_out_clause__TailGoals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Goals_8, (MR_Integer) 1)));

#line 636 "parse_tree_out_clause.m"
            if ((parse_tree__parse_tree_out_clause__TailGoals_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 634 "parse_tree_out_clause.m"
              {
#line 634 "parse_tree_out_clause.m"
                MR_Integer parse_tree__parse_tree_out_clause__V_24_24 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);

#line 635 "parse_tree_out_clause.m"
                {
#line 635 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__V_24_24, parse_tree__parse_tree_out_clause__HeadGoal_10);
                }
#line 634 "parse_tree_out_clause.m"
              }
#line 636 "parse_tree_out_clause.m"
            else
#line 637 "parse_tree_out_clause.m"
              {
#line 637 "parse_tree_out_clause.m"
                MR_Integer parse_tree__parse_tree_out_clause__V_16_16 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);

#line 638 "parse_tree_out_clause.m"
                {
#line 638 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__V_16_16, parse_tree__parse_tree_out_clause__HeadGoal_10);
                }
#line 639 "parse_tree_out_clause.m"
                {
#line 639 "parse_tree_out_clause.m"
                  parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                }
#line 640 "parse_tree_out_clause.m"
                {
#line 640 "parse_tree_out_clause.m"
                  mercury__io__write_string_3_p_0((MR_String) "orelse");
                }
#line 641 "parse_tree_out_clause.m"
                {
#line 641 "parse_tree_out_clause.m"
                  parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                }
#line 642 "parse_tree_out_clause.m"
                /* direct tailcall eliminated */
#line 642 "parse_tree_out_clause.m"
                {
#line 642 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Goals__tmp_copy_8 = parse_tree__parse_tree_out_clause__TailGoals_11;

#line 642 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__Goals_8 = parse_tree__parse_tree_out_clause__Goals__tmp_copy_8;
#line 642 "parse_tree_out_clause.m"
                }
#line 642 "parse_tree_out_clause.m"
                continue;
#line 637 "parse_tree_out_clause.m"
              }
#line 632 "parse_tree_out_clause.m"
          }
#line 630 "parse_tree_out_clause.m"
      }
#line 630 "parse_tree_out_clause.m"
      break;
#line 630 "parse_tree_out_clause.m"
    }
#line 625 "parse_tree_out_clause.m"
}

#line 608 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_par_conj_5_p_0(
#line 608 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 608 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
#line 608 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Goal_8)
#line 608 "parse_tree_out_clause.m"
{
#line 611 "parse_tree_out_clause.m"
  while (MR_TRUE)
#line 611 "parse_tree_out_clause.m"
    {
#line 611 "parse_tree_out_clause.m"
      /* tailcall optimized into a loop */
#line 611 "parse_tree_out_clause.m"
      {
#line 611 "parse_tree_out_clause.m"
        MR_bool parse_tree__parse_tree_out_clause__succeeded;
#line 611 "parse_tree_out_clause.m"
        MR_Integer parse_tree__parse_tree_out_clause__Indent1_10;
#line 616 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__SubGoalA_12;
#line 616 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__SubGoalB_13;
#line 616 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_11_11;

#line 612 "parse_tree_out_clause.m"
        {
#line 612 "parse_tree_out_clause.m"
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
        }
#line 613 "parse_tree_out_clause.m"
        {
#line 613 "parse_tree_out_clause.m"
          mercury__io__write_string_3_p_0((MR_String) "&");
        }
#line 614 "parse_tree_out_clause.m"
        parse_tree__parse_tree_out_clause__Indent1_10 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 615 "parse_tree_out_clause.m"
        {
#line 615 "parse_tree_out_clause.m"
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_10);
        }
#line 616 "parse_tree_out_clause.m"
        parse_tree__parse_tree_out_clause__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Goal_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 616 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 616 "parse_tree_out_clause.m"
          {
#line 616 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
#line 616 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__SubGoalA_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 616 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__SubGoalB_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 617 "parse_tree_out_clause.m"
            {
#line 617 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_10, parse_tree__parse_tree_out_clause__SubGoalA_12);
            }
#line 618 "parse_tree_out_clause.m"
            {
#line 618 "parse_tree_out_clause.m"
              /* direct tailcall eliminated */
#line 618 "parse_tree_out_clause.m"
              {
#line 618 "parse_tree_out_clause.m"
                MR_Word parse_tree__parse_tree_out_clause__Goal__tmp_copy_8 = parse_tree__parse_tree_out_clause__SubGoalB_13;

#line 618 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__Goal_8 = parse_tree__parse_tree_out_clause__Goal__tmp_copy_8;
#line 618 "parse_tree_out_clause.m"
              }
#line 618 "parse_tree_out_clause.m"
              continue;
#line 618 "parse_tree_out_clause.m"
            }
#line 616 "parse_tree_out_clause.m"
          }
#line 616 "parse_tree_out_clause.m"
        else
#line 620 "parse_tree_out_clause.m"
          {
#line 620 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_10, parse_tree__parse_tree_out_clause__Goal_8);
          }
#line 611 "parse_tree_out_clause.m"
      }
#line 611 "parse_tree_out_clause.m"
      break;
#line 611 "parse_tree_out_clause.m"
    }
#line 608 "parse_tree_out_clause.m"
}

#line 591 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_disj_5_p_0(
#line 591 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 591 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
#line 591 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Goal_8)
#line 591 "parse_tree_out_clause.m"
{
#line 594 "parse_tree_out_clause.m"
  while (MR_TRUE)
#line 594 "parse_tree_out_clause.m"
    {
#line 594 "parse_tree_out_clause.m"
      /* tailcall optimized into a loop */
#line 594 "parse_tree_out_clause.m"
      {
#line 594 "parse_tree_out_clause.m"
        MR_bool parse_tree__parse_tree_out_clause__succeeded;
#line 594 "parse_tree_out_clause.m"
        MR_Integer parse_tree__parse_tree_out_clause__Indent1_10;
#line 599 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__SubGoalA_12;
#line 599 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__SubGoalB_13;
#line 599 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_11_11;

#line 595 "parse_tree_out_clause.m"
        {
#line 595 "parse_tree_out_clause.m"
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
        }
#line 596 "parse_tree_out_clause.m"
        {
#line 596 "parse_tree_out_clause.m"
          mercury__io__write_string_3_p_0((MR_String) ";");
        }
#line 597 "parse_tree_out_clause.m"
        parse_tree__parse_tree_out_clause__Indent1_10 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 598 "parse_tree_out_clause.m"
        {
#line 598 "parse_tree_out_clause.m"
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_10);
        }
#line 599 "parse_tree_out_clause.m"
        parse_tree__parse_tree_out_clause__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Goal_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 599 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 599 "parse_tree_out_clause.m"
          {
#line 599 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
#line 599 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__SubGoalA_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 599 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__SubGoalB_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 600 "parse_tree_out_clause.m"
            {
#line 600 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_10, parse_tree__parse_tree_out_clause__SubGoalA_12);
            }
#line 601 "parse_tree_out_clause.m"
            {
#line 601 "parse_tree_out_clause.m"
              /* direct tailcall eliminated */
#line 601 "parse_tree_out_clause.m"
              {
#line 601 "parse_tree_out_clause.m"
                MR_Word parse_tree__parse_tree_out_clause__Goal__tmp_copy_8 = parse_tree__parse_tree_out_clause__SubGoalB_13;

#line 601 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__Goal_8 = parse_tree__parse_tree_out_clause__Goal__tmp_copy_8;
#line 601 "parse_tree_out_clause.m"
              }
#line 601 "parse_tree_out_clause.m"
              continue;
#line 601 "parse_tree_out_clause.m"
            }
#line 599 "parse_tree_out_clause.m"
          }
#line 599 "parse_tree_out_clause.m"
        else
#line 603 "parse_tree_out_clause.m"
          {
#line 603 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_10, parse_tree__parse_tree_out_clause__Goal_8);
          }
#line 594 "parse_tree_out_clause.m"
      }
#line 594 "parse_tree_out_clause.m"
      break;
#line 594 "parse_tree_out_clause.m"
    }
#line 591 "parse_tree_out_clause.m"
}

#line 568 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_call_5_p_0(
#line 568 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 568 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__SymName_7,
#line 568 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Term_8)
#line 568 "parse_tree_out_clause.m"
{
#line 573 "parse_tree_out_clause.m"
  {
#line 573 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 573 "parse_tree_out_clause.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__SymName_7)) == (MR_mktag((MR_Integer) 1))))
#line 573 "parse_tree_out_clause.m"
      {
#line 573 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__SymName_7, (MR_Integer) 0)));
#line 573 "parse_tree_out_clause.m"
        MR_String parse_tree__parse_tree_out_clause__PredName_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__SymName_7, (MR_Integer) 1)));
#line 573 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__Context0_12;
#line 573 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__SubTerm_13;
#line 573 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_24_24;

#line 574 "parse_tree_out_clause.m"
        {
#line 574 "parse_tree_out_clause.m"
          parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, parse_tree__parse_tree_out_clause__ModuleName_10);
        }
#line 576 "parse_tree_out_clause.m"
        {
#line 576 "parse_tree_out_clause.m"
          mercury__io__write_string_3_p_0((MR_String) ".");
        }
#line 577 "parse_tree_out_clause.m"
        {
#line 577 "parse_tree_out_clause.m"
          mercury__term__context_init_1_p_0(&parse_tree__parse_tree_out_clause__Context0_12);
        }
#line 578 "parse_tree_out_clause.m"
        {
#line 578 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 578 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_24_24, 0) = ((MR_Box) (parse_tree__parse_tree_out_clause__PredName_11));
#line 578 "parse_tree_out_clause.m"
        }
#line 578 "parse_tree_out_clause.m"
        {
#line 578 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__SubTerm_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 578 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__SubTerm_13, 0) = ((MR_Box) (parse_tree__parse_tree_out_clause__V_24_24));
#line 578 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__SubTerm_13, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__Term_8));
#line 578 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__SubTerm_13, 2) = ((MR_Box) (parse_tree__parse_tree_out_clause__Context0_12));
#line 578 "parse_tree_out_clause.m"
        }
#line 579 "parse_tree_out_clause.m"
        {
#line 579 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out_clause__SubTerm_13);
        }
#line 573 "parse_tree_out_clause.m"
      }
#line 573 "parse_tree_out_clause.m"
    else
#line 582 "parse_tree_out_clause.m"
      {
#line 582 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_16_16;
#line 582 "parse_tree_out_clause.m"
        MR_String parse_tree__parse_tree_out_clause__PredName_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__SymName_7, (MR_Integer) 0)));
#line 582 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__Context0_29;
#line 582 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__SubTerm_30;

#line 583 "parse_tree_out_clause.m"
        {
#line 583 "parse_tree_out_clause.m"
          mercury__term__context_init_1_p_0(&parse_tree__parse_tree_out_clause__Context0_29);
        }
#line 584 "parse_tree_out_clause.m"
        {
#line 584 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 584 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_16_16, 0) = ((MR_Box) (parse_tree__parse_tree_out_clause__PredName_28));
#line 584 "parse_tree_out_clause.m"
        }
#line 584 "parse_tree_out_clause.m"
        {
#line 584 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__SubTerm_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 584 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__SubTerm_30, 0) = ((MR_Box) (parse_tree__parse_tree_out_clause__V_16_16));
#line 584 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__SubTerm_30, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__Term_8));
#line 584 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__SubTerm_30, 2) = ((MR_Box) (parse_tree__parse_tree_out_clause__Context0_29));
#line 584 "parse_tree_out_clause.m"
        }
#line 585 "parse_tree_out_clause.m"
        {
#line 585 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out_clause__SubTerm_30);
        }
#line 582 "parse_tree_out_clause.m"
      }
#line 573 "parse_tree_out_clause.m"
  }
#line 568 "parse_tree_out_clause.m"
}

#line 526 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(
#line 526 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 526 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
#line 526 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Goal_8)
#line 526 "parse_tree_out_clause.m"
{
#line 543 "parse_tree_out_clause.m"
  {
#line 543 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 543 "parse_tree_out_clause.m"
#line 543 "parse_tree_out_clause.m"
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Goal_8)) {
#line 543 "parse_tree_out_clause.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 543 "parse_tree_out_clause.m"
      case (MR_Integer) 0:
#line 543 "parse_tree_out_clause.m"
      case (MR_Integer) 1:
#line 544 "parse_tree_out_clause.m"
        {
#line 544 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__Goal_8);
        }
#line 543 "parse_tree_out_clause.m"
        break;
#line 543 "parse_tree_out_clause.m"
      case (MR_Integer) 2:
#line 557 "parse_tree_out_clause.m"
        {
#line 557 "parse_tree_out_clause.m"
          MR_Integer parse_tree__parse_tree_out_clause__Indent1_101;

#line 558 "parse_tree_out_clause.m"
          {
#line 558 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) "(");
          }
#line 559 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__Indent1_101 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 560 "parse_tree_out_clause.m"
          {
#line 560 "parse_tree_out_clause.m"
            parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_101);
          }
#line 561 "parse_tree_out_clause.m"
          {
#line 561 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_101, parse_tree__parse_tree_out_clause__Goal_8);
          }
#line 562 "parse_tree_out_clause.m"
          {
#line 562 "parse_tree_out_clause.m"
            parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
          }
#line 563 "parse_tree_out_clause.m"
          {
#line 563 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
#line 557 "parse_tree_out_clause.m"
        }
#line 543 "parse_tree_out_clause.m"
        break;
#line 543 "parse_tree_out_clause.m"
      case (MR_Integer) 3:
#line 543 "parse_tree_out_clause.m"
#line 543 "parse_tree_out_clause.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 0)))) {
#line 543 "parse_tree_out_clause.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 543 "parse_tree_out_clause.m"
          case (MR_Integer) 0:
#line 543 "parse_tree_out_clause.m"
          case (MR_Integer) 1:
#line 543 "parse_tree_out_clause.m"
          case (MR_Integer) 2:
#line 543 "parse_tree_out_clause.m"
          case (MR_Integer) 3:
#line 543 "parse_tree_out_clause.m"
          case (MR_Integer) 4:
#line 543 "parse_tree_out_clause.m"
          case (MR_Integer) 5:
#line 543 "parse_tree_out_clause.m"
          case (MR_Integer) 16:
#line 543 "parse_tree_out_clause.m"
          case (MR_Integer) 17:
#line 543 "parse_tree_out_clause.m"
          case (MR_Integer) 18:
#line 543 "parse_tree_out_clause.m"
          case (MR_Integer) 19:
#line 544 "parse_tree_out_clause.m"
            {
#line 544 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__Goal_8);
            }
#line 543 "parse_tree_out_clause.m"
            break;
#line 543 "parse_tree_out_clause.m"
          case (MR_Integer) 6:
#line 543 "parse_tree_out_clause.m"
          case (MR_Integer) 7:
#line 543 "parse_tree_out_clause.m"
          case (MR_Integer) 8:
#line 543 "parse_tree_out_clause.m"
          case (MR_Integer) 9:
#line 543 "parse_tree_out_clause.m"
          case (MR_Integer) 10:
#line 543 "parse_tree_out_clause.m"
          case (MR_Integer) 11:
#line 543 "parse_tree_out_clause.m"
          case (MR_Integer) 12:
#line 543 "parse_tree_out_clause.m"
          case (MR_Integer) 13:
#line 543 "parse_tree_out_clause.m"
          case (MR_Integer) 14:
#line 543 "parse_tree_out_clause.m"
          case (MR_Integer) 15:
#line 557 "parse_tree_out_clause.m"
            {
#line 557 "parse_tree_out_clause.m"
              MR_Integer parse_tree__parse_tree_out_clause__Indent1_101;

#line 558 "parse_tree_out_clause.m"
              {
#line 558 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
#line 559 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__Indent1_101 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 560 "parse_tree_out_clause.m"
              {
#line 560 "parse_tree_out_clause.m"
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_101);
              }
#line 561 "parse_tree_out_clause.m"
              {
#line 561 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_101, parse_tree__parse_tree_out_clause__Goal_8);
              }
#line 562 "parse_tree_out_clause.m"
              {
#line 562 "parse_tree_out_clause.m"
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
              }
#line 563 "parse_tree_out_clause.m"
              {
#line 563 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 557 "parse_tree_out_clause.m"
            }
#line 543 "parse_tree_out_clause.m"
            break;
#line 543 "parse_tree_out_clause.m"
        }
#line 543 "parse_tree_out_clause.m"
        break;
#line 543 "parse_tree_out_clause.m"
    }
#line 543 "parse_tree_out_clause.m"
  }
#line 526 "parse_tree_out_clause.m"
}

#line 47 "parse_tree_out_clause.m"
void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_mutable_var_5_p_0(
#line 47 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 47 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarNamePrint_7,
#line 47 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__MutableVar_8)
#line 47 "parse_tree_out_clause.m"
{
#line 811 "parse_tree_out_clause.m"
  {
#line 811 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded;
#line 811 "parse_tree_out_clause.m"
    MR_String parse_tree__parse_tree_out_clause__MutableName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__MutableVar_8, (MR_Integer) 0)));
#line 811 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__StateVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__MutableVar_8, (MR_Integer) 1)));

#line 813 "parse_tree_out_clause.m"
    {
#line 813 "parse_tree_out_clause.m"
      mercury__io__write_string_3_p_0((MR_String) "state(");
    }
#line 814 "parse_tree_out_clause.m"
    {
#line 814 "parse_tree_out_clause.m"
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_clause__MutableName_10);
    }
#line 815 "parse_tree_out_clause.m"
    {
#line 815 "parse_tree_out_clause.m"
      mercury__io__write_string_3_p_0((MR_String) ", !");
    }
#line 816 "parse_tree_out_clause.m"
    {
#line 816 "parse_tree_out_clause.m"
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__VarNamePrint_7, parse_tree__parse_tree_out_clause__StateVar_11);
    }
#line 817 "parse_tree_out_clause.m"
    {
#line 817 "parse_tree_out_clause.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 811 "parse_tree_out_clause.m"
  }
#line 47 "parse_tree_out_clause.m"
}

#line 44 "parse_tree_out_clause.m"
void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_runtime_3_p_0(
#line 44 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__1_1)
#line 44 "parse_tree_out_clause.m"
{
#line 806 "parse_tree_out_clause.m"
  {
#line 806 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded;
#line 806 "parse_tree_out_clause.m"
    MR_String parse_tree__parse_tree_out_clause__EnvVarName_4 = (MR_String) parse_tree__parse_tree_out_clause__HeadVar__1_1;

#line 807 "parse_tree_out_clause.m"
    {
#line 807 "parse_tree_out_clause.m"
      mercury__io__write_string_3_p_0((MR_String) "env(");
    }
#line 808 "parse_tree_out_clause.m"
    {
#line 808 "parse_tree_out_clause.m"
      mercury__term_io__quote_string_3_p_0(parse_tree__parse_tree_out_clause__EnvVarName_4);
    }
#line 809 "parse_tree_out_clause.m"
    {
#line 809 "parse_tree_out_clause.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 806 "parse_tree_out_clause.m"
  }
#line 44 "parse_tree_out_clause.m"
}

#line 41 "parse_tree_out_clause.m"
void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_compiletime_3_p_0(
#line 41 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__CompileTime_4)
#line 41 "parse_tree_out_clause.m"
{
#line 783 "parse_tree_out_clause.m"
  {
#line 783 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 783 "parse_tree_out_clause.m"
#line 783 "parse_tree_out_clause.m"
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out_clause__CompileTime_4)) {
#line 783 "parse_tree_out_clause.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 783 "parse_tree_out_clause.m"
      case (MR_Integer) 0:
#line 783 "parse_tree_out_clause.m"
        {
#line 783 "parse_tree_out_clause.m"
          MR_String parse_tree__parse_tree_out_clause__FlagName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__CompileTime_4, (MR_Integer) 0)));

#line 784 "parse_tree_out_clause.m"
          {
#line 784 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) "flag(");
          }
#line 785 "parse_tree_out_clause.m"
          {
#line 785 "parse_tree_out_clause.m"
            mercury__term_io__quote_string_3_p_0(parse_tree__parse_tree_out_clause__FlagName_6);
          }
#line 786 "parse_tree_out_clause.m"
          {
#line 786 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
#line 783 "parse_tree_out_clause.m"
        }
#line 783 "parse_tree_out_clause.m"
        break;
#line 783 "parse_tree_out_clause.m"
      case (MR_Integer) 1:
#line 788 "parse_tree_out_clause.m"
        {
#line 788 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__Grade_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__CompileTime_4, (MR_Integer) 0)));
#line 788 "parse_tree_out_clause.m"
          MR_String parse_tree__parse_tree_out_clause__GradeName_8;

#line 789 "parse_tree_out_clause.m"
          {
#line 789 "parse_tree_out_clause.m"
            parse_tree__prog_data__parse_trace_grade_name_2_p_1(&parse_tree__parse_tree_out_clause__GradeName_8, parse_tree__parse_tree_out_clause__Grade_7);
          }
#line 790 "parse_tree_out_clause.m"
          {
#line 790 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) "grade(");
          }
#line 791 "parse_tree_out_clause.m"
          {
#line 791 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_clause__GradeName_8);
          }
#line 792 "parse_tree_out_clause.m"
          {
#line 792 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
#line 788 "parse_tree_out_clause.m"
        }
#line 783 "parse_tree_out_clause.m"
        break;
#line 783 "parse_tree_out_clause.m"
      case (MR_Integer) 2:
#line 794 "parse_tree_out_clause.m"
        {
#line 794 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__Level_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__CompileTime_4, (MR_Integer) 0)));

#line 795 "parse_tree_out_clause.m"
          {
#line 795 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) "tracelevel(");
          }
#line 799 "parse_tree_out_clause.m"
#line 799 "parse_tree_out_clause.m"
          switch (parse_tree__parse_tree_out_clause__Level_9) {
#line 799 "parse_tree_out_clause.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 799 "parse_tree_out_clause.m"
            case (MR_Integer) 1:
#line 800 "parse_tree_out_clause.m"
              {
#line 801 "parse_tree_out_clause.m"
                {
#line 801 "parse_tree_out_clause.m"
                  mercury__io__write_string_3_p_0((MR_String) "deep");
                }
#line 800 "parse_tree_out_clause.m"
              }
#line 799 "parse_tree_out_clause.m"
              break;
#line 799 "parse_tree_out_clause.m"
            case (MR_Integer) 0:
#line 797 "parse_tree_out_clause.m"
              {
#line 798 "parse_tree_out_clause.m"
                {
#line 798 "parse_tree_out_clause.m"
                  mercury__io__write_string_3_p_0((MR_String) "shallow");
                }
#line 797 "parse_tree_out_clause.m"
              }
#line 799 "parse_tree_out_clause.m"
              break;
#line 799 "parse_tree_out_clause.m"
          }
#line 803 "parse_tree_out_clause.m"
          {
#line 803 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
#line 794 "parse_tree_out_clause.m"
        }
#line 783 "parse_tree_out_clause.m"
        break;
#line 783 "parse_tree_out_clause.m"
    }
#line 783 "parse_tree_out_clause.m"
  }
#line 41 "parse_tree_out_clause.m"
}

#line 38 "parse_tree_out_clause.m"
void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0(
#line 38 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__TypeInfo_for_T_36,
#line 38 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__PrintBase_5,
#line 38 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__TraceExpr_6)
#line 38 "parse_tree_out_clause.m"
{
#line 762 "parse_tree_out_clause.m"
  while (MR_TRUE)
#line 762 "parse_tree_out_clause.m"
    {
#line 762 "parse_tree_out_clause.m"
      /* tailcall optimized into a loop */
#line 762 "parse_tree_out_clause.m"
      {
#line 762 "parse_tree_out_clause.m"
        MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 762 "parse_tree_out_clause.m"
#line 762 "parse_tree_out_clause.m"
        switch (MR_tag((MR_Word) parse_tree__parse_tree_out_clause__TraceExpr_6)) {
#line 762 "parse_tree_out_clause.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 762 "parse_tree_out_clause.m"
          case (MR_Integer) 0:
#line 760 "parse_tree_out_clause.m"
            {
#line 760 "parse_tree_out_clause.m"
              MR_Box parse_tree__parse_tree_out_clause__Base_8 = (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0));
#line 761 "parse_tree_out_clause.m"
              void MR_CALL (* parse_tree__parse_tree_out_clause__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__PrintBase_5, (MR_Integer) 1)));
#line 761 "parse_tree_out_clause.m"
              MR_Box parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_12;

#line 761 "parse_tree_out_clause.m"
              {
#line 761 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__func_0(((MR_Box) parse_tree__parse_tree_out_clause__PrintBase_5), parse_tree__parse_tree_out_clause__Base_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_12);
              }
#line 760 "parse_tree_out_clause.m"
            }
#line 762 "parse_tree_out_clause.m"
            break;
#line 762 "parse_tree_out_clause.m"
          case (MR_Integer) 1:
#line 763 "parse_tree_out_clause.m"
            {
#line 763 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__TraceExprA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));

#line 764 "parse_tree_out_clause.m"
              {
#line 764 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) "not(");
              }
#line 765 "parse_tree_out_clause.m"
              {
#line 765 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0(parse_tree__parse_tree_out_clause__TypeInfo_for_T_36, parse_tree__parse_tree_out_clause__PrintBase_5, parse_tree__parse_tree_out_clause__TraceExprA_9);
              }
#line 766 "parse_tree_out_clause.m"
              {
#line 766 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 763 "parse_tree_out_clause.m"
            }
#line 762 "parse_tree_out_clause.m"
            break;
#line 762 "parse_tree_out_clause.m"
          case (MR_Integer) 2:
#line 762 "parse_tree_out_clause.m"
            {
#line 762 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 2)));
#line 762 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 1)));
#line 762 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));

#line 762 "parse_tree_out_clause.m"
#line 762 "parse_tree_out_clause.m"
              switch (parse_tree__parse_tree_out_clause__V_39_39) {
#line 762 "parse_tree_out_clause.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 762 "parse_tree_out_clause.m"
                case (MR_Integer) 1:
#line 775 "parse_tree_out_clause.m"
                  {
#line 776 "parse_tree_out_clause.m"
                    {
#line 776 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0(parse_tree__parse_tree_out_clause__TypeInfo_for_T_36, parse_tree__parse_tree_out_clause__PrintBase_5, parse_tree__parse_tree_out_clause__V_38_38);
                    }
#line 777 "parse_tree_out_clause.m"
                    {
#line 777 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) " and ");
                    }
#line 778 "parse_tree_out_clause.m"
                    /* direct tailcall eliminated */
#line 778 "parse_tree_out_clause.m"
                    {
#line 778 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__TraceExpr__tmp_copy_6 = parse_tree__parse_tree_out_clause__V_37_37;

#line 778 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__TraceExpr_6 = parse_tree__parse_tree_out_clause__TraceExpr__tmp_copy_6;
#line 778 "parse_tree_out_clause.m"
                    }
#line 778 "parse_tree_out_clause.m"
                    continue;
#line 775 "parse_tree_out_clause.m"
                  }
#line 762 "parse_tree_out_clause.m"
                  break;
#line 762 "parse_tree_out_clause.m"
                case (MR_Integer) 0:
#line 768 "parse_tree_out_clause.m"
                  {
#line 769 "parse_tree_out_clause.m"
                    {
#line 769 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
#line 770 "parse_tree_out_clause.m"
                    {
#line 770 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0(parse_tree__parse_tree_out_clause__TypeInfo_for_T_36, parse_tree__parse_tree_out_clause__PrintBase_5, parse_tree__parse_tree_out_clause__V_38_38);
                    }
#line 771 "parse_tree_out_clause.m"
                    {
#line 771 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) ") or (");
                    }
#line 772 "parse_tree_out_clause.m"
                    {
#line 772 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0(parse_tree__parse_tree_out_clause__TypeInfo_for_T_36, parse_tree__parse_tree_out_clause__PrintBase_5, parse_tree__parse_tree_out_clause__V_37_37);
                    }
#line 773 "parse_tree_out_clause.m"
                    {
#line 773 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
#line 768 "parse_tree_out_clause.m"
                  }
#line 762 "parse_tree_out_clause.m"
                  break;
#line 762 "parse_tree_out_clause.m"
              }
#line 762 "parse_tree_out_clause.m"
            }
#line 762 "parse_tree_out_clause.m"
            break;
#line 762 "parse_tree_out_clause.m"
        }
#line 762 "parse_tree_out_clause.m"
      }
#line 762 "parse_tree_out_clause.m"
      break;
#line 762 "parse_tree_out_clause.m"
    }
#line 38 "parse_tree_out_clause.m"
}

#line 445 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_2(
#line 445 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__closure_arg,
#line 445 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_1,
#line 445 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_2,
#line 445 "parse_tree_out_clause.m"
  MR_Box * parse_tree__parse_tree_out_clause__wrapper_arg_3)
#line 445 "parse_tree_out_clause.m"
{
#line 445 "parse_tree_out_clause.m"
  {
#line 445 "parse_tree_out_clause.m"
    MR_Box parse_tree__parse_tree_out_clause__closure = parse_tree__parse_tree_out_clause__closure_arg;

#line 445 "parse_tree_out_clause.m"
    {
#line 445 "parse_tree_out_clause.m"
      parse_tree__parse_tree_out_clause__mercury_output_catch_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_clause__wrapper_arg_1));
    }
#line 445 "parse_tree_out_clause.m"
  }
#line 445 "parse_tree_out_clause.m"
}

#line 405 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_1(
#line 405 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__closure_arg,
#line 405 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_1,
#line 405 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_2,
#line 405 "parse_tree_out_clause.m"
  MR_Box * parse_tree__parse_tree_out_clause__wrapper_arg_3,
#line 405 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_4,
#line 405 "parse_tree_out_clause.m"
  MR_Box * parse_tree__parse_tree_out_clause__wrapper_arg_5)
#line 405 "parse_tree_out_clause.m"
{
#line 405 "parse_tree_out_clause.m"
  {
#line 405 "parse_tree_out_clause.m"
    MR_Box parse_tree__parse_tree_out_clause__closure = parse_tree__parse_tree_out_clause__closure_arg;
#line 405 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__conv0_STATE_VARIABLE_NeedComma_14;

#line 405 "parse_tree_out_clause.m"
    {
#line 405 "parse_tree_out_clause.m"
      parse_tree__parse_tree_out_clause__mercury_output_trace_mutable_var_and_comma_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_clause__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out_clause__wrapper_arg_2), &parse_tree__parse_tree_out_clause__conv0_STATE_VARIABLE_NeedComma_14);
    }
#line 405 "parse_tree_out_clause.m"
    *parse_tree__parse_tree_out_clause__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_clause__conv0_STATE_VARIABLE_NeedComma_14));
#line 405 "parse_tree_out_clause.m"
  }
#line 405 "parse_tree_out_clause.m"
}

#line 35 "parse_tree_out_clause.m"
void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(
#line 35 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 35 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
#line 35 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Goal_8)
#line 35 "parse_tree_out_clause.m"
{
#line 168 "parse_tree_out_clause.m"
  while (MR_TRUE)
#line 168 "parse_tree_out_clause.m"
    {
#line 168 "parse_tree_out_clause.m"
      /* tailcall optimized into a loop */
#line 168 "parse_tree_out_clause.m"
      {
#line 168 "parse_tree_out_clause.m"
        MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 168 "parse_tree_out_clause.m"
#line 168 "parse_tree_out_clause.m"
        switch (MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Goal_8)) {
#line 168 "parse_tree_out_clause.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 168 "parse_tree_out_clause.m"
          case (MR_Integer) 0:
#line 516 "parse_tree_out_clause.m"
            {
#line 516 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__TypeCtorInfo_471_471;
#line 516 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__TermA_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
#line 516 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__TermB_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 516 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__Purity_437 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 516 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 0)));

#line 517 "parse_tree_out_clause.m"
              {
#line 517 "parse_tree_out_clause.m"
                parse_tree__prog_out__write_purity_prefix_3_p_0(parse_tree__parse_tree_out_clause__Purity_437);
              }
#line 2595 "parse_tree.parse_tree_out_clause.c"
              parse_tree__parse_tree_out_clause__TypeCtorInfo_471_471 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 518 "parse_tree_out_clause.m"
              {
#line 518 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(parse_tree__parse_tree_out_clause__TypeCtorInfo_471_471, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__TermA_78);
              }
#line 519 "parse_tree_out_clause.m"
              {
#line 519 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) " = ");
              }
#line 520 "parse_tree_out_clause.m"
              {
#line 520 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0(parse_tree__parse_tree_out_clause__TypeCtorInfo_471_471, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out_clause__TermB_79);
              }
#line 516 "parse_tree_out_clause.m"
            }
#line 168 "parse_tree_out_clause.m"
            break;
#line 168 "parse_tree_out_clause.m"
          case (MR_Integer) 1:
#line 512 "parse_tree_out_clause.m"
            {
#line 512 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__Purity_434 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 512 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__Name_435 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
#line 512 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__Terms_436 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 512 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 0)));

#line 513 "parse_tree_out_clause.m"
              {
#line 513 "parse_tree_out_clause.m"
                parse_tree__prog_out__write_purity_prefix_3_p_0(parse_tree__parse_tree_out_clause__Purity_434);
              }
#line 514 "parse_tree_out_clause.m"
              {
#line 514 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__mercury_output_call_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Name_435, parse_tree__parse_tree_out_clause__Terms_436);
              }
#line 512 "parse_tree_out_clause.m"
            }
#line 168 "parse_tree_out_clause.m"
            break;
#line 168 "parse_tree_out_clause.m"
          case (MR_Integer) 2:
#line 484 "parse_tree_out_clause.m"
            {
#line 484 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__SubGoalA_426 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
#line 484 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__SubGoalB_427 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 484 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 0)));

#line 485 "parse_tree_out_clause.m"
              {
#line 485 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__SubGoalA_426);
              }
#line 486 "parse_tree_out_clause.m"
              {
#line 486 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) ",");
              }
#line 487 "parse_tree_out_clause.m"
              {
#line 487 "parse_tree_out_clause.m"
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
              }
#line 488 "parse_tree_out_clause.m"
              /* direct tailcall eliminated */
#line 488 "parse_tree_out_clause.m"
              {
#line 488 "parse_tree_out_clause.m"
                MR_Word parse_tree__parse_tree_out_clause__Goal__tmp_copy_8 = parse_tree__parse_tree_out_clause__SubGoalB_427;

#line 488 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__Goal_8 = parse_tree__parse_tree_out_clause__Goal__tmp_copy_8;
#line 488 "parse_tree_out_clause.m"
              }
#line 488 "parse_tree_out_clause.m"
              continue;
#line 484 "parse_tree_out_clause.m"
            }
#line 168 "parse_tree_out_clause.m"
            break;
#line 168 "parse_tree_out_clause.m"
          case (MR_Integer) 3:
#line 168 "parse_tree_out_clause.m"
#line 168 "parse_tree_out_clause.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 0)))) {
#line 168 "parse_tree_out_clause.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 168 "parse_tree_out_clause.m"
              case (MR_Integer) 0:
#line 171 "parse_tree_out_clause.m"
                {
#line 172 "parse_tree_out_clause.m"
                  {
#line 172 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "true");
                  }
#line 171 "parse_tree_out_clause.m"
                }
#line 168 "parse_tree_out_clause.m"
                break;
#line 168 "parse_tree_out_clause.m"
              case (MR_Integer) 1:
#line 459 "parse_tree_out_clause.m"
                {
#line 459 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Cond_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));
#line 459 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_419;
#line 459 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Vars_420 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 459 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__StateVars_421 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 459 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Then_422 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 5)));
#line 459 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Else_423 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 6)));
#line 459 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 460 "parse_tree_out_clause.m"
                  {
#line 460 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "(if");
                  }
#line 461 "parse_tree_out_clause.m"
                  {
#line 461 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_some_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Vars_420, parse_tree__parse_tree_out_clause__StateVars_421);
                  }
#line 462 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__Indent1_419 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 463 "parse_tree_out_clause.m"
                  {
#line 463 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_419);
                  }
#line 464 "parse_tree_out_clause.m"
                  {
#line 464 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_419, parse_tree__parse_tree_out_clause__Cond_68);
                  }
#line 465 "parse_tree_out_clause.m"
                  {
#line 465 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 466 "parse_tree_out_clause.m"
                  {
#line 466 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "then");
                  }
#line 467 "parse_tree_out_clause.m"
                  {
#line 467 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_419);
                  }
#line 468 "parse_tree_out_clause.m"
                  {
#line 468 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_419, parse_tree__parse_tree_out_clause__Then_422);
                  }
#line 469 "parse_tree_out_clause.m"
                  {
#line 469 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 470 "parse_tree_out_clause.m"
                  {
#line 470 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "else");
                  }
#line 471 "parse_tree_out_clause.m"
                  {
#line 471 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_419);
                  }
#line 472 "parse_tree_out_clause.m"
                  {
#line 472 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_419, parse_tree__parse_tree_out_clause__Else_423);
                  }
#line 473 "parse_tree_out_clause.m"
                  {
#line 473 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 474 "parse_tree_out_clause.m"
                  {
#line 474 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 459 "parse_tree_out_clause.m"
                }
#line 168 "parse_tree_out_clause.m"
                break;
#line 168 "parse_tree_out_clause.m"
              case (MR_Integer) 2:
#line 499 "parse_tree_out_clause.m"
                {
#line 499 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalA_431 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 499 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalB_432 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 499 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_433;
#line 499 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 500 "parse_tree_out_clause.m"
                  {
#line 500 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
#line 501 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__Indent1_433 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 502 "parse_tree_out_clause.m"
                  {
#line 502 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_433);
                  }
#line 503 "parse_tree_out_clause.m"
                  {
#line 503 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_433, parse_tree__parse_tree_out_clause__SubGoalA_431);
                  }
#line 504 "parse_tree_out_clause.m"
                  {
#line 504 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_disj_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__SubGoalB_432);
                  }
#line 505 "parse_tree_out_clause.m"
                  {
#line 505 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 506 "parse_tree_out_clause.m"
                  {
#line 506 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 499 "parse_tree_out_clause.m"
                }
#line 168 "parse_tree_out_clause.m"
                break;
#line 168 "parse_tree_out_clause.m"
              case (MR_Integer) 3:
#line 476 "parse_tree_out_clause.m"
                {
#line 476 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_424;
#line 476 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_425 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 476 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 477 "parse_tree_out_clause.m"
                  {
#line 477 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "\\+ (");
                  }
#line 478 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__Indent1_424 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 479 "parse_tree_out_clause.m"
                  {
#line 479 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_424);
                  }
#line 480 "parse_tree_out_clause.m"
                  {
#line 480 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_424, parse_tree__parse_tree_out_clause__SubGoal_425);
                  }
#line 481 "parse_tree_out_clause.m"
                  {
#line 481 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 482 "parse_tree_out_clause.m"
                  {
#line 482 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 476 "parse_tree_out_clause.m"
                }
#line 168 "parse_tree_out_clause.m"
                break;
#line 168 "parse_tree_out_clause.m"
              case (MR_Integer) 4:
#line 168 "parse_tree_out_clause.m"
                {
#line 169 "parse_tree_out_clause.m"
                  {
#line 169 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "fail");
                  }
#line 168 "parse_tree_out_clause.m"
                }
#line 168 "parse_tree_out_clause.m"
                break;
#line 168 "parse_tree_out_clause.m"
              case (MR_Integer) 5:
#line 490 "parse_tree_out_clause.m"
                {
#line 490 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalA_428 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 490 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalB_429 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 490 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_430;
#line 490 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 491 "parse_tree_out_clause.m"
                  {
#line 491 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
#line 492 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__Indent1_430 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 493 "parse_tree_out_clause.m"
                  {
#line 493 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_430);
                  }
#line 494 "parse_tree_out_clause.m"
                  {
#line 494 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_430, parse_tree__parse_tree_out_clause__SubGoalA_428);
                  }
#line 495 "parse_tree_out_clause.m"
                  {
#line 495 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_par_conj_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__SubGoalB_429);
                  }
#line 496 "parse_tree_out_clause.m"
                  {
#line 496 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 497 "parse_tree_out_clause.m"
                  {
#line 497 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 490 "parse_tree_out_clause.m"
                }
#line 168 "parse_tree_out_clause.m"
                break;
#line 168 "parse_tree_out_clause.m"
              case (MR_Integer) 6:
#line 198 "parse_tree_out_clause.m"
                {
#line 198 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__QuantType_17 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 198 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__QuantVarsKind_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 198 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 198 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));
#line 198 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));

#line 202 "parse_tree_out_clause.m"
                  if ((parse_tree__parse_tree_out_clause__Vars_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 201 "parse_tree_out_clause.m"
                    {
#line 201 "parse_tree_out_clause.m"
                      /* direct tailcall eliminated */
#line 201 "parse_tree_out_clause.m"
                      {
#line 201 "parse_tree_out_clause.m"
                        MR_Word parse_tree__parse_tree_out_clause__Goal__tmp_copy_8 = parse_tree__parse_tree_out_clause__SubGoal_21;

#line 201 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_clause__Goal_8 = parse_tree__parse_tree_out_clause__Goal__tmp_copy_8;
#line 201 "parse_tree_out_clause.m"
                      }
#line 201 "parse_tree_out_clause.m"
                      continue;
#line 201 "parse_tree_out_clause.m"
                    }
#line 202 "parse_tree_out_clause.m"
                  else
#line 203 "parse_tree_out_clause.m"
                    {
#line 203 "parse_tree_out_clause.m"
                      MR_Integer parse_tree__parse_tree_out_clause__Indent1_386;

#line 207 "parse_tree_out_clause.m"
#line 207 "parse_tree_out_clause.m"
                      switch (parse_tree__parse_tree_out_clause__QuantType_17) {
#line 207 "parse_tree_out_clause.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 207 "parse_tree_out_clause.m"
                        case (MR_Integer) 1:
#line 208 "parse_tree_out_clause.m"
                          {
#line 209 "parse_tree_out_clause.m"
                            {
#line 209 "parse_tree_out_clause.m"
                              mercury__io__write_string_3_p_0((MR_String) "all");
                            }
#line 208 "parse_tree_out_clause.m"
                          }
#line 207 "parse_tree_out_clause.m"
                          break;
#line 207 "parse_tree_out_clause.m"
                        case (MR_Integer) 0:
#line 205 "parse_tree_out_clause.m"
                          {
#line 206 "parse_tree_out_clause.m"
                            {
#line 206 "parse_tree_out_clause.m"
                              mercury__io__write_string_3_p_0((MR_String) "some");
                            }
#line 205 "parse_tree_out_clause.m"
                          }
#line 207 "parse_tree_out_clause.m"
                          break;
#line 207 "parse_tree_out_clause.m"
                      }
#line 211 "parse_tree_out_clause.m"
                      {
#line 211 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) "[");
                      }
#line 215 "parse_tree_out_clause.m"
#line 215 "parse_tree_out_clause.m"
                      switch (parse_tree__parse_tree_out_clause__QuantVarsKind_18) {
#line 215 "parse_tree_out_clause.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 215 "parse_tree_out_clause.m"
                        case (MR_Integer) 0:
#line 213 "parse_tree_out_clause.m"
                          {
#line 214 "parse_tree_out_clause.m"
                            {
#line 214 "parse_tree_out_clause.m"
                              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__Vars_20);
                            }
#line 213 "parse_tree_out_clause.m"
                          }
#line 215 "parse_tree_out_clause.m"
                          break;
#line 215 "parse_tree_out_clause.m"
                        case (MR_Integer) 1:
#line 216 "parse_tree_out_clause.m"
                          {
#line 217 "parse_tree_out_clause.m"
                            {
#line 217 "parse_tree_out_clause.m"
                              parse_tree__mercury_to_mercury__mercury_output_state_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__Vars_20);
                            }
#line 216 "parse_tree_out_clause.m"
                          }
#line 215 "parse_tree_out_clause.m"
                          break;
#line 215 "parse_tree_out_clause.m"
                      }
#line 219 "parse_tree_out_clause.m"
                      {
#line 219 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) "] (");
                      }
#line 220 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__Indent1_386 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 221 "parse_tree_out_clause.m"
                      {
#line 221 "parse_tree_out_clause.m"
                        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_386);
                      }
#line 222 "parse_tree_out_clause.m"
                      {
#line 222 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_386, parse_tree__parse_tree_out_clause__SubGoal_21);
                      }
#line 223 "parse_tree_out_clause.m"
                      {
#line 223 "parse_tree_out_clause.m"
                        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                      }
#line 224 "parse_tree_out_clause.m"
                      {
#line 224 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
#line 203 "parse_tree_out_clause.m"
                    }
#line 198 "parse_tree_out_clause.m"
                }
#line 168 "parse_tree_out_clause.m"
                break;
#line 168 "parse_tree_out_clause.m"
              case (MR_Integer) 7:
#line 244 "parse_tree_out_clause.m"
                {
#line 244 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Purity_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 244 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_401;
#line 244 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_402 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 244 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 248 "parse_tree_out_clause.m"
#line 248 "parse_tree_out_clause.m"
                  switch (parse_tree__parse_tree_out_clause__Purity_31) {
#line 248 "parse_tree_out_clause.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 248 "parse_tree_out_clause.m"
                    case (MR_Integer) 2:
#line 252 "parse_tree_out_clause.m"
                      {
#line 253 "parse_tree_out_clause.m"
                        {
#line 253 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "promise_impure (");
                        }
#line 252 "parse_tree_out_clause.m"
                      }
#line 248 "parse_tree_out_clause.m"
                      break;
#line 248 "parse_tree_out_clause.m"
                    case (MR_Integer) 0:
#line 246 "parse_tree_out_clause.m"
                      {
#line 247 "parse_tree_out_clause.m"
                        {
#line 247 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "promise_pure (");
                        }
#line 246 "parse_tree_out_clause.m"
                      }
#line 248 "parse_tree_out_clause.m"
                      break;
#line 248 "parse_tree_out_clause.m"
                    case (MR_Integer) 1:
#line 249 "parse_tree_out_clause.m"
                      {
#line 250 "parse_tree_out_clause.m"
                        {
#line 250 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "promise_semipure (");
                        }
#line 249 "parse_tree_out_clause.m"
                      }
#line 248 "parse_tree_out_clause.m"
                      break;
#line 248 "parse_tree_out_clause.m"
                  }
#line 255 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__Indent1_401 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 256 "parse_tree_out_clause.m"
                  {
#line 256 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_401);
                  }
#line 257 "parse_tree_out_clause.m"
                  {
#line 257 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_401, parse_tree__parse_tree_out_clause__SubGoal_402);
                  }
#line 258 "parse_tree_out_clause.m"
                  {
#line 258 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 259 "parse_tree_out_clause.m"
                  {
#line 259 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 244 "parse_tree_out_clause.m"
                }
#line 168 "parse_tree_out_clause.m"
                break;
#line 168 "parse_tree_out_clause.m"
              case (MR_Integer) 8:
#line 228 "parse_tree_out_clause.m"
                {
#line 228 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__StateVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 228 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__DotSVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));
#line 228 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__ColonSVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 5)));
#line 228 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Vars_389 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 228 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_390 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 6)));
#line 227 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 229 "parse_tree_out_clause.m"
                  {
#line 229 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_promise_eqv_solutions_goal_10_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__Vars_389, parse_tree__parse_tree_out_clause__StateVars_25, parse_tree__parse_tree_out_clause__DotSVars_26, parse_tree__parse_tree_out_clause__ColonSVars_27, parse_tree__parse_tree_out_clause__SubGoal_390, (MR_String) "promise_equivalent_solutions");
                  }
#line 228 "parse_tree_out_clause.m"
                }
#line 168 "parse_tree_out_clause.m"
                break;
#line 168 "parse_tree_out_clause.m"
              case (MR_Integer) 9:
#line 234 "parse_tree_out_clause.m"
                {
#line 234 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Vars_391 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 234 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_392 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 6)));
#line 234 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__StateVars_393 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 234 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__DotSVars_394 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));
#line 234 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__ColonSVars_395 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 5)));
#line 233 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 235 "parse_tree_out_clause.m"
                  {
#line 235 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_promise_eqv_solutions_goal_10_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__Vars_391, parse_tree__parse_tree_out_clause__StateVars_393, parse_tree__parse_tree_out_clause__DotSVars_394, parse_tree__parse_tree_out_clause__ColonSVars_395, parse_tree__parse_tree_out_clause__SubGoal_392, (MR_String) "promise_equivalent_solution_sets");
                  }
#line 234 "parse_tree_out_clause.m"
                }
#line 168 "parse_tree_out_clause.m"
                break;
#line 168 "parse_tree_out_clause.m"
              case (MR_Integer) 10:
#line 240 "parse_tree_out_clause.m"
                {
#line 240 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Vars_396 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 240 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_397 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 6)));
#line 240 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__StateVars_398 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 240 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__DotSVars_399 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));
#line 240 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__ColonSVars_400 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 5)));
#line 239 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 241 "parse_tree_out_clause.m"
                  {
#line 241 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_promise_eqv_solutions_goal_10_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__Vars_396, parse_tree__parse_tree_out_clause__StateVars_398, parse_tree__parse_tree_out_clause__DotSVars_399, parse_tree__parse_tree_out_clause__ColonSVars_400, parse_tree__parse_tree_out_clause__SubGoal_397, (MR_String) "arbitrary");
                  }
#line 240 "parse_tree_out_clause.m"
                }
#line 168 "parse_tree_out_clause.m"
                break;
#line 168 "parse_tree_out_clause.m"
              case (MR_Integer) 11:
#line 261 "parse_tree_out_clause.m"
                {
#line 261 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Detism_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 261 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_403;
#line 261 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_404 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 261 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 265 "parse_tree_out_clause.m"
#line 265 "parse_tree_out_clause.m"
                  switch (parse_tree__parse_tree_out_clause__Detism_33) {
#line 265 "parse_tree_out_clause.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 265 "parse_tree_out_clause.m"
                    case (MR_Integer) 4:
#line 275 "parse_tree_out_clause.m"
                      {
#line 276 "parse_tree_out_clause.m"
                        {
#line 276 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_cc_multi");
                        }
#line 275 "parse_tree_out_clause.m"
                      }
#line 265 "parse_tree_out_clause.m"
                      break;
#line 265 "parse_tree_out_clause.m"
                    case (MR_Integer) 5:
#line 278 "parse_tree_out_clause.m"
                      {
#line 279 "parse_tree_out_clause.m"
                        {
#line 279 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_cc_nondet");
                        }
#line 278 "parse_tree_out_clause.m"
                      }
#line 265 "parse_tree_out_clause.m"
                      break;
#line 265 "parse_tree_out_clause.m"
                    case (MR_Integer) 0:
#line 263 "parse_tree_out_clause.m"
                      {
#line 264 "parse_tree_out_clause.m"
                        {
#line 264 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_det");
                        }
#line 263 "parse_tree_out_clause.m"
                      }
#line 265 "parse_tree_out_clause.m"
                      break;
#line 265 "parse_tree_out_clause.m"
                    case (MR_Integer) 6:
#line 281 "parse_tree_out_clause.m"
                      {
#line 282 "parse_tree_out_clause.m"
                        {
#line 282 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_erroneous");
                        }
#line 281 "parse_tree_out_clause.m"
                      }
#line 265 "parse_tree_out_clause.m"
                      break;
#line 265 "parse_tree_out_clause.m"
                    case (MR_Integer) 7:
#line 284 "parse_tree_out_clause.m"
                      {
#line 285 "parse_tree_out_clause.m"
                        {
#line 285 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_failure");
                        }
#line 284 "parse_tree_out_clause.m"
                      }
#line 265 "parse_tree_out_clause.m"
                      break;
#line 265 "parse_tree_out_clause.m"
                    case (MR_Integer) 2:
#line 269 "parse_tree_out_clause.m"
                      {
#line 270 "parse_tree_out_clause.m"
                        {
#line 270 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_multi");
                        }
#line 269 "parse_tree_out_clause.m"
                      }
#line 265 "parse_tree_out_clause.m"
                      break;
#line 265 "parse_tree_out_clause.m"
                    case (MR_Integer) 3:
#line 272 "parse_tree_out_clause.m"
                      {
#line 273 "parse_tree_out_clause.m"
                        {
#line 273 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_nondet");
                        }
#line 272 "parse_tree_out_clause.m"
                      }
#line 265 "parse_tree_out_clause.m"
                      break;
#line 265 "parse_tree_out_clause.m"
                    case (MR_Integer) 1:
#line 266 "parse_tree_out_clause.m"
                      {
#line 267 "parse_tree_out_clause.m"
                        {
#line 267 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_semidet");
                        }
#line 266 "parse_tree_out_clause.m"
                      }
#line 265 "parse_tree_out_clause.m"
                      break;
#line 265 "parse_tree_out_clause.m"
                  }
#line 287 "parse_tree_out_clause.m"
                  {
#line 287 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) " (");
                  }
#line 288 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__Indent1_403 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 289 "parse_tree_out_clause.m"
                  {
#line 289 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_403);
                  }
#line 290 "parse_tree_out_clause.m"
                  {
#line 290 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_403, parse_tree__parse_tree_out_clause__SubGoal_404);
                  }
#line 291 "parse_tree_out_clause.m"
                  {
#line 291 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 292 "parse_tree_out_clause.m"
                  {
#line 292 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 261 "parse_tree_out_clause.m"
                }
#line 168 "parse_tree_out_clause.m"
                break;
#line 168 "parse_tree_out_clause.m"
              case (MR_Integer) 12:
#line 294 "parse_tree_out_clause.m"
                {
#line 294 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 294 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_405;
#line 294 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_406 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 294 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 295 "parse_tree_out_clause.m"
                  {
#line 295 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "require_complete_switch [");
                  }
#line 296 "parse_tree_out_clause.m"
                  {
#line 296 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__Var_35);
                  }
#line 297 "parse_tree_out_clause.m"
                  {
#line 297 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "] (");
                  }
#line 298 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__Indent1_405 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 299 "parse_tree_out_clause.m"
                  {
#line 299 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_405);
                  }
#line 300 "parse_tree_out_clause.m"
                  {
#line 300 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_405, parse_tree__parse_tree_out_clause__SubGoal_406);
                  }
#line 301 "parse_tree_out_clause.m"
                  {
#line 301 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 302 "parse_tree_out_clause.m"
                  {
#line 302 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 294 "parse_tree_out_clause.m"
                }
#line 168 "parse_tree_out_clause.m"
                break;
#line 168 "parse_tree_out_clause.m"
              case (MR_Integer) 13:
#line 304 "parse_tree_out_clause.m"
                {
#line 304 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_407;
#line 304 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_408 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));
#line 304 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Detism_409 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 304 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Var_410 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 304 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 308 "parse_tree_out_clause.m"
#line 308 "parse_tree_out_clause.m"
                  switch (parse_tree__parse_tree_out_clause__Detism_409) {
#line 308 "parse_tree_out_clause.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 308 "parse_tree_out_clause.m"
                    case (MR_Integer) 4:
#line 318 "parse_tree_out_clause.m"
                      {
#line 319 "parse_tree_out_clause.m"
                        {
#line 319 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_cc_multi");
                        }
#line 318 "parse_tree_out_clause.m"
                      }
#line 308 "parse_tree_out_clause.m"
                      break;
#line 308 "parse_tree_out_clause.m"
                    case (MR_Integer) 5:
#line 321 "parse_tree_out_clause.m"
                      {
#line 322 "parse_tree_out_clause.m"
                        {
#line 322 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_cc_nondet");
                        }
#line 321 "parse_tree_out_clause.m"
                      }
#line 308 "parse_tree_out_clause.m"
                      break;
#line 308 "parse_tree_out_clause.m"
                    case (MR_Integer) 0:
#line 306 "parse_tree_out_clause.m"
                      {
#line 307 "parse_tree_out_clause.m"
                        {
#line 307 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_det");
                        }
#line 306 "parse_tree_out_clause.m"
                      }
#line 308 "parse_tree_out_clause.m"
                      break;
#line 308 "parse_tree_out_clause.m"
                    case (MR_Integer) 6:
#line 324 "parse_tree_out_clause.m"
                      {
#line 325 "parse_tree_out_clause.m"
                        {
#line 325 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_erroneous");
                        }
#line 324 "parse_tree_out_clause.m"
                      }
#line 308 "parse_tree_out_clause.m"
                      break;
#line 308 "parse_tree_out_clause.m"
                    case (MR_Integer) 7:
#line 327 "parse_tree_out_clause.m"
                      {
#line 328 "parse_tree_out_clause.m"
                        {
#line 328 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_failure");
                        }
#line 327 "parse_tree_out_clause.m"
                      }
#line 308 "parse_tree_out_clause.m"
                      break;
#line 308 "parse_tree_out_clause.m"
                    case (MR_Integer) 2:
#line 312 "parse_tree_out_clause.m"
                      {
#line 313 "parse_tree_out_clause.m"
                        {
#line 313 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_multi");
                        }
#line 312 "parse_tree_out_clause.m"
                      }
#line 308 "parse_tree_out_clause.m"
                      break;
#line 308 "parse_tree_out_clause.m"
                    case (MR_Integer) 3:
#line 315 "parse_tree_out_clause.m"
                      {
#line 316 "parse_tree_out_clause.m"
                        {
#line 316 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_nondet");
                        }
#line 315 "parse_tree_out_clause.m"
                      }
#line 308 "parse_tree_out_clause.m"
                      break;
#line 308 "parse_tree_out_clause.m"
                    case (MR_Integer) 1:
#line 309 "parse_tree_out_clause.m"
                      {
#line 310 "parse_tree_out_clause.m"
                        {
#line 310 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_semidet");
                        }
#line 309 "parse_tree_out_clause.m"
                      }
#line 308 "parse_tree_out_clause.m"
                      break;
#line 308 "parse_tree_out_clause.m"
                  }
#line 330 "parse_tree_out_clause.m"
                  {
#line 330 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) " [");
                  }
#line 331 "parse_tree_out_clause.m"
                  {
#line 331 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__Var_410);
                  }
#line 332 "parse_tree_out_clause.m"
                  {
#line 332 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "] (");
                  }
#line 333 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__Indent1_407 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 334 "parse_tree_out_clause.m"
                  {
#line 334 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_407);
                  }
#line 335 "parse_tree_out_clause.m"
                  {
#line 335 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_407, parse_tree__parse_tree_out_clause__SubGoal_408);
                  }
#line 336 "parse_tree_out_clause.m"
                  {
#line 336 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 337 "parse_tree_out_clause.m"
                  {
#line 337 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 304 "parse_tree_out_clause.m"
                }
#line 168 "parse_tree_out_clause.m"
                break;
#line 168 "parse_tree_out_clause.m"
              case (MR_Integer) 14:
#line 372 "parse_tree_out_clause.m"
                {
#line 372 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__MaybeCompileTime_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 372 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__MaybeRunTime_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 372 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__MaybeIO_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));
#line 372 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__MutableVars_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 5)));
#line 372 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_192_192;
#line 372 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_196_196;
#line 372 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_204_204;
#line 372 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_205_205;
#line 372 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__V_210_210;
#line 372 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__V_213_213;
#line 372 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_412 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 6)));
#line 371 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
#line 404 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_58_58;
#line 404 "parse_tree_out_clause.m"
                  MR_Box parse_tree__parse_tree_out_clause__conv2_V_58_58;
#line 404 "parse_tree_out_clause.m"
                  MR_Box parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_206_206;

#line 373 "parse_tree_out_clause.m"
                  {
#line 373 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 374 "parse_tree_out_clause.m"
                  {
#line 374 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "trace [");
                  }
#line 382 "parse_tree_out_clause.m"
                  if ((parse_tree__parse_tree_out_clause__MaybeCompileTime_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 383 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_192_192 = (MR_Integer) 0;
#line 382 "parse_tree_out_clause.m"
                  else
#line 378 "parse_tree_out_clause.m"
                    {
#line 378 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__CompileTime_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__MaybeCompileTime_50, (MR_Integer) 0)));

#line 379 "parse_tree_out_clause.m"
                      {
#line 379 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(parse_tree__parse_tree_out_clause__CompileTime_55);
                      }
#line 381 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_192_192 = (MR_Integer) 1;
#line 378 "parse_tree_out_clause.m"
                    }
#line 391 "parse_tree_out_clause.m"
                  if ((parse_tree__parse_tree_out_clause__MaybeRunTime_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 392 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_196_196 = parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_192_192;
#line 391 "parse_tree_out_clause.m"
                  else
#line 386 "parse_tree_out_clause.m"
                    {
#line 386 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__RunTime_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__MaybeRunTime_51, (MR_Integer) 0)));

#line 387 "parse_tree_out_clause.m"
                      {
#line 387 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_3_p_0(parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_192_192);
                      }
#line 388 "parse_tree_out_clause.m"
                      {
#line 388 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(parse_tree__parse_tree_out_clause__RunTime_56);
                      }
#line 390 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_196_196 = (MR_Integer) 1;
#line 386 "parse_tree_out_clause.m"
                    }
#line 401 "parse_tree_out_clause.m"
                  if ((parse_tree__parse_tree_out_clause__MaybeIO_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 402 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_204_204 = parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_196_196;
#line 401 "parse_tree_out_clause.m"
                  else
#line 395 "parse_tree_out_clause.m"
                    {
#line 395 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__IOStateVar_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__MaybeIO_52, (MR_Integer) 0)));

#line 396 "parse_tree_out_clause.m"
                      {
#line 396 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_3_p_0(parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_196_196);
                      }
#line 397 "parse_tree_out_clause.m"
                      {
#line 397 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) "io(!");
                      }
#line 398 "parse_tree_out_clause.m"
                      {
#line 398 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__IOStateVar_57);
                      }
#line 399 "parse_tree_out_clause.m"
                      {
#line 399 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
#line 400 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_204_204 = (MR_Integer) 1;
#line 395 "parse_tree_out_clause.m"
                    }
#line 405 "parse_tree_out_clause.m"
                  {
#line 405 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 405 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_205_205, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_3[0]));
#line 405 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_205_205, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_1));
#line 405 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_205_205, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 405 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_205_205, 3) = ((MR_Box) (parse_tree__parse_tree_out_clause__VarSet_6));
#line 405 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_205_205, 4) = ((MR_Box) ((MR_Integer) 0));
#line 405 "parse_tree_out_clause.m"
                  }
#line 404 "parse_tree_out_clause.m"
                  {
#line 404 "parse_tree_out_clause.m"
                    mercury__list__foldl2_6_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__parse_tree_out_clause__V_205_205, parse_tree__parse_tree_out_clause__MutableVars_53, ((MR_Box) (parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_204_204)), &parse_tree__parse_tree_out_clause__conv2_V_58_58, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_206_206);
                  }
#line 404 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__V_58_58 = ((MR_Word) parse_tree__parse_tree_out_clause__conv2_V_58_58);
#line 409 "parse_tree_out_clause.m"
                  {
#line 409 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "]");
                  }
#line 410 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__V_210_210 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 410 "parse_tree_out_clause.m"
                  {
#line 410 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__V_210_210);
                  }
#line 411 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__V_213_213 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 411 "parse_tree_out_clause.m"
                  {
#line 411 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__V_213_213, parse_tree__parse_tree_out_clause__SubGoal_412);
                  }
#line 412 "parse_tree_out_clause.m"
                  {
#line 412 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 413 "parse_tree_out_clause.m"
                  {
#line 413 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 372 "parse_tree_out_clause.m"
                }
#line 168 "parse_tree_out_clause.m"
                break;
#line 168 "parse_tree_out_clause.m"
              case (MR_Integer) 15:
#line 339 "parse_tree_out_clause.m"
                {
#line 339 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Outer_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 339 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Inner_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 339 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__MainGoal_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 5)));
#line 339 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__OrElseGoals_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 6)));
#line 339 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_247_247;
#line 339 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_411;
#line 339 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
#line 339 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));

#line 340 "parse_tree_out_clause.m"
                  {
#line 340 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "atomic [outer(");
                  }
#line 345 "parse_tree_out_clause.m"
                  if (((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Outer_38)) == (MR_mktag((MR_Integer) 0))))
#line 342 "parse_tree_out_clause.m"
                    {
#line 342 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__OVar_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__Outer_38, (MR_Integer) 0)));

#line 343 "parse_tree_out_clause.m"
                      {
#line 343 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) "!");
                      }
#line 344 "parse_tree_out_clause.m"
                      {
#line 344 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__OVar_43);
                      }
#line 342 "parse_tree_out_clause.m"
                    }
#line 345 "parse_tree_out_clause.m"
                  else
#line 346 "parse_tree_out_clause.m"
                    {
#line 346 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__TypeCtorInfo_443_443 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 346 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__OuterDI_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Outer_38, (MR_Integer) 0)));
#line 346 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__OuterUO_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Outer_38, (MR_Integer) 1)));

#line 347 "parse_tree_out_clause.m"
                      {
#line 347 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(parse_tree__parse_tree_out_clause__TypeCtorInfo_443_443, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__OuterDI_44);
                      }
#line 348 "parse_tree_out_clause.m"
                      {
#line 348 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                      }
#line 349 "parse_tree_out_clause.m"
                      {
#line 349 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(parse_tree__parse_tree_out_clause__TypeCtorInfo_443_443, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__OuterUO_45);
                      }
#line 346 "parse_tree_out_clause.m"
                    }
#line 351 "parse_tree_out_clause.m"
                  {
#line 351 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "), inner(");
                  }
#line 356 "parse_tree_out_clause.m"
                  if (((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Inner_39)) == (MR_mktag((MR_Integer) 0))))
#line 353 "parse_tree_out_clause.m"
                    {
#line 353 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__IVar_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__Inner_39, (MR_Integer) 0)));

#line 354 "parse_tree_out_clause.m"
                      {
#line 354 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) "!");
                      }
#line 355 "parse_tree_out_clause.m"
                      {
#line 355 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__IVar_46);
                      }
#line 353 "parse_tree_out_clause.m"
                    }
#line 356 "parse_tree_out_clause.m"
                  else
#line 357 "parse_tree_out_clause.m"
                    {
#line 357 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__TypeCtorInfo_445_445 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 357 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__InnerDI_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Inner_39, (MR_Integer) 0)));
#line 357 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__InnerUO_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Inner_39, (MR_Integer) 1)));

#line 358 "parse_tree_out_clause.m"
                      {
#line 358 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(parse_tree__parse_tree_out_clause__TypeCtorInfo_445_445, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__InnerDI_47);
                      }
#line 359 "parse_tree_out_clause.m"
                      {
#line 359 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                      }
#line 360 "parse_tree_out_clause.m"
                      {
#line 360 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(parse_tree__parse_tree_out_clause__TypeCtorInfo_445_445, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__InnerUO_48);
                      }
#line 357 "parse_tree_out_clause.m"
                    }
#line 362 "parse_tree_out_clause.m"
                  {
#line 362 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")] (");
                  }
#line 364 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__Indent1_411 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 365 "parse_tree_out_clause.m"
                  {
#line 365 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_411);
                  }
#line 366 "parse_tree_out_clause.m"
                  {
#line 366 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__V_247_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__V_247_247, 0) = ((MR_Box) (parse_tree__parse_tree_out_clause__MainGoal_41));
#line 366 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__V_247_247, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__OrElseGoals_42));
#line 366 "parse_tree_out_clause.m"
                  }
#line 366 "parse_tree_out_clause.m"
                  {
#line 366 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_orelse_goals_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_411, parse_tree__parse_tree_out_clause__V_247_247);
                  }
#line 368 "parse_tree_out_clause.m"
                  {
#line 368 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 369 "parse_tree_out_clause.m"
                  {
#line 369 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 339 "parse_tree_out_clause.m"
                }
#line 168 "parse_tree_out_clause.m"
                break;
#line 168 "parse_tree_out_clause.m"
              case (MR_Integer) 16:
#line 416 "parse_tree_out_clause.m"
                {
#line 416 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Then_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));
#line 416 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__MaybeElse_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 5)));
#line 416 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Catches_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 6)));
#line 416 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__MaybeCatchAny_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 7)));
#line 416 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_172_172;
#line 416 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_415;
#line 416 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_416 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 416 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__MaybeIO_417 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 415 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
#line 445 "parse_tree_out_clause.m"
                  MR_Box parse_tree__parse_tree_out_clause__conv3_STATE_VARIABLE_IO_173_173;

#line 417 "parse_tree_out_clause.m"
                  {
#line 417 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "(try [");
                  }
#line 423 "parse_tree_out_clause.m"
                  if ((parse_tree__parse_tree_out_clause__MaybeIO_417 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 424 "parse_tree_out_clause.m"
                    {
#line 424 "parse_tree_out_clause.m"
                    }
#line 423 "parse_tree_out_clause.m"
                  else
#line 419 "parse_tree_out_clause.m"
                    {
#line 419 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__IOStateVar_413 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__MaybeIO_417, (MR_Integer) 0)));

#line 420 "parse_tree_out_clause.m"
                      {
#line 420 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) "io(!");
                      }
#line 421 "parse_tree_out_clause.m"
                      {
#line 421 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__IOStateVar_413);
                      }
#line 422 "parse_tree_out_clause.m"
                      {
#line 422 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
#line 419 "parse_tree_out_clause.m"
                    }
#line 426 "parse_tree_out_clause.m"
                  {
#line 426 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "] (");
                  }
#line 427 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__Indent1_415 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 428 "parse_tree_out_clause.m"
                  {
#line 428 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_415);
                  }
#line 429 "parse_tree_out_clause.m"
                  {
#line 429 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_415, parse_tree__parse_tree_out_clause__SubGoal_416);
                  }
#line 430 "parse_tree_out_clause.m"
                  {
#line 430 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 431 "parse_tree_out_clause.m"
                  {
#line 431 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 432 "parse_tree_out_clause.m"
                  {
#line 432 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 433 "parse_tree_out_clause.m"
                  {
#line 433 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "then");
                  }
#line 434 "parse_tree_out_clause.m"
                  {
#line 434 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_415);
                  }
#line 435 "parse_tree_out_clause.m"
                  {
#line 435 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_415, parse_tree__parse_tree_out_clause__Then_60);
                  }
#line 436 "parse_tree_out_clause.m"
                  {
#line 436 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 442 "parse_tree_out_clause.m"
                  if ((parse_tree__parse_tree_out_clause__MaybeElse_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 443 "parse_tree_out_clause.m"
                    {
#line 443 "parse_tree_out_clause.m"
                    }
#line 442 "parse_tree_out_clause.m"
                  else
#line 438 "parse_tree_out_clause.m"
                    {
#line 438 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__Else_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__MaybeElse_61, (MR_Integer) 0)));

#line 439 "parse_tree_out_clause.m"
                      {
#line 439 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) "else");
                      }
#line 440 "parse_tree_out_clause.m"
                      {
#line 440 "parse_tree_out_clause.m"
                        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_415);
                      }
#line 441 "parse_tree_out_clause.m"
                      {
#line 441 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_415, parse_tree__parse_tree_out_clause__Else_64);
                      }
#line 438 "parse_tree_out_clause.m"
                    }
#line 445 "parse_tree_out_clause.m"
                  {
#line 445 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__V_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 445 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_172_172, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_4[0]));
#line 445 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_172_172, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_2));
#line 445 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_172_172, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 445 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_172_172, 3) = ((MR_Box) (parse_tree__parse_tree_out_clause__VarSet_6));
#line 445 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_172_172, 4) = ((MR_Box) (parse_tree__parse_tree_out_clause__Indent_7));
#line 445 "parse_tree_out_clause.m"
                  }
#line 445 "parse_tree_out_clause.m"
                  {
#line 445 "parse_tree_out_clause.m"
                    mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__parse_tree_out_clause__V_172_172, parse_tree__parse_tree_out_clause__Catches_62, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv3_STATE_VARIABLE_IO_173_173);
                  }
#line 453 "parse_tree_out_clause.m"
                  if ((parse_tree__parse_tree_out_clause__MaybeCatchAny_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 454 "parse_tree_out_clause.m"
                    {
#line 454 "parse_tree_out_clause.m"
                    }
#line 453 "parse_tree_out_clause.m"
                  else
#line 447 "parse_tree_out_clause.m"
                    {
#line 447 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__CatchAnyVar_65;
#line 447 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__CatchAnyGoal_66;
#line 447 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__MaybeCatchAny_63, (MR_Integer) 0)));

#line 447 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__CatchAnyVar_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_174_174, (MR_Integer) 0)));
#line 447 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__CatchAnyGoal_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_174_174, (MR_Integer) 1)));
#line 448 "parse_tree_out_clause.m"
                      {
#line 448 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) "catch_any ");
                      }
#line 449 "parse_tree_out_clause.m"
                      {
#line 449 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__CatchAnyVar_65);
                      }
#line 450 "parse_tree_out_clause.m"
                      {
#line 450 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) " ->");
                      }
#line 451 "parse_tree_out_clause.m"
                      {
#line 451 "parse_tree_out_clause.m"
                        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_415);
                      }
#line 452 "parse_tree_out_clause.m"
                      {
#line 452 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_415, parse_tree__parse_tree_out_clause__CatchAnyGoal_66);
                      }
#line 447 "parse_tree_out_clause.m"
                    }
#line 456 "parse_tree_out_clause.m"
                  {
#line 456 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 457 "parse_tree_out_clause.m"
                  {
#line 457 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 416 "parse_tree_out_clause.m"
                }
#line 168 "parse_tree_out_clause.m"
                break;
#line 168 "parse_tree_out_clause.m"
              case (MR_Integer) 17:
#line 174 "parse_tree_out_clause.m"
                {
#line 174 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalA_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 174 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 174 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_15 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 174 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 176 "parse_tree_out_clause.m"
                  {
#line 176 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
#line 177 "parse_tree_out_clause.m"
                  {
#line 177 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_15);
                  }
#line 178 "parse_tree_out_clause.m"
                  {
#line 178 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_15, parse_tree__parse_tree_out_clause__SubGoalA_13);
                  }
#line 179 "parse_tree_out_clause.m"
                  {
#line 179 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 180 "parse_tree_out_clause.m"
                  {
#line 180 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "=>");
                  }
#line 181 "parse_tree_out_clause.m"
                  {
#line 181 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_15);
                  }
#line 182 "parse_tree_out_clause.m"
                  {
#line 182 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_15, parse_tree__parse_tree_out_clause__SubGoalB_14);
                  }
#line 183 "parse_tree_out_clause.m"
                  {
#line 183 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 184 "parse_tree_out_clause.m"
                  {
#line 184 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 174 "parse_tree_out_clause.m"
                }
#line 168 "parse_tree_out_clause.m"
                break;
#line 168 "parse_tree_out_clause.m"
              case (MR_Integer) 18:
#line 186 "parse_tree_out_clause.m"
                {
#line 186 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalA_383 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 186 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalB_384 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 186 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_385 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 186 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 188 "parse_tree_out_clause.m"
                  {
#line 188 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
#line 189 "parse_tree_out_clause.m"
                  {
#line 189 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_385);
                  }
#line 190 "parse_tree_out_clause.m"
                  {
#line 190 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_385, parse_tree__parse_tree_out_clause__SubGoalA_383);
                  }
#line 191 "parse_tree_out_clause.m"
                  {
#line 191 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 192 "parse_tree_out_clause.m"
                  {
#line 192 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "<=>");
                  }
#line 193 "parse_tree_out_clause.m"
                  {
#line 193 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_385);
                  }
#line 194 "parse_tree_out_clause.m"
                  {
#line 194 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_385, parse_tree__parse_tree_out_clause__SubGoalB_384);
                  }
#line 195 "parse_tree_out_clause.m"
                  {
#line 195 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 196 "parse_tree_out_clause.m"
                  {
#line 196 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 186 "parse_tree_out_clause.m"
                }
#line 168 "parse_tree_out_clause.m"
                break;
#line 168 "parse_tree_out_clause.m"
              case (MR_Integer) 19:
#line 508 "parse_tree_out_clause.m"
                {
#line 508 "parse_tree_out_clause.m"
                  MR_String parse_tree__parse_tree_out_clause__Name_74 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 508 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Terms_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 508 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_94_94;
#line 508 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 509 "parse_tree_out_clause.m"
                  {
#line 509 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "event ");
                  }
#line 510 "parse_tree_out_clause.m"
                  {
#line 510 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 510 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_94_94, 0) = ((MR_Box) (parse_tree__parse_tree_out_clause__Name_74));
#line 510 "parse_tree_out_clause.m"
                  }
#line 510 "parse_tree_out_clause.m"
                  {
#line 510 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_call_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__V_94_94, parse_tree__parse_tree_out_clause__Terms_75);
                  }
#line 508 "parse_tree_out_clause.m"
                }
#line 168 "parse_tree_out_clause.m"
                break;
#line 168 "parse_tree_out_clause.m"
            }
#line 168 "parse_tree_out_clause.m"
            break;
#line 168 "parse_tree_out_clause.m"
        }
#line 168 "parse_tree_out_clause.m"
      }
#line 168 "parse_tree_out_clause.m"
      break;
#line 168 "parse_tree_out_clause.m"
    }
#line 35 "parse_tree_out_clause.m"
}

#line 30 "parse_tree_out_clause.m"
void MR_CALL 
parse_tree__parse_tree_out_clause__output_instance_method_clause_4_p_0(
#line 30 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__MethodName_5,
#line 30 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__ItemClause_6)
#line 30 "parse_tree_out_clause.m"
{
#line 92 "parse_tree_out_clause.m"
  {
#line 92 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded;
#line 92 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 1)));
#line 92 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__ArgTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 2)));
#line 92 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__VarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 4)));
#line 92 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__MaybeBodyGoal_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 5)));
#line 92 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__BodyGoal_16;
#line 93 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause___PredName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 0)));
#line 93 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause___MaybeAttrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 3)));
#line 93 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 6)));
#line 93 "parse_tree_out_clause.m"
    MR_Integer parse_tree__parse_tree_out_clause___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 7)));

#line 110 "parse_tree_out_clause.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__MaybeBodyGoal_13)) == (MR_mktag((MR_Integer) 0))))
#line 112 "parse_tree_out_clause.m"
      {
#line 112 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_29_29;

#line 114 "parse_tree_out_clause.m"
        {
#line 114 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__V_29_29 = mercury__term__context_init_0_f_0();
        }
#line 114 "parse_tree_out_clause.m"
        {
#line 114 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__BodyGoal_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 114 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__BodyGoal_16, 0) = ((MR_Box) (parse_tree__parse_tree_out_clause__V_29_29));
#line 114 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__BodyGoal_16, 1) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]));
#line 114 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__BodyGoal_16, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 114 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__BodyGoal_16, 3) = ((MR_Box) ((MR_Integer) 0));
#line 114 "parse_tree_out_clause.m"
        }
#line 112 "parse_tree_out_clause.m"
      }
#line 110 "parse_tree_out_clause.m"
    else
#line 110 "parse_tree_out_clause.m"
      parse_tree__parse_tree_out_clause__BodyGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__MaybeBodyGoal_13, (MR_Integer) 0)));
#line 99 "parse_tree_out_clause.m"
#line 99 "parse_tree_out_clause.m"
    switch (parse_tree__parse_tree_out_clause__PredOrFunc_9) {
#line 99 "parse_tree_out_clause.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 99 "parse_tree_out_clause.m"
      case (MR_Integer) 1:
#line 100 "parse_tree_out_clause.m"
        {
#line 100 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__FuncArgTerms_17;
#line 100 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__ResultTerm_18;
#line 101 "parse_tree_out_clause.m"
          MR_Box parse_tree__parse_tree_out_clause__conv0_ResultTerm_18;
#line 155 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__V_42_42;

#line 101 "parse_tree_out_clause.m"
          {
#line 101 "parse_tree_out_clause.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[0], parse_tree__parse_tree_out_clause__ArgTerms_10, &parse_tree__parse_tree_out_clause__FuncArgTerms_17, &parse_tree__parse_tree_out_clause__conv0_ResultTerm_18);
          }
#line 101 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__ResultTerm_18 = ((MR_Word) parse_tree__parse_tree_out_clause__conv0_ResultTerm_18);
#line 144 "parse_tree_out_clause.m"
          {
#line 144 "parse_tree_out_clause.m"
            parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out_clause__MethodName_5);
          }
#line 151 "parse_tree_out_clause.m"
          if ((parse_tree__parse_tree_out_clause__FuncArgTerms_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 152 "parse_tree_out_clause.m"
            {
#line 152 "parse_tree_out_clause.m"
            }
#line 151 "parse_tree_out_clause.m"
          else
#line 146 "parse_tree_out_clause.m"
            {
#line 146 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__HeadArg_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__FuncArgTerms_17, (MR_Integer) 0)));
#line 146 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__TailArgs_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__FuncArgTerms_17, (MR_Integer) 1)));
#line 148 "parse_tree_out_clause.m"
              MR_Box parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_23_47;

#line 147 "parse_tree_out_clause.m"
              {
#line 147 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
#line 148 "parse_tree_out_clause.m"
              {
#line 148 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, parse_tree__parse_tree_out_clause__HeadArg_40, parse_tree__parse_tree_out_clause__TailArgs_41, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_23_47);
              }
#line 150 "parse_tree_out_clause.m"
              {
#line 150 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 146 "parse_tree_out_clause.m"
            }
#line 154 "parse_tree_out_clause.m"
          {
#line 154 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
#line 155 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__BodyGoal_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 155 "parse_tree_out_clause.m"
          if (parse_tree__parse_tree_out_clause__succeeded)
#line 155 "parse_tree_out_clause.m"
            {
#line 155 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_16, (MR_Integer) 1)));
#line 156 "parse_tree_out_clause.m"
              {
#line 156 "parse_tree_out_clause.m"
                MR_Box parse_tree__parse_tree_out_clause__conv2_STATE_VARIABLE_IO_20;

#line 156 "parse_tree_out_clause.m"
                {
#line 156 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out_clause__ResultTerm_18, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv2_STATE_VARIABLE_IO_20);
                }
#line 156 "parse_tree_out_clause.m"
              }
#line 155 "parse_tree_out_clause.m"
            }
#line 155 "parse_tree_out_clause.m"
          else
#line 159 "parse_tree_out_clause.m"
            {
#line 159 "parse_tree_out_clause.m"
              MR_Box parse_tree__parse_tree_out_clause__conv3_STATE_VARIABLE_IO_32_56;

#line 159 "parse_tree_out_clause.m"
              {
#line 159 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_term__mercury_format_term_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, parse_tree__parse_tree_out_clause__ResultTerm_18, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv3_STATE_VARIABLE_IO_32_56);
              }
#line 160 "parse_tree_out_clause.m"
              {
#line 160 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) " :-\n\t");
              }
#line 161 "parse_tree_out_clause.m"
              {
#line 161 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 1, parse_tree__parse_tree_out_clause__BodyGoal_16);
              }
#line 159 "parse_tree_out_clause.m"
            }
#line 100 "parse_tree_out_clause.m"
        }
#line 99 "parse_tree_out_clause.m"
        break;
#line 99 "parse_tree_out_clause.m"
      case (MR_Integer) 0:
#line 122 "parse_tree_out_clause.m"
        {
#line 133 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__V_76_76;

#line 123 "parse_tree_out_clause.m"
          {
#line 123 "parse_tree_out_clause.m"
            parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out_clause__MethodName_5);
          }
#line 130 "parse_tree_out_clause.m"
          if ((parse_tree__parse_tree_out_clause__ArgTerms_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 131 "parse_tree_out_clause.m"
            {
#line 131 "parse_tree_out_clause.m"
            }
#line 130 "parse_tree_out_clause.m"
          else
#line 125 "parse_tree_out_clause.m"
            {
#line 125 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__HeadArg_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__ArgTerms_10, (MR_Integer) 0)));
#line 125 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__TailArgs_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__ArgTerms_10, (MR_Integer) 1)));
#line 127 "parse_tree_out_clause.m"
              MR_Box parse_tree__parse_tree_out_clause__conv4_STATE_VARIABLE_IO_21_81;

#line 126 "parse_tree_out_clause.m"
              {
#line 126 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
#line 127 "parse_tree_out_clause.m"
              {
#line 127 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, parse_tree__parse_tree_out_clause__HeadArg_74, parse_tree__parse_tree_out_clause__TailArgs_75, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv4_STATE_VARIABLE_IO_21_81);
              }
#line 129 "parse_tree_out_clause.m"
              {
#line 129 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 125 "parse_tree_out_clause.m"
            }
#line 133 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__BodyGoal_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 133 "parse_tree_out_clause.m"
          if (parse_tree__parse_tree_out_clause__succeeded)
#line 133 "parse_tree_out_clause.m"
            {
#line 133 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_16, (MR_Integer) 1)));
#line 133 "parse_tree_out_clause.m"
            }
#line 133 "parse_tree_out_clause.m"
          else
#line 136 "parse_tree_out_clause.m"
            {
#line 136 "parse_tree_out_clause.m"
              {
#line 136 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) " :-\n\t");
              }
#line 137 "parse_tree_out_clause.m"
              {
#line 137 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 1, parse_tree__parse_tree_out_clause__BodyGoal_16);
              }
#line 136 "parse_tree_out_clause.m"
            }
#line 122 "parse_tree_out_clause.m"
        }
#line 99 "parse_tree_out_clause.m"
        break;
#line 99 "parse_tree_out_clause.m"
    }
#line 92 "parse_tree_out_clause.m"
  }
#line 30 "parse_tree_out_clause.m"
}

#line 27 "parse_tree_out_clause.m"
void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_item_clause_4_p_0(
#line 27 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Info_5,
#line 27 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__ItemClause_6)
#line 27 "parse_tree_out_clause.m"
{
#line 75 "parse_tree_out_clause.m"
  {
#line 75 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded;
#line 75 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__PredName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 0)));
#line 75 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 1)));
#line 75 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__ArgTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 2)));
#line 75 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__VarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 4)));
#line 75 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__MaybeBodyGoal_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 5)));
#line 75 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 6)));
#line 75 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__BodyGoal_16;
#line 75 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__PredName_17;
#line 76 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause___MaybeAttrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 3)));
#line 76 "parse_tree_out_clause.m"
    MR_Integer parse_tree__parse_tree_out_clause___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 7)));

#line 110 "parse_tree_out_clause.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__MaybeBodyGoal_13)) == (MR_mktag((MR_Integer) 0))))
#line 112 "parse_tree_out_clause.m"
      {
#line 112 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_33_33;

#line 114 "parse_tree_out_clause.m"
        {
#line 114 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__V_33_33 = mercury__term__context_init_0_f_0();
        }
#line 114 "parse_tree_out_clause.m"
        {
#line 114 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__BodyGoal_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 114 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__BodyGoal_16, 0) = ((MR_Box) (parse_tree__parse_tree_out_clause__V_33_33));
#line 114 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__BodyGoal_16, 1) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]));
#line 114 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__BodyGoal_16, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 114 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__BodyGoal_16, 3) = ((MR_Box) ((MR_Integer) 0));
#line 114 "parse_tree_out_clause.m"
        }
#line 112 "parse_tree_out_clause.m"
      }
#line 110 "parse_tree_out_clause.m"
    else
#line 110 "parse_tree_out_clause.m"
      parse_tree__parse_tree_out_clause__BodyGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__MaybeBodyGoal_13, (MR_Integer) 0)));
#line 79 "parse_tree_out_clause.m"
    {
#line 79 "parse_tree_out_clause.m"
      parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(parse_tree__parse_tree_out_clause__Info_5, parse_tree__parse_tree_out_clause__PredName0_8, &parse_tree__parse_tree_out_clause__PredName_17);
    }
#line 80 "parse_tree_out_clause.m"
    {
#line 80 "parse_tree_out_clause.m"
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out_clause__Info_5, parse_tree__parse_tree_out_clause__Context_14);
    }
#line 84 "parse_tree_out_clause.m"
#line 84 "parse_tree_out_clause.m"
    switch (parse_tree__parse_tree_out_clause__PredOrFunc_9) {
#line 84 "parse_tree_out_clause.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 84 "parse_tree_out_clause.m"
      case (MR_Integer) 1:
#line 85 "parse_tree_out_clause.m"
        {
#line 85 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__FuncArgTerms_18;
#line 85 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__ResultTerm_19;
#line 86 "parse_tree_out_clause.m"
          MR_Box parse_tree__parse_tree_out_clause__conv0_ResultTerm_19;
#line 155 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__V_46_46;

#line 86 "parse_tree_out_clause.m"
          {
#line 86 "parse_tree_out_clause.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[0], parse_tree__parse_tree_out_clause__ArgTerms_10, &parse_tree__parse_tree_out_clause__FuncArgTerms_18, &parse_tree__parse_tree_out_clause__conv0_ResultTerm_19);
          }
#line 86 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__ResultTerm_19 = ((MR_Word) parse_tree__parse_tree_out_clause__conv0_ResultTerm_19);
#line 144 "parse_tree_out_clause.m"
          {
#line 144 "parse_tree_out_clause.m"
            parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out_clause__PredName_17);
          }
#line 151 "parse_tree_out_clause.m"
          if ((parse_tree__parse_tree_out_clause__FuncArgTerms_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 152 "parse_tree_out_clause.m"
            {
#line 152 "parse_tree_out_clause.m"
            }
#line 151 "parse_tree_out_clause.m"
          else
#line 146 "parse_tree_out_clause.m"
            {
#line 146 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__HeadArg_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__FuncArgTerms_18, (MR_Integer) 0)));
#line 146 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__TailArgs_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__FuncArgTerms_18, (MR_Integer) 1)));
#line 148 "parse_tree_out_clause.m"
              MR_Box parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_23_51;

#line 147 "parse_tree_out_clause.m"
              {
#line 147 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
#line 148 "parse_tree_out_clause.m"
              {
#line 148 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, parse_tree__parse_tree_out_clause__HeadArg_44, parse_tree__parse_tree_out_clause__TailArgs_45, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_23_51);
              }
#line 150 "parse_tree_out_clause.m"
              {
#line 150 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 146 "parse_tree_out_clause.m"
            }
#line 154 "parse_tree_out_clause.m"
          {
#line 154 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
#line 155 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__BodyGoal_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 155 "parse_tree_out_clause.m"
          if (parse_tree__parse_tree_out_clause__succeeded)
#line 155 "parse_tree_out_clause.m"
            {
#line 155 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_16, (MR_Integer) 1)));
#line 156 "parse_tree_out_clause.m"
              {
#line 156 "parse_tree_out_clause.m"
                MR_Box parse_tree__parse_tree_out_clause__conv2_STATE_VARIABLE_IO_24_24;

#line 156 "parse_tree_out_clause.m"
                {
#line 156 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out_clause__ResultTerm_19, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv2_STATE_VARIABLE_IO_24_24);
                }
#line 156 "parse_tree_out_clause.m"
              }
#line 155 "parse_tree_out_clause.m"
            }
#line 155 "parse_tree_out_clause.m"
          else
#line 159 "parse_tree_out_clause.m"
            {
#line 159 "parse_tree_out_clause.m"
              MR_Box parse_tree__parse_tree_out_clause__conv3_STATE_VARIABLE_IO_32_60;

#line 159 "parse_tree_out_clause.m"
              {
#line 159 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_term__mercury_format_term_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, parse_tree__parse_tree_out_clause__ResultTerm_19, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv3_STATE_VARIABLE_IO_32_60);
              }
#line 160 "parse_tree_out_clause.m"
              {
#line 160 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) " :-\n\t");
              }
#line 161 "parse_tree_out_clause.m"
              {
#line 161 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 1, parse_tree__parse_tree_out_clause__BodyGoal_16);
              }
#line 159 "parse_tree_out_clause.m"
            }
#line 85 "parse_tree_out_clause.m"
        }
#line 84 "parse_tree_out_clause.m"
        break;
#line 84 "parse_tree_out_clause.m"
      case (MR_Integer) 0:
#line 122 "parse_tree_out_clause.m"
        {
#line 133 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__V_80_80;

#line 123 "parse_tree_out_clause.m"
          {
#line 123 "parse_tree_out_clause.m"
            parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out_clause__PredName_17);
          }
#line 130 "parse_tree_out_clause.m"
          if ((parse_tree__parse_tree_out_clause__ArgTerms_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 131 "parse_tree_out_clause.m"
            {
#line 131 "parse_tree_out_clause.m"
            }
#line 130 "parse_tree_out_clause.m"
          else
#line 125 "parse_tree_out_clause.m"
            {
#line 125 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__HeadArg_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__ArgTerms_10, (MR_Integer) 0)));
#line 125 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__TailArgs_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__ArgTerms_10, (MR_Integer) 1)));
#line 127 "parse_tree_out_clause.m"
              MR_Box parse_tree__parse_tree_out_clause__conv4_STATE_VARIABLE_IO_21_85;

#line 126 "parse_tree_out_clause.m"
              {
#line 126 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
#line 127 "parse_tree_out_clause.m"
              {
#line 127 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, parse_tree__parse_tree_out_clause__HeadArg_78, parse_tree__parse_tree_out_clause__TailArgs_79, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv4_STATE_VARIABLE_IO_21_85);
              }
#line 129 "parse_tree_out_clause.m"
              {
#line 129 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 125 "parse_tree_out_clause.m"
            }
#line 133 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__BodyGoal_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 133 "parse_tree_out_clause.m"
          if (parse_tree__parse_tree_out_clause__succeeded)
#line 133 "parse_tree_out_clause.m"
            {
#line 133 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_16, (MR_Integer) 1)));
#line 133 "parse_tree_out_clause.m"
            }
#line 133 "parse_tree_out_clause.m"
          else
#line 136 "parse_tree_out_clause.m"
            {
#line 136 "parse_tree_out_clause.m"
              {
#line 136 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) " :-\n\t");
              }
#line 137 "parse_tree_out_clause.m"
              {
#line 137 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 1, parse_tree__parse_tree_out_clause__BodyGoal_16);
              }
#line 136 "parse_tree_out_clause.m"
            }
#line 122 "parse_tree_out_clause.m"
        }
#line 84 "parse_tree_out_clause.m"
        break;
#line 84 "parse_tree_out_clause.m"
    }
#line 90 "parse_tree_out_clause.m"
    {
#line 90 "parse_tree_out_clause.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
#line 75 "parse_tree_out_clause.m"
  }
#line 27 "parse_tree_out_clause.m"
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
