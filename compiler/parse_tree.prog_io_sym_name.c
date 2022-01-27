/*
** Automatically generated from `prog_io_sym_name.m'
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


/* :- module parse_tree.prog_io_sym_name. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_sym_name__init
ENDINIT
*/

#include "parse_tree.prog_io_sym_name.mih"


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
    ((MR_Box) ((MR_String) "Error: module name identifier expected before \'.\'"))
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



#line 128 "prog_io_sym_name.m"
MR_Word MR_CALL 
parse_tree__prog_io_sym_name__root_module_name_0_f_0(void)
#line 128 "prog_io_sym_name.m"
{
#line 431 "prog_io_sym_name.m"
  {
#line 431 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded;

#line 431 "prog_io_sym_name.m"
    return (MR_Word) &parse_tree__prog_io_sym_name_scalar_common_2[0];
#line 431 "prog_io_sym_name.m"
  }
#line 128 "prog_io_sym_name.m"
}

#line 121 "prog_io_sym_name.m"
void MR_CALL 
parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_specifier_4_p_0(
#line 121 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__DefaultModule_5,
#line 121 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__VarSet_6,
#line 121 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_7,
#line 121 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_8)
#line 121 "prog_io_sym_name.m"
{
#line 417 "prog_io_sym_name.m"
  {
#line 417 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 417 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__NameTerm_9;
#line 417 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__ArityTerm_10;
#line 391 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_21_21;
#line 391 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__V_22_22;
#line 391 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_23_23;
#line 391 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_24_24;
#line 391 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_25_25;
#line 391 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_11_11;

#line 391 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 391 "prog_io_sym_name.m"
      {
#line 391 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_7, (MR_Integer) 0)));
#line 391 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_7, (MR_Integer) 1)));
#line 391 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_7, (MR_Integer) 2)));
#line 391 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 391 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 391 "prog_io_sym_name.m"
          {
#line 391 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_21_21, (MR_Integer) 0)));
#line 391 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (strcmp(parse_tree__prog_io_sym_name__V_22_22, (MR_String) "/") == 0);
#line 391 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 391 "prog_io_sym_name.m"
              {
#line 391 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 391 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 391 "prog_io_sym_name.m"
                  {
#line 391 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__NameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_23_23, (MR_Integer) 0)));
#line 391 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_23_23, (MR_Integer) 1)));
#line 391 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 391 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 391 "prog_io_sym_name.m"
                      {
#line 391 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__ArityTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_24_24, (MR_Integer) 0)));
#line 391 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_24_24, (MR_Integer) 1)));
#line 391 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 391 "prog_io_sym_name.m"
                      }
#line 391 "prog_io_sym_name.m"
                  }
#line 391 "prog_io_sym_name.m"
              }
#line 391 "prog_io_sym_name.m"
          }
#line 391 "prog_io_sym_name.m"
      }
#line 417 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 410 "prog_io_sym_name.m"
      {
#line 410 "prog_io_sym_name.m"
        MR_Integer parse_tree__prog_io_sym_name__Arity_12;
#line 392 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_26_26;
#line 392 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_27_27;
#line 392 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_13_13;

#line 392 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__ArityTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 392 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 392 "prog_io_sym_name.m"
          {
#line 392 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__ArityTerm_10, (MR_Integer) 0)));
#line 392 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__ArityTerm_10, (MR_Integer) 1)));
#line 392 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__ArityTerm_10, (MR_Integer) 2)));
#line 392 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 392 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 392 "prog_io_sym_name.m"
              {
#line 392 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 392 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 392 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_26_26, (MR_Integer) 0)));
#line 392 "prog_io_sym_name.m"
              }
#line 392 "prog_io_sym_name.m"
          }
#line 410 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 403 "prog_io_sym_name.m"
          {
#line 393 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__Arity_12 >= (MR_Integer) 0);
#line 403 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 395 "prog_io_sym_name.m"
              {
#line 395 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__MaybeName_14;

#line 394 "prog_io_sym_name.m"
                {
#line 394 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__prog_io_sym_name__DefaultModule_5, parse_tree__prog_io_sym_name__VarSet_6, parse_tree__prog_io_sym_name__NameTerm_9, &parse_tree__prog_io_sym_name__MaybeName_14);
                }
#line 399 "prog_io_sym_name.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_sym_name__MaybeName_14)) == (MR_mktag((MR_Integer) 0))))
#line 398 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_8 = (MR_Word) parse_tree__prog_io_sym_name__MaybeName_14;
#line 399 "prog_io_sym_name.m"
                else
#line 400 "prog_io_sym_name.m"
                  {
#line 400 "prog_io_sym_name.m"
                    MR_Word parse_tree__prog_io_sym_name__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__MaybeName_14, (MR_Integer) 0)));
#line 400 "prog_io_sym_name.m"
                    MR_Word parse_tree__prog_io_sym_name__V_29_29;

#line 401 "prog_io_sym_name.m"
                    {
#line 401 "prog_io_sym_name.m"
                      parse_tree__prog_io_sym_name__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "prog_io_sym_name.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Name_16));
#line 401 "prog_io_sym_name.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Arity_12));
#line 401 "prog_io_sym_name.m"
                    }
#line 401 "prog_io_sym_name.m"
                    {
#line 401 "prog_io_sym_name.m"
                      MR_Word base;
#line 401 "prog_io_sym_name.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 401 "prog_io_sym_name.m"
                      *parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_8 = base;
#line 401 "prog_io_sym_name.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_29_29));
#line 401 "prog_io_sym_name.m"
                    }
#line 400 "prog_io_sym_name.m"
                  }
#line 395 "prog_io_sym_name.m"
              }
#line 403 "prog_io_sym_name.m"
            else
#line 405 "prog_io_sym_name.m"
              {
#line 405 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Spec_18;
#line 405 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_40_40;
#line 405 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_41_41;
#line 405 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_42_42;
#line 405 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_47_47;

#line 407 "prog_io_sym_name.m"
                {
#line 407 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_sym_name__Term_7);
                }
#line 407 "prog_io_sym_name.m"
                {
#line 407 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 407 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_42_42));
#line 407 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[29])));
#line 407 "prog_io_sym_name.m"
                }
#line 407 "prog_io_sym_name.m"
                {
#line 407 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_41_41));
#line 407 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 407 "prog_io_sym_name.m"
                }
#line 406 "prog_io_sym_name.m"
                {
#line 406 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 406 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 406 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 406 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_18, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_40_40));
#line 406 "prog_io_sym_name.m"
                }
#line 408 "prog_io_sym_name.m"
                {
#line 408 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_18));
#line 408 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "prog_io_sym_name.m"
                }
#line 408 "prog_io_sym_name.m"
                {
#line 408 "prog_io_sym_name.m"
                  MR_Word base;
#line 408 "prog_io_sym_name.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 408 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_8 = base;
#line 408 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_47_47));
#line 408 "prog_io_sym_name.m"
                }
#line 405 "prog_io_sym_name.m"
              }
#line 403 "prog_io_sym_name.m"
          }
#line 410 "prog_io_sym_name.m"
        else
#line 412 "prog_io_sym_name.m"
          {
#line 412 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_59_59;
#line 412 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_60_60;
#line 412 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_61_61;
#line 412 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_66_66;
#line 412 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Spec_70;

#line 414 "prog_io_sym_name.m"
            {
#line 414 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_61_61 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_sym_name__Term_7);
            }
#line 414 "prog_io_sym_name.m"
            {
#line 414 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 414 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_61_61));
#line 414 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[30])));
#line 414 "prog_io_sym_name.m"
            }
#line 414 "prog_io_sym_name.m"
            {
#line 414 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_60_60));
#line 414 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "prog_io_sym_name.m"
            }
#line 413 "prog_io_sym_name.m"
            {
#line 413 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Spec_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 413 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 413 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 413 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_70, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_59_59));
#line 413 "prog_io_sym_name.m"
            }
#line 415 "prog_io_sym_name.m"
            {
#line 415 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_70));
#line 415 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "prog_io_sym_name.m"
            }
#line 415 "prog_io_sym_name.m"
            {
#line 415 "prog_io_sym_name.m"
              MR_Word base;
#line 415 "prog_io_sym_name.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 415 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_8 = base;
#line 415 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_66_66));
#line 415 "prog_io_sym_name.m"
            }
#line 412 "prog_io_sym_name.m"
          }
#line 410 "prog_io_sym_name.m"
      }
#line 417 "prog_io_sym_name.m"
    else
#line 419 "prog_io_sym_name.m"
      {
#line 419 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__MaybeSymbolName_19;

#line 418 "prog_io_sym_name.m"
        {
#line 418 "prog_io_sym_name.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__prog_io_sym_name__DefaultModule_5, parse_tree__prog_io_sym_name__VarSet_6, parse_tree__prog_io_sym_name__Term_7, &parse_tree__prog_io_sym_name__MaybeSymbolName_19);
        }
#line 423 "prog_io_sym_name.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_sym_name__MaybeSymbolName_19)) == (MR_mktag((MR_Integer) 0))))
#line 422 "prog_io_sym_name.m"
          *parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_8 = (MR_Word) parse_tree__prog_io_sym_name__MaybeSymbolName_19;
#line 423 "prog_io_sym_name.m"
        else
#line 424 "prog_io_sym_name.m"
          {
#line 424 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__SymbolName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__MaybeSymbolName_19, (MR_Integer) 0)));
#line 424 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_68_68;

#line 425 "prog_io_sym_name.m"
            {
#line 425 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 425 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__SymbolName_20));
#line 425 "prog_io_sym_name.m"
            }
#line 425 "prog_io_sym_name.m"
            {
#line 425 "prog_io_sym_name.m"
              MR_Word base;
#line 425 "prog_io_sym_name.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 425 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_8 = base;
#line 425 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_68_68));
#line 425 "prog_io_sym_name.m"
            }
#line 424 "prog_io_sym_name.m"
          }
#line 419 "prog_io_sym_name.m"
      }
