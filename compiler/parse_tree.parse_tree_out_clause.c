/*
** Automatically generated from `parse_tree_out_clause.m'
** by the Mercury compiler,
** version DEV
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


#include "check_hlds.mih"
#include "hlds.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 103 "parse_tree.parse_tree_out_clause.c"
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

#line 868 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_3_p_0(
#line 868 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__1_1);

#line 855 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_catch_5_p_0(
#line 855 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 855 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
#line 855 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__3_3);

#line 843 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_mutable_var_and_comma_7_p_0(
#line 843 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_8,
#line 843 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarNamePrint_9,
#line 843 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__MutableVar_10,
#line 843 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_0_13,
#line 843 "parse_tree_out_clause.m"
  MR_Word * parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_14);

#line 762 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_6_p_0(
#line 762 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__1_1,
#line 762 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__2_2,
#line 762 "parse_tree_out_clause.m"
  MR_String parse_tree__parse_tree_out_clause__HeadVar__3_3,
#line 762 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__4_4);

#line 700 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_promise_eqv_solutions_goal_10_p_0(
#line 700 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_11,
#line 700 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_12,
#line 700 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Vars_13,
#line 700 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__StateVars_14,
#line 700 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__DotSVars_15,
#line 700 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__ColonSVars_16,
#line 700 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Goal_17,
#line 700 "parse_tree_out_clause.m"
  MR_String parse_tree__parse_tree_out_clause__Keyword_18);

#line 672 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_some_5_p_0(
#line 672 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__TypeInfo_for_T_30,
#line 672 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 672 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Vars_7,
#line 672 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__StateVars_8);

#line 649 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_orelse_goals_5_p_0(
#line 649 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 649 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
#line 649 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Goals_8);

#line 632 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_par_conj_5_p_0(
#line 632 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 632 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
#line 632 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Goal_8);

#line 615 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_disj_5_p_0(
#line 615 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 615 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
#line 615 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Goal_8);

#line 592 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_call_5_p_0(
#line 592 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 592 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__SymName_7,
#line 592 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Term_8);

#line 547 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(
#line 547 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 547 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
#line 547 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Goal_8);

#line 466 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_2(
#line 466 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__closure_arg,
#line 466 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_1,
#line 466 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_2,
#line 466 "parse_tree_out_clause.m"
  MR_Box * parse_tree__parse_tree_out_clause__wrapper_arg_3);

#line 426 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_1(
#line 426 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__closure_arg,
#line 426 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_1,
#line 426 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_2,
#line 426 "parse_tree_out_clause.m"
  MR_Box * parse_tree__parse_tree_out_clause__wrapper_arg_3,
#line 426 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_4,
#line 426 "parse_tree_out_clause.m"
  MR_Box * parse_tree__parse_tree_out_clause__wrapper_arg_5);


static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_1[2][2];

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_2[1][10];

static /* final */ const MR_Box parse_tree__parse_tree_out_clause_scalar_common_3[1][8];




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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 332 "parse_tree.parse_tree_out_clause.c"
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
#line 786 "parse_tree_out_clause.m"
  while (MR_TRUE)
