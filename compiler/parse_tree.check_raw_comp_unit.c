/*
** Automatically generated from `check_raw_comp_unit.m'
** by the Mercury compiler,
** version rotd-2018-11-29
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


// :- module parse_tree.check_raw_comp_unit.
// :- implementation.

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
  MR_Word ModuleName_4,
  MR_Word Context_5,
  MR_Word * Spec_6);

static void MR_CALL 
parse_tree__check_raw_comp_unit__do_ms_interface_item_blocks_export_anything_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
parse_tree__check_raw_comp_unit__do_ms_interface_items_export_anything_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);


static /* final */ const MR_Box parse_tree__check_raw_comp_unit_scalar_common_1[1][3];

static /* final */ const MR_Box parse_tree__check_raw_comp_unit_scalar_common_2[36][2];

static /* final */ const MR_Box parse_tree__check_raw_comp_unit_scalar_common_3[1][1];




static /* final */ const MR_Box parse_tree__check_raw_comp_unit_scalar_common_1[1][3] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 10U << 1)) | (MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__check_raw_comp_unit_scalar_common_2[36][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not export anything."))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[0])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[0])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "inst"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This would normally be a"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in its interface section(s)."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "other than"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A file should contain at least one declaration"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "To be useful, a module should export something."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[30])))
  },
  /* row 33 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[32])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__check_raw_comp_unit_scalar_common_2[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
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



void MR_CALL 
parse_tree__check_raw_comp_unit__check_int_for_no_exports_3_p_0(
  MR_Word IntRawCompUnit_4,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  {
    MR_Word ModuleName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntRawCompUnit_4, (MR_Integer) 0))));
    MR_Word Context_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntRawCompUnit_4, (MR_Integer) 1))));
    MR_Word RawItemBlocks_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntRawCompUnit_4, (MR_Integer) 2))));
    MR_Word ExportAnything_9;

    parse_tree__check_raw_comp_unit__do_ms_interface_item_blocks_export_anything_2_p_0(RawItemBlocks_8, &ExportAnything_9);
    switch (ExportAnything_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word WarnSpec_10;

          parse_tree__check_raw_comp_unit__generate_no_exports_warning_3_p_0(ModuleName_6, Context_7, &WarnSpec_10);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (WarnSpec_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_11));
          }
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
        break;
    }
  }
}

void MR_CALL 
parse_tree__check_raw_comp_unit__maybe_check_for_no_exports_4_p_0(
  MR_Word Globals_5,
  MR_Word RawCompUnit_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  {
    MR_Word ExportWarning_8;

    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 10, &ExportWarning_8);
    switch (ExportWarning_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_11 = STATE_VARIABLE_Specs_0_10;
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntRawCompUnit_9;
          MR_Word ModuleName_19;
          MR_Word Context_20;
          MR_Word RawItemBlocks_21;
          MR_Word ExportAnything_22;

          parse_tree__comp_unit_interface__get_interface_3_p_0((MR_Integer) 0, RawCompUnit_6, &IntRawCompUnit_9);
          ModuleName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntRawCompUnit_9, (MR_Integer) 0))));
          Context_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntRawCompUnit_9, (MR_Integer) 1))));
          RawItemBlocks_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntRawCompUnit_9, (MR_Integer) 2))));
          parse_tree__check_raw_comp_unit__do_ms_interface_item_blocks_export_anything_2_p_0(RawItemBlocks_21, &ExportAnything_22);
          switch (ExportAnything_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word WarnSpec_23;

                parse_tree__check_raw_comp_unit__generate_no_exports_warning_3_p_0(ModuleName_19, Context_20, &WarnSpec_23);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_11 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (WarnSpec_23));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
                }
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_Specs_11 = STATE_VARIABLE_Specs_0_10;
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__check_raw_comp_unit__generate_no_exports_warning_3_p_0(
  MR_Word ModuleName_4,
  MR_Word Context_5,
  MR_Word * Spec_6)
{
  {
    MR_Word Component_8;
    MR_Word Msg_9;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_87;
    MR_Word Var_90;

    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (ModuleName_4));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[2])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_2[35])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_3[0])));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (Var_18));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[34])));
    }
    {
      Component_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Component_8, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 10) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(1), Component_8, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Component_8));
      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_9, 0) = ((MR_Box) (Context_5));
      MR_hl_field(MR_mktag(0), Msg_9, 1) = ((MR_Box) (Var_87));
    }
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Msg_9));
      MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Spec_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_1[0])));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_90));
    }
  }
}

static void MR_CALL 
parse_tree__check_raw_comp_unit__do_ms_interface_item_blocks_export_anything_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word RawItemBlock_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RawItemBlocks_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Section_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 0))));
      MR_Word Incls_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 2))));
      MR_Word Items_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 4))));

      succeeded = (Section_6 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (Incls_8 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          MR_Word Var_14;

          parse_tree__check_raw_comp_unit__do_ms_interface_items_export_anything_2_p_0(Items_10, &Var_14);
          succeeded = ((MR_Integer) 1 == Var_14);
        }
      }
      if (succeeded)
        *HeadVar__2_2 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = RawItemBlocks_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__check_raw_comp_unit__do_ms_interface_items_export_anything_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Item_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Items_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      succeeded = ((((MR_tag((MR_Word) Item_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
      if (succeeded)
      {
        {
          MR_Word next_value_of_HeadVar__1_1 = Items_4;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
      }
      else
        *HeadVar__2_2 = (MR_Integer) 1;
    }
    break;
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

// :- end_module parse_tree.check_raw_comp_unit.