#line 417 "prog_io_sym_name.m"
  }
#line 121 "prog_io_sym_name.m"
}

#line 118 "prog_io_sym_name.m"
void MR_CALL 
parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(
#line 118 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__DefaultModuleName_5,
#line 118 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__VarSet_6,
#line 118 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_7,
#line 118 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__MaybeSymName_8)
#line 118 "prog_io_sym_name.m"
{
#line 356 "prog_io_sym_name.m"
  {
#line 356 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded;
#line 356 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__TypeCtorInfo_43_43 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 356 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__MaybeSymName0_9;

#line 357 "prog_io_sym_name.m"
    {
#line 357 "prog_io_sym_name.m"
      parse_tree__prog_io_sym_name__parse_symbol_name_3_p_0(parse_tree__prog_io_sym_name__TypeCtorInfo_43_43, parse_tree__prog_io_sym_name__VarSet_6, parse_tree__prog_io_sym_name__Term_7, &parse_tree__prog_io_sym_name__MaybeSymName0_9);
    }
#line 378 "prog_io_sym_name.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_sym_name__MaybeSymName0_9)) == (MR_mktag((MR_Integer) 0))))
#line 380 "prog_io_sym_name.m"
      *parse_tree__prog_io_sym_name__MaybeSymName_8 = parse_tree__prog_io_sym_name__MaybeSymName0_9;
#line 378 "prog_io_sym_name.m"
    else
#line 359 "prog_io_sym_name.m"
      {
#line 359 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__SymName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__MaybeSymName0_9, (MR_Integer) 0)));

#line 361 "prog_io_sym_name.m"
        {
#line 361 "prog_io_sym_name.m"
          parse_tree__prog_io_sym_name__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_sym_name__DefaultModuleName_5, (MR_Word) &parse_tree__prog_io_sym_name_scalar_common_2[0]);
        }
#line 364 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 363 "prog_io_sym_name.m"
          *parse_tree__prog_io_sym_name__MaybeSymName_8 = parse_tree__prog_io_sym_name__MaybeSymName0_9;
#line 364 "prog_io_sym_name.m"
        else
#line 374 "prog_io_sym_name.m"
          {
#line 365 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__ModuleName_11;
#line 365 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__V_12_12;

#line 365 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__SymName_10)) == (MR_mktag((MR_Integer) 1)));
#line 365 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 365 "prog_io_sym_name.m"
              {
#line 365 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName_10, (MR_Integer) 0)));
#line 365 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName_10, (MR_Integer) 1)));
#line 366 "prog_io_sym_name.m"
                {
#line 366 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__prog_io_sym_name__ModuleName_11, parse_tree__prog_io_sym_name__DefaultModuleName_5);
                }
#line 366 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = !(parse_tree__prog_io_sym_name__succeeded);
#line 365 "prog_io_sym_name.m"
              }
#line 374 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 370 "prog_io_sym_name.m"
              {
#line 370 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Spec_14;
#line 370 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_33_33;
#line 370 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_34_34;
#line 370 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_35_35;
#line 370 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_40_40;

#line 372 "prog_io_sym_name.m"
                {
#line 372 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_35_35 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_sym_name__TypeCtorInfo_43_43, parse_tree__prog_io_sym_name__Term_7);
                }
#line 372 "prog_io_sym_name.m"
                {
#line 372 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 372 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_35_35));
#line 372 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[24])));
#line 372 "prog_io_sym_name.m"
                }
#line 372 "prog_io_sym_name.m"
                {
#line 372 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_34_34));
#line 372 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 372 "prog_io_sym_name.m"
                }
#line 371 "prog_io_sym_name.m"
                {
#line 371 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 371 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 371 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 371 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_14, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_33_33));
#line 371 "prog_io_sym_name.m"
                }
#line 373 "prog_io_sym_name.m"
                {
#line 373 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_14));
#line 373 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 373 "prog_io_sym_name.m"
                }
#line 373 "prog_io_sym_name.m"
                {
#line 373 "prog_io_sym_name.m"
                  MR_Word base;
#line 373 "prog_io_sym_name.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 373 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymName_8 = base;
#line 373 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_40_40));
#line 373 "prog_io_sym_name.m"
                }
#line 370 "prog_io_sym_name.m"
              }
#line 374 "prog_io_sym_name.m"
            else
#line 375 "prog_io_sym_name.m"
              {
#line 375 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__UnqualName_15;
#line 375 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_42_42;

#line 375 "prog_io_sym_name.m"
                {
#line 375 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__UnqualName_15 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_sym_name__SymName_10);
                }
#line 376 "prog_io_sym_name.m"
                {
#line 376 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__DefaultModuleName_5));
#line 376 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__UnqualName_15));
#line 376 "prog_io_sym_name.m"
                }
#line 376 "prog_io_sym_name.m"
                {
#line 376 "prog_io_sym_name.m"
                  MR_Word base;
#line 376 "prog_io_sym_name.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 376 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymName_8 = base;
#line 376 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_42_42));
#line 376 "prog_io_sym_name.m"
                }
#line 375 "prog_io_sym_name.m"
              }
#line 374 "prog_io_sym_name.m"
          }
#line 359 "prog_io_sym_name.m"
      }
#line 356 "prog_io_sym_name.m"
  }
#line 118 "prog_io_sym_name.m"
}

#line 116 "prog_io_sym_name.m"
MR_bool MR_CALL 
parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(
#line 116 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_23,
#line 116 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_3,
#line 116 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__SymName_4)
#line 116 "prog_io_sym_name.m"
{
#line 348 "prog_io_sym_name.m"
  {
#line 348 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 348 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__ModuleTerm_6;
#line 348 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__NameTerm_7;
#line 340 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__FunctorName_5;
#line 340 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_13_13;
#line 340 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_14_14;
#line 340 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_15_15;
#line 340 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_16_16;
#line 339 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name___TermContext_8;

#line 339 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 339 "prog_io_sym_name.m"
      {
#line 339 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 0)));
#line 339 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 1)));
#line 339 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name___TermContext_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 2)));
#line 339 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 339 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 339 "prog_io_sym_name.m"
          {
#line 339 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__FunctorName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_13_13, (MR_Integer) 0)));
#line 342 "prog_io_sym_name.m"
            if ((strcmp(parse_tree__prog_io_sym_name__FunctorName_5, (MR_String) ".") == 0))
#line 342 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 342 "prog_io_sym_name.m"
            else
#line 342 "prog_io_sym_name.m"
            if ((strcmp(parse_tree__prog_io_sym_name__FunctorName_5, (MR_String) ":") == 0))
#line 341 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 342 "prog_io_sym_name.m"
            else
#line 342 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__succeeded = MR_FALSE;
#line 340 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 340 "prog_io_sym_name.m"
              {
#line 339 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 339 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 339 "prog_io_sym_name.m"
                  {
#line 339 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__ModuleTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_14_14, (MR_Integer) 0)));
#line 339 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_14_14, (MR_Integer) 1)));
#line 339 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 339 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 339 "prog_io_sym_name.m"
                      {
#line 339 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__NameTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_15_15, (MR_Integer) 0)));
#line 339 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_15_15, (MR_Integer) 1)));
#line 339 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 339 "prog_io_sym_name.m"
                      }
#line 339 "prog_io_sym_name.m"
                  }
#line 340 "prog_io_sym_name.m"
              }
#line 339 "prog_io_sym_name.m"
          }
#line 339 "prog_io_sym_name.m"
      }
#line 348 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 345 "prog_io_sym_name.m"
      {
#line 345 "prog_io_sym_name.m"
        MR_String parse_tree__prog_io_sym_name__Name_9;
#line 345 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__Module_11;
#line 345 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_17_17;
#line 345 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_18_18;
#line 345 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_10_10;

#line 345 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__NameTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 345 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 345 "prog_io_sym_name.m"
          {
#line 345 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameTerm_7, (MR_Integer) 0)));
#line 345 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameTerm_7, (MR_Integer) 1)));
#line 345 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameTerm_7, (MR_Integer) 2)));
#line 345 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 345 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 345 "prog_io_sym_name.m"
              {
#line 345 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 345 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 345 "prog_io_sym_name.m"
                  {
#line 345 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_17_17, (MR_Integer) 0)));
#line 346 "prog_io_sym_name.m"
                    {
#line 346 "prog_io_sym_name.m"
                      parse_tree__prog_io_sym_name__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_23, parse_tree__prog_io_sym_name__ModuleTerm_6, &parse_tree__prog_io_sym_name__Module_11);
                    }
#line 345 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 345 "prog_io_sym_name.m"
                      {
#line 347 "prog_io_sym_name.m"
                        {
#line 347 "prog_io_sym_name.m"
                          MR_Word base;
#line 347 "prog_io_sym_name.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "prog_io_sym_name.m"
                          *parse_tree__prog_io_sym_name__SymName_4 = base;
#line 347 "prog_io_sym_name.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Module_11));
#line 347 "prog_io_sym_name.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Name_9));
#line 347 "prog_io_sym_name.m"
                        }
#line 347 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 345 "prog_io_sym_name.m"
                      }
#line 345 "prog_io_sym_name.m"
                  }
#line 345 "prog_io_sym_name.m"
              }
#line 345 "prog_io_sym_name.m"
          }
#line 345 "prog_io_sym_name.m"
      }
#line 348 "prog_io_sym_name.m"
    else
#line 349 "prog_io_sym_name.m"
      {
#line 349 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_19_19;
#line 349 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_20_20;
#line 349 "prog_io_sym_name.m"
        MR_String parse_tree__prog_io_sym_name__V_21_21;
#line 349 "prog_io_sym_name.m"
        MR_String parse_tree__prog_io_sym_name__Name_22;
#line 349 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_12_12;

#line 349 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 349 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 349 "prog_io_sym_name.m"
          {
#line 349 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 0)));
#line 349 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 1)));
#line 349 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 2)));
#line 349 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 349 "prog_io_sym_name.m"
              {
#line 349 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 349 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 349 "prog_io_sym_name.m"
                  {
#line 349 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__Name_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_19_19, (MR_Integer) 0)));
#line 350 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_21_21 = (MR_String) "__";
#line 350 "prog_io_sym_name.m"
                    {
#line 350 "prog_io_sym_name.m"
                      *parse_tree__prog_io_sym_name__SymName_4 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(parse_tree__prog_io_sym_name__Name_22, parse_tree__prog_io_sym_name__V_21_21);
                    }
#line 350 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 349 "prog_io_sym_name.m"
                  }
#line 349 "prog_io_sym_name.m"
              }
#line 349 "prog_io_sym_name.m"
          }
#line 349 "prog_io_sym_name.m"
      }
#line 348 "prog_io_sym_name.m"
    return parse_tree__prog_io_sym_name__succeeded;
#line 348 "prog_io_sym_name.m"
  }
#line 116 "prog_io_sym_name.m"
}

