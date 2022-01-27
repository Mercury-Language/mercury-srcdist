/*
** Automatically generated from `check_raw_comp_unit.m'
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


/* :- module parse_tree.check_raw_comp_unit. */
/* :- implementation. */

/*
INIT mercury__parse_tree__check_raw_comp_unit__init
ENDINIT
*/

#include "parse_tree.check_raw_comp_unit.mih"


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
#include "parse_tree.comp_unit_interface.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static void MR_CALL 
parse_tree__check_raw_comp_unit__generate_no_exports_warning_3_p_0(
  MR_Word parse_tree__check_raw_comp_unit__ModuleName_4,
  MR_Word parse_tree__check_raw_comp_unit__Context_5,
  MR_Word * parse_tree__check_raw_comp_unit__Spec_6);

static void MR_CALL 
parse_tree__check_raw_comp_unit__do_ms_interface_items_export_anything_2_p_0(
  MR_Word parse_tree__check_raw_comp_unit__HeadVar__1_1,
  MR_Word * parse_tree__check_raw_comp_unit__HeadVar__2_2);

static void MR_CALL 
parse_tree__check_raw_comp_unit__do_ms_interface_item_blocks_export_anything_2_p_0(
  MR_Word parse_tree__check_raw_comp_unit__HeadVar__1_1,
  MR_Word * parse_tree__check_raw_comp_unit__HeadVar__2_2);


static /* final */ const MR_Box parse_tree__check_raw_comp_unit_scalar_common_1[1][4];

static /* final */ const MR_Box parse_tree__check_raw_comp_unit_scalar_common_2[36][2];

static /* final */ const MR_Box parse_tree__check_raw_comp_unit_scalar_common_3[1][1];




static /* final */ const MR_Box parse_tree__check_raw_comp_unit_scalar_common_1[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__check_raw_comp_unit_scalar_common_2[36][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not export anything."))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[0])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[0])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "inst"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "type"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[14])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[17])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This would normally be a"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in its interface section(s)."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "other than"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "A file should contain at least one declaration"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "To be useful, a module should export something."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[30])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[32])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__check_raw_comp_unit_scalar_common_2[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: interface for module"))
  },
};

static /* final */ const MR_Box parse_tree__check_raw_comp_unit_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static void MR_CALL 
parse_tree__check_raw_comp_unit__generate_no_exports_warning_3_p_0(
  MR_Word parse_tree__check_raw_comp_unit__ModuleName_4,
  MR_Word parse_tree__check_raw_comp_unit__Context_5,
  MR_Word * parse_tree__check_raw_comp_unit__Spec_6)
{
  {
    MR_bool parse_tree__check_raw_comp_unit__succeeded;
    MR_Word parse_tree__check_raw_comp_unit__Component_8;
    MR_Word parse_tree__check_raw_comp_unit__Msg_9;
    MR_Word parse_tree__check_raw_comp_unit__V_16_16;
    MR_Word parse_tree__check_raw_comp_unit__V_17_17;
    MR_Word parse_tree__check_raw_comp_unit__V_18_18;
    MR_Word parse_tree__check_raw_comp_unit__V_21_21;
    MR_Word parse_tree__check_raw_comp_unit__V_24_24;
    MR_Word parse_tree__check_raw_comp_unit__V_25_25;
    MR_Word parse_tree__check_raw_comp_unit__V_87_87;
    MR_Word parse_tree__check_raw_comp_unit__V_90_90;

    {
      parse_tree__check_raw_comp_unit__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__check_raw_comp_unit__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__check_raw_comp_unit__V_25_25, 1) = ((MR_Box) (parse_tree__check_raw_comp_unit__ModuleName_4));
    }
    {
      parse_tree__check_raw_comp_unit__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_24_24, 0) = ((MR_Box) (parse_tree__check_raw_comp_unit__V_25_25));
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[2])));
    }
    {
      parse_tree__check_raw_comp_unit__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[35])));
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_21_21, 1) = ((MR_Box) (parse_tree__check_raw_comp_unit__V_24_24));
    }
    {
      parse_tree__check_raw_comp_unit__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_18_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_3[0])));
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_18_18, 1) = ((MR_Box) (parse_tree__check_raw_comp_unit__V_21_21));
    }
    {
      parse_tree__check_raw_comp_unit__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__V_17_17, 0) = ((MR_Box) (parse_tree__check_raw_comp_unit__V_18_18));
    }
    {
      parse_tree__check_raw_comp_unit__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_16_16, 0) = ((MR_Box) (parse_tree__check_raw_comp_unit__V_17_17));
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[34])));
    }
    {
      parse_tree__check_raw_comp_unit__Component_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__Component_8, 0) = ((MR_Box) (((MR_Integer) 9 | (((MR_Integer) 1 << (MR_Integer) 10)))));
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__Component_8, 1) = ((MR_Box) (parse_tree__check_raw_comp_unit__V_16_16));
    }
    {
      parse_tree__check_raw_comp_unit__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_87_87, 0) = ((MR_Box) (parse_tree__check_raw_comp_unit__Component_8));
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__check_raw_comp_unit__Msg_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__Msg_9, 0) = ((MR_Box) (parse_tree__check_raw_comp_unit__Context_5));
      MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__Msg_9, 1) = ((MR_Box) (parse_tree__check_raw_comp_unit__V_87_87));
    }
    {
      parse_tree__check_raw_comp_unit__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_90_90, 0) = ((MR_Box) (parse_tree__check_raw_comp_unit__Msg_9));
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__check_raw_comp_unit__Spec_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_1[0])));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__check_raw_comp_unit__V_90_90));
    }
  }
}

