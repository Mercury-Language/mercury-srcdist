/*
** Automatically generated from `write_module_interface_files.m'
** by the Mercury compiler,
** version rotd-2022-04-15
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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.comp_unit_interface.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.grab_modules.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_cmds.mih"
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




static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_generate_version_numbers_0_0;

static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_generate_version_numbers_0_1;

static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_ordinal_ordered_maybe_generate_version_numbers_0[2];

static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_generate_version_numbers_0[2];

static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_generate_version_numbers_0[2];

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_generate_version_numbers_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_generate_version_numbers_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_module_interface_files__actually_write_interface_file2_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word Globals_12,
  MR_Word ParseTreeInt2_13,
  MR_String ExtraSuffix_14,
  MR_Word MaybeTimestamp_15,
  MR_Word * Succeeded_16);

static void MR_CALL 
parse_tree__write_module_interface_files__maybe_read_old_int2_and_compare_for_smart_recomp_6_p_0(
  MR_Word NoLineNumGlobals_7,
  MR_Word ParseTreeInt2_8,
  MR_Word MaybeTimestamp_9,
  MR_Word * MaybeVersionNumbers_10);

static void MR_CALL 
parse_tree__write_module_interface_files__actually_write_interface_file1_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word Globals_12,
  MR_Word ParseTreeInt1_13,
  MR_String ExtraSuffix_14,
  MR_Word MaybeTimestamp_15,
  MR_Word * Succeeded_16);

static void MR_CALL 
parse_tree__write_module_interface_files__maybe_read_old_int1_and_compare_for_smart_recomp_6_p_0(
  MR_Word NoLineNumGlobals_7,
  MR_Word ParseTreeInt1_8,
  MR_Word MaybeTimestamp_9,
  MR_Word * MaybeVersionNumbers_10);

static void MR_CALL 
parse_tree__write_module_interface_files__disable_all_line_numbers_2_p_0(
  MR_Word Globals_3,
  MR_Word * NoLineNumGlobals_4);

static void MR_CALL 
parse_tree__write_module_interface_files__actually_write_interface_file0_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word Globals_12,
  MR_Word ParseTreeInt0_13,
  MR_String ExtraSuffix_14,
  MR_Word MaybeTimestamp_15,
  MR_Word * Succeeded_16);

static void MR_CALL 
parse_tree__write_module_interface_files__maybe_read_old_int0_and_compare_for_smart_recomp_6_p_0(
  MR_Word NoLineNumGlobals_7,
  MR_Word ParseTreeInt0_8,
  MR_Word MaybeTimestamp_9,
  MR_Word * MaybeVersionNumbers_10);

static void MR_CALL 
parse_tree__write_module_interface_files__construct_int_file_name_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word IntFileKind_11,
  MR_String ExtraSuffix_12,
  MR_String * OutputFileName_13,
  MR_String * TmpOutputFileName_14);

static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_51_95_95_91_54_93_95_48_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word Globals_12,
  MR_Word ParseTreeInt3_13,
  MR_String ExtraSuffix_14,
  MR_Word * Succeeded_16);

static void MR_CALL 
parse_tree__write_module_interface_files__report_file_not_written_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__write_module_interface_files__report_file_not_written_10_p_0(
  MR_Word ErrorStream_11,
  MR_Word Globals_12,
  MR_Word Specs_13,
  MR_Word PrefixPieces_14,
  MR_Word ModuleName_15,
  MR_Word OtherExtA_16,
  MR_Word MaybeOtherExtB_17,
  MR_Word OtherExtDate_18);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_generate_version_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_generate_version_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_1[10][2];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_2[3][1];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_3[1][7];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_4[1][3];




static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_1[10][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 30U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__write_module_interface_files_scalar_common_1[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error reading interface files."))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__write_module_interface_files_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_1[1])))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error reading .int3 files."))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__write_module_interface_files_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_1[1])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not written."))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__write_module_interface_files_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_2[3][1] = {
  /* row   0 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".int2"))))
  },
  /* row   1 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   2 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_3[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_res_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_4[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_3[0])),
    ((MR_Box) (parse_tree__write_module_interface_files__report_file_not_written_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_generate_version_numbers_0_0 = {
  (MR_String) "do_not_generate_version_numbers",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_generate_version_numbers_0_1 = {
  (MR_String) "generate_version_numbers",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_ordinal_ordered_maybe_generate_version_numbers_0[2] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_generate_version_numbers_0_0,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_generate_version_numbers_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_generate_version_numbers_0[2] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_generate_version_numbers_0_0,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_generate_version_numbers_0_1
};

static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_generate_version_numbers_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_maybe_generate_version_numbers_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__write_module_interface_files____Unify____maybe_generate_version_numbers_0_0_10001)),
  ((MR_Box) (parse_tree__write_module_interface_files____Compare____maybe_generate_version_numbers_0_0_10001)),
  (MR_String) "parse_tree.write_module_interface_files",
  (MR_String) "maybe_generate_version_numbers",
  { parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_generate_version_numbers_0 },
  { parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_ordinal_ordered_maybe_generate_version_numbers_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_generate_version_numbers_0,

};

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_generate_version_numbers_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_generate_version_numbers_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__write_module_interface_files__write_interface_file_int1_int2_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word ErrorStream_14,
  MR_Word Globals_15,
  MR_String SourceFileName_16,
  MR_Word SourceFileModuleName_17,
  MR_Word MaybeTimestamp_18,
  MR_Word ParseTreeModuleSrc0_19,
  MR_Word * Succeeded_20,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_43,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_44)
{
  MR_bool succeeded;
  MR_Word ModuleName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_19, (MR_Integer) 0))));
  MR_Word IntParseTreeModuleSrc_24;
  MR_Word Baggage_25;
  MR_Word AugMakeIntUnit1_26;
  MR_Word GetSpecs_27;
  MR_Word GetErrors_28;
  MR_Word GetSpecsEffectivelyErrors_29;
  MR_Word TypeCtorInfo_141_141;

  parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0(ParseTreeModuleSrc0_19, &IntParseTreeModuleSrc_24);
  parse_tree__grab_modules__grab_unqual_imported_modules_make_int_10_p_0(Globals_15, SourceFileName_16, SourceFileModuleName_17, IntParseTreeModuleSrc_24, &Baggage_25, &AugMakeIntUnit1_26, STATE_VARIABLE_HaveReadModuleMaps_0_43, STATE_VARIABLE_HaveReadModuleMaps_44);
  GetSpecs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage_25, (MR_Integer) 6))));
  GetErrors_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage_25, (MR_Integer) 7))));
  GetSpecsEffectivelyErrors_29 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_15, GetSpecs_27);
  succeeded = (GetSpecsEffectivelyErrors_29 == (MR_Integer) 0);
  if (succeeded)
  {
    TypeCtorInfo_141_141 = (MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0);
    succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_141_141, GetErrors_28);
  }
  if (succeeded)
  {
    MR_Word AugMakeIntUnit_30;
    MR_Word QualSpecs_31;
    MR_Word EffectiveGetQualSpecs_32;
    MR_Word Var_50;

    parse_tree__module_qual__module_qualify_aug_make_int_unit_5_p_0(Globals_15, AugMakeIntUnit1_26, &AugMakeIntUnit_30, (MR_Word) ((MR_Unsigned) 0U), &QualSpecs_31);
    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), GetSpecs_27, QualSpecs_31);
    parse_tree__error_util__filter_interface_generation_specs_5_p_0(Globals_15, Var_50, &EffectiveGetQualSpecs_32);
    if ((EffectiveGetQualSpecs_32 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ParseTreeInt1_33;
      MR_Word ParseTreeInt2_34;
      MR_Word GenerateSpecs_35;
      MR_Word Specs_36;
      MR_Word OutputSucceeded1_37;
      MR_Word OutputSucceeded2_38;
      MR_Word TouchSucceeded_39;
      MR_Word Var_62;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;

      parse_tree__comp_unit_interface__generate_interfaces_int1_int2_6_p_0(Globals_15, AugMakeIntUnit_30, &ParseTreeInt1_33, &ParseTreeInt2_34, (MR_Word) ((MR_Unsigned) 0U), &GenerateSpecs_35);
      Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), EffectiveGetQualSpecs_32, GenerateSpecs_35);
      parse_tree__error_util__filter_interface_generation_specs_5_p_0(Globals_15, Var_62, &Specs_36);
      parse_tree__error_util__write_error_specs_5_p_0(ErrorStream_14, Globals_15, Specs_36);
      parse_tree__write_module_interface_files__actually_write_interface_file1_9_p_0(ProgressStream_13, ErrorStream_14, Globals_15, ParseTreeInt1_33, (MR_String) "", MaybeTimestamp_18, &OutputSucceeded1_37);
      parse_tree__write_module_interface_files__actually_write_interface_file2_9_p_0(ProgressStream_13, ErrorStream_14, Globals_15, ParseTreeInt2_34, (MR_String) "", MaybeTimestamp_18, &OutputSucceeded2_38);
      parse_tree__module_cmds__touch_interface_datestamp_8_p_0(Globals_15, ProgressStream_13, ErrorStream_14, ModuleName_23, (MR_Word) (((MR_Box) ((MR_String) ".date"))), &TouchSucceeded_39);
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (TouchSucceeded_39));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (OutputSucceeded2_38));
        MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_74));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (OutputSucceeded1_37));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_73));
      }
      *Succeeded_20 = libs__maybe_succeeded__and_list_1_f_0(Var_72);
    }
    else
    {
      parse_tree__write_module_interface_files__report_file_not_written_10_p_0(ErrorStream_14, Globals_15, EffectiveGetQualSpecs_32, (MR_Word) ((MR_Unsigned) 0U), ModuleName_23, (MR_Word) (((MR_Box) ((MR_String) ".int"))), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[0])), (MR_Word) (((MR_Box) ((MR_String) ".date"))));
      *Succeeded_20 = (MR_Integer) 0;
    }
  }
  else
  {
    parse_tree__write_module_interface_files__report_file_not_written_10_p_0(ErrorStream_14, Globals_15, GetSpecs_27, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_1[5])), ModuleName_23, (MR_Word) (((MR_Box) ((MR_String) ".int"))), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[0])), (MR_Word) (((MR_Box) ((MR_String) ".date"))));
    *Succeeded_20 = (MR_Integer) 0;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__actually_write_interface_file2_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word Globals_12,
  MR_Word ParseTreeInt2_13,
  MR_String ExtraSuffix_14,
  MR_Word MaybeTimestamp_15,
  MR_Word * Succeeded_16)
{
  MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_13, (MR_Integer) 0))));
  MR_String OutputFileName_19;
  MR_String TmpOutputFileName_20;
  MR_Word NoLineNumGlobals_21;
  MR_Word MaybeVersionNumbers_22;
  MR_Word ParseTreeInt2V_23;
  MR_Word OutputSucceeded_24;
  MR_Word UpdateSucceeded_25;
  MR_Word OtherExt_72;
  MR_String OutputFileName0_73;
  MR_Word Var_76;
  MR_Word NoLineNumGlobals0_81;
  MR_String _ExtStr_71;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;

  parse_tree__file_kind__int_file_kind_to_extension_3_p_0((MR_Integer) 2, &_ExtStr_71, &OtherExt_72);
  {
    Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (OtherExt_72));
  }
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_module_interface_files.construct_int_file_name\'/8", (MR_Integer) 0, Var_76, ModuleName_18, &OutputFileName0_73);
  OutputFileName_19 = mercury__string__f_43_43_2_f_0(OutputFileName0_73, ExtraSuffix_14);
  TmpOutputFileName_20 = mercury__string__f_43_43_2_f_0(OutputFileName_19, (MR_String) ".tmp");
  libs__globals__set_option_4_p_0((MR_Integer) 170, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[1])), Globals_12, &NoLineNumGlobals0_81);
  libs__globals__set_option_4_p_0((MR_Integer) 171, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[1])), NoLineNumGlobals0_81, &NoLineNumGlobals_21);
  parse_tree__write_module_interface_files__maybe_read_old_int2_and_compare_for_smart_recomp_6_p_0(NoLineNumGlobals_21, ParseTreeInt2_13, MaybeTimestamp_15, &MaybeVersionNumbers_22);
  Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_13, (MR_Integer) 0))));
  Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_13, (MR_Integer) 1))));
  Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_13, (MR_Integer) 3))));
  Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_13, (MR_Integer) 4))));
  Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_13, (MR_Integer) 5))));
  Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_13, (MR_Integer) 6))));
  Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_13, (MR_Integer) 7))));
  Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_13, (MR_Integer) 8))));
  Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_13, (MR_Integer) 9))));
  Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_13, (MR_Integer) 10))));
  Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_13, (MR_Integer) 11))));
  Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_13, (MR_Integer) 12))));
  Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_13, (MR_Integer) 13))));
  Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_13, (MR_Integer) 14))));
  {
    ParseTreeInt2V_23 = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ParseTreeInt2V_23, 0) = ((MR_Box) (Var_47));
    MR_hl_field(MR_mktag(0), ParseTreeInt2V_23, 1) = ((MR_Box) (Var_48));
    MR_hl_field(MR_mktag(0), ParseTreeInt2V_23, 2) = ((MR_Box) (MaybeVersionNumbers_22));
    MR_hl_field(MR_mktag(0), ParseTreeInt2V_23, 3) = ((MR_Box) (Var_50));
    MR_hl_field(MR_mktag(0), ParseTreeInt2V_23, 4) = ((MR_Box) (Var_51));
    MR_hl_field(MR_mktag(0), ParseTreeInt2V_23, 5) = ((MR_Box) (Var_52));
    MR_hl_field(MR_mktag(0), ParseTreeInt2V_23, 6) = ((MR_Box) (Var_53));
    MR_hl_field(MR_mktag(0), ParseTreeInt2V_23, 7) = ((MR_Box) (Var_54));
    MR_hl_field(MR_mktag(0), ParseTreeInt2V_23, 8) = ((MR_Box) (Var_55));
    MR_hl_field(MR_mktag(0), ParseTreeInt2V_23, 9) = ((MR_Box) (Var_56));
    MR_hl_field(MR_mktag(0), ParseTreeInt2V_23, 10) = ((MR_Box) (Var_57));
    MR_hl_field(MR_mktag(0), ParseTreeInt2V_23, 11) = ((MR_Box) (Var_58));
    MR_hl_field(MR_mktag(0), ParseTreeInt2V_23, 12) = ((MR_Box) (Var_59));
    MR_hl_field(MR_mktag(0), ParseTreeInt2V_23, 13) = ((MR_Box) (Var_60));
    MR_hl_field(MR_mktag(0), ParseTreeInt2V_23, 14) = ((MR_Box) (Var_61));
  }
  parse_tree__parse_tree_out__output_parse_tree_int2_8_p_0(ProgressStream_10, ErrorStream_11, NoLineNumGlobals_21, TmpOutputFileName_20, ParseTreeInt2V_23, &OutputSucceeded_24);
  parse_tree__module_cmds__update_interface_report_any_error_6_p_0(Globals_12, ModuleName_18, OutputFileName_19, &UpdateSucceeded_25);
  *Succeeded_16 = libs__maybe_succeeded__and_2_f_0(OutputSucceeded_24, UpdateSucceeded_25);
}

static void MR_CALL 
parse_tree__write_module_interface_files__maybe_read_old_int2_and_compare_for_smart_recomp_6_p_0(
  MR_Word NoLineNumGlobals_7,
  MR_Word ParseTreeInt2_8,
  MR_Word MaybeTimestamp_9,
  MR_Word * MaybeVersionNumbers_10)
{
  MR_bool succeeded;
  MR_Word GenerateVersionNumbers_51;
  MR_Word DisableVersionNumbers_52;

  libs__globals__lookup_bool_option_3_p_0(NoLineNumGlobals_7, (MR_Integer) 150, &GenerateVersionNumbers_51);
  libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(&DisableVersionNumbers_52);
  succeeded = (GenerateVersionNumbers_51 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DisableVersionNumbers_52 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_8, (MR_Integer) 0))));
    MR_Word Timestamp_14;
    MR_Word OldParseTreeInt2_17;
    MR_Word OldErrors_19;
    MR_Word MaybeOldParseTreeInt2_20;
    MR_Word VersionNumbers_21;
    MR_Word Var_25;
    MR_String _OldIntFileName_15;
    MR_Word _OldTimestamp_16;
    MR_Word _OldSpecs_18;

    if ((MaybeTimestamp_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_module_interface_files.insist_on_timestamp\'/2", (MR_String) "timestamp not read with \140--smart-recompilation\'");
        return;
      }
    else
      Timestamp_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestamp_9, (MR_Integer) 0))));
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_25, 0) = ((MR_Box) (ModuleName_13));
    }
    parse_tree__read_modules__read_module_int2_13_p_0(NoLineNumGlobals_7, Var_25, (MR_Integer) 0, (MR_Integer) 0, ModuleName_13, &_OldIntFileName_15, (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[2]), &_OldTimestamp_16, &OldParseTreeInt2_17, &_OldSpecs_18, &OldErrors_19);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), OldErrors_19);
    if (succeeded)
      {
        MaybeOldParseTreeInt2_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeOldParseTreeInt2_20, 0) = ((MR_Box) (OldParseTreeInt2_17));
      }
    else
      MaybeOldParseTreeInt2_20 = (MR_Word) ((MR_Unsigned) 0U);
    recompilation__version__compute_version_numbers_int2_4_p_0(MaybeOldParseTreeInt2_20, Timestamp_14, ParseTreeInt2_8, &VersionNumbers_21);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeVersionNumbers_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VersionNumbers_21));
    }
  }
  else
    *MaybeVersionNumbers_10 = (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
parse_tree__write_module_interface_files__actually_write_interface_file1_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word Globals_12,
  MR_Word ParseTreeInt1_13,
  MR_String ExtraSuffix_14,
  MR_Word MaybeTimestamp_15,
  MR_Word * Succeeded_16)
{
  MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_13, (MR_Integer) 0))));
  MR_String OutputFileName_19;
  MR_String TmpOutputFileName_20;
  MR_Word NoLineNumGlobals_21;
  MR_Word MaybeVersionNumbers_22;
  MR_Word ParseTreeInt1V_23;
  MR_Word OutputSucceeded_24;
  MR_Word UpdateSucceeded_25;
  MR_Word OtherExt_86;
  MR_String OutputFileName0_87;
  MR_Word Var_90;
  MR_String _ExtStr_85;
  MR_Word Var_54;
  MR_Word Var_55;
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
  MR_Word Var_75;

  parse_tree__file_kind__int_file_kind_to_extension_3_p_0((MR_Integer) 1, &_ExtStr_85, &OtherExt_86);
  {
    Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (OtherExt_86));
  }
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_module_interface_files.construct_int_file_name\'/8", (MR_Integer) 0, Var_90, ModuleName_18, &OutputFileName0_87);
  OutputFileName_19 = mercury__string__f_43_43_2_f_0(OutputFileName0_87, ExtraSuffix_14);
  TmpOutputFileName_20 = mercury__string__f_43_43_2_f_0(OutputFileName_19, (MR_String) ".tmp");
  parse_tree__write_module_interface_files__disable_all_line_numbers_2_p_0(Globals_12, &NoLineNumGlobals_21);
  parse_tree__write_module_interface_files__maybe_read_old_int1_and_compare_for_smart_recomp_6_p_0(NoLineNumGlobals_21, ParseTreeInt1_13, MaybeTimestamp_15, &MaybeVersionNumbers_22);
  Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_13, (MR_Integer) 0))));
  Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_13, (MR_Integer) 1))));
  Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_13, (MR_Integer) 3))));
  Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_13, (MR_Integer) 4))));
  Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_13, (MR_Integer) 5))));
  Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_13, (MR_Integer) 6))));
  Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_13, (MR_Integer) 7))));
  Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_13, (MR_Integer) 8))));
  Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_13, (MR_Integer) 9))));
  Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_13, (MR_Integer) 10))));
  Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_13, (MR_Integer) 11))));
  Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_13, (MR_Integer) 12))));
  Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_13, (MR_Integer) 13))));
  Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_13, (MR_Integer) 14))));
  Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_13, (MR_Integer) 15))));
  Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_13, (MR_Integer) 16))));
  Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_13, (MR_Integer) 17))));
  Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_13, (MR_Integer) 18))));
  Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_13, (MR_Integer) 19))));
  Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_13, (MR_Integer) 20))));
  Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_13, (MR_Integer) 21))));
  {
    ParseTreeInt1V_23 = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ParseTreeInt1V_23, 0) = ((MR_Box) (Var_54));
    MR_hl_field(MR_mktag(0), ParseTreeInt1V_23, 1) = ((MR_Box) (Var_55));
    MR_hl_field(MR_mktag(0), ParseTreeInt1V_23, 2) = ((MR_Box) (MaybeVersionNumbers_22));
    MR_hl_field(MR_mktag(0), ParseTreeInt1V_23, 3) = ((MR_Box) (Var_57));
    MR_hl_field(MR_mktag(0), ParseTreeInt1V_23, 4) = ((MR_Box) (Var_58));
    MR_hl_field(MR_mktag(0), ParseTreeInt1V_23, 5) = ((MR_Box) (Var_59));
    MR_hl_field(MR_mktag(0), ParseTreeInt1V_23, 6) = ((MR_Box) (Var_60));
    MR_hl_field(MR_mktag(0), ParseTreeInt1V_23, 7) = ((MR_Box) (Var_61));
    MR_hl_field(MR_mktag(0), ParseTreeInt1V_23, 8) = ((MR_Box) (Var_62));
    MR_hl_field(MR_mktag(0), ParseTreeInt1V_23, 9) = ((MR_Box) (Var_63));
    MR_hl_field(MR_mktag(0), ParseTreeInt1V_23, 10) = ((MR_Box) (Var_64));
    MR_hl_field(MR_mktag(0), ParseTreeInt1V_23, 11) = ((MR_Box) (Var_65));
    MR_hl_field(MR_mktag(0), ParseTreeInt1V_23, 12) = ((MR_Box) (Var_66));
    MR_hl_field(MR_mktag(0), ParseTreeInt1V_23, 13) = ((MR_Box) (Var_67));
    MR_hl_field(MR_mktag(0), ParseTreeInt1V_23, 14) = ((MR_Box) (Var_68));
    MR_hl_field(MR_mktag(0), ParseTreeInt1V_23, 15) = ((MR_Box) (Var_69));
    MR_hl_field(MR_mktag(0), ParseTreeInt1V_23, 16) = ((MR_Box) (Var_70));
    MR_hl_field(MR_mktag(0), ParseTreeInt1V_23, 17) = ((MR_Box) (Var_71));
    MR_hl_field(MR_mktag(0), ParseTreeInt1V_23, 18) = ((MR_Box) (Var_72));
    MR_hl_field(MR_mktag(0), ParseTreeInt1V_23, 19) = ((MR_Box) (Var_73));
    MR_hl_field(MR_mktag(0), ParseTreeInt1V_23, 20) = ((MR_Box) (Var_74));
    MR_hl_field(MR_mktag(0), ParseTreeInt1V_23, 21) = ((MR_Box) (Var_75));
  }
  parse_tree__parse_tree_out__output_parse_tree_int1_8_p_0(ProgressStream_10, ErrorStream_11, NoLineNumGlobals_21, TmpOutputFileName_20, ParseTreeInt1V_23, &OutputSucceeded_24);
  parse_tree__module_cmds__update_interface_report_any_error_6_p_0(Globals_12, ModuleName_18, OutputFileName_19, &UpdateSucceeded_25);
  *Succeeded_16 = libs__maybe_succeeded__and_2_f_0(OutputSucceeded_24, UpdateSucceeded_25);
}

static void MR_CALL 
parse_tree__write_module_interface_files__maybe_read_old_int1_and_compare_for_smart_recomp_6_p_0(
  MR_Word NoLineNumGlobals_7,
  MR_Word ParseTreeInt1_8,
  MR_Word MaybeTimestamp_9,
  MR_Word * MaybeVersionNumbers_10)
{
  MR_bool succeeded;
  MR_Word GenerateVersionNumbers_58;
  MR_Word DisableVersionNumbers_59;

  libs__globals__lookup_bool_option_3_p_0(NoLineNumGlobals_7, (MR_Integer) 150, &GenerateVersionNumbers_58);
  libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(&DisableVersionNumbers_59);
  succeeded = (GenerateVersionNumbers_58 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DisableVersionNumbers_59 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_8, (MR_Integer) 0))));
    MR_Word Timestamp_14;
    MR_Word OldParseTreeInt1_17;
    MR_Word OldErrors_19;
    MR_Word MaybeOldParseTreeInt1_20;
    MR_Word VersionNumbers_21;
    MR_Word Var_25;
    MR_String _OldIntFileName_15;
    MR_Word _OldTimestamp_16;
    MR_Word _OldSpecs_18;

    if ((MaybeTimestamp_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_module_interface_files.insist_on_timestamp\'/2", (MR_String) "timestamp not read with \140--smart-recompilation\'");
        return;
      }
    else
      Timestamp_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestamp_9, (MR_Integer) 0))));
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_25, 0) = ((MR_Box) (ModuleName_13));
    }
    parse_tree__read_modules__read_module_int1_13_p_0(NoLineNumGlobals_7, Var_25, (MR_Integer) 0, (MR_Integer) 0, ModuleName_13, &_OldIntFileName_15, (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[2]), &_OldTimestamp_16, &OldParseTreeInt1_17, &_OldSpecs_18, &OldErrors_19);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), OldErrors_19);
    if (succeeded)
      {
        MaybeOldParseTreeInt1_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeOldParseTreeInt1_20, 0) = ((MR_Box) (OldParseTreeInt1_17));
      }
    else
      MaybeOldParseTreeInt1_20 = (MR_Word) ((MR_Unsigned) 0U);
    recompilation__version__compute_version_numbers_int1_4_p_0(MaybeOldParseTreeInt1_20, Timestamp_14, ParseTreeInt1_8, &VersionNumbers_21);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeVersionNumbers_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VersionNumbers_21));
    }
  }
  else
    *MaybeVersionNumbers_10 = (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
parse_tree__write_module_interface_files__disable_all_line_numbers_2_p_0(
  MR_Word Globals_3,
  MR_Word * NoLineNumGlobals_4)
{
  MR_Word NoLineNumGlobals0_5;

  libs__globals__set_option_4_p_0((MR_Integer) 170, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[1])), Globals_3, &NoLineNumGlobals0_5);
  libs__globals__set_option_4_p_0((MR_Integer) 171, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[1])), NoLineNumGlobals0_5, NoLineNumGlobals_4);
}

void MR_CALL 
parse_tree__write_module_interface_files__write_private_interface_file_int0_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word ErrorStream_14,
  MR_Word Globals_15,
  MR_String SourceFileName_16,
  MR_Word SourceFileModuleName_17,
  MR_Word MaybeTimestamp_18,
  MR_Word ParseTreeModuleSrc0_19,
  MR_Word * Succeeded_20,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_40,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_41)
{
  MR_bool succeeded;
  MR_Word ModuleName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc0_19, (MR_Integer) 0))));
  MR_Word Baggage_24;
  MR_Word AugMakeIntUnit1_25;
  MR_Word GetSpecs_26;
  MR_Word GetErrors_27;
  MR_Word GetSpecsEffectivelyErrors_28;
  MR_Word TypeCtorInfo_128_128;

  parse_tree__grab_modules__grab_unqual_imported_modules_make_int_10_p_0(Globals_15, SourceFileName_16, SourceFileModuleName_17, ParseTreeModuleSrc0_19, &Baggage_24, &AugMakeIntUnit1_25, STATE_VARIABLE_HaveReadModuleMaps_0_40, STATE_VARIABLE_HaveReadModuleMaps_41);
  GetSpecs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage_24, (MR_Integer) 6))));
  GetErrors_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage_24, (MR_Integer) 7))));
  GetSpecsEffectivelyErrors_28 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_15, GetSpecs_26);
  succeeded = (GetSpecsEffectivelyErrors_28 == (MR_Integer) 0);
  if (succeeded)
  {
    TypeCtorInfo_128_128 = (MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0);
    succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_128_128, GetErrors_27);
  }
  if (succeeded)
  {
    MR_Word AugMakeIntUnit_29;
    MR_Word QualSpecs_30;
    MR_Word EffectiveGetQualSpecs_31;
    MR_Word Var_47;

    parse_tree__module_qual__module_qualify_aug_make_int_unit_5_p_0(Globals_15, AugMakeIntUnit1_25, &AugMakeIntUnit_29, (MR_Word) ((MR_Unsigned) 0U), &QualSpecs_30);
    Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), GetSpecs_26, QualSpecs_30);
    parse_tree__error_util__filter_interface_generation_specs_5_p_0(Globals_15, Var_47, &EffectiveGetQualSpecs_31);
    if ((EffectiveGetQualSpecs_31 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ParseTreeInt0_32;
      MR_Word GenerateSpecs_33;
      MR_Word Specs_34;
      MR_Word OutputSucceeded_35;
      MR_Word TouchSucceeded_36;
      MR_Word Var_57;

      parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0(AugMakeIntUnit_29, &ParseTreeInt0_32, (MR_Word) ((MR_Unsigned) 0U), &GenerateSpecs_33);
      Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), EffectiveGetQualSpecs_31, GenerateSpecs_33);
      parse_tree__error_util__filter_interface_generation_specs_5_p_0(Globals_15, Var_57, &Specs_34);
      parse_tree__error_util__write_error_specs_5_p_0(ErrorStream_14, Globals_15, Specs_34);
      parse_tree__write_module_interface_files__actually_write_interface_file0_9_p_0(ProgressStream_13, ErrorStream_14, Globals_15, ParseTreeInt0_32, (MR_String) "", MaybeTimestamp_18, &OutputSucceeded_35);
      parse_tree__module_cmds__touch_interface_datestamp_8_p_0(Globals_15, ProgressStream_13, ErrorStream_14, ModuleName_23, (MR_Word) (((MR_Box) ((MR_String) ".date0"))), &TouchSucceeded_36);
      *Succeeded_20 = libs__maybe_succeeded__and_2_f_0(OutputSucceeded_35, TouchSucceeded_36);
    }
    else
    {
      parse_tree__write_module_interface_files__report_file_not_written_10_p_0(ErrorStream_14, Globals_15, EffectiveGetQualSpecs_31, (MR_Word) ((MR_Unsigned) 0U), ModuleName_23, (MR_Word) (((MR_Box) ((MR_String) ".int0"))), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (((MR_Box) ((MR_String) ".date0"))));
      *Succeeded_20 = (MR_Integer) 0;
    }
  }
  else
  {
    parse_tree__write_module_interface_files__report_file_not_written_10_p_0(ErrorStream_14, Globals_15, GetSpecs_26, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_1[3])), ModuleName_23, (MR_Word) (((MR_Box) ((MR_String) ".int0"))), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (((MR_Box) ((MR_String) ".date0"))));
    *Succeeded_20 = (MR_Integer) 0;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__actually_write_interface_file0_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word Globals_12,
  MR_Word ParseTreeInt0_13,
  MR_String ExtraSuffix_14,
  MR_Word MaybeTimestamp_15,
  MR_Word * Succeeded_16)
{
  MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 0))));
  MR_String OutputFileName_19;
  MR_String TmpOutputFileName_20;
  MR_Word NoLineNumGlobals_21;
  MR_Word MaybeVersionNumbers_22;
  MR_Word ParseTreeInt0V_23;
  MR_Word OutputSucceeded_24;
  MR_Word UpdateSucceeded_25;
  MR_Word NoLineNumGlobals0_90;
  MR_Word Var_60;
  MR_Word Var_61;
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

  parse_tree__write_module_interface_files__construct_int_file_name_8_p_0(Globals_12, ModuleName_18, (MR_Integer) 0, ExtraSuffix_14, &OutputFileName_19, &TmpOutputFileName_20);
  libs__globals__set_option_4_p_0((MR_Integer) 170, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[1])), Globals_12, &NoLineNumGlobals0_90);
  libs__globals__set_option_4_p_0((MR_Integer) 171, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[1])), NoLineNumGlobals0_90, &NoLineNumGlobals_21);
  parse_tree__write_module_interface_files__maybe_read_old_int0_and_compare_for_smart_recomp_6_p_0(NoLineNumGlobals_21, ParseTreeInt0_13, MaybeTimestamp_15, &MaybeVersionNumbers_22);
  Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 0))));
  Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 1))));
  Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 3))));
  Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 4))));
  Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 5))));
  Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 6))));
  Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 7))));
  Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 8))));
  Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 9))));
  Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 10))));
  Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 11))));
  Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 12))));
  Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 13))));
  Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 14))));
  Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 15))));
  Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 16))));
  Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 17))));
  Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 18))));
  Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 19))));
  Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 20))));
  Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 21))));
  Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 22))));
  Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 23))));
  Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 24))));
  Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 25))));
  Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 26))));
  Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_13, (MR_Integer) 27))));
  {
    ParseTreeInt0V_23 = (MR_Word) MR_new_object(MR_Word, (28 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 0) = ((MR_Box) (Var_60));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 1) = ((MR_Box) (Var_61));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 2) = ((MR_Box) (MaybeVersionNumbers_22));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 3) = ((MR_Box) (Var_63));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 4) = ((MR_Box) (Var_64));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 5) = ((MR_Box) (Var_65));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 6) = ((MR_Box) (Var_66));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 7) = ((MR_Box) (Var_67));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 8) = ((MR_Box) (Var_68));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 9) = ((MR_Box) (Var_69));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 10) = ((MR_Box) (Var_70));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 11) = ((MR_Box) (Var_71));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 12) = ((MR_Box) (Var_72));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 13) = ((MR_Box) (Var_73));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 14) = ((MR_Box) (Var_74));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 15) = ((MR_Box) (Var_75));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 16) = ((MR_Box) (Var_76));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 17) = ((MR_Box) (Var_77));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 18) = ((MR_Box) (Var_78));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 19) = ((MR_Box) (Var_79));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 20) = ((MR_Box) (Var_80));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 21) = ((MR_Box) (Var_81));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 22) = ((MR_Box) (Var_82));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 23) = ((MR_Box) (Var_83));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 24) = ((MR_Box) (Var_84));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 25) = ((MR_Box) (Var_85));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 26) = ((MR_Box) (Var_86));
    MR_hl_field(MR_mktag(0), ParseTreeInt0V_23, 27) = ((MR_Box) (Var_87));
  }
  parse_tree__parse_tree_out__output_parse_tree_int0_8_p_0(ProgressStream_10, ErrorStream_11, NoLineNumGlobals_21, TmpOutputFileName_20, ParseTreeInt0V_23, &OutputSucceeded_24);
  parse_tree__module_cmds__update_interface_report_any_error_6_p_0(Globals_12, ModuleName_18, OutputFileName_19, &UpdateSucceeded_25);
  *Succeeded_16 = libs__maybe_succeeded__and_2_f_0(OutputSucceeded_24, UpdateSucceeded_25);
}

static void MR_CALL 
parse_tree__write_module_interface_files__maybe_read_old_int0_and_compare_for_smart_recomp_6_p_0(
  MR_Word NoLineNumGlobals_7,
  MR_Word ParseTreeInt0_8,
  MR_Word MaybeTimestamp_9,
  MR_Word * MaybeVersionNumbers_10)
{
  MR_bool succeeded;
  MR_Word GenerateVersionNumbers_64;
  MR_Word DisableVersionNumbers_65;

  libs__globals__lookup_bool_option_3_p_0(NoLineNumGlobals_7, (MR_Integer) 150, &GenerateVersionNumbers_64);
  libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(&DisableVersionNumbers_65);
  succeeded = (GenerateVersionNumbers_64 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DisableVersionNumbers_65 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_8, (MR_Integer) 0))));
    MR_Word Timestamp_14;
    MR_Word OldParseTreeInt0_17;
    MR_Word OldErrors_19;
    MR_Word MaybeOldParseTreeInt0_20;
    MR_Word VersionNumbers_21;
    MR_Word Var_25;
    MR_String _OldIntFileName_15;
    MR_Word _OldTimestamp_16;
    MR_Word _OldSpecs_18;

    if ((MaybeTimestamp_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_module_interface_files.insist_on_timestamp\'/2", (MR_String) "timestamp not read with \140--smart-recompilation\'");
        return;
      }
    else
      Timestamp_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestamp_9, (MR_Integer) 0))));
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_25, 0) = ((MR_Box) (ModuleName_13));
    }
    parse_tree__read_modules__read_module_int0_13_p_0(NoLineNumGlobals_7, Var_25, (MR_Integer) 0, (MR_Integer) 0, ModuleName_13, &_OldIntFileName_15, (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[2]), &_OldTimestamp_16, &OldParseTreeInt0_17, &_OldSpecs_18, &OldErrors_19);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), OldErrors_19);
    if (succeeded)
      {
        MaybeOldParseTreeInt0_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeOldParseTreeInt0_20, 0) = ((MR_Box) (OldParseTreeInt0_17));
      }
    else
      MaybeOldParseTreeInt0_20 = (MR_Word) ((MR_Unsigned) 0U);
    recompilation__version__compute_version_numbers_int0_4_p_0(MaybeOldParseTreeInt0_20, Timestamp_14, ParseTreeInt0_8, &VersionNumbers_21);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeVersionNumbers_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VersionNumbers_21));
    }
  }
  else
    *MaybeVersionNumbers_10 = (MR_Word) ((MR_Unsigned) 0U);
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
  MR_Word OtherExt_17;
  MR_String OutputFileName0_18;
  MR_Word Var_23;
  MR_String _ExtStr_16;

  parse_tree__file_kind__int_file_kind_to_extension_3_p_0(IntFileKind_11, &_ExtStr_16, &OtherExt_17);
  {
    Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (OtherExt_17));
  }
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_module_interface_files.construct_int_file_name\'/8", (MR_Integer) 0, Var_23, ModuleName_10, &OutputFileName0_18);
  *OutputFileName_13 = mercury__string__f_43_43_2_f_0(OutputFileName0_18, ExtraSuffix_12);
  *TmpOutputFileName_14 = mercury__string__f_43_43_2_f_0(*OutputFileName_13, (MR_String) ".tmp");
}

void MR_CALL 
parse_tree__write_module_interface_files__write_short_interface_file_int3_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word ErrorStream_9,
  MR_Word Globals_10,
  MR_Word ParseTreeModuleSrc_11,
  MR_Word * Succeeded_12)
{
  MR_Word ParseTreeInt3_14;
  MR_Word Specs0_15;
  MR_Word Specs_16;
  MR_Word EffectivelyErrors_17;
  MR_Word ModuleName_18;

  parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0(Globals_10, ParseTreeModuleSrc_11, &ParseTreeInt3_14, (MR_Word) ((MR_Unsigned) 0U), &Specs0_15);
  parse_tree__error_util__filter_interface_generation_specs_5_p_0(Globals_10, Specs0_15, &Specs_16);
  EffectivelyErrors_17 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_10, Specs_16);
  ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_11, (MR_Integer) 0))));
  switch (EffectivelyErrors_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word OutputSucceeded_19;
        MR_Word TouchSucceeded_20;

        parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_51_95_95_91_54_93_95_48_9_p_0(ProgressStream_8, ErrorStream_9, Globals_10, ParseTreeInt3_14, (MR_String) "", &OutputSucceeded_19);
        parse_tree__module_cmds__touch_interface_datestamp_8_p_0(Globals_10, ProgressStream_8, ErrorStream_9, ModuleName_18, (MR_Word) (((MR_Box) ((MR_String) ".date3"))), &TouchSucceeded_20);
        *Succeeded_12 = libs__maybe_succeeded__and_2_f_0(OutputSucceeded_19, TouchSucceeded_20);
      }
      break;
    case (MR_Integer) 1:
      {
        parse_tree__write_module_interface_files__report_file_not_written_10_p_0(ErrorStream_9, Globals_10, Specs_16, (MR_Word) ((MR_Unsigned) 0U), ModuleName_18, (MR_Word) (((MR_Box) ((MR_String) ".int3"))), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (((MR_Box) ((MR_String) ".date3"))));
        *Succeeded_12 = (MR_Integer) 0;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_51_95_95_91_54_93_95_48_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word Globals_12,
  MR_Word ParseTreeInt3_13,
  MR_String ExtraSuffix_14,
  MR_Word * Succeeded_16)
{
  MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_13, (MR_Integer) 0))));
  MR_String OutputFileName_19;
  MR_String TmpOutputFileName_20;
  MR_Word NoLineNumGlobals_21;
  MR_Word OutputSucceeded_22;
  MR_Word UpdateSucceeded_23;
  MR_Word OtherExt_51;
  MR_String OutputFileName0_52;
  MR_Word Var_55;
  MR_Word NoLineNumGlobals0_60;
  MR_String _ExtStr_50;

  parse_tree__file_kind__int_file_kind_to_extension_3_p_0((MR_Integer) 3, &_ExtStr_50, &OtherExt_51);
  {
    Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (OtherExt_51));
  }
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_module_interface_files.construct_int_file_name\'/8", (MR_Integer) 0, Var_55, ModuleName_18, &OutputFileName0_52);
  OutputFileName_19 = mercury__string__f_43_43_2_f_0(OutputFileName0_52, ExtraSuffix_14);
  TmpOutputFileName_20 = mercury__string__f_43_43_2_f_0(OutputFileName_19, (MR_String) ".tmp");
  libs__globals__set_option_4_p_0((MR_Integer) 170, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[1])), Globals_12, &NoLineNumGlobals0_60);
  libs__globals__set_option_4_p_0((MR_Integer) 171, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_2[1])), NoLineNumGlobals0_60, &NoLineNumGlobals_21);
  parse_tree__parse_tree_out__output_parse_tree_int3_8_p_0(ProgressStream_10, ErrorStream_11, NoLineNumGlobals_21, TmpOutputFileName_20, ParseTreeInt3_13, &OutputSucceeded_22);
  parse_tree__module_cmds__update_interface_report_any_error_6_p_0(Globals_12, ModuleName_18, OutputFileName_19, &UpdateSucceeded_23);
  *Succeeded_16 = libs__maybe_succeeded__and_2_f_0(OutputSucceeded_22, UpdateSucceeded_23);
}

static void MR_CALL 
parse_tree__write_module_interface_files__report_file_not_written_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  mercury__io__file__remove_file_4_p_0(((MR_String) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
parse_tree__write_module_interface_files__report_file_not_written_10_p_0(
  MR_Word ErrorStream_11,
  MR_Word Globals_12,
  MR_Word Specs_13,
  MR_Word PrefixPieces_14,
  MR_Word ModuleName_15,
  MR_Word OtherExtA_16,
  MR_Word MaybeOtherExtB_17,
  MR_Word OtherExtDate_18)
{
  MR_String IntAFileName_20;
  MR_String DateFileName_21;
  MR_Word NotWrittenPieces_22;
  MR_Word ToRemoveFileNames_23;
  MR_Word NotWrittenSpec_26;
  MR_Word Var_32;
  MR_Word Var_36;
  MR_Word Var_69;
  MR_Word _RemoveResults_27;
  MR_Box conv1_STATE_VARIABLE_IO_29;

  {
    Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (OtherExtA_16));
  }
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_module_interface_files.report_file_not_written\'/10", (MR_Integer) 1, Var_32, ModuleName_15, &IntAFileName_20);
  {
    Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (OtherExtDate_18));
  }
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_module_interface_files.report_file_not_written\'/10", (MR_Integer) 1, Var_36, ModuleName_15, &DateFileName_21);
  if ((MaybeOtherExtB_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_57;
    MR_Word Var_64;

    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (IntAFileName_20));
    }
    {
      NotWrittenPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), NotWrittenPieces_22, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(1), NotWrittenPieces_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_1[8])));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (DateFileName_21));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ToRemoveFileNames_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ToRemoveFileNames_23, 0) = ((MR_Box) (IntAFileName_20));
      MR_hl_field(MR_mktag(1), ToRemoveFileNames_23, 1) = ((MR_Box) (Var_64));
    }
  }
  else
  {
    MR_Word OtherExtB_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOtherExtB_17, (MR_Integer) 0))));
    MR_String IntBFileName_25;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_54;
    MR_Word Var_55;

    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (OtherExtB_24));
    }
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_module_interface_files.report_file_not_written\'/10", (MR_Integer) 1, Var_40, ModuleName_15, &IntBFileName_25);
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (IntAFileName_20));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (IntBFileName_25));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_module_interface_files_scalar_common_1[8])));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__write_module_interface_files_scalar_common_1[9])));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
    }
    {
      NotWrittenPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), NotWrittenPieces_22, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), NotWrittenPieces_22, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (DateFileName_21));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (IntBFileName_25));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      ToRemoveFileNames_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ToRemoveFileNames_23, 0) = ((MR_Box) (IntAFileName_20));
      MR_hl_field(MR_mktag(1), ToRemoveFileNames_23, 1) = ((MR_Box) (Var_54));
    }
  }
  Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PrefixPieces_14, NotWrittenPieces_22);
  {
    NotWrittenSpec_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), NotWrittenSpec_26, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_module_interface_files.report_file_not_written\'/10"));
    MR_hl_field(MR_mktag(2), NotWrittenSpec_26, 1) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(MR_mktag(2), NotWrittenSpec_26, 2) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(MR_mktag(2), NotWrittenSpec_26, 3) = ((MR_Box) (Var_69));
  }
  parse_tree__error_util__write_error_specs_5_p_0(ErrorStream_11, Globals_12, Specs_13);
  parse_tree__error_util__write_error_spec_5_p_0(ErrorStream_11, Globals_12, NotWrittenSpec_26);
  mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_res_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_4[0]), ToRemoveFileNames_23, &_RemoveResults_27, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_29);
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_generate_version_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_module_interface_files____Unify____maybe_generate_version_numbers_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_generate_version_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_module_interface_files____Compare____maybe_generate_version_numbers_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__write_module_interface_files__init(void)
{
}

void mercury__parse_tree__write_module_interface_files__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_maybe_generate_version_numbers_0);
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