#line 114 "prog_io_sym_name.m"
void MR_CALL 
parse_tree__prog_io_sym_name__parse_symbol_name_3_p_0(
#line 114 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_102,
#line 114 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__VarSet_4,
#line 114 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_5,
#line 114 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__MaybeSymName_6)
#line 114 "prog_io_sym_name.m"
{
#line 323 "prog_io_sym_name.m"
  {
#line 323 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 323 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__FunctorName_7;
#line 323 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__ModuleTerm_8;
#line 323 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__NameTerm_9;
#line 323 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__TermContext_10;
#line 295 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_21_21;
#line 295 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_22_22;
#line 295 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_23_23;
#line 295 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_24_24;

#line 294 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 294 "prog_io_sym_name.m"
      {
#line 294 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 0)));
#line 294 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 1)));
#line 294 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__TermContext_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 2)));
#line 294 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 294 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 294 "prog_io_sym_name.m"
          {
#line 294 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__FunctorName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_21_21, (MR_Integer) 0)));
#line 297 "prog_io_sym_name.m"
            if ((strcmp(parse_tree__prog_io_sym_name__FunctorName_7, (MR_String) ".") == 0))
#line 297 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 297 "prog_io_sym_name.m"
            else
#line 297 "prog_io_sym_name.m"
            if ((strcmp(parse_tree__prog_io_sym_name__FunctorName_7, (MR_String) ":") == 0))
#line 296 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 297 "prog_io_sym_name.m"
            else
#line 297 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__succeeded = MR_FALSE;
#line 295 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 295 "prog_io_sym_name.m"
              {
#line 294 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 294 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 294 "prog_io_sym_name.m"
                  {
#line 294 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__ModuleTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_22_22, (MR_Integer) 0)));
#line 294 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_22_22, (MR_Integer) 1)));
#line 294 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 294 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 294 "prog_io_sym_name.m"
                      {
#line 294 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__NameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_23_23, (MR_Integer) 0)));
#line 294 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_23_23, (MR_Integer) 1)));
#line 294 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "prog_io_sym_name.m"
                      }
#line 294 "prog_io_sym_name.m"
                  }
#line 295 "prog_io_sym_name.m"
              }
#line 294 "prog_io_sym_name.m"
          }
#line 294 "prog_io_sym_name.m"
      }
#line 323 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 316 "prog_io_sym_name.m"
      {
#line 316 "prog_io_sym_name.m"
        MR_String parse_tree__prog_io_sym_name__Name_11;
#line 300 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_25_25;
#line 300 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_26_26;
#line 300 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_12_12;

#line 300 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__NameTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 300 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 300 "prog_io_sym_name.m"
          {
#line 300 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameTerm_9, (MR_Integer) 0)));
#line 300 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameTerm_9, (MR_Integer) 1)));
#line 300 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameTerm_9, (MR_Integer) 2)));
#line 300 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 300 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 300 "prog_io_sym_name.m"
              {
#line 300 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 300 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 300 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_25_25, (MR_Integer) 0)));
#line 300 "prog_io_sym_name.m"
              }
#line 300 "prog_io_sym_name.m"
          }
#line 316 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 301 "prog_io_sym_name.m"
          {
#line 301 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__MaybeModule_13;

#line 301 "prog_io_sym_name.m"
            {
#line 301 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__parse_symbol_name_3_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_102, parse_tree__prog_io_sym_name__VarSet_4, parse_tree__prog_io_sym_name__ModuleTerm_8, &parse_tree__prog_io_sym_name__MaybeModule_13);
            }
#line 305 "prog_io_sym_name.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_sym_name__MaybeModule_13)) == (MR_mktag((MR_Integer) 0))))
#line 306 "prog_io_sym_name.m"
              {
#line 306 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Pieces_16;
#line 306 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Spec_17;
#line 306 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_29_29;
#line 306 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_32_32;
#line 306 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_33_33;
#line 306 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_42_42;
#line 306 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_43_43;
#line 306 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_44_44;
#line 306 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_45_45;
#line 306 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_48_48;

#line 309 "prog_io_sym_name.m"
                {
#line 309 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 309 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__FunctorName_7));
#line 309 "prog_io_sym_name.m"
                }
#line 309 "prog_io_sym_name.m"
                {
#line 309 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_33_33));
#line 309 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[12])));
#line 309 "prog_io_sym_name.m"
                }
#line 309 "prog_io_sym_name.m"
                {
#line 309 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[26])));
#line 309 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_32_32));
#line 309 "prog_io_sym_name.m"
                }
#line 308 "prog_io_sym_name.m"
                {
#line 308 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[25])));
#line 308 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__Pieces_16, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_29_29));
#line 308 "prog_io_sym_name.m"
                }
#line 312 "prog_io_sym_name.m"
                {
#line 312 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 312 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Pieces_16));
#line 312 "prog_io_sym_name.m"
                }
#line 312 "prog_io_sym_name.m"
                {
#line 312 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_45_45));
#line 312 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 312 "prog_io_sym_name.m"
                }
#line 312 "prog_io_sym_name.m"
                {
#line 312 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 312 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__TermContext_10));
#line 312 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_44_44));
#line 312 "prog_io_sym_name.m"
                }
#line 312 "prog_io_sym_name.m"
                {
#line 312 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_43_43));
#line 312 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 312 "prog_io_sym_name.m"
                }
#line 311 "prog_io_sym_name.m"
                {
#line 311 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 311 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 311 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 311 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_42_42));
#line 311 "prog_io_sym_name.m"
                }
#line 314 "prog_io_sym_name.m"
                {
#line 314 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_17));
#line 314 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 314 "prog_io_sym_name.m"
                }
#line 314 "prog_io_sym_name.m"
                {
#line 314 "prog_io_sym_name.m"
                  MR_Word base;
#line 314 "prog_io_sym_name.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 314 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymName_6 = base;
#line 314 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_48_48));
#line 314 "prog_io_sym_name.m"
                }
#line 306 "prog_io_sym_name.m"
              }
#line 305 "prog_io_sym_name.m"
            else
#line 303 "prog_io_sym_name.m"
              {
#line 303 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Module_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__MaybeModule_13, (MR_Integer) 0)));
#line 303 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_50_50;

#line 304 "prog_io_sym_name.m"
                {
#line 304 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Module_14));
#line 304 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_50_50, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Name_11));
#line 304 "prog_io_sym_name.m"
                }
#line 304 "prog_io_sym_name.m"
                {
#line 304 "prog_io_sym_name.m"
                  MR_Word base;
#line 304 "prog_io_sym_name.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 304 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymName_6 = base;
#line 304 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_50_50));
#line 304 "prog_io_sym_name.m"
                }
#line 303 "prog_io_sym_name.m"
              }
#line 301 "prog_io_sym_name.m"
          }
#line 316 "prog_io_sym_name.m"
        else
#line 318 "prog_io_sym_name.m"
          {
#line 318 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_53_53;
#line 318 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_54_54;
#line 318 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_63_63;
#line 318 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_64_64;
#line 318 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_65_65;
#line 318 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_66_66;
#line 318 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_69_69;
#line 318 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Pieces_95;
#line 318 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Spec_96;

#line 318 "prog_io_sym_name.m"
            {
#line 318 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 318 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__FunctorName_7));
#line 318 "prog_io_sym_name.m"
            }
#line 318 "prog_io_sym_name.m"
            {
#line 318 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_54_54));
#line 318 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[12])));
#line 318 "prog_io_sym_name.m"
            }
#line 317 "prog_io_sym_name.m"
            {
#line 317 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Pieces_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__Pieces_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[27])));
#line 317 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__Pieces_95, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_53_53));
#line 317 "prog_io_sym_name.m"
            }
#line 320 "prog_io_sym_name.m"
            {
#line 320 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 320 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Pieces_95));
#line 320 "prog_io_sym_name.m"
            }
#line 320 "prog_io_sym_name.m"
            {
#line 320 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_66_66));
#line 320 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 320 "prog_io_sym_name.m"
            }
#line 320 "prog_io_sym_name.m"
            {
#line 320 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 320 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__TermContext_10));
#line 320 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_65_65));
#line 320 "prog_io_sym_name.m"
            }
#line 320 "prog_io_sym_name.m"
            {
#line 320 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_64_64));
#line 320 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 320 "prog_io_sym_name.m"
            }
#line 319 "prog_io_sym_name.m"
            {
#line 319 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Spec_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 319 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 319 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_96, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_63_63));
#line 319 "prog_io_sym_name.m"
            }
#line 321 "prog_io_sym_name.m"
            {
#line 321 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_96));
#line 321 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 321 "prog_io_sym_name.m"
            }
#line 321 "prog_io_sym_name.m"
            {
#line 321 "prog_io_sym_name.m"
              MR_Word base;
#line 321 "prog_io_sym_name.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 321 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymName_6 = base;
#line 321 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_69_69));
#line 321 "prog_io_sym_name.m"
            }
#line 318 "prog_io_sym_name.m"
          }
#line 316 "prog_io_sym_name.m"
      }
#line 323 "prog_io_sym_name.m"
    else
#line 327 "prog_io_sym_name.m"
      {
#line 327 "prog_io_sym_name.m"
        MR_String parse_tree__prog_io_sym_name__Name_99;
#line 324 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_71_71;
#line 324 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_72_72;
#line 324 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_18_18;

#line 324 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 324 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 324 "prog_io_sym_name.m"
          {
#line 324 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 0)));
#line 324 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 1)));
#line 324 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 2)));
#line 324 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 324 "prog_io_sym_name.m"
              {
#line 324 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_71_71)) == (MR_mktag((MR_Integer) 0)));
#line 324 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 324 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Name_99 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_71_71, (MR_Integer) 0)));
#line 324 "prog_io_sym_name.m"
              }
#line 324 "prog_io_sym_name.m"
          }
#line 327 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 325 "prog_io_sym_name.m"
          {
#line 325 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__SymName_19;

#line 325 "prog_io_sym_name.m"
            {
#line 325 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__SymName_19 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(parse_tree__prog_io_sym_name__Name_99, (MR_String) "__");
            }
#line 326 "prog_io_sym_name.m"
            {
#line 326 "prog_io_sym_name.m"
              MR_Word base;
#line 326 "prog_io_sym_name.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 326 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymName_6 = base;
#line 326 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__SymName_19));
#line 326 "prog_io_sym_name.m"
            }
#line 325 "prog_io_sym_name.m"
          }
#line 327 "prog_io_sym_name.m"
        else
#line 328 "prog_io_sym_name.m"
          {
#line 328 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__TermStr_20;
#line 328 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_76_76;
#line 328 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_77_77;
#line 328 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_86_86;
#line 328 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_87_87;
#line 328 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_88_88;
#line 328 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_89_89;
#line 328 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_90_90;
#line 328 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_93_93;
#line 328 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Pieces_97;
#line 328 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Spec_98;

#line 328 "prog_io_sym_name.m"
            {
#line 328 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__TermStr_20 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_102, parse_tree__prog_io_sym_name__VarSet_4, parse_tree__prog_io_sym_name__Term_5);
            }
#line 330 "prog_io_sym_name.m"
            {
#line 330 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 330 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_77_77, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__TermStr_20));
#line 330 "prog_io_sym_name.m"
            }
#line 330 "prog_io_sym_name.m"
            {
#line 330 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_77_77));
#line 330 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[2])));
#line 330 "prog_io_sym_name.m"
            }
#line 329 "prog_io_sym_name.m"
            {
#line 329 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Pieces_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__Pieces_97, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[28])));
#line 329 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__Pieces_97, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_76_76));
#line 329 "prog_io_sym_name.m"
            }
#line 332 "prog_io_sym_name.m"
            {
#line 332 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_88_88 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_102, parse_tree__prog_io_sym_name__Term_5);
            }
#line 332 "prog_io_sym_name.m"
            {
#line 332 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 332 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Pieces_97));
#line 332 "prog_io_sym_name.m"
            }
#line 332 "prog_io_sym_name.m"
            {
#line 332 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_89_89, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_90_90));
#line 332 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 332 "prog_io_sym_name.m"
            }
#line 332 "prog_io_sym_name.m"
            {
#line 332 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 332 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_88_88));
#line 332 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_87_87, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_89_89));
#line 332 "prog_io_sym_name.m"
            }
#line 332 "prog_io_sym_name.m"
            {
#line 332 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_87_87));
#line 332 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 332 "prog_io_sym_name.m"
            }
#line 331 "prog_io_sym_name.m"
            {
#line 331 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Spec_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 331 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_98, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 331 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 331 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_98, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_86_86));
#line 331 "prog_io_sym_name.m"
            }
#line 333 "prog_io_sym_name.m"
            {
#line 333 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_98));
#line 333 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 333 "prog_io_sym_name.m"
            }
#line 333 "prog_io_sym_name.m"
            {
#line 333 "prog_io_sym_name.m"
              MR_Word base;
#line 333 "prog_io_sym_name.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 333 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymName_6 = base;
#line 333 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_93_93));
#line 333 "prog_io_sym_name.m"
            }
#line 328 "prog_io_sym_name.m"
          }
#line 327 "prog_io_sym_name.m"
      }
#line 323 "prog_io_sym_name.m"
  }
#line 114 "prog_io_sym_name.m"
}

#line 100 "prog_io_sym_name.m"
void MR_CALL 
parse_tree__prog_io_sym_name__parse_symbol_name_specifier_3_p_0(
#line 100 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__VarSet_4,
#line 100 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_5,
#line 100 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_6)
#line 100 "prog_io_sym_name.m"
{
#line 385 "prog_io_sym_name.m"
  {
#line 385 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded;

#line 386 "prog_io_sym_name.m"
    {
#line 386 "prog_io_sym_name.m"
      parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_specifier_4_p_0((MR_Word) &parse_tree__prog_io_sym_name_scalar_common_2[0], parse_tree__prog_io_sym_name__VarSet_4, parse_tree__prog_io_sym_name__Term_5, parse_tree__prog_io_sym_name__MaybeSymNameSpecifier_6);
    }
#line 385 "prog_io_sym_name.m"
  }
#line 100 "prog_io_sym_name.m"
}

#line 92 "prog_io_sym_name.m"
MR_bool MR_CALL 
parse_tree__prog_io_sym_name__try_parse_implicitly_qualified_sym_name_and_no_args_3_p_0(
#line 92 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_11,
#line 92 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__DefaultModuleName_4,
#line 92 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_5,
#line 92 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__SymName_6)
#line 92 "prog_io_sym_name.m"
{
#line 274 "prog_io_sym_name.m"
  {
#line 274 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded;
#line 274 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__SymName0_7;
#line 277 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_12_12;
#line 277 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__V_14_14;

#line 275 "prog_io_sym_name.m"
    {
#line 275 "prog_io_sym_name.m"
      parse_tree__prog_io_sym_name__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_11, parse_tree__prog_io_sym_name__Term_5, &parse_tree__prog_io_sym_name__SymName0_7);
    }
#line 274 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 274 "prog_io_sym_name.m"
      {
#line 431 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_14_14 = (MR_String) "";
#line 431 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_12_12 = (MR_Word) &parse_tree__prog_io_sym_name_scalar_common_2[0];
#line 277 "prog_io_sym_name.m"
        {
#line 277 "prog_io_sym_name.m"
          parse_tree__prog_io_sym_name__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_sym_name__DefaultModuleName_4, parse_tree__prog_io_sym_name__V_12_12);
        }
#line 280 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 279 "prog_io_sym_name.m"
          {
#line 279 "prog_io_sym_name.m"
            *parse_tree__prog_io_sym_name__SymName_6 = parse_tree__prog_io_sym_name__SymName0_7;
#line 279 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 279 "prog_io_sym_name.m"
          }
#line 280 "prog_io_sym_name.m"
        else
#line 285 "prog_io_sym_name.m"
          {
#line 281 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__ModuleName_8;
#line 281 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__V_9_9;

#line 281 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__SymName0_7)) == (MR_mktag((MR_Integer) 1)));
#line 281 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 281 "prog_io_sym_name.m"
              {
#line 281 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName0_7, (MR_Integer) 0)));
#line 281 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName0_7, (MR_Integer) 1)));
#line 282 "prog_io_sym_name.m"
                {
#line 282 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__prog_io_sym_name__ModuleName_8, parse_tree__prog_io_sym_name__DefaultModuleName_4);
                }
#line 282 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = !(parse_tree__prog_io_sym_name__succeeded);
#line 281 "prog_io_sym_name.m"
              }
#line 285 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 284 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__succeeded = MR_FALSE;
#line 285 "prog_io_sym_name.m"
            else
#line 286 "prog_io_sym_name.m"
              {
#line 286 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__UnqualName_10;

#line 286 "prog_io_sym_name.m"
                {
#line 286 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__UnqualName_10 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_sym_name__SymName0_7);
                }
#line 287 "prog_io_sym_name.m"
                {
#line 287 "prog_io_sym_name.m"
                  MR_Word base;
#line 287 "prog_io_sym_name.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__SymName_6 = base;
#line 287 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__DefaultModuleName_4));
#line 287 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__UnqualName_10));
#line 287 "prog_io_sym_name.m"
                }
#line 286 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 286 "prog_io_sym_name.m"
              }
#line 285 "prog_io_sym_name.m"
          }
#line 274 "prog_io_sym_name.m"
      }
#line 274 "prog_io_sym_name.m"
    return parse_tree__prog_io_sym_name__succeeded;
#line 274 "prog_io_sym_name.m"
  }
#line 92 "prog_io_sym_name.m"
}

#line 90 "prog_io_sym_name.m"
MR_bool MR_CALL 
parse_tree__prog_io_sym_name__try_parse_implicitly_qualified_sym_name_and_args_4_p_0(
#line 90 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_13,
#line 90 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__DefaultModuleName_5,
#line 90 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_6,
#line 90 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__SymName_7,
#line 90 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__Args_8)
#line 90 "prog_io_sym_name.m"
{
#line 257 "prog_io_sym_name.m"
  {
#line 257 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded;
#line 257 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__SymName0_9;
#line 260 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_14_14;
#line 260 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__V_16_16;

#line 258 "prog_io_sym_name.m"
    {
#line 258 "prog_io_sym_name.m"
      parse_tree__prog_io_sym_name__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_13, parse_tree__prog_io_sym_name__Term_6, &parse_tree__prog_io_sym_name__SymName0_9, parse_tree__prog_io_sym_name__Args_8);
    }
#line 257 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 257 "prog_io_sym_name.m"
      {
#line 431 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_16_16 = (MR_String) "";
#line 431 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__V_14_14 = (MR_Word) &parse_tree__prog_io_sym_name_scalar_common_2[0];
#line 260 "prog_io_sym_name.m"
        {
#line 260 "prog_io_sym_name.m"
          parse_tree__prog_io_sym_name__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_sym_name__DefaultModuleName_5, parse_tree__prog_io_sym_name__V_14_14);
        }
#line 263 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 262 "prog_io_sym_name.m"
          {
#line 262 "prog_io_sym_name.m"
            *parse_tree__prog_io_sym_name__SymName_7 = parse_tree__prog_io_sym_name__SymName0_9;
#line 262 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 262 "prog_io_sym_name.m"
          }
#line 263 "prog_io_sym_name.m"
        else
#line 268 "prog_io_sym_name.m"
          {
#line 264 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__ModuleName_10;
#line 264 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__V_11_11;

#line 264 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__SymName0_9)) == (MR_mktag((MR_Integer) 1)));
#line 264 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 264 "prog_io_sym_name.m"
              {
#line 264 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName0_9, (MR_Integer) 0)));
#line 264 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName0_9, (MR_Integer) 1)));
#line 265 "prog_io_sym_name.m"
                {
#line 265 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__prog_io_sym_name__ModuleName_10, parse_tree__prog_io_sym_name__DefaultModuleName_5);
                }
#line 265 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = !(parse_tree__prog_io_sym_name__succeeded);
#line 264 "prog_io_sym_name.m"
              }
#line 268 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 267 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__succeeded = MR_FALSE;
#line 268 "prog_io_sym_name.m"
            else
#line 269 "prog_io_sym_name.m"
              {
#line 269 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__UnqualName_12;

#line 269 "prog_io_sym_name.m"
                {
#line 269 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__UnqualName_12 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_sym_name__SymName0_9);
                }
#line 270 "prog_io_sym_name.m"
                {
#line 270 "prog_io_sym_name.m"
                  MR_Word base;
#line 270 "prog_io_sym_name.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__SymName_7 = base;
#line 270 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__DefaultModuleName_5));
#line 270 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__UnqualName_12));
#line 270 "prog_io_sym_name.m"
                }
#line 269 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 269 "prog_io_sym_name.m"
              }
#line 268 "prog_io_sym_name.m"
          }
#line 257 "prog_io_sym_name.m"
      }
#line 257 "prog_io_sym_name.m"
    return parse_tree__prog_io_sym_name__succeeded;
#line 257 "prog_io_sym_name.m"
  }
#line 90 "prog_io_sym_name.m"
}

