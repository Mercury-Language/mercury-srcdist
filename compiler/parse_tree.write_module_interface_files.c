/*
** Automatically generated from `write_module_interface_files.m'
** by the Mercury compiler,
** version rotd-2023-06-08
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
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.comp_unit_interface.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.write_error_spec.mih"
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
  MR_Word HeadVar__1_1,
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
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_51_95_95_91_54_93_95_48_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word Globals_12,
  MR_Word ParseTreeInt3_13,
  MR_String ExtraSuffix_14,
  MR_Word * Succeeded_16);

static void MR_CALL 
parse_tree__write_module_interface_files__report_file_not_written_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__write_module_interface_files__report_file_not_written_12_p_0(
  MR_Word ErrorStream_13,
  MR_Word Globals_14,
  MR_Word Specs_15,
  MR_Word PrefixPieces_16,
  MR_Word ModuleName_17,
  MR_Word OtherExtA_18,
  MR_Word NewExtA_19,
  MR_Word MaybeOtherNewExtB_20,
  MR_Word OtherExtDate_21,
  MR_Word NewExtDate_22);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_generate_version_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_generate_version_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_1[18][2];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_2[3][1];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_3[1][7];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_4[1][3];




static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_1[18][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 6U)
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error reading interface files."))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  11 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".int2")))),
    ((MR_Box) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_1[10])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error reading .int3 files."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[5])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not written."))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_2[3][1] = {
  /* row   0 */
  { ((MR_Box) (&parse_tree__write_module_interface_files_scalar_common_1[11])) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 1U) },
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
    ((MR_Box) (parse_tree__write_module_interface_files__report_file_not_written_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

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
  MR_Word ModuleName_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_19, (MR_Integer) 0))));
  MR_Word IntParseTreeModuleSrc_24;
  MR_Word Baggage_25;
  MR_Word AugMakeIntUnit1_26;
  MR_Word GetErrors_27;
  MR_Word GetSpecs_28;
  MR_Word GetSpecsEffectivelyErrors_29;

  parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0(ParseTreeModuleSrc0_19, &IntParseTreeModuleSrc_24);
  parse_tree__grab_modules__grab_unqual_imported_modules_make_int_11_p_0(ProgressStream_13, Globals_15, SourceFileName_16, SourceFileModuleName_17, IntParseTreeModuleSrc_24, &Baggage_25, &AugMakeIntUnit1_26, STATE_VARIABLE_HaveReadModuleMaps_0_43, STATE_VARIABLE_HaveReadModuleMaps_44);
  GetErrors_27 = ((MR_Word) ((MR_hl_field(0, Baggage_25, (MR_Integer) 6))));
  GetSpecs_28 = parse_tree__parse_error__get_read_module_specs_1_f_0(GetErrors_27);
  GetSpecsEffectivelyErrors_29 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_15, GetSpecs_28);
  succeeded = (GetSpecsEffectivelyErrors_29 == (MR_Integer) 0);
  if (succeeded)
    succeeded = parse_tree__parse_error__there_are_no_errors_1_p_0(GetErrors_27);
  if (succeeded)
  {
    MR_Word AugMakeIntUnit_30;
    MR_Word QualSpecs_31;
    MR_Word EffectiveGetQualSpecs_32;
    MR_Word Var_50;

    parse_tree__module_qual__module_qualify_aug_make_int_unit_5_p_0(Globals_15, AugMakeIntUnit1_26, &AugMakeIntUnit_30, (MR_Word) ((MR_Unsigned) 0U), &QualSpecs_31);
    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), GetSpecs_28, QualSpecs_31);
    parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_15, Var_50, &EffectiveGetQualSpecs_32);
    if ((EffectiveGetQualSpecs_32 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ParseTreeInt1_33;
      MR_Word ParseTreeInt2_34;
      MR_Word GenerateSpecs_35;
      MR_Word Specs_36;
      MR_Word OutputSucceeded1_37;
      MR_Word OutputSucceeded2_38;
      MR_Word TouchSucceeded_39;
      MR_Word Var_52;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;

      parse_tree__comp_unit_interface__generate_interfaces_int1_int2_6_p_0(Globals_15, AugMakeIntUnit_30, &ParseTreeInt1_33, &ParseTreeInt2_34, (MR_Word) ((MR_Unsigned) 0U), &GenerateSpecs_35);
      Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), EffectiveGetQualSpecs_32, GenerateSpecs_35);
      parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_15, Var_52, &Specs_36);
      parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_14, Globals_15, Specs_36);
      parse_tree__write_module_interface_files__actually_write_interface_file1_9_p_0(ProgressStream_13, ErrorStream_14, Globals_15, ParseTreeInt1_33, (MR_String) "", MaybeTimestamp_18, &OutputSucceeded1_37);
      parse_tree__write_module_interface_files__actually_write_interface_file2_9_p_0(ProgressStream_13, ErrorStream_14, Globals_15, ParseTreeInt2_34, (MR_String) "", MaybeTimestamp_18, &OutputSucceeded2_38);
      parse_tree__module_cmds__touch_interface_datestamp_9_p_0(Globals_15, ProgressStream_13, ErrorStream_14, ModuleName_23, (MR_Word) (((MR_Box) ((MR_String) ".date"))), (MR_Word) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_1[8])), &TouchSucceeded_39);
      {
        Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_65, 0) = ((MR_Box) (TouchSucceeded_39));
        MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_64, 0) = ((MR_Box) (OutputSucceeded2_38));
        MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_65));
      }
      {
        Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_63, 0) = ((MR_Box) (OutputSucceeded1_37));
        MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_64));
      }
      *Succeeded_20 = libs__maybe_util__and_list_1_f_0(Var_63);
    }
    else
    {
      parse_tree__write_module_interface_files__report_file_not_written_12_p_0(ErrorStream_14, Globals_15, EffectiveGetQualSpecs_32, (MR_Word) ((MR_Unsigned) 0U), ModuleName_23, (MR_Word) (((MR_Box) ((MR_String) ".int"))), (MR_Word) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_1[9])), (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[0])), (MR_Word) (((MR_Box) ((MR_String) ".date"))), (MR_Word) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_1[8])));
      *Succeeded_20 = (MR_Integer) 0;
    }
  }
  else
  {
    parse_tree__write_module_interface_files__report_file_not_written_12_p_0(ErrorStream_14, Globals_15, GetSpecs_28, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[13])), ModuleName_23, (MR_Word) (((MR_Box) ((MR_String) ".int"))), (MR_Word) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_1[9])), (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[0])), (MR_Word) (((MR_Box) ((MR_String) ".date"))), (MR_Word) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_1[8])));
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
  MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_13, (MR_Integer) 0))));
  MR_String OutputFileName_19;
  MR_String TmpOutputFileName_20;
  MR_Word NoLineNumGlobals_21;
  MR_Word MaybeVersionNumbers_22;
  MR_Word ParseTreeInt2V_23;
  MR_Word OutputSucceeded_24;
  MR_Word UpdateSucceeded_25;
  MR_Word OtherExt_58;
  MR_Word NewExt_59;
  MR_String OutputFileName0_60;
  MR_Word Var_63;
  MR_Word NoLineNumGlobals0_65;
  MR_String _ExtStr_57;
  MR_Word Var_44;
  MR_Word Var_45;
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

  parse_tree__file_kind__int_file_kind_to_extension_4_p_0((MR_Integer) 2, &_ExtStr_57, &OtherExt_58, &NewExt_59);
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (OtherExt_58));
  }
  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_module_interface_files.construct_int_file_name\'/8", (MR_Integer) 0, Var_63, NewExt_59, ModuleName_18, &OutputFileName0_60);
  OutputFileName_19 = mercury__string__f_43_43_2_f_0(OutputFileName0_60, ExtraSuffix_14);
  TmpOutputFileName_20 = mercury__string__f_43_43_2_f_0(OutputFileName_19, (MR_String) ".tmp");
  libs__globals__set_option_4_p_0((MR_Integer) 173, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[1])), Globals_12, &NoLineNumGlobals0_65);
  libs__globals__set_option_4_p_0((MR_Integer) 174, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[1])), NoLineNumGlobals0_65, &NoLineNumGlobals_21);
  parse_tree__write_module_interface_files__maybe_read_old_int2_and_compare_for_smart_recomp_6_p_0(NoLineNumGlobals_21, ParseTreeInt2_13, MaybeTimestamp_15, &MaybeVersionNumbers_22);
  Var_44 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_13, (MR_Integer) 0))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_13, (MR_Integer) 1))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_13, (MR_Integer) 3))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_13, (MR_Integer) 4))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_13, (MR_Integer) 5))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_13, (MR_Integer) 6))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_13, (MR_Integer) 7))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_13, (MR_Integer) 8))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_13, (MR_Integer) 9))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_13, (MR_Integer) 10))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_13, (MR_Integer) 11))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_13, (MR_Integer) 12))));
  {
    ParseTreeInt2V_23 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ParseTreeInt2V_23, 0) = ((MR_Box) (Var_44));
    MR_hl_field(0, ParseTreeInt2V_23, 1) = ((MR_Box) (Var_45));
    MR_hl_field(0, ParseTreeInt2V_23, 2) = ((MR_Box) (MaybeVersionNumbers_22));
    MR_hl_field(0, ParseTreeInt2V_23, 3) = ((MR_Box) (Var_47));
    MR_hl_field(0, ParseTreeInt2V_23, 4) = ((MR_Box) (Var_48));
    MR_hl_field(0, ParseTreeInt2V_23, 5) = ((MR_Box) (Var_49));
    MR_hl_field(0, ParseTreeInt2V_23, 6) = ((MR_Box) (Var_50));
    MR_hl_field(0, ParseTreeInt2V_23, 7) = ((MR_Box) (Var_51));
    MR_hl_field(0, ParseTreeInt2V_23, 8) = ((MR_Box) (Var_52));
    MR_hl_field(0, ParseTreeInt2V_23, 9) = ((MR_Box) (Var_53));
    MR_hl_field(0, ParseTreeInt2V_23, 10) = ((MR_Box) (Var_54));
    MR_hl_field(0, ParseTreeInt2V_23, 11) = ((MR_Box) (Var_55));
    MR_hl_field(0, ParseTreeInt2V_23, 12) = ((MR_Box) (Var_56));
  }
  parse_tree__parse_tree_out__output_parse_tree_int2_8_p_0(ProgressStream_10, ErrorStream_11, NoLineNumGlobals_21, TmpOutputFileName_20, ParseTreeInt2V_23, &OutputSucceeded_24);
  parse_tree__module_cmds__update_interface_report_any_error_6_p_0(Globals_12, ModuleName_18, OutputFileName_19, &UpdateSucceeded_25);
  *Succeeded_16 = libs__maybe_util__and_2_f_0(OutputSucceeded_24, UpdateSucceeded_25);
}

