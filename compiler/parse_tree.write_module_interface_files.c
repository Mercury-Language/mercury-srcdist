/*
** Automatically generated from `write_module_interface_files.m'
** by the Mercury compiler,
** version rotd-2019-06-28
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


// :- module parse_tree.write_module_interface_files.
// :- implementation.

/*
INIT mercury__parse_tree__write_module_interface_files__init
ENDINIT
*/

#include "parse_tree.write_module_interface_files.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
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
#include "int.mih"
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
#include "require.mih"
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
#include "parse_tree.canonicalize_interface.mih"
#include "parse_tree.comp_unit_interface.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.modules.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_tree_out.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.version.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static void MR_CALL 
parse_tree__write_module_interface_files__report_file_not_written_8_p_0(
  MR_Word Globals_9,
  MR_Word Specs_10,
  MR_Word MaybePrefixMsg_11,
  MR_Word ModuleName_12,
  MR_String SuffixA_13,
  MR_Word MaybeSuffixB_14);

static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(
  MR_Word Globals_7,
  MR_Word ParseTreeInt0_9,
  MR_Word MaybeTimestamp_10);


static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_1[4][2];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_2[5][1];




static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not written."))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__write_module_interface_files_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_1[0])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_2[5][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "Error reading interface files.\n"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "Error reading short interface files.\n"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) ".int2"))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



void MR_CALL 
parse_tree__write_module_interface_files__write_interface_file_int1_int2_7_p_0(
  MR_Word Globals_8,
  MR_String SourceFileName_9,
  MR_Word SourceFileModuleName_10,
  MR_Word MaybeTimestamp_11,
  MR_Word RawCompUnit0_12)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit0_12, (MR_Integer) 0))));
    MR_Word IntRawCompUnit_17;
    MR_Word ModuleAndImports_18;
    MR_Word AugCompUnit1_19;
    MR_Word Specs0_20;
    MR_Word Errors_21;

    parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0(RawCompUnit0_12, &IntRawCompUnit_17);
    parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0(Globals_8, SourceFileName_9, SourceFileModuleName_10, IntRawCompUnit_17, &ModuleAndImports_18);
    parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(ModuleAndImports_18, &AugCompUnit1_19, &Specs0_20, &Errors_21);
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_21);
    if (succeeded)
    {
      parse_tree__write_module_interface_files__report_file_not_written_8_p_0(Globals_8, Specs0_20, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[3])), ModuleName_14, (MR_String) ".int", (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[4])));
    }
    else
    {
      MR_Word AugCompUnit_23;
      MR_Word Specs_30;
      MR_Word NoHaltAtWarnGlobals_31;
      MR_Integer NumErrors_33;
      MR_Word Var_45;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Integer _NumWarnings_32;

      Var_45 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
      parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0(Globals_8, AugCompUnit1_19, &AugCompUnit_23, Var_45, &Var_24, (MR_String) "", &Var_25, &Var_26, &Var_27, &Var_28, &Var_29, Specs0_20, &Specs_30);
      libs__globals__set_option_4_p_0((MR_Integer) 3, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[0])), Globals_8, &NoHaltAtWarnGlobals_31);
      parse_tree__error_util__write_error_specs_8_p_0(Specs_30, NoHaltAtWarnGlobals_31, (MR_Integer) 0, &_NumWarnings_32, (MR_Integer) 0, &NumErrors_33);
      succeeded = (NumErrors_33 > (MR_Integer) 0);
      if (succeeded)
      {
        parse_tree__write_module_interface_files__report_file_not_written_8_p_0(Globals_8, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), ModuleName_14, (MR_String) ".int", (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[4])));
      }
      else
      {
        MR_Word ParseTreeInt1_34;
        MR_Word ParseTreeInt2_35;
        MR_Word InterfaceSpecs_36;

        parse_tree__comp_unit_interface__generate_interfaces_int1_int2_5_p_0(Globals_8, AugCompUnit_23, &ParseTreeInt1_34, &ParseTreeInt2_35, &InterfaceSpecs_36);
        parse_tree__error_util__write_error_specs_ignore_4_p_0(InterfaceSpecs_36, Globals_8);
        parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(Globals_8, ParseTreeInt1_34, MaybeTimestamp_11);
        parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(Globals_8, ParseTreeInt2_35, MaybeTimestamp_11);
        parse_tree__module_cmds__touch_interface_datestamp_5_p_0(Globals_8, ModuleName_14, (MR_String) ".date");
      }
    }
  }
}

