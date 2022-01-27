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


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.file_util.mih"
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
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 120 "check_raw_comp_unit.m"
static void MR_CALL 
parse_tree__check_raw_comp_unit__generate_no_exports_warning_6_p_0(
#line 120 "check_raw_comp_unit.m"
  MR_Word parse_tree__check_raw_comp_unit__Globals_7,
#line 120 "check_raw_comp_unit.m"
  MR_Word parse_tree__check_raw_comp_unit__ModuleName_8,
#line 120 "check_raw_comp_unit.m"
  MR_Word parse_tree__check_raw_comp_unit__Context0_9,
#line 120 "check_raw_comp_unit.m"
  MR_Word * parse_tree__check_raw_comp_unit__Spec_10);

#line 107 "check_raw_comp_unit.m"
static void MR_CALL 
parse_tree__check_raw_comp_unit__do_ms_interface_items_export_anything_2_p_0(
#line 107 "check_raw_comp_unit.m"
  MR_Word parse_tree__check_raw_comp_unit__HeadVar__1_1,
#line 107 "check_raw_comp_unit.m"
  MR_Word * parse_tree__check_raw_comp_unit__HeadVar__2_2);

#line 86 "check_raw_comp_unit.m"
static void MR_CALL 
parse_tree__check_raw_comp_unit__do_ms_interface_item_blocks_export_anything_2_p_0(
#line 86 "check_raw_comp_unit.m"
  MR_Word parse_tree__check_raw_comp_unit__HeadVar__1_1,
#line 86 "check_raw_comp_unit.m"
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



#line 120 "check_raw_comp_unit.m"
static void MR_CALL 
parse_tree__check_raw_comp_unit__generate_no_exports_warning_6_p_0(
#line 120 "check_raw_comp_unit.m"
  MR_Word parse_tree__check_raw_comp_unit__Globals_7,
#line 120 "check_raw_comp_unit.m"
  MR_Word parse_tree__check_raw_comp_unit__ModuleName_8,
#line 120 "check_raw_comp_unit.m"
  MR_Word parse_tree__check_raw_comp_unit__Context0_9,
#line 120 "check_raw_comp_unit.m"
  MR_Word * parse_tree__check_raw_comp_unit__Spec_10)
#line 120 "check_raw_comp_unit.m"
{
#line 123 "check_raw_comp_unit.m"
  {
#line 123 "check_raw_comp_unit.m"
    MR_bool parse_tree__check_raw_comp_unit__succeeded;
#line 123 "check_raw_comp_unit.m"
    MR_Word parse_tree__check_raw_comp_unit__Context_13;
#line 123 "check_raw_comp_unit.m"
    MR_Word parse_tree__check_raw_comp_unit__Component_15;
#line 123 "check_raw_comp_unit.m"
    MR_Word parse_tree__check_raw_comp_unit__Msg_16;
#line 123 "check_raw_comp_unit.m"
    MR_Word parse_tree__check_raw_comp_unit__V_29_29;
#line 123 "check_raw_comp_unit.m"
    MR_Word parse_tree__check_raw_comp_unit__V_30_30;
#line 123 "check_raw_comp_unit.m"
    MR_Word parse_tree__check_raw_comp_unit__V_31_31;
#line 123 "check_raw_comp_unit.m"
    MR_Word parse_tree__check_raw_comp_unit__V_34_34;
#line 123 "check_raw_comp_unit.m"
    MR_Word parse_tree__check_raw_comp_unit__V_37_37;
#line 123 "check_raw_comp_unit.m"
    MR_Word parse_tree__check_raw_comp_unit__V_38_38;
#line 123 "check_raw_comp_unit.m"
    MR_Word parse_tree__check_raw_comp_unit__V_100_100;
#line 123 "check_raw_comp_unit.m"
    MR_Word parse_tree__check_raw_comp_unit__V_103_103;
#line 129 "check_raw_comp_unit.m"
    MR_Word parse_tree__check_raw_comp_unit__V_105_105;

#line 129 "check_raw_comp_unit.m"
    {
#line 129 "check_raw_comp_unit.m"
      parse_tree__check_raw_comp_unit__V_105_105 = mercury__term__context_init_0_f_0();
    }
#line 129 "check_raw_comp_unit.m"
    {
#line 129 "check_raw_comp_unit.m"
      parse_tree__check_raw_comp_unit__succeeded = mercury__term____Unify____context_0_0(parse_tree__check_raw_comp_unit__Context0_9, parse_tree__check_raw_comp_unit__V_105_105);
    }
#line 133 "check_raw_comp_unit.m"
    if (parse_tree__check_raw_comp_unit__succeeded)
#line 131 "check_raw_comp_unit.m"
      {
#line 131 "check_raw_comp_unit.m"
        MR_String parse_tree__check_raw_comp_unit__FileName_12;

#line 130 "check_raw_comp_unit.m"
        {
#line 130 "check_raw_comp_unit.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__check_raw_comp_unit__Globals_7, parse_tree__check_raw_comp_unit__ModuleName_8, (MR_String) ".m", (MR_Integer) 1, &parse_tree__check_raw_comp_unit__FileName_12);
        }
#line 132 "check_raw_comp_unit.m"
        {
#line 132 "check_raw_comp_unit.m"
          parse_tree__check_raw_comp_unit__Context_13 = mercury__term__context_init_2_f_0(parse_tree__check_raw_comp_unit__FileName_12, (MR_Integer) 1);
        }
#line 131 "check_raw_comp_unit.m"
      }
#line 133 "check_raw_comp_unit.m"
    else
#line 134 "check_raw_comp_unit.m"
      parse_tree__check_raw_comp_unit__Context_13 = parse_tree__check_raw_comp_unit__Context0_9;
#line 140 "check_raw_comp_unit.m"
    {
#line 140 "check_raw_comp_unit.m"
      parse_tree__check_raw_comp_unit__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 140 "check_raw_comp_unit.m"
      MR_hl_field(MR_mktag(3), parse_tree__check_raw_comp_unit__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 140 "check_raw_comp_unit.m"
      MR_hl_field(MR_mktag(3), parse_tree__check_raw_comp_unit__V_38_38, 1) = ((MR_Box) (parse_tree__check_raw_comp_unit__ModuleName_8));
#line 140 "check_raw_comp_unit.m"
    }
#line 140 "check_raw_comp_unit.m"
    {
#line 140 "check_raw_comp_unit.m"
      parse_tree__check_raw_comp_unit__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 140 "check_raw_comp_unit.m"
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_37_37, 0) = ((MR_Box) (parse_tree__check_raw_comp_unit__V_38_38));
#line 140 "check_raw_comp_unit.m"
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[2])));
#line 140 "check_raw_comp_unit.m"
    }