#line 786 "parse_tree_out_clause.m"
    {
#line 786 "parse_tree_out_clause.m"
      /* tailcall optimized into a loop */
#line 786 "parse_tree_out_clause.m"
      {
#line 786 "parse_tree_out_clause.m"
        MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 786 "parse_tree_out_clause.m"
#line 786 "parse_tree_out_clause.m"
        switch (MR_tag((MR_Word) parse_tree__parse_tree_out_clause__TraceExpr_6)) {
#line 786 "parse_tree_out_clause.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 786 "parse_tree_out_clause.m"
          case (MR_Integer) 0:
#line 784 "parse_tree_out_clause.m"
            {
#line 784 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__Base_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));

#line 785 "parse_tree_out_clause.m"
              {
#line 785 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__mercury_output_trace_compiletime_3_p_0(parse_tree__parse_tree_out_clause__Base_8);
              }
#line 784 "parse_tree_out_clause.m"
            }
#line 786 "parse_tree_out_clause.m"
            break;
#line 786 "parse_tree_out_clause.m"
          case (MR_Integer) 1:
#line 787 "parse_tree_out_clause.m"
            {
#line 787 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__TraceExprA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));

#line 788 "parse_tree_out_clause.m"
              {
#line 788 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) "not(");
              }
#line 789 "parse_tree_out_clause.m"
              {
#line 789 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(parse_tree__parse_tree_out_clause__TraceExprA_9);
              }
#line 790 "parse_tree_out_clause.m"
              {
#line 790 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 787 "parse_tree_out_clause.m"
            }
#line 786 "parse_tree_out_clause.m"
            break;
#line 786 "parse_tree_out_clause.m"
          case (MR_Integer) 2:
#line 786 "parse_tree_out_clause.m"
            {
#line 786 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 2)));
#line 786 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 1)));
#line 786 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));

#line 786 "parse_tree_out_clause.m"
#line 786 "parse_tree_out_clause.m"
              switch (parse_tree__parse_tree_out_clause__V_39_39) {
#line 786 "parse_tree_out_clause.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 786 "parse_tree_out_clause.m"
                case (MR_Integer) 1:
#line 799 "parse_tree_out_clause.m"
                  {
#line 800 "parse_tree_out_clause.m"
                    {
#line 800 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(parse_tree__parse_tree_out_clause__V_38_38);
                    }
#line 801 "parse_tree_out_clause.m"
                    {
#line 801 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) " and ");
                    }
#line 802 "parse_tree_out_clause.m"
                    /* direct tailcall eliminated */
#line 802 "parse_tree_out_clause.m"
                    {
#line 802 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__TraceExpr__tmp_copy_6 = parse_tree__parse_tree_out_clause__V_37_37;

#line 802 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__TraceExpr_6 = parse_tree__parse_tree_out_clause__TraceExpr__tmp_copy_6;
#line 802 "parse_tree_out_clause.m"
                    }
#line 802 "parse_tree_out_clause.m"
                    continue;
#line 799 "parse_tree_out_clause.m"
                  }
#line 786 "parse_tree_out_clause.m"
                  break;
#line 786 "parse_tree_out_clause.m"
                case (MR_Integer) 0:
#line 792 "parse_tree_out_clause.m"
                  {
#line 793 "parse_tree_out_clause.m"
                    {
#line 793 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
#line 794 "parse_tree_out_clause.m"
                    {
#line 794 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(parse_tree__parse_tree_out_clause__V_38_38);
                    }
#line 795 "parse_tree_out_clause.m"
                    {
#line 795 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) ") or (");
                    }
#line 796 "parse_tree_out_clause.m"
                    {
#line 796 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(parse_tree__parse_tree_out_clause__V_37_37);
                    }
#line 797 "parse_tree_out_clause.m"
                    {
#line 797 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
#line 792 "parse_tree_out_clause.m"
                  }
#line 786 "parse_tree_out_clause.m"
                  break;
#line 786 "parse_tree_out_clause.m"
              }
#line 786 "parse_tree_out_clause.m"
            }
#line 786 "parse_tree_out_clause.m"
            break;
#line 786 "parse_tree_out_clause.m"
        }
#line 786 "parse_tree_out_clause.m"
      }
#line 786 "parse_tree_out_clause.m"
      break;
#line 786 "parse_tree_out_clause.m"
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
#line 786 "parse_tree_out_clause.m"
  while (MR_TRUE)
#line 786 "parse_tree_out_clause.m"
    {
#line 786 "parse_tree_out_clause.m"
      /* tailcall optimized into a loop */
#line 786 "parse_tree_out_clause.m"
      {
#line 786 "parse_tree_out_clause.m"
        MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 786 "parse_tree_out_clause.m"
#line 786 "parse_tree_out_clause.m"
        switch (MR_tag((MR_Word) parse_tree__parse_tree_out_clause__TraceExpr_6)) {
#line 786 "parse_tree_out_clause.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 786 "parse_tree_out_clause.m"
          case (MR_Integer) 0:
#line 784 "parse_tree_out_clause.m"
            {
#line 784 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__Base_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));
#line 784 "parse_tree_out_clause.m"
              MR_String parse_tree__parse_tree_out_clause__EnvVarName_42 = (MR_String) parse_tree__parse_tree_out_clause__Base_8;

#line 831 "parse_tree_out_clause.m"
              {
#line 831 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) "env(");
              }
#line 832 "parse_tree_out_clause.m"
              {
#line 832 "parse_tree_out_clause.m"
                mercury__term_io__quote_string_3_p_0(parse_tree__parse_tree_out_clause__EnvVarName_42);
              }
#line 833 "parse_tree_out_clause.m"
              {
#line 833 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 784 "parse_tree_out_clause.m"
            }
#line 786 "parse_tree_out_clause.m"
            break;
#line 786 "parse_tree_out_clause.m"
          case (MR_Integer) 1:
#line 787 "parse_tree_out_clause.m"
            {
#line 787 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__TraceExprA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));

#line 788 "parse_tree_out_clause.m"
              {
#line 788 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) "not(");
              }
#line 789 "parse_tree_out_clause.m"
              {
#line 789 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(parse_tree__parse_tree_out_clause__TraceExprA_9);
              }
#line 790 "parse_tree_out_clause.m"
              {
#line 790 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 787 "parse_tree_out_clause.m"
            }
#line 786 "parse_tree_out_clause.m"
            break;
#line 786 "parse_tree_out_clause.m"
          case (MR_Integer) 2:
#line 786 "parse_tree_out_clause.m"
            {
#line 786 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 2)));
#line 786 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 1)));
#line 786 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));

#line 786 "parse_tree_out_clause.m"
#line 786 "parse_tree_out_clause.m"
              switch (parse_tree__parse_tree_out_clause__V_39_39) {
#line 786 "parse_tree_out_clause.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 786 "parse_tree_out_clause.m"
                case (MR_Integer) 1:
#line 799 "parse_tree_out_clause.m"
                  {
#line 800 "parse_tree_out_clause.m"
                    {
#line 800 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(parse_tree__parse_tree_out_clause__V_38_38);
                    }
#line 801 "parse_tree_out_clause.m"
                    {
#line 801 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) " and ");
                    }
#line 802 "parse_tree_out_clause.m"
                    /* direct tailcall eliminated */
#line 802 "parse_tree_out_clause.m"
                    {
#line 802 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__TraceExpr__tmp_copy_6 = parse_tree__parse_tree_out_clause__V_37_37;

#line 802 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__TraceExpr_6 = parse_tree__parse_tree_out_clause__TraceExpr__tmp_copy_6;
#line 802 "parse_tree_out_clause.m"
                    }
#line 802 "parse_tree_out_clause.m"
                    continue;
#line 799 "parse_tree_out_clause.m"
                  }
#line 786 "parse_tree_out_clause.m"
                  break;
#line 786 "parse_tree_out_clause.m"
                case (MR_Integer) 0:
#line 792 "parse_tree_out_clause.m"
                  {
#line 793 "parse_tree_out_clause.m"
                    {
#line 793 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
#line 794 "parse_tree_out_clause.m"
                    {
#line 794 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(parse_tree__parse_tree_out_clause__V_38_38);
                    }
#line 795 "parse_tree_out_clause.m"
                    {
#line 795 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) ") or (");
                    }
#line 796 "parse_tree_out_clause.m"
                    {
#line 796 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(parse_tree__parse_tree_out_clause__V_37_37);
                    }
#line 797 "parse_tree_out_clause.m"
                    {
#line 797 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
#line 792 "parse_tree_out_clause.m"
                  }
#line 786 "parse_tree_out_clause.m"
                  break;
#line 786 "parse_tree_out_clause.m"
              }
#line 786 "parse_tree_out_clause.m"
            }
#line 786 "parse_tree_out_clause.m"
            break;
#line 786 "parse_tree_out_clause.m"
        }
#line 786 "parse_tree_out_clause.m"
      }
#line 786 "parse_tree_out_clause.m"
      break;
#line 786 "parse_tree_out_clause.m"
    }
#line 38 "parse_tree_out_clause.m"
}

#line 868 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_3_p_0(
#line 868 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__1_1)
#line 868 "parse_tree_out_clause.m"
{
#line 870 "parse_tree_out_clause.m"
  {
#line 870 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 870 "parse_tree_out_clause.m"
#line 870 "parse_tree_out_clause.m"
    switch (parse_tree__parse_tree_out_clause__HeadVar__1_1) {
#line 870 "parse_tree_out_clause.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 870 "parse_tree_out_clause.m"
      case (MR_Integer) 0:
#line 870 "parse_tree_out_clause.m"
        {
#line 870 "parse_tree_out_clause.m"
        }
#line 870 "parse_tree_out_clause.m"
        break;
#line 870 "parse_tree_out_clause.m"
      case (MR_Integer) 1:
#line 871 "parse_tree_out_clause.m"
        {
#line 872 "parse_tree_out_clause.m"
          {
#line 872 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) ", ");
          }
#line 871 "parse_tree_out_clause.m"
        }
#line 870 "parse_tree_out_clause.m"
        break;
#line 870 "parse_tree_out_clause.m"
    }
#line 870 "parse_tree_out_clause.m"
  }
#line 868 "parse_tree_out_clause.m"
}

#line 855 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_catch_5_p_0(
#line 855 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 855 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
#line 855 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__3_3)
#line 855 "parse_tree_out_clause.m"
{
#line 858 "parse_tree_out_clause.m"
  {
#line 858 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded;
#line 858 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__Pattern_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__HeadVar__3_3, (MR_Integer) 0)));
#line 858 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__HeadVar__3_3, (MR_Integer) 1)));
#line 858 "parse_tree_out_clause.m"
    MR_Integer parse_tree__parse_tree_out_clause__V_19_19;
#line 858 "parse_tree_out_clause.m"
    MR_Integer parse_tree__parse_tree_out_clause__V_22_22;

#line 859 "parse_tree_out_clause.m"
    {
#line 859 "parse_tree_out_clause.m"
      mercury__io__write_string_3_p_0((MR_String) "catch ");
    }
#line 860 "parse_tree_out_clause.m"
    {
#line 860 "parse_tree_out_clause.m"
      parse_tree__parse_tree_out_term__mercury_output_term_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__Pattern_8);
    }
#line 861 "parse_tree_out_clause.m"
    {
#line 861 "parse_tree_out_clause.m"
      mercury__io__write_string_3_p_0((MR_String) " ->");
    }
#line 862 "parse_tree_out_clause.m"
    parse_tree__parse_tree_out_clause__V_19_19 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 862 "parse_tree_out_clause.m"
    {
#line 862 "parse_tree_out_clause.m"
      parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__V_19_19);
    }
#line 863 "parse_tree_out_clause.m"
    parse_tree__parse_tree_out_clause__V_22_22 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 863 "parse_tree_out_clause.m"
    {
#line 863 "parse_tree_out_clause.m"
      parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__V_22_22, parse_tree__parse_tree_out_clause__Goal_9);
    }
#line 864 "parse_tree_out_clause.m"
    {
#line 864 "parse_tree_out_clause.m"
      parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
    }
#line 858 "parse_tree_out_clause.m"
  }
#line 855 "parse_tree_out_clause.m"
}

#line 843 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_trace_mutable_var_and_comma_7_p_0(
#line 843 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_8,
#line 843 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarNamePrint_9,
#line 843 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__MutableVar_10,
#line 843 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_0_13,
#line 843 "parse_tree_out_clause.m"
  MR_Word * parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_14)
#line 843 "parse_tree_out_clause.m"
{
#line 848 "parse_tree_out_clause.m"
  {
#line 848 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 870 "parse_tree_out_clause.m"
#line 870 "parse_tree_out_clause.m"
    switch (parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_0_13) {
#line 870 "parse_tree_out_clause.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 870 "parse_tree_out_clause.m"
      case (MR_Integer) 0:
#line 870 "parse_tree_out_clause.m"
        {
#line 870 "parse_tree_out_clause.m"
        }
#line 870 "parse_tree_out_clause.m"
        break;
#line 870 "parse_tree_out_clause.m"
      case (MR_Integer) 1:
#line 871 "parse_tree_out_clause.m"
        {
#line 872 "parse_tree_out_clause.m"
          {
#line 872 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) ", ");
          }
#line 871 "parse_tree_out_clause.m"
        }
#line 870 "parse_tree_out_clause.m"
        break;
#line 870 "parse_tree_out_clause.m"
    }
#line 850 "parse_tree_out_clause.m"
    *parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_14 = (MR_Integer) 1;
#line 851 "parse_tree_out_clause.m"
    {
#line 851 "parse_tree_out_clause.m"
      parse_tree__parse_tree_out_clause__mercury_output_trace_mutable_var_5_p_0(parse_tree__parse_tree_out_clause__VarSet_8, parse_tree__parse_tree_out_clause__VarNamePrint_9, parse_tree__parse_tree_out_clause__MutableVar_10);
    }
#line 848 "parse_tree_out_clause.m"
  }
#line 843 "parse_tree_out_clause.m"
}

#line 762 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_6_p_0(
#line 762 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__1_1,
#line 762 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__2_2,
#line 762 "parse_tree_out_clause.m"
  MR_String parse_tree__parse_tree_out_clause__HeadVar__3_3,
#line 762 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__HeadVar__4_4)
#line 762 "parse_tree_out_clause.m"
{
#line 765 "parse_tree_out_clause.m"
  while (MR_TRUE)
#line 765 "parse_tree_out_clause.m"
    {
#line 765 "parse_tree_out_clause.m"
      /* tailcall optimized into a loop */
#line 765 "parse_tree_out_clause.m"
      {
#line 765 "parse_tree_out_clause.m"
        MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 765 "parse_tree_out_clause.m"
        if ((parse_tree__parse_tree_out_clause__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 766 "parse_tree_out_clause.m"
          {
#line 766 "parse_tree_out_clause.m"
          }
#line 765 "parse_tree_out_clause.m"
        else
#line 768 "parse_tree_out_clause.m"
          {
#line 768 "parse_tree_out_clause.m"
            MR_Word parse_tree__parse_tree_out_clause__SVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__HeadVar__4_4, (MR_Integer) 0)));
#line 768 "parse_tree_out_clause.m"
            MR_Word parse_tree__parse_tree_out_clause__SVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__HeadVar__4_4, (MR_Integer) 1)));
#line 770 "parse_tree_out_clause.m"
            MR_Box parse_tree__parse_tree_out_clause__conv0_STATE_VARIABLE_IO_24_24;

#line 769 "parse_tree_out_clause.m"
            {
#line 769 "parse_tree_out_clause.m"
              mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_clause__HeadVar__3_3);
            }
#line 770 "parse_tree_out_clause.m"
            {
#line 770 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__HeadVar__1_1, parse_tree__parse_tree_out_clause__HeadVar__2_2, parse_tree__parse_tree_out_clause__SVar_16, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv0_STATE_VARIABLE_IO_24_24);
            }
#line 776 "parse_tree_out_clause.m"
            if ((parse_tree__parse_tree_out_clause__SVars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 777 "parse_tree_out_clause.m"
              {
#line 777 "parse_tree_out_clause.m"
              }
#line 776 "parse_tree_out_clause.m"
            else
#line 772 "parse_tree_out_clause.m"
              {
#line 772 "parse_tree_out_clause.m"
                MR_Word parse_tree__parse_tree_out_clause__SVar_39;
#line 772 "parse_tree_out_clause.m"
                MR_Word parse_tree__parse_tree_out_clause__SVars_40;
#line 770 "parse_tree_out_clause.m"
                MR_Box parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_24_47;

#line 773 "parse_tree_out_clause.m"
                {
#line 773 "parse_tree_out_clause.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 768 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__SVar_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__SVars_17, (MR_Integer) 0)));
#line 768 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__SVars_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__SVars_17, (MR_Integer) 1)));
#line 769 "parse_tree_out_clause.m"
                {
#line 769 "parse_tree_out_clause.m"
                  mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_clause__HeadVar__3_3);
                }
#line 770 "parse_tree_out_clause.m"
                {
#line 770 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_term__mercury_format_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__HeadVar__1_1, parse_tree__parse_tree_out_clause__HeadVar__2_2, parse_tree__parse_tree_out_clause__SVar_39, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_24_47);
                }
#line 776 "parse_tree_out_clause.m"
                if ((parse_tree__parse_tree_out_clause__SVars_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 777 "parse_tree_out_clause.m"
                  {
#line 777 "parse_tree_out_clause.m"
                  }
#line 776 "parse_tree_out_clause.m"
                else
#line 772 "parse_tree_out_clause.m"
                  {
#line 773 "parse_tree_out_clause.m"
                    {
#line 773 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
#line 774 "parse_tree_out_clause.m"
                    /* direct tailcall eliminated */
#line 774 "parse_tree_out_clause.m"
                    {
#line 774 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__HeadVar__4__tmp_copy_4 = parse_tree__parse_tree_out_clause__SVars_40;

#line 774 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__HeadVar__4_4 = parse_tree__parse_tree_out_clause__HeadVar__4__tmp_copy_4;
#line 774 "parse_tree_out_clause.m"
                    }
#line 774 "parse_tree_out_clause.m"
                    continue;
#line 772 "parse_tree_out_clause.m"
                  }
#line 772 "parse_tree_out_clause.m"
              }
#line 768 "parse_tree_out_clause.m"
          }
#line 765 "parse_tree_out_clause.m"
      }
#line 765 "parse_tree_out_clause.m"
      break;
#line 765 "parse_tree_out_clause.m"
    }
#line 762 "parse_tree_out_clause.m"
}

#line 700 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_promise_eqv_solutions_goal_10_p_0(
#line 700 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_11,
#line 700 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_12,
#line 700 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Vars_13,
#line 700 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__StateVars_14,
#line 700 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__DotSVars_15,
#line 700 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__ColonSVars_16,
#line 700 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Goal_17,
#line 700 "parse_tree_out_clause.m"
  MR_String parse_tree__parse_tree_out_clause__Keyword_18)
#line 700 "parse_tree_out_clause.m"
{
#line 715 "parse_tree_out_clause.m"
  {
#line 715 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded = (parse_tree__parse_tree_out_clause__Vars_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 707 "parse_tree_out_clause.m"
    if (parse_tree__parse_tree_out_clause__succeeded)
#line 707 "parse_tree_out_clause.m"
      {
#line 708 "parse_tree_out_clause.m"
        parse_tree__parse_tree_out_clause__succeeded = (parse_tree__parse_tree_out_clause__StateVars_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 707 "parse_tree_out_clause.m"
          {
#line 709 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__succeeded = (parse_tree__parse_tree_out_clause__DotSVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "parse_tree_out_clause.m"
            if (parse_tree__parse_tree_out_clause__succeeded)
#line 710 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__succeeded = (parse_tree__parse_tree_out_clause__ColonSVars_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "parse_tree_out_clause.m"
          }
#line 707 "parse_tree_out_clause.m"
      }
#line 715 "parse_tree_out_clause.m"
    if (parse_tree__parse_tree_out_clause__succeeded)
#line 714 "parse_tree_out_clause.m"
      {
#line 714 "parse_tree_out_clause.m"
        parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_11, parse_tree__parse_tree_out_clause__Indent_12, parse_tree__parse_tree_out_clause__Goal_17);
      }
#line 715 "parse_tree_out_clause.m"
    else
#line 716 "parse_tree_out_clause.m"
      {
#line 716 "parse_tree_out_clause.m"
        MR_Integer parse_tree__parse_tree_out_clause__Indent1_38;
#line 720 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_20_20;
#line 720 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_21_21;
#line 721 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_22_22;
#line 721 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_23_23;
#line 733 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_28_28;
#line 733 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_29_29;
#line 746 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_36_36;
#line 746 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_37_37;

#line 716 "parse_tree_out_clause.m"
        {
#line 716 "parse_tree_out_clause.m"
          mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_clause__Keyword_18);
        }
#line 717 "parse_tree_out_clause.m"
        {
#line 717 "parse_tree_out_clause.m"
          mercury__io__write_string_3_p_0((MR_String) " [");
        }
#line 718 "parse_tree_out_clause.m"
        {
#line 718 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_11, (MR_Integer) 0, parse_tree__parse_tree_out_clause__Vars_13);
        }
#line 720 "parse_tree_out_clause.m"
        parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Vars_13)) == (MR_mktag((MR_Integer) 1)));
#line 720 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 720 "parse_tree_out_clause.m"
          {
#line 720 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_13, (MR_Integer) 0)));
#line 720 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_13, (MR_Integer) 1)));
#line 721 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__StateVars_14)) == (MR_mktag((MR_Integer) 1)));
#line 721 "parse_tree_out_clause.m"
            if (parse_tree__parse_tree_out_clause__succeeded)
#line 721 "parse_tree_out_clause.m"
              {
#line 721 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_14, (MR_Integer) 0)));
#line 721 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_14, (MR_Integer) 1)));
#line 721 "parse_tree_out_clause.m"
              }
#line 720 "parse_tree_out_clause.m"
          }
#line 724 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 723 "parse_tree_out_clause.m"
          {
#line 723 "parse_tree_out_clause.m"
            {
#line 723 "parse_tree_out_clause.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 723 "parse_tree_out_clause.m"
          }
#line 724 "parse_tree_out_clause.m"
        else
#line 724 "parse_tree_out_clause.m"
          {
#line 724 "parse_tree_out_clause.m"
          }
#line 727 "parse_tree_out_clause.m"
        {
#line 727 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_6_p_0(parse_tree__parse_tree_out_clause__VarSet_11, (MR_Integer) 0, (MR_String) "!", parse_tree__parse_tree_out_clause__StateVars_14);
        }
#line 730 "parse_tree_out_clause.m"
        {
#line 730 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__V_24_24;
#line 730 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__V_25_25;

#line 730 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Vars_13)) == (MR_mktag((MR_Integer) 1)));
#line 730 "parse_tree_out_clause.m"
          if (parse_tree__parse_tree_out_clause__succeeded)
#line 730 "parse_tree_out_clause.m"
            {
#line 730 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_13, (MR_Integer) 0)));
#line 730 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_13, (MR_Integer) 1)));
#line 730 "parse_tree_out_clause.m"
            }
#line 730 "parse_tree_out_clause.m"
        }
#line 731 "parse_tree_out_clause.m"
        if (!(parse_tree__parse_tree_out_clause__succeeded))
#line 731 "parse_tree_out_clause.m"
          {
#line 731 "parse_tree_out_clause.m"
            MR_Word parse_tree__parse_tree_out_clause__V_26_26;
#line 731 "parse_tree_out_clause.m"
            MR_Word parse_tree__parse_tree_out_clause__V_27_27;

#line 731 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__StateVars_14)) == (MR_mktag((MR_Integer) 1)));
#line 731 "parse_tree_out_clause.m"
            if (parse_tree__parse_tree_out_clause__succeeded)
#line 731 "parse_tree_out_clause.m"
              {
#line 731 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_14, (MR_Integer) 0)));
#line 731 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_14, (MR_Integer) 1)));
#line 731 "parse_tree_out_clause.m"
              }
#line 731 "parse_tree_out_clause.m"
          }
#line 732 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 732 "parse_tree_out_clause.m"
          {
#line 733 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__DotSVars_15)) == (MR_mktag((MR_Integer) 1)));
#line 733 "parse_tree_out_clause.m"
            if (parse_tree__parse_tree_out_clause__succeeded)
#line 733 "parse_tree_out_clause.m"
              {
#line 733 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__DotSVars_15, (MR_Integer) 0)));
#line 733 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__DotSVars_15, (MR_Integer) 1)));
#line 733 "parse_tree_out_clause.m"
              }
#line 732 "parse_tree_out_clause.m"
          }
#line 736 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 735 "parse_tree_out_clause.m"
          {
#line 735 "parse_tree_out_clause.m"
            {
#line 735 "parse_tree_out_clause.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 735 "parse_tree_out_clause.m"
          }
#line 736 "parse_tree_out_clause.m"
        else
#line 736 "parse_tree_out_clause.m"
          {
#line 736 "parse_tree_out_clause.m"
          }
#line 739 "parse_tree_out_clause.m"
        {
#line 739 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_6_p_0(parse_tree__parse_tree_out_clause__VarSet_11, (MR_Integer) 0, (MR_String) "!.", parse_tree__parse_tree_out_clause__DotSVars_15);
        }
#line 742 "parse_tree_out_clause.m"
        {
#line 742 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__V_30_30;
#line 742 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__V_31_31;

#line 742 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Vars_13)) == (MR_mktag((MR_Integer) 1)));
#line 742 "parse_tree_out_clause.m"
          if (parse_tree__parse_tree_out_clause__succeeded)
#line 742 "parse_tree_out_clause.m"
            {
#line 742 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_13, (MR_Integer) 0)));
#line 742 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_13, (MR_Integer) 1)));
#line 742 "parse_tree_out_clause.m"
            }
#line 742 "parse_tree_out_clause.m"
        }
#line 743 "parse_tree_out_clause.m"
        if (!(parse_tree__parse_tree_out_clause__succeeded))
#line 743 "parse_tree_out_clause.m"
          {
#line 743 "parse_tree_out_clause.m"
            {
#line 743 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_32_32;
#line 743 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_33_33;

#line 743 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__StateVars_14)) == (MR_mktag((MR_Integer) 1)));
#line 743 "parse_tree_out_clause.m"
              if (parse_tree__parse_tree_out_clause__succeeded)
#line 743 "parse_tree_out_clause.m"
                {
#line 743 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_14, (MR_Integer) 0)));
#line 743 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_14, (MR_Integer) 1)));
#line 743 "parse_tree_out_clause.m"
                }
#line 743 "parse_tree_out_clause.m"
            }
#line 743 "parse_tree_out_clause.m"
            if (!(parse_tree__parse_tree_out_clause__succeeded))
#line 744 "parse_tree_out_clause.m"
              {
#line 744 "parse_tree_out_clause.m"
                MR_Word parse_tree__parse_tree_out_clause__V_34_34;
#line 744 "parse_tree_out_clause.m"
                MR_Word parse_tree__parse_tree_out_clause__V_35_35;

#line 744 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__DotSVars_15)) == (MR_mktag((MR_Integer) 1)));
#line 744 "parse_tree_out_clause.m"
                if (parse_tree__parse_tree_out_clause__succeeded)
#line 744 "parse_tree_out_clause.m"
                  {
#line 744 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__DotSVars_15, (MR_Integer) 0)));
#line 744 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__DotSVars_15, (MR_Integer) 1)));
#line 744 "parse_tree_out_clause.m"
                  }
#line 744 "parse_tree_out_clause.m"
              }
#line 743 "parse_tree_out_clause.m"
          }
#line 745 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 745 "parse_tree_out_clause.m"
          {
#line 746 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__ColonSVars_16)) == (MR_mktag((MR_Integer) 1)));
#line 746 "parse_tree_out_clause.m"
            if (parse_tree__parse_tree_out_clause__succeeded)
#line 746 "parse_tree_out_clause.m"
              {
#line 746 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__ColonSVars_16, (MR_Integer) 0)));
#line 746 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__ColonSVars_16, (MR_Integer) 1)));
#line 746 "parse_tree_out_clause.m"
              }
#line 745 "parse_tree_out_clause.m"
          }
#line 749 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 748 "parse_tree_out_clause.m"
          {
#line 748 "parse_tree_out_clause.m"
            {
#line 748 "parse_tree_out_clause.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 748 "parse_tree_out_clause.m"
          }
#line 749 "parse_tree_out_clause.m"
        else
#line 749 "parse_tree_out_clause.m"
          {
#line 749 "parse_tree_out_clause.m"
          }
#line 752 "parse_tree_out_clause.m"
        {
#line 752 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__mercury_output_state_vars_using_prefix_6_p_0(parse_tree__parse_tree_out_clause__VarSet_11, (MR_Integer) 0, (MR_String) "!:", parse_tree__parse_tree_out_clause__ColonSVars_16);
        }
#line 754 "parse_tree_out_clause.m"
        {
#line 754 "parse_tree_out_clause.m"
          mercury__io__write_string_3_p_0((MR_String) "] (");
        }
#line 755 "parse_tree_out_clause.m"
        parse_tree__parse_tree_out_clause__Indent1_38 = (parse_tree__parse_tree_out_clause__Indent_12 + (MR_Integer) 1);
#line 756 "parse_tree_out_clause.m"
        {
#line 756 "parse_tree_out_clause.m"
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_38);
        }
#line 757 "parse_tree_out_clause.m"
        {
#line 757 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_11, parse_tree__parse_tree_out_clause__Indent1_38, parse_tree__parse_tree_out_clause__Goal_17);
        }
#line 758 "parse_tree_out_clause.m"
        {
#line 758 "parse_tree_out_clause.m"
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_12);
        }
#line 759 "parse_tree_out_clause.m"
        {
#line 759 "parse_tree_out_clause.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
#line 716 "parse_tree_out_clause.m"
      }
#line 715 "parse_tree_out_clause.m"
  }
#line 700 "parse_tree_out_clause.m"
}

#line 672 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_some_5_p_0(
#line 672 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__TypeInfo_for_T_30,
#line 672 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 672 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Vars_7,
#line 672 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__StateVars_8)
#line 672 "parse_tree_out_clause.m"
{
#line 694 "parse_tree_out_clause.m"
  {
#line 694 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 677 "parse_tree_out_clause.m"
    {
#line 677 "parse_tree_out_clause.m"
      MR_Word parse_tree__parse_tree_out_clause__V_10_10;
#line 677 "parse_tree_out_clause.m"
      MR_Word parse_tree__parse_tree_out_clause__V_11_11;

#line 677 "parse_tree_out_clause.m"
      parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Vars_7)) == (MR_mktag((MR_Integer) 1)));
#line 677 "parse_tree_out_clause.m"
      if (parse_tree__parse_tree_out_clause__succeeded)
#line 677 "parse_tree_out_clause.m"
        {
#line 677 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_7, (MR_Integer) 0)));
#line 677 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_7, (MR_Integer) 1)));
#line 677 "parse_tree_out_clause.m"
        }
#line 677 "parse_tree_out_clause.m"
    }
#line 678 "parse_tree_out_clause.m"
    if (!(parse_tree__parse_tree_out_clause__succeeded))
#line 678 "parse_tree_out_clause.m"
      {
#line 678 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_12_12;
#line 678 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_13_13;

#line 678 "parse_tree_out_clause.m"
        parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__StateVars_8)) == (MR_mktag((MR_Integer) 1)));
#line 678 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 678 "parse_tree_out_clause.m"
          {
#line 678 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_8, (MR_Integer) 0)));
#line 678 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_8, (MR_Integer) 1)));
#line 678 "parse_tree_out_clause.m"
          }
#line 678 "parse_tree_out_clause.m"
      }