#line 87 "prog_io_sym_name.m"
void MR_CALL 
parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(
#line 87 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_46,
#line 87 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__DefaultModuleName_6,
#line 87 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_7,
#line 87 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__VarSet_8,
#line 87 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__ContextPieces_9,
#line 87 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_10)
#line 87 "prog_io_sym_name.m"
{
#line 228 "prog_io_sym_name.m"
  {
#line 228 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded;
#line 228 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__MaybeSymNameAndArgs0_11;

#line 229 "prog_io_sym_name.m"
    {
#line 229 "prog_io_sym_name.m"
      parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_46, parse_tree__prog_io_sym_name__Term_7, parse_tree__prog_io_sym_name__VarSet_8, parse_tree__prog_io_sym_name__ContextPieces_9, &parse_tree__prog_io_sym_name__MaybeSymNameAndArgs0_11);
    }
#line 251 "prog_io_sym_name.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_sym_name__MaybeSymNameAndArgs0_11)) == (MR_mktag((MR_Integer) 0))))
#line 253 "prog_io_sym_name.m"
      *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_10 = parse_tree__prog_io_sym_name__MaybeSymNameAndArgs0_11;
#line 251 "prog_io_sym_name.m"
    else
#line 231 "prog_io_sym_name.m"
      {
#line 231 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__MaybeSymNameAndArgs0_11, (MR_Integer) 0)));
#line 231 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__MaybeSymNameAndArgs0_11, (MR_Integer) 1)));

#line 233 "prog_io_sym_name.m"
        {
#line 233 "prog_io_sym_name.m"
          parse_tree__prog_io_sym_name__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_sym_name__DefaultModuleName_6, (MR_Word) &parse_tree__prog_io_sym_name_scalar_common_2[0]);
        }
#line 236 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 235 "prog_io_sym_name.m"
          *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_10 = parse_tree__prog_io_sym_name__MaybeSymNameAndArgs0_11;
#line 236 "prog_io_sym_name.m"
        else
#line 246 "prog_io_sym_name.m"
          {
#line 237 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__ModuleName_14;
#line 237 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__V_15_15;

#line 237 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__SymName_12)) == (MR_mktag((MR_Integer) 1)));
#line 237 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 237 "prog_io_sym_name.m"
              {
#line 237 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName_12, (MR_Integer) 0)));
#line 237 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__SymName_12, (MR_Integer) 1)));
#line 238 "prog_io_sym_name.m"
                {
#line 238 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__prog_io_sym_name__ModuleName_14, parse_tree__prog_io_sym_name__DefaultModuleName_6);
                }
#line 238 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = !(parse_tree__prog_io_sym_name__succeeded);
#line 237 "prog_io_sym_name.m"
              }
#line 246 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 242 "prog_io_sym_name.m"
              {
#line 242 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Spec_17;
#line 242 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_37_37;
#line 242 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_38_38;
#line 242 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_39_39;
#line 242 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_44_44;

#line 244 "prog_io_sym_name.m"
                {
#line 244 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_39_39 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_46, parse_tree__prog_io_sym_name__Term_7);
                }
#line 244 "prog_io_sym_name.m"
                {
#line 244 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 244 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_39_39));
#line 244 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[24])));
#line 244 "prog_io_sym_name.m"
                }
#line 244 "prog_io_sym_name.m"
                {
#line 244 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_38_38));
#line 244 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 244 "prog_io_sym_name.m"
                }
#line 243 "prog_io_sym_name.m"
                {
#line 243 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 243 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 243 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 243 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_37_37));
#line 243 "prog_io_sym_name.m"
                }
#line 245 "prog_io_sym_name.m"
                {
#line 245 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_17));
#line 245 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 245 "prog_io_sym_name.m"
                }
#line 245 "prog_io_sym_name.m"
                {
#line 245 "prog_io_sym_name.m"
                  MR_Word base;
#line 245 "prog_io_sym_name.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 245 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_10 = base;
#line 245 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_44_44));
#line 245 "prog_io_sym_name.m"
                }
#line 242 "prog_io_sym_name.m"
              }
#line 246 "prog_io_sym_name.m"
            else
#line 247 "prog_io_sym_name.m"
              {
#line 247 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__UnqualName_18;
#line 247 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__QualSymName_19;

#line 247 "prog_io_sym_name.m"
                {
#line 247 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__UnqualName_18 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_sym_name__SymName_12);
                }
#line 248 "prog_io_sym_name.m"
                {
#line 248 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__QualSymName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__QualSymName_19, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__DefaultModuleName_6));
#line 248 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__QualSymName_19, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__UnqualName_18));
#line 248 "prog_io_sym_name.m"
                }
#line 249 "prog_io_sym_name.m"
                {
#line 249 "prog_io_sym_name.m"
                  MR_Word base;
#line 249 "prog_io_sym_name.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_10 = base;
#line 249 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__QualSymName_19));
#line 249 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Args_13));
#line 249 "prog_io_sym_name.m"
                }
#line 247 "prog_io_sym_name.m"
              }
#line 246 "prog_io_sym_name.m"
          }
#line 231 "prog_io_sym_name.m"
      }
#line 228 "prog_io_sym_name.m"
  }