static void MR_CALL 
parse_tree__check_raw_comp_unit__do_ms_interface_items_export_anything_2_p_0(
  MR_Word parse_tree__check_raw_comp_unit__HeadVar__1_1,
  MR_Word * parse_tree__check_raw_comp_unit__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__check_raw_comp_unit__succeeded;

        if ((parse_tree__check_raw_comp_unit__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__check_raw_comp_unit__HeadVar__2_2 = (MR_Integer) 0;
        else
          {
            MR_Word parse_tree__check_raw_comp_unit__Item_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__check_raw_comp_unit__Items_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__check_raw_comp_unit__V_6_6;

            parse_tree__check_raw_comp_unit__succeeded = ((((MR_tag((MR_Word) parse_tree__check_raw_comp_unit__Item_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__check_raw_comp_unit__Item_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
            if (parse_tree__check_raw_comp_unit__succeeded)
              {
                parse_tree__check_raw_comp_unit__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__check_raw_comp_unit__Item_3, (MR_Integer) 1)));
                /* direct tailcall eliminated */
                {
                  MR_Word parse_tree__check_raw_comp_unit__HeadVar__1__tmp_copy_1 = parse_tree__check_raw_comp_unit__Items_4;

                  parse_tree__check_raw_comp_unit__HeadVar__1_1 = parse_tree__check_raw_comp_unit__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
            else
              *parse_tree__check_raw_comp_unit__HeadVar__2_2 = (MR_Integer) 1;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__check_raw_comp_unit__do_ms_interface_item_blocks_export_anything_2_p_0(
  MR_Word parse_tree__check_raw_comp_unit__HeadVar__1_1,
  MR_Word * parse_tree__check_raw_comp_unit__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__check_raw_comp_unit__succeeded;

        if ((parse_tree__check_raw_comp_unit__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__check_raw_comp_unit__HeadVar__2_2 = (MR_Integer) 0;
        else
          {
            MR_Word parse_tree__check_raw_comp_unit__RawItemBlock_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__check_raw_comp_unit__RawItemBlocks_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__check_raw_comp_unit__Section_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__RawItemBlock_3, (MR_Integer) 0)));
            MR_Word parse_tree__check_raw_comp_unit__Incls_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__RawItemBlock_3, (MR_Integer) 2)));
            MR_Word parse_tree__check_raw_comp_unit__Items_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__RawItemBlock_3, (MR_Integer) 4)));
            MR_Word parse_tree__check_raw_comp_unit__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__RawItemBlock_3, (MR_Integer) 1)));
            MR_Word parse_tree__check_raw_comp_unit___Avails_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__RawItemBlock_3, (MR_Integer) 3)));

            parse_tree__check_raw_comp_unit__succeeded = (parse_tree__check_raw_comp_unit__Section_6 == (MR_Integer) 0);
            if (parse_tree__check_raw_comp_unit__succeeded)
              {
                {
                  MR_Word parse_tree__check_raw_comp_unit__V_11_11;
                  MR_Word parse_tree__check_raw_comp_unit__V_12_12;

                  parse_tree__check_raw_comp_unit__succeeded = ((MR_tag((MR_Word) parse_tree__check_raw_comp_unit__Incls_8)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__check_raw_comp_unit__succeeded)
                    {
                      parse_tree__check_raw_comp_unit__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__Incls_8, (MR_Integer) 0)));
                      parse_tree__check_raw_comp_unit__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__Incls_8, (MR_Integer) 1)));
                    }
                }
                if (!(parse_tree__check_raw_comp_unit__succeeded))
                  {
                    MR_Word parse_tree__check_raw_comp_unit__V_14_14;

                    {
                      parse_tree__check_raw_comp_unit__do_ms_interface_items_export_anything_2_p_0(parse_tree__check_raw_comp_unit__Items_10, &parse_tree__check_raw_comp_unit__V_14_14);
                    }
                    parse_tree__check_raw_comp_unit__succeeded = ((MR_Integer) 1 == parse_tree__check_raw_comp_unit__V_14_14);
                  }
              }
            if (parse_tree__check_raw_comp_unit__succeeded)
              *parse_tree__check_raw_comp_unit__HeadVar__2_2 = (MR_Integer) 1;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word parse_tree__check_raw_comp_unit__HeadVar__1__tmp_copy_1 = parse_tree__check_raw_comp_unit__RawItemBlocks_4;

                  parse_tree__check_raw_comp_unit__HeadVar__1_1 = parse_tree__check_raw_comp_unit__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