#line 140 "check_raw_comp_unit.m"
    {
#line 140 "check_raw_comp_unit.m"
      parse_tree__check_raw_comp_unit__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 140 "check_raw_comp_unit.m"
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[35])));
#line 140 "check_raw_comp_unit.m"
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_34_34, 1) = ((MR_Box) (parse_tree__check_raw_comp_unit__V_37_37));
#line 140 "check_raw_comp_unit.m"
    }
#line 139 "check_raw_comp_unit.m"
    {
#line 139 "check_raw_comp_unit.m"
      parse_tree__check_raw_comp_unit__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 139 "check_raw_comp_unit.m"
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_31_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_3[0])));
#line 139 "check_raw_comp_unit.m"
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_31_31, 1) = ((MR_Box) (parse_tree__check_raw_comp_unit__V_34_34));
#line 139 "check_raw_comp_unit.m"
    }
#line 139 "check_raw_comp_unit.m"
    {
#line 139 "check_raw_comp_unit.m"
      parse_tree__check_raw_comp_unit__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 139 "check_raw_comp_unit.m"
      MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__V_30_30, 0) = ((MR_Box) (parse_tree__check_raw_comp_unit__V_31_31));
#line 139 "check_raw_comp_unit.m"
    }
#line 141 "check_raw_comp_unit.m"
    {
#line 141 "check_raw_comp_unit.m"
      parse_tree__check_raw_comp_unit__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 141 "check_raw_comp_unit.m"
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_29_29, 0) = ((MR_Box) (parse_tree__check_raw_comp_unit__V_30_30));
#line 141 "check_raw_comp_unit.m"
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[34])));
#line 141 "check_raw_comp_unit.m"
    }