#line 694 "parse_tree_out_clause.m"
    if (parse_tree__parse_tree_out_clause__succeeded)
#line 681 "parse_tree_out_clause.m"
      {
#line 684 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_14_14;
#line 684 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_15_15;
#line 685 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_16_16;
#line 685 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_17_17;

#line 681 "parse_tree_out_clause.m"
        {
#line 681 "parse_tree_out_clause.m"
          mercury__io__write_string_3_p_0((MR_String) " some [");
        }
#line 682 "parse_tree_out_clause.m"
        {
#line 682 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(parse_tree__parse_tree_out_clause__TypeInfo_for_T_30, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__Vars_7);
        }
#line 684 "parse_tree_out_clause.m"
        parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Vars_7)) == (MR_mktag((MR_Integer) 1)));
#line 684 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 684 "parse_tree_out_clause.m"
          {
#line 684 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_7, (MR_Integer) 0)));
#line 684 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Vars_7, (MR_Integer) 1)));
#line 685 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__succeeded = ((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__StateVars_8)) == (MR_mktag((MR_Integer) 1)));
#line 685 "parse_tree_out_clause.m"
            if (parse_tree__parse_tree_out_clause__succeeded)
#line 685 "parse_tree_out_clause.m"
              {
#line 685 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_8, (MR_Integer) 0)));
#line 685 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__StateVars_8, (MR_Integer) 1)));
#line 685 "parse_tree_out_clause.m"
              }
#line 684 "parse_tree_out_clause.m"
          }
#line 690 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 687 "parse_tree_out_clause.m"
          {
#line 687 "parse_tree_out_clause.m"
            {
#line 687 "parse_tree_out_clause.m"
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
#line 689 "parse_tree_out_clause.m"
            {
#line 689 "parse_tree_out_clause.m"
              parse_tree__mercury_to_mercury__mercury_output_state_vars_5_p_0(parse_tree__parse_tree_out_clause__TypeInfo_for_T_30, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__StateVars_8);
            }
#line 687 "parse_tree_out_clause.m"
          }
#line 690 "parse_tree_out_clause.m"
        else
#line 690 "parse_tree_out_clause.m"
          {
#line 690 "parse_tree_out_clause.m"
          }
#line 693 "parse_tree_out_clause.m"
        {
#line 693 "parse_tree_out_clause.m"
          mercury__io__write_string_3_p_0((MR_String) "]");
        }
#line 681 "parse_tree_out_clause.m"
      }
#line 694 "parse_tree_out_clause.m"
    else
#line 694 "parse_tree_out_clause.m"
      {
#line 694 "parse_tree_out_clause.m"
      }
#line 694 "parse_tree_out_clause.m"
  }
#line 672 "parse_tree_out_clause.m"
}

#line 649 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_orelse_goals_5_p_0(
#line 649 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 649 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
#line 649 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Goals_8)
#line 649 "parse_tree_out_clause.m"
{
#line 654 "parse_tree_out_clause.m"
  while (MR_TRUE)
#line 654 "parse_tree_out_clause.m"
    {
#line 654 "parse_tree_out_clause.m"
      /* tailcall optimized into a loop */
#line 654 "parse_tree_out_clause.m"
      {
#line 654 "parse_tree_out_clause.m"
        MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 654 "parse_tree_out_clause.m"
        if ((parse_tree__parse_tree_out_clause__Goals_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 654 "parse_tree_out_clause.m"
          {
#line 654 "parse_tree_out_clause.m"
          }
#line 654 "parse_tree_out_clause.m"
        else
#line 656 "parse_tree_out_clause.m"
          {
#line 656 "parse_tree_out_clause.m"
            MR_Word parse_tree__parse_tree_out_clause__HeadGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Goals_8, (MR_Integer) 0)));
#line 656 "parse_tree_out_clause.m"
            MR_Word parse_tree__parse_tree_out_clause__TailGoals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Goals_8, (MR_Integer) 1)));

#line 660 "parse_tree_out_clause.m"
            if ((parse_tree__parse_tree_out_clause__TailGoals_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 658 "parse_tree_out_clause.m"
              {
#line 658 "parse_tree_out_clause.m"
                MR_Integer parse_tree__parse_tree_out_clause__V_24_24 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);

#line 659 "parse_tree_out_clause.m"
                {
#line 659 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__V_24_24, parse_tree__parse_tree_out_clause__HeadGoal_10);
                }
#line 658 "parse_tree_out_clause.m"
              }
#line 660 "parse_tree_out_clause.m"
            else
#line 661 "parse_tree_out_clause.m"
              {
#line 661 "parse_tree_out_clause.m"
                MR_Integer parse_tree__parse_tree_out_clause__V_16_16 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);

#line 662 "parse_tree_out_clause.m"
                {
#line 662 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__V_16_16, parse_tree__parse_tree_out_clause__HeadGoal_10);
                }
#line 663 "parse_tree_out_clause.m"
                {
#line 663 "parse_tree_out_clause.m"
                  parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                }
#line 664 "parse_tree_out_clause.m"
                {
#line 664 "parse_tree_out_clause.m"
                  mercury__io__write_string_3_p_0((MR_String) "orelse");
                }
#line 665 "parse_tree_out_clause.m"
                {
#line 665 "parse_tree_out_clause.m"
                  parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                }
#line 666 "parse_tree_out_clause.m"
                /* direct tailcall eliminated */
#line 666 "parse_tree_out_clause.m"
                {
#line 666 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Goals__tmp_copy_8 = parse_tree__parse_tree_out_clause__TailGoals_11;

#line 666 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__Goals_8 = parse_tree__parse_tree_out_clause__Goals__tmp_copy_8;
#line 666 "parse_tree_out_clause.m"
                }
#line 666 "parse_tree_out_clause.m"
                continue;
#line 661 "parse_tree_out_clause.m"
              }
#line 656 "parse_tree_out_clause.m"
          }
#line 654 "parse_tree_out_clause.m"
      }
#line 654 "parse_tree_out_clause.m"
      break;
#line 654 "parse_tree_out_clause.m"
    }
#line 649 "parse_tree_out_clause.m"
}

#line 632 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_par_conj_5_p_0(
#line 632 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 632 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
#line 632 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Goal_8)
#line 632 "parse_tree_out_clause.m"
{
#line 635 "parse_tree_out_clause.m"
  while (MR_TRUE)
#line 635 "parse_tree_out_clause.m"
    {
#line 635 "parse_tree_out_clause.m"
      /* tailcall optimized into a loop */
#line 635 "parse_tree_out_clause.m"
      {
#line 635 "parse_tree_out_clause.m"
        MR_bool parse_tree__parse_tree_out_clause__succeeded;
#line 635 "parse_tree_out_clause.m"
        MR_Integer parse_tree__parse_tree_out_clause__Indent1_10;
#line 643 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__SubGoalA_12;
#line 643 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__SubGoalB_13;
#line 640 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_11_11;

#line 636 "parse_tree_out_clause.m"
        {
#line 636 "parse_tree_out_clause.m"
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
        }
#line 637 "parse_tree_out_clause.m"
        {
#line 637 "parse_tree_out_clause.m"
          mercury__io__write_string_3_p_0((MR_String) "&");
        }
#line 638 "parse_tree_out_clause.m"
        parse_tree__parse_tree_out_clause__Indent1_10 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 639 "parse_tree_out_clause.m"
        {
#line 639 "parse_tree_out_clause.m"
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_10);
        }
#line 640 "parse_tree_out_clause.m"
        parse_tree__parse_tree_out_clause__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Goal_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 640 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 640 "parse_tree_out_clause.m"
          {
#line 640 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
#line 640 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__SubGoalA_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 640 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__SubGoalB_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 641 "parse_tree_out_clause.m"
            {
#line 641 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_10, parse_tree__parse_tree_out_clause__SubGoalA_12);
            }
#line 642 "parse_tree_out_clause.m"
            {
#line 642 "parse_tree_out_clause.m"
              /* direct tailcall eliminated */
#line 642 "parse_tree_out_clause.m"
              {
#line 642 "parse_tree_out_clause.m"
                MR_Word parse_tree__parse_tree_out_clause__Goal__tmp_copy_8 = parse_tree__parse_tree_out_clause__SubGoalB_13;

#line 642 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__Goal_8 = parse_tree__parse_tree_out_clause__Goal__tmp_copy_8;
#line 642 "parse_tree_out_clause.m"
              }
#line 642 "parse_tree_out_clause.m"
              continue;
#line 642 "parse_tree_out_clause.m"
            }
#line 640 "parse_tree_out_clause.m"
          }
#line 640 "parse_tree_out_clause.m"
        else
#line 644 "parse_tree_out_clause.m"
          {
#line 644 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_10, parse_tree__parse_tree_out_clause__Goal_8);
          }
#line 635 "parse_tree_out_clause.m"
      }
#line 635 "parse_tree_out_clause.m"
      break;
#line 635 "parse_tree_out_clause.m"
    }
#line 632 "parse_tree_out_clause.m"
}

#line 615 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_disj_5_p_0(
#line 615 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 615 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
#line 615 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Goal_8)
#line 615 "parse_tree_out_clause.m"
{
#line 618 "parse_tree_out_clause.m"
  while (MR_TRUE)
#line 618 "parse_tree_out_clause.m"
    {
#line 618 "parse_tree_out_clause.m"
      /* tailcall optimized into a loop */
#line 618 "parse_tree_out_clause.m"
      {
#line 618 "parse_tree_out_clause.m"
        MR_bool parse_tree__parse_tree_out_clause__succeeded;
#line 618 "parse_tree_out_clause.m"
        MR_Integer parse_tree__parse_tree_out_clause__Indent1_10;
#line 626 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__SubGoalA_12;
#line 626 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__SubGoalB_13;
#line 623 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_11_11;

#line 619 "parse_tree_out_clause.m"
        {
#line 619 "parse_tree_out_clause.m"
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
        }
#line 620 "parse_tree_out_clause.m"
        {
#line 620 "parse_tree_out_clause.m"
          mercury__io__write_string_3_p_0((MR_String) ";");
        }
#line 621 "parse_tree_out_clause.m"
        parse_tree__parse_tree_out_clause__Indent1_10 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 622 "parse_tree_out_clause.m"
        {
#line 622 "parse_tree_out_clause.m"
          parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_10);
        }
#line 623 "parse_tree_out_clause.m"
        parse_tree__parse_tree_out_clause__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Goal_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 623 "parse_tree_out_clause.m"
        if (parse_tree__parse_tree_out_clause__succeeded)
#line 623 "parse_tree_out_clause.m"
          {
#line 623 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
#line 623 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__SubGoalA_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 623 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__SubGoalB_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 624 "parse_tree_out_clause.m"
            {
#line 624 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_10, parse_tree__parse_tree_out_clause__SubGoalA_12);
            }
#line 625 "parse_tree_out_clause.m"
            {
#line 625 "parse_tree_out_clause.m"
              /* direct tailcall eliminated */
#line 625 "parse_tree_out_clause.m"
              {
#line 625 "parse_tree_out_clause.m"
                MR_Word parse_tree__parse_tree_out_clause__Goal__tmp_copy_8 = parse_tree__parse_tree_out_clause__SubGoalB_13;

#line 625 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__Goal_8 = parse_tree__parse_tree_out_clause__Goal__tmp_copy_8;
#line 625 "parse_tree_out_clause.m"
              }
#line 625 "parse_tree_out_clause.m"
              continue;
#line 625 "parse_tree_out_clause.m"
            }
#line 623 "parse_tree_out_clause.m"
          }
#line 623 "parse_tree_out_clause.m"
        else
#line 627 "parse_tree_out_clause.m"
          {
#line 627 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_10, parse_tree__parse_tree_out_clause__Goal_8);
          }
#line 618 "parse_tree_out_clause.m"
      }
#line 618 "parse_tree_out_clause.m"
      break;
#line 618 "parse_tree_out_clause.m"
    }
#line 615 "parse_tree_out_clause.m"
}

#line 592 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_call_5_p_0(
#line 592 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 592 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__SymName_7,
#line 592 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Term_8)
#line 592 "parse_tree_out_clause.m"
{
#line 597 "parse_tree_out_clause.m"
  {
#line 597 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 597 "parse_tree_out_clause.m"
    if (((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__SymName_7)) == (MR_mktag((MR_Integer) 1))))
#line 597 "parse_tree_out_clause.m"
      {
#line 597 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__SymName_7, (MR_Integer) 0)));
#line 597 "parse_tree_out_clause.m"
        MR_String parse_tree__parse_tree_out_clause__PredName_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__SymName_7, (MR_Integer) 1)));
#line 597 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__Context0_12;
#line 597 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__SubTerm_13;
#line 597 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_24_24;

#line 598 "parse_tree_out_clause.m"
        {
#line 598 "parse_tree_out_clause.m"
          parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_ngt_4_p_0((MR_Integer) 0, parse_tree__parse_tree_out_clause__ModuleName_10);
        }
#line 600 "parse_tree_out_clause.m"
        {
#line 600 "parse_tree_out_clause.m"
          mercury__io__write_string_3_p_0((MR_String) ".");
        }
#line 601 "parse_tree_out_clause.m"
        {
#line 601 "parse_tree_out_clause.m"
          mercury__term__context_init_1_p_0(&parse_tree__parse_tree_out_clause__Context0_12);
        }
#line 602 "parse_tree_out_clause.m"
        {
#line 602 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 602 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_24_24, 0) = ((MR_Box) (parse_tree__parse_tree_out_clause__PredName_11));
#line 602 "parse_tree_out_clause.m"
        }
#line 602 "parse_tree_out_clause.m"
        {
#line 602 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__SubTerm_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 602 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__SubTerm_13, 0) = ((MR_Box) (parse_tree__parse_tree_out_clause__V_24_24));
#line 602 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__SubTerm_13, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__Term_8));
#line 602 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__SubTerm_13, 2) = ((MR_Box) (parse_tree__parse_tree_out_clause__Context0_12));
#line 602 "parse_tree_out_clause.m"
        }
#line 603 "parse_tree_out_clause.m"
        {
#line 603 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out_clause__SubTerm_13);
        }
#line 597 "parse_tree_out_clause.m"
      }
#line 597 "parse_tree_out_clause.m"
    else
#line 606 "parse_tree_out_clause.m"
      {
#line 606 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__V_16_16;
#line 606 "parse_tree_out_clause.m"
        MR_String parse_tree__parse_tree_out_clause__PredName_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__SymName_7, (MR_Integer) 0)));
#line 606 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__Context0_29;
#line 606 "parse_tree_out_clause.m"
        MR_Word parse_tree__parse_tree_out_clause__SubTerm_30;

#line 607 "parse_tree_out_clause.m"
        {
#line 607 "parse_tree_out_clause.m"
          mercury__term__context_init_1_p_0(&parse_tree__parse_tree_out_clause__Context0_29);
        }
#line 608 "parse_tree_out_clause.m"
        {
#line 608 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 608 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_16_16, 0) = ((MR_Box) (parse_tree__parse_tree_out_clause__PredName_28));
#line 608 "parse_tree_out_clause.m"
        }
#line 608 "parse_tree_out_clause.m"
        {
#line 608 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__SubTerm_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 608 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__SubTerm_30, 0) = ((MR_Box) (parse_tree__parse_tree_out_clause__V_16_16));
#line 608 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__SubTerm_30, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__Term_8));
#line 608 "parse_tree_out_clause.m"
          MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__SubTerm_30, 2) = ((MR_Box) (parse_tree__parse_tree_out_clause__Context0_29));
#line 608 "parse_tree_out_clause.m"
        }
#line 609 "parse_tree_out_clause.m"
        {
#line 609 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out_clause__SubTerm_30);
        }
#line 606 "parse_tree_out_clause.m"
      }
#line 597 "parse_tree_out_clause.m"
  }
#line 592 "parse_tree_out_clause.m"
}

#line 547 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(
#line 547 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__VarSet_6,
#line 547 "parse_tree_out_clause.m"
  MR_Integer parse_tree__parse_tree_out_clause__Indent_7,
#line 547 "parse_tree_out_clause.m"
  MR_Word parse_tree__parse_tree_out_clause__Goal_8)
#line 547 "parse_tree_out_clause.m"
{
#line 564 "parse_tree_out_clause.m"
  {
#line 564 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 564 "parse_tree_out_clause.m"
#line 564 "parse_tree_out_clause.m"
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Goal_8)) {
#line 564 "parse_tree_out_clause.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 564 "parse_tree_out_clause.m"
      case (MR_Integer) 0:
#line 564 "parse_tree_out_clause.m"
      case (MR_Integer) 1:
#line 565 "parse_tree_out_clause.m"
        {
#line 565 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__Goal_8);
        }
#line 564 "parse_tree_out_clause.m"
        break;
#line 564 "parse_tree_out_clause.m"
      case (MR_Integer) 2:
#line 581 "parse_tree_out_clause.m"
        {
#line 581 "parse_tree_out_clause.m"
          MR_Integer parse_tree__parse_tree_out_clause__Indent1_108;

#line 582 "parse_tree_out_clause.m"
          {
#line 582 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) "(");
          }
#line 583 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__Indent1_108 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 584 "parse_tree_out_clause.m"
          {
#line 584 "parse_tree_out_clause.m"
            parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_108);
          }
#line 585 "parse_tree_out_clause.m"
          {
#line 585 "parse_tree_out_clause.m"
            parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_108, parse_tree__parse_tree_out_clause__Goal_8);
          }