static void MR_CALL 
parse_tree__write_module_interface_files__maybe_read_old_int2_and_compare_for_smart_recomp_6_p_0(
  MR_Word NoLineNumGlobals_7,
  MR_Word ParseTreeInt2_8,
  MR_Word MaybeTimestamp_9,
  MR_Word * MaybeVersionNumbers_10)
{
  MR_bool succeeded;
  MR_Word GenerateVersionNumbers_46;
  MR_Word DisableVersionNumbers_47;

  libs__globals__lookup_bool_option_3_p_0(NoLineNumGlobals_7, (MR_Integer) 153, &GenerateVersionNumbers_46);
  libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(&DisableVersionNumbers_47);
  succeeded = (GenerateVersionNumbers_46 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DisableVersionNumbers_47 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_8, (MR_Integer) 0))));
    MR_Word Timestamp_14;
    MR_Word HaveReadInt2_16;
    MR_Word MaybeOldParseTreeInt2_21;
    MR_Word VersionNumbers_24;
    MR_Word Var_28;

    if ((MaybeTimestamp_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_module_interface_files.insist_on_timestamp\'/2", (MR_String) "timestamp not read with \140--smart-recompilation\'");
        return;
      }
    else
      Timestamp_14 = ((MR_Word) ((MR_hl_field(1, MaybeTimestamp_9, (MR_Integer) 0))));
    {
      Var_28 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_28, 0) = ((MR_Box) (ModuleName_13));
    }
    parse_tree__read_modules__read_module_int2_10_p_0((MR_Word) ((MR_Unsigned) 0U), NoLineNumGlobals_7, Var_28, (MR_Integer) 0, (MR_Integer) 0, ModuleName_13, (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[2]), &HaveReadInt2_16);
    if (((MR_tag((MR_Word) HaveReadInt2_16)) == (MR_Integer) 1))
      MaybeOldParseTreeInt2_21 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word OldParseTreeInt2_19 = ((MR_Word) ((MR_hl_field(0, HaveReadInt2_16, (MR_Integer) 2))));
      MR_Word OldModuleErrors_20 = ((MR_Word) ((MR_hl_field(0, HaveReadInt2_16, (MR_Integer) 3))));

      succeeded = parse_tree__parse_error__there_are_no_errors_1_p_0(OldModuleErrors_20);
      if (succeeded)
        {
          MaybeOldParseTreeInt2_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeOldParseTreeInt2_21, 0) = ((MR_Box) (OldParseTreeInt2_19));
        }
      else
        MaybeOldParseTreeInt2_21 = (MR_Word) ((MR_Unsigned) 0U);
    }
    recompilation__version__compute_version_numbers_int2_4_p_0(MaybeOldParseTreeInt2_21, Timestamp_14, ParseTreeInt2_8, &VersionNumbers_24);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeVersionNumbers_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (VersionNumbers_24));
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
  MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_13, (MR_Integer) 0))));
  MR_String OutputFileName_19;
  MR_String TmpOutputFileName_20;
  MR_Word NoLineNumGlobals_21;
  MR_Word MaybeVersionNumbers_22;
  MR_Word ParseTreeInt1V_23;
  MR_Word OutputSucceeded_24;
  MR_Word UpdateSucceeded_25;
  MR_Word OtherExt_68;
  MR_Word NewExt_69;
  MR_String OutputFileName0_70;
  MR_Word Var_73;
  MR_Word NoLineNumGlobals0_75;
  MR_String _ExtStr_67;
  MR_Word Var_49;
  MR_Word Var_50;
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
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;

  parse_tree__file_kind__int_file_kind_to_extension_4_p_0((MR_Integer) 1, &_ExtStr_67, &OtherExt_68, &NewExt_69);
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (OtherExt_68));
  }
  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_module_interface_files.construct_int_file_name\'/8", (MR_Integer) 0, Var_73, NewExt_69, ModuleName_18, &OutputFileName0_70);
  OutputFileName_19 = mercury__string__f_43_43_2_f_0(OutputFileName0_70, ExtraSuffix_14);
  TmpOutputFileName_20 = mercury__string__f_43_43_2_f_0(OutputFileName_19, (MR_String) ".tmp");
  libs__globals__set_option_4_p_0((MR_Integer) 173, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[1])), Globals_12, &NoLineNumGlobals0_75);
  libs__globals__set_option_4_p_0((MR_Integer) 174, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[1])), NoLineNumGlobals0_75, &NoLineNumGlobals_21);
  parse_tree__write_module_interface_files__maybe_read_old_int1_and_compare_for_smart_recomp_6_p_0(NoLineNumGlobals_21, ParseTreeInt1_13, MaybeTimestamp_15, &MaybeVersionNumbers_22);
  Var_49 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_13, (MR_Integer) 0))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_13, (MR_Integer) 1))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_13, (MR_Integer) 3))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_13, (MR_Integer) 4))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_13, (MR_Integer) 5))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_13, (MR_Integer) 6))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_13, (MR_Integer) 7))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_13, (MR_Integer) 8))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_13, (MR_Integer) 9))));
  Var_59 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_13, (MR_Integer) 10))));
  Var_60 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_13, (MR_Integer) 11))));
  Var_61 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_13, (MR_Integer) 12))));
  Var_62 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_13, (MR_Integer) 13))));
  Var_63 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_13, (MR_Integer) 14))));
  Var_64 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_13, (MR_Integer) 15))));
  Var_65 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_13, (MR_Integer) 16))));
  Var_66 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_13, (MR_Integer) 17))));
  {
    ParseTreeInt1V_23 = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ParseTreeInt1V_23, 0) = ((MR_Box) (Var_49));
    MR_hl_field(0, ParseTreeInt1V_23, 1) = ((MR_Box) (Var_50));
    MR_hl_field(0, ParseTreeInt1V_23, 2) = ((MR_Box) (MaybeVersionNumbers_22));
    MR_hl_field(0, ParseTreeInt1V_23, 3) = ((MR_Box) (Var_52));
    MR_hl_field(0, ParseTreeInt1V_23, 4) = ((MR_Box) (Var_53));
    MR_hl_field(0, ParseTreeInt1V_23, 5) = ((MR_Box) (Var_54));
    MR_hl_field(0, ParseTreeInt1V_23, 6) = ((MR_Box) (Var_55));
    MR_hl_field(0, ParseTreeInt1V_23, 7) = ((MR_Box) (Var_56));
    MR_hl_field(0, ParseTreeInt1V_23, 8) = ((MR_Box) (Var_57));
    MR_hl_field(0, ParseTreeInt1V_23, 9) = ((MR_Box) (Var_58));
    MR_hl_field(0, ParseTreeInt1V_23, 10) = ((MR_Box) (Var_59));
    MR_hl_field(0, ParseTreeInt1V_23, 11) = ((MR_Box) (Var_60));
    MR_hl_field(0, ParseTreeInt1V_23, 12) = ((MR_Box) (Var_61));
    MR_hl_field(0, ParseTreeInt1V_23, 13) = ((MR_Box) (Var_62));
    MR_hl_field(0, ParseTreeInt1V_23, 14) = ((MR_Box) (Var_63));
    MR_hl_field(0, ParseTreeInt1V_23, 15) = ((MR_Box) (Var_64));
    MR_hl_field(0, ParseTreeInt1V_23, 16) = ((MR_Box) (Var_65));
    MR_hl_field(0, ParseTreeInt1V_23, 17) = ((MR_Box) (Var_66));
  }
  parse_tree__parse_tree_out__output_parse_tree_int1_8_p_0(ProgressStream_10, ErrorStream_11, NoLineNumGlobals_21, TmpOutputFileName_20, ParseTreeInt1V_23, &OutputSucceeded_24);
  parse_tree__module_cmds__update_interface_report_any_error_6_p_0(Globals_12, ModuleName_18, OutputFileName_19, &UpdateSucceeded_25);
  *Succeeded_16 = libs__maybe_util__and_2_f_0(OutputSucceeded_24, UpdateSucceeded_25);
}