#line 138 "check_raw_comp_unit.m"
    {
#line 138 "check_raw_comp_unit.m"
      parse_tree__check_raw_comp_unit__Component_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 138 "check_raw_comp_unit.m"
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__Component_15, 0) = ((MR_Box) (((MR_Integer) 9 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 138 "check_raw_comp_unit.m"
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__Component_15, 1) = ((MR_Box) (parse_tree__check_raw_comp_unit__V_29_29));
#line 138 "check_raw_comp_unit.m"
    }
#line 152 "check_raw_comp_unit.m"
    {
#line 152 "check_raw_comp_unit.m"
      parse_tree__check_raw_comp_unit__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "check_raw_comp_unit.m"
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_100_100, 0) = ((MR_Box) (parse_tree__check_raw_comp_unit__Component_15));
#line 152 "check_raw_comp_unit.m"
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 152 "check_raw_comp_unit.m"
    }
#line 152 "check_raw_comp_unit.m"
    {
#line 152 "check_raw_comp_unit.m"
      parse_tree__check_raw_comp_unit__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 152 "check_raw_comp_unit.m"
      MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__Msg_16, 0) = ((MR_Box) (parse_tree__check_raw_comp_unit__Context_13));
#line 152 "check_raw_comp_unit.m"
      MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__Msg_16, 1) = ((MR_Box) (parse_tree__check_raw_comp_unit__V_100_100));
#line 152 "check_raw_comp_unit.m"
    }
#line 153 "check_raw_comp_unit.m"
    {
#line 153 "check_raw_comp_unit.m"
      parse_tree__check_raw_comp_unit__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "check_raw_comp_unit.m"
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_103_103, 0) = ((MR_Box) (parse_tree__check_raw_comp_unit__Msg_16));
#line 153 "check_raw_comp_unit.m"
      MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 153 "check_raw_comp_unit.m"
    }
#line 153 "check_raw_comp_unit.m"
    {
#line 153 "check_raw_comp_unit.m"
      MR_Word base;
#line 153 "check_raw_comp_unit.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 153 "check_raw_comp_unit.m"
      *parse_tree__check_raw_comp_unit__Spec_10 = base;
#line 153 "check_raw_comp_unit.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_1[0])));
#line 153 "check_raw_comp_unit.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 153 "check_raw_comp_unit.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__check_raw_comp_unit__V_103_103));
#line 153 "check_raw_comp_unit.m"
    }
#line 123 "check_raw_comp_unit.m"
  }
#line 120 "check_raw_comp_unit.m"
}

#line 107 "check_raw_comp_unit.m"
static void MR_CALL 
parse_tree__check_raw_comp_unit__do_ms_interface_items_export_anything_2_p_0(
#line 107 "check_raw_comp_unit.m"
  MR_Word parse_tree__check_raw_comp_unit__HeadVar__1_1,
#line 107 "check_raw_comp_unit.m"
  MR_Word * parse_tree__check_raw_comp_unit__HeadVar__2_2)
