/*
** Automatically generated from `prog_io_sym_name.m'
** by the Mercury compiler,
** version 13.05.2-beta-2013-10-31, configured for x86_64-apple-darwin12.4.0.
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


/* :- module parse_tree.prog_io_sym_name. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_sym_name__init
ENDINIT
*/

#include "parse_tree.prog_io_sym_name.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"





static /* final */ const MR_Box parse_tree__prog_io_sym_name_scalar_common_1[30][2];

static /* final */ const MR_Box parse_tree__prog_io_sym_name_scalar_common_2[5][1];




static /* final */ const MR_Box parse_tree__prog_io_sym_name_scalar_common_1[30][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[0])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[0])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_sym_name_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "does not match preceding"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: module qualifier in definition"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in qualified symbol name."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[0])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "must be a non-negative integer."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[0])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: arity in symbol name specifier"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "must be an integer."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[0])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: module name identifier expected before \'.\'"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in qualified symbol name, not"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: identifier expected after \'.\'"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: atom expected at"))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__prog_io_sym_name_scalar_common_2[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: module name identifier"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "expected before"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: identifier expected after"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: symbol name expected at"))
  },
  /* row 28 */
  {
    ((MR_Box) (&parse_tree__prog_io_sym_name_scalar_common_2[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 29 */
  {
    ((MR_Box) (&parse_tree__prog_io_sym_name_scalar_common_2[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_sym_name_scalar_common_2[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ":- module"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[9])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[15])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[18])))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 127 "prog_io_sym_name.m"
MR_Word MR_CALL 
parse_tree__prog_io_sym_name__root_module_name_0_f_0(void)
#line 127 "prog_io_sym_name.m"
{
#line 430 "prog_io_sym_name.m"
  {
#line 430 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded;

#line 430 "prog_io_sym_name.m"
    return (MR_Word) &parse_tree__prog_io_sym_name_scalar_common_2[1];
#line 430 "prog_io_sym_name.m"
  }
#line 127 "prog_io_sym_name.m"
}

#line 120 "prog_io_sym_name.m"
void MR_CALL 
parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_specifier_4_p_0(
#line 120 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__DefaultModule_5,
#line 120 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__VarSet_6,
#line 120 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_7,
#line 120 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_8)
#line 120 "prog_io_sym_name.m"
{
#line 416 "prog_io_sym_name.m"
  {
#line 416 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 416 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__NameTerm_9;
#line 416 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__ArityTerm_10;
#line 390 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_21_21;
#line 390 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__V_22_22;
#line 390 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_23_23;
#line 390 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_24_24;
#line 390 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_25_25;
#line 390 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_11_11;

#line 390 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 390 "prog_io_sym_name.m"
      {
#line 390 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_7, (MR_Integer) 0)));
#line 390 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_7, (MR_Integer) 1)));
#line 390 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_7, (MR_Integer) 2)));
#line 390 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 390 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 390 "prog_io_sym_name.m"
          {
#line 390 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_21_21, (MR_Integer) 0)));
#line 390 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (strcmp(parse_tree__prog_io_sym_name__V_22_22, (MR_String) "/") == 0);
#line 390 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 390 "prog_io_sym_name.m"
              {
#line 390 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 390 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 390 "prog_io_sym_name.m"
                  {
#line 390 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__NameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_23_23, (MR_Integer) 0)));
#line 390 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_23_23, (MR_Integer) 1)));
#line 390 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 390 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 390 "prog_io_sym_name.m"
                      {
#line 390 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__ArityTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_24_24, (MR_Integer) 0)));
#line 390 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_24_24, (MR_Integer) 1)));
#line 390 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 390 "prog_io_sym_name.m"
                      }
#line 390 "prog_io_sym_name.m"
                  }
#line 390 "prog_io_sym_name.m"
              }
#line 390 "prog_io_sym_name.m"
          }
#line 390 "prog_io_sym_name.m"
      }
#line 416 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 409 "prog_io_sym_name.m"
      {
#line 409 "prog_io_sym_name.m"
        MR_Integer parse_tree__prog_io_sym_name__Arity_12;
#line 391 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_26_26;
#line 391 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_27_27;
#line 391 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_13_13;

#line 391 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__ArityTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 391 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 391 "prog_io_sym_name.m"
          {
#line 391 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__ArityTerm_10, (MR_Integer) 0)));
#line 391 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__ArityTerm_10, (MR_Integer) 1)));
#line 391 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__ArityTerm_10, (MR_Integer) 2)));
#line 391 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 391 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 391 "prog_io_sym_name.m"
              {
#line 391 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 391 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 391 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_26_26, (MR_Integer) 0)));
#line 391 "prog_io_sym_name.m"
              }
#line 391 "prog_io_sym_name.m"
          }
#line 409 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 402 "prog_io_sym_name.m"
          {
#line 392 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__Arity_12 >= (MR_Integer) 0);
#line 402 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 394 "prog_io_sym_name.m"
              {
#line 394 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__MaybeName_14;

#line 393 "prog_io_sym_name.m"
                {
#line 393 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__prog_io_sym_name__DefaultModule_5, parse_tree__prog_io_sym_name__VarSet_6, parse_tree__prog_io_sym_name__NameTerm_9, &parse_tree__prog_io_sym_name__MaybeName_14);
                }
#line 398 "prog_io_sym_name.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_sym_name__MaybeName_14)) == (MR_mktag((MR_Integer) 0))))
#line 397 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_8 = (MR_Word) parse_tree__prog_io_sym_name__MaybeName_14;
#line 398 "prog_io_sym_name.m"
                else
#line 399 "prog_io_sym_name.m"
                  {
#line 399 "prog_io_sym_name.m"
                    MR_Word parse_tree__prog_io_sym_name__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__MaybeName_14, (MR_Integer) 0)));
#line 399 "prog_io_sym_name.m"
                    MR_Word parse_tree__prog_io_sym_name__V_29_29;

#line 400 "prog_io_sym_name.m"
                    {
#line 400 "prog_io_sym_name.m"
                      parse_tree__prog_io_sym_name__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "prog_io_sym_name.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Name_16));
#line 400 "prog_io_sym_name.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Arity_12));
#line 400 "prog_io_sym_name.m"
                    }
#line 400 "prog_io_sym_name.m"
                    {
#line 400 "prog_io_sym_name.m"
                      MR_Word base;
#line 400 "prog_io_sym_name.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 400 "prog_io_sym_name.m"
                      *parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_8 = base;
#line 400 "prog_io_sym_name.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_29_29));
#line 400 "prog_io_sym_name.m"
                    }
#line 399 "prog_io_sym_name.m"
                  }
#line 394 "prog_io_sym_name.m"
              }
#line 402 "prog_io_sym_name.m"
            else
#line 404 "prog_io_sym_name.m"
              {
#line 404 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Spec_18;
#line 404 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_40_40;
#line 404 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_41_41;
#line 404 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_42_42;
#line 404 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_47_47;

#line 406 "prog_io_sym_name.m"
                {
#line 406 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_sym_name__Term_7);
                }
#line 406 "prog_io_sym_name.m"
                {
#line 406 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 406 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_42_42));
#line 406 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[28])));
#line 406 "prog_io_sym_name.m"
                }
#line 405 "prog_io_sym_name.m"
                {
#line 405 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_41_41));
#line 405 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 405 "prog_io_sym_name.m"
                }
#line 405 "prog_io_sym_name.m"
                {
#line 405 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 405 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 405 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 405 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_18, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_40_40));
#line 405 "prog_io_sym_name.m"
                }
#line 407 "prog_io_sym_name.m"
                {
#line 407 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_18));
#line 407 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 407 "prog_io_sym_name.m"
                }
#line 407 "prog_io_sym_name.m"
                {
#line 407 "prog_io_sym_name.m"
                  MR_Word base;
#line 407 "prog_io_sym_name.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 407 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_8 = base;
#line 407 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_47_47));
#line 407 "prog_io_sym_name.m"
                }
#line 404 "prog_io_sym_name.m"
              }
#line 402 "prog_io_sym_name.m"
          }
#line 409 "prog_io_sym_name.m"
        else
#line 411 "prog_io_sym_name.m"
          {
#line 411 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_59_59;
#line 411 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_60_60;
#line 411 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_61_61;
#line 411 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_66_66;
#line 411 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Spec_70;

#line 413 "prog_io_sym_name.m"
            {
#line 413 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_61_61 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_sym_name__Term_7);
            }
#line 413 "prog_io_sym_name.m"
            {
#line 413 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 413 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_61_61));
#line 413 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[29])));
#line 413 "prog_io_sym_name.m"
            }
#line 412 "prog_io_sym_name.m"
            {
#line 412 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_60_60));
#line 412 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 412 "prog_io_sym_name.m"
            }
#line 412 "prog_io_sym_name.m"
            {
#line 412 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Spec_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 412 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 412 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 412 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_70, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_59_59));
#line 412 "prog_io_sym_name.m"
            }
#line 414 "prog_io_sym_name.m"
            {
#line 414 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_70));
#line 414 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "prog_io_sym_name.m"
            }
#line 414 "prog_io_sym_name.m"
            {
#line 414 "prog_io_sym_name.m"
              MR_Word base;
#line 414 "prog_io_sym_name.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 414 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_8 = base;
#line 414 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_66_66));
#line 414 "prog_io_sym_name.m"
            }
#line 411 "prog_io_sym_name.m"
          }
#line 409 "prog_io_sym_name.m"
      }
#line 416 "prog_io_sym_name.m"
    else
#line 418 "prog_io_sym_name.m"
      {
#line 418 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__MaybeSymbolName_19;

#line 417 "prog_io_sym_name.m"
        {
#line 417 "prog_io_sym_name.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__prog_io_sym_name__DefaultModule_5, parse_tree__prog_io_sym_name__VarSet_6, parse_tree__prog_io_sym_name__Term_7, &parse_tree__prog_io_sym_name__MaybeSymbolName_19);
        }
#line 422 "prog_io_sym_name.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_sym_name__MaybeSymbolName_19)) == (MR_mktag((MR_Integer) 0))))
#line 421 "prog_io_sym_name.m"
          *parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_8 = (MR_Word) parse_tree__prog_io_sym_name__MaybeSymbolName_19;
#line 422 "prog_io_sym_name.m"
        else
#line 423 "prog_io_sym_name.m"
          {
#line 423 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__SymbolName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__MaybeSymbolName_19, (MR_Integer) 0)));
#line 423 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_68_68;

#line 424 "prog_io_sym_name.m"
            {
#line 424 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 424 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__SymbolName_20));
#line 424 "prog_io_sym_name.m"
            }
#line 424 "prog_io_sym_name.m"
            {
#line 424 "prog_io_sym_name.m"
              MR_Word base;
#line 424 "prog_io_sym_name.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 424 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_8 = base;
#line 424 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_68_68));
#line 424 "prog_io_sym_name.m"
            }
#line 423 "prog_io_sym_name.m"
          }
#line 418 "prog_io_sym_name.m"
      }
#line 416 "prog_io_sym_name.m"
  }
#line 120 "prog_io_sym_name.m"
}

#line 117 "prog_io_sym_name.m"
void MR_CALL 
parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(
#line 117 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__DefaultModuleName_5,
#line 117 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__VarSet_6,
#line 117 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_7,
#line 117 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__MaybeSymName_8)
#line 117 "prog_io_sym_name.m"
{
#line 355 "prog_io_sym_name.m"
  {
#line 355 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded;
#line 355 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__TypeCtorInfo_43_43 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 355 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__MaybeSymName0_9;

#line 356 "prog_io_sym_name.m"
    {
#line 356 "prog_io_sym_name.m"
      parse_tree__prog_io_sym_name__parse_symbol_name_3_p_0(parse_tree__prog_io_sym_name__TypeCtorInfo_43_43, parse_tree__prog_io_sym_name__VarSet_6, parse_tree__prog_io_sym_name__Term_7, &parse_tree__prog_io_sym_name__MaybeSymName0_9);
    }
#line 377 "prog_io_sym_name.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_sym_name__MaybeSymName0_9)) == (MR_mktag((MR_Integer) 0))))
#line 379 "prog_io_sym_name.m"
      *parse_tree__prog_io_sym_name__MaybeSymName_8 = parse_tree__prog_io_sym_name__MaybeSymName0_9;
#line 377 "prog_io_sym_name.m"
    else
#line 358 "prog_io_sym_name.m"
      {
#line 358 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__SymName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__MaybeSymName0_9, (MR_Integer) 0)));

#line 360 "prog_io_sym_name.m"
        {
#line 360 "prog_io_sym_name.m"
          parse_tree__prog_io_sym_name__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_io_sym_name__DefaultModuleName_5, (MR_Word) &parse_tree__prog_io_sym_name_scalar_common_2[1]);
        }
#line 363 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 362 "prog_io_sym_name.m"
          *parse_tree__prog_io_sym_name__MaybeSymName_8 = parse_tree__prog_io_sym_name__MaybeSymName0_9;
#line 363 "prog_io_sym_name.m"
        else
#line 373 "prog_io_sym_name.m"
          {
#line 364 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__ModuleName_11;
#line 364 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__V_12_12;

#line 364 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__SymName_10)) == (MR_mktag((MR_Integer) 1)));
#line 364 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 364 "prog_io_sym_name.m"
              {
#line 364 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName_10, (MR_Integer) 0)));
#line 364 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName_10, (MR_Integer) 1)));
#line 365 "prog_io_sym_name.m"
                {
#line 365 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__succeeded = mdbcomp__prim_data__match_sym_name_2_p_0(parse_tree__prog_io_sym_name__ModuleName_11, parse_tree__prog_io_sym_name__DefaultModuleName_5);
                }
#line 365 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = !(parse_tree__prog_io_sym_name__succeeded);
#line 364 "prog_io_sym_name.m"
              }
#line 373 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 369 "prog_io_sym_name.m"
              {
#line 369 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Spec_14;
#line 369 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_33_33;
#line 369 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_34_34;
#line 369 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_35_35;
#line 369 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_40_40;

#line 371 "prog_io_sym_name.m"
                {
#line 371 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_35_35 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_sym_name__TypeCtorInfo_43_43, parse_tree__prog_io_sym_name__Term_7);
                }
#line 371 "prog_io_sym_name.m"
                {
#line 371 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 371 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_35_35));
#line 371 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[23])));
#line 371 "prog_io_sym_name.m"
                }
#line 370 "prog_io_sym_name.m"
                {
#line 370 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_34_34));
#line 370 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 370 "prog_io_sym_name.m"
                }
#line 370 "prog_io_sym_name.m"
                {
#line 370 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 370 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 370 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 370 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_14, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_33_33));
#line 370 "prog_io_sym_name.m"
                }
#line 372 "prog_io_sym_name.m"
                {
#line 372 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_14));
#line 372 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 372 "prog_io_sym_name.m"
                }
#line 372 "prog_io_sym_name.m"
                {
#line 372 "prog_io_sym_name.m"
                  MR_Word base;
#line 372 "prog_io_sym_name.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 372 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymName_8 = base;
#line 372 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_40_40));
#line 372 "prog_io_sym_name.m"
                }
#line 369 "prog_io_sym_name.m"
              }
#line 373 "prog_io_sym_name.m"
            else
#line 374 "prog_io_sym_name.m"
              {
#line 374 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__UnqualName_15;
#line 374 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_42_42;

#line 374 "prog_io_sym_name.m"
                {
#line 374 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__UnqualName_15 = mdbcomp__prim_data__unqualify_name_1_f_0(parse_tree__prog_io_sym_name__SymName_10);
                }
#line 375 "prog_io_sym_name.m"
                {
#line 375 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 375 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__DefaultModuleName_5));
#line 375 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__UnqualName_15));
#line 375 "prog_io_sym_name.m"
                }
#line 375 "prog_io_sym_name.m"
                {
#line 375 "prog_io_sym_name.m"
                  MR_Word base;
#line 375 "prog_io_sym_name.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 375 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymName_8 = base;
#line 375 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_42_42));
#line 375 "prog_io_sym_name.m"
                }
#line 374 "prog_io_sym_name.m"
              }
#line 373 "prog_io_sym_name.m"
          }
#line 358 "prog_io_sym_name.m"
      }
#line 355 "prog_io_sym_name.m"
  }
#line 117 "prog_io_sym_name.m"
}

#line 115 "prog_io_sym_name.m"
MR_bool MR_CALL 
parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(
#line 115 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_23,
#line 115 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_3,
#line 115 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__SymName_4)
#line 115 "prog_io_sym_name.m"
{
#line 347 "prog_io_sym_name.m"
  {
#line 347 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 347 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__ModuleTerm_6;
#line 347 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__NameTerm_7;
#line 339 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__FunctorName_5;
#line 339 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_13_13;
#line 339 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_14_14;
#line 339 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_15_15;
#line 339 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_16_16;
#line 338 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name___TermContext_8;

#line 338 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 338 "prog_io_sym_name.m"
      {
#line 338 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 0)));
#line 338 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 1)));
#line 338 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name___TermContext_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 2)));
#line 338 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 338 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 338 "prog_io_sym_name.m"
          {
#line 338 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__FunctorName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_13_13, (MR_Integer) 0)));
#line 341 "prog_io_sym_name.m"
            if ((strcmp(parse_tree__prog_io_sym_name__FunctorName_5, (MR_String) ".") == 0))
#line 341 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 341 "prog_io_sym_name.m"
            else
#line 341 "prog_io_sym_name.m"
              if ((strcmp(parse_tree__prog_io_sym_name__FunctorName_5, (MR_String) ":") == 0))
#line 340 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 341 "prog_io_sym_name.m"
              else
#line 341 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = MR_FALSE;
#line 339 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 339 "prog_io_sym_name.m"
              {
#line 338 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 338 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 338 "prog_io_sym_name.m"
                  {
#line 338 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__ModuleTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_14_14, (MR_Integer) 0)));
#line 338 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_14_14, (MR_Integer) 1)));
#line 338 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 338 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 338 "prog_io_sym_name.m"
                      {
#line 338 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__NameTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_15_15, (MR_Integer) 0)));
#line 338 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_15_15, (MR_Integer) 1)));
#line 338 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "prog_io_sym_name.m"
                      }
#line 338 "prog_io_sym_name.m"
                  }
#line 339 "prog_io_sym_name.m"
              }
#line 338 "prog_io_sym_name.m"
          }
#line 338 "prog_io_sym_name.m"
      }
#line 347 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 344 "prog_io_sym_name.m"
      {
#line 344 "prog_io_sym_name.m"
        MR_String parse_tree__prog_io_sym_name__Name_9;
#line 344 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__Module_11;
#line 344 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_17_17;
#line 344 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_18_18;
#line 344 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_10_10;

#line 344 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__NameTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 344 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 344 "prog_io_sym_name.m"
          {
#line 344 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameTerm_7, (MR_Integer) 0)));
#line 344 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameTerm_7, (MR_Integer) 1)));
#line 344 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameTerm_7, (MR_Integer) 2)));
#line 344 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 344 "prog_io_sym_name.m"
              {
#line 344 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 344 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 344 "prog_io_sym_name.m"
                  {
#line 344 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_17_17, (MR_Integer) 0)));
#line 345 "prog_io_sym_name.m"
                    {
#line 345 "prog_io_sym_name.m"
                      parse_tree__prog_io_sym_name__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_23, parse_tree__prog_io_sym_name__ModuleTerm_6, &parse_tree__prog_io_sym_name__Module_11);
                    }
#line 344 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 344 "prog_io_sym_name.m"
                      {
#line 346 "prog_io_sym_name.m"
                        {
#line 346 "prog_io_sym_name.m"
                          MR_Word base;
#line 346 "prog_io_sym_name.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "prog_io_sym_name.m"
                          *parse_tree__prog_io_sym_name__SymName_4 = base;
#line 346 "prog_io_sym_name.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Module_11));
#line 346 "prog_io_sym_name.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Name_9));
#line 346 "prog_io_sym_name.m"
                        }
#line 346 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 344 "prog_io_sym_name.m"
                      }
#line 344 "prog_io_sym_name.m"
                  }
#line 344 "prog_io_sym_name.m"
              }
#line 344 "prog_io_sym_name.m"
          }
#line 344 "prog_io_sym_name.m"
      }
#line 347 "prog_io_sym_name.m"
    else
#line 348 "prog_io_sym_name.m"
      {
#line 348 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_19_19;
#line 348 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_20_20;
#line 348 "prog_io_sym_name.m"
        MR_String parse_tree__prog_io_sym_name__V_21_21;
#line 348 "prog_io_sym_name.m"
        MR_String parse_tree__prog_io_sym_name__Name_22;
#line 348 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_12_12;

#line 348 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 348 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 348 "prog_io_sym_name.m"
          {
#line 348 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 0)));
#line 348 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 1)));
#line 348 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 2)));
#line 348 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 348 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 348 "prog_io_sym_name.m"
              {
#line 348 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 348 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 348 "prog_io_sym_name.m"
                  {
#line 348 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__Name_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_19_19, (MR_Integer) 0)));
#line 349 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_21_21 = (MR_String) "__";
#line 349 "prog_io_sym_name.m"
                    {
#line 349 "prog_io_sym_name.m"
                      *parse_tree__prog_io_sym_name__SymName_4 = mdbcomp__prim_data__string_to_sym_name_sep_2_f_0(parse_tree__prog_io_sym_name__Name_22, parse_tree__prog_io_sym_name__V_21_21);
                    }
#line 349 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 348 "prog_io_sym_name.m"
                  }
#line 348 "prog_io_sym_name.m"
              }
#line 348 "prog_io_sym_name.m"
          }
#line 348 "prog_io_sym_name.m"
      }
#line 347 "prog_io_sym_name.m"
    return parse_tree__prog_io_sym_name__succeeded;
#line 347 "prog_io_sym_name.m"
  }
#line 115 "prog_io_sym_name.m"
}

#line 113 "prog_io_sym_name.m"
void MR_CALL 
parse_tree__prog_io_sym_name__parse_symbol_name_3_p_0(
#line 113 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_102,
#line 113 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__VarSet_4,
#line 113 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_5,
#line 113 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__MaybeSymName_6)
#line 113 "prog_io_sym_name.m"
{
#line 322 "prog_io_sym_name.m"
  {
#line 322 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 322 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__FunctorName_7;
#line 322 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__ModuleTerm_8;
#line 322 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__NameTerm_9;
#line 322 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__TermContext_10;
#line 294 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_21_21;
#line 294 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_22_22;
#line 294 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_23_23;
#line 294 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_24_24;

#line 293 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 293 "prog_io_sym_name.m"
      {
#line 293 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 0)));
#line 293 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 1)));
#line 293 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__TermContext_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 2)));
#line 293 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 293 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 293 "prog_io_sym_name.m"
          {
#line 293 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__FunctorName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_21_21, (MR_Integer) 0)));
#line 296 "prog_io_sym_name.m"
            if ((strcmp(parse_tree__prog_io_sym_name__FunctorName_7, (MR_String) ".") == 0))
#line 296 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 296 "prog_io_sym_name.m"
            else
#line 296 "prog_io_sym_name.m"
              if ((strcmp(parse_tree__prog_io_sym_name__FunctorName_7, (MR_String) ":") == 0))
#line 295 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 296 "prog_io_sym_name.m"
              else
#line 296 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = MR_FALSE;
#line 294 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 294 "prog_io_sym_name.m"
              {
#line 293 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 293 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 293 "prog_io_sym_name.m"
                  {
#line 293 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__ModuleTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_22_22, (MR_Integer) 0)));
#line 293 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_22_22, (MR_Integer) 1)));
#line 293 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 293 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 293 "prog_io_sym_name.m"
                      {
#line 293 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__NameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_23_23, (MR_Integer) 0)));
#line 293 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_23_23, (MR_Integer) 1)));
#line 293 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 293 "prog_io_sym_name.m"
                      }
#line 293 "prog_io_sym_name.m"
                  }
#line 294 "prog_io_sym_name.m"
              }
#line 293 "prog_io_sym_name.m"
          }
#line 293 "prog_io_sym_name.m"
      }
#line 322 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 315 "prog_io_sym_name.m"
      {
#line 315 "prog_io_sym_name.m"
        MR_String parse_tree__prog_io_sym_name__Name_11;
#line 299 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_25_25;
#line 299 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_26_26;
#line 299 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_12_12;

#line 299 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__NameTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 299 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 299 "prog_io_sym_name.m"
          {
#line 299 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameTerm_9, (MR_Integer) 0)));
#line 299 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameTerm_9, (MR_Integer) 1)));
#line 299 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameTerm_9, (MR_Integer) 2)));
#line 299 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 299 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 299 "prog_io_sym_name.m"
              {
#line 299 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 299 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 299 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_25_25, (MR_Integer) 0)));
#line 299 "prog_io_sym_name.m"
              }
#line 299 "prog_io_sym_name.m"
          }
#line 315 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 300 "prog_io_sym_name.m"
          {
#line 300 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__MaybeModule_13;

#line 300 "prog_io_sym_name.m"
            {
#line 300 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__parse_symbol_name_3_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_102, parse_tree__prog_io_sym_name__VarSet_4, parse_tree__prog_io_sym_name__ModuleTerm_8, &parse_tree__prog_io_sym_name__MaybeModule_13);
            }
#line 304 "prog_io_sym_name.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_sym_name__MaybeModule_13)) == (MR_mktag((MR_Integer) 0))))
#line 305 "prog_io_sym_name.m"
              {
#line 305 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Pieces_16;
#line 305 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Spec_17;
#line 305 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_29_29;
#line 305 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_32_32;
#line 305 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_33_33;
#line 305 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_42_42;
#line 305 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_43_43;
#line 305 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_44_44;
#line 305 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_45_45;
#line 305 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_48_48;

#line 308 "prog_io_sym_name.m"
                {
#line 308 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_33_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 308 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_sym_name__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__FunctorName_7));
#line 308 "prog_io_sym_name.m"
                }
#line 308 "prog_io_sym_name.m"
                {
#line 308 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_33_33));
#line 308 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[11])));
#line 308 "prog_io_sym_name.m"
                }
#line 307 "prog_io_sym_name.m"
                {
#line 307 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[25])));
#line 307 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_32_32));
#line 307 "prog_io_sym_name.m"
                }
#line 307 "prog_io_sym_name.m"
                {
#line 307 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[24])));
#line 307 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__Pieces_16, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_29_29));
#line 307 "prog_io_sym_name.m"
                }
#line 311 "prog_io_sym_name.m"
                {
#line 311 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 311 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Pieces_16));
#line 311 "prog_io_sym_name.m"
                }
#line 311 "prog_io_sym_name.m"
                {
#line 311 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_45_45));
#line 311 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 311 "prog_io_sym_name.m"
                }
#line 311 "prog_io_sym_name.m"
                {
#line 311 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 311 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__TermContext_10));
#line 311 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_44_44));
#line 311 "prog_io_sym_name.m"
                }
#line 310 "prog_io_sym_name.m"
                {
#line 310 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_43_43));
#line 310 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 310 "prog_io_sym_name.m"
                }
#line 310 "prog_io_sym_name.m"
                {
#line 310 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 310 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 310 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 310 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_42_42));
#line 310 "prog_io_sym_name.m"
                }
#line 313 "prog_io_sym_name.m"
                {
#line 313 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_17));
#line 313 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "prog_io_sym_name.m"
                }
#line 313 "prog_io_sym_name.m"
                {
#line 313 "prog_io_sym_name.m"
                  MR_Word base;
#line 313 "prog_io_sym_name.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 313 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymName_6 = base;
#line 313 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_48_48));
#line 313 "prog_io_sym_name.m"
                }
#line 305 "prog_io_sym_name.m"
              }
#line 304 "prog_io_sym_name.m"
            else
#line 302 "prog_io_sym_name.m"
              {
#line 302 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Module_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__MaybeModule_13, (MR_Integer) 0)));
#line 302 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_50_50;

#line 303 "prog_io_sym_name.m"
                {
#line 303 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Module_14));
#line 303 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_50_50, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Name_11));
#line 303 "prog_io_sym_name.m"
                }
#line 303 "prog_io_sym_name.m"
                {
#line 303 "prog_io_sym_name.m"
                  MR_Word base;
#line 303 "prog_io_sym_name.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 303 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymName_6 = base;
#line 303 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_50_50));
#line 303 "prog_io_sym_name.m"
                }
#line 302 "prog_io_sym_name.m"
              }
#line 300 "prog_io_sym_name.m"
          }
#line 315 "prog_io_sym_name.m"
        else
#line 317 "prog_io_sym_name.m"
          {
#line 317 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_53_53;
#line 317 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_54_54;
#line 317 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_63_63;
#line 317 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_64_64;
#line 317 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_65_65;
#line 317 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_66_66;
#line 317 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_69_69;
#line 317 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Pieces_95;
#line 317 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Spec_96;

#line 317 "prog_io_sym_name.m"
            {
#line 317 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_54_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 317 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(2), parse_tree__prog_io_sym_name__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__FunctorName_7));
#line 317 "prog_io_sym_name.m"
            }
#line 316 "prog_io_sym_name.m"
            {
#line 316 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_54_54));
#line 316 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[11])));
#line 316 "prog_io_sym_name.m"
            }
#line 316 "prog_io_sym_name.m"
            {
#line 316 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Pieces_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__Pieces_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[26])));
#line 316 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__Pieces_95, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_53_53));
#line 316 "prog_io_sym_name.m"
            }
#line 319 "prog_io_sym_name.m"
            {
#line 319 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 319 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Pieces_95));
#line 319 "prog_io_sym_name.m"
            }
#line 319 "prog_io_sym_name.m"
            {
#line 319 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_66_66));
#line 319 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "prog_io_sym_name.m"
            }
#line 319 "prog_io_sym_name.m"
            {
#line 319 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 319 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__TermContext_10));
#line 319 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_65_65));
#line 319 "prog_io_sym_name.m"
            }
#line 318 "prog_io_sym_name.m"
            {
#line 318 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_64_64));
#line 318 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "prog_io_sym_name.m"
            }
#line 318 "prog_io_sym_name.m"
            {
#line 318 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Spec_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 318 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 318 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_96, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_63_63));
#line 318 "prog_io_sym_name.m"
            }
#line 320 "prog_io_sym_name.m"
            {
#line 320 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_96));
#line 320 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 320 "prog_io_sym_name.m"
            }
#line 320 "prog_io_sym_name.m"
            {
#line 320 "prog_io_sym_name.m"
              MR_Word base;
#line 320 "prog_io_sym_name.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 320 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymName_6 = base;
#line 320 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_69_69));
#line 320 "prog_io_sym_name.m"
            }
#line 317 "prog_io_sym_name.m"
          }
#line 315 "prog_io_sym_name.m"
      }
#line 322 "prog_io_sym_name.m"
    else
#line 326 "prog_io_sym_name.m"
      {
#line 326 "prog_io_sym_name.m"
        MR_String parse_tree__prog_io_sym_name__Name_99;
#line 323 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_71_71;
#line 323 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_72_72;
#line 323 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_18_18;

#line 323 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 323 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 323 "prog_io_sym_name.m"
          {
#line 323 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 0)));
#line 323 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 1)));
#line 323 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 2)));
#line 323 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 323 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 323 "prog_io_sym_name.m"
              {
#line 323 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_71_71)) == (MR_mktag((MR_Integer) 0)));
#line 323 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 323 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Name_99 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_71_71, (MR_Integer) 0)));
#line 323 "prog_io_sym_name.m"
              }
#line 323 "prog_io_sym_name.m"
          }
#line 326 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 324 "prog_io_sym_name.m"
          {
#line 324 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__SymName_19;

#line 324 "prog_io_sym_name.m"
            {
#line 324 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__SymName_19 = mdbcomp__prim_data__string_to_sym_name_sep_2_f_0(parse_tree__prog_io_sym_name__Name_99, (MR_String) "__");
            }
#line 325 "prog_io_sym_name.m"
            {
#line 325 "prog_io_sym_name.m"
              MR_Word base;
#line 325 "prog_io_sym_name.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 325 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymName_6 = base;
#line 325 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__SymName_19));
#line 325 "prog_io_sym_name.m"
            }
#line 324 "prog_io_sym_name.m"
          }
#line 326 "prog_io_sym_name.m"
        else
#line 327 "prog_io_sym_name.m"
          {
#line 327 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__TermStr_20;
#line 327 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_76_76;
#line 327 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_77_77;
#line 327 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_86_86;
#line 327 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_87_87;
#line 327 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_88_88;
#line 327 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_89_89;
#line 327 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_90_90;
#line 327 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_93_93;
#line 327 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Pieces_97;
#line 327 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Spec_98;

#line 327 "prog_io_sym_name.m"
            {
#line 327 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__TermStr_20 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_102, parse_tree__prog_io_sym_name__VarSet_4, parse_tree__prog_io_sym_name__Term_5);
            }
#line 329 "prog_io_sym_name.m"
            {
#line 329 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 329 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_77_77, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__TermStr_20));
#line 329 "prog_io_sym_name.m"
            }
#line 328 "prog_io_sym_name.m"
            {
#line 328 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_77_77));
#line 328 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[2])));
#line 328 "prog_io_sym_name.m"
            }
#line 328 "prog_io_sym_name.m"
            {
#line 328 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Pieces_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__Pieces_97, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[27])));
#line 328 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__Pieces_97, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_76_76));
#line 328 "prog_io_sym_name.m"
            }
#line 331 "prog_io_sym_name.m"
            {
#line 331 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_88_88 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_102, parse_tree__prog_io_sym_name__Term_5);
            }
#line 331 "prog_io_sym_name.m"
            {
#line 331 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 331 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Pieces_97));
#line 331 "prog_io_sym_name.m"
            }
#line 331 "prog_io_sym_name.m"
            {
#line 331 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_89_89, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_90_90));
#line 331 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 331 "prog_io_sym_name.m"
            }
#line 331 "prog_io_sym_name.m"
            {
#line 331 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 331 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_88_88));
#line 331 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_87_87, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_89_89));
#line 331 "prog_io_sym_name.m"
            }
#line 330 "prog_io_sym_name.m"
            {
#line 330 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_87_87));
#line 330 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 330 "prog_io_sym_name.m"
            }
#line 330 "prog_io_sym_name.m"
            {
#line 330 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Spec_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 330 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_98, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 330 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 330 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_98, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_86_86));
#line 330 "prog_io_sym_name.m"
            }
#line 332 "prog_io_sym_name.m"
            {
#line 332 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_98));
#line 332 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 332 "prog_io_sym_name.m"
            }
#line 332 "prog_io_sym_name.m"
            {
#line 332 "prog_io_sym_name.m"
              MR_Word base;
#line 332 "prog_io_sym_name.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 332 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymName_6 = base;
#line 332 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_93_93));
#line 332 "prog_io_sym_name.m"
            }
#line 327 "prog_io_sym_name.m"
          }
#line 326 "prog_io_sym_name.m"
      }
#line 322 "prog_io_sym_name.m"
  }
#line 113 "prog_io_sym_name.m"
}

#line 99 "prog_io_sym_name.m"
void MR_CALL 
parse_tree__prog_io_sym_name__parse_symbol_name_specifier_3_p_0(
#line 99 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__VarSet_4,
#line 99 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_5,
#line 99 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_6)
#line 99 "prog_io_sym_name.m"
{
#line 384 "prog_io_sym_name.m"
  {
#line 384 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded;

#line 385 "prog_io_sym_name.m"
    {
#line 385 "prog_io_sym_name.m"
      parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_specifier_4_p_0((MR_Word) &parse_tree__prog_io_sym_name_scalar_common_2[1], parse_tree__prog_io_sym_name__VarSet_4, parse_tree__prog_io_sym_name__Term_5, parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_6);
#line 385 "prog_io_sym_name.m"
      return;
    }
#line 384 "prog_io_sym_name.m"
  }
#line 99 "prog_io_sym_name.m"
}

#line 91 "prog_io_sym_name.m"
MR_bool MR_CALL 
parse_tree__prog_io_sym_name__try_parse_implicitly_qualified_sym_name_and_no_args_3_p_0(
#line 91 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_11,
#line 91 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__DefaultModuleName_4,
#line 91 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_5,
#line 91 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__SymName_6)
#line 91 "prog_io_sym_name.m"
{
#line 273 "prog_io_sym_name.m"
  {
#line 273 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded;
#line 273 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__SymName0_7;
#line 276 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_12_12;
#line 276 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__V_14_14;

#line 274 "prog_io_sym_name.m"
    {
#line 274 "prog_io_sym_name.m"
      parse_tree__prog_io_sym_name__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_11, parse_tree__prog_io_sym_name__Term_5, &parse_tree__prog_io_sym_name__SymName0_7);
    }
#line 273 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 273 "prog_io_sym_name.m"
      {
#line 430 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_14_14 = (MR_String) "";
#line 430 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_12_12 = (MR_Word) &parse_tree__prog_io_sym_name_scalar_common_2[1];
#line 276 "prog_io_sym_name.m"
        {
#line 276 "prog_io_sym_name.m"
          parse_tree__prog_io_sym_name__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_io_sym_name__DefaultModuleName_4, parse_tree__prog_io_sym_name__V_12_12);
        }
#line 279 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 278 "prog_io_sym_name.m"
          {
#line 278 "prog_io_sym_name.m"
            *parse_tree__prog_io_sym_name__SymName_6 = parse_tree__prog_io_sym_name__SymName0_7;
#line 278 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 278 "prog_io_sym_name.m"
          }
#line 279 "prog_io_sym_name.m"
        else
#line 284 "prog_io_sym_name.m"
          {
#line 280 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__ModuleName_8;
#line 280 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__V_9_9;

#line 280 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__SymName0_7)) == (MR_mktag((MR_Integer) 1)));
#line 280 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 280 "prog_io_sym_name.m"
              {
#line 280 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName0_7, (MR_Integer) 0)));
#line 280 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName0_7, (MR_Integer) 1)));
#line 281 "prog_io_sym_name.m"
                {
#line 281 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__succeeded = mdbcomp__prim_data__match_sym_name_2_p_0(parse_tree__prog_io_sym_name__ModuleName_8, parse_tree__prog_io_sym_name__DefaultModuleName_4);
                }
#line 281 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = !(parse_tree__prog_io_sym_name__succeeded);
#line 280 "prog_io_sym_name.m"
              }
#line 284 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 283 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__succeeded = MR_FALSE;
#line 284 "prog_io_sym_name.m"
            else
#line 285 "prog_io_sym_name.m"
              {
#line 285 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__UnqualName_10;

#line 285 "prog_io_sym_name.m"
                {
#line 285 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__UnqualName_10 = mdbcomp__prim_data__unqualify_name_1_f_0(parse_tree__prog_io_sym_name__SymName0_7);
                }
#line 286 "prog_io_sym_name.m"
                {
#line 286 "prog_io_sym_name.m"
                  MR_Word base;
#line 286 "prog_io_sym_name.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__SymName_6 = base;
#line 286 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__DefaultModuleName_4));
#line 286 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__UnqualName_10));
#line 286 "prog_io_sym_name.m"
                }
#line 285 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 285 "prog_io_sym_name.m"
              }
#line 284 "prog_io_sym_name.m"
          }
#line 273 "prog_io_sym_name.m"
      }
#line 273 "prog_io_sym_name.m"
    return parse_tree__prog_io_sym_name__succeeded;
#line 273 "prog_io_sym_name.m"
  }
#line 91 "prog_io_sym_name.m"
}

#line 89 "prog_io_sym_name.m"
MR_bool MR_CALL 
parse_tree__prog_io_sym_name__try_parse_implicitly_qualified_sym_name_and_args_4_p_0(
#line 89 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_13,
#line 89 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__DefaultModuleName_5,
#line 89 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_6,
#line 89 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__SymName_7,
#line 89 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__Args_8)
#line 89 "prog_io_sym_name.m"
{
#line 256 "prog_io_sym_name.m"
  {
#line 256 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded;
#line 256 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__SymName0_9;
#line 259 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_14_14;
#line 259 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__V_16_16;

#line 257 "prog_io_sym_name.m"
    {
#line 257 "prog_io_sym_name.m"
      parse_tree__prog_io_sym_name__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_13, parse_tree__prog_io_sym_name__Term_6, &parse_tree__prog_io_sym_name__SymName0_9, parse_tree__prog_io_sym_name__Args_8);
    }
#line 256 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 256 "prog_io_sym_name.m"
      {
#line 430 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_16_16 = (MR_String) "";
#line 430 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_14_14 = (MR_Word) &parse_tree__prog_io_sym_name_scalar_common_2[1];
#line 259 "prog_io_sym_name.m"
        {
#line 259 "prog_io_sym_name.m"
          parse_tree__prog_io_sym_name__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_io_sym_name__DefaultModuleName_5, parse_tree__prog_io_sym_name__V_14_14);
        }
#line 262 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 261 "prog_io_sym_name.m"
          {
#line 261 "prog_io_sym_name.m"
            *parse_tree__prog_io_sym_name__SymName_7 = parse_tree__prog_io_sym_name__SymName0_9;
#line 261 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 261 "prog_io_sym_name.m"
          }
#line 262 "prog_io_sym_name.m"
        else
#line 267 "prog_io_sym_name.m"
          {
#line 263 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__ModuleName_10;
#line 263 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__V_11_11;

#line 263 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__SymName0_9)) == (MR_mktag((MR_Integer) 1)));
#line 263 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 263 "prog_io_sym_name.m"
              {
#line 263 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName0_9, (MR_Integer) 0)));
#line 263 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName0_9, (MR_Integer) 1)));
#line 264 "prog_io_sym_name.m"
                {
#line 264 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__succeeded = mdbcomp__prim_data__match_sym_name_2_p_0(parse_tree__prog_io_sym_name__ModuleName_10, parse_tree__prog_io_sym_name__DefaultModuleName_5);
                }
#line 264 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = !(parse_tree__prog_io_sym_name__succeeded);
#line 263 "prog_io_sym_name.m"
              }
#line 267 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 266 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__succeeded = MR_FALSE;
#line 267 "prog_io_sym_name.m"
            else
#line 268 "prog_io_sym_name.m"
              {
#line 268 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__UnqualName_12;

#line 268 "prog_io_sym_name.m"
                {
#line 268 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__UnqualName_12 = mdbcomp__prim_data__unqualify_name_1_f_0(parse_tree__prog_io_sym_name__SymName0_9);
                }
#line 269 "prog_io_sym_name.m"
                {
#line 269 "prog_io_sym_name.m"
                  MR_Word base;
#line 269 "prog_io_sym_name.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__SymName_7 = base;
#line 269 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__DefaultModuleName_5));
#line 269 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__UnqualName_12));
#line 269 "prog_io_sym_name.m"
                }
#line 268 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 268 "prog_io_sym_name.m"
              }
#line 267 "prog_io_sym_name.m"
          }
#line 256 "prog_io_sym_name.m"
      }
#line 256 "prog_io_sym_name.m"
    return parse_tree__prog_io_sym_name__succeeded;
#line 256 "prog_io_sym_name.m"
  }
#line 89 "prog_io_sym_name.m"
}

#line 86 "prog_io_sym_name.m"
void MR_CALL 
parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(
#line 86 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_46,
#line 86 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__DefaultModuleName_6,
#line 86 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_7,
#line 86 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__VarSet_8,
#line 86 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__ContextPieces_9,
#line 86 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_10)
#line 86 "prog_io_sym_name.m"
{
#line 227 "prog_io_sym_name.m"
  {
#line 227 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded;
#line 227 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__MaybeSymNameAndArgs0_11;

#line 228 "prog_io_sym_name.m"
    {
#line 228 "prog_io_sym_name.m"
      parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_46, parse_tree__prog_io_sym_name__Term_7, parse_tree__prog_io_sym_name__VarSet_8, parse_tree__prog_io_sym_name__ContextPieces_9, &parse_tree__prog_io_sym_name__MaybeSymNameAndArgs0_11);
    }
#line 250 "prog_io_sym_name.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_sym_name__MaybeSymNameAndArgs0_11)) == (MR_mktag((MR_Integer) 0))))
#line 252 "prog_io_sym_name.m"
      *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_10 = parse_tree__prog_io_sym_name__MaybeSymNameAndArgs0_11;
#line 250 "prog_io_sym_name.m"
    else
#line 230 "prog_io_sym_name.m"
      {
#line 230 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__MaybeSymNameAndArgs0_11, (MR_Integer) 0)));
#line 230 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__MaybeSymNameAndArgs0_11, (MR_Integer) 1)));

#line 232 "prog_io_sym_name.m"
        {
#line 232 "prog_io_sym_name.m"
          parse_tree__prog_io_sym_name__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_io_sym_name__DefaultModuleName_6, (MR_Word) &parse_tree__prog_io_sym_name_scalar_common_2[1]);
        }
#line 235 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 234 "prog_io_sym_name.m"
          *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_10 = parse_tree__prog_io_sym_name__MaybeSymNameAndArgs0_11;
#line 235 "prog_io_sym_name.m"
        else
#line 245 "prog_io_sym_name.m"
          {
#line 236 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__ModuleName_14;
#line 236 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__V_15_15;

#line 236 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__SymName_12)) == (MR_mktag((MR_Integer) 1)));
#line 236 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 236 "prog_io_sym_name.m"
              {
#line 236 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName_12, (MR_Integer) 0)));
#line 236 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName_12, (MR_Integer) 1)));
#line 237 "prog_io_sym_name.m"
                {
#line 237 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__succeeded = mdbcomp__prim_data__match_sym_name_2_p_0(parse_tree__prog_io_sym_name__ModuleName_14, parse_tree__prog_io_sym_name__DefaultModuleName_6);
                }
#line 237 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = !(parse_tree__prog_io_sym_name__succeeded);
#line 236 "prog_io_sym_name.m"
              }
#line 245 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 241 "prog_io_sym_name.m"
              {
#line 241 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Spec_17;
#line 241 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_37_37;
#line 241 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_38_38;
#line 241 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_39_39;
#line 241 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_44_44;

#line 243 "prog_io_sym_name.m"
                {
#line 243 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_39_39 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_46, parse_tree__prog_io_sym_name__Term_7);
                }
#line 243 "prog_io_sym_name.m"
                {
#line 243 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 243 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_39_39));
#line 243 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[23])));
#line 243 "prog_io_sym_name.m"
                }
#line 242 "prog_io_sym_name.m"
                {
#line 242 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_38_38));
#line 242 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 242 "prog_io_sym_name.m"
                }
#line 242 "prog_io_sym_name.m"
                {
#line 242 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 242 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 242 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 242 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_37_37));
#line 242 "prog_io_sym_name.m"
                }
#line 244 "prog_io_sym_name.m"
                {
#line 244 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_17));
#line 244 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 244 "prog_io_sym_name.m"
                }
#line 244 "prog_io_sym_name.m"
                {
#line 244 "prog_io_sym_name.m"
                  MR_Word base;
#line 244 "prog_io_sym_name.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 244 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_10 = base;
#line 244 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_44_44));
#line 244 "prog_io_sym_name.m"
                }
#line 241 "prog_io_sym_name.m"
              }
#line 245 "prog_io_sym_name.m"
            else
#line 246 "prog_io_sym_name.m"
              {
#line 246 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__UnqualName_18;
#line 246 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__QualSymName_19;

#line 246 "prog_io_sym_name.m"
                {
#line 246 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__UnqualName_18 = mdbcomp__prim_data__unqualify_name_1_f_0(parse_tree__prog_io_sym_name__SymName_12);
                }
#line 247 "prog_io_sym_name.m"
                {
#line 247 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__QualSymName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__QualSymName_19, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__DefaultModuleName_6));
#line 247 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__QualSymName_19, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__UnqualName_18));
#line 247 "prog_io_sym_name.m"
                }
#line 248 "prog_io_sym_name.m"
                {
#line 248 "prog_io_sym_name.m"
                  MR_Word base;
#line 248 "prog_io_sym_name.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_10 = base;
#line 248 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__QualSymName_19));
#line 248 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Args_13));
#line 248 "prog_io_sym_name.m"
                }
#line 246 "prog_io_sym_name.m"
              }
#line 245 "prog_io_sym_name.m"
          }
#line 230 "prog_io_sym_name.m"
      }
#line 227 "prog_io_sym_name.m"
  }
#line 86 "prog_io_sym_name.m"
}

#line 70 "prog_io_sym_name.m"
MR_bool MR_CALL 
parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0(
#line 70 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_19,
#line 70 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Functor_5,
#line 70 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__FunctorArgs_6,
#line 70 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__SymName_7,
#line 70 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__Args_8)
#line 70 "prog_io_sym_name.m"
{
#line 195 "prog_io_sym_name.m"
  {
#line 195 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Functor_5)) == (MR_mktag((MR_Integer) 0)));
#line 195 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__FunctorName_9;
#line 204 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__ModuleTerm_10;
#line 204 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__NameArgsTerm_11;
#line 198 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_15_15;
#line 198 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_16_16;

#line 196 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 196 "prog_io_sym_name.m"
      {
#line 196 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__FunctorName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Functor_5, (MR_Integer) 0)));
#line 198 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = (strcmp(parse_tree__prog_io_sym_name__FunctorName_9, (MR_String) ".") == 0);
#line 198 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 198 "prog_io_sym_name.m"
          {
#line 199 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__FunctorArgs_6)) == (MR_mktag((MR_Integer) 1)));
#line 199 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 199 "prog_io_sym_name.m"
              {
#line 199 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__ModuleTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_6, (MR_Integer) 0)));
#line 199 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_6, (MR_Integer) 1)));
#line 199 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 199 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 199 "prog_io_sym_name.m"
                  {
#line 199 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__NameArgsTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_15_15, (MR_Integer) 0)));
#line 199 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_15_15, (MR_Integer) 1)));
#line 199 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 199 "prog_io_sym_name.m"
                  }
#line 199 "prog_io_sym_name.m"
              }
#line 198 "prog_io_sym_name.m"
          }
#line 204 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 201 "prog_io_sym_name.m"
          {
#line 201 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__Name_12;
#line 201 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Module_14;
#line 201 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_17_17;
#line 201 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_13_13;

#line 201 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__NameArgsTerm_11)) == (MR_mktag((MR_Integer) 0)));
#line 201 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 201 "prog_io_sym_name.m"
              {
#line 201 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_11, (MR_Integer) 0)));
#line 201 "prog_io_sym_name.m"
                *parse_tree__prog_io_sym_name__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_11, (MR_Integer) 1)));
#line 201 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_11, (MR_Integer) 2)));
#line 201 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 201 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 201 "prog_io_sym_name.m"
                  {
#line 201 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_17_17, (MR_Integer) 0)));
#line 202 "prog_io_sym_name.m"
                    {
#line 202 "prog_io_sym_name.m"
                      parse_tree__prog_io_sym_name__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_19, parse_tree__prog_io_sym_name__ModuleTerm_10, &parse_tree__prog_io_sym_name__Module_14);
                    }
#line 201 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 201 "prog_io_sym_name.m"
                      {
#line 203 "prog_io_sym_name.m"
                        {
#line 203 "prog_io_sym_name.m"
                          MR_Word base;
#line 203 "prog_io_sym_name.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 203 "prog_io_sym_name.m"
                          *parse_tree__prog_io_sym_name__SymName_7 = base;
#line 203 "prog_io_sym_name.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Module_14));
#line 203 "prog_io_sym_name.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Name_12));
#line 203 "prog_io_sym_name.m"
                        }
#line 203 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 201 "prog_io_sym_name.m"
                      }
#line 201 "prog_io_sym_name.m"
                  }
#line 201 "prog_io_sym_name.m"
              }
#line 201 "prog_io_sym_name.m"
          }
#line 204 "prog_io_sym_name.m"
        else
#line 205 "prog_io_sym_name.m"
          {
#line 205 "prog_io_sym_name.m"
            {
#line 205 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__SymName_7 = mdbcomp__prim_data__string_to_sym_name_sep_2_f_0(parse_tree__prog_io_sym_name__FunctorName_9, (MR_String) "__");
            }
#line 206 "prog_io_sym_name.m"
            *parse_tree__prog_io_sym_name__Args_8 = parse_tree__prog_io_sym_name__FunctorArgs_6;
#line 205 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 205 "prog_io_sym_name.m"
          }
#line 196 "prog_io_sym_name.m"
      }