static void MR_CALL 
parse_tree__write_module_interface_files__maybe_read_old_int1_and_compare_for_smart_recomp_6_p_0(
  MR_Word NoLineNumGlobals_7,
  MR_Word ParseTreeInt1_8,
  MR_Word MaybeTimestamp_9,
  MR_Word * MaybeVersionNumbers_10)
{
  MR_bool succeeded;
  MR_Word GenerateVersionNumbers_51;
  MR_Word DisableVersionNumbers_52;

  libs__globals__lookup_bool_option_3_p_0(NoLineNumGlobals_7, (MR_Integer) 153, &GenerateVersionNumbers_51);
  libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(&DisableVersionNumbers_52);
  succeeded = (GenerateVersionNumbers_51 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DisableVersionNumbers_52 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, (MR_Integer) 0))));
    MR_Word Timestamp_14;
    MR_Word HaveReadInt1_16;
    MR_Word MaybeOldParseTreeInt1_21;
    MR_Word VersionNumbers_24;
    MR_Word Var_28;

    if ((MaybeTimestamp_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_module_interface_files.insist_on_timestamp\'/2", (MR_String) "timestamp not read with \140--smart-recompilation\'");
        return;
      }
    else
      Timestamp_14 = ((MR_Word) ((MR_hl_field(1, MaybeTimestamp_9, (MR_Integer) 0))));
    {
      Var_28 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_28, 0) = ((MR_Box) (ModuleName_13));
    }
    parse_tree__read_modules__read_module_int1_10_p_0((MR_Word) ((MR_Unsigned) 0U), NoLineNumGlobals_7, Var_28, (MR_Integer) 0, (MR_Integer) 0, ModuleName_13, (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[2]), &HaveReadInt1_16);
    if (((MR_tag((MR_Word) HaveReadInt1_16)) == (MR_Integer) 1))
      MaybeOldParseTreeInt1_21 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word OldParseTreeInt1_19 = ((MR_Word) ((MR_hl_field(0, HaveReadInt1_16, (MR_Integer) 2))));
      MR_Word OldModuleErrors_20 = ((MR_Word) ((MR_hl_field(0, HaveReadInt1_16, (MR_Integer) 3))));

      succeeded = parse_tree__parse_error__there_are_no_errors_1_p_0(OldModuleErrors_20);
      if (succeeded)
        {
          MaybeOldParseTreeInt1_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeOldParseTreeInt1_21, 0) = ((MR_Box) (OldParseTreeInt1_19));
        }
      else
        MaybeOldParseTreeInt1_21 = (MR_Word) ((MR_Unsigned) 0U);
    }
    recompilation__version__compute_version_numbers_int1_4_p_0(MaybeOldParseTreeInt1_21, Timestamp_14, ParseTreeInt1_8, &VersionNumbers_24);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeVersionNumbers_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (VersionNumbers_24));
    }
  }
  else
    *MaybeVersionNumbers_10 = (MR_Word) ((MR_Unsigned) 0U);
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
  MR_Word ModuleName_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_19, (MR_Integer) 0))));
  MR_Word Baggage_24;
  MR_Word AugMakeIntUnit1_25;
  MR_Word GetErrors_26;
  MR_Word GetSpecs_27;
  MR_Word GetSpecsEffectivelyErrors_28;

  parse_tree__grab_modules__grab_unqual_imported_modules_make_int_11_p_0(ProgressStream_13, Globals_15, SourceFileName_16, SourceFileModuleName_17, ParseTreeModuleSrc0_19, &Baggage_24, &AugMakeIntUnit1_25, STATE_VARIABLE_HaveReadModuleMaps_0_40, STATE_VARIABLE_HaveReadModuleMaps_41);
  GetErrors_26 = ((MR_Word) ((MR_hl_field(0, Baggage_24, (MR_Integer) 6))));
  GetSpecs_27 = parse_tree__parse_error__get_read_module_specs_1_f_0(GetErrors_26);
  GetSpecsEffectivelyErrors_28 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_15, GetSpecs_27);
  succeeded = (GetSpecsEffectivelyErrors_28 == (MR_Integer) 0);
  if (succeeded)
    succeeded = parse_tree__parse_error__there_are_no_errors_1_p_0(GetErrors_26);
  if (succeeded)
  {
    MR_Word AugMakeIntUnit_29;
    MR_Word QualSpecs_30;
    MR_Word EffectiveGetQualSpecs_31;
    MR_Word Var_47;

    parse_tree__module_qual__module_qualify_aug_make_int_unit_5_p_0(Globals_15, AugMakeIntUnit1_25, &AugMakeIntUnit_29, (MR_Word) ((MR_Unsigned) 0U), &QualSpecs_30);
    Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), GetSpecs_27, QualSpecs_30);
    parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_15, Var_47, &EffectiveGetQualSpecs_31);
    if ((EffectiveGetQualSpecs_31 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ParseTreeInt0_32;
      MR_Word GenerateSpecs_33;
      MR_Word Specs_34;
      MR_Word OutputSucceeded_35;
      MR_Word TouchSucceeded_36;
      MR_Word Var_49;

      parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0(AugMakeIntUnit_29, &ParseTreeInt0_32, (MR_Word) ((MR_Unsigned) 0U), &GenerateSpecs_33);
      Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), EffectiveGetQualSpecs_31, GenerateSpecs_33);
      parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_15, Var_49, &Specs_34);
      parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_14, Globals_15, Specs_34);
      parse_tree__write_module_interface_files__actually_write_interface_file0_9_p_0(ProgressStream_13, ErrorStream_14, Globals_15, ParseTreeInt0_32, (MR_String) "", MaybeTimestamp_18, &OutputSucceeded_35);
      parse_tree__module_cmds__touch_interface_datestamp_9_p_0(Globals_15, ProgressStream_13, ErrorStream_14, ModuleName_23, (MR_Word) (((MR_Box) ((MR_String) ".date0"))), (MR_Word) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_1[2])), &TouchSucceeded_36);
      *Succeeded_20 = libs__maybe_util__and_2_f_0(OutputSucceeded_35, TouchSucceeded_36);
    }
    else
    {
      parse_tree__write_module_interface_files__report_file_not_written_12_p_0(ErrorStream_14, Globals_15, EffectiveGetQualSpecs_31, (MR_Word) ((MR_Unsigned) 0U), ModuleName_23, (MR_Word) (((MR_Box) ((MR_String) ".int0"))), (MR_Word) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_1[3])), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (((MR_Box) ((MR_String) ".date0"))), (MR_Word) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_1[2])));
      *Succeeded_20 = (MR_Integer) 0;
    }
  }
  else
  {
    parse_tree__write_module_interface_files__report_file_not_written_12_p_0(ErrorStream_14, Globals_15, GetSpecs_27, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[7])), ModuleName_23, (MR_Word) (((MR_Box) ((MR_String) ".int0"))), (MR_Word) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_1[3])), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (((MR_Box) ((MR_String) ".date0"))), (MR_Word) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_1[2])));
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
  MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_13, (MR_Integer) 0))));
  MR_String OutputFileName_19;
  MR_String TmpOutputFileName_20;
  MR_Word NoLineNumGlobals_21;
  MR_Word MaybeVersionNumbers_22;
  MR_Word ParseTreeInt0V_23;
  MR_Word OutputSucceeded_24;
  MR_Word UpdateSucceeded_25;
  MR_Word OtherExt_76;
  MR_Word NewExt_77;
  MR_String OutputFileName0_78;
  MR_Word Var_81;
  MR_Word NoLineNumGlobals0_83;
  MR_String _ExtStr_75;
  MR_Word Var_53;
  MR_Word Var_54;
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

  parse_tree__file_kind__int_file_kind_to_extension_4_p_0((MR_Integer) 0, &_ExtStr_75, &OtherExt_76, &NewExt_77);
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) (OtherExt_76));
  }
  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_module_interface_files.construct_int_file_name\'/8", (MR_Integer) 0, Var_81, NewExt_77, ModuleName_18, &OutputFileName0_78);
  OutputFileName_19 = mercury__string__f_43_43_2_f_0(OutputFileName0_78, ExtraSuffix_14);
  TmpOutputFileName_20 = mercury__string__f_43_43_2_f_0(OutputFileName_19, (MR_String) ".tmp");
  libs__globals__set_option_4_p_0((MR_Integer) 173, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[1])), Globals_12, &NoLineNumGlobals0_83);
  libs__globals__set_option_4_p_0((MR_Integer) 174, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[1])), NoLineNumGlobals0_83, &NoLineNumGlobals_21);
  parse_tree__write_module_interface_files__maybe_read_old_int0_and_compare_for_smart_recomp_6_p_0(NoLineNumGlobals_21, ParseTreeInt0_13, MaybeTimestamp_15, &MaybeVersionNumbers_22);
  Var_53 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_13, (MR_Integer) 0))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_13, (MR_Integer) 1))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_13, (MR_Integer) 3))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_13, (MR_Integer) 4))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_13, (MR_Integer) 5))));
  Var_59 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_13, (MR_Integer) 6))));
  Var_60 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_13, (MR_Integer) 7))));
  Var_61 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_13, (MR_Integer) 8))));
  Var_62 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_13, (MR_Integer) 9))));
  Var_63 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_13, (MR_Integer) 10))));
  Var_64 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_13, (MR_Integer) 11))));
  Var_65 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_13, (MR_Integer) 12))));
  Var_66 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_13, (MR_Integer) 13))));
  Var_67 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_13, (MR_Integer) 14))));
  Var_68 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_13, (MR_Integer) 15))));
  Var_69 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_13, (MR_Integer) 16))));
  Var_70 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_13, (MR_Integer) 17))));
  Var_71 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_13, (MR_Integer) 18))));
  Var_72 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_13, (MR_Integer) 19))));
  Var_73 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_13, (MR_Integer) 20))));
  Var_74 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_13, (MR_Integer) 21))));
  {
    ParseTreeInt0V_23 = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ParseTreeInt0V_23, 0) = ((MR_Box) (Var_53));
    MR_hl_field(0, ParseTreeInt0V_23, 1) = ((MR_Box) (Var_54));
    MR_hl_field(0, ParseTreeInt0V_23, 2) = ((MR_Box) (MaybeVersionNumbers_22));
    MR_hl_field(0, ParseTreeInt0V_23, 3) = ((MR_Box) (Var_56));
    MR_hl_field(0, ParseTreeInt0V_23, 4) = ((MR_Box) (Var_57));
    MR_hl_field(0, ParseTreeInt0V_23, 5) = ((MR_Box) (Var_58));
    MR_hl_field(0, ParseTreeInt0V_23, 6) = ((MR_Box) (Var_59));
    MR_hl_field(0, ParseTreeInt0V_23, 7) = ((MR_Box) (Var_60));
    MR_hl_field(0, ParseTreeInt0V_23, 8) = ((MR_Box) (Var_61));
    MR_hl_field(0, ParseTreeInt0V_23, 9) = ((MR_Box) (Var_62));
    MR_hl_field(0, ParseTreeInt0V_23, 10) = ((MR_Box) (Var_63));
    MR_hl_field(0, ParseTreeInt0V_23, 11) = ((MR_Box) (Var_64));
    MR_hl_field(0, ParseTreeInt0V_23, 12) = ((MR_Box) (Var_65));
    MR_hl_field(0, ParseTreeInt0V_23, 13) = ((MR_Box) (Var_66));
    MR_hl_field(0, ParseTreeInt0V_23, 14) = ((MR_Box) (Var_67));
    MR_hl_field(0, ParseTreeInt0V_23, 15) = ((MR_Box) (Var_68));
    MR_hl_field(0, ParseTreeInt0V_23, 16) = ((MR_Box) (Var_69));
    MR_hl_field(0, ParseTreeInt0V_23, 17) = ((MR_Box) (Var_70));
    MR_hl_field(0, ParseTreeInt0V_23, 18) = ((MR_Box) (Var_71));
    MR_hl_field(0, ParseTreeInt0V_23, 19) = ((MR_Box) (Var_72));
    MR_hl_field(0, ParseTreeInt0V_23, 20) = ((MR_Box) (Var_73));
    MR_hl_field(0, ParseTreeInt0V_23, 21) = ((MR_Box) (Var_74));
  }
  parse_tree__parse_tree_out__output_parse_tree_int0_8_p_0(ProgressStream_10, ErrorStream_11, NoLineNumGlobals_21, TmpOutputFileName_20, ParseTreeInt0V_23, &OutputSucceeded_24);
  parse_tree__module_cmds__update_interface_report_any_error_6_p_0(Globals_12, ModuleName_18, OutputFileName_19, &UpdateSucceeded_25);
  *Succeeded_16 = libs__maybe_util__and_2_f_0(OutputSucceeded_24, UpdateSucceeded_25);
}