#line 586 "parse_tree_out_clause.m"
          {
#line 586 "parse_tree_out_clause.m"
            parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
          }
#line 587 "parse_tree_out_clause.m"
          {
#line 587 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
#line 581 "parse_tree_out_clause.m"
        }
#line 564 "parse_tree_out_clause.m"
        break;
#line 564 "parse_tree_out_clause.m"
      case (MR_Integer) 3:
#line 564 "parse_tree_out_clause.m"
#line 564 "parse_tree_out_clause.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 0)))) {
#line 564 "parse_tree_out_clause.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 564 "parse_tree_out_clause.m"
          case (MR_Integer) 0:
#line 564 "parse_tree_out_clause.m"
          case (MR_Integer) 1:
#line 564 "parse_tree_out_clause.m"
          case (MR_Integer) 2:
#line 564 "parse_tree_out_clause.m"
          case (MR_Integer) 3:
#line 564 "parse_tree_out_clause.m"
          case (MR_Integer) 4:
#line 564 "parse_tree_out_clause.m"
          case (MR_Integer) 5:
#line 564 "parse_tree_out_clause.m"
          case (MR_Integer) 19:
#line 564 "parse_tree_out_clause.m"
          case (MR_Integer) 20:
#line 564 "parse_tree_out_clause.m"
          case (MR_Integer) 21:
#line 564 "parse_tree_out_clause.m"
          case (MR_Integer) 22:
#line 565 "parse_tree_out_clause.m"
            {
#line 565 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__Goal_8);
            }
#line 564 "parse_tree_out_clause.m"
            break;
#line 564 "parse_tree_out_clause.m"
          case (MR_Integer) 6:
#line 564 "parse_tree_out_clause.m"
          case (MR_Integer) 7:
#line 564 "parse_tree_out_clause.m"
          case (MR_Integer) 8:
#line 564 "parse_tree_out_clause.m"
          case (MR_Integer) 9:
#line 564 "parse_tree_out_clause.m"
          case (MR_Integer) 10:
#line 564 "parse_tree_out_clause.m"
          case (MR_Integer) 11:
#line 564 "parse_tree_out_clause.m"
          case (MR_Integer) 12:
#line 564 "parse_tree_out_clause.m"
          case (MR_Integer) 13:
#line 564 "parse_tree_out_clause.m"
          case (MR_Integer) 14:
#line 564 "parse_tree_out_clause.m"
          case (MR_Integer) 15:
#line 564 "parse_tree_out_clause.m"
          case (MR_Integer) 16:
#line 564 "parse_tree_out_clause.m"
          case (MR_Integer) 17:
#line 564 "parse_tree_out_clause.m"
          case (MR_Integer) 18:
#line 581 "parse_tree_out_clause.m"
            {
#line 581 "parse_tree_out_clause.m"
              MR_Integer parse_tree__parse_tree_out_clause__Indent1_108;

#line 582 "parse_tree_out_clause.m"
              {
#line 582 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
#line 583 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__Indent1_108 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 584 "parse_tree_out_clause.m"
              {
#line 584 "parse_tree_out_clause.m"
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_108);
              }
#line 585 "parse_tree_out_clause.m"
              {
#line 585 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_108, parse_tree__parse_tree_out_clause__Goal_8);
              }
#line 586 "parse_tree_out_clause.m"
              {
#line 586 "parse_tree_out_clause.m"
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
              }
#line 587 "parse_tree_out_clause.m"
              {
#line 587 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 581 "parse_tree_out_clause.m"
            }
#line 564 "parse_tree_out_clause.m"
            break;
#line 564 "parse_tree_out_clause.m"
        }
#line 564 "parse_tree_out_clause.m"
        break;
#line 564 "parse_tree_out_clause.m"
    }
#line 564 "parse_tree_out_clause.m"
  }
#line 547 "parse_tree_out_clause.m"
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
#line 835 "parse_tree_out_clause.m"
  {
#line 835 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded;
#line 835 "parse_tree_out_clause.m"
    MR_String parse_tree__parse_tree_out_clause__MutableName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__MutableVar_8, (MR_Integer) 0)));
#line 835 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__StateVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__MutableVar_8, (MR_Integer) 1)));

#line 837 "parse_tree_out_clause.m"
    {
#line 837 "parse_tree_out_clause.m"
      mercury__io__write_string_3_p_0((MR_String) "state(");
    }
#line 838 "parse_tree_out_clause.m"
    {
#line 838 "parse_tree_out_clause.m"
      mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_clause__MutableName_10);
    }
#line 839 "parse_tree_out_clause.m"
    {
#line 839 "parse_tree_out_clause.m"
      mercury__io__write_string_3_p_0((MR_String) ", !");
    }
#line 840 "parse_tree_out_clause.m"
    {
#line 840 "parse_tree_out_clause.m"
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__VarNamePrint_7, parse_tree__parse_tree_out_clause__StateVar_11);
    }
#line 841 "parse_tree_out_clause.m"
    {
#line 841 "parse_tree_out_clause.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 835 "parse_tree_out_clause.m"
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
#line 830 "parse_tree_out_clause.m"
  {
#line 830 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded;
#line 830 "parse_tree_out_clause.m"
    MR_String parse_tree__parse_tree_out_clause__EnvVarName_4 = (MR_String) parse_tree__parse_tree_out_clause__HeadVar__1_1;

#line 831 "parse_tree_out_clause.m"
    {
#line 831 "parse_tree_out_clause.m"
      mercury__io__write_string_3_p_0((MR_String) "env(");
    }
#line 832 "parse_tree_out_clause.m"
    {
#line 832 "parse_tree_out_clause.m"
      mercury__term_io__quote_string_3_p_0(parse_tree__parse_tree_out_clause__EnvVarName_4);
    }
#line 833 "parse_tree_out_clause.m"
    {
#line 833 "parse_tree_out_clause.m"
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
#line 830 "parse_tree_out_clause.m"
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
#line 807 "parse_tree_out_clause.m"
  {
#line 807 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 807 "parse_tree_out_clause.m"
#line 807 "parse_tree_out_clause.m"
    switch (MR_tag((MR_Word) parse_tree__parse_tree_out_clause__CompileTime_4)) {
#line 807 "parse_tree_out_clause.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 807 "parse_tree_out_clause.m"
      case (MR_Integer) 0:
#line 807 "parse_tree_out_clause.m"
        {
#line 807 "parse_tree_out_clause.m"
          MR_String parse_tree__parse_tree_out_clause__FlagName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__CompileTime_4, (MR_Integer) 0)));

#line 808 "parse_tree_out_clause.m"
          {
#line 808 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) "flag(");
          }
#line 809 "parse_tree_out_clause.m"
          {
#line 809 "parse_tree_out_clause.m"
            mercury__term_io__quote_string_3_p_0(parse_tree__parse_tree_out_clause__FlagName_6);
          }
#line 810 "parse_tree_out_clause.m"
          {
#line 810 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
#line 807 "parse_tree_out_clause.m"
        }
#line 807 "parse_tree_out_clause.m"
        break;
#line 807 "parse_tree_out_clause.m"
      case (MR_Integer) 1:
#line 812 "parse_tree_out_clause.m"
        {
#line 812 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__Grade_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__CompileTime_4, (MR_Integer) 0)));
#line 812 "parse_tree_out_clause.m"
          MR_String parse_tree__parse_tree_out_clause__GradeName_8;

#line 813 "parse_tree_out_clause.m"
          {
#line 813 "parse_tree_out_clause.m"
            parse_tree__prog_data__parse_trace_grade_name_2_p_1(&parse_tree__parse_tree_out_clause__GradeName_8, parse_tree__parse_tree_out_clause__Grade_7);
          }
#line 814 "parse_tree_out_clause.m"
          {
#line 814 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) "grade(");
          }
#line 815 "parse_tree_out_clause.m"
          {
#line 815 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0(parse_tree__parse_tree_out_clause__GradeName_8);
          }
#line 816 "parse_tree_out_clause.m"
          {
#line 816 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
#line 812 "parse_tree_out_clause.m"
        }
#line 807 "parse_tree_out_clause.m"
        break;
#line 807 "parse_tree_out_clause.m"
      case (MR_Integer) 2:
#line 818 "parse_tree_out_clause.m"
        {
#line 818 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__Level_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__CompileTime_4, (MR_Integer) 0)));

#line 819 "parse_tree_out_clause.m"
          {
#line 819 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) "tracelevel(");
          }
#line 823 "parse_tree_out_clause.m"
#line 823 "parse_tree_out_clause.m"
          switch (parse_tree__parse_tree_out_clause__Level_9) {
#line 823 "parse_tree_out_clause.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 823 "parse_tree_out_clause.m"
            case (MR_Integer) 1:
#line 824 "parse_tree_out_clause.m"
              {
#line 825 "parse_tree_out_clause.m"
                {
#line 825 "parse_tree_out_clause.m"
                  mercury__io__write_string_3_p_0((MR_String) "deep");
                }
#line 824 "parse_tree_out_clause.m"
              }
#line 823 "parse_tree_out_clause.m"
              break;
#line 823 "parse_tree_out_clause.m"
            case (MR_Integer) 0:
#line 821 "parse_tree_out_clause.m"
              {
#line 822 "parse_tree_out_clause.m"
                {
#line 822 "parse_tree_out_clause.m"
                  mercury__io__write_string_3_p_0((MR_String) "shallow");
                }
#line 821 "parse_tree_out_clause.m"
              }
#line 823 "parse_tree_out_clause.m"
              break;
#line 823 "parse_tree_out_clause.m"
          }
#line 827 "parse_tree_out_clause.m"
          {
#line 827 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
#line 818 "parse_tree_out_clause.m"
        }
#line 807 "parse_tree_out_clause.m"
        break;
#line 807 "parse_tree_out_clause.m"
    }
#line 807 "parse_tree_out_clause.m"
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
#line 786 "parse_tree_out_clause.m"
  while (MR_TRUE)
#line 786 "parse_tree_out_clause.m"
    {
#line 786 "parse_tree_out_clause.m"
      /* tailcall optimized into a loop */
#line 786 "parse_tree_out_clause.m"
      {
#line 786 "parse_tree_out_clause.m"
        MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 786 "parse_tree_out_clause.m"
#line 786 "parse_tree_out_clause.m"
        switch (MR_tag((MR_Word) parse_tree__parse_tree_out_clause__TraceExpr_6)) {
#line 786 "parse_tree_out_clause.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 786 "parse_tree_out_clause.m"
          case (MR_Integer) 0:
#line 784 "parse_tree_out_clause.m"
            {
#line 784 "parse_tree_out_clause.m"
              MR_Box parse_tree__parse_tree_out_clause__Base_8 = (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0));
#line 785 "parse_tree_out_clause.m"
              void MR_CALL (* parse_tree__parse_tree_out_clause__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__PrintBase_5, (MR_Integer) 1)));
#line 785 "parse_tree_out_clause.m"
              MR_Box parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_12;

#line 785 "parse_tree_out_clause.m"
              {
#line 785 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__func_0(((MR_Box) parse_tree__parse_tree_out_clause__PrintBase_5), parse_tree__parse_tree_out_clause__Base_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_12);
              }
#line 784 "parse_tree_out_clause.m"
            }
#line 786 "parse_tree_out_clause.m"
            break;
#line 786 "parse_tree_out_clause.m"
          case (MR_Integer) 1:
#line 787 "parse_tree_out_clause.m"
            {
#line 787 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__TraceExprA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));

#line 788 "parse_tree_out_clause.m"
              {
#line 788 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) "not(");
              }
#line 789 "parse_tree_out_clause.m"
              {
#line 789 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0(parse_tree__parse_tree_out_clause__TypeInfo_for_T_36, parse_tree__parse_tree_out_clause__PrintBase_5, parse_tree__parse_tree_out_clause__TraceExprA_9);
              }
#line 790 "parse_tree_out_clause.m"
              {
#line 790 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 787 "parse_tree_out_clause.m"
            }
#line 786 "parse_tree_out_clause.m"
            break;
#line 786 "parse_tree_out_clause.m"
          case (MR_Integer) 2:
#line 786 "parse_tree_out_clause.m"
            {
#line 786 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 2)));
#line 786 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 1)));
#line 786 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__TraceExpr_6, (MR_Integer) 0)));

#line 786 "parse_tree_out_clause.m"
#line 786 "parse_tree_out_clause.m"
              switch (parse_tree__parse_tree_out_clause__V_39_39) {
#line 786 "parse_tree_out_clause.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 786 "parse_tree_out_clause.m"
                case (MR_Integer) 1:
#line 799 "parse_tree_out_clause.m"
                  {
#line 800 "parse_tree_out_clause.m"
                    {
#line 800 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0(parse_tree__parse_tree_out_clause__TypeInfo_for_T_36, parse_tree__parse_tree_out_clause__PrintBase_5, parse_tree__parse_tree_out_clause__V_38_38);
                    }
#line 801 "parse_tree_out_clause.m"
                    {
#line 801 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) " and ");
                    }
#line 802 "parse_tree_out_clause.m"
                    /* direct tailcall eliminated */
#line 802 "parse_tree_out_clause.m"
                    {
#line 802 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__TraceExpr__tmp_copy_6 = parse_tree__parse_tree_out_clause__V_37_37;

#line 802 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__TraceExpr_6 = parse_tree__parse_tree_out_clause__TraceExpr__tmp_copy_6;
#line 802 "parse_tree_out_clause.m"
                    }
#line 802 "parse_tree_out_clause.m"
                    continue;
#line 799 "parse_tree_out_clause.m"
                  }
#line 786 "parse_tree_out_clause.m"
                  break;
#line 786 "parse_tree_out_clause.m"
                case (MR_Integer) 0:
#line 792 "parse_tree_out_clause.m"
                  {
#line 793 "parse_tree_out_clause.m"
                    {
#line 793 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
#line 794 "parse_tree_out_clause.m"
                    {
#line 794 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0(parse_tree__parse_tree_out_clause__TypeInfo_for_T_36, parse_tree__parse_tree_out_clause__PrintBase_5, parse_tree__parse_tree_out_clause__V_38_38);
                    }
#line 795 "parse_tree_out_clause.m"
                    {
#line 795 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) ") or (");
                    }
#line 796 "parse_tree_out_clause.m"
                    {
#line 796 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0(parse_tree__parse_tree_out_clause__TypeInfo_for_T_36, parse_tree__parse_tree_out_clause__PrintBase_5, parse_tree__parse_tree_out_clause__V_37_37);
                    }
#line 797 "parse_tree_out_clause.m"
                    {
#line 797 "parse_tree_out_clause.m"
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
#line 792 "parse_tree_out_clause.m"
                  }
#line 786 "parse_tree_out_clause.m"
                  break;
#line 786 "parse_tree_out_clause.m"
              }
#line 786 "parse_tree_out_clause.m"
            }
#line 786 "parse_tree_out_clause.m"
            break;
#line 786 "parse_tree_out_clause.m"
        }
#line 786 "parse_tree_out_clause.m"
      }
#line 786 "parse_tree_out_clause.m"
      break;
#line 786 "parse_tree_out_clause.m"
    }
#line 38 "parse_tree_out_clause.m"
}

#line 466 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_2(
#line 466 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__closure_arg,
#line 466 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_1,
#line 466 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_2,
#line 466 "parse_tree_out_clause.m"
  MR_Box * parse_tree__parse_tree_out_clause__wrapper_arg_3)
#line 466 "parse_tree_out_clause.m"
{
#line 466 "parse_tree_out_clause.m"
  {
#line 466 "parse_tree_out_clause.m"
    MR_Box parse_tree__parse_tree_out_clause__closure = parse_tree__parse_tree_out_clause__closure_arg;

#line 466 "parse_tree_out_clause.m"
    {
#line 466 "parse_tree_out_clause.m"
      parse_tree__parse_tree_out_clause__mercury_output_catch_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_clause__wrapper_arg_1));
    }
#line 466 "parse_tree_out_clause.m"
  }
#line 466 "parse_tree_out_clause.m"
}

#line 426 "parse_tree_out_clause.m"
static void MR_CALL 
parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_1(
#line 426 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__closure_arg,
#line 426 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_1,
#line 426 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_2,
#line 426 "parse_tree_out_clause.m"
  MR_Box * parse_tree__parse_tree_out_clause__wrapper_arg_3,
#line 426 "parse_tree_out_clause.m"
  MR_Box parse_tree__parse_tree_out_clause__wrapper_arg_4,
#line 426 "parse_tree_out_clause.m"
  MR_Box * parse_tree__parse_tree_out_clause__wrapper_arg_5)
#line 426 "parse_tree_out_clause.m"
{
#line 426 "parse_tree_out_clause.m"
  {
#line 426 "parse_tree_out_clause.m"
    MR_Box parse_tree__parse_tree_out_clause__closure = parse_tree__parse_tree_out_clause__closure_arg;
#line 426 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__conv0_STATE_VARIABLE_NeedComma_14;

#line 426 "parse_tree_out_clause.m"
    {
#line 426 "parse_tree_out_clause.m"
      parse_tree__parse_tree_out_clause__mercury_output_trace_mutable_var_and_comma_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_tree_out_clause__wrapper_arg_1), ((MR_Word) parse_tree__parse_tree_out_clause__wrapper_arg_2), &parse_tree__parse_tree_out_clause__conv0_STATE_VARIABLE_NeedComma_14);
    }