void MR_CALL 
parse_tree__write_module_interface_files__write_private_interface_file_int0_7_p_0(
  MR_Word Globals_8,
  MR_String SourceFileName_9,
  MR_Word SourceFileModuleName_10,
  MR_Word MaybeTimestamp_11,
  MR_Word RawCompUnit0_12)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit0_12, (MR_Integer) 0))));
    MR_Word ModuleAndImports_17;
    MR_Word AugCompUnit1_18;
    MR_Word Specs0_19;
    MR_Word Errors_20;

    parse_tree__modules__grab_unqual_imported_modules_make_int_7_p_0(Globals_8, SourceFileName_9, SourceFileModuleName_10, RawCompUnit0_12, &ModuleAndImports_17);
    parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(ModuleAndImports_17, &AugCompUnit1_18, &Specs0_19, &Errors_20);
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_20);
    if (succeeded)
    {
      parse_tree__write_module_interface_files__report_file_not_written_8_p_0(Globals_8, Specs0_19, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[2])), ModuleName_14, (MR_String) ".int0", (MR_Word) ((MR_Unsigned) 0U));
    }
    else
    {
      MR_Word AugCompUnit_22;
      MR_Word Specs_29;
      MR_Word Var_40;
      MR_Word _EventSpecMap_23;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;

      Var_40 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
      parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0(Globals_8, AugCompUnit1_18, &AugCompUnit_22, Var_40, &_EventSpecMap_23, (MR_String) "", &Var_24, &Var_25, &Var_26, &Var_27, &Var_28, Specs0_19, &Specs_29);
      if ((Specs_29 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ParseTreeInt0_32;

        parse_tree__comp_unit_interface__generate_private_interface_int0_2_p_0(AugCompUnit_22, &ParseTreeInt0_32);
        parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(Globals_8, ParseTreeInt0_32, MaybeTimestamp_11);
        parse_tree__module_cmds__touch_interface_datestamp_5_p_0(Globals_8, ModuleName_14, (MR_String) ".date0");
      }
      else
      {
        parse_tree__write_module_interface_files__report_file_not_written_8_p_0(Globals_8, Specs_29, (MR_Word) ((MR_Unsigned) 0U), ModuleName_14, (MR_String) ".int0", (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__report_file_not_written_8_p_0(
  MR_Word Globals_9,
  MR_Word Specs_10,
  MR_Word MaybePrefixMsg_11,
  MR_Word ModuleName_12,
  MR_String SuffixA_13,
  MR_Word MaybeSuffixB_14)
{
  {
    MR_String IntAFileName_17;
    MR_Word NotWrittenPieces_18;
    MR_Word NotWrittenMsg_21;
    MR_Word NotWrittenSpec_22;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_58;

    parse_tree__error_util__write_error_specs_ignore_4_p_0(Specs_10, Globals_9);
    if (!((MaybePrefixMsg_11 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String PrefixMsg_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybePrefixMsg_11, (MR_Integer) 0))));

      mercury__io__write_string_3_p_0(PrefixMsg_16);
    }
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, SuffixA_13, ModuleName_12, &IntAFileName_17);
    if ((MaybeSuffixB_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_43;

      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (IntAFileName_17));
      }
      {
        NotWrittenPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NotWrittenPieces_18, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(1), NotWrittenPieces_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_1[2])));
      }
    }
    else
    {
      MR_String SuffixB_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeSuffixB_14, (MR_Integer) 0))));
      MR_String IntBFileName_20;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_35;
      MR_Word Var_36;

      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, SuffixB_19, ModuleName_12, &IntBFileName_20);
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (IntAFileName_17));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (IntBFileName_20));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_1[2])));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__write_module_interface_files_scalar_common_1[3])));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
      }
      {
        NotWrittenPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NotWrittenPieces_18, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), NotWrittenPieces_18, 1) = ((MR_Box) (Var_32));
      }
    }
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (NotWrittenPieces_18));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      NotWrittenMsg_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), NotWrittenMsg_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), NotWrittenMsg_21, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), NotWrittenMsg_21, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), NotWrittenMsg_21, 3) = ((MR_Box) (Var_53));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (NotWrittenMsg_21));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      NotWrittenSpec_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), NotWrittenSpec_22, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(0), NotWrittenSpec_22, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), NotWrittenSpec_22, 2) = ((MR_Box) (Var_58));
    }
    parse_tree__error_util__write_error_spec_ignore_4_p_0(NotWrittenSpec_22, Globals_9);
  }
}

void MR_CALL 
parse_tree__write_module_interface_files__write_short_interface_file_int3_5_p_0(
  MR_Word Globals_6,
  MR_String SourceFileName_7,
  MR_Word RawCompUnit_8)
{
  parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_105_110_116_51_95_95_91_50_93_95_48_5_p_0(Globals_6, RawCompUnit_8);
}