#line 87 "prog_io_sym_name.m"
}

#line 71 "prog_io_sym_name.m"
MR_bool MR_CALL 
parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0(
#line 71 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_19,
#line 71 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Functor_5,
#line 71 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__FunctorArgs_6,
#line 71 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__SymName_7,
#line 71 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__Args_8)
#line 71 "prog_io_sym_name.m"
{
#line 196 "prog_io_sym_name.m"
  {
#line 196 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Functor_5)) == (MR_mktag((MR_Integer) 0)));
#line 196 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__FunctorName_9;
#line 205 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__ModuleTerm_10;
#line 205 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__NameArgsTerm_11;
#line 199 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_15_15;
#line 199 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_16_16;

#line 197 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 197 "prog_io_sym_name.m"
      {
#line 197 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__FunctorName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Functor_5, (MR_Integer) 0)));
#line 199 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = (strcmp(parse_tree__prog_io_sym_name__FunctorName_9, (MR_String) ".") == 0);
#line 199 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 199 "prog_io_sym_name.m"
          {
#line 200 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__FunctorArgs_6)) == (MR_mktag((MR_Integer) 1)));
#line 200 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 200 "prog_io_sym_name.m"
              {
#line 200 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__ModuleTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_6, (MR_Integer) 0)));
#line 200 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_6, (MR_Integer) 1)));
#line 200 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 200 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 200 "prog_io_sym_name.m"
                  {
#line 200 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__NameArgsTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_15_15, (MR_Integer) 0)));
#line 200 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_15_15, (MR_Integer) 1)));
#line 200 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 200 "prog_io_sym_name.m"
                  }
#line 200 "prog_io_sym_name.m"
              }
#line 199 "prog_io_sym_name.m"
          }
#line 205 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 202 "prog_io_sym_name.m"
          {
#line 202 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__Name_12;
#line 202 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Module_14;
#line 202 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_17_17;
#line 202 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_13_13;

#line 202 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__NameArgsTerm_11)) == (MR_mktag((MR_Integer) 0)));
#line 202 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 202 "prog_io_sym_name.m"
              {
#line 202 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_11, (MR_Integer) 0)));
#line 202 "prog_io_sym_name.m"
                *parse_tree__prog_io_sym_name__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_11, (MR_Integer) 1)));
#line 202 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_11, (MR_Integer) 2)));
#line 202 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 202 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 202 "prog_io_sym_name.m"
                  {
#line 202 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_17_17, (MR_Integer) 0)));
#line 203 "prog_io_sym_name.m"
                    {
#line 203 "prog_io_sym_name.m"
                      parse_tree__prog_io_sym_name__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_19, parse_tree__prog_io_sym_name__ModuleTerm_10, &parse_tree__prog_io_sym_name__Module_14);
                    }
#line 202 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 202 "prog_io_sym_name.m"
                      {
#line 204 "prog_io_sym_name.m"
                        {
#line 204 "prog_io_sym_name.m"
                          MR_Word base;
#line 204 "prog_io_sym_name.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_io_sym_name.m"
                          *parse_tree__prog_io_sym_name__SymName_7 = base;
#line 204 "prog_io_sym_name.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Module_14));
#line 204 "prog_io_sym_name.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Name_12));
#line 204 "prog_io_sym_name.m"
                        }
#line 204 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 202 "prog_io_sym_name.m"
                      }
#line 202 "prog_io_sym_name.m"
                  }
#line 202 "prog_io_sym_name.m"
              }
#line 202 "prog_io_sym_name.m"
          }
