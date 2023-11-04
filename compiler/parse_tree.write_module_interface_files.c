/*
** Automatically generated from `write_module_interface_files.m'
** by the Mercury compiler,
** version rotd-2023-11-04
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
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
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
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_tree_out.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.version.mih"
#include "string.builder.mih"




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
  MR_Word Globals_11,
  MR_Word ParseTreeInt2_12,
  MR_String FileName_13,
  MR_String TmpFileName_14,
  MR_Word MaybeTimestamp_15,
  MR_Word * Succeeded_16);

static void MR_CALL 
parse_tree__write_module_interface_files__actually_write_interface_file1_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ParseTreeInt1_12,
  MR_String FileName_13,
  MR_String TmpFileName_14,
  MR_Word MaybeTimestamp_15,
  MR_Word * Succeeded_16);

static void MR_CALL 
parse_tree__write_module_interface_files__maybe_read_old_int0_and_compare_for_smart_recomp_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word NoLineNumGlobals_9,
  MR_Word ParseTreeInt0_10,
  MR_Word MaybeTimestamp_11,
  MR_Word * MaybeVersionNumbers_12);

static void MR_CALL 
parse_tree__write_module_interface_files__report_file_not_written_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__write_module_interface_files__report_file_not_written_10_p_0(
  MR_Word Globals_11,
  MR_Word PrefixPieces_12,
  MR_Word ModuleName_13,
  MR_Word ExtA_14,
  MR_Word MaybeExtB_15,
  MR_Word ExtDate_16,
  MR_Word Specs0_17,
  MR_Word * Specs_18);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_generate_version_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_generate_version_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_1[8][1];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_2[4][2];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_3[1][7];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_4[1][3];




static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_1[8][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 6U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 4U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   6 */
  { (MR_Box) ((MR_Unsigned) 5U) },
  /* row   7 */
  { ((MR_Box) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[5]))) },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_2[4][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not written."))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[0])))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
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
#include "dir.mh"
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
parse_tree__write_module_interface_files__generate_and_write_interface_file_int1_int2_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word AddToHptm_13,
  MR_Word BurdenedModule_14,
  MR_Word * Succeeded_15,
  MR_Word * Specs_16,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_20,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_21)
{
  MR_Word GenerateResult_19;

  parse_tree__comp_unit_interface__generate_parse_tree_int12_9_p_0(ProgressStream_11, Globals_12, AddToHptm_13, BurdenedModule_14, &GenerateResult_19, STATE_VARIABLE_HaveParseTreeMaps_0_20, STATE_VARIABLE_HaveParseTreeMaps_21);
  if (((MR_tag((MR_Word) GenerateResult_19)) == (MR_Integer) 1))
  {
    MR_Word PrefixPieces_37 = ((MR_Word) ((MR_hl_field(1, GenerateResult_19, (MR_Integer) 1))));
    MR_Word GenerateSpecs_38 = ((MR_Word) ((MR_hl_field(1, GenerateResult_19, (MR_Integer) 2))));
    MR_Word ModuleName_51 = ((MR_Word) ((MR_hl_field(1, GenerateResult_19, (MR_Integer) 0))));

    parse_tree__write_module_interface_files__report_file_not_written_10_p_0(Globals_12, PrefixPieces_37, ModuleName_51, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[4])), (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[7])), (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[6])), GenerateSpecs_38, Specs_16);
    *Succeeded_15 = (MR_Integer) 0;
  }
  else
  {
    MR_Word ParseTreeInt1_26 = ((MR_Word) ((MR_hl_field(0, GenerateResult_19, (MR_Integer) 0))));
    MR_Word ParseTreeInt2_27 = ((MR_Word) ((MR_hl_field(0, GenerateResult_19, (MR_Integer) 1))));
    MR_Word MaybeTimestamp_28 = ((MR_Word) ((MR_hl_field(0, GenerateResult_19, (MR_Integer) 2))));
    MR_String FileName1_29 = ((MR_String) ((MR_hl_field(0, GenerateResult_19, (MR_Integer) 3))));
    MR_String TmpFileName1_30 = ((MR_String) ((MR_hl_field(0, GenerateResult_19, (MR_Integer) 4))));
    MR_String FileName2_31 = ((MR_String) ((MR_hl_field(0, GenerateResult_19, (MR_Integer) 5))));
    MR_String TmpFileName2_32 = ((MR_String) ((MR_hl_field(0, GenerateResult_19, (MR_Integer) 6))));
    MR_Word ModuleName_33;
    MR_Word OutputSucceeded1_34;
    MR_Word OutputSucceeded2_35;
    MR_Word TouchSucceeded_36;
    MR_Word Var_46;

    *Specs_16 = ((MR_Word) ((MR_hl_field(0, GenerateResult_19, (MR_Integer) 7))));
    ModuleName_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_26, (MR_Integer) 0))));
    parse_tree__write_module_interface_files__actually_write_interface_file1_9_p_0(ProgressStream_11, Globals_12, ParseTreeInt1_26, FileName1_29, TmpFileName1_30, MaybeTimestamp_28, &OutputSucceeded1_34);
    parse_tree__write_module_interface_files__actually_write_interface_file2_9_p_0(ProgressStream_11, Globals_12, ParseTreeInt2_27, FileName2_31, TmpFileName2_32, MaybeTimestamp_28, &OutputSucceeded2_35);
    parse_tree__module_cmds__touch_module_ext_datestamp_7_p_0(Globals_12, ProgressStream_11, ModuleName_33, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[6])), &TouchSucceeded_36);
    Var_46 = libs__maybe_util__and_2_f_0(OutputSucceeded1_34, OutputSucceeded2_35);
    *Succeeded_15 = libs__maybe_util__and_2_f_0(Var_46, TouchSucceeded_36);
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__actually_write_interface_file2_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ParseTreeInt2_12,
  MR_String FileName_13,
  MR_String TmpFileName_14,
  MR_Word MaybeTimestamp_15,
  MR_Word * Succeeded_16)
{
  MR_bool succeeded;
  MR_Word NoLineNumGlobals_18;
  MR_Word MaybeVersionNumbers_19;
  MR_Word ParseTreeInt2V_20;
  MR_Word OutputSucceeded_21;
  MR_Word UpdateSucceeded_22;
  MR_Word NoLineNumGlobals0_41;
  MR_Word GenerateVersionNumbers_79;
  MR_Word DisableVersionNumbers_80;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;

  libs__globals__set_option_4_p_0((MR_Integer) 175, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[2])), Globals_11, &NoLineNumGlobals0_41);
  libs__globals__set_option_4_p_0((MR_Integer) 176, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[2])), NoLineNumGlobals0_41, &NoLineNumGlobals_18);
  libs__globals__lookup_bool_option_3_p_0(NoLineNumGlobals_18, (MR_Integer) 155, &GenerateVersionNumbers_79);
  libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(&DisableVersionNumbers_80);
  succeeded = (GenerateVersionNumbers_79 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DisableVersionNumbers_80 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word ModuleName_49 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_12, (MR_Integer) 0))));
    MR_Word Timestamp_50;
    MR_Word HaveReadInt2_51;
    MR_Word MaybeOldParseTreeInt2_57;
    MR_Word VersionNumbers_60;

    if ((MaybeTimestamp_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_module_interface_files.insist_on_timestamp\'/2", (MR_String) "timestamp not read with \140--smart-recompilation\'");
        return;
      }
    else
      Timestamp_50 = ((MR_Word) ((MR_hl_field(1, MaybeTimestamp_15, (MR_Integer) 0))));
    parse_tree__read_modules__read_module_int2_10_p_0(ProgressStream_10, NoLineNumGlobals_18, (MR_Integer) 2, (MR_Integer) 0, (MR_Integer) 1, ModuleName_49, (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), &HaveReadInt2_51);
    if (((MR_tag((MR_Word) HaveReadInt2_51)) == (MR_Integer) 0))
    {
      MR_Word OldParseTreeInt2_53 = ((MR_Word) ((MR_hl_field(0, HaveReadInt2_51, (MR_Integer) 1))));
      MR_Word Source_54 = ((MR_Word) ((MR_hl_field(0, HaveReadInt2_51, (MR_Integer) 2))));
      MR_Word OldModuleErrors_56;
      MR_Word Var_55;

      parse_tree__read_modules__have_parse_tree_source_get_maybe_timestamp_errors_3_p_0(Source_54, &Var_55, &OldModuleErrors_56);
      succeeded = parse_tree__parse_error__there_are_no_errors_1_p_0(OldModuleErrors_56);
      if (succeeded)
        {
          MaybeOldParseTreeInt2_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeOldParseTreeInt2_57, 0) = ((MR_Box) (OldParseTreeInt2_53));
        }
      else
        MaybeOldParseTreeInt2_57 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
      MaybeOldParseTreeInt2_57 = (MR_Word) ((MR_Unsigned) 0U);
    recompilation__version__compute_version_numbers_int2_4_p_0(MaybeOldParseTreeInt2_57, Timestamp_50, ParseTreeInt2_12, &VersionNumbers_60);
    {
      MaybeVersionNumbers_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeVersionNumbers_19, 0) = ((MR_Box) (VersionNumbers_60));
    }
  }
  else
    MaybeVersionNumbers_19 = (MR_Word) ((MR_Unsigned) 0U);
  Var_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_12, (MR_Integer) 0))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_12, (MR_Integer) 1))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_12, (MR_Integer) 3))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_12, (MR_Integer) 4))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_12, (MR_Integer) 5))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_12, (MR_Integer) 6))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_12, (MR_Integer) 7))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_12, (MR_Integer) 8))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_12, (MR_Integer) 9))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_12, (MR_Integer) 10))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_12, (MR_Integer) 11))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_12, (MR_Integer) 12))));
  {
    ParseTreeInt2V_20 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ParseTreeInt2V_20, 0) = ((MR_Box) (Var_28));
    MR_hl_field(0, ParseTreeInt2V_20, 1) = ((MR_Box) (Var_29));
    MR_hl_field(0, ParseTreeInt2V_20, 2) = ((MR_Box) (MaybeVersionNumbers_19));
    MR_hl_field(0, ParseTreeInt2V_20, 3) = ((MR_Box) (Var_31));
    MR_hl_field(0, ParseTreeInt2V_20, 4) = ((MR_Box) (Var_32));
    MR_hl_field(0, ParseTreeInt2V_20, 5) = ((MR_Box) (Var_33));
    MR_hl_field(0, ParseTreeInt2V_20, 6) = ((MR_Box) (Var_34));
    MR_hl_field(0, ParseTreeInt2V_20, 7) = ((MR_Box) (Var_35));
    MR_hl_field(0, ParseTreeInt2V_20, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, ParseTreeInt2V_20, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, ParseTreeInt2V_20, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, ParseTreeInt2V_20, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, ParseTreeInt2V_20, 12) = ((MR_Box) (Var_40));
  }
  parse_tree__parse_tree_out__output_parse_tree_int2_7_p_0(ProgressStream_10, NoLineNumGlobals_18, TmpFileName_14, ParseTreeInt2V_20, &OutputSucceeded_21);
  parse_tree__module_cmds__copy_dot_tmp_to_base_file_report_any_error_7_p_0(ProgressStream_10, Globals_11, (MR_String) ".int2", FileName_13, &UpdateSucceeded_22);
  *Succeeded_16 = libs__maybe_util__and_2_f_0(OutputSucceeded_21, UpdateSucceeded_22);
}