#line 426 "parse_tree_out_clause.m"
    *parse_tree__parse_tree_out_clause__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_tree_out_clause__conv0_STATE_VARIABLE_NeedComma_14));
#line 426 "parse_tree_out_clause.m"
  }
#line 426 "parse_tree_out_clause.m"
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
#line 154 "parse_tree_out_clause.m"
  while (MR_TRUE)
#line 154 "parse_tree_out_clause.m"
    {
#line 154 "parse_tree_out_clause.m"
      /* tailcall optimized into a loop */
#line 154 "parse_tree_out_clause.m"
      {
#line 154 "parse_tree_out_clause.m"
        MR_bool parse_tree__parse_tree_out_clause__succeeded;

#line 154 "parse_tree_out_clause.m"
#line 154 "parse_tree_out_clause.m"
        switch (MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Goal_8)) {
#line 154 "parse_tree_out_clause.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 154 "parse_tree_out_clause.m"
          case (MR_Integer) 0:
#line 537 "parse_tree_out_clause.m"
            {
#line 537 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__TypeCtorInfo_528_528;
#line 537 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__TermA_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
#line 537 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__TermB_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 537 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__Purity_492 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 537 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 0)));

#line 538 "parse_tree_out_clause.m"
              {
#line 538 "parse_tree_out_clause.m"
                parse_tree__prog_out__write_purity_prefix_3_p_0(parse_tree__parse_tree_out_clause__Purity_492);
              }
#line 2593 "parse_tree.parse_tree_out_clause.c"
              parse_tree__parse_tree_out_clause__TypeCtorInfo_528_528 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 539 "parse_tree_out_clause.m"
              {
#line 539 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(parse_tree__parse_tree_out_clause__TypeCtorInfo_528_528, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__TermA_85);
              }
#line 540 "parse_tree_out_clause.m"
              {
#line 540 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) " = ");
              }
#line 541 "parse_tree_out_clause.m"
              {
#line 541 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_term__mercury_output_term_nq_6_p_0(parse_tree__parse_tree_out_clause__TypeCtorInfo_528_528, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out_clause__TermB_86);
              }
#line 537 "parse_tree_out_clause.m"
            }
#line 154 "parse_tree_out_clause.m"
            break;
#line 154 "parse_tree_out_clause.m"
          case (MR_Integer) 1:
#line 533 "parse_tree_out_clause.m"
            {
#line 533 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__Purity_489 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 533 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__Name_490 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
#line 533 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__Terms_491 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 533 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 0)));

#line 534 "parse_tree_out_clause.m"
              {
#line 534 "parse_tree_out_clause.m"
                parse_tree__prog_out__write_purity_prefix_3_p_0(parse_tree__parse_tree_out_clause__Purity_489);
              }
#line 535 "parse_tree_out_clause.m"
              {
#line 535 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__mercury_output_call_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Name_490, parse_tree__parse_tree_out_clause__Terms_491);
              }
#line 533 "parse_tree_out_clause.m"
            }
#line 154 "parse_tree_out_clause.m"
            break;
#line 154 "parse_tree_out_clause.m"
          case (MR_Integer) 2:
#line 505 "parse_tree_out_clause.m"
            {
#line 505 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__SubGoalA_481 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
#line 505 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__SubGoalB_482 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 505 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 0)));

#line 506 "parse_tree_out_clause.m"
              {
#line 506 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__SubGoalA_481);
              }
#line 507 "parse_tree_out_clause.m"
              {
#line 507 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) ",");
              }
#line 508 "parse_tree_out_clause.m"
              {
#line 508 "parse_tree_out_clause.m"
                parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
              }
#line 509 "parse_tree_out_clause.m"
              /* direct tailcall eliminated */
#line 509 "parse_tree_out_clause.m"
              {
#line 509 "parse_tree_out_clause.m"
                MR_Word parse_tree__parse_tree_out_clause__Goal__tmp_copy_8 = parse_tree__parse_tree_out_clause__SubGoalB_482;

#line 509 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__Goal_8 = parse_tree__parse_tree_out_clause__Goal__tmp_copy_8;
#line 509 "parse_tree_out_clause.m"
              }
#line 509 "parse_tree_out_clause.m"
              continue;
#line 505 "parse_tree_out_clause.m"
            }
#line 154 "parse_tree_out_clause.m"
            break;
#line 154 "parse_tree_out_clause.m"
          case (MR_Integer) 3:
#line 154 "parse_tree_out_clause.m"
#line 154 "parse_tree_out_clause.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 0)))) {
#line 154 "parse_tree_out_clause.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 154 "parse_tree_out_clause.m"
              case (MR_Integer) 0:
#line 157 "parse_tree_out_clause.m"
                {
#line 158 "parse_tree_out_clause.m"
                  {
#line 158 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "true");
                  }
#line 157 "parse_tree_out_clause.m"
                }
#line 154 "parse_tree_out_clause.m"
                break;
#line 154 "parse_tree_out_clause.m"
              case (MR_Integer) 1:
#line 480 "parse_tree_out_clause.m"
                {
#line 480 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Cond_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));
#line 480 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_474;
#line 480 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Vars_475 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 480 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__StateVars_476 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 480 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Then_477 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 5)));
#line 480 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Else_478 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 6)));
#line 480 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 481 "parse_tree_out_clause.m"
                  {
#line 481 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "(if");
                  }
#line 482 "parse_tree_out_clause.m"
                  {
#line 482 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_some_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Vars_475, parse_tree__parse_tree_out_clause__StateVars_476);
                  }
#line 483 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__Indent1_474 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 484 "parse_tree_out_clause.m"
                  {
#line 484 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_474);
                  }
#line 485 "parse_tree_out_clause.m"
                  {
#line 485 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_474, parse_tree__parse_tree_out_clause__Cond_75);
                  }
#line 486 "parse_tree_out_clause.m"
                  {
#line 486 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 487 "parse_tree_out_clause.m"
                  {
#line 487 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "then");
                  }
#line 488 "parse_tree_out_clause.m"
                  {
#line 488 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_474);
                  }
#line 489 "parse_tree_out_clause.m"
                  {
#line 489 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_474, parse_tree__parse_tree_out_clause__Then_477);
                  }
#line 490 "parse_tree_out_clause.m"
                  {
#line 490 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 491 "parse_tree_out_clause.m"
                  {
#line 491 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "else");
                  }
#line 492 "parse_tree_out_clause.m"
                  {
#line 492 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_474);
                  }
#line 493 "parse_tree_out_clause.m"
                  {
#line 493 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_474, parse_tree__parse_tree_out_clause__Else_478);
                  }
#line 494 "parse_tree_out_clause.m"
                  {
#line 494 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 495 "parse_tree_out_clause.m"
                  {
#line 495 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 480 "parse_tree_out_clause.m"
                }
#line 154 "parse_tree_out_clause.m"
                break;
#line 154 "parse_tree_out_clause.m"
              case (MR_Integer) 2:
#line 520 "parse_tree_out_clause.m"
                {
#line 520 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalA_486 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 520 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalB_487 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 520 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_488;
#line 520 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 521 "parse_tree_out_clause.m"
                  {
#line 521 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
#line 522 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__Indent1_488 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 523 "parse_tree_out_clause.m"
                  {
#line 523 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_488);
                  }
#line 524 "parse_tree_out_clause.m"
                  {
#line 524 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_488, parse_tree__parse_tree_out_clause__SubGoalA_486);
                  }
#line 525 "parse_tree_out_clause.m"
                  {
#line 525 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_disj_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__SubGoalB_487);
                  }
#line 526 "parse_tree_out_clause.m"
                  {
#line 526 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 527 "parse_tree_out_clause.m"
                  {
#line 527 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 520 "parse_tree_out_clause.m"
                }
#line 154 "parse_tree_out_clause.m"
                break;
#line 154 "parse_tree_out_clause.m"
              case (MR_Integer) 3:
#line 497 "parse_tree_out_clause.m"
                {
#line 497 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_479;
#line 497 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_480 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 497 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 498 "parse_tree_out_clause.m"
                  {
#line 498 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "\\+ (");
                  }
#line 499 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__Indent1_479 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 500 "parse_tree_out_clause.m"
                  {
#line 500 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_479);
                  }
#line 501 "parse_tree_out_clause.m"
                  {
#line 501 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_479, parse_tree__parse_tree_out_clause__SubGoal_480);
                  }
#line 502 "parse_tree_out_clause.m"
                  {
#line 502 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 503 "parse_tree_out_clause.m"
                  {
#line 503 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 497 "parse_tree_out_clause.m"
                }
#line 154 "parse_tree_out_clause.m"
                break;
#line 154 "parse_tree_out_clause.m"
              case (MR_Integer) 4:
#line 154 "parse_tree_out_clause.m"
                {
#line 155 "parse_tree_out_clause.m"
                  {
#line 155 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "fail");
                  }
#line 154 "parse_tree_out_clause.m"
                }
#line 154 "parse_tree_out_clause.m"
                break;
#line 154 "parse_tree_out_clause.m"
              case (MR_Integer) 5:
#line 511 "parse_tree_out_clause.m"
                {
#line 511 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalA_483 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 511 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalB_484 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 511 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_485;
#line 511 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 512 "parse_tree_out_clause.m"
                  {
#line 512 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
#line 513 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__Indent1_485 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 514 "parse_tree_out_clause.m"
                  {
#line 514 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_485);
                  }
#line 515 "parse_tree_out_clause.m"
                  {
#line 515 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_485, parse_tree__parse_tree_out_clause__SubGoalA_483);
                  }
#line 516 "parse_tree_out_clause.m"
                  {
#line 516 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_par_conj_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__SubGoalB_484);
                  }
#line 517 "parse_tree_out_clause.m"
                  {
#line 517 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 518 "parse_tree_out_clause.m"
                  {
#line 518 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 511 "parse_tree_out_clause.m"
                }
#line 154 "parse_tree_out_clause.m"
                break;
#line 154 "parse_tree_out_clause.m"
              case (MR_Integer) 6:
#line 184 "parse_tree_out_clause.m"
                {
#line 184 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 184 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 184 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 188 "parse_tree_out_clause.m"
                  if ((parse_tree__parse_tree_out_clause__Vars_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 187 "parse_tree_out_clause.m"
                    {
#line 187 "parse_tree_out_clause.m"
                      /* direct tailcall eliminated */
#line 187 "parse_tree_out_clause.m"
                      {
#line 187 "parse_tree_out_clause.m"
                        MR_Word parse_tree__parse_tree_out_clause__Goal__tmp_copy_8 = parse_tree__parse_tree_out_clause__SubGoal_19;

#line 187 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_clause__Goal_8 = parse_tree__parse_tree_out_clause__Goal__tmp_copy_8;
#line 187 "parse_tree_out_clause.m"
                      }
#line 187 "parse_tree_out_clause.m"
                      continue;
#line 187 "parse_tree_out_clause.m"
                    }
#line 188 "parse_tree_out_clause.m"
                  else
#line 189 "parse_tree_out_clause.m"
                    {
#line 189 "parse_tree_out_clause.m"
                      MR_Integer parse_tree__parse_tree_out_clause__Indent1_426;

#line 190 "parse_tree_out_clause.m"
                      {
#line 190 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) "some [");
                      }
#line 191 "parse_tree_out_clause.m"
                      {
#line 191 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__Vars_18);
                      }
#line 192 "parse_tree_out_clause.m"
                      {
#line 192 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) "] (");
                      }
#line 193 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__Indent1_426 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 194 "parse_tree_out_clause.m"
                      {
#line 194 "parse_tree_out_clause.m"
                        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_426);
                      }
#line 195 "parse_tree_out_clause.m"
                      {
#line 195 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_426, parse_tree__parse_tree_out_clause__SubGoal_19);
                      }
#line 196 "parse_tree_out_clause.m"
                      {
#line 196 "parse_tree_out_clause.m"
                        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                      }
#line 197 "parse_tree_out_clause.m"
                      {
#line 197 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
#line 189 "parse_tree_out_clause.m"
                    }
#line 184 "parse_tree_out_clause.m"
                }
#line 154 "parse_tree_out_clause.m"
                break;
#line 154 "parse_tree_out_clause.m"
              case (MR_Integer) 7:
#line 216 "parse_tree_out_clause.m"
                {
#line 216 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Vars_437 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 216 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_438 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 216 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 220 "parse_tree_out_clause.m"
                  if ((parse_tree__parse_tree_out_clause__Vars_437 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 219 "parse_tree_out_clause.m"
                    {
#line 219 "parse_tree_out_clause.m"
                      /* direct tailcall eliminated */
#line 219 "parse_tree_out_clause.m"
                      {
#line 219 "parse_tree_out_clause.m"
                        MR_Word parse_tree__parse_tree_out_clause__Goal__tmp_copy_8 = parse_tree__parse_tree_out_clause__SubGoal_438;

#line 219 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_clause__Goal_8 = parse_tree__parse_tree_out_clause__Goal__tmp_copy_8;
#line 219 "parse_tree_out_clause.m"
                      }
#line 219 "parse_tree_out_clause.m"
                      continue;
#line 219 "parse_tree_out_clause.m"
                    }
#line 220 "parse_tree_out_clause.m"
                  else
#line 221 "parse_tree_out_clause.m"
                    {
#line 221 "parse_tree_out_clause.m"
                      MR_Integer parse_tree__parse_tree_out_clause__Indent1_434;

#line 222 "parse_tree_out_clause.m"
                      {
#line 222 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) "all [");
                      }
#line 223 "parse_tree_out_clause.m"
                      {
#line 223 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__Vars_437);
                      }
#line 224 "parse_tree_out_clause.m"
                      {
#line 224 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) "] (");
                      }
#line 225 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__Indent1_434 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 226 "parse_tree_out_clause.m"
                      {
#line 226 "parse_tree_out_clause.m"
                        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_434);
                      }
#line 227 "parse_tree_out_clause.m"
                      {
#line 227 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_434, parse_tree__parse_tree_out_clause__SubGoal_438);
                      }
#line 228 "parse_tree_out_clause.m"
                      {
#line 228 "parse_tree_out_clause.m"
                        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                      }
#line 229 "parse_tree_out_clause.m"
                      {
#line 229 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
#line 221 "parse_tree_out_clause.m"
                    }
#line 216 "parse_tree_out_clause.m"
                }
#line 154 "parse_tree_out_clause.m"
                break;
#line 154 "parse_tree_out_clause.m"
              case (MR_Integer) 8:
#line 200 "parse_tree_out_clause.m"
                {
#line 200 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Vars_432 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 200 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_433 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 200 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 204 "parse_tree_out_clause.m"
                  if ((parse_tree__parse_tree_out_clause__Vars_432 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 203 "parse_tree_out_clause.m"
                    {
#line 203 "parse_tree_out_clause.m"
                      /* direct tailcall eliminated */
#line 203 "parse_tree_out_clause.m"
                      {
#line 203 "parse_tree_out_clause.m"
                        MR_Word parse_tree__parse_tree_out_clause__Goal__tmp_copy_8 = parse_tree__parse_tree_out_clause__SubGoal_433;

#line 203 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_clause__Goal_8 = parse_tree__parse_tree_out_clause__Goal__tmp_copy_8;
#line 203 "parse_tree_out_clause.m"
                      }
#line 203 "parse_tree_out_clause.m"
                      continue;
#line 203 "parse_tree_out_clause.m"
                    }
#line 204 "parse_tree_out_clause.m"
                  else
#line 205 "parse_tree_out_clause.m"
                    {
#line 205 "parse_tree_out_clause.m"
                      MR_Integer parse_tree__parse_tree_out_clause__Indent1_429;

#line 206 "parse_tree_out_clause.m"
                      {
#line 206 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) "some [");
                      }
#line 207 "parse_tree_out_clause.m"
                      {
#line 207 "parse_tree_out_clause.m"
                        parse_tree__mercury_to_mercury__mercury_output_state_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__Vars_432);
                      }
#line 208 "parse_tree_out_clause.m"
                      {
#line 208 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) "] (");
                      }
#line 209 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__Indent1_429 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 210 "parse_tree_out_clause.m"
                      {
#line 210 "parse_tree_out_clause.m"
                        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_429);
                      }
#line 211 "parse_tree_out_clause.m"
                      {
#line 211 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_429, parse_tree__parse_tree_out_clause__SubGoal_433);
                      }
#line 212 "parse_tree_out_clause.m"
                      {
#line 212 "parse_tree_out_clause.m"
                        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                      }
#line 213 "parse_tree_out_clause.m"
                      {
#line 213 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
#line 205 "parse_tree_out_clause.m"
                    }
#line 200 "parse_tree_out_clause.m"
                }
#line 154 "parse_tree_out_clause.m"
                break;
#line 154 "parse_tree_out_clause.m"
              case (MR_Integer) 9:
#line 232 "parse_tree_out_clause.m"
                {
#line 232 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Vars_442 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 232 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_443 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 232 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 236 "parse_tree_out_clause.m"
                  if ((parse_tree__parse_tree_out_clause__Vars_442 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 235 "parse_tree_out_clause.m"
                    {
#line 235 "parse_tree_out_clause.m"
                      /* direct tailcall eliminated */
#line 235 "parse_tree_out_clause.m"
                      {
#line 235 "parse_tree_out_clause.m"
                        MR_Word parse_tree__parse_tree_out_clause__Goal__tmp_copy_8 = parse_tree__parse_tree_out_clause__SubGoal_443;

#line 235 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_clause__Goal_8 = parse_tree__parse_tree_out_clause__Goal__tmp_copy_8;
#line 235 "parse_tree_out_clause.m"
                      }
#line 235 "parse_tree_out_clause.m"
                      continue;
#line 235 "parse_tree_out_clause.m"
                    }
#line 236 "parse_tree_out_clause.m"
                  else
#line 237 "parse_tree_out_clause.m"
                    {
#line 237 "parse_tree_out_clause.m"
                      MR_Integer parse_tree__parse_tree_out_clause__Indent1_439;

#line 238 "parse_tree_out_clause.m"
                      {
#line 238 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) "all [");
                      }
#line 239 "parse_tree_out_clause.m"
                      {
#line 239 "parse_tree_out_clause.m"
                        parse_tree__mercury_to_mercury__mercury_output_state_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__Vars_442);
                      }
#line 240 "parse_tree_out_clause.m"
                      {
#line 240 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) "] (");
                      }
#line 241 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__Indent1_439 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 242 "parse_tree_out_clause.m"
                      {
#line 242 "parse_tree_out_clause.m"
                        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_439);
                      }
#line 243 "parse_tree_out_clause.m"
                      {
#line 243 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_439, parse_tree__parse_tree_out_clause__SubGoal_443);
                      }
#line 244 "parse_tree_out_clause.m"
                      {
#line 244 "parse_tree_out_clause.m"
                        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                      }
#line 245 "parse_tree_out_clause.m"
                      {
#line 245 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
#line 237 "parse_tree_out_clause.m"
                    }
#line 232 "parse_tree_out_clause.m"
                }
#line 154 "parse_tree_out_clause.m"
                break;
#line 154 "parse_tree_out_clause.m"
              case (MR_Integer) 10:
#line 265 "parse_tree_out_clause.m"
                {
#line 265 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Purity_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 265 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_456;
#line 265 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_457 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 265 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 269 "parse_tree_out_clause.m"
#line 269 "parse_tree_out_clause.m"
                  switch (parse_tree__parse_tree_out_clause__Purity_38) {
#line 269 "parse_tree_out_clause.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 269 "parse_tree_out_clause.m"
                    case (MR_Integer) 2:
#line 273 "parse_tree_out_clause.m"
                      {
#line 274 "parse_tree_out_clause.m"
                        {
#line 274 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "promise_impure (");
                        }
#line 273 "parse_tree_out_clause.m"
                      }
#line 269 "parse_tree_out_clause.m"
                      break;
#line 269 "parse_tree_out_clause.m"
                    case (MR_Integer) 0:
#line 267 "parse_tree_out_clause.m"
                      {
#line 268 "parse_tree_out_clause.m"
                        {
#line 268 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "promise_pure (");
                        }
#line 267 "parse_tree_out_clause.m"
                      }
#line 269 "parse_tree_out_clause.m"
                      break;
#line 269 "parse_tree_out_clause.m"
                    case (MR_Integer) 1:
#line 270 "parse_tree_out_clause.m"
                      {
#line 271 "parse_tree_out_clause.m"
                        {
#line 271 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "promise_semipure (");
                        }
#line 270 "parse_tree_out_clause.m"
                      }
#line 269 "parse_tree_out_clause.m"
                      break;
#line 269 "parse_tree_out_clause.m"
                  }
#line 276 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__Indent1_456 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 277 "parse_tree_out_clause.m"
                  {
#line 277 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_456);
                  }
#line 278 "parse_tree_out_clause.m"
                  {
#line 278 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_456, parse_tree__parse_tree_out_clause__SubGoal_457);
                  }
#line 279 "parse_tree_out_clause.m"
                  {
#line 279 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 280 "parse_tree_out_clause.m"
                  {
#line 280 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 265 "parse_tree_out_clause.m"
                }
#line 154 "parse_tree_out_clause.m"
                break;
#line 154 "parse_tree_out_clause.m"
              case (MR_Integer) 11:
#line 249 "parse_tree_out_clause.m"
                {
#line 249 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__StateVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 249 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__DotSVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));
#line 249 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__ColonSVars_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 5)));
#line 249 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Vars_444 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 249 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_445 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 6)));
#line 248 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 250 "parse_tree_out_clause.m"
                  {
#line 250 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_promise_eqv_solutions_goal_10_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__Vars_444, parse_tree__parse_tree_out_clause__StateVars_32, parse_tree__parse_tree_out_clause__DotSVars_33, parse_tree__parse_tree_out_clause__ColonSVars_34, parse_tree__parse_tree_out_clause__SubGoal_445, (MR_String) "promise_equivalent_solutions");
                  }
#line 249 "parse_tree_out_clause.m"
                }
#line 154 "parse_tree_out_clause.m"
                break;
#line 154 "parse_tree_out_clause.m"
              case (MR_Integer) 12:
#line 255 "parse_tree_out_clause.m"
                {
#line 255 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Vars_446 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 255 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_447 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 6)));
#line 255 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__StateVars_448 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 255 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__DotSVars_449 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));
#line 255 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__ColonSVars_450 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 5)));
#line 254 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 256 "parse_tree_out_clause.m"
                  {
#line 256 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_promise_eqv_solutions_goal_10_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__Vars_446, parse_tree__parse_tree_out_clause__StateVars_448, parse_tree__parse_tree_out_clause__DotSVars_449, parse_tree__parse_tree_out_clause__ColonSVars_450, parse_tree__parse_tree_out_clause__SubGoal_447, (MR_String) "promise_equivalent_solution_sets");
                  }
#line 255 "parse_tree_out_clause.m"
                }
#line 154 "parse_tree_out_clause.m"
                break;
#line 154 "parse_tree_out_clause.m"
              case (MR_Integer) 13:
#line 261 "parse_tree_out_clause.m"
                {
#line 261 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Vars_451 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 261 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_452 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 6)));
#line 261 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__StateVars_453 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 261 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__DotSVars_454 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));
#line 261 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__ColonSVars_455 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 5)));
#line 260 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 262 "parse_tree_out_clause.m"
                  {
#line 262 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_promise_eqv_solutions_goal_10_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent_7, parse_tree__parse_tree_out_clause__Vars_451, parse_tree__parse_tree_out_clause__StateVars_453, parse_tree__parse_tree_out_clause__DotSVars_454, parse_tree__parse_tree_out_clause__ColonSVars_455, parse_tree__parse_tree_out_clause__SubGoal_452, (MR_String) "arbitrary");
                  }
#line 261 "parse_tree_out_clause.m"
                }
#line 154 "parse_tree_out_clause.m"
                break;
#line 154 "parse_tree_out_clause.m"
              case (MR_Integer) 14:
#line 282 "parse_tree_out_clause.m"
                {
#line 282 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Detism_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 282 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_458;
#line 282 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_459 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 282 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 286 "parse_tree_out_clause.m"
#line 286 "parse_tree_out_clause.m"
                  switch (parse_tree__parse_tree_out_clause__Detism_40) {
#line 286 "parse_tree_out_clause.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 286 "parse_tree_out_clause.m"
                    case (MR_Integer) 4:
#line 296 "parse_tree_out_clause.m"
                      {
#line 297 "parse_tree_out_clause.m"
                        {
#line 297 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_cc_multi");
                        }
#line 296 "parse_tree_out_clause.m"
                      }
#line 286 "parse_tree_out_clause.m"
                      break;
#line 286 "parse_tree_out_clause.m"
                    case (MR_Integer) 5:
#line 299 "parse_tree_out_clause.m"
                      {
#line 300 "parse_tree_out_clause.m"
                        {
#line 300 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_cc_nondet");
                        }
#line 299 "parse_tree_out_clause.m"
                      }
#line 286 "parse_tree_out_clause.m"
                      break;
#line 286 "parse_tree_out_clause.m"
                    case (MR_Integer) 0:
#line 284 "parse_tree_out_clause.m"
                      {
#line 285 "parse_tree_out_clause.m"
                        {
#line 285 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_det");
                        }
#line 284 "parse_tree_out_clause.m"
                      }
#line 286 "parse_tree_out_clause.m"
                      break;
#line 286 "parse_tree_out_clause.m"
                    case (MR_Integer) 6:
#line 302 "parse_tree_out_clause.m"
                      {
#line 303 "parse_tree_out_clause.m"
                        {
#line 303 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_erroneous");
                        }
#line 302 "parse_tree_out_clause.m"
                      }
#line 286 "parse_tree_out_clause.m"
                      break;
#line 286 "parse_tree_out_clause.m"
                    case (MR_Integer) 7:
#line 305 "parse_tree_out_clause.m"
                      {
#line 306 "parse_tree_out_clause.m"
                        {
#line 306 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_failure");
                        }
#line 305 "parse_tree_out_clause.m"
                      }
#line 286 "parse_tree_out_clause.m"
                      break;
#line 286 "parse_tree_out_clause.m"
                    case (MR_Integer) 2:
#line 290 "parse_tree_out_clause.m"
                      {
#line 291 "parse_tree_out_clause.m"
                        {
#line 291 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_multi");
                        }
#line 290 "parse_tree_out_clause.m"
                      }
#line 286 "parse_tree_out_clause.m"
                      break;
#line 286 "parse_tree_out_clause.m"
                    case (MR_Integer) 3:
#line 293 "parse_tree_out_clause.m"
                      {
#line 294 "parse_tree_out_clause.m"
                        {
#line 294 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_nondet");
                        }
#line 293 "parse_tree_out_clause.m"
                      }
#line 286 "parse_tree_out_clause.m"
                      break;
#line 286 "parse_tree_out_clause.m"
                    case (MR_Integer) 1:
#line 287 "parse_tree_out_clause.m"
                      {
#line 288 "parse_tree_out_clause.m"
                        {
#line 288 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_semidet");
                        }
#line 287 "parse_tree_out_clause.m"
                      }
#line 286 "parse_tree_out_clause.m"
                      break;
#line 286 "parse_tree_out_clause.m"
                  }
#line 308 "parse_tree_out_clause.m"
                  {
#line 308 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) " (");
                  }
#line 309 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__Indent1_458 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 310 "parse_tree_out_clause.m"
                  {
#line 310 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_458);
                  }
#line 311 "parse_tree_out_clause.m"
                  {
#line 311 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_458, parse_tree__parse_tree_out_clause__SubGoal_459);
                  }
#line 312 "parse_tree_out_clause.m"
                  {
#line 312 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 313 "parse_tree_out_clause.m"
                  {
#line 313 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 282 "parse_tree_out_clause.m"
                }
#line 154 "parse_tree_out_clause.m"
                break;
#line 154 "parse_tree_out_clause.m"
              case (MR_Integer) 15:
#line 315 "parse_tree_out_clause.m"
                {
#line 315 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 315 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_460;
#line 315 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_461 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 315 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 316 "parse_tree_out_clause.m"
                  {
#line 316 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "require_complete_switch [");
                  }
#line 317 "parse_tree_out_clause.m"
                  {
#line 317 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__Var_42);
                  }
#line 318 "parse_tree_out_clause.m"
                  {
#line 318 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "] (");
                  }
#line 319 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__Indent1_460 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 320 "parse_tree_out_clause.m"
                  {
#line 320 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_460);
                  }
#line 321 "parse_tree_out_clause.m"
                  {
#line 321 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_460, parse_tree__parse_tree_out_clause__SubGoal_461);
                  }
#line 322 "parse_tree_out_clause.m"
                  {
#line 322 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 323 "parse_tree_out_clause.m"
                  {
#line 323 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 315 "parse_tree_out_clause.m"
                }
#line 154 "parse_tree_out_clause.m"
                break;
#line 154 "parse_tree_out_clause.m"
              case (MR_Integer) 16:
#line 325 "parse_tree_out_clause.m"
                {
#line 325 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_462;
#line 325 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_463 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));
#line 325 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Detism_464 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 325 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Var_465 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 325 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 329 "parse_tree_out_clause.m"
#line 329 "parse_tree_out_clause.m"
                  switch (parse_tree__parse_tree_out_clause__Detism_464) {
#line 329 "parse_tree_out_clause.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 329 "parse_tree_out_clause.m"
                    case (MR_Integer) 4:
#line 339 "parse_tree_out_clause.m"
                      {
#line 340 "parse_tree_out_clause.m"
                        {
#line 340 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_cc_multi");
                        }
#line 339 "parse_tree_out_clause.m"
                      }
#line 329 "parse_tree_out_clause.m"
                      break;
#line 329 "parse_tree_out_clause.m"
                    case (MR_Integer) 5:
#line 342 "parse_tree_out_clause.m"
                      {
#line 343 "parse_tree_out_clause.m"
                        {
#line 343 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_cc_nondet");
                        }
#line 342 "parse_tree_out_clause.m"
                      }
#line 329 "parse_tree_out_clause.m"
                      break;
#line 329 "parse_tree_out_clause.m"
                    case (MR_Integer) 0:
#line 327 "parse_tree_out_clause.m"
                      {
#line 328 "parse_tree_out_clause.m"
                        {
#line 328 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_det");
                        }
#line 327 "parse_tree_out_clause.m"
                      }
#line 329 "parse_tree_out_clause.m"
                      break;
#line 329 "parse_tree_out_clause.m"
                    case (MR_Integer) 6:
#line 345 "parse_tree_out_clause.m"
                      {
#line 346 "parse_tree_out_clause.m"
                        {
#line 346 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_erroneous");
                        }
#line 345 "parse_tree_out_clause.m"
                      }
#line 329 "parse_tree_out_clause.m"
                      break;
#line 329 "parse_tree_out_clause.m"
                    case (MR_Integer) 7:
#line 348 "parse_tree_out_clause.m"
                      {
#line 349 "parse_tree_out_clause.m"
                        {
#line 349 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_failure");
                        }
#line 348 "parse_tree_out_clause.m"
                      }
#line 329 "parse_tree_out_clause.m"
                      break;
#line 329 "parse_tree_out_clause.m"
                    case (MR_Integer) 2:
#line 333 "parse_tree_out_clause.m"
                      {
#line 334 "parse_tree_out_clause.m"
                        {
#line 334 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_multi");
                        }
#line 333 "parse_tree_out_clause.m"
                      }
#line 329 "parse_tree_out_clause.m"
                      break;
#line 329 "parse_tree_out_clause.m"
                    case (MR_Integer) 3:
#line 336 "parse_tree_out_clause.m"
                      {
#line 337 "parse_tree_out_clause.m"
                        {
#line 337 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_nondet");
                        }
#line 336 "parse_tree_out_clause.m"
                      }
#line 329 "parse_tree_out_clause.m"
                      break;
#line 329 "parse_tree_out_clause.m"
                    case (MR_Integer) 1:
#line 330 "parse_tree_out_clause.m"
                      {
#line 331 "parse_tree_out_clause.m"
                        {
#line 331 "parse_tree_out_clause.m"
                          mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_semidet");
                        }
#line 330 "parse_tree_out_clause.m"
                      }
#line 329 "parse_tree_out_clause.m"
                      break;
#line 329 "parse_tree_out_clause.m"
                  }
#line 351 "parse_tree_out_clause.m"
                  {
#line 351 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) " [");
                  }
#line 352 "parse_tree_out_clause.m"
                  {
#line 352 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__Var_465);
                  }
#line 353 "parse_tree_out_clause.m"
                  {
#line 353 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "] (");
                  }
#line 354 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__Indent1_462 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 355 "parse_tree_out_clause.m"
                  {
#line 355 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_462);
                  }
#line 356 "parse_tree_out_clause.m"
                  {
#line 356 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_462, parse_tree__parse_tree_out_clause__SubGoal_463);
                  }
#line 357 "parse_tree_out_clause.m"
                  {
#line 357 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 358 "parse_tree_out_clause.m"
                  {
#line 358 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 325 "parse_tree_out_clause.m"
                }
#line 154 "parse_tree_out_clause.m"
                break;
#line 154 "parse_tree_out_clause.m"
              case (MR_Integer) 17:
#line 393 "parse_tree_out_clause.m"
                {
#line 393 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__MaybeCompileTime_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 393 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__MaybeRunTime_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 393 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__MaybeIO_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));
#line 393 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__MutableVars_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 5)));
#line 393 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_199_199;
#line 393 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_203_203;
#line 393 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_211_211;
#line 393 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_212_212;
#line 393 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__V_217_217;
#line 393 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__V_220_220;
#line 393 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_467 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 6)));
#line 392 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
#line 425 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_65_65;
#line 425 "parse_tree_out_clause.m"
                  MR_Box parse_tree__parse_tree_out_clause__conv2_V_65_65;
#line 425 "parse_tree_out_clause.m"
                  MR_Box parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_213_213;

#line 394 "parse_tree_out_clause.m"
                  {
#line 394 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 395 "parse_tree_out_clause.m"
                  {
#line 395 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "trace [");
                  }
#line 403 "parse_tree_out_clause.m"
                  if ((parse_tree__parse_tree_out_clause__MaybeCompileTime_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 404 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_199_199 = (MR_Integer) 0;
#line 403 "parse_tree_out_clause.m"
                  else
#line 399 "parse_tree_out_clause.m"
                    {
#line 399 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__CompileTime_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__MaybeCompileTime_57, (MR_Integer) 0)));

#line 400 "parse_tree_out_clause.m"
                      {
#line 400 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho2_4_p_0(parse_tree__parse_tree_out_clause__CompileTime_62);
                      }
#line 402 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_199_199 = (MR_Integer) 1;
#line 399 "parse_tree_out_clause.m"
                    }
#line 412 "parse_tree_out_clause.m"
                  if ((parse_tree__parse_tree_out_clause__MaybeRunTime_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 413 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_203_203 = parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_199_199;
#line 412 "parse_tree_out_clause.m"
                  else
#line 407 "parse_tree_out_clause.m"
                    {
#line 407 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__RunTime_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__MaybeRunTime_58, (MR_Integer) 0)));

#line 408 "parse_tree_out_clause.m"
                      {
#line 408 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_3_p_0(parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_199_199);
                      }
#line 409 "parse_tree_out_clause.m"
                      {
#line 409 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_clause__mercury_output_trace_expr__ho1_4_p_0(parse_tree__parse_tree_out_clause__RunTime_63);
                      }
#line 411 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_203_203 = (MR_Integer) 1;
#line 407 "parse_tree_out_clause.m"
                    }
#line 422 "parse_tree_out_clause.m"
                  if ((parse_tree__parse_tree_out_clause__MaybeIO_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 423 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_211_211 = parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_203_203;
#line 422 "parse_tree_out_clause.m"
                  else
#line 416 "parse_tree_out_clause.m"
                    {
#line 416 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__IOStateVar_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__MaybeIO_59, (MR_Integer) 0)));

#line 417 "parse_tree_out_clause.m"
                      {
#line 417 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_clause__mercury_output_comma_if_needed_3_p_0(parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_203_203);
                      }
#line 418 "parse_tree_out_clause.m"
                      {
#line 418 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) "io(!");
                      }
#line 419 "parse_tree_out_clause.m"
                      {
#line 419 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__IOStateVar_64);
                      }
#line 420 "parse_tree_out_clause.m"
                      {
#line 420 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
#line 421 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_211_211 = (MR_Integer) 1;
#line 416 "parse_tree_out_clause.m"
                    }
#line 426 "parse_tree_out_clause.m"
                  {
#line 426 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__V_212_212 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 426 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_212_212, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_2[0]));
#line 426 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_212_212, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_1));
#line 426 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_212_212, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 426 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_212_212, 3) = ((MR_Box) (parse_tree__parse_tree_out_clause__VarSet_6));
#line 426 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_212_212, 4) = ((MR_Box) ((MR_Integer) 0));
#line 426 "parse_tree_out_clause.m"
                  }
#line 425 "parse_tree_out_clause.m"
                  {
#line 425 "parse_tree_out_clause.m"
                    mercury__list__foldl2_6_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__parse_tree_out_clause__V_212_212, parse_tree__parse_tree_out_clause__MutableVars_60, ((MR_Box) (parse_tree__parse_tree_out_clause__STATE_VARIABLE_NeedComma_211_211)), &parse_tree__parse_tree_out_clause__conv2_V_65_65, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_213_213);
                  }
#line 425 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__V_65_65 = ((MR_Word) parse_tree__parse_tree_out_clause__conv2_V_65_65);
#line 430 "parse_tree_out_clause.m"
                  {
#line 430 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "]");
                  }
#line 431 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__V_217_217 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 431 "parse_tree_out_clause.m"
                  {
#line 431 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__V_217_217);
                  }
#line 432 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__V_220_220 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 432 "parse_tree_out_clause.m"
                  {
#line 432 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__V_220_220, parse_tree__parse_tree_out_clause__SubGoal_467);
                  }
#line 433 "parse_tree_out_clause.m"
                  {
#line 433 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 434 "parse_tree_out_clause.m"
                  {
#line 434 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 393 "parse_tree_out_clause.m"
                }
#line 154 "parse_tree_out_clause.m"
                break;
#line 154 "parse_tree_out_clause.m"
              case (MR_Integer) 18:
#line 360 "parse_tree_out_clause.m"
                {
#line 360 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Outer_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 360 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Inner_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 360 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__MainGoal_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 5)));
#line 360 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__OrElseGoals_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 6)));
#line 360 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_254_254;
#line 360 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_466;
#line 360 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
#line 360 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));

#line 361 "parse_tree_out_clause.m"
                  {
#line 361 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "atomic [outer(");
                  }
#line 366 "parse_tree_out_clause.m"
                  if (((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Outer_45)) == (MR_mktag((MR_Integer) 0))))
#line 363 "parse_tree_out_clause.m"
                    {
#line 363 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__OVar_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__Outer_45, (MR_Integer) 0)));

#line 364 "parse_tree_out_clause.m"
                      {
#line 364 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) "!");
                      }
#line 365 "parse_tree_out_clause.m"
                      {
#line 365 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__OVar_50);
                      }
#line 363 "parse_tree_out_clause.m"
                    }
#line 366 "parse_tree_out_clause.m"
                  else
#line 367 "parse_tree_out_clause.m"
                    {
#line 367 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__TypeCtorInfo_500_500 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 367 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__OuterDI_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Outer_45, (MR_Integer) 0)));
#line 367 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__OuterUO_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Outer_45, (MR_Integer) 1)));

#line 368 "parse_tree_out_clause.m"
                      {
#line 368 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(parse_tree__parse_tree_out_clause__TypeCtorInfo_500_500, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__OuterDI_51);
                      }
#line 369 "parse_tree_out_clause.m"
                      {
#line 369 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                      }
#line 370 "parse_tree_out_clause.m"
                      {
#line 370 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(parse_tree__parse_tree_out_clause__TypeCtorInfo_500_500, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__OuterUO_52);
                      }
#line 367 "parse_tree_out_clause.m"
                    }
#line 372 "parse_tree_out_clause.m"
                  {
#line 372 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "), inner(");
                  }
#line 377 "parse_tree_out_clause.m"
                  if (((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__Inner_46)) == (MR_mktag((MR_Integer) 0))))
#line 374 "parse_tree_out_clause.m"
                    {
#line 374 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__IVar_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__Inner_46, (MR_Integer) 0)));

#line 375 "parse_tree_out_clause.m"
                      {
#line 375 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) "!");
                      }
#line 376 "parse_tree_out_clause.m"
                      {
#line 376 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__IVar_53);
                      }
#line 374 "parse_tree_out_clause.m"
                    }
#line 377 "parse_tree_out_clause.m"
                  else
#line 378 "parse_tree_out_clause.m"
                    {
#line 378 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__TypeCtorInfo_502_502 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 378 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__InnerDI_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Inner_46, (MR_Integer) 0)));
#line 378 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__InnerUO_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__Inner_46, (MR_Integer) 1)));

#line 379 "parse_tree_out_clause.m"
                      {
#line 379 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(parse_tree__parse_tree_out_clause__TypeCtorInfo_502_502, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__InnerDI_54);
                      }
#line 380 "parse_tree_out_clause.m"
                      {
#line 380 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                      }
#line 381 "parse_tree_out_clause.m"
                      {
#line 381 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(parse_tree__parse_tree_out_clause__TypeCtorInfo_502_502, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__InnerUO_55);
                      }
#line 378 "parse_tree_out_clause.m"
                    }
#line 383 "parse_tree_out_clause.m"
                  {
#line 383 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")] (");
                  }
#line 385 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__Indent1_466 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 386 "parse_tree_out_clause.m"
                  {
#line 386 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_466);
                  }
#line 387 "parse_tree_out_clause.m"
                  {
#line 387 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__V_254_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__V_254_254, 0) = ((MR_Box) (parse_tree__parse_tree_out_clause__MainGoal_48));
#line 387 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__V_254_254, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__OrElseGoals_49));
#line 387 "parse_tree_out_clause.m"
                  }
#line 387 "parse_tree_out_clause.m"
                  {
#line 387 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_orelse_goals_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_466, parse_tree__parse_tree_out_clause__V_254_254);
                  }
#line 389 "parse_tree_out_clause.m"
                  {
#line 389 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 390 "parse_tree_out_clause.m"
                  {
#line 390 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 360 "parse_tree_out_clause.m"
                }
#line 154 "parse_tree_out_clause.m"
                break;
#line 154 "parse_tree_out_clause.m"
              case (MR_Integer) 19:
#line 437 "parse_tree_out_clause.m"
                {
#line 437 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Then_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 4)));
#line 437 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__MaybeElse_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 5)));
#line 437 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Catches_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 6)));
#line 437 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__MaybeCatchAny_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 7)));
#line 437 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_179_179;
#line 437 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_470;
#line 437 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoal_471 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 437 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__MaybeIO_472 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 436 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));
#line 466 "parse_tree_out_clause.m"
                  MR_Box parse_tree__parse_tree_out_clause__conv3_STATE_VARIABLE_IO_180_180;

#line 438 "parse_tree_out_clause.m"
                  {
#line 438 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "(try [");
                  }
#line 444 "parse_tree_out_clause.m"
                  if ((parse_tree__parse_tree_out_clause__MaybeIO_472 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "parse_tree_out_clause.m"
                    {
#line 445 "parse_tree_out_clause.m"
                    }
#line 444 "parse_tree_out_clause.m"
                  else
#line 440 "parse_tree_out_clause.m"
                    {
#line 440 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__IOStateVar_468 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__MaybeIO_472, (MR_Integer) 0)));

#line 441 "parse_tree_out_clause.m"
                      {
#line 441 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) "io(!");
                      }
#line 442 "parse_tree_out_clause.m"
                      {
#line 442 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__IOStateVar_468);
                      }
#line 443 "parse_tree_out_clause.m"
                      {
#line 443 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
#line 440 "parse_tree_out_clause.m"
                    }
#line 447 "parse_tree_out_clause.m"
                  {
#line 447 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "] (");
                  }
#line 448 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_clause__Indent1_470 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 449 "parse_tree_out_clause.m"
                  {
#line 449 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_470);
                  }
#line 450 "parse_tree_out_clause.m"
                  {
#line 450 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_470, parse_tree__parse_tree_out_clause__SubGoal_471);
                  }
#line 451 "parse_tree_out_clause.m"
                  {
#line 451 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 452 "parse_tree_out_clause.m"
                  {
#line 452 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 453 "parse_tree_out_clause.m"
                  {
#line 453 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 454 "parse_tree_out_clause.m"
                  {
#line 454 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "then");
                  }
#line 455 "parse_tree_out_clause.m"
                  {
#line 455 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_470);
                  }
#line 456 "parse_tree_out_clause.m"
                  {
#line 456 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_470, parse_tree__parse_tree_out_clause__Then_67);
                  }
#line 457 "parse_tree_out_clause.m"
                  {
#line 457 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 463 "parse_tree_out_clause.m"
                  if ((parse_tree__parse_tree_out_clause__MaybeElse_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 464 "parse_tree_out_clause.m"
                    {
#line 464 "parse_tree_out_clause.m"
                    }
#line 463 "parse_tree_out_clause.m"
                  else
#line 459 "parse_tree_out_clause.m"
                    {
#line 459 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__Else_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__MaybeElse_68, (MR_Integer) 0)));

#line 460 "parse_tree_out_clause.m"
                      {
#line 460 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) "else");
                      }
#line 461 "parse_tree_out_clause.m"
                      {
#line 461 "parse_tree_out_clause.m"
                        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_470);
                      }
#line 462 "parse_tree_out_clause.m"
                      {
#line 462 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_470, parse_tree__parse_tree_out_clause__Else_71);
                      }
#line 459 "parse_tree_out_clause.m"
                    }
#line 466 "parse_tree_out_clause.m"
                  {
#line 466 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__V_179_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 466 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_179_179, 0) = ((MR_Box) (&parse_tree__parse_tree_out_clause_scalar_common_3[0]));
#line 466 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_179_179, 1) = ((MR_Box) (parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0_2));
#line 466 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_179_179, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 466 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_179_179, 3) = ((MR_Box) (parse_tree__parse_tree_out_clause__VarSet_6));
#line 466 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_179_179, 4) = ((MR_Box) (parse_tree__parse_tree_out_clause__Indent_7));
#line 466 "parse_tree_out_clause.m"
                  }
#line 466 "parse_tree_out_clause.m"
                  {
#line 466 "parse_tree_out_clause.m"
                    mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__parse_tree_out_clause__V_179_179, parse_tree__parse_tree_out_clause__Catches_69, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv3_STATE_VARIABLE_IO_180_180);
                  }
#line 474 "parse_tree_out_clause.m"
                  if ((parse_tree__parse_tree_out_clause__MaybeCatchAny_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "parse_tree_out_clause.m"
                    {
#line 475 "parse_tree_out_clause.m"
                    }
#line 474 "parse_tree_out_clause.m"
                  else
#line 468 "parse_tree_out_clause.m"
                    {
#line 468 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__CatchAnyVar_72;
#line 468 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__CatchAnyGoal_73;
#line 468 "parse_tree_out_clause.m"
                      MR_Word parse_tree__parse_tree_out_clause__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__MaybeCatchAny_70, (MR_Integer) 0)));

#line 468 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__CatchAnyVar_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_181_181, (MR_Integer) 0)));
#line 468 "parse_tree_out_clause.m"
                      parse_tree__parse_tree_out_clause__CatchAnyGoal_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_181_181, (MR_Integer) 1)));
#line 469 "parse_tree_out_clause.m"
                      {
#line 469 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) "catch_any ");
                      }
#line 470 "parse_tree_out_clause.m"
                      {
#line 470 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__parse_tree_out_clause__VarSet_6, (MR_Integer) 0, parse_tree__parse_tree_out_clause__CatchAnyVar_72);
                      }
#line 471 "parse_tree_out_clause.m"
                      {
#line 471 "parse_tree_out_clause.m"
                        mercury__io__write_string_3_p_0((MR_String) " ->");
                      }
#line 472 "parse_tree_out_clause.m"
                      {
#line 472 "parse_tree_out_clause.m"
                        parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_470);
                      }
#line 473 "parse_tree_out_clause.m"
                      {
#line 473 "parse_tree_out_clause.m"
                        parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_470, parse_tree__parse_tree_out_clause__CatchAnyGoal_73);
                      }
#line 468 "parse_tree_out_clause.m"
                    }
#line 477 "parse_tree_out_clause.m"
                  {
#line 477 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 478 "parse_tree_out_clause.m"
                  {
#line 478 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 437 "parse_tree_out_clause.m"
                }
#line 154 "parse_tree_out_clause.m"
                break;
#line 154 "parse_tree_out_clause.m"
              case (MR_Integer) 20:
#line 160 "parse_tree_out_clause.m"
                {
#line 160 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalA_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 160 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 160 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_15 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 160 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 162 "parse_tree_out_clause.m"
                  {
#line 162 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
#line 163 "parse_tree_out_clause.m"
                  {
#line 163 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_15);
                  }
#line 164 "parse_tree_out_clause.m"
                  {
#line 164 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_15, parse_tree__parse_tree_out_clause__SubGoalA_13);
                  }
#line 165 "parse_tree_out_clause.m"
                  {
#line 165 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 166 "parse_tree_out_clause.m"
                  {
#line 166 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "=>");
                  }
#line 167 "parse_tree_out_clause.m"
                  {
#line 167 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_15);
                  }
#line 168 "parse_tree_out_clause.m"
                  {
#line 168 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_15, parse_tree__parse_tree_out_clause__SubGoalB_14);
                  }
#line 169 "parse_tree_out_clause.m"
                  {
#line 169 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 170 "parse_tree_out_clause.m"
                  {
#line 170 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 160 "parse_tree_out_clause.m"
                }
#line 154 "parse_tree_out_clause.m"
                break;
#line 154 "parse_tree_out_clause.m"
              case (MR_Integer) 21:
#line 172 "parse_tree_out_clause.m"
                {
#line 172 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalA_423 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 172 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__SubGoalB_424 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 172 "parse_tree_out_clause.m"
                  MR_Integer parse_tree__parse_tree_out_clause__Indent1_425 = (parse_tree__parse_tree_out_clause__Indent_7 + (MR_Integer) 1);
#line 172 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 174 "parse_tree_out_clause.m"
                  {
#line 174 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
#line 175 "parse_tree_out_clause.m"
                  {
#line 175 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_425);
                  }
#line 176 "parse_tree_out_clause.m"
                  {
#line 176 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_425, parse_tree__parse_tree_out_clause__SubGoalA_423);
                  }
#line 177 "parse_tree_out_clause.m"
                  {
#line 177 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 178 "parse_tree_out_clause.m"
                  {
#line 178 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "<=>");
                  }
#line 179 "parse_tree_out_clause.m"
                  {
#line 179 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent1_425);
                  }
#line 180 "parse_tree_out_clause.m"
                  {
#line 180 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_connected_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__Indent1_425, parse_tree__parse_tree_out_clause__SubGoalB_424);
                  }
#line 181 "parse_tree_out_clause.m"
                  {
#line 181 "parse_tree_out_clause.m"
                    parse_tree__mercury_to_mercury__mercury_output_newline_3_p_0(parse_tree__parse_tree_out_clause__Indent_7);
                  }
#line 182 "parse_tree_out_clause.m"
                  {
#line 182 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 172 "parse_tree_out_clause.m"
                }
#line 154 "parse_tree_out_clause.m"
                break;
#line 154 "parse_tree_out_clause.m"
              case (MR_Integer) 22:
#line 529 "parse_tree_out_clause.m"
                {
#line 529 "parse_tree_out_clause.m"
                  MR_String parse_tree__parse_tree_out_clause__Name_81 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 2)));
#line 529 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__Terms_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 3)));
#line 529 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_101_101;
#line 529 "parse_tree_out_clause.m"
                  MR_Word parse_tree__parse_tree_out_clause__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__Goal_8, (MR_Integer) 1)));

#line 530 "parse_tree_out_clause.m"
                  {
#line 530 "parse_tree_out_clause.m"
                    mercury__io__write_string_3_p_0((MR_String) "event ");
                  }
#line 531 "parse_tree_out_clause.m"
                  {
#line 531 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 531 "parse_tree_out_clause.m"
                    MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__V_101_101, 0) = ((MR_Box) (parse_tree__parse_tree_out_clause__Name_81));
#line 531 "parse_tree_out_clause.m"
                  }
#line 531 "parse_tree_out_clause.m"
                  {
#line 531 "parse_tree_out_clause.m"
                    parse_tree__parse_tree_out_clause__mercury_output_call_5_p_0(parse_tree__parse_tree_out_clause__VarSet_6, parse_tree__parse_tree_out_clause__V_101_101, parse_tree__parse_tree_out_clause__Terms_82);
                  }
#line 529 "parse_tree_out_clause.m"
                }
#line 154 "parse_tree_out_clause.m"
                break;
#line 154 "parse_tree_out_clause.m"
            }
#line 154 "parse_tree_out_clause.m"
            break;
#line 154 "parse_tree_out_clause.m"
        }
#line 154 "parse_tree_out_clause.m"
      }
#line 154 "parse_tree_out_clause.m"
      break;
#line 154 "parse_tree_out_clause.m"
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
#line 90 "parse_tree_out_clause.m"
  {
#line 90 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded;
#line 90 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 1)));
#line 90 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__ArgTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 2)));
#line 90 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__VarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 4)));
#line 90 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__BodyGoal_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 5)));
#line 91 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause___PredName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 0)));
#line 91 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause___MaybeAttrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 3)));
#line 91 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 6)));
#line 91 "parse_tree_out_clause.m"
    MR_Integer parse_tree__parse_tree_out_clause___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 7)));

#line 96 "parse_tree_out_clause.m"
#line 96 "parse_tree_out_clause.m"
    switch (parse_tree__parse_tree_out_clause__PredOrFunc_9) {
#line 96 "parse_tree_out_clause.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 96 "parse_tree_out_clause.m"
      case (MR_Integer) 1:
#line 97 "parse_tree_out_clause.m"
        {
#line 97 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__FuncArgTerms_16;
#line 97 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__ResultTerm_17;
#line 98 "parse_tree_out_clause.m"
          MR_Box parse_tree__parse_tree_out_clause__conv0_ResultTerm_17;
#line 141 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__V_33_33;

#line 98 "parse_tree_out_clause.m"
          {
#line 98 "parse_tree_out_clause.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[0], parse_tree__parse_tree_out_clause__ArgTerms_10, &parse_tree__parse_tree_out_clause__FuncArgTerms_16, &parse_tree__parse_tree_out_clause__conv0_ResultTerm_17);
          }
#line 98 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__ResultTerm_17 = ((MR_Word) parse_tree__parse_tree_out_clause__conv0_ResultTerm_17);
#line 130 "parse_tree_out_clause.m"
          {
#line 130 "parse_tree_out_clause.m"
            parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out_clause__MethodName_5);
          }
#line 137 "parse_tree_out_clause.m"
          if ((parse_tree__parse_tree_out_clause__FuncArgTerms_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 138 "parse_tree_out_clause.m"
            {
#line 138 "parse_tree_out_clause.m"
            }
#line 137 "parse_tree_out_clause.m"
          else
#line 132 "parse_tree_out_clause.m"
            {
#line 132 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__HeadArg_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__FuncArgTerms_16, (MR_Integer) 0)));
#line 132 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__TailArgs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__FuncArgTerms_16, (MR_Integer) 1)));
#line 134 "parse_tree_out_clause.m"
              MR_Box parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_23_38;

#line 133 "parse_tree_out_clause.m"
              {
#line 133 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
#line 134 "parse_tree_out_clause.m"
              {
#line 134 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, parse_tree__parse_tree_out_clause__HeadArg_31, parse_tree__parse_tree_out_clause__TailArgs_32, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_23_38);
              }
#line 136 "parse_tree_out_clause.m"
              {
#line 136 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 132 "parse_tree_out_clause.m"
            }
#line 140 "parse_tree_out_clause.m"
          {
#line 140 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
#line 141 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__BodyGoal_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_13, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 141 "parse_tree_out_clause.m"
          if (parse_tree__parse_tree_out_clause__succeeded)
#line 141 "parse_tree_out_clause.m"
            {
#line 141 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_13, (MR_Integer) 1)));
#line 142 "parse_tree_out_clause.m"
              {
#line 142 "parse_tree_out_clause.m"
                MR_Box parse_tree__parse_tree_out_clause__conv2_STATE_VARIABLE_IO_19;

#line 142 "parse_tree_out_clause.m"
                {
#line 142 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out_clause__ResultTerm_17, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv2_STATE_VARIABLE_IO_19);
                }
#line 142 "parse_tree_out_clause.m"
              }
#line 141 "parse_tree_out_clause.m"
            }
#line 141 "parse_tree_out_clause.m"
          else
#line 145 "parse_tree_out_clause.m"
            {
#line 145 "parse_tree_out_clause.m"
              MR_Box parse_tree__parse_tree_out_clause__conv3_STATE_VARIABLE_IO_32_47;

#line 145 "parse_tree_out_clause.m"
              {
#line 145 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_term__mercury_format_term_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, parse_tree__parse_tree_out_clause__ResultTerm_17, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv3_STATE_VARIABLE_IO_32_47);
              }
#line 146 "parse_tree_out_clause.m"
              {
#line 146 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) " :-\n\t");
              }
#line 147 "parse_tree_out_clause.m"
              {
#line 147 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 1, parse_tree__parse_tree_out_clause__BodyGoal_13);
              }
#line 145 "parse_tree_out_clause.m"
            }
#line 97 "parse_tree_out_clause.m"
        }
#line 96 "parse_tree_out_clause.m"
        break;
#line 96 "parse_tree_out_clause.m"
      case (MR_Integer) 0:
#line 108 "parse_tree_out_clause.m"
        {
#line 119 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__V_67_67;

#line 109 "parse_tree_out_clause.m"
          {
#line 109 "parse_tree_out_clause.m"
            parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out_clause__MethodName_5);
          }
#line 116 "parse_tree_out_clause.m"
          if ((parse_tree__parse_tree_out_clause__ArgTerms_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 117 "parse_tree_out_clause.m"
            {
#line 117 "parse_tree_out_clause.m"
            }
#line 116 "parse_tree_out_clause.m"
          else
#line 111 "parse_tree_out_clause.m"
            {
#line 111 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__HeadArg_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__ArgTerms_10, (MR_Integer) 0)));
#line 111 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__TailArgs_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__ArgTerms_10, (MR_Integer) 1)));
#line 113 "parse_tree_out_clause.m"
              MR_Box parse_tree__parse_tree_out_clause__conv4_STATE_VARIABLE_IO_21_72;

#line 112 "parse_tree_out_clause.m"
              {
#line 112 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
#line 113 "parse_tree_out_clause.m"
              {
#line 113 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, parse_tree__parse_tree_out_clause__HeadArg_65, parse_tree__parse_tree_out_clause__TailArgs_66, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv4_STATE_VARIABLE_IO_21_72);
              }
#line 115 "parse_tree_out_clause.m"
              {
#line 115 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 111 "parse_tree_out_clause.m"
            }
#line 119 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__BodyGoal_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_13, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 119 "parse_tree_out_clause.m"
          if (parse_tree__parse_tree_out_clause__succeeded)
#line 119 "parse_tree_out_clause.m"
            {
#line 119 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_13, (MR_Integer) 1)));
#line 119 "parse_tree_out_clause.m"
            }
#line 119 "parse_tree_out_clause.m"
          else
#line 122 "parse_tree_out_clause.m"
            {
#line 122 "parse_tree_out_clause.m"
              {
#line 122 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) " :-\n\t");
              }
#line 123 "parse_tree_out_clause.m"
              {
#line 123 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 1, parse_tree__parse_tree_out_clause__BodyGoal_13);
              }
#line 122 "parse_tree_out_clause.m"
            }
#line 108 "parse_tree_out_clause.m"
        }
#line 96 "parse_tree_out_clause.m"
        break;
#line 96 "parse_tree_out_clause.m"
    }
#line 90 "parse_tree_out_clause.m"
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
#line 74 "parse_tree_out_clause.m"
  {
#line 74 "parse_tree_out_clause.m"
    MR_bool parse_tree__parse_tree_out_clause__succeeded;
#line 74 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__PredName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 0)));
#line 74 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 1)));
#line 74 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__ArgTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 2)));
#line 74 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__VarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 4)));
#line 74 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__BodyGoal_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 5)));
#line 74 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 6)));
#line 74 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause__PredName_16;
#line 75 "parse_tree_out_clause.m"
    MR_Word parse_tree__parse_tree_out_clause___MaybeAttrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 3)));
#line 75 "parse_tree_out_clause.m"
    MR_Integer parse_tree__parse_tree_out_clause___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_tree_out_clause__ItemClause_6, (MR_Integer) 7)));

#line 77 "parse_tree_out_clause.m"
    {
#line 77 "parse_tree_out_clause.m"
      parse_tree__parse_tree_out_info__maybe_unqualify_sym_name_3_p_0(parse_tree__parse_tree_out_clause__Info_5, parse_tree__parse_tree_out_clause__PredName0_8, &parse_tree__parse_tree_out_clause__PredName_16);
    }
#line 78 "parse_tree_out_clause.m"
    {
#line 78 "parse_tree_out_clause.m"
      parse_tree__parse_tree_out_info__maybe_output_line_number_4_p_0(parse_tree__parse_tree_out_clause__Info_5, parse_tree__parse_tree_out_clause__Context_14);
    }
#line 82 "parse_tree_out_clause.m"
#line 82 "parse_tree_out_clause.m"
    switch (parse_tree__parse_tree_out_clause__PredOrFunc_9) {
#line 82 "parse_tree_out_clause.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 82 "parse_tree_out_clause.m"
      case (MR_Integer) 1:
#line 83 "parse_tree_out_clause.m"
        {
#line 83 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__FuncArgTerms_17;
#line 83 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__ResultTerm_18;
#line 84 "parse_tree_out_clause.m"
          MR_Box parse_tree__parse_tree_out_clause__conv0_ResultTerm_18;
#line 141 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__V_37_37;

#line 84 "parse_tree_out_clause.m"
          {
#line 84 "parse_tree_out_clause.m"
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[0], parse_tree__parse_tree_out_clause__ArgTerms_10, &parse_tree__parse_tree_out_clause__FuncArgTerms_17, &parse_tree__parse_tree_out_clause__conv0_ResultTerm_18);
          }
#line 84 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__ResultTerm_18 = ((MR_Word) parse_tree__parse_tree_out_clause__conv0_ResultTerm_18);
#line 130 "parse_tree_out_clause.m"
          {
#line 130 "parse_tree_out_clause.m"
            parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out_clause__PredName_16);
          }
#line 137 "parse_tree_out_clause.m"
          if ((parse_tree__parse_tree_out_clause__FuncArgTerms_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 138 "parse_tree_out_clause.m"
            {
#line 138 "parse_tree_out_clause.m"
            }
#line 137 "parse_tree_out_clause.m"
          else
#line 132 "parse_tree_out_clause.m"
            {
#line 132 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__HeadArg_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__FuncArgTerms_17, (MR_Integer) 0)));
#line 132 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__TailArgs_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__FuncArgTerms_17, (MR_Integer) 1)));
#line 134 "parse_tree_out_clause.m"
              MR_Box parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_23_42;

#line 133 "parse_tree_out_clause.m"
              {
#line 133 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
#line 134 "parse_tree_out_clause.m"
              {
#line 134 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, parse_tree__parse_tree_out_clause__HeadArg_35, parse_tree__parse_tree_out_clause__TailArgs_36, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv1_STATE_VARIABLE_IO_23_42);
              }
#line 136 "parse_tree_out_clause.m"
              {
#line 136 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 132 "parse_tree_out_clause.m"
            }
#line 140 "parse_tree_out_clause.m"
          {
#line 140 "parse_tree_out_clause.m"
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
#line 141 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__BodyGoal_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_13, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 141 "parse_tree_out_clause.m"
          if (parse_tree__parse_tree_out_clause__succeeded)
#line 141 "parse_tree_out_clause.m"
            {
#line 141 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_13, (MR_Integer) 1)));
#line 142 "parse_tree_out_clause.m"
              {
#line 142 "parse_tree_out_clause.m"
                MR_Box parse_tree__parse_tree_out_clause__conv2_STATE_VARIABLE_IO_23_23;

#line 142 "parse_tree_out_clause.m"
                {
#line 142 "parse_tree_out_clause.m"
                  parse_tree__parse_tree_out_term__mercury_format_term_nq_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, (MR_Integer) 0, parse_tree__parse_tree_out_clause__ResultTerm_18, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv2_STATE_VARIABLE_IO_23_23);
                }
#line 142 "parse_tree_out_clause.m"
              }
#line 141 "parse_tree_out_clause.m"
            }
#line 141 "parse_tree_out_clause.m"
          else
#line 145 "parse_tree_out_clause.m"
            {
#line 145 "parse_tree_out_clause.m"
              MR_Box parse_tree__parse_tree_out_clause__conv3_STATE_VARIABLE_IO_32_51;

#line 145 "parse_tree_out_clause.m"
              {
#line 145 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_term__mercury_format_term_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, parse_tree__parse_tree_out_clause__ResultTerm_18, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv3_STATE_VARIABLE_IO_32_51);
              }
#line 146 "parse_tree_out_clause.m"
              {
#line 146 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) " :-\n\t");
              }
#line 147 "parse_tree_out_clause.m"
              {
#line 147 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 1, parse_tree__parse_tree_out_clause__BodyGoal_13);
              }
#line 145 "parse_tree_out_clause.m"
            }
#line 83 "parse_tree_out_clause.m"
        }
#line 82 "parse_tree_out_clause.m"
        break;
#line 82 "parse_tree_out_clause.m"
      case (MR_Integer) 0:
#line 108 "parse_tree_out_clause.m"
        {
#line 119 "parse_tree_out_clause.m"
          MR_Word parse_tree__parse_tree_out_clause__V_71_71;

#line 109 "parse_tree_out_clause.m"
          {
#line 109 "parse_tree_out_clause.m"
            parse_tree__mercury_to_mercury__mercury_output_sym_name_3_p_0(parse_tree__parse_tree_out_clause__PredName_16);
          }
#line 116 "parse_tree_out_clause.m"
          if ((parse_tree__parse_tree_out_clause__ArgTerms_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 117 "parse_tree_out_clause.m"
            {
#line 117 "parse_tree_out_clause.m"
            }
#line 116 "parse_tree_out_clause.m"
          else
#line 111 "parse_tree_out_clause.m"
            {
#line 111 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__HeadArg_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__ArgTerms_10, (MR_Integer) 0)));
#line 111 "parse_tree_out_clause.m"
              MR_Word parse_tree__parse_tree_out_clause__TailArgs_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_tree_out_clause__ArgTerms_10, (MR_Integer) 1)));
#line 113 "parse_tree_out_clause.m"
              MR_Box parse_tree__parse_tree_out_clause__conv4_STATE_VARIABLE_IO_21_76;

#line 112 "parse_tree_out_clause.m"
              {
#line 112 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
#line 113 "parse_tree_out_clause.m"
              {
#line 113 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_term__mercury_format_comma_separated_terms_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__parse_tree_out_clause_scalar_common_1[1], parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 0, parse_tree__parse_tree_out_clause__HeadArg_69, parse_tree__parse_tree_out_clause__TailArgs_70, ((MR_Box) ((MR_Integer) 0)), &parse_tree__parse_tree_out_clause__conv4_STATE_VARIABLE_IO_21_76);
              }
#line 115 "parse_tree_out_clause.m"
              {
#line 115 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
#line 111 "parse_tree_out_clause.m"
            }
#line 119 "parse_tree_out_clause.m"
          parse_tree__parse_tree_out_clause__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_tree_out_clause__BodyGoal_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_13, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 119 "parse_tree_out_clause.m"
          if (parse_tree__parse_tree_out_clause__succeeded)
#line 119 "parse_tree_out_clause.m"
            {
#line 119 "parse_tree_out_clause.m"
              parse_tree__parse_tree_out_clause__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_tree_out_clause__BodyGoal_13, (MR_Integer) 1)));
#line 119 "parse_tree_out_clause.m"
            }
#line 119 "parse_tree_out_clause.m"
          else
#line 122 "parse_tree_out_clause.m"
            {
#line 122 "parse_tree_out_clause.m"
              {
#line 122 "parse_tree_out_clause.m"
                mercury__io__write_string_3_p_0((MR_String) " :-\n\t");
              }
#line 123 "parse_tree_out_clause.m"
              {
#line 123 "parse_tree_out_clause.m"
                parse_tree__parse_tree_out_clause__mercury_output_goal_5_p_0(parse_tree__parse_tree_out_clause__VarSet_12, (MR_Integer) 1, parse_tree__parse_tree_out_clause__BodyGoal_13);
              }
#line 122 "parse_tree_out_clause.m"
            }
#line 108 "parse_tree_out_clause.m"
        }
#line 82 "parse_tree_out_clause.m"
        break;
#line 82 "parse_tree_out_clause.m"
    }
#line 88 "parse_tree_out_clause.m"
    {
#line 88 "parse_tree_out_clause.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
#line 74 "parse_tree_out_clause.m"
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