#line 195 "prog_io_sym_name.m"
    return parse_tree__prog_io_sym_name__succeeded;
#line 195 "prog_io_sym_name.m"
  }
#line 70 "prog_io_sym_name.m"
}

#line 61 "prog_io_sym_name.m"
MR_bool MR_CALL 
parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(
#line 61 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_19,
#line 61 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_3,
#line 61 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__SymName_4)
#line 61 "prog_io_sym_name.m"
{
#line 209 "prog_io_sym_name.m"
  {
#line 209 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 209 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__Functor_5;
#line 209 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__FunctorArgs_6;
#line 209 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__FunctorName_8;
#line 210 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name___TermContext_7;
#line 219 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__ModuleTerm_9;
#line 219 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__NameArgsTerm_10;
#line 213 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_14_14;
#line 213 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_15_15;

#line 210 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 210 "prog_io_sym_name.m"
      {
#line 210 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__Functor_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 0)));
#line 210 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__FunctorArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 1)));
#line 210 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name___TermContext_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 2)));
#line 211 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Functor_5)) == (MR_mktag((MR_Integer) 0)));
#line 211 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 211 "prog_io_sym_name.m"
          {
#line 211 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__FunctorName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Functor_5, (MR_Integer) 0)));
#line 213 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (strcmp(parse_tree__prog_io_sym_name__FunctorName_8, (MR_String) ".") == 0);
#line 213 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 213 "prog_io_sym_name.m"
              {
#line 214 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__FunctorArgs_6)) == (MR_mktag((MR_Integer) 1)));
#line 214 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 214 "prog_io_sym_name.m"
                  {
#line 214 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__ModuleTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_6, (MR_Integer) 0)));
#line 214 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_6, (MR_Integer) 1)));
#line 214 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 214 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 214 "prog_io_sym_name.m"
                      {
#line 214 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__NameArgsTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_14_14, (MR_Integer) 0)));
#line 214 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_14_14, (MR_Integer) 1)));
#line 214 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 214 "prog_io_sym_name.m"
                      }
#line 214 "prog_io_sym_name.m"
                  }
#line 213 "prog_io_sym_name.m"
              }
#line 219 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 216 "prog_io_sym_name.m"
              {
#line 216 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__Name_11;
#line 216 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Module_13;
#line 216 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_16_16;
#line 216 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_17_17;
#line 216 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_12_12;

#line 216 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__NameArgsTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 216 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 216 "prog_io_sym_name.m"
                  {
#line 216 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_10, (MR_Integer) 0)));
#line 216 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_10, (MR_Integer) 1)));
#line 216 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_10, (MR_Integer) 2)));
#line 216 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 216 "prog_io_sym_name.m"
                      {
#line 216 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 216 "prog_io_sym_name.m"
                        if (parse_tree__prog_io_sym_name__succeeded)
#line 216 "prog_io_sym_name.m"
                          {
#line 216 "prog_io_sym_name.m"
                            parse_tree__prog_io_sym_name__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_16_16, (MR_Integer) 0)));
#line 217 "prog_io_sym_name.m"
                            {
#line 217 "prog_io_sym_name.m"
                              parse_tree__prog_io_sym_name__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_19, parse_tree__prog_io_sym_name__ModuleTerm_9, &parse_tree__prog_io_sym_name__Module_13);
                            }
#line 216 "prog_io_sym_name.m"
                            if (parse_tree__prog_io_sym_name__succeeded)
#line 216 "prog_io_sym_name.m"
                              {
#line 218 "prog_io_sym_name.m"
                                {
#line 218 "prog_io_sym_name.m"
                                  MR_Word base;
#line 218 "prog_io_sym_name.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "prog_io_sym_name.m"
                                  *parse_tree__prog_io_sym_name__SymName_4 = base;
#line 218 "prog_io_sym_name.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Module_13));
#line 218 "prog_io_sym_name.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Name_11));
#line 218 "prog_io_sym_name.m"
                                }
#line 218 "prog_io_sym_name.m"
                                parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 216 "prog_io_sym_name.m"
                              }
#line 216 "prog_io_sym_name.m"
                          }
#line 216 "prog_io_sym_name.m"
                      }
#line 216 "prog_io_sym_name.m"
                  }
#line 216 "prog_io_sym_name.m"
              }
#line 219 "prog_io_sym_name.m"
            else
#line 220 "prog_io_sym_name.m"
              {
#line 220 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__V_18_18;

#line 220 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__FunctorArgs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 220 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 220 "prog_io_sym_name.m"
                  {
#line 221 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_18_18 = (MR_String) "__";
#line 221 "prog_io_sym_name.m"
                    {
#line 221 "prog_io_sym_name.m"
                      *parse_tree__prog_io_sym_name__SymName_4 = mdbcomp__prim_data__string_to_sym_name_sep_2_f_0(parse_tree__prog_io_sym_name__FunctorName_8, parse_tree__prog_io_sym_name__V_18_18);
                    }
#line 221 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 220 "prog_io_sym_name.m"
                  }
#line 220 "prog_io_sym_name.m"
              }
#line 211 "prog_io_sym_name.m"
          }