#line 205 "prog_io_sym_name.m"
        else
#line 206 "prog_io_sym_name.m"
          {
#line 206 "prog_io_sym_name.m"
            {
#line 206 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__SymName_7 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(parse_tree__prog_io_sym_name__FunctorName_9, (MR_String) "__");
            }
#line 207 "prog_io_sym_name.m"
            *parse_tree__prog_io_sym_name__Args_8 = parse_tree__prog_io_sym_name__FunctorArgs_6;
#line 206 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 206 "prog_io_sym_name.m"
          }
#line 197 "prog_io_sym_name.m"
      }
#line 196 "prog_io_sym_name.m"
    return parse_tree__prog_io_sym_name__succeeded;
#line 196 "prog_io_sym_name.m"
  }
#line 71 "prog_io_sym_name.m"
}

#line 62 "prog_io_sym_name.m"
MR_bool MR_CALL 
parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(
#line 62 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_19,
#line 62 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_3,
#line 62 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__SymName_4)
#line 62 "prog_io_sym_name.m"
{
#line 210 "prog_io_sym_name.m"
  {
#line 210 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 210 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__Functor_5;
#line 210 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__FunctorArgs_6;
#line 210 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__FunctorName_8;
#line 211 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name___TermContext_7;
#line 220 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__ModuleTerm_9;
#line 220 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__NameArgsTerm_10;
#line 214 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_14_14;
#line 214 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_15_15;

#line 211 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 211 "prog_io_sym_name.m"
      {
#line 211 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__Functor_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 0)));
#line 211 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__FunctorArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 1)));
#line 211 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name___TermContext_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_3, (MR_Integer) 2)));
#line 212 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Functor_5)) == (MR_mktag((MR_Integer) 0)));
#line 212 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 212 "prog_io_sym_name.m"
          {
#line 212 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__FunctorName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Functor_5, (MR_Integer) 0)));
#line 214 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (strcmp(parse_tree__prog_io_sym_name__FunctorName_8, (MR_String) ".") == 0);
#line 214 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 214 "prog_io_sym_name.m"
              {
#line 215 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__FunctorArgs_6)) == (MR_mktag((MR_Integer) 1)));
#line 215 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 215 "prog_io_sym_name.m"
                  {
#line 215 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__ModuleTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_6, (MR_Integer) 0)));
#line 215 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_6, (MR_Integer) 1)));
#line 215 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 215 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 215 "prog_io_sym_name.m"
                      {
#line 215 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__NameArgsTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_14_14, (MR_Integer) 0)));
#line 215 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_14_14, (MR_Integer) 1)));
#line 215 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 215 "prog_io_sym_name.m"
                      }
#line 215 "prog_io_sym_name.m"
                  }
#line 214 "prog_io_sym_name.m"
              }
#line 220 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 217 "prog_io_sym_name.m"
              {
#line 217 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__Name_11;
#line 217 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Module_13;
#line 217 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_16_16;
#line 217 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_17_17;
#line 217 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_12_12;

#line 217 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__NameArgsTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 217 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 217 "prog_io_sym_name.m"
                  {
#line 217 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_10, (MR_Integer) 0)));
#line 217 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_10, (MR_Integer) 1)));
#line 217 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_10, (MR_Integer) 2)));
#line 217 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 217 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 217 "prog_io_sym_name.m"
                      {
#line 217 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 217 "prog_io_sym_name.m"
                        if (parse_tree__prog_io_sym_name__succeeded)
#line 217 "prog_io_sym_name.m"
                          {
#line 217 "prog_io_sym_name.m"
                            parse_tree__prog_io_sym_name__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_16_16, (MR_Integer) 0)));
#line 218 "prog_io_sym_name.m"
                            {
#line 218 "prog_io_sym_name.m"
                              parse_tree__prog_io_sym_name__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_19, parse_tree__prog_io_sym_name__ModuleTerm_9, &parse_tree__prog_io_sym_name__Module_13);
                            }
#line 217 "prog_io_sym_name.m"
                            if (parse_tree__prog_io_sym_name__succeeded)
#line 217 "prog_io_sym_name.m"
                              {
#line 219 "prog_io_sym_name.m"
                                {
#line 219 "prog_io_sym_name.m"
                                  MR_Word base;
#line 219 "prog_io_sym_name.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "prog_io_sym_name.m"
                                  *parse_tree__prog_io_sym_name__SymName_4 = base;
#line 219 "prog_io_sym_name.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Module_13));
#line 219 "prog_io_sym_name.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Name_11));
#line 219 "prog_io_sym_name.m"
                                }
#line 219 "prog_io_sym_name.m"
                                parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 217 "prog_io_sym_name.m"
                              }
#line 217 "prog_io_sym_name.m"
                          }
#line 217 "prog_io_sym_name.m"
                      }
#line 217 "prog_io_sym_name.m"
                  }
#line 217 "prog_io_sym_name.m"
              }
#line 220 "prog_io_sym_name.m"
            else
#line 221 "prog_io_sym_name.m"
              {
#line 221 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__V_18_18;

#line 221 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__FunctorArgs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 221 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 221 "prog_io_sym_name.m"
                  {
#line 222 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_18_18 = (MR_String) "__";
#line 222 "prog_io_sym_name.m"
                    {
#line 222 "prog_io_sym_name.m"
                      *parse_tree__prog_io_sym_name__SymName_4 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(parse_tree__prog_io_sym_name__FunctorName_8, parse_tree__prog_io_sym_name__V_18_18);
                    }
#line 222 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 221 "prog_io_sym_name.m"
                  }
#line 221 "prog_io_sym_name.m"
              }
#line 212 "prog_io_sym_name.m"
          }
#line 211 "prog_io_sym_name.m"
      }
#line 210 "prog_io_sym_name.m"
    return parse_tree__prog_io_sym_name__succeeded;
#line 210 "prog_io_sym_name.m"
  }
#line 62 "prog_io_sym_name.m"
}

#line 60 "prog_io_sym_name.m"
MR_bool MR_CALL 
parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(
#line 60 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_10,
#line 60 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_4,
#line 60 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__SymName_5,
#line 60 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__Args_6)
#line 60 "prog_io_sym_name.m"
{
#line 189 "prog_io_sym_name.m"
  {
#line 189 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_4)) == (MR_mktag((MR_Integer) 0)));
#line 189 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__Functor_7;
#line 189 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__FunctorArgs_8;
#line 189 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__FunctorName_15;
#line 190 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name___TermContext_9;
#line 205 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__ModuleTerm_16;
#line 205 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__NameArgsTerm_17;
#line 199 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_21_21;
#line 199 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_22_22;

#line 190 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 190 "prog_io_sym_name.m"
      {
#line 190 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__Functor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_4, (MR_Integer) 0)));
#line 190 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__FunctorArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_4, (MR_Integer) 1)));
#line 190 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name___TermContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_4, (MR_Integer) 2)));
#line 197 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Functor_7)) == (MR_mktag((MR_Integer) 0)));
#line 197 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 197 "prog_io_sym_name.m"
          {
#line 197 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__FunctorName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Functor_7, (MR_Integer) 0)));
#line 199 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (strcmp(parse_tree__prog_io_sym_name__FunctorName_15, (MR_String) ".") == 0);
#line 199 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 199 "prog_io_sym_name.m"
              {
#line 200 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__FunctorArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 200 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 200 "prog_io_sym_name.m"
                  {
#line 200 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__ModuleTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_8, (MR_Integer) 0)));
#line 200 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_8, (MR_Integer) 1)));
#line 200 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 200 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 200 "prog_io_sym_name.m"
                      {
#line 200 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__NameArgsTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_21_21, (MR_Integer) 0)));
#line 200 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_21_21, (MR_Integer) 1)));
#line 200 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 200 "prog_io_sym_name.m"
                      }
#line 200 "prog_io_sym_name.m"
                  }
#line 199 "prog_io_sym_name.m"
              }
#line 205 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 202 "prog_io_sym_name.m"
              {
#line 202 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__Name_18;
#line 202 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Module_20;
#line 202 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_23_23;
#line 202 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_19_19;

#line 202 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__NameArgsTerm_17)) == (MR_mktag((MR_Integer) 0)));
#line 202 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 202 "prog_io_sym_name.m"
                  {
#line 202 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_17, (MR_Integer) 0)));
#line 202 "prog_io_sym_name.m"
                    *parse_tree__prog_io_sym_name__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_17, (MR_Integer) 1)));
#line 202 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_17, (MR_Integer) 2)));
#line 202 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 202 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 202 "prog_io_sym_name.m"
                      {
#line 202 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__Name_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_23_23, (MR_Integer) 0)));
#line 203 "prog_io_sym_name.m"
                        {
#line 203 "prog_io_sym_name.m"
                          parse_tree__prog_io_sym_name__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_10, parse_tree__prog_io_sym_name__ModuleTerm_16, &parse_tree__prog_io_sym_name__Module_20);
                        }
#line 202 "prog_io_sym_name.m"
                        if (parse_tree__prog_io_sym_name__succeeded)
#line 202 "prog_io_sym_name.m"
                          {
#line 204 "prog_io_sym_name.m"
                            {
#line 204 "prog_io_sym_name.m"
                              MR_Word base;
#line 204 "prog_io_sym_name.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_io_sym_name.m"
                              *parse_tree__prog_io_sym_name__SymName_5 = base;
#line 204 "prog_io_sym_name.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Module_20));
#line 204 "prog_io_sym_name.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Name_18));
#line 204 "prog_io_sym_name.m"
                            }
#line 204 "prog_io_sym_name.m"
                            parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 202 "prog_io_sym_name.m"
                          }
#line 202 "prog_io_sym_name.m"
                      }
#line 202 "prog_io_sym_name.m"
                  }
#line 202 "prog_io_sym_name.m"
              }
#line 205 "prog_io_sym_name.m"
            else
#line 206 "prog_io_sym_name.m"
              {
#line 206 "prog_io_sym_name.m"
                {
#line 206 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__SymName_5 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(parse_tree__prog_io_sym_name__FunctorName_15, (MR_String) "__");
                }
#line 207 "prog_io_sym_name.m"
                *parse_tree__prog_io_sym_name__Args_6 = parse_tree__prog_io_sym_name__FunctorArgs_8;
#line 206 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = MR_TRUE;
#line 206 "prog_io_sym_name.m"
              }
#line 197 "prog_io_sym_name.m"
          }