#line 107 "check_raw_comp_unit.m"
{
#line 110 "check_raw_comp_unit.m"
  while (MR_TRUE)
#line 110 "check_raw_comp_unit.m"
    {
#line 110 "check_raw_comp_unit.m"
      /* tailcall optimized into a loop */
#line 110 "check_raw_comp_unit.m"
      {
#line 110 "check_raw_comp_unit.m"
        MR_bool parse_tree__check_raw_comp_unit__succeeded;

#line 110 "check_raw_comp_unit.m"
        if ((parse_tree__check_raw_comp_unit__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 110 "check_raw_comp_unit.m"
          *parse_tree__check_raw_comp_unit__HeadVar__2_2 = (MR_Integer) 0;
#line 110 "check_raw_comp_unit.m"
        else
#line 111 "check_raw_comp_unit.m"
          {
#line 111 "check_raw_comp_unit.m"
            MR_Word parse_tree__check_raw_comp_unit__Item_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__HeadVar__1_1, (MR_Integer) 0)));
#line 111 "check_raw_comp_unit.m"
            MR_Word parse_tree__check_raw_comp_unit__Items_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__HeadVar__1_1, (MR_Integer) 1)));
#line 112 "check_raw_comp_unit.m"
            MR_Word parse_tree__check_raw_comp_unit__V_6_6;

#line 112 "check_raw_comp_unit.m"
            parse_tree__check_raw_comp_unit__succeeded = ((((MR_tag((MR_Word) parse_tree__check_raw_comp_unit__Item_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__check_raw_comp_unit__Item_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 112 "check_raw_comp_unit.m"
            if (parse_tree__check_raw_comp_unit__succeeded)
#line 112 "check_raw_comp_unit.m"
              {
#line 112 "check_raw_comp_unit.m"
                parse_tree__check_raw_comp_unit__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__check_raw_comp_unit__Item_3, (MR_Integer) 1)));
#line 114 "check_raw_comp_unit.m"
                /* direct tailcall eliminated */
#line 114 "check_raw_comp_unit.m"
                {
#line 114 "check_raw_comp_unit.m"
                  MR_Word parse_tree__check_raw_comp_unit__HeadVar__1__tmp_copy_1 = parse_tree__check_raw_comp_unit__Items_4;

#line 114 "check_raw_comp_unit.m"
                  parse_tree__check_raw_comp_unit__HeadVar__1_1 = parse_tree__check_raw_comp_unit__HeadVar__1__tmp_copy_1;
#line 114 "check_raw_comp_unit.m"
                }
#line 114 "check_raw_comp_unit.m"
                continue;
#line 112 "check_raw_comp_unit.m"
              }
#line 112 "check_raw_comp_unit.m"
            else
#line 117 "check_raw_comp_unit.m"
              *parse_tree__check_raw_comp_unit__HeadVar__2_2 = (MR_Integer) 1;
#line 111 "check_raw_comp_unit.m"
          }
#line 110 "check_raw_comp_unit.m"
      }
#line 110 "check_raw_comp_unit.m"
      break;
#line 110 "check_raw_comp_unit.m"
    }
#line 107 "check_raw_comp_unit.m"
}

#line 86 "check_raw_comp_unit.m"
static void MR_CALL 
parse_tree__check_raw_comp_unit__do_ms_interface_item_blocks_export_anything_2_p_0(
#line 86 "check_raw_comp_unit.m"
  MR_Word parse_tree__check_raw_comp_unit__HeadVar__1_1,
#line 86 "check_raw_comp_unit.m"
  MR_Word * parse_tree__check_raw_comp_unit__HeadVar__2_2)
