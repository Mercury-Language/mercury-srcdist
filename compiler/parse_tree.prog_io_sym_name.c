/*
** Automatically generated from `prog_io_sym_name.m'
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


/* :- module parse_tree.prog_io_sym_name. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_sym_name__init
ENDINIT
*/

#include "parse_tree.prog_io_sym_name.mih"


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
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"





static /* final */ const MR_Box parse_tree__prog_io_sym_name_scalar_common_1[31][2];

static /* final */ const MR_Box parse_tree__prog_io_sym_name_scalar_common_2[4][1];




static /* final */ const MR_Box parse_tree__prog_io_sym_name_scalar_common_1[31][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[0])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[0])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not match preceding"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module qualifier in definition"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in qualified symbol name."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[0])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be a non-negative integer."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[0])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: arity in symbol name specifier"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be an integer."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[0])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module name expected before \'.\'"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in qualified symbol name, not"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: identifier expected after \'.\'"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: atom expected at"))
  },
  /* row 24 */
  {
    ((MR_Box) (&parse_tree__prog_io_sym_name_scalar_common_2[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module name identifier"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "expected before"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: identifier expected after"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: symbol name expected at"))
  },
  /* row 29 */
  {
    ((MR_Box) (&parse_tree__prog_io_sym_name_scalar_common_2[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) (&parse_tree__prog_io_sym_name_scalar_common_2[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_sym_name_scalar_common_2[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[10])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[16])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[19])))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 129 "prog_io_sym_name.m"
MR_Word MR_CALL 
parse_tree__prog_io_sym_name__root_module_name_0_f_0(void)
#line 129 "prog_io_sym_name.m"
{
#line 432 "prog_io_sym_name.m"
  {
#line 432 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded;

#line 432 "prog_io_sym_name.m"
    return (MR_Word) &parse_tree__prog_io_sym_name_scalar_common_2[0];
#line 432 "prog_io_sym_name.m"
  }
#line 129 "prog_io_sym_name.m"
}

#line 122 "prog_io_sym_name.m"
void MR_CALL 
parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_specifier_4_p_0(
#line 122 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__DefaultModule_5,
#line 122 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__VarSet_6,
#line 122 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_7,
#line 122 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_8)
#line 122 "prog_io_sym_name.m"
{
#line 392 "prog_io_sym_name.m"
  {
#line 392 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 392 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__NameTerm_9;
#line 392 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__ArityTerm_10;
#line 392 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_21_21;
#line 392 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__V_22_22;
#line 392 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_23_23;
#line 392 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_24_24;
#line 392 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_25_25;
#line 392 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_11_11;

#line 392 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 392 "prog_io_sym_name.m"
      {
#line 392 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_7, (MR_Integer) 0)));
#line 392 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_7, (MR_Integer) 1)));
#line 392 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_7, (MR_Integer) 2)));
#line 392 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 392 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 392 "prog_io_sym_name.m"
          {
#line 392 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_21_21, (MR_Integer) 0)));
#line 392 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (strcmp(parse_tree__prog_io_sym_name__V_22_22, (MR_String) "/") == 0);
#line 392 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 392 "prog_io_sym_name.m"
              {
#line 392 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 392 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 392 "prog_io_sym_name.m"
                  {
#line 392 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__NameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_23_23, (MR_Integer) 0)));
#line 392 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_23_23, (MR_Integer) 1)));
#line 392 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 392 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 392 "prog_io_sym_name.m"
                      {
#line 392 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__ArityTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_24_24, (MR_Integer) 0)));
#line 392 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_24_24, (MR_Integer) 1)));
#line 392 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 392 "prog_io_sym_name.m"
                      }
#line 392 "prog_io_sym_name.m"
                  }
#line 392 "prog_io_sym_name.m"
              }
#line 392 "prog_io_sym_name.m"
          }
#line 392 "prog_io_sym_name.m"
      }
#line 392 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 393 "prog_io_sym_name.m"
      {
#line 393 "prog_io_sym_name.m"
        MR_Integer parse_tree__prog_io_sym_name__Arity_12;
#line 393 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_26_26;
#line 393 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_27_27;
#line 393 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_13_13;

#line 393 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__ArityTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 393 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 393 "prog_io_sym_name.m"
          {
#line 393 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__ArityTerm_10, (MR_Integer) 0)));
#line 393 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__ArityTerm_10, (MR_Integer) 1)));
#line 393 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__ArityTerm_10, (MR_Integer) 2)));
#line 393 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 393 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 393 "prog_io_sym_name.m"
              {
#line 393 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 393 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 393 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_26_26, (MR_Integer) 0)));
#line 393 "prog_io_sym_name.m"
              }
#line 393 "prog_io_sym_name.m"
          }
#line 393 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 394 "prog_io_sym_name.m"
          {
#line 394 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__Arity_12 >= (MR_Integer) 0);
#line 394 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 396 "prog_io_sym_name.m"
              {
#line 396 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__MaybeName_14;

#line 395 "prog_io_sym_name.m"
                {
#line 395 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__prog_io_sym_name__DefaultModule_5, parse_tree__prog_io_sym_name__VarSet_6, parse_tree__prog_io_sym_name__NameTerm_9, &parse_tree__prog_io_sym_name__MaybeName_14);
                }
#line 400 "prog_io_sym_name.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_sym_name__MaybeName_14)) == (MR_mktag((MR_Integer) 0))))
#line 399 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_8 = (MR_Word) parse_tree__prog_io_sym_name__MaybeName_14;
#line 400 "prog_io_sym_name.m"
                else
#line 401 "prog_io_sym_name.m"
                  {
#line 401 "prog_io_sym_name.m"
                    MR_Word parse_tree__prog_io_sym_name__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__MaybeName_14, (MR_Integer) 0)));
#line 401 "prog_io_sym_name.m"
                    MR_Word parse_tree__prog_io_sym_name__V_29_29;

#line 402 "prog_io_sym_name.m"
                    {
#line 402 "prog_io_sym_name.m"
                      parse_tree__prog_io_sym_name__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "prog_io_sym_name.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Name_16));
#line 402 "prog_io_sym_name.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Arity_12));
#line 402 "prog_io_sym_name.m"
                    }
#line 402 "prog_io_sym_name.m"
                    {
#line 402 "prog_io_sym_name.m"
                      MR_Word base;
#line 402 "prog_io_sym_name.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 402 "prog_io_sym_name.m"
                      *parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_8 = base;
#line 402 "prog_io_sym_name.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_29_29));
#line 402 "prog_io_sym_name.m"
                    }
#line 401 "prog_io_sym_name.m"
                  }
#line 396 "prog_io_sym_name.m"
              }
#line 394 "prog_io_sym_name.m"
            else
#line 406 "prog_io_sym_name.m"
              {
#line 406 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Spec_18;
#line 406 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_40_40;
#line 406 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_41_41;
#line 406 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_42_42;
#line 406 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_47_47;

#line 408 "prog_io_sym_name.m"
                {
#line 408 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_sym_name__Term_7);
                }
#line 408 "prog_io_sym_name.m"
                {
#line 408 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 408 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_42_42));
#line 408 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[29])));
#line 408 "prog_io_sym_name.m"
                }
#line 408 "prog_io_sym_name.m"
                {
#line 408 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_41_41));
#line 408 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "prog_io_sym_name.m"
                }
#line 407 "prog_io_sym_name.m"
                {
#line 407 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 407 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 407 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 407 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_18, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_40_40));
#line 407 "prog_io_sym_name.m"
                }
#line 409 "prog_io_sym_name.m"
                {
#line 409 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_18));
#line 409 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 409 "prog_io_sym_name.m"
                }
#line 409 "prog_io_sym_name.m"
                {
#line 409 "prog_io_sym_name.m"
                  MR_Word base;
#line 409 "prog_io_sym_name.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 409 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_8 = base;
#line 409 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_47_47));
#line 409 "prog_io_sym_name.m"
                }
#line 406 "prog_io_sym_name.m"
              }
#line 394 "prog_io_sym_name.m"
          }
#line 393 "prog_io_sym_name.m"
        else
#line 413 "prog_io_sym_name.m"
          {
#line 413 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_59_59;
#line 413 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_60_60;
#line 413 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_61_61;
#line 413 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_66_66;
#line 413 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Spec_70;

#line 415 "prog_io_sym_name.m"
            {
#line 415 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_61_61 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_sym_name__Term_7);
            }
#line 415 "prog_io_sym_name.m"
            {
#line 415 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 415 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_61_61));
#line 415 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[30])));
#line 415 "prog_io_sym_name.m"
            }
#line 415 "prog_io_sym_name.m"
            {
#line 415 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_60_60));
#line 415 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "prog_io_sym_name.m"
            }
#line 414 "prog_io_sym_name.m"
            {
#line 414 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Spec_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 414 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 414 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_70, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_59_59));
#line 414 "prog_io_sym_name.m"
            }
#line 416 "prog_io_sym_name.m"
            {
#line 416 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_70));
#line 416 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 416 "prog_io_sym_name.m"
            }
#line 416 "prog_io_sym_name.m"
            {
#line 416 "prog_io_sym_name.m"
              MR_Word base;
#line 416 "prog_io_sym_name.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 416 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_8 = base;
#line 416 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_66_66));
#line 416 "prog_io_sym_name.m"
            }
#line 413 "prog_io_sym_name.m"
          }
#line 393 "prog_io_sym_name.m"
      }
#line 392 "prog_io_sym_name.m"
    else
#line 420 "prog_io_sym_name.m"
      {
#line 420 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__MaybeSymbolName_19;

#line 419 "prog_io_sym_name.m"
        {
#line 419 "prog_io_sym_name.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__prog_io_sym_name__DefaultModule_5, parse_tree__prog_io_sym_name__VarSet_6, parse_tree__prog_io_sym_name__Term_7, &parse_tree__prog_io_sym_name__MaybeSymbolName_19);
        }
#line 424 "prog_io_sym_name.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_sym_name__MaybeSymbolName_19)) == (MR_mktag((MR_Integer) 0))))
#line 423 "prog_io_sym_name.m"
          *parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_8 = (MR_Word) parse_tree__prog_io_sym_name__MaybeSymbolName_19;
#line 424 "prog_io_sym_name.m"
        else
#line 425 "prog_io_sym_name.m"
          {
#line 425 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__SymbolName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__MaybeSymbolName_19, (MR_Integer) 0)));
#line 425 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_68_68;

#line 426 "prog_io_sym_name.m"
            {
#line 426 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 426 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__SymbolName_20));
#line 426 "prog_io_sym_name.m"
            }
#line 426 "prog_io_sym_name.m"
            {
#line 426 "prog_io_sym_name.m"
              MR_Word base;
#line 426 "prog_io_sym_name.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 426 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_8 = base;
#line 426 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_68_68));
#line 426 "prog_io_sym_name.m"
            }
#line 425 "prog_io_sym_name.m"
          }
#line 420 "prog_io_sym_name.m"
      }
#line 392 "prog_io_sym_name.m"
  }
#line 122 "prog_io_sym_name.m"
}

#line 119 "prog_io_sym_name.m"
void MR_CALL 
parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(
#line 119 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__DefaultModuleName_5,
#line 119 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__VarSet_6,
#line 119 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_7,
#line 119 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__MaybeSymName_8)
#line 119 "prog_io_sym_name.m"
{
#line 357 "prog_io_sym_name.m"
  {
#line 357 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded;
#line 357 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__TypeCtorInfo_43_43 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 357 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__MaybeSymName0_9;

#line 358 "prog_io_sym_name.m"
    {
#line 358 "prog_io_sym_name.m"
      parse_tree__prog_io_sym_name__parse_symbol_name_3_p_0(parse_tree__prog_io_sym_name__TypeCtorInfo_43_43, parse_tree__prog_io_sym_name__VarSet_6, parse_tree__prog_io_sym_name__Term_7, &parse_tree__prog_io_sym_name__MaybeSymName0_9);
    }
#line 379 "prog_io_sym_name.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_sym_name__MaybeSymName0_9)) == (MR_mktag((MR_Integer) 0))))
#line 381 "prog_io_sym_name.m"
      *parse_tree__prog_io_sym_name__MaybeSymName_8 = parse_tree__prog_io_sym_name__MaybeSymName0_9;
#line 379 "prog_io_sym_name.m"
    else
#line 360 "prog_io_sym_name.m"
      {
#line 360 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__SymName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__MaybeSymName0_9, (MR_Integer) 0)));

#line 362 "prog_io_sym_name.m"
        {
#line 362 "prog_io_sym_name.m"
          parse_tree__prog_io_sym_name__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_sym_name__DefaultModuleName_5, (MR_Word) &parse_tree__prog_io_sym_name_scalar_common_2[0]);
        }
#line 361 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 364 "prog_io_sym_name.m"
          *parse_tree__prog_io_sym_name__MaybeSymName_8 = parse_tree__prog_io_sym_name__MaybeSymName0_9;
#line 361 "prog_io_sym_name.m"
        else
#line 365 "prog_io_sym_name.m"
          {
#line 366 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__ModuleName_11;
#line 366 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__V_12_12;

#line 366 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__SymName_10)) == (MR_mktag((MR_Integer) 1)));
#line 366 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 366 "prog_io_sym_name.m"
              {
#line 366 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName_10, (MR_Integer) 0)));
#line 366 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName_10, (MR_Integer) 1)));
#line 367 "prog_io_sym_name.m"
                {
#line 367 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__prog_io_sym_name__ModuleName_11, parse_tree__prog_io_sym_name__DefaultModuleName_5);
                }
#line 367 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = !(parse_tree__prog_io_sym_name__succeeded);
#line 366 "prog_io_sym_name.m"
              }
#line 365 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 371 "prog_io_sym_name.m"
              {
#line 371 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Spec_14;
#line 371 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_33_33;
#line 371 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_34_34;
#line 371 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_35_35;
#line 371 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_40_40;

#line 373 "prog_io_sym_name.m"
                {
#line 373 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_35_35 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_sym_name__TypeCtorInfo_43_43, parse_tree__prog_io_sym_name__Term_7);
                }
#line 373 "prog_io_sym_name.m"
                {
#line 373 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 373 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_35_35));
#line 373 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[24])));
#line 373 "prog_io_sym_name.m"
                }
#line 373 "prog_io_sym_name.m"
                {
#line 373 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_34_34));
#line 373 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 373 "prog_io_sym_name.m"
                }
#line 372 "prog_io_sym_name.m"
                {
#line 372 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 372 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 372 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 372 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_14, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_33_33));
#line 372 "prog_io_sym_name.m"
                }
#line 374 "prog_io_sym_name.m"
                {
#line 374 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 374 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_14));
#line 374 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 374 "prog_io_sym_name.m"
                }
#line 374 "prog_io_sym_name.m"
                {
#line 374 "prog_io_sym_name.m"
                  MR_Word base;
#line 374 "prog_io_sym_name.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 374 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymName_8 = base;
#line 374 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_40_40));
#line 374 "prog_io_sym_name.m"
                }
#line 371 "prog_io_sym_name.m"
              }
#line 365 "prog_io_sym_name.m"
            else
#line 376 "prog_io_sym_name.m"
              {
#line 376 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__UnqualName_15;
#line 376 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_42_42;

#line 376 "prog_io_sym_name.m"
                {
#line 376 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__UnqualName_15 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_sym_name__SymName_10);
                }
#line 377 "prog_io_sym_name.m"
                {
#line 377 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__DefaultModuleName_5));
#line 377 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__UnqualName_15));
#line 377 "prog_io_sym_name.m"
                }
#line 377 "prog_io_sym_name.m"
                {
#line 377 "prog_io_sym_name.m"
                  MR_Word base;
#line 377 "prog_io_sym_name.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 377 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymName_8 = base;
#line 377 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_42_42));
#line 377 "prog_io_sym_name.m"
                }
#line 376 "prog_io_sym_name.m"
              }
#line 365 "prog_io_sym_name.m"
          }
#line 360 "prog_io_sym_name.m"
      }
#line 357 "prog_io_sym_name.m"
  }
#line 119 "prog_io_sym_name.m"
}

#line 117 "prog_io_sym_name.m"
MR_bool MR_CALL 
parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(
#line 117 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_23,
#line 117 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_3,
#line 117 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__SymName_4)
#line 117 "prog_io_sym_name.m"
{
#line 339 "prog_io_sym_name.m"
  {
#line 339 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 339 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__ModuleTerm_6;
#line 339 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__NameTerm_7;
#line 341 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__FunctorName_5;
#line 341 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_13_13;
#line 341 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_14_14;
#line 341 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_15_15;
#line 341 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_16_16;
#line 340 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name___TermContext_8;

#line 340 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 340 "prog_io_sym_name.m"
      {
#line 340 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 0)));
#line 340 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 1)));
#line 340 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name___TermContext_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 2)));
#line 340 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 340 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 340 "prog_io_sym_name.m"
          {
#line 340 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__FunctorName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_13_13, (MR_Integer) 0)));
#line 343 "prog_io_sym_name.m"
            if ((strcmp(parse_tree__prog_io_sym_name__FunctorName_5, (MR_String) ".") == 0))
#line 343 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 343 "prog_io_sym_name.m"
            else
#line 343 "prog_io_sym_name.m"
            if ((strcmp(parse_tree__prog_io_sym_name__FunctorName_5, (MR_String) ":") == 0))
#line 342 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 343 "prog_io_sym_name.m"
            else
#line 343 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__succeeded = MR_FALSE;
#line 341 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 341 "prog_io_sym_name.m"
              {
#line 340 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 340 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 340 "prog_io_sym_name.m"
                  {
#line 340 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__ModuleTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_14_14, (MR_Integer) 0)));
#line 340 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_14_14, (MR_Integer) 1)));
#line 340 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 340 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 340 "prog_io_sym_name.m"
                      {
#line 340 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__NameTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_15_15, (MR_Integer) 0)));
#line 340 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_15_15, (MR_Integer) 1)));
#line 340 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "prog_io_sym_name.m"
                      }
#line 340 "prog_io_sym_name.m"
                  }
#line 341 "prog_io_sym_name.m"
              }
#line 340 "prog_io_sym_name.m"
          }
#line 340 "prog_io_sym_name.m"
      }
#line 339 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 346 "prog_io_sym_name.m"
      {
#line 346 "prog_io_sym_name.m"
        MR_String parse_tree__prog_io_sym_name__Name_9;
#line 346 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__Module_11;
#line 346 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_17_17;
#line 346 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_18_18;
#line 346 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_10_10;

#line 346 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__NameTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 346 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 346 "prog_io_sym_name.m"
          {
#line 346 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameTerm_7, (MR_Integer) 0)));
#line 346 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameTerm_7, (MR_Integer) 1)));
#line 346 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameTerm_7, (MR_Integer) 2)));
#line 346 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 346 "prog_io_sym_name.m"
              {
#line 346 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 346 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 346 "prog_io_sym_name.m"
                  {
#line 346 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_17_17, (MR_Integer) 0)));
#line 347 "prog_io_sym_name.m"
                    {
#line 347 "prog_io_sym_name.m"
                      parse_tree__prog_io_sym_name__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_23, parse_tree__prog_io_sym_name__ModuleTerm_6, &parse_tree__prog_io_sym_name__Module_11);
                    }
#line 346 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 346 "prog_io_sym_name.m"
                      {
#line 348 "prog_io_sym_name.m"
                        {
#line 348 "prog_io_sym_name.m"
                          MR_Word base;
#line 348 "prog_io_sym_name.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "prog_io_sym_name.m"
                          *parse_tree__prog_io_sym_name__SymName_4 = base;
#line 348 "prog_io_sym_name.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Module_11));
#line 348 "prog_io_sym_name.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Name_9));
#line 348 "prog_io_sym_name.m"
                        }
#line 348 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 346 "prog_io_sym_name.m"
                      }
#line 346 "prog_io_sym_name.m"
                  }
#line 346 "prog_io_sym_name.m"
              }
#line 346 "prog_io_sym_name.m"
          }
#line 346 "prog_io_sym_name.m"
      }
#line 339 "prog_io_sym_name.m"
    else
#line 350 "prog_io_sym_name.m"
      {
#line 350 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_19_19;
#line 350 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_20_20;
#line 350 "prog_io_sym_name.m"
        MR_String parse_tree__prog_io_sym_name__V_21_21;
#line 350 "prog_io_sym_name.m"
        MR_String parse_tree__prog_io_sym_name__Name_22;
#line 350 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_12_12;

#line 350 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 350 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 350 "prog_io_sym_name.m"
          {
#line 350 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 0)));
#line 350 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 1)));
#line 350 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 2)));
#line 350 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 350 "prog_io_sym_name.m"
              {
#line 350 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 350 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 350 "prog_io_sym_name.m"
                  {
#line 350 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__Name_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_19_19, (MR_Integer) 0)));
#line 351 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_21_21 = (MR_String) "__";
#line 351 "prog_io_sym_name.m"
                    {
#line 351 "prog_io_sym_name.m"
                      *parse_tree__prog_io_sym_name__SymName_4 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(parse_tree__prog_io_sym_name__Name_22, parse_tree__prog_io_sym_name__V_21_21);
                    }
#line 351 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 350 "prog_io_sym_name.m"
                  }
#line 350 "prog_io_sym_name.m"
              }
#line 350 "prog_io_sym_name.m"
          }
#line 350 "prog_io_sym_name.m"
      }
#line 339 "prog_io_sym_name.m"
    return parse_tree__prog_io_sym_name__succeeded;
#line 339 "prog_io_sym_name.m"
  }
#line 117 "prog_io_sym_name.m"
}

#line 115 "prog_io_sym_name.m"
void MR_CALL 
parse_tree__prog_io_sym_name__parse_symbol_name_3_p_0(
#line 115 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_102,
#line 115 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__VarSet_4,
#line 115 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_5,
#line 115 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__MaybeSymName_6)
#line 115 "prog_io_sym_name.m"
{
#line 294 "prog_io_sym_name.m"
  {
#line 294 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 294 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__FunctorName_7;
#line 294 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__ModuleTerm_8;
#line 294 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__NameTerm_9;
#line 294 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__TermContext_10;
#line 296 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_21_21;
#line 296 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_22_22;
#line 296 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_23_23;
#line 296 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_24_24;

#line 295 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 295 "prog_io_sym_name.m"
      {
#line 295 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 0)));
#line 295 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 1)));
#line 295 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__TermContext_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 2)));
#line 295 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 295 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 295 "prog_io_sym_name.m"
          {
#line 295 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__FunctorName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_21_21, (MR_Integer) 0)));
#line 298 "prog_io_sym_name.m"
            if ((strcmp(parse_tree__prog_io_sym_name__FunctorName_7, (MR_String) ".") == 0))
#line 298 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 298 "prog_io_sym_name.m"
            else
#line 298 "prog_io_sym_name.m"
            if ((strcmp(parse_tree__prog_io_sym_name__FunctorName_7, (MR_String) ":") == 0))
#line 297 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 298 "prog_io_sym_name.m"
            else
#line 298 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__succeeded = MR_FALSE;
#line 296 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 296 "prog_io_sym_name.m"
              {
#line 295 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 295 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 295 "prog_io_sym_name.m"
                  {
#line 295 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__ModuleTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_22_22, (MR_Integer) 0)));
#line 295 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_22_22, (MR_Integer) 1)));
#line 295 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 295 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 295 "prog_io_sym_name.m"
                      {
#line 295 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__NameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_23_23, (MR_Integer) 0)));
#line 295 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_23_23, (MR_Integer) 1)));
#line 295 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 295 "prog_io_sym_name.m"
                      }
#line 295 "prog_io_sym_name.m"
                  }
#line 296 "prog_io_sym_name.m"
              }
#line 295 "prog_io_sym_name.m"
          }
#line 295 "prog_io_sym_name.m"
      }
#line 294 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 301 "prog_io_sym_name.m"
      {
#line 301 "prog_io_sym_name.m"
        MR_String parse_tree__prog_io_sym_name__Name_11;
#line 301 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_25_25;
#line 301 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_26_26;
#line 301 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_12_12;

#line 301 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__NameTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 301 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 301 "prog_io_sym_name.m"
          {
#line 301 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameTerm_9, (MR_Integer) 0)));
#line 301 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameTerm_9, (MR_Integer) 1)));
#line 301 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameTerm_9, (MR_Integer) 2)));
#line 301 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 301 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 301 "prog_io_sym_name.m"
              {
#line 301 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 301 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 301 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_25_25, (MR_Integer) 0)));
#line 301 "prog_io_sym_name.m"
              }
#line 301 "prog_io_sym_name.m"
          }
#line 301 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 302 "prog_io_sym_name.m"
          {
#line 302 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__MaybeModule_13;

#line 302 "prog_io_sym_name.m"
            {
#line 302 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__parse_symbol_name_3_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_102, parse_tree__prog_io_sym_name__VarSet_4, parse_tree__prog_io_sym_name__ModuleTerm_8, &parse_tree__prog_io_sym_name__MaybeModule_13);
            }
#line 306 "prog_io_sym_name.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_sym_name__MaybeModule_13)) == (MR_mktag((MR_Integer) 0))))
#line 307 "prog_io_sym_name.m"
              {
#line 307 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Pieces_16;
#line 307 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Spec_17;
#line 307 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_29_29;
#line 307 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_32_32;
#line 307 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_33_33;
#line 307 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_42_42;
#line 307 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_43_43;
#line 307 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_44_44;
#line 307 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_45_45;
#line 307 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_48_48;

#line 310 "prog_io_sym_name.m"
                {
#line 310 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 310 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__FunctorName_7));
#line 310 "prog_io_sym_name.m"
                }
#line 310 "prog_io_sym_name.m"
                {
#line 310 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_33_33));
#line 310 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[12])));
#line 310 "prog_io_sym_name.m"
                }
#line 310 "prog_io_sym_name.m"
                {
#line 310 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[26])));
#line 310 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_32_32));
#line 310 "prog_io_sym_name.m"
                }
#line 309 "prog_io_sym_name.m"
                {
#line 309 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[25])));
#line 309 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__Pieces_16, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_29_29));
#line 309 "prog_io_sym_name.m"
                }
#line 313 "prog_io_sym_name.m"
                {
#line 313 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 313 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Pieces_16));
#line 313 "prog_io_sym_name.m"
                }
#line 313 "prog_io_sym_name.m"
                {
#line 313 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_45_45));
#line 313 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "prog_io_sym_name.m"
                }
#line 313 "prog_io_sym_name.m"
                {
#line 313 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__TermContext_10));
#line 313 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_44_44));
#line 313 "prog_io_sym_name.m"
                }
#line 313 "prog_io_sym_name.m"
                {
#line 313 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_43_43));
#line 313 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "prog_io_sym_name.m"
                }
#line 312 "prog_io_sym_name.m"
                {
#line 312 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 312 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 312 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 312 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_42_42));
#line 312 "prog_io_sym_name.m"
                }
#line 315 "prog_io_sym_name.m"
                {
#line 315 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_17));
#line 315 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 315 "prog_io_sym_name.m"
                }
#line 315 "prog_io_sym_name.m"
                {
#line 315 "prog_io_sym_name.m"
                  MR_Word base;
#line 315 "prog_io_sym_name.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 315 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymName_6 = base;
#line 315 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_48_48));
#line 315 "prog_io_sym_name.m"
                }
#line 307 "prog_io_sym_name.m"
              }
#line 306 "prog_io_sym_name.m"
            else
#line 304 "prog_io_sym_name.m"
              {
#line 304 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Module_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__MaybeModule_13, (MR_Integer) 0)));
#line 304 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_50_50;

#line 305 "prog_io_sym_name.m"
                {
#line 305 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Module_14));
#line 305 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_50_50, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Name_11));
#line 305 "prog_io_sym_name.m"
                }
#line 305 "prog_io_sym_name.m"
                {
#line 305 "prog_io_sym_name.m"
                  MR_Word base;
#line 305 "prog_io_sym_name.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 305 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymName_6 = base;
#line 305 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_50_50));
#line 305 "prog_io_sym_name.m"
                }
#line 304 "prog_io_sym_name.m"
              }
#line 302 "prog_io_sym_name.m"
          }
#line 301 "prog_io_sym_name.m"
        else
#line 319 "prog_io_sym_name.m"
          {
#line 319 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_53_53;
#line 319 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_54_54;
#line 319 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_63_63;
#line 319 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_64_64;
#line 319 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_65_65;
#line 319 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_66_66;
#line 319 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_69_69;
#line 319 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Pieces_95;
#line 319 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Spec_96;

#line 319 "prog_io_sym_name.m"
            {
#line 319 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 319 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__FunctorName_7));
#line 319 "prog_io_sym_name.m"
            }
#line 319 "prog_io_sym_name.m"
            {
#line 319 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_54_54));
#line 319 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[12])));
#line 319 "prog_io_sym_name.m"
            }
#line 318 "prog_io_sym_name.m"
            {
#line 318 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Pieces_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__Pieces_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[27])));
#line 318 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__Pieces_95, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_53_53));
#line 318 "prog_io_sym_name.m"
            }
#line 321 "prog_io_sym_name.m"
            {
#line 321 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 321 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Pieces_95));
#line 321 "prog_io_sym_name.m"
            }
#line 321 "prog_io_sym_name.m"
            {
#line 321 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_66_66));
#line 321 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 321 "prog_io_sym_name.m"
            }
#line 321 "prog_io_sym_name.m"
            {
#line 321 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 321 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__TermContext_10));
#line 321 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_65_65));
#line 321 "prog_io_sym_name.m"
            }
#line 321 "prog_io_sym_name.m"
            {
#line 321 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_64_64));
#line 321 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 321 "prog_io_sym_name.m"
            }
#line 320 "prog_io_sym_name.m"
            {
#line 320 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Spec_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 320 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 320 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 320 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_96, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_63_63));
#line 320 "prog_io_sym_name.m"
            }
#line 322 "prog_io_sym_name.m"
            {
#line 322 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_96));
#line 322 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "prog_io_sym_name.m"
            }
#line 322 "prog_io_sym_name.m"
            {
#line 322 "prog_io_sym_name.m"
              MR_Word base;
#line 322 "prog_io_sym_name.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 322 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymName_6 = base;
#line 322 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_69_69));
#line 322 "prog_io_sym_name.m"
            }
#line 319 "prog_io_sym_name.m"
          }
#line 301 "prog_io_sym_name.m"
      }
#line 294 "prog_io_sym_name.m"
    else
#line 325 "prog_io_sym_name.m"
      {
#line 325 "prog_io_sym_name.m"
        MR_String parse_tree__prog_io_sym_name__Name_99;
#line 325 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_71_71;
#line 325 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_72_72;
#line 325 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_18_18;

#line 325 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 325 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 325 "prog_io_sym_name.m"
          {
#line 325 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 0)));
#line 325 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 1)));
#line 325 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 2)));
#line 325 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 325 "prog_io_sym_name.m"
              {
#line 325 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_71_71)) == (MR_mktag((MR_Integer) 0)));
#line 325 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 325 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Name_99 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_71_71, (MR_Integer) 0)));
#line 325 "prog_io_sym_name.m"
              }
#line 325 "prog_io_sym_name.m"
          }
#line 325 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 326 "prog_io_sym_name.m"
          {
#line 326 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__SymName_19;

#line 326 "prog_io_sym_name.m"
            {
#line 326 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__SymName_19 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(parse_tree__prog_io_sym_name__Name_99, (MR_String) "__");
            }
#line 327 "prog_io_sym_name.m"
            {
#line 327 "prog_io_sym_name.m"
              MR_Word base;
#line 327 "prog_io_sym_name.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 327 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymName_6 = base;
#line 327 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__SymName_19));
#line 327 "prog_io_sym_name.m"
            }
#line 326 "prog_io_sym_name.m"
          }
#line 325 "prog_io_sym_name.m"
        else
#line 329 "prog_io_sym_name.m"
          {
#line 329 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__TermStr_20;
#line 329 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_76_76;
#line 329 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_77_77;
#line 329 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_86_86;
#line 329 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_87_87;
#line 329 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_88_88;
#line 329 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_89_89;
#line 329 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_90_90;
#line 329 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_93_93;
#line 329 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Pieces_97;
#line 329 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Spec_98;

#line 329 "prog_io_sym_name.m"
            {
#line 329 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__TermStr_20 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_102, parse_tree__prog_io_sym_name__VarSet_4, parse_tree__prog_io_sym_name__Term_5);
            }
#line 331 "prog_io_sym_name.m"
            {
#line 331 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 331 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_77_77, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__TermStr_20));
#line 331 "prog_io_sym_name.m"
            }
#line 331 "prog_io_sym_name.m"
            {
#line 331 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_77_77));
#line 331 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[2])));
#line 331 "prog_io_sym_name.m"
            }
#line 330 "prog_io_sym_name.m"
            {
#line 330 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Pieces_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__Pieces_97, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[28])));
#line 330 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__Pieces_97, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_76_76));
#line 330 "prog_io_sym_name.m"
            }
#line 333 "prog_io_sym_name.m"
            {
#line 333 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_88_88 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_102, parse_tree__prog_io_sym_name__Term_5);
            }
#line 333 "prog_io_sym_name.m"
            {
#line 333 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 333 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Pieces_97));
#line 333 "prog_io_sym_name.m"
            }
#line 333 "prog_io_sym_name.m"
            {
#line 333 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_89_89, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_90_90));
#line 333 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 333 "prog_io_sym_name.m"
            }
#line 333 "prog_io_sym_name.m"
            {
#line 333 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 333 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_88_88));
#line 333 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_87_87, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_89_89));
#line 333 "prog_io_sym_name.m"
            }
#line 333 "prog_io_sym_name.m"
            {
#line 333 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_87_87));
#line 333 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 333 "prog_io_sym_name.m"
            }
#line 332 "prog_io_sym_name.m"
            {
#line 332 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Spec_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 332 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_98, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 332 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 332 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_98, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_86_86));
#line 332 "prog_io_sym_name.m"
            }
#line 334 "prog_io_sym_name.m"
            {
#line 334 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_98));
#line 334 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 334 "prog_io_sym_name.m"
            }
#line 334 "prog_io_sym_name.m"
            {
#line 334 "prog_io_sym_name.m"
              MR_Word base;
#line 334 "prog_io_sym_name.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 334 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymName_6 = base;
#line 334 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_93_93));
#line 334 "prog_io_sym_name.m"
            }
#line 329 "prog_io_sym_name.m"
          }
#line 325 "prog_io_sym_name.m"
      }
#line 294 "prog_io_sym_name.m"
  }
#line 115 "prog_io_sym_name.m"
}

#line 101 "prog_io_sym_name.m"
void MR_CALL 
parse_tree__prog_io_sym_name__parse_symbol_name_specifier_3_p_0(
#line 101 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__VarSet_4,
#line 101 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_5,
#line 101 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_6)
#line 101 "prog_io_sym_name.m"
{
#line 386 "prog_io_sym_name.m"
  {
#line 386 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded;

#line 387 "prog_io_sym_name.m"
    {
#line 387 "prog_io_sym_name.m"
      parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_specifier_4_p_0((MR_Word) &parse_tree__prog_io_sym_name_scalar_common_2[0], parse_tree__prog_io_sym_name__VarSet_4, parse_tree__prog_io_sym_name__Term_5, parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_6);
    }
#line 386 "prog_io_sym_name.m"
  }
#line 101 "prog_io_sym_name.m"
}

#line 93 "prog_io_sym_name.m"
MR_bool MR_CALL 
parse_tree__prog_io_sym_name__try_parse_implicitly_qualified_sym_name_and_no_args_3_p_0(
#line 93 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_11,
#line 93 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__DefaultModuleName_4,
#line 93 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_5,
#line 93 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__SymName_6)
#line 93 "prog_io_sym_name.m"
{
#line 275 "prog_io_sym_name.m"
  {
#line 275 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded;
#line 275 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__SymName0_7;
#line 278 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_12_12;
#line 278 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__V_14_14;

#line 276 "prog_io_sym_name.m"
    {
#line 276 "prog_io_sym_name.m"
      parse_tree__prog_io_sym_name__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_11, parse_tree__prog_io_sym_name__Term_5, &parse_tree__prog_io_sym_name__SymName0_7);
    }
#line 275 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 275 "prog_io_sym_name.m"
      {
#line 432 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_14_14 = (MR_String) "";
#line 432 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_12_12 = (MR_Word) &parse_tree__prog_io_sym_name_scalar_common_2[0];
#line 278 "prog_io_sym_name.m"
        {
#line 278 "prog_io_sym_name.m"
          parse_tree__prog_io_sym_name__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_sym_name__DefaultModuleName_4, parse_tree__prog_io_sym_name__V_12_12);
        }
#line 277 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 280 "prog_io_sym_name.m"
          {
#line 280 "prog_io_sym_name.m"
            *parse_tree__prog_io_sym_name__SymName_6 = parse_tree__prog_io_sym_name__SymName0_7;
#line 280 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 280 "prog_io_sym_name.m"
          }
#line 277 "prog_io_sym_name.m"
        else
#line 281 "prog_io_sym_name.m"
          {
#line 282 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__ModuleName_8;
#line 282 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__V_9_9;

#line 282 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__SymName0_7)) == (MR_mktag((MR_Integer) 1)));
#line 282 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 282 "prog_io_sym_name.m"
              {
#line 282 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName0_7, (MR_Integer) 0)));
#line 282 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName0_7, (MR_Integer) 1)));
#line 283 "prog_io_sym_name.m"
                {
#line 283 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__prog_io_sym_name__ModuleName_8, parse_tree__prog_io_sym_name__DefaultModuleName_4);
                }
#line 283 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = !(parse_tree__prog_io_sym_name__succeeded);
#line 282 "prog_io_sym_name.m"
              }
#line 281 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 285 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__succeeded = MR_FALSE;
#line 281 "prog_io_sym_name.m"
            else
#line 287 "prog_io_sym_name.m"
              {
#line 287 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__UnqualName_10;

#line 287 "prog_io_sym_name.m"
                {
#line 287 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__UnqualName_10 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_sym_name__SymName0_7);
                }
#line 288 "prog_io_sym_name.m"
                {
#line 288 "prog_io_sym_name.m"
                  MR_Word base;
#line 288 "prog_io_sym_name.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__SymName_6 = base;
#line 288 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__DefaultModuleName_4));
#line 288 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__UnqualName_10));
#line 288 "prog_io_sym_name.m"
                }
#line 287 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 287 "prog_io_sym_name.m"
              }
#line 281 "prog_io_sym_name.m"
          }
#line 275 "prog_io_sym_name.m"
      }
#line 275 "prog_io_sym_name.m"
    return parse_tree__prog_io_sym_name__succeeded;
#line 275 "prog_io_sym_name.m"
  }
#line 93 "prog_io_sym_name.m"
}

#line 91 "prog_io_sym_name.m"
MR_bool MR_CALL 
parse_tree__prog_io_sym_name__try_parse_implicitly_qualified_sym_name_and_args_4_p_0(
#line 91 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_13,
#line 91 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__DefaultModuleName_5,
#line 91 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_6,
#line 91 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__SymName_7,
#line 91 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__Args_8)
#line 91 "prog_io_sym_name.m"
{
#line 258 "prog_io_sym_name.m"
  {
#line 258 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded;
#line 258 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__SymName0_9;
#line 261 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_14_14;
#line 261 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__V_16_16;

#line 259 "prog_io_sym_name.m"
    {
#line 259 "prog_io_sym_name.m"
      parse_tree__prog_io_sym_name__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_13, parse_tree__prog_io_sym_name__Term_6, &parse_tree__prog_io_sym_name__SymName0_9, parse_tree__prog_io_sym_name__Args_8);
    }
#line 258 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 258 "prog_io_sym_name.m"
      {
#line 432 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_16_16 = (MR_String) "";
#line 432 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_14_14 = (MR_Word) &parse_tree__prog_io_sym_name_scalar_common_2[0];
#line 261 "prog_io_sym_name.m"
        {
#line 261 "prog_io_sym_name.m"
          parse_tree__prog_io_sym_name__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_sym_name__DefaultModuleName_5, parse_tree__prog_io_sym_name__V_14_14);
        }
#line 260 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 263 "prog_io_sym_name.m"
          {
#line 263 "prog_io_sym_name.m"
            *parse_tree__prog_io_sym_name__SymName_7 = parse_tree__prog_io_sym_name__SymName0_9;
#line 263 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 263 "prog_io_sym_name.m"
          }
#line 260 "prog_io_sym_name.m"
        else
#line 264 "prog_io_sym_name.m"
          {
#line 265 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__ModuleName_10;
#line 265 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__V_11_11;

#line 265 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__SymName0_9)) == (MR_mktag((MR_Integer) 1)));
#line 265 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 265 "prog_io_sym_name.m"
              {
#line 265 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName0_9, (MR_Integer) 0)));
#line 265 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName0_9, (MR_Integer) 1)));
#line 266 "prog_io_sym_name.m"
                {
#line 266 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__prog_io_sym_name__ModuleName_10, parse_tree__prog_io_sym_name__DefaultModuleName_5);
                }
#line 266 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = !(parse_tree__prog_io_sym_name__succeeded);
#line 265 "prog_io_sym_name.m"
              }
#line 264 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 268 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__succeeded = MR_FALSE;
#line 264 "prog_io_sym_name.m"
            else
#line 270 "prog_io_sym_name.m"
              {
#line 270 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__UnqualName_12;

#line 270 "prog_io_sym_name.m"
                {
#line 270 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__UnqualName_12 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_sym_name__SymName0_9);
                }
#line 271 "prog_io_sym_name.m"
                {
#line 271 "prog_io_sym_name.m"
                  MR_Word base;
#line 271 "prog_io_sym_name.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__SymName_7 = base;
#line 271 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__DefaultModuleName_5));
#line 271 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__UnqualName_12));
#line 271 "prog_io_sym_name.m"
                }
#line 270 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 270 "prog_io_sym_name.m"
              }
#line 264 "prog_io_sym_name.m"
          }
#line 258 "prog_io_sym_name.m"
      }
#line 258 "prog_io_sym_name.m"
    return parse_tree__prog_io_sym_name__succeeded;
#line 258 "prog_io_sym_name.m"
  }
#line 91 "prog_io_sym_name.m"
}

#line 88 "prog_io_sym_name.m"
void MR_CALL 
parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(
#line 88 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_46,
#line 88 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__DefaultModuleName_6,
#line 88 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_7,
#line 88 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__VarSet_8,
#line 88 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__ContextPieces_9,
#line 88 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_10)
#line 88 "prog_io_sym_name.m"
{
#line 229 "prog_io_sym_name.m"
  {
#line 229 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded;
#line 229 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__MaybeSymNameAndArgs0_11;

#line 230 "prog_io_sym_name.m"
    {
#line 230 "prog_io_sym_name.m"
      parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_46, parse_tree__prog_io_sym_name__Term_7, parse_tree__prog_io_sym_name__VarSet_8, parse_tree__prog_io_sym_name__ContextPieces_9, &parse_tree__prog_io_sym_name__MaybeSymNameAndArgs0_11);
    }
#line 252 "prog_io_sym_name.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_sym_name__MaybeSymNameAndArgs0_11)) == (MR_mktag((MR_Integer) 0))))
#line 254 "prog_io_sym_name.m"
      *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_10 = parse_tree__prog_io_sym_name__MaybeSymNameAndArgs0_11;
#line 252 "prog_io_sym_name.m"
    else
#line 232 "prog_io_sym_name.m"
      {
#line 232 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__MaybeSymNameAndArgs0_11, (MR_Integer) 0)));
#line 232 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__MaybeSymNameAndArgs0_11, (MR_Integer) 1)));

#line 234 "prog_io_sym_name.m"
        {
#line 234 "prog_io_sym_name.m"
          parse_tree__prog_io_sym_name__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_sym_name__DefaultModuleName_6, (MR_Word) &parse_tree__prog_io_sym_name_scalar_common_2[0]);
        }
#line 233 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 236 "prog_io_sym_name.m"
          *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_10 = parse_tree__prog_io_sym_name__MaybeSymNameAndArgs0_11;
#line 233 "prog_io_sym_name.m"
        else
#line 237 "prog_io_sym_name.m"
          {
#line 238 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__ModuleName_14;
#line 238 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__V_15_15;

#line 238 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__SymName_12)) == (MR_mktag((MR_Integer) 1)));
#line 238 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 238 "prog_io_sym_name.m"
              {
#line 238 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName_12, (MR_Integer) 0)));
#line 238 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName_12, (MR_Integer) 1)));
#line 239 "prog_io_sym_name.m"
                {
#line 239 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__prog_io_sym_name__ModuleName_14, parse_tree__prog_io_sym_name__DefaultModuleName_6);
                }
#line 239 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = !(parse_tree__prog_io_sym_name__succeeded);
#line 238 "prog_io_sym_name.m"
              }
#line 237 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 243 "prog_io_sym_name.m"
              {
#line 243 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Spec_17;
#line 243 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_37_37;
#line 243 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_38_38;
#line 243 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_39_39;
#line 243 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_44_44;

#line 245 "prog_io_sym_name.m"
                {
#line 245 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_39_39 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_46, parse_tree__prog_io_sym_name__Term_7);
                }
#line 245 "prog_io_sym_name.m"
                {
#line 245 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 245 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_39_39));
#line 245 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[24])));
#line 245 "prog_io_sym_name.m"
                }
#line 245 "prog_io_sym_name.m"
                {
#line 245 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_38_38));
#line 245 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 245 "prog_io_sym_name.m"
                }
#line 244 "prog_io_sym_name.m"
                {
#line 244 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 244 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 244 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 244 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_37_37));
#line 244 "prog_io_sym_name.m"
                }
#line 246 "prog_io_sym_name.m"
                {
#line 246 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_17));
#line 246 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "prog_io_sym_name.m"
                }
#line 246 "prog_io_sym_name.m"
                {
#line 246 "prog_io_sym_name.m"
                  MR_Word base;
#line 246 "prog_io_sym_name.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 246 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_10 = base;
#line 246 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_44_44));
#line 246 "prog_io_sym_name.m"
                }
#line 243 "prog_io_sym_name.m"
              }
#line 237 "prog_io_sym_name.m"
            else
#line 248 "prog_io_sym_name.m"
              {
#line 248 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__UnqualName_18;
#line 248 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__QualSymName_19;

#line 248 "prog_io_sym_name.m"
                {
#line 248 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__UnqualName_18 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_sym_name__SymName_12);
                }
#line 249 "prog_io_sym_name.m"
                {
#line 249 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__QualSymName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__QualSymName_19, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__DefaultModuleName_6));
#line 249 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__QualSymName_19, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__UnqualName_18));
#line 249 "prog_io_sym_name.m"
                }
#line 250 "prog_io_sym_name.m"
                {
#line 250 "prog_io_sym_name.m"
                  MR_Word base;
#line 250 "prog_io_sym_name.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_10 = base;
#line 250 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__QualSymName_19));
#line 250 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Args_13));
#line 250 "prog_io_sym_name.m"
                }
#line 248 "prog_io_sym_name.m"
              }
#line 237 "prog_io_sym_name.m"
          }
#line 232 "prog_io_sym_name.m"
      }
#line 229 "prog_io_sym_name.m"
  }
#line 88 "prog_io_sym_name.m"
}

#line 72 "prog_io_sym_name.m"
MR_bool MR_CALL 
parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0(
#line 72 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_19,
#line 72 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Functor_5,
#line 72 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__FunctorArgs_6,
#line 72 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__SymName_7,
#line 72 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__Args_8)
#line 72 "prog_io_sym_name.m"
{
#line 197 "prog_io_sym_name.m"
  {
#line 197 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Functor_5)) == (MR_mktag((MR_Integer) 0)));
#line 197 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__FunctorName_9;
#line 199 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__ModuleTerm_10;
#line 199 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__NameArgsTerm_11;
#line 200 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_15_15;
#line 200 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_16_16;

#line 198 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 198 "prog_io_sym_name.m"
      {
#line 198 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__FunctorName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Functor_5, (MR_Integer) 0)));
#line 200 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = (strcmp(parse_tree__prog_io_sym_name__FunctorName_9, (MR_String) ".") == 0);
#line 200 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 200 "prog_io_sym_name.m"
          {
#line 201 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__FunctorArgs_6)) == (MR_mktag((MR_Integer) 1)));
#line 201 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 201 "prog_io_sym_name.m"
              {
#line 201 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__ModuleTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_6, (MR_Integer) 0)));
#line 201 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_6, (MR_Integer) 1)));
#line 201 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 201 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 201 "prog_io_sym_name.m"
                  {
#line 201 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__NameArgsTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_15_15, (MR_Integer) 0)));
#line 201 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_15_15, (MR_Integer) 1)));
#line 201 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 201 "prog_io_sym_name.m"
                  }
#line 201 "prog_io_sym_name.m"
              }
#line 200 "prog_io_sym_name.m"
          }
#line 199 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 203 "prog_io_sym_name.m"
          {
#line 203 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__Name_12;
#line 203 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Module_14;
#line 203 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_17_17;
#line 203 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_13_13;

#line 203 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__NameArgsTerm_11)) == (MR_mktag((MR_Integer) 0)));
#line 203 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 203 "prog_io_sym_name.m"
              {
#line 203 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_11, (MR_Integer) 0)));
#line 203 "prog_io_sym_name.m"
                *parse_tree__prog_io_sym_name__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_11, (MR_Integer) 1)));
#line 203 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_11, (MR_Integer) 2)));
#line 203 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 203 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 203 "prog_io_sym_name.m"
                  {
#line 203 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_17_17, (MR_Integer) 0)));
#line 204 "prog_io_sym_name.m"
                    {
#line 204 "prog_io_sym_name.m"
                      parse_tree__prog_io_sym_name__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_19, parse_tree__prog_io_sym_name__ModuleTerm_10, &parse_tree__prog_io_sym_name__Module_14);
                    }
#line 203 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 203 "prog_io_sym_name.m"
                      {
#line 205 "prog_io_sym_name.m"
                        {
#line 205 "prog_io_sym_name.m"
                          MR_Word base;
#line 205 "prog_io_sym_name.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_io_sym_name.m"
                          *parse_tree__prog_io_sym_name__SymName_7 = base;
#line 205 "prog_io_sym_name.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Module_14));
#line 205 "prog_io_sym_name.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Name_12));
#line 205 "prog_io_sym_name.m"
                        }
#line 205 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 203 "prog_io_sym_name.m"
                      }
#line 203 "prog_io_sym_name.m"
                  }
#line 203 "prog_io_sym_name.m"
              }
#line 203 "prog_io_sym_name.m"
          }
#line 199 "prog_io_sym_name.m"
        else
#line 207 "prog_io_sym_name.m"
          {
#line 207 "prog_io_sym_name.m"
            {
#line 207 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__SymName_7 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(parse_tree__prog_io_sym_name__FunctorName_9, (MR_String) "__");
            }
#line 208 "prog_io_sym_name.m"
            *parse_tree__prog_io_sym_name__Args_8 = parse_tree__prog_io_sym_name__FunctorArgs_6;
#line 207 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 207 "prog_io_sym_name.m"
          }
#line 198 "prog_io_sym_name.m"
      }
