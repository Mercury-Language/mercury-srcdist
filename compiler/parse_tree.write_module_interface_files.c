/*
** Automatically generated from `write_module_interface_files.m'
** by the Mercury compiler,
** version rotd-2020-03-17
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
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "require.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.canonicalize_interface.mih"
#include "parse_tree.comp_unit_interface.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.grab_modules.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
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




static void MR_CALL 
parse_tree__write_module_interface_files__report_file_not_written_8_p_0(
  MR_Word Globals_9,
  MR_Word Specs_10,
  MR_Word MaybePrefixMsg_11,
  MR_Word ModuleName_12,
  MR_String SuffixA_13,
  MR_Word MaybeSuffixB_14);

static void MR_CALL 
parse_tree__write_module_interface_files__actually_write_interface_file_6_p_0(
  MR_Word Globals_7,
  MR_Word ParseTreeInt0_8,
  MR_String ExtraSuffix_9,
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
    ((MR_Box) ((MR_String) ".int2"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "Error reading short interface files.\n"))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



void MR_CALL 
parse_tree__write_module_interface_files__write_interface_file_int1_int2_9_p_0(
  MR_Word Globals_10,
  MR_String SourceFileName_11,
  MR_Word SourceFileModuleName_12,
  MR_Word MaybeTimestamp_13,
  MR_Word RawCompUnit0_14,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_45,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_46)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit0_14, (MR_Integer) 0))));
    MR_Word IntRawCompUnit_20;
    MR_Word ModuleAndImports_21;
    MR_Word AugCompUnit1_22;
    MR_Word GetSpecs0_23;
    MR_Word GetErrors_24;
    MR_Word GetSpecs_25;
    MR_Word GetSpecsEffectivelyErrors_26;
    MR_Word TypeCtorInfo_76_76;

    parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0(RawCompUnit0_14, &IntRawCompUnit_20);
    parse_tree__grab_modules__grab_unqual_imported_modules_make_int_9_p_0(Globals_10, SourceFileName_11, SourceFileModuleName_12, IntRawCompUnit_20, &ModuleAndImports_21, STATE_VARIABLE_HaveReadModuleMaps_0_45, STATE_VARIABLE_HaveReadModuleMaps_46);
    parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(ModuleAndImports_21, &AugCompUnit1_22, &GetSpecs0_23, &GetErrors_24);
    parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_10, GetSpecs0_23, &GetSpecs_25);
    GetSpecsEffectivelyErrors_26 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_10, GetSpecs_25);
    succeeded = (GetSpecsEffectivelyErrors_26 == (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_76_76 = (MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0);
      succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_76_76, GetErrors_24);
    }
    if (succeeded)
    {
      MR_Word AugCompUnit_27;
      MR_Word QualSpecs0_34;
      MR_Word QualSpecs_35;
      MR_Word Var_51;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;

      Var_51 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
      parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0(Globals_10, AugCompUnit1_22, &AugCompUnit_27, Var_51, &Var_28, (MR_String) "", &Var_29, &Var_30, &Var_31, &Var_32, &Var_33, (MR_Word) ((MR_Unsigned) 0U), &QualSpecs0_34);
      parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_10, QualSpecs0_34, &QualSpecs_35);
      if ((QualSpecs_35 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ParseTreeInt1_36;
        MR_Word ParseTreeInt2_37;
        MR_Word GenerateSpecs0_38;
        MR_Word GenerateSpecs_39;

        parse_tree__comp_unit_interface__generate_interfaces_int1_int2_6_p_0(Globals_10, AugCompUnit_27, &ParseTreeInt1_36, &ParseTreeInt2_37, (MR_Word) ((MR_Unsigned) 0U), &GenerateSpecs0_38);
        parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_10, GenerateSpecs0_38, &GenerateSpecs_39);
        if ((GenerateSpecs_39 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          parse_tree__write_module_interface_files__actually_write_interface_file_6_p_0(Globals_10, ParseTreeInt1_36, (MR_String) "", MaybeTimestamp_13);
          parse_tree__write_module_interface_files__actually_write_interface_file_6_p_0(Globals_10, ParseTreeInt2_37, (MR_String) "", MaybeTimestamp_13);
          parse_tree__module_cmds__touch_interface_datestamp_5_p_0(Globals_10, ModuleName_17, (MR_String) ".date");
        }
        else
          parse_tree__write_module_interface_files__report_file_not_written_8_p_0(Globals_10, GenerateSpecs_39, (MR_Word) ((MR_Unsigned) 0U), ModuleName_17, (MR_String) ".int", (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[3])));
      }
      else
        parse_tree__write_module_interface_files__report_file_not_written_8_p_0(Globals_10, QualSpecs_35, (MR_Word) ((MR_Unsigned) 0U), ModuleName_17, (MR_String) ".int", (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[3])));
    }
    else
      parse_tree__write_module_interface_files__report_file_not_written_8_p_0(Globals_10, GetSpecs_25, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[4])), ModuleName_17, (MR_String) ".int", (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[3])));
  }
}

void MR_CALL 
parse_tree__write_module_interface_files__write_private_interface_file_int0_9_p_0(
  MR_Word Globals_10,
  MR_String SourceFileName_11,
  MR_Word SourceFileModuleName_12,
  MR_Word MaybeTimestamp_13,
  MR_Word RawCompUnit0_14,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_43,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_44)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit0_14, (MR_Integer) 0))));
    MR_Word ModuleAndImports_20;
    MR_Word AugCompUnit1_21;
    MR_Word GetSpecs0_22;
    MR_Word GetErrors_23;
    MR_Word GetSpecs_24;
    MR_Word GetSpecsEffectivelyErrors_25;
    MR_Word TypeCtorInfo_69_69;

    parse_tree__grab_modules__grab_unqual_imported_modules_make_int_9_p_0(Globals_10, SourceFileName_11, SourceFileModuleName_12, RawCompUnit0_14, &ModuleAndImports_20, STATE_VARIABLE_HaveReadModuleMaps_0_43, STATE_VARIABLE_HaveReadModuleMaps_44);
    parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(ModuleAndImports_20, &AugCompUnit1_21, &GetSpecs0_22, &GetErrors_23);
    parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_10, GetSpecs0_22, &GetSpecs_24);
    GetSpecsEffectivelyErrors_25 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_10, GetSpecs_24);
    succeeded = (GetSpecsEffectivelyErrors_25 == (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_69_69 = (MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0);
      succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_69_69, GetErrors_23);
    }
    if (succeeded)
    {
      MR_Word AugCompUnit_26;
      MR_Word QualSpecs0_33;
      MR_Word QualSpecs_34;
      MR_Word Var_49;
      MR_Word _EventSpecMap_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;

      Var_49 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
      parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0(Globals_10, AugCompUnit1_21, &AugCompUnit_26, Var_49, &_EventSpecMap_27, (MR_String) "", &Var_28, &Var_29, &Var_30, &Var_31, &Var_32, (MR_Word) ((MR_Unsigned) 0U), &QualSpecs0_33);
      parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_10, QualSpecs0_33, &QualSpecs_34);
      if ((QualSpecs_34 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ParseTreeInt0_35;
        MR_Word GenerateSpecs0_36;
        MR_Word GenerateSpecs_37;

        parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0(AugCompUnit_26, &ParseTreeInt0_35, (MR_Word) ((MR_Unsigned) 0U), &GenerateSpecs0_36);
        parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_10, GenerateSpecs0_36, &GenerateSpecs_37);
        if ((GenerateSpecs_37 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          parse_tree__write_module_interface_files__actually_write_interface_file_6_p_0(Globals_10, ParseTreeInt0_35, (MR_String) "", MaybeTimestamp_13);
          parse_tree__module_cmds__touch_interface_datestamp_5_p_0(Globals_10, ModuleName_17, (MR_String) ".date0");
        }
        else
          parse_tree__write_module_interface_files__report_file_not_written_8_p_0(Globals_10, GenerateSpecs_37, (MR_Word) ((MR_Unsigned) 0U), ModuleName_17, (MR_String) ".int0", (MR_Word) ((MR_Unsigned) 0U));
      }
      else
        parse_tree__write_module_interface_files__report_file_not_written_8_p_0(Globals_10, QualSpecs_34, (MR_Word) ((MR_Unsigned) 0U), ModuleName_17, (MR_String) ".int0", (MR_Word) ((MR_Unsigned) 0U));
    }
    else
      parse_tree__write_module_interface_files__report_file_not_written_8_p_0(Globals_10, GetSpecs_24, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[2])), ModuleName_17, (MR_String) ".int0", (MR_Word) ((MR_Unsigned) 0U));
  }
}

void MR_CALL 
parse_tree__write_module_interface_files__write_short_interface_file_int3_5_p_0(
  MR_Word Globals_6,
  MR_String _SourceFileName_7,
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
    MR_Word ParseTreeInt3_14;
    MR_Word Specs0_15;
    MR_Word Specs_16;
    MR_Word EffectivelyErrors_17;
    MR_Word Var_13;

    parse_tree__comp_unit_interface__generate_short_interface_int3_6_p_0(Globals_6, RawCompUnit_8, &Var_13, &ParseTreeInt3_14, (MR_Word) ((MR_Unsigned) 0U), &Specs0_15);
    parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_6, Specs0_15, &Specs_16);
    EffectivelyErrors_17 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_6, Specs_16);
    switch (EffectivelyErrors_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__write_module_interface_files__actually_write_interface_file_6_p_0(Globals_6, ParseTreeInt3_14, (MR_String) "", (MR_Word) ((MR_Unsigned) 0U));
          parse_tree__module_cmds__touch_interface_datestamp_5_p_0(Globals_6, ModuleName_10, (MR_String) ".date3");
        }
        break;
      case (MR_Integer) 1:
        parse_tree__write_module_interface_files__report_file_not_written_8_p_0(Globals_6, Specs_16, (MR_Word) ((MR_Unsigned) 0U), ModuleName_10, (MR_String) ".int3", (MR_Word) ((MR_Unsigned) 0U));
        break;
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
    MR_Word Var_59;

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
      NotWrittenMsg_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), NotWrittenMsg_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), NotWrittenMsg_21, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), NotWrittenMsg_21, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), NotWrittenMsg_21, 3) = ((MR_Box) (Var_53));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (NotWrittenMsg_21));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      NotWrittenSpec_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), NotWrittenSpec_22, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_module_interface_files.report_file_not_written\'/8"));
      MR_hl_field(MR_mktag(0), NotWrittenSpec_22, 1) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(0), NotWrittenSpec_22, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), NotWrittenSpec_22, 3) = ((MR_Box) (Var_59));
    }
    parse_tree__error_util__write_error_spec_ignore_4_p_0(NotWrittenSpec_22, Globals_9);
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__actually_write_interface_file_6_p_0(
  MR_Word Globals_7,
  MR_Word ParseTreeInt0_8,
  MR_String ExtraSuffix_9,
  MR_Word MaybeTimestamp_10)
{
  {
    MR_bool succeeded;
    MR_Word ParseTreeInt1_12;
    MR_Word ModuleName_13;
    MR_Word IntFileKind_14;
    MR_String Suffix_15;
    MR_String OutputFileName0_16;
    MR_String OutputFileName_17;
    MR_String TmpOutputFileName_18;
    MR_Word NoLineNumGlobals0_19;
    MR_Word NoLineNumGlobals_20;
    MR_Word GenerateVersionNumbers_21;
    MR_Word DisableVersionNumbers_22;
    MR_Word MaybeVersionNumbers_31;
    MR_Word ParseTreeInt_32;
    MR_Word Var_39;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;

    parse_tree__canonicalize_interface__order_parse_tree_int_contents_2_p_0(ParseTreeInt0_8, &ParseTreeInt1_12);
    ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 0))));
    IntFileKind_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 1))) & (MR_Integer) 3);
    Suffix_15 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(IntFileKind_14);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 0, Suffix_15, ModuleName_13, &OutputFileName0_16);
    OutputFileName_17 = mercury__string__f_43_43_2_f_0(OutputFileName0_16, ExtraSuffix_9);
    TmpOutputFileName_18 = mercury__string__f_43_43_2_f_0(OutputFileName_17, (MR_String) ".tmp");
    Var_39 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[0]));
    libs__globals__set_option_4_p_0((MR_Integer) 157, Var_39, Globals_7, &NoLineNumGlobals0_19);
    libs__globals__set_option_4_p_0((MR_Integer) 158, Var_39, NoLineNumGlobals0_19, &NoLineNumGlobals_20);
    libs__globals__lookup_bool_option_3_p_0(NoLineNumGlobals_20, (MR_Integer) 136, &GenerateVersionNumbers_21);
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_module_interface_files.actually_write_interface_file\'/6", (MR_String) "with \140--smart-recompilation\', timestamp not read");
          return;
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
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 0))));
    Var_79 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 1))) & (MR_Integer) 3);
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 2))));
    Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 4))));
    Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 5))));
    Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 6))));
    Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 7))));
    Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 8))));
    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 9))));
    Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 10))));
    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_12, (MR_Integer) 11))));
    {
      ParseTreeInt_32 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 0) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 1) = (MR_Box) ((MR_Unsigned) (Var_79));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 2) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 3) = ((MR_Box) (MaybeVersionNumbers_31));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 4) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 5) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 6) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 7) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 8) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 9) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 10) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), ParseTreeInt_32, 11) = ((MR_Box) (Var_89));
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