void MR_CALL 
parse_tree__check_raw_comp_unit__check_int_for_no_exports_3_p_0(
  MR_Word parse_tree__check_raw_comp_unit__IntRawCompUnit_4,
  MR_Word parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_0_11,
  MR_Word * parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_12)
{
  {
    MR_bool parse_tree__check_raw_comp_unit__succeeded;
    MR_Word parse_tree__check_raw_comp_unit__ModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__IntRawCompUnit_4, (MR_Integer) 0)));
    MR_Word parse_tree__check_raw_comp_unit__Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__IntRawCompUnit_4, (MR_Integer) 1)));
    MR_Word parse_tree__check_raw_comp_unit__RawItemBlocks_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__IntRawCompUnit_4, (MR_Integer) 2)));
    MR_Word parse_tree__check_raw_comp_unit__ExportAnything_9;

    {
      parse_tree__check_raw_comp_unit__do_ms_interface_item_blocks_export_anything_2_p_0(parse_tree__check_raw_comp_unit__RawItemBlocks_8, &parse_tree__check_raw_comp_unit__ExportAnything_9);
    }
    switch (parse_tree__check_raw_comp_unit__ExportAnything_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__check_raw_comp_unit__WarnSpec_10;

          {
            parse_tree__check_raw_comp_unit__generate_no_exports_warning_3_p_0(parse_tree__check_raw_comp_unit__ModuleName_6, parse_tree__check_raw_comp_unit__Context_7, &parse_tree__check_raw_comp_unit__WarnSpec_10);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__check_raw_comp_unit__WarnSpec_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_0_11));
          }
        }
        break;
      case (MR_Integer) 1:
        *parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_12 = parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_0_11;
        break;
    }
  }
}

void MR_CALL 
parse_tree__check_raw_comp_unit__check_for_no_exports_4_p_0(
  MR_Word parse_tree__check_raw_comp_unit__Globals_5,
  MR_Word parse_tree__check_raw_comp_unit__RawCompUnit_6,
  MR_Word parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_0_10,
  MR_Word * parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_11)
{
  {
    MR_bool parse_tree__check_raw_comp_unit__succeeded;
    MR_Word parse_tree__check_raw_comp_unit__ExportWarning_8;

    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__check_raw_comp_unit__Globals_5, (MR_Integer) 9, &parse_tree__check_raw_comp_unit__ExportWarning_8);
    }
    switch (parse_tree__check_raw_comp_unit__ExportWarning_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_11 = parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_0_10;
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__check_raw_comp_unit__IntRawCompUnit_9;
          MR_Word parse_tree__check_raw_comp_unit__ModuleName_19;
          MR_Word parse_tree__check_raw_comp_unit__Context_20;
          MR_Word parse_tree__check_raw_comp_unit__RawItemBlocks_21;
          MR_Word parse_tree__check_raw_comp_unit__ExportAnything_22;

          {
            parse_tree__comp_unit_interface__get_interface_3_p_0((MR_Integer) 0, parse_tree__check_raw_comp_unit__RawCompUnit_6, &parse_tree__check_raw_comp_unit__IntRawCompUnit_9);
          }
          parse_tree__check_raw_comp_unit__ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__IntRawCompUnit_9, (MR_Integer) 0)));
          parse_tree__check_raw_comp_unit__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__IntRawCompUnit_9, (MR_Integer) 1)));
          parse_tree__check_raw_comp_unit__RawItemBlocks_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__IntRawCompUnit_9, (MR_Integer) 2)));
          {
            parse_tree__check_raw_comp_unit__do_ms_interface_item_blocks_export_anything_2_p_0(parse_tree__check_raw_comp_unit__RawItemBlocks_21, &parse_tree__check_raw_comp_unit__ExportAnything_22);
          }
          switch (parse_tree__check_raw_comp_unit__ExportAnything_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__check_raw_comp_unit__WarnSpec_23;

                {
                  parse_tree__check_raw_comp_unit__generate_no_exports_warning_3_p_0(parse_tree__check_raw_comp_unit__ModuleName_19, parse_tree__check_raw_comp_unit__Context_20, &parse_tree__check_raw_comp_unit__WarnSpec_23);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_11 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__check_raw_comp_unit__WarnSpec_23));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_0_10));
                }
              }
              break;
            case (MR_Integer) 1:
              *parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_11 = parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_0_10;
              break;
          }
        }
        break;
    }
  }
}

void mercury__parse_tree__check_raw_comp_unit__init(void)
{
}

void mercury__parse_tree__check_raw_comp_unit__init_type_tables(void)
{
}

void mercury__parse_tree__check_raw_comp_unit__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__check_raw_comp_unit__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module parse_tree.check_raw_comp_unit. */