#line 210 "prog_io_sym_name.m"
      }
#line 209 "prog_io_sym_name.m"
    return parse_tree__prog_io_sym_name__succeeded;
#line 209 "prog_io_sym_name.m"
  }
#line 61 "prog_io_sym_name.m"
}

#line 59 "prog_io_sym_name.m"
MR_bool MR_CALL 
parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(
#line 59 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_10,
#line 59 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_4,
#line 59 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__SymName_5,
#line 59 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__Args_6)
#line 59 "prog_io_sym_name.m"
{
#line 188 "prog_io_sym_name.m"
  {
#line 188 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_4)) == (MR_mktag((MR_Integer) 0)));
#line 188 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__Functor_7;
#line 188 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__FunctorArgs_8;
#line 188 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__FunctorName_15;
#line 189 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name___TermContext_9;
#line 204 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__ModuleTerm_16;
#line 204 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__NameArgsTerm_17;
#line 198 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_21_21;
#line 198 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_22_22;

#line 189 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 189 "prog_io_sym_name.m"
      {
#line 189 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__Functor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_4, (MR_Integer) 0)));
#line 189 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__FunctorArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_4, (MR_Integer) 1)));
#line 189 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name___TermContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_4, (MR_Integer) 2)));
#line 196 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Functor_7)) == (MR_mktag((MR_Integer) 0)));
#line 196 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 196 "prog_io_sym_name.m"
          {
#line 196 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__FunctorName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Functor_7, (MR_Integer) 0)));
#line 198 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (strcmp(parse_tree__prog_io_sym_name__FunctorName_15, (MR_String) ".") == 0);
#line 198 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 198 "prog_io_sym_name.m"
              {
#line 199 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__FunctorArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 199 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 199 "prog_io_sym_name.m"
                  {
#line 199 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__ModuleTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_8, (MR_Integer) 0)));
#line 199 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_8, (MR_Integer) 1)));
#line 199 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 199 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 199 "prog_io_sym_name.m"
                      {
#line 199 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__NameArgsTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_21_21, (MR_Integer) 0)));
#line 199 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_21_21, (MR_Integer) 1)));
#line 199 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 199 "prog_io_sym_name.m"
                      }
#line 199 "prog_io_sym_name.m"
                  }
#line 198 "prog_io_sym_name.m"
              }
#line 204 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 201 "prog_io_sym_name.m"
              {
#line 201 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__Name_18;
#line 201 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Module_20;
#line 201 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_23_23;
#line 201 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_19_19;

#line 201 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__NameArgsTerm_17)) == (MR_mktag((MR_Integer) 0)));
#line 201 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 201 "prog_io_sym_name.m"
                  {
#line 201 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_17, (MR_Integer) 0)));
#line 201 "prog_io_sym_name.m"
                    *parse_tree__prog_io_sym_name__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_17, (MR_Integer) 1)));
#line 201 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_17, (MR_Integer) 2)));
#line 201 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 201 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 201 "prog_io_sym_name.m"
                      {
#line 201 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__Name_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_23_23, (MR_Integer) 0)));
#line 202 "prog_io_sym_name.m"
                        {
#line 202 "prog_io_sym_name.m"
                          parse_tree__prog_io_sym_name__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_10, parse_tree__prog_io_sym_name__ModuleTerm_16, &parse_tree__prog_io_sym_name__Module_20);
                        }
#line 201 "prog_io_sym_name.m"
                        if (parse_tree__prog_io_sym_name__succeeded)
#line 201 "prog_io_sym_name.m"
                          {
#line 203 "prog_io_sym_name.m"
                            {
#line 203 "prog_io_sym_name.m"
                              MR_Word base;
#line 203 "prog_io_sym_name.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 203 "prog_io_sym_name.m"
                              *parse_tree__prog_io_sym_name__SymName_5 = base;
#line 203 "prog_io_sym_name.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Module_20));
#line 203 "prog_io_sym_name.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Name_18));
#line 203 "prog_io_sym_name.m"
                            }
#line 203 "prog_io_sym_name.m"
                            parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 201 "prog_io_sym_name.m"
                          }
#line 201 "prog_io_sym_name.m"
                      }
#line 201 "prog_io_sym_name.m"
                  }
#line 201 "prog_io_sym_name.m"
              }
#line 204 "prog_io_sym_name.m"
            else
#line 205 "prog_io_sym_name.m"
              {
#line 205 "prog_io_sym_name.m"
                {
#line 205 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__SymName_5 = mdbcomp__prim_data__string_to_sym_name_sep_2_f_0(parse_tree__prog_io_sym_name__FunctorName_15, (MR_String) "__");
                }
#line 206 "prog_io_sym_name.m"
                *parse_tree__prog_io_sym_name__Args_6 = parse_tree__prog_io_sym_name__FunctorArgs_8;
#line 205 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 205 "prog_io_sym_name.m"
              }
#line 196 "prog_io_sym_name.m"
          }
