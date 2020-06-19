/*
** Automatically generated from `write_module_interface_files.m'
** by the Mercury compiler,
** version rotd-2020-06-19
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
#include "parse_tree.comp_unit_interface.mih"
#include "parse_tree.convert_parse_tree.mih"
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
parse_tree__write_module_interface_files__actually_write_interface_file2_6_p_0(
  MR_Word Globals_7,
  MR_Word ParseTreeInt2_8,
  MR_String ExtraSuffix_9,
  MR_Word MaybeTimestamp_10);

static void MR_CALL 
parse_tree__write_module_interface_files__maybe_read_old_int_and_compare_for_smart_recomp__ho1_7_p_0(
  MR_Word NoLineNumGlobals_8,
  MR_Word ParseTreeIntN_9,
  MR_Word MaybeTimestamp_11,
  MR_Word * MaybeVersionNumbers_12);

static void MR_CALL 
parse_tree__write_module_interface_files__actually_write_interface_file1_6_p_0(
  MR_Word Globals_7,
  MR_Word ParseTreeInt1_8,
  MR_String ExtraSuffix_9,
  MR_Word MaybeTimestamp_10);

static void MR_CALL 
parse_tree__write_module_interface_files__maybe_read_old_int_and_compare_for_smart_recomp__ho2_7_p_0(
  MR_Word NoLineNumGlobals_8,
  MR_Word ParseTreeIntN_9,
  MR_Word MaybeTimestamp_11,
  MR_Word * MaybeVersionNumbers_12);

static void MR_CALL 
parse_tree__write_module_interface_files__actually_write_interface_file0_6_p_0(
  MR_Word Globals_7,
  MR_Word ParseTreeInt0_8,
  MR_String ExtraSuffix_9,
  MR_Word MaybeTimestamp_10);

static void MR_CALL 
parse_tree__write_module_interface_files__maybe_read_old_int_and_compare_for_smart_recomp__ho3_7_p_0(
  MR_Word NoLineNumGlobals_8,
  MR_Word ParseTreeIntN_9,
  MR_Word MaybeTimestamp_11,
  MR_Word * MaybeVersionNumbers_12);

static void MR_CALL 
parse_tree__write_module_interface_files__disable_all_line_numbers_2_p_0(
  MR_Word Globals_3,
  MR_Word * NoLineNumGlobals_4);

static void MR_CALL 
parse_tree__write_module_interface_files__construct_int_file_name_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word IntFileKind_11,
  MR_String ExtraSuffix_12,
  MR_String * OutputFileName_13,
  MR_String * TmpOutputFileName_14);

static void MR_CALL 
parse_tree__write_module_interface_files__report_file_not_written_8_p_0(
  MR_Word Globals_9,
  MR_Word Specs_10,
  MR_Word MaybePrefixMsg_11,
  MR_Word ModuleName_12,
  MR_String SuffixA_13,
  MR_Word MaybeSuffixB_14);


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
    ((MR_Box) ((MR_String) "Error reading .int3 files.\n"))
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
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_42,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_43)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit0_14, (MR_Integer) 0))));
    MR_Word IntRawCompUnit_20;
    MR_Word ModuleAndImports_21;
    MR_Word AugCompUnit1_22;
    MR_Word GetSpecs_23;
    MR_Word GetErrors_24;
    MR_Word GetSpecsEffectivelyErrors_25;
    MR_Word TypeCtorInfo_73_73;

    parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0(RawCompUnit0_14, &IntRawCompUnit_20);
    parse_tree__grab_modules__grab_unqual_imported_modules_make_int_9_p_0(Globals_10, SourceFileName_11, SourceFileModuleName_12, IntRawCompUnit_20, &ModuleAndImports_21, STATE_VARIABLE_HaveReadModuleMaps_0_42, STATE_VARIABLE_HaveReadModuleMaps_43);
    parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(ModuleAndImports_21, &AugCompUnit1_22, &GetSpecs_23, &GetErrors_24);
    GetSpecsEffectivelyErrors_25 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_10, GetSpecs_23);
    succeeded = (GetSpecsEffectivelyErrors_25 == (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_73_73 = (MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0);
      succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_73_73, GetErrors_24);
    }
    if (succeeded)
    {
      MR_Word AugCompUnit_26;
      MR_Word QualSpecs_33;
      MR_Word EffectiveGetQualSpecs_34;
      MR_Word Var_48;
      MR_Word Var_51;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;

      Var_48 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
      parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0(Globals_10, AugCompUnit1_22, &AugCompUnit_26, Var_48, &Var_27, (MR_String) "", &Var_28, &Var_29, &Var_30, &Var_31, &Var_32, (MR_Word) ((MR_Unsigned) 0U), &QualSpecs_33);
      Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), GetSpecs_23, QualSpecs_33);
      parse_tree__error_util__filter_interface_generation_specs_5_p_0(Globals_10, Var_51, &EffectiveGetQualSpecs_34);
      if ((EffectiveGetQualSpecs_34 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ParseTreeInt1_35;
        MR_Word ParseTreeInt2_36;
        MR_Word GenerateSpecs_37;
        MR_Word Specs_38;
        MR_Word Var_59;

        parse_tree__comp_unit_interface__generate_interfaces_int1_int2_6_p_0(Globals_10, AugCompUnit_26, &ParseTreeInt1_35, &ParseTreeInt2_36, (MR_Word) ((MR_Unsigned) 0U), &GenerateSpecs_37);
        Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), EffectiveGetQualSpecs_34, GenerateSpecs_37);
        parse_tree__error_util__filter_interface_generation_specs_5_p_0(Globals_10, Var_59, &Specs_38);
        parse_tree__error_util__write_error_specs_ignore_4_p_0(Globals_10, Specs_38);
        parse_tree__write_module_interface_files__actually_write_interface_file1_6_p_0(Globals_10, ParseTreeInt1_35, (MR_String) "", MaybeTimestamp_13);
        parse_tree__write_module_interface_files__actually_write_interface_file2_6_p_0(Globals_10, ParseTreeInt2_36, (MR_String) "", MaybeTimestamp_13);
        parse_tree__module_cmds__touch_interface_datestamp_5_p_0(Globals_10, ModuleName_17, (MR_String) ".date");
      }
      else
        parse_tree__write_module_interface_files__report_file_not_written_8_p_0(Globals_10, EffectiveGetQualSpecs_34, (MR_Word) ((MR_Unsigned) 0U), ModuleName_17, (MR_String) ".int", (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[3])));
    }
    else
      parse_tree__write_module_interface_files__report_file_not_written_8_p_0(Globals_10, GetSpecs_23, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[4])), ModuleName_17, (MR_String) ".int", (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[3])));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__actually_write_interface_file2_6_p_0(
  MR_Word Globals_7,
  MR_Word ParseTreeInt2_8,
  MR_String ExtraSuffix_9,
  MR_Word MaybeTimestamp_10)
{
  {
    MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 0))));
    MR_String OutputFileName_13;
    MR_String TmpOutputFileName_14;
    MR_Word NoLineNumGlobals_15;
    MR_Word MaybeVersionNumbers_16;
    MR_Word ParseTreeInt2V_17;
    MR_String Suffix_69;
    MR_String OutputFileName0_70;
    MR_Word NoLineNumGlobals0_76;
    MR_Word Var_78;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;

    Suffix_69 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0((MR_Integer) 2);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 0, Suffix_69, ModuleName_12, &OutputFileName0_70);
    OutputFileName_13 = mercury__string__f_43_43_2_f_0(OutputFileName0_70, ExtraSuffix_9);
    TmpOutputFileName_14 = mercury__string__f_43_43_2_f_0(OutputFileName_13, (MR_String) ".tmp");
    Var_78 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[0]));
    libs__globals__set_option_4_p_0((MR_Integer) 156, Var_78, Globals_7, &NoLineNumGlobals0_76);
    libs__globals__set_option_4_p_0((MR_Integer) 157, Var_78, NoLineNumGlobals0_76, &NoLineNumGlobals_15);
    parse_tree__write_module_interface_files__maybe_read_old_int_and_compare_for_smart_recomp__ho1_7_p_0(NoLineNumGlobals_15, ParseTreeInt2_8, MaybeTimestamp_10, &MaybeVersionNumbers_16);
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 0))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 1))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 3))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 4))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 5))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 6))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 7))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 8))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 9))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 10))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 11))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 12))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 13))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 14))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 15))));
    {
      ParseTreeInt2V_17 = (MR_Word) MR_new_object(MR_Word, (16 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt2V_17, 0) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), ParseTreeInt2V_17, 1) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), ParseTreeInt2V_17, 2) = ((MR_Box) (MaybeVersionNumbers_16));
      MR_hl_field(MR_mktag(0), ParseTreeInt2V_17, 3) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), ParseTreeInt2V_17, 4) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), ParseTreeInt2V_17, 5) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), ParseTreeInt2V_17, 6) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), ParseTreeInt2V_17, 7) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), ParseTreeInt2V_17, 8) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), ParseTreeInt2V_17, 9) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), ParseTreeInt2V_17, 10) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), ParseTreeInt2V_17, 11) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), ParseTreeInt2V_17, 12) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), ParseTreeInt2V_17, 13) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), ParseTreeInt2V_17, 14) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), ParseTreeInt2V_17, 15) = ((MR_Box) (Var_56));
    }
    parse_tree__parse_tree_out__output_parse_tree_int2_5_p_0(NoLineNumGlobals_15, TmpOutputFileName_14, ParseTreeInt2V_17);
    parse_tree__module_cmds__update_interface_4_p_0(Globals_7, OutputFileName_13);
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__maybe_read_old_int_and_compare_for_smart_recomp__ho1_7_p_0(
  MR_Word NoLineNumGlobals_8,
  MR_Word ParseTreeIntN_9,
  MR_Word MaybeTimestamp_11,
  MR_Word * MaybeVersionNumbers_12)
{
  {
    MR_bool succeeded;
    MR_Word GenerateVersionNumbers_64;
    MR_Word DisableVersionNumbers_65;

    libs__globals__lookup_bool_option_3_p_0(NoLineNumGlobals_8, (MR_Integer) 136, &GenerateVersionNumbers_64);
    libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(&DisableVersionNumbers_65);
    succeeded = (GenerateVersionNumbers_64 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (DisableVersionNumbers_65 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word ParseTreeInt_15;
      MR_Word ModuleName_16;
      MR_Word IntFileKind_17;
      MR_Word Timestamp_18;
      MR_Word OldParseTreeInt_21;
      MR_Word OldErrors_23;
      MR_Word MaybeOldParseTreeInt_24;
      MR_Word VersionNumbers_25;
      MR_String _OldIntFileName_19;
      MR_Word _OldTimestamp_20;
      MR_Word _OldSpecs_22;

      ParseTreeInt_15 = parse_tree__convert_parse_tree__convert_parse_tree_int2_to_int_1_f_0(ParseTreeIntN_9);
      ModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_15, (MR_Integer) 0))));
      IntFileKind_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ParseTreeInt_15, (MR_Integer) 1))) & (MR_Integer) 3);
      if ((MaybeTimestamp_11 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_module_interface_files.insist_on_timestamp\'/2", (MR_String) "timestamp not read with \140--smart-recompilation\'");
          return;
        }
      else
        Timestamp_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestamp_11, (MR_Integer) 0))));
      parse_tree__read_modules__read_module_int_14_p_0(NoLineNumGlobals_8, (MR_String) "Reading old interface for module", (MR_Integer) 0, (MR_Integer) 0, ModuleName_16, IntFileKind_17, &_OldIntFileName_19, (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[1]), &_OldTimestamp_20, &OldParseTreeInt_21, &_OldSpecs_22, &OldErrors_23);
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), OldErrors_23);
      if (succeeded)
        {
          MaybeOldParseTreeInt_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeOldParseTreeInt_24, 0) = ((MR_Box) (OldParseTreeInt_21));
        }
      else
        MaybeOldParseTreeInt_24 = (MR_Word) ((MR_Unsigned) 0U);
      recompilation__version__compute_version_numbers_4_p_0(Timestamp_18, ParseTreeInt_15, MaybeOldParseTreeInt_24, &VersionNumbers_25);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeVersionNumbers_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VersionNumbers_25));
      }
    }
    else
      *MaybeVersionNumbers_12 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__actually_write_interface_file1_6_p_0(
  MR_Word Globals_7,
  MR_Word ParseTreeInt1_8,
  MR_String ExtraSuffix_9,
  MR_Word MaybeTimestamp_10)
{
  {
    MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 0))));
    MR_String OutputFileName_13;
    MR_String TmpOutputFileName_14;
    MR_Word NoLineNumGlobals_15;
    MR_Word MaybeVersionNumbers_16;
    MR_Word ParseTreeInt1V_17;
    MR_String Suffix_87;
    MR_String OutputFileName0_88;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;

    Suffix_87 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0((MR_Integer) 1);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 0, Suffix_87, ModuleName_12, &OutputFileName0_88);
    OutputFileName_13 = mercury__string__f_43_43_2_f_0(OutputFileName0_88, ExtraSuffix_9);
    TmpOutputFileName_14 = mercury__string__f_43_43_2_f_0(OutputFileName_13, (MR_String) ".tmp");
    parse_tree__write_module_interface_files__disable_all_line_numbers_2_p_0(Globals_7, &NoLineNumGlobals_15);
    parse_tree__write_module_interface_files__maybe_read_old_int_and_compare_for_smart_recomp__ho2_7_p_0(NoLineNumGlobals_15, ParseTreeInt1_8, MaybeTimestamp_10, &MaybeVersionNumbers_16);
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 0))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 1))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 3))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 4))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 5))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 6))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 7))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 8))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 9))));
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 10))));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 11))));
    Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 12))));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 13))));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 14))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 15))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 16))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 17))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 18))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 19))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 20))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 21))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 22))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 23))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 24))));
    {
      ParseTreeInt1V_17 = (MR_Word) MR_new_object(MR_Word, (25 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 0) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 1) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 2) = ((MR_Box) (MaybeVersionNumbers_16));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 3) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 4) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 5) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 6) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 7) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 8) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 9) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 10) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 11) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 12) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 13) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 14) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 15) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 16) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 17) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 18) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 19) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 20) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 21) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 22) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 23) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), ParseTreeInt1V_17, 24) = ((MR_Box) (Var_74));
    }
    parse_tree__parse_tree_out__output_parse_tree_int1_5_p_0(NoLineNumGlobals_15, TmpOutputFileName_14, ParseTreeInt1V_17);
    parse_tree__module_cmds__update_interface_4_p_0(Globals_7, OutputFileName_13);
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__maybe_read_old_int_and_compare_for_smart_recomp__ho2_7_p_0(
  MR_Word NoLineNumGlobals_8,
  MR_Word ParseTreeIntN_9,
  MR_Word MaybeTimestamp_11,
  MR_Word * MaybeVersionNumbers_12)
{
  {
    MR_bool succeeded;
    MR_Word GenerateVersionNumbers_64;
    MR_Word DisableVersionNumbers_65;

    libs__globals__lookup_bool_option_3_p_0(NoLineNumGlobals_8, (MR_Integer) 136, &GenerateVersionNumbers_64);
    libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(&DisableVersionNumbers_65);
    succeeded = (GenerateVersionNumbers_64 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (DisableVersionNumbers_65 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word ParseTreeInt_15;
      MR_Word ModuleName_16;
      MR_Word IntFileKind_17;
      MR_Word Timestamp_18;
      MR_Word OldParseTreeInt_21;
      MR_Word OldErrors_23;
      MR_Word MaybeOldParseTreeInt_24;
      MR_Word VersionNumbers_25;
      MR_String _OldIntFileName_19;
      MR_Word _OldTimestamp_20;
      MR_Word _OldSpecs_22;

      ParseTreeInt_15 = parse_tree__convert_parse_tree__convert_parse_tree_int1_to_int_1_f_0(ParseTreeIntN_9);
      ModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_15, (MR_Integer) 0))));
      IntFileKind_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ParseTreeInt_15, (MR_Integer) 1))) & (MR_Integer) 3);
      if ((MaybeTimestamp_11 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_module_interface_files.insist_on_timestamp\'/2", (MR_String) "timestamp not read with \140--smart-recompilation\'");
          return;
        }
      else
        Timestamp_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestamp_11, (MR_Integer) 0))));
      parse_tree__read_modules__read_module_int_14_p_0(NoLineNumGlobals_8, (MR_String) "Reading old interface for module", (MR_Integer) 0, (MR_Integer) 0, ModuleName_16, IntFileKind_17, &_OldIntFileName_19, (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[1]), &_OldTimestamp_20, &OldParseTreeInt_21, &_OldSpecs_22, &OldErrors_23);
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), OldErrors_23);
      if (succeeded)
        {
          MaybeOldParseTreeInt_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeOldParseTreeInt_24, 0) = ((MR_Box) (OldParseTreeInt_21));
        }
      else
        MaybeOldParseTreeInt_24 = (MR_Word) ((MR_Unsigned) 0U);
      recompilation__version__compute_version_numbers_4_p_0(Timestamp_18, ParseTreeInt_15, MaybeOldParseTreeInt_24, &VersionNumbers_25);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeVersionNumbers_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VersionNumbers_25));
      }
    }
    else
      *MaybeVersionNumbers_12 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
parse_tree__write_module_interface_files__write_private_interface_file_int0_9_p_0(
  MR_Word Globals_10,
  MR_String SourceFileName_11,
  MR_Word SourceFileModuleName_12,
  MR_Word MaybeTimestamp_13,
  MR_Word RawCompUnit0_14,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_40,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_41)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawCompUnit0_14, (MR_Integer) 0))));
    MR_Word ModuleAndImports_20;
    MR_Word AugCompUnit1_21;
    MR_Word GetSpecs_22;
    MR_Word GetErrors_23;
    MR_Word GetSpecsEffectivelyErrors_24;
    MR_Word TypeCtorInfo_67_67;

    parse_tree__grab_modules__grab_unqual_imported_modules_make_int_9_p_0(Globals_10, SourceFileName_11, SourceFileModuleName_12, RawCompUnit0_14, &ModuleAndImports_20, STATE_VARIABLE_HaveReadModuleMaps_0_40, STATE_VARIABLE_HaveReadModuleMaps_41);
    parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(ModuleAndImports_20, &AugCompUnit1_21, &GetSpecs_22, &GetErrors_23);
    GetSpecsEffectivelyErrors_24 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_10, GetSpecs_22);
    succeeded = (GetSpecsEffectivelyErrors_24 == (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_67_67 = (MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0);
      succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_67_67, GetErrors_23);
    }
    if (succeeded)
    {
      MR_Word AugCompUnit_25;
      MR_Word QualSpecs_32;
      MR_Word EffectiveGetQualSpecs_33;
      MR_Word Var_46;
      MR_Word Var_49;
      MR_Word _EventSpecMap_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;

      Var_46 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
      parse_tree__module_qual__module_qualify_aug_comp_unit_13_p_0(Globals_10, AugCompUnit1_21, &AugCompUnit_25, Var_46, &_EventSpecMap_26, (MR_String) "", &Var_27, &Var_28, &Var_29, &Var_30, &Var_31, (MR_Word) ((MR_Unsigned) 0U), &QualSpecs_32);
      Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), GetSpecs_22, QualSpecs_32);
      parse_tree__error_util__filter_interface_generation_specs_5_p_0(Globals_10, Var_49, &EffectiveGetQualSpecs_33);
      if ((EffectiveGetQualSpecs_33 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ParseTreeInt0_34;
        MR_Word GenerateSpecs_35;
        MR_Word Specs_36;
        MR_Word Var_56;

        parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0(AugCompUnit_25, &ParseTreeInt0_34, (MR_Word) ((MR_Unsigned) 0U), &GenerateSpecs_35);
        Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), EffectiveGetQualSpecs_33, GenerateSpecs_35);
        parse_tree__error_util__filter_interface_generation_specs_5_p_0(Globals_10, Var_56, &Specs_36);
        parse_tree__error_util__write_error_specs_ignore_4_p_0(Globals_10, Specs_36);
        parse_tree__write_module_interface_files__actually_write_interface_file0_6_p_0(Globals_10, ParseTreeInt0_34, (MR_String) "", MaybeTimestamp_13);
        parse_tree__module_cmds__touch_interface_datestamp_5_p_0(Globals_10, ModuleName_17, (MR_String) ".date0");
      }
      else
        parse_tree__write_module_interface_files__report_file_not_written_8_p_0(Globals_10, EffectiveGetQualSpecs_33, (MR_Word) ((MR_Unsigned) 0U), ModuleName_17, (MR_String) ".int0", (MR_Word) ((MR_Unsigned) 0U));
    }
    else
      parse_tree__write_module_interface_files__report_file_not_written_8_p_0(Globals_10, GetSpecs_22, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[2])), ModuleName_17, (MR_String) ".int0", (MR_Word) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__actually_write_interface_file0_6_p_0(
  MR_Word Globals_7,
  MR_Word ParseTreeInt0_8,
  MR_String ExtraSuffix_9,
  MR_Word MaybeTimestamp_10)
{
  {
    MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 0))));
    MR_String OutputFileName_13;
    MR_String TmpOutputFileName_14;
    MR_Word NoLineNumGlobals_15;
    MR_Word MaybeVersionNumbers_16;
    MR_Word ParseTreeInt0V_17;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;

    parse_tree__write_module_interface_files__construct_int_file_name_8_p_0(Globals_7, ModuleName_12, (MR_Integer) 0, ExtraSuffix_9, &OutputFileName_13, &TmpOutputFileName_14);
    parse_tree__write_module_interface_files__disable_all_line_numbers_2_p_0(Globals_7, &NoLineNumGlobals_15);
    parse_tree__write_module_interface_files__maybe_read_old_int_and_compare_for_smart_recomp__ho3_7_p_0(NoLineNumGlobals_15, ParseTreeInt0_8, MaybeTimestamp_10, &MaybeVersionNumbers_16);
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 0))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 1))));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 3))));
    Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 4))));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 5))));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 6))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 7))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 8))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 9))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 10))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 11))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 12))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 13))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 14))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 15))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 16))));
    Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 17))));
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 18))));
    Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 19))));
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 20))));
    Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 21))));
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 22))));
    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 23))));
    Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 24))));
    Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 25))));
    Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 26))));
    Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 27))));
    Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 28))));
    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 29))));
    Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 30))));
    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 31))));
    Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 32))));
    {
      ParseTreeInt0V_17 = (MR_Word) MR_new_object(MR_Word, (33 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 1) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 2) = ((MR_Box) (MaybeVersionNumbers_16));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 3) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 4) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 5) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 6) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 7) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 8) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 9) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 10) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 11) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 12) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 13) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 14) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 15) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 16) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 17) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 18) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 19) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 20) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 21) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 22) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 23) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 24) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 25) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 26) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 27) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 28) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 29) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 30) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 31) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(0), ParseTreeInt0V_17, 32) = ((MR_Box) (Var_90));
    }
    parse_tree__parse_tree_out__output_parse_tree_int0_5_p_0(NoLineNumGlobals_15, TmpOutputFileName_14, ParseTreeInt0V_17);
    parse_tree__module_cmds__update_interface_4_p_0(Globals_7, OutputFileName_13);
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__maybe_read_old_int_and_compare_for_smart_recomp__ho3_7_p_0(
  MR_Word NoLineNumGlobals_8,
  MR_Word ParseTreeIntN_9,
  MR_Word MaybeTimestamp_11,
  MR_Word * MaybeVersionNumbers_12)
{
  {
    MR_bool succeeded;
    MR_Word GenerateVersionNumbers_64;
    MR_Word DisableVersionNumbers_65;

    libs__globals__lookup_bool_option_3_p_0(NoLineNumGlobals_8, (MR_Integer) 136, &GenerateVersionNumbers_64);
    libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(&DisableVersionNumbers_65);
    succeeded = (GenerateVersionNumbers_64 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (DisableVersionNumbers_65 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word ParseTreeInt_15;
      MR_Word ModuleName_16;
      MR_Word IntFileKind_17;
      MR_Word Timestamp_18;
      MR_Word OldParseTreeInt_21;
      MR_Word OldErrors_23;
      MR_Word MaybeOldParseTreeInt_24;
      MR_Word VersionNumbers_25;
      MR_String _OldIntFileName_19;
      MR_Word _OldTimestamp_20;
      MR_Word _OldSpecs_22;

      ParseTreeInt_15 = parse_tree__convert_parse_tree__convert_parse_tree_int0_to_int_1_f_0(ParseTreeIntN_9);
      ModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_15, (MR_Integer) 0))));
      IntFileKind_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ParseTreeInt_15, (MR_Integer) 1))) & (MR_Integer) 3);
      if ((MaybeTimestamp_11 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_module_interface_files.insist_on_timestamp\'/2", (MR_String) "timestamp not read with \140--smart-recompilation\'");
          return;
        }
      else
        Timestamp_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestamp_11, (MR_Integer) 0))));
      parse_tree__read_modules__read_module_int_14_p_0(NoLineNumGlobals_8, (MR_String) "Reading old interface for module", (MR_Integer) 0, (MR_Integer) 0, ModuleName_16, IntFileKind_17, &_OldIntFileName_19, (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[1]), &_OldTimestamp_20, &OldParseTreeInt_21, &_OldSpecs_22, &OldErrors_23);
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), OldErrors_23);
      if (succeeded)
        {
          MaybeOldParseTreeInt_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeOldParseTreeInt_24, 0) = ((MR_Box) (OldParseTreeInt_21));
        }
      else
        MaybeOldParseTreeInt_24 = (MR_Word) ((MR_Unsigned) 0U);
      recompilation__version__compute_version_numbers_4_p_0(Timestamp_18, ParseTreeInt_15, MaybeOldParseTreeInt_24, &VersionNumbers_25);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeVersionNumbers_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VersionNumbers_25));
      }
    }
    else
      *MaybeVersionNumbers_12 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__disable_all_line_numbers_2_p_0(
  MR_Word Globals_3,
  MR_Word * NoLineNumGlobals_4)
{
  {
    MR_Word NoLineNumGlobals0_5;
    MR_Word Var_7 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[0]));

    libs__globals__set_option_4_p_0((MR_Integer) 156, Var_7, Globals_3, &NoLineNumGlobals0_5);
    libs__globals__set_option_4_p_0((MR_Integer) 157, Var_7, NoLineNumGlobals0_5, NoLineNumGlobals_4);
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__construct_int_file_name_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word IntFileKind_11,
  MR_String ExtraSuffix_12,
  MR_String * OutputFileName_13,
  MR_String * TmpOutputFileName_14)
{
  {
    MR_String Suffix_16;
    MR_String OutputFileName0_17;

    Suffix_16 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0(IntFileKind_11);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 0, Suffix_16, ModuleName_10, &OutputFileName0_17);
    *OutputFileName_13 = mercury__string__f_43_43_2_f_0(OutputFileName0_17, ExtraSuffix_12);
    *TmpOutputFileName_14 = mercury__string__f_43_43_2_f_0(*OutputFileName_13, (MR_String) ".tmp");
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
    MR_Word ParseTreeInt3_13;
    MR_Word Specs0_14;
    MR_Word Specs_15;
    MR_Word EffectivelyErrors_16;

    parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0(Globals_6, RawCompUnit_8, &ParseTreeInt3_13, (MR_Word) ((MR_Unsigned) 0U), &Specs0_14);
    parse_tree__error_util__filter_interface_generation_specs_5_p_0(Globals_6, Specs0_14, &Specs_15);
    EffectivelyErrors_16 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_6, Specs_15);
    switch (EffectivelyErrors_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ModuleName_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_13, (MR_Integer) 0))));
          MR_String OutputFileName_38;
          MR_String TmpOutputFileName_39;
          MR_Word NoLineNumGlobals_40;
          MR_String Suffix_65;
          MR_String OutputFileName0_66;
          MR_Word NoLineNumGlobals0_72;
          MR_Word Var_74;

          Suffix_65 = parse_tree__file_kind__int_file_kind_to_extension_1_f_0((MR_Integer) 3);
          parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_6, (MR_Integer) 0, Suffix_65, ModuleName_37, &OutputFileName0_66);
          OutputFileName_38 = mercury__string__f_43_43_2_f_0(OutputFileName0_66, (MR_String) "");
          TmpOutputFileName_39 = mercury__string__f_43_43_2_f_0(OutputFileName_38, (MR_String) ".tmp");
          Var_74 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[0]));
          libs__globals__set_option_4_p_0((MR_Integer) 156, Var_74, Globals_6, &NoLineNumGlobals0_72);
          libs__globals__set_option_4_p_0((MR_Integer) 157, Var_74, NoLineNumGlobals0_72, &NoLineNumGlobals_40);
          parse_tree__parse_tree_out__output_parse_tree_int3_5_p_0(NoLineNumGlobals_40, TmpOutputFileName_39, ParseTreeInt3_13);
          parse_tree__module_cmds__update_interface_4_p_0(Globals_6, OutputFileName_38);
          parse_tree__module_cmds__touch_interface_datestamp_5_p_0(Globals_6, ModuleName_10, (MR_String) ".date3");
        }
        break;
      case (MR_Integer) 1:
        parse_tree__write_module_interface_files__report_file_not_written_8_p_0(Globals_6, Specs_15, (MR_Word) ((MR_Unsigned) 0U), ModuleName_10, (MR_String) ".int3", (MR_Word) ((MR_Unsigned) 0U));
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

    parse_tree__error_util__write_error_specs_ignore_4_p_0(Globals_9, Specs_10);
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
    parse_tree__error_util__write_error_spec_ignore_4_p_0(Globals_9, NotWrittenSpec_22);
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