#line 86 "check_raw_comp_unit.m"
{
#line 89 "check_raw_comp_unit.m"
  while (MR_TRUE)
#line 89 "check_raw_comp_unit.m"
    {
#line 89 "check_raw_comp_unit.m"
      /* tailcall optimized into a loop */
#line 89 "check_raw_comp_unit.m"
      {
#line 89 "check_raw_comp_unit.m"
        MR_bool parse_tree__check_raw_comp_unit__succeeded;

#line 89 "check_raw_comp_unit.m"
        if ((parse_tree__check_raw_comp_unit__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 89 "check_raw_comp_unit.m"
          *parse_tree__check_raw_comp_unit__HeadVar__2_2 = (MR_Integer) 0;
#line 89 "check_raw_comp_unit.m"
        else
#line 91 "check_raw_comp_unit.m"
          {
#line 91 "check_raw_comp_unit.m"
            MR_Word parse_tree__check_raw_comp_unit__RawItemBlock_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__HeadVar__1_1, (MR_Integer) 0)));
#line 91 "check_raw_comp_unit.m"
            MR_Word parse_tree__check_raw_comp_unit__RawItemBlocks_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__HeadVar__1_1, (MR_Integer) 1)));
#line 91 "check_raw_comp_unit.m"
            MR_Word parse_tree__check_raw_comp_unit__Section_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__RawItemBlock_3, (MR_Integer) 0)));
#line 91 "check_raw_comp_unit.m"
            MR_Word parse_tree__check_raw_comp_unit__Incls_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__RawItemBlock_3, (MR_Integer) 2)));
#line 91 "check_raw_comp_unit.m"
            MR_Word parse_tree__check_raw_comp_unit__Items_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__RawItemBlock_3, (MR_Integer) 4)));
#line 92 "check_raw_comp_unit.m"
            MR_Word parse_tree__check_raw_comp_unit__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__RawItemBlock_3, (MR_Integer) 1)));
#line 92 "check_raw_comp_unit.m"
            MR_Word parse_tree__check_raw_comp_unit___Avails_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__RawItemBlock_3, (MR_Integer) 3)));

#line 94 "check_raw_comp_unit.m"
            parse_tree__check_raw_comp_unit__succeeded = (parse_tree__check_raw_comp_unit__Section_6 == (MR_Integer) 0);
#line 94 "check_raw_comp_unit.m"
            if (parse_tree__check_raw_comp_unit__succeeded)
#line 94 "check_raw_comp_unit.m"
              {
#line 97 "check_raw_comp_unit.m"
                {
#line 97 "check_raw_comp_unit.m"
                  MR_Word parse_tree__check_raw_comp_unit__V_11_11;
#line 97 "check_raw_comp_unit.m"
                  MR_Word parse_tree__check_raw_comp_unit__V_12_12;

#line 97 "check_raw_comp_unit.m"
                  parse_tree__check_raw_comp_unit__succeeded = ((MR_tag((MR_Word) parse_tree__check_raw_comp_unit__Incls_8)) == (MR_mktag((MR_Integer) 1)));
#line 97 "check_raw_comp_unit.m"
                  if (parse_tree__check_raw_comp_unit__succeeded)
#line 97 "check_raw_comp_unit.m"
                    {
#line 97 "check_raw_comp_unit.m"
                      parse_tree__check_raw_comp_unit__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__Incls_8, (MR_Integer) 0)));
#line 97 "check_raw_comp_unit.m"
                      parse_tree__check_raw_comp_unit__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__check_raw_comp_unit__Incls_8, (MR_Integer) 1)));
#line 97 "check_raw_comp_unit.m"
                    }
#line 97 "check_raw_comp_unit.m"
                }
#line 98 "check_raw_comp_unit.m"
                if (!(parse_tree__check_raw_comp_unit__succeeded))
#line 98 "check_raw_comp_unit.m"
                  {
#line 98 "check_raw_comp_unit.m"
                    MR_Word parse_tree__check_raw_comp_unit__V_14_14;

#line 98 "check_raw_comp_unit.m"
                    {
#line 98 "check_raw_comp_unit.m"
                      parse_tree__check_raw_comp_unit__do_ms_interface_items_export_anything_2_p_0(parse_tree__check_raw_comp_unit__Items_10, &parse_tree__check_raw_comp_unit__V_14_14);
                    }
#line 98 "check_raw_comp_unit.m"
                    parse_tree__check_raw_comp_unit__succeeded = ((MR_Integer) 1 == parse_tree__check_raw_comp_unit__V_14_14);
#line 98 "check_raw_comp_unit.m"
                  }