static void MR_CALL 
parse_tree__write_module_interface_files__actually_write_interface_file1_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ParseTreeInt1_12,
  MR_String FileName_13,
  MR_String TmpFileName_14,
  MR_Word MaybeTimestamp_15,
  MR_Word * Succeeded_16)
{
  MR_bool succeeded;
  MR_Word NoLineNumGlobals_18;
  MR_Word MaybeVersionNumbers_19;
  MR_Word ParseTreeInt1V_20;
  MR_Word OutputSucceeded_21;
  MR_Word UpdateSucceeded_22;
  MR_Word NoLineNumGlobals0_47;
  MR_Word GenerateVersionNumbers_91;
  MR_Word DisableVersionNumbers_92;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;

  libs__globals__set_option_4_p_0((MR_Integer) 175, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[2])), Globals_11, &NoLineNumGlobals0_47);
  libs__globals__set_option_4_p_0((MR_Integer) 176, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[2])), NoLineNumGlobals0_47, &NoLineNumGlobals_18);
  libs__globals__lookup_bool_option_3_p_0(NoLineNumGlobals_18, (MR_Integer) 155, &GenerateVersionNumbers_91);
  libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(&DisableVersionNumbers_92);
  succeeded = (GenerateVersionNumbers_91 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DisableVersionNumbers_92 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word ModuleName_55 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_12, (MR_Integer) 0))));
    MR_Word Timestamp_56;
    MR_Word HaveReadInt1_57;
    MR_Word MaybeOldParseTreeInt1_63;
    MR_Word VersionNumbers_66;

    if ((MaybeTimestamp_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_module_interface_files.insist_on_timestamp\'/2", (MR_String) "timestamp not read with \140--smart-recompilation\'");
        return;
      }
    else
      Timestamp_56 = ((MR_Word) ((MR_hl_field(1, MaybeTimestamp_15, (MR_Integer) 0))));
    parse_tree__read_modules__read_module_int1_10_p_0(ProgressStream_10, NoLineNumGlobals_18, (MR_Integer) 2, (MR_Integer) 0, (MR_Integer) 1, ModuleName_55, (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), &HaveReadInt1_57);
    if (((MR_tag((MR_Word) HaveReadInt1_57)) == (MR_Integer) 0))
    {
      MR_Word OldParseTreeInt1_59 = ((MR_Word) ((MR_hl_field(0, HaveReadInt1_57, (MR_Integer) 1))));
      MR_Word Source_60 = ((MR_Word) ((MR_hl_field(0, HaveReadInt1_57, (MR_Integer) 2))));
      MR_Word OldModuleErrors_62;
      MR_Word Var_61;

      parse_tree__read_modules__have_parse_tree_source_get_maybe_timestamp_errors_3_p_0(Source_60, &Var_61, &OldModuleErrors_62);
      succeeded = parse_tree__parse_error__there_are_no_errors_1_p_0(OldModuleErrors_62);
      if (succeeded)
        {
          MaybeOldParseTreeInt1_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeOldParseTreeInt1_63, 0) = ((MR_Box) (OldParseTreeInt1_59));
        }
      else
        MaybeOldParseTreeInt1_63 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
      MaybeOldParseTreeInt1_63 = (MR_Word) ((MR_Unsigned) 0U);
    recompilation__version__compute_version_numbers_int1_4_p_0(MaybeOldParseTreeInt1_63, Timestamp_56, ParseTreeInt1_12, &VersionNumbers_66);
    {
      MaybeVersionNumbers_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeVersionNumbers_19, 0) = ((MR_Box) (VersionNumbers_66));
    }
  }
  else
    MaybeVersionNumbers_19 = (MR_Word) ((MR_Unsigned) 0U);
  Var_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_12, (MR_Integer) 0))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_12, (MR_Integer) 1))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_12, (MR_Integer) 3))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_12, (MR_Integer) 4))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_12, (MR_Integer) 5))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_12, (MR_Integer) 6))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_12, (MR_Integer) 7))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_12, (MR_Integer) 8))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_12, (MR_Integer) 9))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_12, (MR_Integer) 10))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_12, (MR_Integer) 11))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_12, (MR_Integer) 12))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_12, (MR_Integer) 13))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_12, (MR_Integer) 14))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_12, (MR_Integer) 15))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_12, (MR_Integer) 16))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_12, (MR_Integer) 17))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_12, (MR_Integer) 18))));
  {
    ParseTreeInt1V_20 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ParseTreeInt1V_20, 0) = ((MR_Box) (Var_28));
    MR_hl_field(0, ParseTreeInt1V_20, 1) = ((MR_Box) (Var_29));
    MR_hl_field(0, ParseTreeInt1V_20, 2) = ((MR_Box) (MaybeVersionNumbers_19));
    MR_hl_field(0, ParseTreeInt1V_20, 3) = ((MR_Box) (Var_31));
    MR_hl_field(0, ParseTreeInt1V_20, 4) = ((MR_Box) (Var_32));
    MR_hl_field(0, ParseTreeInt1V_20, 5) = ((MR_Box) (Var_33));
    MR_hl_field(0, ParseTreeInt1V_20, 6) = ((MR_Box) (Var_34));
    MR_hl_field(0, ParseTreeInt1V_20, 7) = ((MR_Box) (Var_35));
    MR_hl_field(0, ParseTreeInt1V_20, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, ParseTreeInt1V_20, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, ParseTreeInt1V_20, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, ParseTreeInt1V_20, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, ParseTreeInt1V_20, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, ParseTreeInt1V_20, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, ParseTreeInt1V_20, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, ParseTreeInt1V_20, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, ParseTreeInt1V_20, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, ParseTreeInt1V_20, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, ParseTreeInt1V_20, 18) = ((MR_Box) (Var_46));
  }
  parse_tree__parse_tree_out__output_parse_tree_int1_7_p_0(ProgressStream_10, NoLineNumGlobals_18, TmpFileName_14, ParseTreeInt1V_20, &OutputSucceeded_21);
  parse_tree__module_cmds__copy_dot_tmp_to_base_file_report_any_error_7_p_0(ProgressStream_10, Globals_11, (MR_String) ".int", FileName_13, &UpdateSucceeded_22);
  *Succeeded_16 = libs__maybe_util__and_2_f_0(OutputSucceeded_21, UpdateSucceeded_22);
}