#line 189 "prog_io_sym_name.m"
      }
#line 188 "prog_io_sym_name.m"
    return parse_tree__prog_io_sym_name__succeeded;
#line 188 "prog_io_sym_name.m"
  }
#line 59 "prog_io_sym_name.m"
}

#line 57 "prog_io_sym_name.m"
void MR_CALL 
parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0(
#line 57 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_127,
#line 57 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_5,
#line 57 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__VarSet_6,
#line 57 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__ContextPieces_7,
#line 57 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_8)
#line 57 "prog_io_sym_name.m"
{
#line 172 "prog_io_sym_name.m"
  {
#line 172 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 172 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__TermContext_11;
#line 172 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__ModuleTerm_12;
#line 172 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__NameArgsTerm_13;
#line 139 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__Functor_9;
#line 139 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__FunctorArgs_10;
#line 139 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__V_27_27;
#line 139 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_28_28;
#line 139 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_29_29;

#line 139 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 139 "prog_io_sym_name.m"
      {
#line 139 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__Functor_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 0)));
#line 139 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__FunctorArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 1)));
#line 139 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__TermContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 2)));
#line 140 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Functor_9)) == (MR_mktag((MR_Integer) 0)));
#line 140 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 140 "prog_io_sym_name.m"
          {
#line 140 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Functor_9, (MR_Integer) 0)));
#line 140 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (strcmp(parse_tree__prog_io_sym_name__V_27_27, (MR_String) ".") == 0);
#line 139 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 139 "prog_io_sym_name.m"
              {
#line 141 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__FunctorArgs_10)) == (MR_mktag((MR_Integer) 1)));
#line 141 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 141 "prog_io_sym_name.m"
                  {
#line 141 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__ModuleTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_10, (MR_Integer) 0)));
#line 141 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_10, (MR_Integer) 1)));
#line 141 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 141 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 141 "prog_io_sym_name.m"
                      {
#line 141 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__NameArgsTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_28_28, (MR_Integer) 0)));
#line 141 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_28_28, (MR_Integer) 1)));
#line 141 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 141 "prog_io_sym_name.m"
                      }
#line 141 "prog_io_sym_name.m"
                  }
#line 139 "prog_io_sym_name.m"
              }
#line 140 "prog_io_sym_name.m"
          }
#line 139 "prog_io_sym_name.m"
      }
#line 172 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 161 "prog_io_sym_name.m"
      {
#line 161 "prog_io_sym_name.m"
        MR_String parse_tree__prog_io_sym_name__Name_14;
#line 161 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__Args_15;
#line 143 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_30_30;
#line 143 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_16_16;

#line 143 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__NameArgsTerm_13)) == (MR_mktag((MR_Integer) 0)));
#line 143 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 143 "prog_io_sym_name.m"
          {
#line 143 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_13, (MR_Integer) 0)));
#line 143 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_13, (MR_Integer) 1)));
#line 143 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_13, (MR_Integer) 2)));
#line 143 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 143 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 143 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_30_30, (MR_Integer) 0)));
#line 143 "prog_io_sym_name.m"
          }
#line 161 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 144 "prog_io_sym_name.m"
          {
#line 144 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__GenericVarSet_17;
#line 144 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__MaybeModule_18;

#line 144 "prog_io_sym_name.m"
            {
#line 144 "prog_io_sym_name.m"
              mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_sym_name__TypeInfo_for_T_127, parse_tree__prog_io_sym_name__VarSet_6, &parse_tree__prog_io_sym_name__GenericVarSet_17);
            }
#line 145 "prog_io_sym_name.m"
            {
#line 145 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__parse_symbol_name_3_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_127, parse_tree__prog_io_sym_name__GenericVarSet_17, parse_tree__prog_io_sym_name__ModuleTerm_12, &parse_tree__prog_io_sym_name__MaybeModule_18);
            }
#line 149 "prog_io_sym_name.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_sym_name__MaybeModule_18)) == (MR_mktag((MR_Integer) 0))))
#line 150 "prog_io_sym_name.m"
              {
#line 150 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__ModuleTermStr_21;
#line 150 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Pieces_22;
#line 150 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Spec_23;
#line 150 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_31_31;
#line 150 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_33_33;
#line 150 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_36_36;
#line 150 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_39_39;
#line 150 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_40_40;
#line 150 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_49_49;
#line 150 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_50_50;
#line 150 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_51_51;
#line 150 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_52_52;
#line 150 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_55_55;

#line 151 "prog_io_sym_name.m"
                {
#line 151 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__ModuleTermStr_21 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_127, parse_tree__prog_io_sym_name__GenericVarSet_17, parse_tree__prog_io_sym_name__ModuleTerm_12);
                }
#line 156 "prog_io_sym_name.m"
                {
#line 156 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 156 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 156 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__ModuleTermStr_21));
#line 156 "prog_io_sym_name.m"
                }
#line 155 "prog_io_sym_name.m"
                {
#line 155 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_40_40));
#line 155 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[2])));
#line 155 "prog_io_sym_name.m"
                }
#line 154 "prog_io_sym_name.m"
                {
#line 154 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[20])));
#line 154 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_36_36, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_39_39));
#line 154 "prog_io_sym_name.m"
                }
#line 153 "prog_io_sym_name.m"
                {
#line 153 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[19])));
#line 153 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_36_36));
#line 153 "prog_io_sym_name.m"
                }
#line 153 "prog_io_sym_name.m"
                {
#line 153 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_31_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 153 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_31_31, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_33_33));
#line 153 "prog_io_sym_name.m"
                }
#line 153 "prog_io_sym_name.m"
                {
#line 153 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_sym_name__ContextPieces_7, parse_tree__prog_io_sym_name__V_31_31);
                }
#line 158 "prog_io_sym_name.m"
                {
#line 158 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 158 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Pieces_22));
#line 158 "prog_io_sym_name.m"
                }
#line 158 "prog_io_sym_name.m"
                {
#line 158 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 158 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_52_52));
#line 158 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 158 "prog_io_sym_name.m"
                }
#line 158 "prog_io_sym_name.m"
                {
#line 158 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 158 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__TermContext_11));
#line 158 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_50_50, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_51_51));
#line 158 "prog_io_sym_name.m"
                }
#line 157 "prog_io_sym_name.m"
                {
#line 157 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_50_50));
#line 157 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 157 "prog_io_sym_name.m"
                }
#line 157 "prog_io_sym_name.m"
                {
#line 157 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 157 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 157 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 157 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_23, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_49_49));
#line 157 "prog_io_sym_name.m"
                }
#line 159 "prog_io_sym_name.m"
                {
#line 159 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 159 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_23));
#line 159 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 159 "prog_io_sym_name.m"
                }
#line 159 "prog_io_sym_name.m"
                {
#line 159 "prog_io_sym_name.m"
                  MR_Word base;
#line 159 "prog_io_sym_name.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 159 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_8 = base;
#line 159 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_55_55));
#line 159 "prog_io_sym_name.m"
                }
#line 150 "prog_io_sym_name.m"
              }
#line 149 "prog_io_sym_name.m"
            else
#line 147 "prog_io_sym_name.m"
              {
#line 147 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Module_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__MaybeModule_18, (MR_Integer) 0)));
#line 147 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_57_57;

#line 148 "prog_io_sym_name.m"
                {
#line 148 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Module_19));
#line 148 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Name_14));
#line 148 "prog_io_sym_name.m"
                }
#line 148 "prog_io_sym_name.m"
                {
#line 148 "prog_io_sym_name.m"
                  MR_Word base;
#line 148 "prog_io_sym_name.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_8 = base;
#line 148 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_57_57));
#line 148 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Args_15));
#line 148 "prog_io_sym_name.m"
                }
#line 147 "prog_io_sym_name.m"
              }
#line 144 "prog_io_sym_name.m"
          }
#line 161 "prog_io_sym_name.m"
        else
#line 162 "prog_io_sym_name.m"
          {
#line 162 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__TermStr_24;
#line 162 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_58_58;
#line 162 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_60_60;
#line 162 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_63_63;
#line 162 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_66_66;
#line 162 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_67_67;
#line 162 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_76_76;
#line 162 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_77_77;
#line 162 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_78_78;
#line 162 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_79_79;
#line 162 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_82_82;
#line 162 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__GenericVarSet_110;
#line 162 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Pieces_111;
#line 162 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Spec_112;

#line 162 "prog_io_sym_name.m"
            {
#line 162 "prog_io_sym_name.m"
              mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_sym_name__TypeInfo_for_T_127, parse_tree__prog_io_sym_name__VarSet_6, &parse_tree__prog_io_sym_name__GenericVarSet_110);
            }
#line 163 "prog_io_sym_name.m"
            {
#line 163 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__TermStr_24 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_127, parse_tree__prog_io_sym_name__GenericVarSet_110, parse_tree__prog_io_sym_name__Term_5);
            }
#line 167 "prog_io_sym_name.m"
            {
#line 167 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 167 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_67_67, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__TermStr_24));
#line 167 "prog_io_sym_name.m"
            }
#line 166 "prog_io_sym_name.m"
            {
#line 166 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_67_67));
#line 166 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[2])));
#line 166 "prog_io_sym_name.m"
            }
#line 165 "prog_io_sym_name.m"
            {
#line 165 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[20])));
#line 165 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_66_66));
#line 165 "prog_io_sym_name.m"
            }
#line 164 "prog_io_sym_name.m"
            {
#line 164 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[21])));
#line 164 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_63_63));
#line 164 "prog_io_sym_name.m"
            }
#line 164 "prog_io_sym_name.m"
            {
#line 164 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 164 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_60_60));
#line 164 "prog_io_sym_name.m"
            }
#line 164 "prog_io_sym_name.m"
            {
#line 164 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Pieces_111 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_sym_name__ContextPieces_7, parse_tree__prog_io_sym_name__V_58_58);
            }
#line 169 "prog_io_sym_name.m"
            {
#line 169 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 169 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Pieces_111));
#line 169 "prog_io_sym_name.m"
            }
#line 169 "prog_io_sym_name.m"
            {
#line 169 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 169 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_79_79));
#line 169 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 169 "prog_io_sym_name.m"
            }
#line 169 "prog_io_sym_name.m"
            {
#line 169 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 169 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__TermContext_11));
#line 169 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_77_77, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_78_78));
#line 169 "prog_io_sym_name.m"
            }
#line 168 "prog_io_sym_name.m"
            {
#line 168 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 168 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_77_77));
#line 168 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 168 "prog_io_sym_name.m"
            }
#line 168 "prog_io_sym_name.m"
            {
#line 168 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Spec_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 168 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 168 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 168 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_112, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_76_76));
#line 168 "prog_io_sym_name.m"
            }
#line 170 "prog_io_sym_name.m"
            {
#line 170 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_112));
#line 170 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 170 "prog_io_sym_name.m"
            }
#line 170 "prog_io_sym_name.m"
            {
#line 170 "prog_io_sym_name.m"
              MR_Word base;
#line 170 "prog_io_sym_name.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 170 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_8 = base;
#line 170 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_82_82));
#line 170 "prog_io_sym_name.m"
            }
#line 162 "prog_io_sym_name.m"
          }
#line 161 "prog_io_sym_name.m"
      }
#line 172 "prog_io_sym_name.m"
    else
#line 173 "prog_io_sym_name.m"
      {
#line 173 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__GenericVarSet_123;
#line 177 "prog_io_sym_name.m"
        MR_String parse_tree__prog_io_sym_name__Name_116;
#line 177 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__Args_117;
#line 174 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_84_84;
#line 174 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_25_25;

#line 173 "prog_io_sym_name.m"
        {
#line 173 "prog_io_sym_name.m"
          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_sym_name__TypeInfo_for_T_127, parse_tree__prog_io_sym_name__VarSet_6, &parse_tree__prog_io_sym_name__GenericVarSet_123);
        }
#line 174 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 174 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 174 "prog_io_sym_name.m"
          {
#line 174 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 0)));
#line 174 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__Args_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 1)));
#line 174 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 2)));
#line 174 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_84_84)) == (MR_mktag((MR_Integer) 0)));
#line 174 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 174 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Name_116 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_84_84, (MR_Integer) 0)));
#line 174 "prog_io_sym_name.m"
          }
#line 177 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 175 "prog_io_sym_name.m"
          {
#line 175 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__SymName_26;

#line 175 "prog_io_sym_name.m"
            {
#line 175 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__SymName_26 = mdbcomp__prim_data__string_to_sym_name_sep_2_f_0(parse_tree__prog_io_sym_name__Name_116, (MR_String) "__");
            }
#line 176 "prog_io_sym_name.m"
            {
#line 176 "prog_io_sym_name.m"
              MR_Word base;
#line 176 "prog_io_sym_name.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_8 = base;
#line 176 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__SymName_26));
#line 176 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Args_117));
#line 176 "prog_io_sym_name.m"
            }
#line 175 "prog_io_sym_name.m"
          }
#line 177 "prog_io_sym_name.m"
        else
#line 178 "prog_io_sym_name.m"
          {
#line 178 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_86_86;
#line 178 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_88_88;
#line 178 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_91_91;
#line 178 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_92_92;
#line 178 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_101_101;
#line 178 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_102_102;
#line 178 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_103_103;
#line 178 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_104_104;
#line 178 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_105_105;
#line 178 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_108_108;
#line 178 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Pieces_113;
#line 178 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Spec_114;
#line 178 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__TermStr_115;

#line 178 "prog_io_sym_name.m"
            {
#line 178 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__TermStr_115 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_127, parse_tree__prog_io_sym_name__GenericVarSet_123, parse_tree__prog_io_sym_name__Term_5);
            }
#line 181 "prog_io_sym_name.m"
            {
#line 181 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 181 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_92_92, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__TermStr_115));
#line 181 "prog_io_sym_name.m"
            }
#line 180 "prog_io_sym_name.m"
            {
#line 180 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_92_92));
#line 180 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[2])));
#line 180 "prog_io_sym_name.m"
            }
#line 179 "prog_io_sym_name.m"
            {
#line 179 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_88_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[22])));
#line 179 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_88_88, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_91_91));
#line 179 "prog_io_sym_name.m"
            }
#line 179 "prog_io_sym_name.m"
            {
#line 179 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_86_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 179 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_86_86, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_88_88));
#line 179 "prog_io_sym_name.m"
            }
#line 179 "prog_io_sym_name.m"
            {
#line 179 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Pieces_113 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_sym_name__ContextPieces_7, parse_tree__prog_io_sym_name__V_86_86);
            }
#line 183 "prog_io_sym_name.m"
            {
#line 183 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_103_103 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_127, parse_tree__prog_io_sym_name__Term_5);
            }
#line 183 "prog_io_sym_name.m"
            {
#line 183 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 183 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_105_105, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Pieces_113));
#line 183 "prog_io_sym_name.m"
            }
#line 183 "prog_io_sym_name.m"
            {
#line 183 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 183 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_104_104, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_105_105));
#line 183 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "prog_io_sym_name.m"
            }
#line 183 "prog_io_sym_name.m"
            {
#line 183 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 183 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_103_103));
#line 183 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_102_102, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_104_104));
#line 183 "prog_io_sym_name.m"
            }
#line 182 "prog_io_sym_name.m"
            {
#line 182 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_102_102));
#line 182 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 182 "prog_io_sym_name.m"
            }
#line 182 "prog_io_sym_name.m"
            {
#line 182 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Spec_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 182 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_114, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 182 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 182 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_114, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_101_101));
#line 182 "prog_io_sym_name.m"
            }
#line 184 "prog_io_sym_name.m"
            {
#line 184 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 184 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_108_108, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_114));
#line 184 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 184 "prog_io_sym_name.m"
            }
#line 184 "prog_io_sym_name.m"
            {
#line 184 "prog_io_sym_name.m"
              MR_Word base;
#line 184 "prog_io_sym_name.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 184 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_8 = base;
#line 184 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_108_108));
#line 184 "prog_io_sym_name.m"
            }
#line 178 "prog_io_sym_name.m"
          }
#line 173 "prog_io_sym_name.m"
      }
#line 172 "prog_io_sym_name.m"
  }
#line 57 "prog_io_sym_name.m"
}

void mercury__parse_tree__prog_io_sym_name__init(void)
{
}

void mercury__parse_tree__prog_io_sym_name__init_type_tables(void)
{
}

void mercury__parse_tree__prog_io_sym_name__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_sym_name. */