#line 94 "check_raw_comp_unit.m"
              }
#line 102 "check_raw_comp_unit.m"
            if (parse_tree__check_raw_comp_unit__succeeded)
#line 101 "check_raw_comp_unit.m"
              *parse_tree__check_raw_comp_unit__HeadVar__2_2 = (MR_Integer) 1;
#line 102 "check_raw_comp_unit.m"
            else
#line 103 "check_raw_comp_unit.m"
              {
#line 103 "check_raw_comp_unit.m"
                /* direct tailcall eliminated */
#line 103 "check_raw_comp_unit.m"
                {
#line 103 "check_raw_comp_unit.m"
                  MR_Word parse_tree__check_raw_comp_unit__HeadVar__1__tmp_copy_1 = parse_tree__check_raw_comp_unit__RawItemBlocks_4;

#line 103 "check_raw_comp_unit.m"
                  parse_tree__check_raw_comp_unit__HeadVar__1_1 = parse_tree__check_raw_comp_unit__HeadVar__1__tmp_copy_1;
#line 103 "check_raw_comp_unit.m"
                }
#line 103 "check_raw_comp_unit.m"
                continue;
#line 103 "check_raw_comp_unit.m"
              }
#line 91 "check_raw_comp_unit.m"
          }
#line 89 "check_raw_comp_unit.m"
      }
#line 89 "check_raw_comp_unit.m"
      break;
#line 89 "check_raw_comp_unit.m"
    }
#line 86 "check_raw_comp_unit.m"
}

#line 43 "check_raw_comp_unit.m"
void MR_CALL 
parse_tree__check_raw_comp_unit__check_int_for_no_exports_6_p_0(
#line 43 "check_raw_comp_unit.m"
  MR_Word parse_tree__check_raw_comp_unit__Globals_7,
#line 43 "check_raw_comp_unit.m"
  MR_Word parse_tree__check_raw_comp_unit__IntRawCompUnit_8,
#line 43 "check_raw_comp_unit.m"
  MR_Word parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_0_16,
#line 43 "check_raw_comp_unit.m"
  MR_Word * parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_17)
#line 43 "check_raw_comp_unit.m"
{
#line 74 "check_raw_comp_unit.m"
  {
#line 74 "check_raw_comp_unit.m"
    MR_bool parse_tree__check_raw_comp_unit__succeeded;
#line 74 "check_raw_comp_unit.m"
    MR_Word parse_tree__check_raw_comp_unit__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__IntRawCompUnit_8, (MR_Integer) 0)));
#line 74 "check_raw_comp_unit.m"
    MR_Word parse_tree__check_raw_comp_unit__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__IntRawCompUnit_8, (MR_Integer) 1)));
#line 74 "check_raw_comp_unit.m"
    MR_Word parse_tree__check_raw_comp_unit__RawItemBlocks_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__IntRawCompUnit_8, (MR_Integer) 2)));
#line 74 "check_raw_comp_unit.m"
    MR_Word parse_tree__check_raw_comp_unit__ExportAnything_14;

#line 76 "check_raw_comp_unit.m"
    {
#line 76 "check_raw_comp_unit.m"
      parse_tree__check_raw_comp_unit__do_ms_interface_item_blocks_export_anything_2_p_0(parse_tree__check_raw_comp_unit__RawItemBlocks_13, &parse_tree__check_raw_comp_unit__ExportAnything_14);
    }