static void MR_CALL 
parse_tree__write_module_interface_files__maybe_read_old_int0_and_compare_for_smart_recomp_6_p_0(
  MR_Word NoLineNumGlobals_7,
  MR_Word ParseTreeInt0_8,
  MR_Word MaybeTimestamp_9,
  MR_Word * MaybeVersionNumbers_10)
{
  MR_bool succeeded;
  MR_Word GenerateVersionNumbers_55;
  MR_Word DisableVersionNumbers_56;

  libs__globals__lookup_bool_option_3_p_0(NoLineNumGlobals_7, (MR_Integer) 153, &GenerateVersionNumbers_55);
  libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(&DisableVersionNumbers_56);
  succeeded = (GenerateVersionNumbers_55 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DisableVersionNumbers_56 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_8, (MR_Integer) 0))));
    MR_Word Timestamp_14;
    MR_Word HaveReadInt0_16;
    MR_Word MaybeOldParseTreeInt0_21;
    MR_Word VersionNumbers_24;
    MR_Word Var_28;

    if ((MaybeTimestamp_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_module_interface_files.insist_on_timestamp\'/2", (MR_String) "timestamp not read with \140--smart-recompilation\'");
        return;
      }
    else
      Timestamp_14 = ((MR_Word) ((MR_hl_field(1, MaybeTimestamp_9, (MR_Integer) 0))));
    {
      Var_28 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_28, 0) = ((MR_Box) (ModuleName_13));
    }
    parse_tree__read_modules__read_module_int0_10_p_0((MR_Word) ((MR_Unsigned) 0U), NoLineNumGlobals_7, Var_28, (MR_Integer) 0, (MR_Integer) 0, ModuleName_13, (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[2]), &HaveReadInt0_16);
    if (((MR_tag((MR_Word) HaveReadInt0_16)) == (MR_Integer) 1))
      MaybeOldParseTreeInt0_21 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word OldParseTreeInt0_19 = ((MR_Word) ((MR_hl_field(0, HaveReadInt0_16, (MR_Integer) 2))));
      MR_Word OldModuleErrors_20 = ((MR_Word) ((MR_hl_field(0, HaveReadInt0_16, (MR_Integer) 3))));

      succeeded = parse_tree__parse_error__there_are_no_errors_1_p_0(OldModuleErrors_20);
      if (succeeded)
        {
          MaybeOldParseTreeInt0_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeOldParseTreeInt0_21, 0) = ((MR_Box) (OldParseTreeInt0_19));
        }
      else
        MaybeOldParseTreeInt0_21 = (MR_Word) ((MR_Unsigned) 0U);
    }
    recompilation__version__compute_version_numbers_int0_4_p_0(MaybeOldParseTreeInt0_21, Timestamp_14, ParseTreeInt0_8, &VersionNumbers_24);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeVersionNumbers_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (VersionNumbers_24));
    }
  }
  else
    *MaybeVersionNumbers_10 = (MR_Word) ((MR_Unsigned) 0U);
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
  parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_10, Specs0_15, &Specs_16);
  EffectivelyErrors_17 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_10, Specs_16);
  ModuleName_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_11, (MR_Integer) 0))));
  switch (EffectivelyErrors_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word OutputSucceeded_19;
        MR_Word TouchSucceeded_20;

        parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_51_95_95_91_54_93_95_48_9_p_0(ProgressStream_8, ErrorStream_9, Globals_10, ParseTreeInt3_14, (MR_String) "", &OutputSucceeded_19);
        parse_tree__module_cmds__touch_interface_datestamp_9_p_0(Globals_10, ProgressStream_8, ErrorStream_9, ModuleName_18, (MR_Word) (((MR_Box) ((MR_String) ".date3"))), (MR_Word) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_1[0])), &TouchSucceeded_20);
        *Succeeded_12 = libs__maybe_util__and_2_f_0(OutputSucceeded_19, TouchSucceeded_20);
      }
      break;
    case (MR_Integer) 1:
      {
        parse_tree__write_module_interface_files__report_file_not_written_12_p_0(ErrorStream_9, Globals_10, Specs_16, (MR_Word) ((MR_Unsigned) 0U), ModuleName_18, (MR_Word) (((MR_Box) ((MR_String) ".int3"))), (MR_Word) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_1[1])), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (((MR_Box) ((MR_String) ".date3"))), (MR_Word) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_1[0])));
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
  MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_13, (MR_Integer) 0))));
  MR_String OutputFileName_19;
  MR_String TmpOutputFileName_20;
  MR_Word NoLineNumGlobals_21;
  MR_Word OutputSucceeded_22;
  MR_Word UpdateSucceeded_23;
  MR_Word OtherExt_39;
  MR_Word NewExt_40;
  MR_String OutputFileName0_41;
  MR_Word Var_44;
  MR_Word NoLineNumGlobals0_46;
  MR_String _ExtStr_38;

  parse_tree__file_kind__int_file_kind_to_extension_4_p_0((MR_Integer) 3, &_ExtStr_38, &OtherExt_39, &NewExt_40);
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (OtherExt_39));
  }
  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_module_interface_files.construct_int_file_name\'/8", (MR_Integer) 0, Var_44, NewExt_40, ModuleName_18, &OutputFileName0_41);
  OutputFileName_19 = mercury__string__f_43_43_2_f_0(OutputFileName0_41, ExtraSuffix_14);
  TmpOutputFileName_20 = mercury__string__f_43_43_2_f_0(OutputFileName_19, (MR_String) ".tmp");
  libs__globals__set_option_4_p_0((MR_Integer) 173, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[1])), Globals_12, &NoLineNumGlobals0_46);
  libs__globals__set_option_4_p_0((MR_Integer) 174, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[1])), NoLineNumGlobals0_46, &NoLineNumGlobals_21);
  parse_tree__parse_tree_out__output_parse_tree_int3_8_p_0(ProgressStream_10, ErrorStream_11, NoLineNumGlobals_21, TmpOutputFileName_20, ParseTreeInt3_13, &OutputSucceeded_22);
  parse_tree__module_cmds__update_interface_report_any_error_6_p_0(Globals_12, ModuleName_18, OutputFileName_19, &UpdateSucceeded_23);
  *Succeeded_16 = libs__maybe_util__and_2_f_0(OutputSucceeded_22, UpdateSucceeded_23);
}