#line 197 "prog_io_sym_name.m"
    return parse_tree__prog_io_sym_name__succeeded;
#line 197 "prog_io_sym_name.m"
  }
#line 72 "prog_io_sym_name.m"
}

#line 63 "prog_io_sym_name.m"
MR_bool MR_CALL 
parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(
#line 63 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_19,
#line 63 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_3,
#line 63 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__SymName_4)
#line 63 "prog_io_sym_name.m"
{
#line 211 "prog_io_sym_name.m"
  {
#line 211 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 211 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__Functor_5;
#line 211 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__FunctorArgs_6;
#line 211 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__FunctorName_8;
#line 212 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name___TermContext_7;
#line 214 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__ModuleTerm_9;
#line 214 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__NameArgsTerm_10;
#line 215 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_14_14;
#line 215 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_15_15;

#line 212 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 212 "prog_io_sym_name.m"
      {
#line 212 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__Functor_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 0)));
#line 212 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__FunctorArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 1)));
#line 212 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name___TermContext_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 2)));
#line 213 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Functor_5)) == (MR_mktag((MR_Integer) 0)));
#line 213 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 213 "prog_io_sym_name.m"
          {
#line 213 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__FunctorName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Functor_5, (MR_Integer) 0)));
#line 215 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (strcmp(parse_tree__prog_io_sym_name__FunctorName_8, (MR_String) ".") == 0);
#line 215 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 215 "prog_io_sym_name.m"
              {
#line 216 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__FunctorArgs_6)) == (MR_mktag((MR_Integer) 1)));
#line 216 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 216 "prog_io_sym_name.m"
                  {
#line 216 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__ModuleTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_6, (MR_Integer) 0)));
#line 216 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_6, (MR_Integer) 1)));
#line 216 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 216 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 216 "prog_io_sym_name.m"
                      {
#line 216 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__NameArgsTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_14_14, (MR_Integer) 0)));
#line 216 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_14_14, (MR_Integer) 1)));
#line 216 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "prog_io_sym_name.m"
                      }
#line 216 "prog_io_sym_name.m"
                  }
#line 215 "prog_io_sym_name.m"
              }
#line 214 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 218 "prog_io_sym_name.m"
              {
#line 218 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__Name_11;
#line 218 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Module_13;
#line 218 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_16_16;
#line 218 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_17_17;
#line 218 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_12_12;

#line 218 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__NameArgsTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 218 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 218 "prog_io_sym_name.m"
                  {
#line 218 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_10, (MR_Integer) 0)));
#line 218 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_10, (MR_Integer) 1)));
#line 218 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_10, (MR_Integer) 2)));
#line 218 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 218 "prog_io_sym_name.m"
                      {
#line 218 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 218 "prog_io_sym_name.m"
                        if (parse_tree__prog_io_sym_name__succeeded)
#line 218 "prog_io_sym_name.m"
                          {
#line 218 "prog_io_sym_name.m"
                            parse_tree__prog_io_sym_name__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_16_16, (MR_Integer) 0)));
#line 219 "prog_io_sym_name.m"
                            {
#line 219 "prog_io_sym_name.m"
                              parse_tree__prog_io_sym_name__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_19, parse_tree__prog_io_sym_name__ModuleTerm_9, &parse_tree__prog_io_sym_name__Module_13);
                            }
#line 218 "prog_io_sym_name.m"
                            if (parse_tree__prog_io_sym_name__succeeded)
#line 218 "prog_io_sym_name.m"
                              {
#line 220 "prog_io_sym_name.m"
                                {
#line 220 "prog_io_sym_name.m"
                                  MR_Word base;
#line 220 "prog_io_sym_name.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "prog_io_sym_name.m"
                                  *parse_tree__prog_io_sym_name__SymName_4 = base;
#line 220 "prog_io_sym_name.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Module_13));
#line 220 "prog_io_sym_name.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Name_11));
#line 220 "prog_io_sym_name.m"
                                }
#line 220 "prog_io_sym_name.m"
                                parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 218 "prog_io_sym_name.m"
                              }
#line 218 "prog_io_sym_name.m"
                          }
#line 218 "prog_io_sym_name.m"
                      }
#line 218 "prog_io_sym_name.m"
                  }
#line 218 "prog_io_sym_name.m"
              }
#line 214 "prog_io_sym_name.m"
            else
#line 222 "prog_io_sym_name.m"
              {
#line 222 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__V_18_18;

#line 222 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__FunctorArgs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 222 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 222 "prog_io_sym_name.m"
                  {
#line 223 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_18_18 = (MR_String) "__";
#line 223 "prog_io_sym_name.m"
                    {
#line 223 "prog_io_sym_name.m"
                      *parse_tree__prog_io_sym_name__SymName_4 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(parse_tree__prog_io_sym_name__FunctorName_8, parse_tree__prog_io_sym_name__V_18_18);
                    }
#line 223 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 222 "prog_io_sym_name.m"
                  }
#line 222 "prog_io_sym_name.m"
              }
#line 213 "prog_io_sym_name.m"
          }
