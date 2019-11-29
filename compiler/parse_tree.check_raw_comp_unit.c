/*
** Automatically generated from `check_raw_comp_unit.m'
** by the Mercury compiler,
** version 2019-11-29
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
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static void MR_CALL 
parse_tree__check_raw_comp_unit__maybe_generate_no_exports_warning_5_p_0(
  MR_Word Globals_6,
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__check_raw_comp_unit__do_ms_interface_item_blocks_export_anything_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);


static /* final */ const MR_Box parse_tree__check_raw_comp_unit_scalar_common_1[36][2];

static /* final */ const MR_Box parse_tree__check_raw_comp_unit_scalar_common_2[1][1];




static /* final */ const MR_Box parse_tree__check_raw_comp_unit_scalar_common_1[36][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_1[0])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_1[0])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_String) "inst"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_String) "type"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This would normally be a"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in its interface section(s)."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_String) "import_module"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "other than"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A file should contain at least one declaration"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "To be useful, a module should export something."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_1[30])))
  },
  /* row 33 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__check_raw_comp_unit_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: the interface of module"))
  },
};

static /* final */ const MR_Box parse_tree__check_raw_comp_unit_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



void MR_CALL 
parse_tree__check_raw_comp_unit__check_interface_item_blocks_for_no_exports_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word Context_9,
  MR_Word RawItemBlocks_10,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  {
    MR_Word ExportWarning_12;

    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 11, &ExportWarning_12);
    switch (ExportWarning_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_15 = STATE_VARIABLE_Specs_0_14;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ExportAnything_13;

          parse_tree__check_raw_comp_unit__do_ms_interface_item_blocks_export_anything_2_p_0(RawItemBlocks_10, &ExportAnything_13);
          switch (ExportAnything_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              parse_tree__check_raw_comp_unit__maybe_generate_no_exports_warning_5_p_0(Globals_7, ModuleName_8, Context_9, STATE_VARIABLE_Specs_0_14, STATE_VARIABLE_Specs_15);
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_Specs_15 = STATE_VARIABLE_Specs_0_14;
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__check_raw_comp_unit__maybe_generate_no_exports_warning_5_p_0(
  MR_Word Globals_6,
  MR_Word ModuleName_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  {
    MR_Word Warn_10;

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 11, &Warn_10);
    switch (Warn_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Msg_11;
          MR_Word Spec_12;
          MR_Word Var_16;
          MR_Word Var_17;
          MR_Word Var_18;
          MR_Word Var_21;
          MR_Word Var_24;
          MR_Word Var_25;
          MR_Word Var_89;

          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (ModuleName_7));
          }
          {
            Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
            MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_1[2])));
          }
          {
            Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_raw_comp_unit_scalar_common_1[35])));
            MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
          }
          {
            Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_2[0])));
            MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
          }
          {
            Var_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (Var_18));
          }
          {
            Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
            MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_raw_comp_unit_scalar_common_1[34])));
          }
          {
            Msg_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Msg_11, 0) = ((MR_Box) (Context_8));
            MR_hl_field(MR_mktag(1), Msg_11, 1) = ((MR_Box) (Var_16));
          }
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Msg_11));
            MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_89));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_12));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
          }
        }
        break;
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
      MR_Word Section_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 1))));
      MR_Word Incls_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 2))));
      MR_Word Items_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_3, (MR_Integer) 5))));

      succeeded = (Section_7 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (Incls_8 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          succeeded = (Items_11 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
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