void MR_CALL 
parse_tree__write_module_interface_files__generate_and_write_interface_file_int0_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word AddToHptm_13,
  MR_Word BurdenedModule_14,
  MR_Word * Succeeded_15,
  MR_Word * Specs_16,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_20,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_21)
{
  MR_Word GenerateResult_19;

  parse_tree__comp_unit_interface__generate_parse_tree_int0_9_p_0(ProgressStream_11, Globals_12, AddToHptm_13, BurdenedModule_14, &GenerateResult_19, STATE_VARIABLE_HaveParseTreeMaps_0_20, STATE_VARIABLE_HaveParseTreeMaps_21);
  if (((MR_tag((MR_Word) GenerateResult_19)) == (MR_Integer) 1))
  {
    MR_Word PrefixPieces_33 = ((MR_Word) ((MR_hl_field(1, GenerateResult_19, (MR_Integer) 1))));
    MR_Word GenerateSpecs_34 = ((MR_Word) ((MR_hl_field(1, GenerateResult_19, (MR_Integer) 2))));
    MR_Word ModuleName_43 = ((MR_Word) ((MR_hl_field(1, GenerateResult_19, (MR_Integer) 0))));

    parse_tree__write_module_interface_files__report_file_not_written_10_p_0(Globals_12, PrefixPieces_33, ModuleName_43, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[2])), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[3])), GenerateSpecs_34, Specs_16);
    *Succeeded_15 = (MR_Integer) 0;
  }
  else
  {
    MR_Word ParseTreeInt0_26 = ((MR_Word) ((MR_hl_field(0, GenerateResult_19, (MR_Integer) 0))));
    MR_Word MaybeTimestamp_27 = ((MR_Word) ((MR_hl_field(0, GenerateResult_19, (MR_Integer) 1))));
    MR_String FileName_28 = ((MR_String) ((MR_hl_field(0, GenerateResult_19, (MR_Integer) 2))));
    MR_String TmpFileName_29 = ((MR_String) ((MR_hl_field(0, GenerateResult_19, (MR_Integer) 3))));
    MR_Word ModuleName_30;
    MR_Word OutputSucceeded_31;
    MR_Word TouchSucceeded_32;
    MR_Word NoLineNumGlobals_67;
    MR_Word MaybeVersionNumbers_68;
    MR_Word ParseTreeInt0V_69;
    MR_Word OutputSucceeded_70;
    MR_Word UpdateSucceeded_71;
    MR_Word NoLineNumGlobals0_99;
    MR_Word Var_75;
    MR_Word Var_76;
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
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;

    *Specs_16 = ((MR_Word) ((MR_hl_field(0, GenerateResult_19, (MR_Integer) 4))));
    ModuleName_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 0))));
    libs__globals__set_option_4_p_0((MR_Integer) 175, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[2])), Globals_12, &NoLineNumGlobals0_99);
    libs__globals__set_option_4_p_0((MR_Integer) 176, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[2])), NoLineNumGlobals0_99, &NoLineNumGlobals_67);
    parse_tree__write_module_interface_files__maybe_read_old_int0_and_compare_for_smart_recomp_7_p_0(ProgressStream_11, NoLineNumGlobals_67, ParseTreeInt0_26, MaybeTimestamp_27, &MaybeVersionNumbers_68);
    Var_75 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 0))));
    Var_76 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 1))));
    Var_78 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 3))));
    Var_79 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 4))));
    Var_80 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 5))));
    Var_81 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 6))));
    Var_82 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 7))));
    Var_83 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 8))));
    Var_84 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 9))));
    Var_85 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 10))));
    Var_86 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 11))));
    Var_87 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 12))));
    Var_88 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 13))));
    Var_89 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 14))));
    Var_90 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 15))));
    Var_91 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 16))));
    Var_92 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 17))));
    Var_93 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 18))));
    Var_94 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 19))));
    Var_95 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 20))));
    Var_96 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 21))));
    Var_97 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 22))));
    Var_98 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_26, (MR_Integer) 23))));
    {
      ParseTreeInt0V_69 = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ParseTreeInt0V_69, 0) = ((MR_Box) (Var_75));
      MR_hl_field(0, ParseTreeInt0V_69, 1) = ((MR_Box) (Var_76));
      MR_hl_field(0, ParseTreeInt0V_69, 2) = ((MR_Box) (MaybeVersionNumbers_68));
      MR_hl_field(0, ParseTreeInt0V_69, 3) = ((MR_Box) (Var_78));
      MR_hl_field(0, ParseTreeInt0V_69, 4) = ((MR_Box) (Var_79));
      MR_hl_field(0, ParseTreeInt0V_69, 5) = ((MR_Box) (Var_80));
      MR_hl_field(0, ParseTreeInt0V_69, 6) = ((MR_Box) (Var_81));
      MR_hl_field(0, ParseTreeInt0V_69, 7) = ((MR_Box) (Var_82));
      MR_hl_field(0, ParseTreeInt0V_69, 8) = ((MR_Box) (Var_83));
      MR_hl_field(0, ParseTreeInt0V_69, 9) = ((MR_Box) (Var_84));
      MR_hl_field(0, ParseTreeInt0V_69, 10) = ((MR_Box) (Var_85));
      MR_hl_field(0, ParseTreeInt0V_69, 11) = ((MR_Box) (Var_86));
      MR_hl_field(0, ParseTreeInt0V_69, 12) = ((MR_Box) (Var_87));
      MR_hl_field(0, ParseTreeInt0V_69, 13) = ((MR_Box) (Var_88));
      MR_hl_field(0, ParseTreeInt0V_69, 14) = ((MR_Box) (Var_89));
      MR_hl_field(0, ParseTreeInt0V_69, 15) = ((MR_Box) (Var_90));
      MR_hl_field(0, ParseTreeInt0V_69, 16) = ((MR_Box) (Var_91));
      MR_hl_field(0, ParseTreeInt0V_69, 17) = ((MR_Box) (Var_92));
      MR_hl_field(0, ParseTreeInt0V_69, 18) = ((MR_Box) (Var_93));
      MR_hl_field(0, ParseTreeInt0V_69, 19) = ((MR_Box) (Var_94));
      MR_hl_field(0, ParseTreeInt0V_69, 20) = ((MR_Box) (Var_95));
      MR_hl_field(0, ParseTreeInt0V_69, 21) = ((MR_Box) (Var_96));
      MR_hl_field(0, ParseTreeInt0V_69, 22) = ((MR_Box) (Var_97));
      MR_hl_field(0, ParseTreeInt0V_69, 23) = ((MR_Box) (Var_98));
    }
    parse_tree__parse_tree_out__output_parse_tree_int0_7_p_0(ProgressStream_11, NoLineNumGlobals_67, TmpFileName_29, ParseTreeInt0V_69, &OutputSucceeded_70);
    parse_tree__module_cmds__copy_dot_tmp_to_base_file_report_any_error_7_p_0(ProgressStream_11, Globals_12, (MR_String) ".int0", FileName_28, &UpdateSucceeded_71);
    OutputSucceeded_31 = libs__maybe_util__and_2_f_0(OutputSucceeded_70, UpdateSucceeded_71);
    parse_tree__module_cmds__touch_module_ext_datestamp_7_p_0(Globals_12, ProgressStream_11, ModuleName_30, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[3])), &TouchSucceeded_32);
    *Succeeded_15 = libs__maybe_util__and_2_f_0(OutputSucceeded_31, TouchSucceeded_32);
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__maybe_read_old_int0_and_compare_for_smart_recomp_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word NoLineNumGlobals_9,
  MR_Word ParseTreeInt0_10,
  MR_Word MaybeTimestamp_11,
  MR_Word * MaybeVersionNumbers_12)
{
  MR_bool succeeded;
  MR_Word GenerateVersionNumbers_59;
  MR_Word DisableVersionNumbers_60;

  libs__globals__lookup_bool_option_3_p_0(NoLineNumGlobals_9, (MR_Integer) 155, &GenerateVersionNumbers_59);
  libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(&DisableVersionNumbers_60);
  succeeded = (GenerateVersionNumbers_59 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DisableVersionNumbers_60 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word ModuleName_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_10, (MR_Integer) 0))));
    MR_Word Timestamp_16;
    MR_Word HaveReadInt0_17;
    MR_Word MaybeOldParseTreeInt0_23;
    MR_Word VersionNumbers_26;

    if ((MaybeTimestamp_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_module_interface_files.insist_on_timestamp\'/2", (MR_String) "timestamp not read with \140--smart-recompilation\'");
        return;
      }
    else
      Timestamp_16 = ((MR_Word) ((MR_hl_field(1, MaybeTimestamp_11, (MR_Integer) 0))));
    parse_tree__read_modules__read_module_int0_10_p_0(ProgressStream_8, NoLineNumGlobals_9, (MR_Integer) 2, (MR_Integer) 0, (MR_Integer) 1, ModuleName_15, (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[4]), &HaveReadInt0_17);
    if (((MR_tag((MR_Word) HaveReadInt0_17)) == (MR_Integer) 0))
    {
      MR_Word OldParseTreeInt0_19 = ((MR_Word) ((MR_hl_field(0, HaveReadInt0_17, (MR_Integer) 1))));
      MR_Word Source_20 = ((MR_Word) ((MR_hl_field(0, HaveReadInt0_17, (MR_Integer) 2))));
      MR_Word OldModuleErrors_22;
      MR_Word Var_21;

      parse_tree__read_modules__have_parse_tree_source_get_maybe_timestamp_errors_3_p_0(Source_20, &Var_21, &OldModuleErrors_22);
      succeeded = parse_tree__parse_error__there_are_no_errors_1_p_0(OldModuleErrors_22);
      if (succeeded)
        {
          MaybeOldParseTreeInt0_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeOldParseTreeInt0_23, 0) = ((MR_Box) (OldParseTreeInt0_19));
        }
      else
        MaybeOldParseTreeInt0_23 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
      MaybeOldParseTreeInt0_23 = (MR_Word) ((MR_Unsigned) 0U);
    recompilation__version__compute_version_numbers_int0_4_p_0(MaybeOldParseTreeInt0_23, Timestamp_16, ParseTreeInt0_10, &VersionNumbers_26);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeVersionNumbers_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (VersionNumbers_26));
    }
  }
  else
    *MaybeVersionNumbers_12 = (MR_Word) ((MR_Unsigned) 0U);
}