void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_105_110_116_51_95_95_91_50_93_95_48_5_p_0(
  MR_Word Globals_6,
  MR_Word RawCompUnit_8)
{
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit_8, (MR_Integer) 0))));
    MR_Word ParseTreeInt3_13;
    MR_Word Specs0_14;
    MR_Word QualParseTreeInt3_15;
    MR_Word Specs_16;

    parse_tree__comp_unit_interface__generate_short_interface_int3_4_p_0(Globals_6, RawCompUnit_8, &ParseTreeInt3_13, &Specs0_14);
    parse_tree__module_qual__module_qualify_parse_tree_int_5_p_0(Globals_6, ParseTreeInt3_13, &QualParseTreeInt3_15, Specs0_14, &Specs_16);
    parse_tree__error_util__write_error_specs_ignore_4_p_0(Specs_16, Globals_6);
    parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(Globals_6, QualParseTreeInt3_15, (MR_Word) ((MR_Unsigned) 0U));
    parse_tree__module_cmds__touch_interface_datestamp_5_p_0(Globals_6, ModuleName_10, (MR_String) ".date3");
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_95_95_91_50_93_95_48_6_p_0(
  MR_Word Globals_7,
  MR_Word ParseTreeInt0_9,
  MR_Word MaybeTimestamp_10)
{
  {
    MR_bool succeeded;
    MR_Word ParseTreeInt1_12;
    MR_Word ModuleName_13;
    MR_Word IntFileKind_14;
    MR_String Suffix_15;
    MR_String TmpSuffix_16;
    MR_String OutputFileName_17;
    MR_String TmpOutputFileName_18;
    MR_Word NoLineNumGlobals0_19;
    MR_Word NoLineNumGlobals_20;
    MR_Word GenerateVersionNumbers_21;
    MR_Word DisableVersionNumbers_22;
    MR_Word MaybeVersionNumbers_31;
    MR_Word ParseTreeInt_32;
    MR_Word Var_41;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;

    parse_tree__canonicalize_interface__order_parse_tree_int_contents_2_p_0(ParseTreeInt0_9, &ParseTreeInt1_12);
    ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 0))));
    IntFileKind_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 1))) & (MR_Integer) 3);
    Suffix_15 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(IntFileKind_14);
    TmpSuffix_16 = mercury__string__f_43_43_2_f_0(Suffix_15, (MR_String) ".tmp");
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 0, Suffix_15, ModuleName_13, &OutputFileName_17);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 1, TmpSuffix_16, ModuleName_13, &TmpOutputFileName_18);
    Var_41 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[0]));
    libs__globals__set_option_4_p_0((MR_Integer) 153, Var_41, Globals_7, &NoLineNumGlobals0_19);
    libs__globals__set_option_4_p_0((MR_Integer) 154, Var_41, NoLineNumGlobals0_19, &NoLineNumGlobals_20);
    libs__globals__lookup_bool_option_3_p_0(NoLineNumGlobals_20, (MR_Integer) 132, &GenerateVersionNumbers_21);
    libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(&DisableVersionNumbers_22);
    succeeded = (GenerateVersionNumbers_21 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (DisableVersionNumbers_22 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Timestamp_23;
      MR_Word OldParseTreeInt_26;
      MR_Word OldErrors_28;
      MR_Word MaybeOldParseTreeInt_29;
      MR_Word VersionNumbers_30;
      MR_String _OldIntFileName_24;
      MR_Word _OldTimestamp_25;
      MR_Word _OldSpecs_27;

      if ((MaybeTimestamp_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_module_interface_files.actually_write_interface_file\'/6", (MR_String) "with \140--smart-recompilation\', timestamp not read");
          return;
        }
      }
      else
        Timestamp_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestamp_10, (MR_Integer) 0))));
      parse_tree__read_modules__read_module_int_14_p_0(NoLineNumGlobals_20, (MR_String) "Reading old interface for module", (MR_Integer) 0, (MR_Integer) 0, ModuleName_13, IntFileKind_14, &_OldIntFileName_24, (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[1]), &_OldTimestamp_25, &OldParseTreeInt_26, &_OldSpecs_27, &OldErrors_28);
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), OldErrors_28);
      if (succeeded)
        {
          MaybeOldParseTreeInt_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeOldParseTreeInt_29, 0) = ((MR_Box) (OldParseTreeInt_26));
        }
      else
        MaybeOldParseTreeInt_29 = (MR_Word) ((MR_Unsigned) 0U);
      recompilation__version__compute_version_numbers_4_p_0(Timestamp_23, ParseTreeInt1_12, MaybeOldParseTreeInt_29, &VersionNumbers_30);
      {
        MaybeVersionNumbers_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeVersionNumbers_31, 0) = ((MR_Box) (VersionNumbers_30));
      }
    }
    else
      MaybeVersionNumbers_31 = (MR_Word) ((MR_Unsigned) 0U);
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 0))));
    Var_77 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 1))) & (MR_Integer) 3);
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 2))));
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 4))));
    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 5))));
    Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 6))));
    Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 7))));
    Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 8))));
    Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 9))));
    {
      ParseTreeInt_32 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 0) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 1) = (MR_Box) ((MR_Unsigned) (Var_77));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 2) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 3) = ((MR_Box) (MaybeVersionNumbers_31));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 4) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 5) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 6) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 7) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 8) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 9) = ((MR_Box) (Var_85));
    }
    parse_tree__parse_tree_out__output_parse_tree_int_5_p_0(NoLineNumGlobals_20, TmpOutputFileName_18, ParseTreeInt_32);
    parse_tree__module_cmds__update_interface_4_p_0(Globals_7, OutputFileName_17);
  }
}

void mercury__parse_tree__write_module_interface_files__init(void)
{
}

void mercury__parse_tree__write_module_interface_files__init_type_tables(void)
{
}

void mercury__parse_tree__write_module_interface_files__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__write_module_interface_files__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.write_module_interface_files.