#line 79 "check_raw_comp_unit.m"
#line 79 "check_raw_comp_unit.m"
    switch (parse_tree__check_raw_comp_unit__ExportAnything_14) {
#line 79 "check_raw_comp_unit.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 79 "check_raw_comp_unit.m"
      case (MR_Integer) 0:
#line 80 "check_raw_comp_unit.m"
        {
#line 80 "check_raw_comp_unit.m"
          MR_Word parse_tree__check_raw_comp_unit__WarnSpec_15;

#line 81 "check_raw_comp_unit.m"
          {
#line 81 "check_raw_comp_unit.m"
            parse_tree__check_raw_comp_unit__generate_no_exports_warning_6_p_0(parse_tree__check_raw_comp_unit__Globals_7, parse_tree__check_raw_comp_unit__ModuleName_11, parse_tree__check_raw_comp_unit__Context_12, &parse_tree__check_raw_comp_unit__WarnSpec_15);
          }
#line 83 "check_raw_comp_unit.m"
          {
#line 83 "check_raw_comp_unit.m"
            MR_Word base;
#line 83 "check_raw_comp_unit.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 83 "check_raw_comp_unit.m"
            *parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_17 = base;
#line 83 "check_raw_comp_unit.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__check_raw_comp_unit__WarnSpec_15));
#line 83 "check_raw_comp_unit.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_0_16));
#line 83 "check_raw_comp_unit.m"
          }
#line 80 "check_raw_comp_unit.m"
        }
#line 79 "check_raw_comp_unit.m"
        break;
#line 79 "check_raw_comp_unit.m"
      case (MR_Integer) 1:
#line 78 "check_raw_comp_unit.m"
        *parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_17 = parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_0_16;
#line 79 "check_raw_comp_unit.m"
        break;
#line 79 "check_raw_comp_unit.m"
    }
#line 74 "check_raw_comp_unit.m"
  }
#line 43 "check_raw_comp_unit.m"
}

#line 32 "check_raw_comp_unit.m"
void MR_CALL 
parse_tree__check_raw_comp_unit__check_for_no_exports_6_p_0(
#line 32 "check_raw_comp_unit.m"
  MR_Word parse_tree__check_raw_comp_unit__Globals_7,
#line 32 "check_raw_comp_unit.m"
  MR_Word parse_tree__check_raw_comp_unit__RawCompUnit_8,
#line 32 "check_raw_comp_unit.m"
  MR_Word parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_0_13,
#line 32 "check_raw_comp_unit.m"
  MR_Word * parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_14)
#line 32 "check_raw_comp_unit.m"
{
#line 64 "check_raw_comp_unit.m"
  {
#line 64 "check_raw_comp_unit.m"
    MR_bool parse_tree__check_raw_comp_unit__succeeded;
#line 64 "check_raw_comp_unit.m"
    MR_Word parse_tree__check_raw_comp_unit__ExportWarning_11;

#line 65 "check_raw_comp_unit.m"
    {
#line 65 "check_raw_comp_unit.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__check_raw_comp_unit__Globals_7, (MR_Integer) 9, &parse_tree__check_raw_comp_unit__ExportWarning_11);
    }
#line 68 "check_raw_comp_unit.m"
#line 68 "check_raw_comp_unit.m"
    switch (parse_tree__check_raw_comp_unit__ExportWarning_11) {
#line 68 "check_raw_comp_unit.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 68 "check_raw_comp_unit.m"
      case (MR_Integer) 0:
#line 67 "check_raw_comp_unit.m"
        *parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_14 = parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_0_13;
#line 68 "check_raw_comp_unit.m"
        break;
#line 68 "check_raw_comp_unit.m"
      case (MR_Integer) 1:
#line 69 "check_raw_comp_unit.m"
        {
#line 69 "check_raw_comp_unit.m"
          MR_Word parse_tree__check_raw_comp_unit__IntRawCompUnit_12;
#line 69 "check_raw_comp_unit.m"
          MR_Word parse_tree__check_raw_comp_unit__ModuleName_29;
#line 69 "check_raw_comp_unit.m"
          MR_Word parse_tree__check_raw_comp_unit__Context_30;
#line 69 "check_raw_comp_unit.m"
          MR_Word parse_tree__check_raw_comp_unit__RawItemBlocks_31;
#line 69 "check_raw_comp_unit.m"
          MR_Word parse_tree__check_raw_comp_unit__ExportAnything_32;

#line 70 "check_raw_comp_unit.m"
          {
#line 70 "check_raw_comp_unit.m"
            parse_tree__comp_unit_interface__get_interface_3_p_0((MR_Integer) 0, parse_tree__check_raw_comp_unit__RawCompUnit_8, &parse_tree__check_raw_comp_unit__IntRawCompUnit_12);
          }
#line 75 "check_raw_comp_unit.m"
          parse_tree__check_raw_comp_unit__ModuleName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__IntRawCompUnit_12, (MR_Integer) 0)));
#line 75 "check_raw_comp_unit.m"
          parse_tree__check_raw_comp_unit__Context_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__IntRawCompUnit_12, (MR_Integer) 1)));