void MR_CALL 
parse_tree__write_module_interface_files__generate_and_write_interface_file_int3_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word AddToHptm_13,
  MR_Word BurdenedModule_14,
  MR_Word * Succeeded_15,
  MR_Word * Specs_16,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_20,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_21)
{
  MR_Word GenerateResult_19;

  parse_tree__comp_unit_interface__generate_parse_tree_int3_8_p_0(Globals_12, AddToHptm_13, BurdenedModule_14, &GenerateResult_19, STATE_VARIABLE_HaveParseTreeMaps_0_20, STATE_VARIABLE_HaveParseTreeMaps_21);
  if (((MR_tag((MR_Word) GenerateResult_19)) == (MR_Integer) 1))
  {
    MR_Word PrefixPieces_32 = ((MR_Word) ((MR_hl_field(1, GenerateResult_19, (MR_Integer) 1))));
    MR_Word GenerateSpecs_33 = ((MR_Word) ((MR_hl_field(1, GenerateResult_19, (MR_Integer) 2))));
    MR_Word ModuleName_43 = ((MR_Word) ((MR_hl_field(1, GenerateResult_19, (MR_Integer) 0))));

    parse_tree__write_module_interface_files__report_file_not_written_10_p_0(Globals_12, PrefixPieces_32, ModuleName_43, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[0])), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[1])), GenerateSpecs_33, Specs_16);
    *Succeeded_15 = (MR_Integer) 0;
  }
  else
  {
    MR_Word ParseTreeInt3_26 = ((MR_Word) ((MR_hl_field(0, GenerateResult_19, (MR_Integer) 0))));
    MR_String FileName_27 = ((MR_String) ((MR_hl_field(0, GenerateResult_19, (MR_Integer) 1))));
    MR_String TmpFileName_28 = ((MR_String) ((MR_hl_field(0, GenerateResult_19, (MR_Integer) 2))));
    MR_Word ModuleName_29;
    MR_Word OutputSucceeded_30;
    MR_Word TouchSucceeded_31;
    MR_Word NoLineNumGlobals_53;
    MR_Word OutputSucceeded_54;
    MR_Word UpdateSucceeded_55;
    MR_Word NoLineNumGlobals0_58;

    *Specs_16 = ((MR_Word) ((MR_hl_field(0, GenerateResult_19, (MR_Integer) 3))));
    ModuleName_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_26, (MR_Integer) 0))));
    libs__globals__set_option_4_p_0((MR_Integer) 175, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[2])), Globals_12, &NoLineNumGlobals0_58);
    libs__globals__set_option_4_p_0((MR_Integer) 176, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[2])), NoLineNumGlobals0_58, &NoLineNumGlobals_53);
    parse_tree__parse_tree_out__output_parse_tree_int3_7_p_0(ProgressStream_11, NoLineNumGlobals_53, TmpFileName_28, ParseTreeInt3_26, &OutputSucceeded_54);
    parse_tree__module_cmds__copy_dot_tmp_to_base_file_report_any_error_7_p_0(ProgressStream_11, Globals_12, (MR_String) ".int3", FileName_27, &UpdateSucceeded_55);
    OutputSucceeded_30 = libs__maybe_util__and_2_f_0(OutputSucceeded_54, UpdateSucceeded_55);
    parse_tree__module_cmds__touch_module_ext_datestamp_7_p_0(Globals_12, ProgressStream_11, ModuleName_29, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[1])), &TouchSucceeded_31);
    *Succeeded_15 = libs__maybe_util__and_2_f_0(OutputSucceeded_30, TouchSucceeded_31);
  }
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
  MR_Word Globals_11,
  MR_Word PrefixPieces_12,
  MR_Word ModuleName_13,
  MR_Word ExtA_14,
  MR_Word MaybeExtB_15,
  MR_Word ExtDate_16,
  MR_Word Specs0_17,
  MR_Word * Specs_18)
{
  MR_bool succeeded;
  MR_String IntAFileName_20;
  MR_String DateFileName_21;
  MR_String StdIntAFileName_22;
  MR_Word NotWrittenPieces_23;
  MR_Word ToRemoveFileNames_24;
  MR_String ModuleNameStr_28;
  MR_Word InvisPiece_29;
  MR_Word NotWrittenSpec_30;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Std_76;
  MR_Word _RemoveResults_31;
  MR_Box conv1_STATE_VARIABLE_IO_33;

  parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_module_interface_files.report_file_not_written\'/10", ExtA_14, ModuleName_13, &IntAFileName_20);
  parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_module_interface_files.report_file_not_written\'/10", ExtDate_16, ModuleName_13, &DateFileName_21);
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 689, &Std_76);
  switch (Std_76) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      StdIntAFileName_22 = IntAFileName_20;
      break;
    case (MR_Integer) 1:
      {
        MR_String BaseName_77;

        succeeded = mercury__dir__basename_2_p_0(IntAFileName_20, &BaseName_77);
        if (succeeded)
          StdIntAFileName_22 = BaseName_77;
        else
          StdIntAFileName_22 = IntAFileName_20;
      }
      break;
  }
  if ((MaybeExtB_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_36;
    MR_Word Var_43;

    {
      Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_36, 1) = ((MR_Box) (StdIntAFileName_22));
    }
    {
      NotWrittenPieces_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, NotWrittenPieces_23, 0) = ((MR_Box) (Var_36));
      MR_hl_field(1, NotWrittenPieces_23, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[2])));
    }
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (DateFileName_21));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ToRemoveFileNames_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ToRemoveFileNames_24, 0) = ((MR_Box) (IntAFileName_20));
      MR_hl_field(1, ToRemoveFileNames_24, 1) = ((MR_Box) (Var_43));
    }
  }
  else
  {
    MR_Word ExtB_25 = ((MR_Word) ((MR_hl_field(1, MaybeExtB_15, (MR_Integer) 0))));
    MR_String IntBFileName_26;
    MR_String StdIntBFileName_27;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Std_79;

    parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_module_interface_files.report_file_not_written\'/10", ExtB_25, ModuleName_13, &IntBFileName_26);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 689, &Std_79);
    switch (Std_79) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        StdIntBFileName_27 = IntBFileName_26;
        break;
      case (MR_Integer) 1:
        {
          MR_String BaseName_80;

          succeeded = mercury__dir__basename_2_p_0(IntBFileName_26, &BaseName_80);
          if (succeeded)
            StdIntBFileName_27 = BaseName_80;
          else
            StdIntBFileName_27 = IntBFileName_26;
        }
        break;
    }
    {
      Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_46, 1) = ((MR_Box) (StdIntAFileName_22));
    }
    {
      Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_51, 1) = ((MR_Box) (StdIntBFileName_27));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[2])));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_2[3])));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
    }
    {
      NotWrittenPieces_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, NotWrittenPieces_23, 0) = ((MR_Box) (Var_46));
      MR_hl_field(1, NotWrittenPieces_23, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (DateFileName_21));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (IntBFileName_26));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_59));
    }
    {
      ToRemoveFileNames_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ToRemoveFileNames_24, 0) = ((MR_Box) (IntAFileName_20));
      MR_hl_field(1, ToRemoveFileNames_24, 1) = ((MR_Box) (Var_58));
    }
  }
  ModuleNameStr_28 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_13);
  {
    InvisPiece_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, InvisPiece_29, 0) = ((MR_Box) ((MR_Unsigned) 36U));
    MR_hl_field(3, InvisPiece_29, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, InvisPiece_29, 2) = ((MR_Box) (ModuleNameStr_28));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (InvisPiece_29));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) (PrefixPieces_12));
  }
  Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, NotWrittenPieces_23);
  {
    NotWrittenSpec_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, NotWrittenSpec_30, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_module_interface_files.report_file_not_written\'/10"));
    MR_hl_field(2, NotWrittenSpec_30, 1) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(2, NotWrittenSpec_30, 2) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(2, NotWrittenSpec_30, 3) = ((MR_Box) (Var_65));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Specs_18 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (NotWrittenSpec_30));
    MR_hl_field(1, base, 1) = ((MR_Box) (Specs0_17));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_res_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_4[0]), ToRemoveFileNames_24, &_RemoveResults_31, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_33);
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