#line 212 "prog_io_sym_name.m"
      }
#line 211 "prog_io_sym_name.m"
    return parse_tree__prog_io_sym_name__succeeded;
#line 211 "prog_io_sym_name.m"
  }
#line 63 "prog_io_sym_name.m"
}

#line 61 "prog_io_sym_name.m"
MR_bool MR_CALL 
parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(
#line 61 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_10,
#line 61 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_4,
#line 61 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__SymName_5,
#line 61 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__Args_6)
#line 61 "prog_io_sym_name.m"
{
#line 190 "prog_io_sym_name.m"
  {
#line 190 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_4)) == (MR_mktag((MR_Integer) 0)));
#line 190 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__Functor_7;
#line 190 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__FunctorArgs_8;
#line 190 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__FunctorName_15;
#line 191 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name___TermContext_9;
#line 199 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__ModuleTerm_16;
#line 199 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__NameArgsTerm_17;
#line 200 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_21_21;
#line 200 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_22_22;

#line 191 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 191 "prog_io_sym_name.m"
      {
#line 191 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__Functor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_4, (MR_Integer) 0)));
#line 191 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__FunctorArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_4, (MR_Integer) 1)));
#line 191 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name___TermContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_4, (MR_Integer) 2)));
#line 198 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Functor_7)) == (MR_mktag((MR_Integer) 0)));
#line 198 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 198 "prog_io_sym_name.m"
          {
#line 198 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__FunctorName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Functor_7, (MR_Integer) 0)));
#line 200 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (strcmp(parse_tree__prog_io_sym_name__FunctorName_15, (MR_String) ".") == 0);
#line 200 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 200 "prog_io_sym_name.m"
              {
#line 201 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__FunctorArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 201 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 201 "prog_io_sym_name.m"
                  {
#line 201 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__ModuleTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_8, (MR_Integer) 0)));
#line 201 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_8, (MR_Integer) 1)));
#line 201 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 201 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 201 "prog_io_sym_name.m"
                      {
#line 201 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__NameArgsTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_21_21, (MR_Integer) 0)));
#line 201 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_21_21, (MR_Integer) 1)));
#line 201 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 201 "prog_io_sym_name.m"
                      }
#line 201 "prog_io_sym_name.m"
                  }
#line 200 "prog_io_sym_name.m"
              }
#line 199 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 203 "prog_io_sym_name.m"
              {
#line 203 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__Name_18;
#line 203 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Module_20;
#line 203 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_23_23;
#line 203 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_19_19;

#line 203 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__NameArgsTerm_17)) == (MR_mktag((MR_Integer) 0)));
#line 203 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 203 "prog_io_sym_name.m"
                  {
#line 203 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_17, (MR_Integer) 0)));
#line 203 "prog_io_sym_name.m"
                    *parse_tree__prog_io_sym_name__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_17, (MR_Integer) 1)));
#line 203 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_17, (MR_Integer) 2)));
#line 203 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 203 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 203 "prog_io_sym_name.m"
                      {
#line 203 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__Name_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_23_23, (MR_Integer) 0)));
#line 204 "prog_io_sym_name.m"
                        {
#line 204 "prog_io_sym_name.m"
                          parse_tree__prog_io_sym_name__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_10, parse_tree__prog_io_sym_name__ModuleTerm_16, &parse_tree__prog_io_sym_name__Module_20);
                        }
#line 203 "prog_io_sym_name.m"
                        if (parse_tree__prog_io_sym_name__succeeded)
#line 203 "prog_io_sym_name.m"
                          {
#line 205 "prog_io_sym_name.m"
                            {
#line 205 "prog_io_sym_name.m"
                              MR_Word base;
#line 205 "prog_io_sym_name.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_io_sym_name.m"
                              *parse_tree__prog_io_sym_name__SymName_5 = base;
#line 205 "prog_io_sym_name.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Module_20));
#line 205 "prog_io_sym_name.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Name_18));
#line 205 "prog_io_sym_name.m"
                            }
#line 205 "prog_io_sym_name.m"
                            parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 203 "prog_io_sym_name.m"
                          }
#line 203 "prog_io_sym_name.m"
                      }
#line 203 "prog_io_sym_name.m"
                  }
#line 203 "prog_io_sym_name.m"
              }
#line 199 "prog_io_sym_name.m"
            else
#line 207 "prog_io_sym_name.m"
              {
#line 207 "prog_io_sym_name.m"
                {
#line 207 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__SymName_5 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(parse_tree__prog_io_sym_name__FunctorName_15, (MR_String) "__");
                }
#line 208 "prog_io_sym_name.m"
                *parse_tree__prog_io_sym_name__Args_6 = parse_tree__prog_io_sym_name__FunctorArgs_8;
#line 207 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 207 "prog_io_sym_name.m"
              }
#line 198 "prog_io_sym_name.m"
          }