#line 75 "check_raw_comp_unit.m"
          parse_tree__check_raw_comp_unit__RawItemBlocks_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__check_raw_comp_unit__IntRawCompUnit_12, (MR_Integer) 2)));
#line 76 "check_raw_comp_unit.m"
          {
#line 76 "check_raw_comp_unit.m"
            parse_tree__check_raw_comp_unit__do_ms_interface_item_blocks_export_anything_2_p_0(parse_tree__check_raw_comp_unit__RawItemBlocks_31, &parse_tree__check_raw_comp_unit__ExportAnything_32);
          }
#line 79 "check_raw_comp_unit.m"
#line 79 "check_raw_comp_unit.m"
          switch (parse_tree__check_raw_comp_unit__ExportAnything_32) {
#line 79 "check_raw_comp_unit.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 79 "check_raw_comp_unit.m"
            case (MR_Integer) 0:
#line 80 "check_raw_comp_unit.m"
              {
#line 80 "check_raw_comp_unit.m"
                MR_Word parse_tree__check_raw_comp_unit__WarnSpec_33;

#line 81 "check_raw_comp_unit.m"
                {
#line 81 "check_raw_comp_unit.m"
                  parse_tree__check_raw_comp_unit__generate_no_exports_warning_6_p_0(parse_tree__check_raw_comp_unit__Globals_7, parse_tree__check_raw_comp_unit__ModuleName_29, parse_tree__check_raw_comp_unit__Context_30, &parse_tree__check_raw_comp_unit__WarnSpec_33);
                }
#line 83 "check_raw_comp_unit.m"
                {
#line 83 "check_raw_comp_unit.m"
                  MR_Word base;
#line 83 "check_raw_comp_unit.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 83 "check_raw_comp_unit.m"
                  *parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_14 = base;
#line 83 "check_raw_comp_unit.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__check_raw_comp_unit__WarnSpec_33));
#line 83 "check_raw_comp_unit.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_0_13));
#line 83 "check_raw_comp_unit.m"
                }
#line 80 "check_raw_comp_unit.m"
              }
#line 79 "check_raw_comp_unit.m"
              break;
#line 79 "check_raw_comp_unit.m"
            case (MR_Integer) 1:
#line 78 "check_raw_comp_unit.m"
              *parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_14 = parse_tree__check_raw_comp_unit__STATE_VARIABLE_Specs_0_13;
#line 79 "check_raw_comp_unit.m"
              break;
#line 79 "check_raw_comp_unit.m"
          }
#line 69 "check_raw_comp_unit.m"
        }
#line 68 "check_raw_comp_unit.m"
        break;
#line 68 "check_raw_comp_unit.m"
    }
#line 64 "check_raw_comp_unit.m"
  }
#line 32 "check_raw_comp_unit.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.check_raw_comp_unit. */