static void MR_CALL 
parse_tree__write_module_interface_files__report_file_not_written_12_p_0_1(
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
parse_tree__write_module_interface_files__report_file_not_written_12_p_0(
  MR_Word ErrorStream_13,
  MR_Word Globals_14,
  MR_Word Specs_15,
  MR_Word PrefixPieces_16,
  MR_Word ModuleName_17,
  MR_Word OtherExtA_18,
  MR_Word NewExtA_19,
  MR_Word MaybeOtherNewExtB_20,
  MR_Word OtherExtDate_21,
  MR_Word NewExtDate_22)
{
  MR_String IntAFileName_24;
  MR_String DateFileName_25;
  MR_Word NotWrittenPieces_26;
  MR_Word ToRemoveFileNames_27;
  MR_Word NotWrittenSpec_31;
  MR_Word Var_37;
  MR_Word Var_41;
  MR_Word Var_75;
  MR_Word _RemoveResults_32;
  MR_Box conv1_STATE_VARIABLE_IO_34;

  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (OtherExtA_18));
  }
  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_14, (MR_String) "predicate \140parse_tree.write_module_interface_files.report_file_not_written\'/12", (MR_Integer) 1, Var_37, NewExtA_19, ModuleName_17, &IntAFileName_24);
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (OtherExtDate_21));
  }
  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_14, (MR_String) "predicate \140parse_tree.write_module_interface_files.report_file_not_written\'/12", (MR_Integer) 1, Var_41, NewExtDate_22, ModuleName_17, &DateFileName_25);
  if ((MaybeOtherNewExtB_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_43;
    MR_Word Var_50;

    {
      Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_43, 1) = ((MR_Box) (IntAFileName_24));
    }
    {
      NotWrittenPieces_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, NotWrittenPieces_26, 0) = ((MR_Box) (Var_43));
      MR_hl_field(1, NotWrittenPieces_26, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[16])));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (DateFileName_25));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ToRemoveFileNames_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ToRemoveFileNames_27, 0) = ((MR_Box) (IntAFileName_24));
      MR_hl_field(1, ToRemoveFileNames_27, 1) = ((MR_Box) (Var_50));
    }
  }
  else
  {
    MR_Word OtherExtB_28;
    MR_Word NewExtB_29;
    MR_String IntBFileName_30;
    MR_Tuple Var_52 = ((MR_Tuple) ((MR_hl_field(1, MaybeOtherNewExtB_20, (MR_Integer) 0))));
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_69;
    MR_Word Var_70;

    OtherExtB_28 = ((MR_Word) ((MR_hl_field(0, Var_52, (MR_Integer) 0))));
    NewExtB_29 = ((MR_Word) ((MR_hl_field(0, Var_52, (MR_Integer) 1))));
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (OtherExtB_28));
    }
    parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_14, (MR_String) "predicate \140parse_tree.write_module_interface_files.report_file_not_written\'/12", (MR_Integer) 1, Var_55, NewExtB_29, ModuleName_17, &IntBFileName_30);
    {
      Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_57, 1) = ((MR_Box) (IntAFileName_24));
    }
    {
      Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_62, 1) = ((MR_Box) (IntBFileName_30));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[16])));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_1[17])));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_61));
    }
    {
      NotWrittenPieces_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, NotWrittenPieces_26, 0) = ((MR_Box) (Var_57));
      MR_hl_field(1, NotWrittenPieces_26, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (DateFileName_25));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_69, 0) = ((MR_Box) (IntBFileName_30));
      MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_70));
    }
    {
      ToRemoveFileNames_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ToRemoveFileNames_27, 0) = ((MR_Box) (IntAFileName_24));
      MR_hl_field(1, ToRemoveFileNames_27, 1) = ((MR_Box) (Var_69));
    }
  }
  Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_16, NotWrittenPieces_26);
  {
    NotWrittenSpec_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, NotWrittenSpec_31, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_module_interface_files.report_file_not_written\'/12"));
    MR_hl_field(2, NotWrittenSpec_31, 1) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(2, NotWrittenSpec_31, 2) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(2, NotWrittenSpec_31, 3) = ((MR_Box) (Var_75));
  }
  parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_13, Globals_14, Specs_15);
  parse_tree__write_error_spec__write_error_spec_5_p_0(ErrorStream_13, Globals_14, NotWrittenSpec_31);
  mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_res_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_4[0]), ToRemoveFileNames_27, &_RemoveResults_32, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_34);
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