#line 191 "prog_io_sym_name.m"
      }
#line 190 "prog_io_sym_name.m"
    return parse_tree__prog_io_sym_name__succeeded;
#line 190 "prog_io_sym_name.m"
  }
#line 61 "prog_io_sym_name.m"
}

#line 59 "prog_io_sym_name.m"
void MR_CALL 
parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0(
#line 59 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_130,
#line 59 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_5,
#line 59 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__VarSet_6,
#line 59 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__ContextPieces_7,
#line 59 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_8)
#line 59 "prog_io_sym_name.m"
{
#line 140 "prog_io_sym_name.m"
  {
#line 140 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 140 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__TermContext_11;
#line 140 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__ModuleTerm_12;
#line 140 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__NameArgsTerm_13;
#line 141 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__Functor_9;
#line 141 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__FunctorArgs_10;
#line 141 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__V_27_27;
#line 141 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_28_28;
#line 141 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_29_29;

#line 141 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 141 "prog_io_sym_name.m"
      {
#line 141 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__Functor_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 0)));
#line 141 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__FunctorArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 1)));
#line 141 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__TermContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 2)));
#line 142 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Functor_9)) == (MR_mktag((MR_Integer) 0)));
#line 142 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 142 "prog_io_sym_name.m"
          {
#line 142 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Functor_9, (MR_Integer) 0)));
#line 142 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (strcmp(parse_tree__prog_io_sym_name__V_27_27, (MR_String) ".") == 0);
#line 141 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 141 "prog_io_sym_name.m"
              {
#line 143 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__FunctorArgs_10)) == (MR_mktag((MR_Integer) 1)));
#line 143 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 143 "prog_io_sym_name.m"
                  {
#line 143 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__ModuleTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_10, (MR_Integer) 0)));
#line 143 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_10, (MR_Integer) 1)));
#line 143 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 143 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 143 "prog_io_sym_name.m"
                      {
#line 143 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__NameArgsTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_28_28, (MR_Integer) 0)));
#line 143 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_28_28, (MR_Integer) 1)));
#line 143 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 143 "prog_io_sym_name.m"
                      }
#line 143 "prog_io_sym_name.m"
                  }
#line 141 "prog_io_sym_name.m"
              }
#line 142 "prog_io_sym_name.m"
          }
#line 141 "prog_io_sym_name.m"
      }
#line 140 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 145 "prog_io_sym_name.m"
      {
#line 145 "prog_io_sym_name.m"
        MR_String parse_tree__prog_io_sym_name__Name_14;
#line 145 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__Args_15;
#line 145 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_30_30;
#line 145 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_16_16;

#line 145 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__NameArgsTerm_13)) == (MR_mktag((MR_Integer) 0)));
#line 145 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 145 "prog_io_sym_name.m"
          {
#line 145 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_13, (MR_Integer) 0)));
#line 145 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_13, (MR_Integer) 1)));
#line 145 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_13, (MR_Integer) 2)));
#line 145 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 145 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 145 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_30_30, (MR_Integer) 0)));
#line 145 "prog_io_sym_name.m"
          }
#line 145 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 146 "prog_io_sym_name.m"
          {
#line 146 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__GenericVarSet_17;
#line 146 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__MaybeModule_18;

#line 146 "prog_io_sym_name.m"
            {
#line 146 "prog_io_sym_name.m"
              mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_sym_name__TypeInfo_for_T_130, parse_tree__prog_io_sym_name__VarSet_6, &parse_tree__prog_io_sym_name__GenericVarSet_17);
            }
#line 147 "prog_io_sym_name.m"
            {
#line 147 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__parse_symbol_name_3_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_130, parse_tree__prog_io_sym_name__GenericVarSet_17, parse_tree__prog_io_sym_name__ModuleTerm_12, &parse_tree__prog_io_sym_name__MaybeModule_18);
            }
#line 151 "prog_io_sym_name.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_sym_name__MaybeModule_18)) == (MR_mktag((MR_Integer) 0))))
#line 152 "prog_io_sym_name.m"
              {
#line 152 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__TypeCtorInfo_132_132;
#line 152 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__ModuleTermStr_21;
#line 152 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Pieces_22;
#line 152 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Spec_23;
#line 152 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_31_31;
#line 152 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_32_32;
#line 152 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_34_34;
#line 152 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_37_37;
#line 152 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_40_40;
#line 152 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_41_41;
#line 152 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_50_50;
#line 152 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_51_51;
#line 152 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_52_52;
#line 152 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_53_53;
#line 152 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_56_56;

#line 153 "prog_io_sym_name.m"
                {
#line 153 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__ModuleTermStr_21 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_130, parse_tree__prog_io_sym_name__GenericVarSet_17, parse_tree__prog_io_sym_name__ModuleTerm_12);
                }
#line 3021 "parse_tree.prog_io_sym_name.c"
                parse_tree__prog_io_sym_name__TypeCtorInfo_132_132 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 154 "prog_io_sym_name.m"
                {
#line 154 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_31_31 = mercury__cord__list_1_f_0(parse_tree__prog_io_sym_name__TypeCtorInfo_132_132, parse_tree__prog_io_sym_name__ContextPieces_7);
                }
#line 158 "prog_io_sym_name.m"
                {
#line 158 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 158 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 158 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__ModuleTermStr_21));
#line 158 "prog_io_sym_name.m"
                }
#line 158 "prog_io_sym_name.m"
                {
#line 158 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 158 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_41_41));
#line 158 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[2])));
#line 158 "prog_io_sym_name.m"
                }
#line 157 "prog_io_sym_name.m"
                {
#line 157 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_37_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[21])));
#line 157 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_40_40));
#line 157 "prog_io_sym_name.m"
                }
#line 156 "prog_io_sym_name.m"
                {
#line 156 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 156 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[20])));
#line 156 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_37_37));
#line 156 "prog_io_sym_name.m"
                }
#line 155 "prog_io_sym_name.m"
                {
#line 155 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_32_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 155 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_32_32, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_34_34));
#line 155 "prog_io_sym_name.m"
                }
#line 154 "prog_io_sym_name.m"
                {
#line 154 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Pieces_22 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_sym_name__TypeCtorInfo_132_132, parse_tree__prog_io_sym_name__V_31_31, parse_tree__prog_io_sym_name__V_32_32);
                }
#line 160 "prog_io_sym_name.m"
                {
#line 160 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 160 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Pieces_22));
#line 160 "prog_io_sym_name.m"
                }
#line 160 "prog_io_sym_name.m"
                {
#line 160 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_53_53));
#line 160 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 160 "prog_io_sym_name.m"
                }
#line 160 "prog_io_sym_name.m"
                {
#line 160 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 160 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__TermContext_11));
#line 160 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_51_51, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_52_52));
#line 160 "prog_io_sym_name.m"
                }
#line 160 "prog_io_sym_name.m"
                {
#line 160 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_51_51));
#line 160 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 160 "prog_io_sym_name.m"
                }
#line 159 "prog_io_sym_name.m"
                {
#line 159 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 159 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 159 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 159 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_23, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_50_50));
#line 159 "prog_io_sym_name.m"
                }
#line 161 "prog_io_sym_name.m"
                {
#line 161 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 161 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_23));
#line 161 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 161 "prog_io_sym_name.m"
                }
#line 161 "prog_io_sym_name.m"
                {
#line 161 "prog_io_sym_name.m"
                  MR_Word base;
#line 161 "prog_io_sym_name.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 161 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_8 = base;
#line 161 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_56_56));
#line 161 "prog_io_sym_name.m"
                }
#line 152 "prog_io_sym_name.m"
              }
#line 151 "prog_io_sym_name.m"
            else
#line 149 "prog_io_sym_name.m"
              {
#line 149 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Module_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__MaybeModule_18, (MR_Integer) 0)));
#line 149 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_58_58;

#line 150 "prog_io_sym_name.m"
                {
#line 150 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Module_19));
#line 150 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Name_14));
#line 150 "prog_io_sym_name.m"
                }
#line 150 "prog_io_sym_name.m"
                {
#line 150 "prog_io_sym_name.m"
                  MR_Word base;
#line 150 "prog_io_sym_name.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_8 = base;
#line 150 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_58_58));
#line 150 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Args_15));
#line 150 "prog_io_sym_name.m"
                }
#line 149 "prog_io_sym_name.m"
              }
#line 146 "prog_io_sym_name.m"
          }
#line 145 "prog_io_sym_name.m"
        else
#line 164 "prog_io_sym_name.m"
          {
#line 164 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__TypeCtorInfo_134_134;
#line 164 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__TermStr_24;
#line 164 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_59_59;
#line 164 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_60_60;
#line 164 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_62_62;
#line 164 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_65_65;
#line 164 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_68_68;
#line 164 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_69_69;
#line 164 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_78_78;
#line 164 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_79_79;
#line 164 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_80_80;
#line 164 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_81_81;
#line 164 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_84_84;
#line 164 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__GenericVarSet_113;
#line 164 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Pieces_114;
#line 164 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Spec_115;

#line 164 "prog_io_sym_name.m"
            {
#line 164 "prog_io_sym_name.m"
              mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_sym_name__TypeInfo_for_T_130, parse_tree__prog_io_sym_name__VarSet_6, &parse_tree__prog_io_sym_name__GenericVarSet_113);
            }
#line 165 "prog_io_sym_name.m"
            {
#line 165 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__TermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_130, parse_tree__prog_io_sym_name__GenericVarSet_113, parse_tree__prog_io_sym_name__Term_5);
            }
#line 3241 "parse_tree.prog_io_sym_name.c"
            parse_tree__prog_io_sym_name__TypeCtorInfo_134_134 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 166 "prog_io_sym_name.m"
            {
#line 166 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_59_59 = mercury__cord__list_1_f_0(parse_tree__prog_io_sym_name__TypeCtorInfo_134_134, parse_tree__prog_io_sym_name__ContextPieces_7);
            }
#line 169 "prog_io_sym_name.m"
            {
#line 169 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 169 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 169 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_69_69, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__TermStr_24));
#line 169 "prog_io_sym_name.m"
            }
#line 169 "prog_io_sym_name.m"
            {
#line 169 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 169 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_69_69));
#line 169 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[2])));
#line 169 "prog_io_sym_name.m"
            }
#line 168 "prog_io_sym_name.m"
            {
#line 168 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 168 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_65_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[21])));
#line 168 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_65_65, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_68_68));
#line 168 "prog_io_sym_name.m"
            }
#line 167 "prog_io_sym_name.m"
            {
#line 167 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[22])));
#line 167 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_62_62, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_65_65));
#line 167 "prog_io_sym_name.m"
            }
#line 166 "prog_io_sym_name.m"
            {
#line 166 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 166 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_62_62));
#line 166 "prog_io_sym_name.m"
            }
#line 166 "prog_io_sym_name.m"
            {
#line 166 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Pieces_114 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_sym_name__TypeCtorInfo_134_134, parse_tree__prog_io_sym_name__V_59_59, parse_tree__prog_io_sym_name__V_60_60);
            }
#line 171 "prog_io_sym_name.m"
            {
#line 171 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 171 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_81_81, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Pieces_114));
#line 171 "prog_io_sym_name.m"
            }
#line 171 "prog_io_sym_name.m"
            {
#line 171 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_81_81));
#line 171 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 171 "prog_io_sym_name.m"
            }
#line 171 "prog_io_sym_name.m"
            {
#line 171 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 171 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__TermContext_11));
#line 171 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_79_79, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_80_80));
#line 171 "prog_io_sym_name.m"
            }
#line 171 "prog_io_sym_name.m"
            {
#line 171 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_79_79));
#line 171 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 171 "prog_io_sym_name.m"
            }
#line 170 "prog_io_sym_name.m"
            {
#line 170 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Spec_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 170 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 170 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 170 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_115, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_78_78));
#line 170 "prog_io_sym_name.m"
            }
#line 172 "prog_io_sym_name.m"
            {
#line 172 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 172 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_115));
#line 172 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 172 "prog_io_sym_name.m"
            }
#line 172 "prog_io_sym_name.m"
            {
#line 172 "prog_io_sym_name.m"
              MR_Word base;
#line 172 "prog_io_sym_name.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 172 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_8 = base;
#line 172 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_84_84));
#line 172 "prog_io_sym_name.m"
            }
#line 164 "prog_io_sym_name.m"
          }
#line 145 "prog_io_sym_name.m"
      }
#line 140 "prog_io_sym_name.m"
    else
#line 175 "prog_io_sym_name.m"
      {
#line 175 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__GenericVarSet_126;
#line 176 "prog_io_sym_name.m"
        MR_String parse_tree__prog_io_sym_name__Name_119;
#line 176 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__Args_120;
#line 176 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_86_86;
#line 176 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_25_25;

#line 175 "prog_io_sym_name.m"
        {
#line 175 "prog_io_sym_name.m"
          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_sym_name__TypeInfo_for_T_130, parse_tree__prog_io_sym_name__VarSet_6, &parse_tree__prog_io_sym_name__GenericVarSet_126);
        }
#line 176 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 176 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 176 "prog_io_sym_name.m"
          {
#line 176 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 0)));
#line 176 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__Args_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 1)));
#line 176 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 2)));
#line 176 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_86_86)) == (MR_mktag((MR_Integer) 0)));
#line 176 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 176 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Name_119 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_86_86, (MR_Integer) 0)));
#line 176 "prog_io_sym_name.m"
          }
#line 176 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 177 "prog_io_sym_name.m"
          {
#line 177 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__SymName_26;

#line 177 "prog_io_sym_name.m"
            {
#line 177 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__SymName_26 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(parse_tree__prog_io_sym_name__Name_119, (MR_String) "__");
            }
#line 178 "prog_io_sym_name.m"
            {
#line 178 "prog_io_sym_name.m"
              MR_Word base;
#line 178 "prog_io_sym_name.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 178 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_8 = base;
#line 178 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__SymName_26));
#line 178 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Args_120));
#line 178 "prog_io_sym_name.m"
            }
#line 177 "prog_io_sym_name.m"
          }
#line 176 "prog_io_sym_name.m"
        else
#line 180 "prog_io_sym_name.m"
          {
#line 180 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__TypeCtorInfo_136_136;
#line 180 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_88_88;
#line 180 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_89_89;
#line 180 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_91_91;
#line 180 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_94_94;
#line 180 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_95_95;
#line 180 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_104_104;
#line 180 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_105_105;
#line 180 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_106_106;
#line 180 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_107_107;
#line 180 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_108_108;
#line 180 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_111_111;
#line 180 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Pieces_116;
#line 180 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Spec_117;
#line 180 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__TermStr_118;

#line 180 "prog_io_sym_name.m"
            {
#line 180 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__TermStr_118 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_130, parse_tree__prog_io_sym_name__GenericVarSet_126, parse_tree__prog_io_sym_name__Term_5);
            }
#line 3487 "parse_tree.prog_io_sym_name.c"
            parse_tree__prog_io_sym_name__TypeCtorInfo_136_136 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 181 "prog_io_sym_name.m"
            {
#line 181 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_88_88 = mercury__cord__list_1_f_0(parse_tree__prog_io_sym_name__TypeCtorInfo_136_136, parse_tree__prog_io_sym_name__ContextPieces_7);
            }
#line 183 "prog_io_sym_name.m"
            {
#line 183 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 183 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 183 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_95_95, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__TermStr_118));
#line 183 "prog_io_sym_name.m"
            }
#line 183 "prog_io_sym_name.m"
            {
#line 183 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 183 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_94_94, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_95_95));
#line 183 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[2])));
#line 183 "prog_io_sym_name.m"
            }
#line 182 "prog_io_sym_name.m"
            {
#line 182 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_91_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[23])));
#line 182 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_91_91, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_94_94));
#line 182 "prog_io_sym_name.m"
            }
#line 181 "prog_io_sym_name.m"
            {
#line 181 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_89_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 181 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_89_89, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_91_91));
#line 181 "prog_io_sym_name.m"
            }
#line 181 "prog_io_sym_name.m"
            {
#line 181 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Pieces_116 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_sym_name__TypeCtorInfo_136_136, parse_tree__prog_io_sym_name__V_88_88, parse_tree__prog_io_sym_name__V_89_89);
            }
#line 185 "prog_io_sym_name.m"
            {
#line 185 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_106_106 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_130, parse_tree__prog_io_sym_name__Term_5);
            }
#line 185 "prog_io_sym_name.m"
            {
#line 185 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 185 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_108_108, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Pieces_116));
#line 185 "prog_io_sym_name.m"
            }
#line 185 "prog_io_sym_name.m"
            {
#line 185 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_107_107, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_108_108));
#line 185 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 185 "prog_io_sym_name.m"
            }
#line 185 "prog_io_sym_name.m"
            {
#line 185 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 185 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_105_105, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_106_106));
#line 185 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_105_105, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_107_107));
#line 185 "prog_io_sym_name.m"
            }
#line 185 "prog_io_sym_name.m"
            {
#line 185 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_104_104, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_105_105));
#line 185 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 185 "prog_io_sym_name.m"
            }
#line 184 "prog_io_sym_name.m"
            {
#line 184 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Spec_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 184 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 184 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 184 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_117, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_104_104));
#line 184 "prog_io_sym_name.m"
            }
#line 186 "prog_io_sym_name.m"
            {
#line 186 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_111_111, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_117));
#line 186 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 186 "prog_io_sym_name.m"
            }
#line 186 "prog_io_sym_name.m"
            {
#line 186 "prog_io_sym_name.m"
              MR_Word base;
#line 186 "prog_io_sym_name.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 186 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_8 = base;
#line 186 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_111_111));
#line 186 "prog_io_sym_name.m"
            }
#line 180 "prog_io_sym_name.m"
          }
#line 175 "prog_io_sym_name.m"
      }
#line 140 "prog_io_sym_name.m"
  }
#line 59 "prog_io_sym_name.m"
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