#line 190 "prog_io_sym_name.m"
      }
#line 189 "prog_io_sym_name.m"
    return parse_tree__prog_io_sym_name__succeeded;
#line 189 "prog_io_sym_name.m"
  }
#line 60 "prog_io_sym_name.m"
}

#line 58 "prog_io_sym_name.m"
void MR_CALL 
parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0(
#line 58 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__TypeInfo_for_T_127,
#line 58 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__Term_5,
#line 58 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__VarSet_6,
#line 58 "prog_io_sym_name.m"
  MR_Word parse_tree__prog_io_sym_name__ContextPieces_7,
#line 58 "prog_io_sym_name.m"
  MR_Word * parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_8)
#line 58 "prog_io_sym_name.m"
{
#line 173 "prog_io_sym_name.m"
  {
#line 173 "prog_io_sym_name.m"
    MR_bool parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 173 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__TermContext_11;
#line 173 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__ModuleTerm_12;
#line 173 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__NameArgsTerm_13;
#line 140 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__Functor_9;
#line 140 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__FunctorArgs_10;
#line 140 "prog_io_sym_name.m"
    MR_String parse_tree__prog_io_sym_name__V_27_27;
#line 140 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_28_28;
#line 140 "prog_io_sym_name.m"
    MR_Word parse_tree__prog_io_sym_name__V_29_29;

#line 140 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 140 "prog_io_sym_name.m"
      {
#line 140 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__Functor_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 0)));
#line 140 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__FunctorArgs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 1)));
#line 140 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__TermContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 2)));
#line 141 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Functor_9)) == (MR_mktag((MR_Integer) 0)));
#line 141 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 141 "prog_io_sym_name.m"
          {
#line 141 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Functor_9, (MR_Integer) 0)));
#line 141 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = (strcmp(parse_tree__prog_io_sym_name__V_27_27, (MR_String) ".") == 0);
#line 140 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 140 "prog_io_sym_name.m"
              {
#line 142 "prog_io_sym_name.m"
                parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__FunctorArgs_10)) == (MR_mktag((MR_Integer) 1)));
#line 142 "prog_io_sym_name.m"
                if (parse_tree__prog_io_sym_name__succeeded)
#line 142 "prog_io_sym_name.m"
                  {
#line 142 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__ModuleTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_10, (MR_Integer) 0)));
#line 142 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__FunctorArgs_10, (MR_Integer) 1)));
#line 142 "prog_io_sym_name.m"
                    parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 142 "prog_io_sym_name.m"
                    if (parse_tree__prog_io_sym_name__succeeded)
#line 142 "prog_io_sym_name.m"
                      {
#line 142 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__NameArgsTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_28_28, (MR_Integer) 0)));
#line 142 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_28_28, (MR_Integer) 1)));
#line 142 "prog_io_sym_name.m"
                        parse_tree__prog_io_sym_name__succeeded = (parse_tree__prog_io_sym_name__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 142 "prog_io_sym_name.m"
                      }
#line 142 "prog_io_sym_name.m"
                  }
#line 140 "prog_io_sym_name.m"
              }
#line 141 "prog_io_sym_name.m"
          }
#line 140 "prog_io_sym_name.m"
      }
#line 173 "prog_io_sym_name.m"
    if (parse_tree__prog_io_sym_name__succeeded)
#line 162 "prog_io_sym_name.m"
      {
#line 162 "prog_io_sym_name.m"
        MR_String parse_tree__prog_io_sym_name__Name_14;
#line 162 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__Args_15;
#line 144 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_30_30;
#line 144 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_16_16;

#line 144 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__NameArgsTerm_13)) == (MR_mktag((MR_Integer) 0)));
#line 144 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 144 "prog_io_sym_name.m"
          {
#line 144 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_13, (MR_Integer) 0)));
#line 144 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_13, (MR_Integer) 1)));
#line 144 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__NameArgsTerm_13, (MR_Integer) 2)));
#line 144 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 144 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 144 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_30_30, (MR_Integer) 0)));
#line 144 "prog_io_sym_name.m"
          }
#line 162 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 145 "prog_io_sym_name.m"
          {
#line 145 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__GenericVarSet_17;
#line 145 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__MaybeModule_18;

#line 145 "prog_io_sym_name.m"
            {
#line 145 "prog_io_sym_name.m"
              mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_sym_name__TypeInfo_for_T_127, parse_tree__prog_io_sym_name__VarSet_6, &parse_tree__prog_io_sym_name__GenericVarSet_17);
            }
#line 146 "prog_io_sym_name.m"
            {
#line 146 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__parse_symbol_name_3_p_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_127, parse_tree__prog_io_sym_name__GenericVarSet_17, parse_tree__prog_io_sym_name__ModuleTerm_12, &parse_tree__prog_io_sym_name__MaybeModule_18);
            }
#line 150 "prog_io_sym_name.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_sym_name__MaybeModule_18)) == (MR_mktag((MR_Integer) 0))))
#line 151 "prog_io_sym_name.m"
              {
#line 151 "prog_io_sym_name.m"
                MR_String parse_tree__prog_io_sym_name__ModuleTermStr_21;
#line 151 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Pieces_22;
#line 151 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Spec_23;
#line 151 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_31_31;
#line 151 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_33_33;
#line 151 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_36_36;
#line 151 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_39_39;
#line 151 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_40_40;
#line 151 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_49_49;
#line 151 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_50_50;
#line 151 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_51_51;
#line 151 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_52_52;
#line 151 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_55_55;

#line 152 "prog_io_sym_name.m"
                {
#line 152 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__ModuleTermStr_21 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_127, parse_tree__prog_io_sym_name__GenericVarSet_17, parse_tree__prog_io_sym_name__ModuleTerm_12);
                }
#line 157 "prog_io_sym_name.m"
                {
#line 157 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 157 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__ModuleTermStr_21));
#line 157 "prog_io_sym_name.m"
                }
#line 157 "prog_io_sym_name.m"
                {
#line 157 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_40_40));
#line 157 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[2])));
#line 157 "prog_io_sym_name.m"
                }
#line 156 "prog_io_sym_name.m"
                {
#line 156 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 156 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[21])));
#line 156 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_36_36, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_39_39));
#line 156 "prog_io_sym_name.m"
                }
#line 155 "prog_io_sym_name.m"
                {
#line 155 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[20])));
#line 155 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_36_36));
#line 155 "prog_io_sym_name.m"
                }
#line 154 "prog_io_sym_name.m"
                {
#line 154 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_31_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 154 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_31_31, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_33_33));
#line 154 "prog_io_sym_name.m"
                }
#line 154 "prog_io_sym_name.m"
                {
#line 154 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_sym_name__ContextPieces_7, parse_tree__prog_io_sym_name__V_31_31);
                }
#line 159 "prog_io_sym_name.m"
                {
#line 159 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 159 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Pieces_22));
#line 159 "prog_io_sym_name.m"
                }
#line 159 "prog_io_sym_name.m"
                {
#line 159 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 159 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_52_52));
#line 159 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 159 "prog_io_sym_name.m"
                }
#line 159 "prog_io_sym_name.m"
                {
#line 159 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 159 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__TermContext_11));
#line 159 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_50_50, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_51_51));
#line 159 "prog_io_sym_name.m"
                }
#line 159 "prog_io_sym_name.m"
                {
#line 159 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 159 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_50_50));
#line 159 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 159 "prog_io_sym_name.m"
                }
#line 158 "prog_io_sym_name.m"
                {
#line 158 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 158 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 158 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 158 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_23, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_49_49));
#line 158 "prog_io_sym_name.m"
                }
#line 160 "prog_io_sym_name.m"
                {
#line 160 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_23));
#line 160 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 160 "prog_io_sym_name.m"
                }
#line 160 "prog_io_sym_name.m"
                {
#line 160 "prog_io_sym_name.m"
                  MR_Word base;
#line 160 "prog_io_sym_name.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 160 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_8 = base;
#line 160 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_55_55));
#line 160 "prog_io_sym_name.m"
                }
#line 151 "prog_io_sym_name.m"
              }
#line 150 "prog_io_sym_name.m"
            else
#line 148 "prog_io_sym_name.m"
              {
#line 148 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__Module_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__MaybeModule_18, (MR_Integer) 0)));
#line 148 "prog_io_sym_name.m"
                MR_Word parse_tree__prog_io_sym_name__V_57_57;

#line 149 "prog_io_sym_name.m"
                {
#line 149 "prog_io_sym_name.m"
                  parse_tree__prog_io_sym_name__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Module_19));
#line 149 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Name_14));
#line 149 "prog_io_sym_name.m"
                }
#line 149 "prog_io_sym_name.m"
                {
#line 149 "prog_io_sym_name.m"
                  MR_Word base;
#line 149 "prog_io_sym_name.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "prog_io_sym_name.m"
                  *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_8 = base;
#line 149 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_57_57));
#line 149 "prog_io_sym_name.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Args_15));
#line 149 "prog_io_sym_name.m"
                }
#line 148 "prog_io_sym_name.m"
              }
#line 145 "prog_io_sym_name.m"
          }
#line 162 "prog_io_sym_name.m"
        else
#line 163 "prog_io_sym_name.m"
          {
#line 163 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__TermStr_24;
#line 163 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_58_58;
#line 163 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_60_60;
#line 163 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_63_63;
#line 163 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_66_66;
#line 163 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_67_67;
#line 163 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_76_76;
#line 163 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_77_77;
#line 163 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_78_78;
#line 163 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_79_79;
#line 163 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_82_82;
#line 163 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__GenericVarSet_110;
#line 163 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Pieces_111;
#line 163 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Spec_112;

#line 163 "prog_io_sym_name.m"
            {
#line 163 "prog_io_sym_name.m"
              mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_sym_name__TypeInfo_for_T_127, parse_tree__prog_io_sym_name__VarSet_6, &parse_tree__prog_io_sym_name__GenericVarSet_110);
            }
#line 164 "prog_io_sym_name.m"
            {
#line 164 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__TermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_127, parse_tree__prog_io_sym_name__GenericVarSet_110, parse_tree__prog_io_sym_name__Term_5);
            }
#line 168 "prog_io_sym_name.m"
            {
#line 168 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 168 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 168 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_67_67, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__TermStr_24));
#line 168 "prog_io_sym_name.m"
            }
#line 168 "prog_io_sym_name.m"
            {
#line 168 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 168 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_67_67));
#line 168 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[2])));
#line 168 "prog_io_sym_name.m"
            }
#line 167 "prog_io_sym_name.m"
            {
#line 167 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[21])));
#line 167 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_66_66));
#line 167 "prog_io_sym_name.m"
            }
#line 166 "prog_io_sym_name.m"
            {
#line 166 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[22])));
#line 166 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_63_63));
#line 166 "prog_io_sym_name.m"
            }
#line 165 "prog_io_sym_name.m"
            {
#line 165 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 165 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_60_60));
#line 165 "prog_io_sym_name.m"
            }
#line 165 "prog_io_sym_name.m"
            {
#line 165 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Pieces_111 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_sym_name__ContextPieces_7, parse_tree__prog_io_sym_name__V_58_58);
            }
#line 170 "prog_io_sym_name.m"
            {
#line 170 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 170 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Pieces_111));
#line 170 "prog_io_sym_name.m"
            }
#line 170 "prog_io_sym_name.m"
            {
#line 170 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_79_79));
#line 170 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 170 "prog_io_sym_name.m"
            }
#line 170 "prog_io_sym_name.m"
            {
#line 170 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 170 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__TermContext_11));
#line 170 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_77_77, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_78_78));
#line 170 "prog_io_sym_name.m"
            }
#line 170 "prog_io_sym_name.m"
            {
#line 170 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_77_77));
#line 170 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 170 "prog_io_sym_name.m"
            }
#line 169 "prog_io_sym_name.m"
            {
#line 169 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Spec_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 169 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 169 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 169 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_112, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_76_76));
#line 169 "prog_io_sym_name.m"
            }
#line 171 "prog_io_sym_name.m"
            {
#line 171 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_112));
#line 171 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 171 "prog_io_sym_name.m"
            }
#line 171 "prog_io_sym_name.m"
            {
#line 171 "prog_io_sym_name.m"
              MR_Word base;
#line 171 "prog_io_sym_name.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 171 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_8 = base;
#line 171 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_82_82));
#line 171 "prog_io_sym_name.m"
            }
#line 163 "prog_io_sym_name.m"
          }
#line 162 "prog_io_sym_name.m"
      }
#line 173 "prog_io_sym_name.m"
    else
#line 174 "prog_io_sym_name.m"
      {
#line 174 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__GenericVarSet_123;
#line 178 "prog_io_sym_name.m"
        MR_String parse_tree__prog_io_sym_name__Name_116;
#line 178 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__Args_117;
#line 175 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_84_84;
#line 175 "prog_io_sym_name.m"
        MR_Word parse_tree__prog_io_sym_name__V_25_25;

#line 174 "prog_io_sym_name.m"
        {
#line 174 "prog_io_sym_name.m"
          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_sym_name__TypeInfo_for_T_127, parse_tree__prog_io_sym_name__VarSet_6, &parse_tree__prog_io_sym_name__GenericVarSet_123);
        }
#line 175 "prog_io_sym_name.m"
        parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 175 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 175 "prog_io_sym_name.m"
          {
#line 175 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 0)));
#line 175 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__Args_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 1)));
#line 175 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Term_5, (MR_Integer) 2)));
#line 175 "prog_io_sym_name.m"
            parse_tree__prog_io_sym_name__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_sym_name__V_84_84)) == (MR_mktag((MR_Integer) 0)));
#line 175 "prog_io_sym_name.m"
            if (parse_tree__prog_io_sym_name__succeeded)
#line 175 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Name_116 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_84_84, (MR_Integer) 0)));
#line 175 "prog_io_sym_name.m"
          }
#line 178 "prog_io_sym_name.m"
        if (parse_tree__prog_io_sym_name__succeeded)
#line 176 "prog_io_sym_name.m"
          {
#line 176 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__SymName_26;

#line 176 "prog_io_sym_name.m"
            {
#line 176 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__SymName_26 = mdbcomp__sym_name__string_to_sym_name_sep_2_f_0(parse_tree__prog_io_sym_name__Name_116, (MR_String) "__");
            }
#line 177 "prog_io_sym_name.m"
            {
#line 177 "prog_io_sym_name.m"
              MR_Word base;
#line 177 "prog_io_sym_name.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 177 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_8 = base;
#line 177 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__SymName_26));
#line 177 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__Args_117));
#line 177 "prog_io_sym_name.m"
            }
#line 176 "prog_io_sym_name.m"
          }
#line 178 "prog_io_sym_name.m"
        else
#line 179 "prog_io_sym_name.m"
          {
#line 179 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_86_86;
#line 179 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_88_88;
#line 179 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_91_91;
#line 179 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_92_92;
#line 179 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_101_101;
#line 179 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_102_102;
#line 179 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_103_103;
#line 179 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_104_104;
#line 179 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_105_105;
#line 179 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__V_108_108;
#line 179 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Pieces_113;
#line 179 "prog_io_sym_name.m"
            MR_Word parse_tree__prog_io_sym_name__Spec_114;
#line 179 "prog_io_sym_name.m"
            MR_String parse_tree__prog_io_sym_name__TermStr_115;

#line 179 "prog_io_sym_name.m"
            {
#line 179 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__TermStr_115 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_127, parse_tree__prog_io_sym_name__GenericVarSet_123, parse_tree__prog_io_sym_name__Term_5);
            }
#line 182 "prog_io_sym_name.m"
            {
#line 182 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 182 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_sym_name__V_92_92, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__TermStr_115));
#line 182 "prog_io_sym_name.m"
            }
#line 182 "prog_io_sym_name.m"
            {
#line 182 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_92_92));
#line 182 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_sym_name_scalar_common_1[2])));
#line 182 "prog_io_sym_name.m"
            }
#line 181 "prog_io_sym_name.m"
            {
#line 181 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_88_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_sym_name_scalar_common_1[23])));
#line 181 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_88_88, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_91_91));
#line 181 "prog_io_sym_name.m"
            }
#line 180 "prog_io_sym_name.m"
            {
#line 180 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_86_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 180 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_86_86, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_88_88));
#line 180 "prog_io_sym_name.m"
            }
#line 180 "prog_io_sym_name.m"
            {
#line 180 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Pieces_113 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_sym_name__ContextPieces_7, parse_tree__prog_io_sym_name__V_86_86);
            }
#line 184 "prog_io_sym_name.m"
            {
#line 184 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_103_103 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_sym_name__TypeInfo_for_T_127, parse_tree__prog_io_sym_name__Term_5);
            }
#line 184 "prog_io_sym_name.m"
            {
#line 184 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 184 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_105_105, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Pieces_113));
#line 184 "prog_io_sym_name.m"
            }
#line 184 "prog_io_sym_name.m"
            {
#line 184 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 184 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_104_104, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_105_105));
#line 184 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 184 "prog_io_sym_name.m"
            }
#line 184 "prog_io_sym_name.m"
            {
#line 184 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 184 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_103_103));
#line 184 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__V_102_102, 1) = ((MR_Box) (parse_tree__prog_io_sym_name__V_104_104));
#line 184 "prog_io_sym_name.m"
            }
#line 184 "prog_io_sym_name.m"
            {
#line 184 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 184 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_102_102));
#line 184 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 184 "prog_io_sym_name.m"
            }
#line 183 "prog_io_sym_name.m"
            {
#line 183 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__Spec_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 183 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_114, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 183 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_sym_name__Spec_114, 2) = ((MR_Box) (parse_tree__prog_io_sym_name__V_101_101));
#line 183 "prog_io_sym_name.m"
            }
#line 185 "prog_io_sym_name.m"
            {
#line 185 "prog_io_sym_name.m"
              parse_tree__prog_io_sym_name__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_108_108, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__Spec_114));
#line 185 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_sym_name__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 185 "prog_io_sym_name.m"
            }
#line 185 "prog_io_sym_name.m"
            {
#line 185 "prog_io_sym_name.m"
              MR_Word base;
#line 185 "prog_io_sym_name.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 185 "prog_io_sym_name.m"
              *parse_tree__prog_io_sym_name__MaybeSymNameAndArgs_8 = base;
#line 185 "prog_io_sym_name.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_sym_name__V_108_108));
#line 185 "prog_io_sym_name.m"
            }
#line 179 "prog_io_sym_name.m"
          }
#line 174 "prog_io_sym_name.m"
      }
#line 173 "prog_io_sym_name.m"
  }
#line 58 "prog_io_sym_name.m"
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
