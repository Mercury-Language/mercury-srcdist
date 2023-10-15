/*
** Automatically generated from `write_module_interface_files.m'
** by the Mercury compiler,
** version rotd-2023-10-15
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
#include "set_tree234.mih"
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
#include "string.builder.mih"




static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_add_to_hrmm_0_0;

static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_add_to_hrmm_0_1;

static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_ordinal_ordered_maybe_add_to_hrmm_0[2];

static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_add_to_hrmm_0[2];

static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_add_to_hrmm_0[2];

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
parse_tree__write_module_interface_files__actually_write_interface_file2_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Globals_13,
  MR_Word ParseTreeInt2_14,
  MR_String FileName_15,
  MR_String TmpFileName_16,
  MR_Word MaybeTimestamp_17,
  MR_Word * Succeeded_18);

static void MR_CALL 
parse_tree__write_module_interface_files__actually_write_interface_file1_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Globals_13,
  MR_Word ParseTreeInt1_14,
  MR_String FileName_15,
  MR_String TmpFileName_16,
  MR_Word MaybeTimestamp_17,
  MR_Word * Succeeded_18);

static void MR_CALL 
parse_tree__write_module_interface_files__maybe_read_old_int1_and_compare_for_smart_recomp_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word NoLineNumGlobals_9,
  MR_Word ParseTreeInt1_10,
  MR_Word MaybeTimestamp_11,
  MR_Word * MaybeVersionNumbers_12);

static void MR_CALL 
parse_tree__write_module_interface_files__actually_write_interface_file0_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Globals_13,
  MR_Word ParseTreeInt0_14,
  MR_String FileName_15,
  MR_String TmpFileName_16,
  MR_Word MaybeTimestamp_17,
  MR_Word * Succeeded_18);

static void MR_CALL 
parse_tree__write_module_interface_files__maybe_read_old_int0_and_compare_for_smart_recomp_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word NoLineNumGlobals_9,
  MR_Word ParseTreeInt0_10,
  MR_Word MaybeTimestamp_11,
  MR_Word * MaybeVersionNumbers_12);

static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_51_95_95_91_55_93_95_48_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Globals_13,
  MR_Word ParseTreeInt3_14,
  MR_String FileName_15,
  MR_String TmpFileName_16,
  MR_Word * Succeeded_18);

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

static void MR_CALL 
parse_tree__write_module_interface_files__construct_int_file_name_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word IntFileKind_11,
  MR_String ExtraSuffix_12,
  MR_String * OutputFileName_13,
  MR_String * TmpOutputFileName_14);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_add_to_hrmm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_add_to_hrmm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_generate_version_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_generate_version_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_1[14][2];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_2[8][1];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_3[1][7];

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_4[1][3];




static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_1[14][2] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int3_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int1_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int2_0))
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error reading .int3 files."))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[5])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not written."))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
};

static /* final */ const MR_Box parse_tree__write_module_interface_files_scalar_common_2[8][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 6U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 4U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 5U) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   6 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   7 */
  { ((MR_Box) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[6]))) },
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
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_add_to_hrmm_0_0 = {
  (MR_String) "do_not_add_new_to_hrmm",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_add_to_hrmm_0_1 = {
  (MR_String) "do_add_new_to_hrmm",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_ordinal_ordered_maybe_add_to_hrmm_0[2] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_add_to_hrmm_0_0,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_add_to_hrmm_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_add_to_hrmm_0[2] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_add_to_hrmm_0_1,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_add_to_hrmm_0_0
};

static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_add_to_hrmm_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_maybe_add_to_hrmm_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__write_module_interface_files____Unify____maybe_add_to_hrmm_0_0_10001)),
  ((MR_Box) (parse_tree__write_module_interface_files____Compare____maybe_add_to_hrmm_0_0_10001)),
  (MR_String) "parse_tree.write_module_interface_files",
  (MR_String) "maybe_add_to_hrmm",
  { parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_add_to_hrmm_0 },
  { parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_ordinal_ordered_maybe_add_to_hrmm_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_add_to_hrmm_0,

};

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
parse_tree__write_module_interface_files____Compare____maybe_add_to_hrmm_0_0(
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

MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_add_to_hrmm_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__write_module_interface_files__write_interface_file_int1_int2_burdened_module_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word Globals_14,
  MR_Word AddToHrmm_15,
  MR_Word BurdenedModule_16,
  MR_Word * Succeeded_17,
  MR_Word * Specs_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_26,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_27)
{
  MR_Word Baggage_21 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_16, (MR_Integer) 0))));
  MR_Word ParseTreeModuleSrc_22 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_16, (MR_Integer) 1))));
  MR_String SourceFileName_23 = ((MR_String) ((MR_hl_field(0, Baggage_21, (MR_Integer) 0))));
  MR_Word SourceFileModuleName_24 = ((MR_Word) ((MR_hl_field(0, Baggage_21, (MR_Integer) 2))));
  MR_Word MaybeTimestamp_25 = ((MR_Word) ((MR_hl_field(0, Baggage_21, (MR_Integer) 4))));

  parse_tree__write_module_interface_files__write_interface_file_int1_int2_14_p_0(ProgressStream_12, ErrorStream_13, Globals_14, AddToHrmm_15, SourceFileName_23, SourceFileModuleName_24, MaybeTimestamp_25, ParseTreeModuleSrc_22, Succeeded_17, Specs_18, STATE_VARIABLE_HaveReadModuleMaps_0_26, STATE_VARIABLE_HaveReadModuleMaps_27);
}

void MR_CALL 
parse_tree__write_module_interface_files__write_interface_file_int1_int2_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word Globals_17,
  MR_Word AddToHrmm_18,
  MR_String SourceFileName_19,
  MR_Word SourceFileModuleName_20,
  MR_Word MaybeTimestamp_21,
  MR_Word ParseTreeModuleSrc0_22,
  MR_Word * Succeeded_23,
  MR_Word * Specs_24,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_59,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_60)
{
  MR_bool succeeded;
  MR_Word ModuleName_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_22, (MR_Integer) 0))));
  MR_Word IntParseTreeModuleSrc_28;
  MR_Word Baggage_29;
  MR_Word AugMakeIntUnit1_30;
  MR_Word GetErrors_31;
  MR_Word GetSpecs_32;
  MR_Word GetSpecsEffectivelyErrors_33;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_63_63;

  parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0(ParseTreeModuleSrc0_22, &IntParseTreeModuleSrc_28);
  parse_tree__grab_modules__grab_unqual_imported_modules_make_int_11_p_0(ProgressStream_15, Globals_17, SourceFileName_19, SourceFileModuleName_20, IntParseTreeModuleSrc_28, &Baggage_29, &AugMakeIntUnit1_30, STATE_VARIABLE_HaveReadModuleMaps_0_59, &STATE_VARIABLE_HaveReadModuleMaps_63_63);
  GetErrors_31 = ((MR_Word) ((MR_hl_field(0, Baggage_29, (MR_Integer) 7))));
  GetSpecs_32 = parse_tree__parse_error__get_read_module_specs_1_f_0(GetErrors_31);
  GetSpecsEffectivelyErrors_33 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_17, GetSpecs_32);
  succeeded = (GetSpecsEffectivelyErrors_33 == (MR_Integer) 0);
  if (succeeded)
    succeeded = parse_tree__parse_error__there_are_no_errors_1_p_0(GetErrors_31);
  if (succeeded)
  {
    MR_Word AugMakeIntUnit_34;
    MR_Word QualSpecs_35;
    MR_Word EffectiveGetQualSpecs_36;
    MR_Word Var_66;

    parse_tree__module_qual__module_qualify_aug_make_int_unit_5_p_0(Globals_17, AugMakeIntUnit1_30, &AugMakeIntUnit_34, (MR_Word) ((MR_Unsigned) 0U), &QualSpecs_35);
    Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), GetSpecs_32, QualSpecs_35);
    parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_17, Var_66, &EffectiveGetQualSpecs_36);
    if ((EffectiveGetQualSpecs_36 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ParseTreeInt1_37;
      MR_Word ParseTreeInt2_38;
      MR_Word GenerateSpecs_39;
      MR_String FileName1_41;
      MR_String TmpFileName1_42;
      MR_String FileName2_43;
      MR_String TmpFileName2_44;
      MR_Word OutputSucceeded1_45;
      MR_Word OutputSucceeded2_46;
      MR_Word TouchSucceeded_47;
      MR_Word Var_68;
      MR_Word Var_78;

      parse_tree__comp_unit_interface__generate_interfaces_int1_int2_6_p_0(Globals_17, AugMakeIntUnit_34, &ParseTreeInt1_37, &ParseTreeInt2_38, (MR_Word) ((MR_Unsigned) 0U), &GenerateSpecs_39);
      Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), EffectiveGetQualSpecs_36, GenerateSpecs_39);
      parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_17, Var_68, Specs_24);
      parse_tree__write_module_interface_files__construct_int_file_name_8_p_0(Globals_17, ModuleName_27, (MR_Integer) 1, (MR_String) "", &FileName1_41, &TmpFileName1_42);
      parse_tree__write_module_interface_files__construct_int_file_name_8_p_0(Globals_17, ModuleName_27, (MR_Integer) 2, (MR_String) "", &FileName2_43, &TmpFileName2_44);
      parse_tree__write_module_interface_files__actually_write_interface_file1_10_p_0(ProgressStream_15, ErrorStream_16, Globals_17, ParseTreeInt1_37, FileName1_41, TmpFileName1_42, MaybeTimestamp_21, &OutputSucceeded1_45);
      parse_tree__write_module_interface_files__actually_write_interface_file2_10_p_0(ProgressStream_15, ErrorStream_16, Globals_17, ParseTreeInt2_38, FileName2_43, TmpFileName2_44, MaybeTimestamp_21, &OutputSucceeded2_46);
      parse_tree__module_cmds__touch_module_ext_datestamp_7_p_0(Globals_17, ProgressStream_15, ModuleName_27, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[4])), &TouchSucceeded_47);
      Var_78 = libs__maybe_util__and_2_f_0(OutputSucceeded1_45, OutputSucceeded2_46);
      *Succeeded_23 = libs__maybe_util__and_2_f_0(Var_78, TouchSucceeded_47);
      switch (AddToHrmm_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Int1Map0_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_63_63, (MR_Integer) 3))));
            MR_Word Int2Map0_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_63_63, (MR_Integer) 4))));
            MR_Word ReadModuleErrors_51;
            MR_Word HRM1_52;
            MR_Word HRM2_53;
            MR_Word Int1Map_54;
            MR_Word Int2Map_55;
            MR_Word Var_79;
            MR_Word Var_81;
            MR_Word Var_165;
            MR_Word Var_166;
            MR_Word Var_167;
            MR_Word Var_170;
            MR_Word Var_171;
            MR_Word Var_172;

            Var_79 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0));
            Var_81 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0));
            {
              ReadModuleErrors_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ReadModuleErrors_51, 0) = ((MR_Box) (Var_79));
              MR_hl_field(0, ReadModuleErrors_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, ReadModuleErrors_51, 2) = ((MR_Box) (Var_81));
              MR_hl_field(0, ReadModuleErrors_51, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, ReadModuleErrors_51, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              HRM1_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, HRM1_52, 0) = ((MR_Box) (FileName1_41));
              MR_hl_field(0, HRM1_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, HRM1_52, 2) = ((MR_Box) (ParseTreeInt1_37));
              MR_hl_field(0, HRM1_52, 3) = ((MR_Box) (ReadModuleErrors_51));
            }
            {
              HRM2_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, HRM2_53, 0) = ((MR_Box) (FileName2_43));
              MR_hl_field(0, HRM2_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, HRM2_53, 2) = ((MR_Box) (ParseTreeInt2_38));
              MR_hl_field(0, HRM2_53, 3) = ((MR_Box) (ReadModuleErrors_51));
            }
            mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[2]), ((MR_Box) (ModuleName_27)), ((MR_Box) (HRM1_52)), Int1Map0_48, &Int1Map_54);
            mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[3]), ((MR_Box) (ModuleName_27)), ((MR_Box) (HRM2_53)), Int2Map0_49, &Int2Map_55);
            Var_165 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_63_63, (MR_Integer) 0))));
            Var_166 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_63_63, (MR_Integer) 1))));
            Var_167 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_63_63, (MR_Integer) 2))));
            Var_170 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_63_63, (MR_Integer) 5))));
            Var_171 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_63_63, (MR_Integer) 6))));
            Var_172 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_63_63, (MR_Integer) 7))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_HaveReadModuleMaps_60 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_165));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_166));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_167));
              MR_hl_field(0, base, 3) = ((MR_Box) (Int1Map_54));
              MR_hl_field(0, base, 4) = ((MR_Box) (Int2Map_55));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_170));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_171));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_172));
            }
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_HaveReadModuleMaps_60 = STATE_VARIABLE_HaveReadModuleMaps_63_63;
          break;
      }
    }
    else
    {
      parse_tree__write_module_interface_files__report_file_not_written_10_p_0(Globals_17, (MR_Word) ((MR_Unsigned) 0U), ModuleName_27, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[5])), (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[7])), (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[4])), EffectiveGetQualSpecs_36, Specs_24);
      *Succeeded_23 = (MR_Integer) 0;
      *STATE_VARIABLE_HaveReadModuleMaps_60 = STATE_VARIABLE_HaveReadModuleMaps_63_63;
    }
  }
  else
  {
    parse_tree__write_module_interface_files__report_file_not_written_10_p_0(Globals_17, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[9])), ModuleName_27, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[5])), (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[7])), (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[4])), GetSpecs_32, Specs_24);
    *Succeeded_23 = (MR_Integer) 0;
    *STATE_VARIABLE_HaveReadModuleMaps_60 = STATE_VARIABLE_HaveReadModuleMaps_63_63;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__actually_write_interface_file2_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Globals_13,
  MR_Word ParseTreeInt2_14,
  MR_String FileName_15,
  MR_String TmpFileName_16,
  MR_Word MaybeTimestamp_17,
  MR_Word * Succeeded_18)
{
  MR_bool succeeded;
  MR_Word ModuleName_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_14, (MR_Integer) 0))));
  MR_Word NoLineNumGlobals_21;
  MR_Word MaybeVersionNumbers_22;
  MR_Word ParseTreeInt2V_23;
  MR_Word OutputSucceeded_24;
  MR_Word UpdateSucceeded_25;
  MR_Word NoLineNumGlobals0_56;
  MR_Word GenerateVersionNumbers_93;
  MR_Word DisableVersionNumbers_94;
  MR_Word Var_43;
  MR_Word Var_44;
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

  libs__globals__set_option_4_p_0((MR_Integer) 175, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[3])), Globals_13, &NoLineNumGlobals0_56);
  libs__globals__set_option_4_p_0((MR_Integer) 176, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[3])), NoLineNumGlobals0_56, &NoLineNumGlobals_21);
  libs__globals__lookup_bool_option_3_p_0(NoLineNumGlobals_21, (MR_Integer) 155, &GenerateVersionNumbers_93);
  libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(&DisableVersionNumbers_94);
  succeeded = (GenerateVersionNumbers_93 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DisableVersionNumbers_94 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word ModuleName_64 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_14, (MR_Integer) 0))));
    MR_Word Timestamp_65;
    MR_Word HaveReadInt2_66;
    MR_Word MaybeOldParseTreeInt2_71;
    MR_Word VersionNumbers_74;

    if ((MaybeTimestamp_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_module_interface_files.insist_on_timestamp\'/2", (MR_String) "timestamp not read with \140--smart-recompilation\'");
        return;
      }
    else
      Timestamp_65 = ((MR_Word) ((MR_hl_field(1, MaybeTimestamp_17, (MR_Integer) 0))));
    parse_tree__read_modules__read_module_int2_10_p_0(ProgressStream_11, NoLineNumGlobals_21, (MR_Integer) 2, (MR_Integer) 0, (MR_Integer) 1, ModuleName_64, (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[5]), &HaveReadInt2_66);
    if (((MR_tag((MR_Word) HaveReadInt2_66)) == (MR_Integer) 1))
      MaybeOldParseTreeInt2_71 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word OldParseTreeInt2_69 = ((MR_Word) ((MR_hl_field(0, HaveReadInt2_66, (MR_Integer) 2))));
      MR_Word OldModuleErrors_70 = ((MR_Word) ((MR_hl_field(0, HaveReadInt2_66, (MR_Integer) 3))));

      succeeded = parse_tree__parse_error__there_are_no_errors_1_p_0(OldModuleErrors_70);
      if (succeeded)
        {
          MaybeOldParseTreeInt2_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeOldParseTreeInt2_71, 0) = ((MR_Box) (OldParseTreeInt2_69));
        }
      else
        MaybeOldParseTreeInt2_71 = (MR_Word) ((MR_Unsigned) 0U);
    }
    recompilation__version__compute_version_numbers_int2_4_p_0(MaybeOldParseTreeInt2_71, Timestamp_65, ParseTreeInt2_14, &VersionNumbers_74);
    {
      MaybeVersionNumbers_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeVersionNumbers_22, 0) = ((MR_Box) (VersionNumbers_74));
    }
  }
  else
    MaybeVersionNumbers_22 = (MR_Word) ((MR_Unsigned) 0U);
  Var_43 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_14, (MR_Integer) 0))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_14, (MR_Integer) 1))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_14, (MR_Integer) 3))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_14, (MR_Integer) 4))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_14, (MR_Integer) 5))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_14, (MR_Integer) 6))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_14, (MR_Integer) 7))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_14, (MR_Integer) 8))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_14, (MR_Integer) 9))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_14, (MR_Integer) 10))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_14, (MR_Integer) 11))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_14, (MR_Integer) 12))));
  {
    ParseTreeInt2V_23 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ParseTreeInt2V_23, 0) = ((MR_Box) (Var_43));
    MR_hl_field(0, ParseTreeInt2V_23, 1) = ((MR_Box) (Var_44));
    MR_hl_field(0, ParseTreeInt2V_23, 2) = ((MR_Box) (MaybeVersionNumbers_22));
    MR_hl_field(0, ParseTreeInt2V_23, 3) = ((MR_Box) (Var_46));
    MR_hl_field(0, ParseTreeInt2V_23, 4) = ((MR_Box) (Var_47));
    MR_hl_field(0, ParseTreeInt2V_23, 5) = ((MR_Box) (Var_48));
    MR_hl_field(0, ParseTreeInt2V_23, 6) = ((MR_Box) (Var_49));
    MR_hl_field(0, ParseTreeInt2V_23, 7) = ((MR_Box) (Var_50));
    MR_hl_field(0, ParseTreeInt2V_23, 8) = ((MR_Box) (Var_51));
    MR_hl_field(0, ParseTreeInt2V_23, 9) = ((MR_Box) (Var_52));
    MR_hl_field(0, ParseTreeInt2V_23, 10) = ((MR_Box) (Var_53));
    MR_hl_field(0, ParseTreeInt2V_23, 11) = ((MR_Box) (Var_54));
    MR_hl_field(0, ParseTreeInt2V_23, 12) = ((MR_Box) (Var_55));
  }
  parse_tree__parse_tree_out__output_parse_tree_int2_8_p_0(ProgressStream_11, ErrorStream_12, NoLineNumGlobals_21, TmpFileName_16, ParseTreeInt2V_23, &OutputSucceeded_24);
  parse_tree__module_cmds__copy_dot_tmp_to_base_file_report_any_error_7_p_0(Globals_13, (MR_String) ".int2", ModuleName_20, FileName_15, &UpdateSucceeded_25);
  *Succeeded_18 = libs__maybe_util__and_2_f_0(OutputSucceeded_24, UpdateSucceeded_25);
}

static void MR_CALL 
parse_tree__write_module_interface_files__actually_write_interface_file1_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Globals_13,
  MR_Word ParseTreeInt1_14,
  MR_String FileName_15,
  MR_String TmpFileName_16,
  MR_Word MaybeTimestamp_17,
  MR_Word * Succeeded_18)
{
  MR_Word ModuleName_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_14, (MR_Integer) 0))));
  MR_Word NoLineNumGlobals_21;
  MR_Word MaybeVersionNumbers_22;
  MR_Word ParseTreeInt1V_23;
  MR_Word OutputSucceeded_24;
  MR_Word UpdateSucceeded_25;
  MR_Word NoLineNumGlobals0_68;
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
  MR_Word Var_67;

  libs__globals__set_option_4_p_0((MR_Integer) 175, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[3])), Globals_13, &NoLineNumGlobals0_68);
  libs__globals__set_option_4_p_0((MR_Integer) 176, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[3])), NoLineNumGlobals0_68, &NoLineNumGlobals_21);
  parse_tree__write_module_interface_files__maybe_read_old_int1_and_compare_for_smart_recomp_7_p_0(ProgressStream_11, NoLineNumGlobals_21, ParseTreeInt1_14, MaybeTimestamp_17, &MaybeVersionNumbers_22);
  Var_49 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_14, (MR_Integer) 0))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_14, (MR_Integer) 1))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_14, (MR_Integer) 3))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_14, (MR_Integer) 4))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_14, (MR_Integer) 5))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_14, (MR_Integer) 6))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_14, (MR_Integer) 7))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_14, (MR_Integer) 8))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_14, (MR_Integer) 9))));
  Var_59 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_14, (MR_Integer) 10))));
  Var_60 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_14, (MR_Integer) 11))));
  Var_61 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_14, (MR_Integer) 12))));
  Var_62 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_14, (MR_Integer) 13))));
  Var_63 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_14, (MR_Integer) 14))));
  Var_64 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_14, (MR_Integer) 15))));
  Var_65 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_14, (MR_Integer) 16))));
  Var_66 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_14, (MR_Integer) 17))));
  Var_67 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_14, (MR_Integer) 18))));
  {
    ParseTreeInt1V_23 = (MR_Word) MR_new_object(MR_Word, (19 * sizeof(MR_Word)), NULL, NULL);
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
    MR_hl_field(0, ParseTreeInt1V_23, 18) = ((MR_Box) (Var_67));
  }
  parse_tree__parse_tree_out__output_parse_tree_int1_8_p_0(ProgressStream_11, ErrorStream_12, NoLineNumGlobals_21, TmpFileName_16, ParseTreeInt1V_23, &OutputSucceeded_24);
  parse_tree__module_cmds__copy_dot_tmp_to_base_file_report_any_error_7_p_0(Globals_13, (MR_String) ".int", ModuleName_20, FileName_15, &UpdateSucceeded_25);
  *Succeeded_18 = libs__maybe_util__and_2_f_0(OutputSucceeded_24, UpdateSucceeded_25);
}

static void MR_CALL 
parse_tree__write_module_interface_files__maybe_read_old_int1_and_compare_for_smart_recomp_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word NoLineNumGlobals_9,
  MR_Word ParseTreeInt1_10,
  MR_Word MaybeTimestamp_11,
  MR_Word * MaybeVersionNumbers_12)
{
  MR_bool succeeded;
  MR_Word GenerateVersionNumbers_53;
  MR_Word DisableVersionNumbers_54;

  libs__globals__lookup_bool_option_3_p_0(NoLineNumGlobals_9, (MR_Integer) 155, &GenerateVersionNumbers_53);
  libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(&DisableVersionNumbers_54);
  succeeded = (GenerateVersionNumbers_53 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DisableVersionNumbers_54 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word ModuleName_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_10, (MR_Integer) 0))));
    MR_Word Timestamp_16;
    MR_Word HaveReadInt1_17;
    MR_Word MaybeOldParseTreeInt1_22;
    MR_Word VersionNumbers_25;

    if ((MaybeTimestamp_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_module_interface_files.insist_on_timestamp\'/2", (MR_String) "timestamp not read with \140--smart-recompilation\'");
        return;
      }
    else
      Timestamp_16 = ((MR_Word) ((MR_hl_field(1, MaybeTimestamp_11, (MR_Integer) 0))));
    parse_tree__read_modules__read_module_int1_10_p_0(ProgressStream_8, NoLineNumGlobals_9, (MR_Integer) 2, (MR_Integer) 0, (MR_Integer) 1, ModuleName_15, (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[5]), &HaveReadInt1_17);
    if (((MR_tag((MR_Word) HaveReadInt1_17)) == (MR_Integer) 1))
      MaybeOldParseTreeInt1_22 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word OldParseTreeInt1_20 = ((MR_Word) ((MR_hl_field(0, HaveReadInt1_17, (MR_Integer) 2))));
      MR_Word OldModuleErrors_21 = ((MR_Word) ((MR_hl_field(0, HaveReadInt1_17, (MR_Integer) 3))));

      succeeded = parse_tree__parse_error__there_are_no_errors_1_p_0(OldModuleErrors_21);
      if (succeeded)
        {
          MaybeOldParseTreeInt1_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeOldParseTreeInt1_22, 0) = ((MR_Box) (OldParseTreeInt1_20));
        }
      else
        MaybeOldParseTreeInt1_22 = (MR_Word) ((MR_Unsigned) 0U);
    }
    recompilation__version__compute_version_numbers_int1_4_p_0(MaybeOldParseTreeInt1_22, Timestamp_16, ParseTreeInt1_10, &VersionNumbers_25);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeVersionNumbers_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (VersionNumbers_25));
    }
  }
  else
    *MaybeVersionNumbers_12 = (MR_Word) ((MR_Unsigned) 0U);
}

void MR_CALL 
parse_tree__write_module_interface_files__write_private_interface_file_int0_burdened_module_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word Globals_14,
  MR_Word AddToHrmm_15,
  MR_Word BurdenedModule_16,
  MR_Word * Succeeded_17,
  MR_Word * Specs_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_26,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_27)
{
  MR_Word Baggage_21 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_16, (MR_Integer) 0))));
  MR_Word ParseTreeModuleSrc_22 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_16, (MR_Integer) 1))));
  MR_String SourceFileName_23 = ((MR_String) ((MR_hl_field(0, Baggage_21, (MR_Integer) 0))));
  MR_Word SourceFileModuleName_24 = ((MR_Word) ((MR_hl_field(0, Baggage_21, (MR_Integer) 2))));
  MR_Word MaybeTimestamp_25 = ((MR_Word) ((MR_hl_field(0, Baggage_21, (MR_Integer) 4))));

  parse_tree__write_module_interface_files__write_private_interface_file_int0_14_p_0(ProgressStream_12, ErrorStream_13, Globals_14, AddToHrmm_15, SourceFileName_23, SourceFileModuleName_24, MaybeTimestamp_25, ParseTreeModuleSrc_22, Succeeded_17, Specs_18, STATE_VARIABLE_HaveReadModuleMaps_0_26, STATE_VARIABLE_HaveReadModuleMaps_27);
}

void MR_CALL 
parse_tree__write_module_interface_files__write_private_interface_file_int0_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word ErrorStream_16,
  MR_Word Globals_17,
  MR_Word AddToHrmm_18,
  MR_String SourceFileName_19,
  MR_Word SourceFileModuleName_20,
  MR_Word MaybeTimestamp_21,
  MR_Word ParseTreeModuleSrc0_22,
  MR_Word * Succeeded_23,
  MR_Word * Specs_24,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_51,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_52)
{
  MR_bool succeeded;
  MR_Word ModuleName_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_22, (MR_Integer) 0))));
  MR_Word Baggage_28;
  MR_Word AugMakeIntUnit1_29;
  MR_Word GetErrors_30;
  MR_Word GetSpecs_31;
  MR_Word GetSpecsEffectivelyErrors_32;
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_55_55;

  parse_tree__grab_modules__grab_unqual_imported_modules_make_int_11_p_0(ProgressStream_15, Globals_17, SourceFileName_19, SourceFileModuleName_20, ParseTreeModuleSrc0_22, &Baggage_28, &AugMakeIntUnit1_29, STATE_VARIABLE_HaveReadModuleMaps_0_51, &STATE_VARIABLE_HaveReadModuleMaps_55_55);
  GetErrors_30 = ((MR_Word) ((MR_hl_field(0, Baggage_28, (MR_Integer) 7))));
  GetSpecs_31 = parse_tree__parse_error__get_read_module_specs_1_f_0(GetErrors_30);
  GetSpecsEffectivelyErrors_32 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_17, GetSpecs_31);
  succeeded = (GetSpecsEffectivelyErrors_32 == (MR_Integer) 0);
  if (succeeded)
    succeeded = parse_tree__parse_error__there_are_no_errors_1_p_0(GetErrors_30);
  if (succeeded)
  {
    MR_Word AugMakeIntUnit_33;
    MR_Word QualSpecs_34;
    MR_Word EffectiveGetQualSpecs_35;
    MR_Word Var_58;

    parse_tree__module_qual__module_qualify_aug_make_int_unit_5_p_0(Globals_17, AugMakeIntUnit1_29, &AugMakeIntUnit_33, (MR_Word) ((MR_Unsigned) 0U), &QualSpecs_34);
    Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), GetSpecs_31, QualSpecs_34);
    parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_17, Var_58, &EffectiveGetQualSpecs_35);
    if ((EffectiveGetQualSpecs_35 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ParseTreeInt0_36;
      MR_Word GenerateSpecs_37;
      MR_String FileName_39;
      MR_String TmpFileName_40;
      MR_Word OutputSucceeded_41;
      MR_Word TouchSucceeded_42;
      MR_Word Var_60;

      parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0(AugMakeIntUnit_33, &ParseTreeInt0_36, (MR_Word) ((MR_Unsigned) 0U), &GenerateSpecs_37);
      Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), EffectiveGetQualSpecs_35, GenerateSpecs_37);
      parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_17, Var_60, Specs_24);
      parse_tree__write_module_interface_files__construct_int_file_name_8_p_0(Globals_17, ModuleName_27, (MR_Integer) 0, (MR_String) "", &FileName_39, &TmpFileName_40);
      parse_tree__write_module_interface_files__actually_write_interface_file0_10_p_0(ProgressStream_15, ErrorStream_16, Globals_17, ParseTreeInt0_36, FileName_39, TmpFileName_40, MaybeTimestamp_21, &OutputSucceeded_41);
      parse_tree__module_cmds__touch_module_ext_datestamp_7_p_0(Globals_17, ProgressStream_15, ModuleName_27, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[2])), &TouchSucceeded_42);
      *Succeeded_23 = libs__maybe_util__and_2_f_0(OutputSucceeded_41, TouchSucceeded_42);
      switch (AddToHrmm_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Int0Map0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_55_55, (MR_Integer) 2))));
            MR_Word ReadModuleErrors_45;
            MR_Word HRM_46;
            MR_Word Int0Map_47;
            MR_Word Var_67;
            MR_Word Var_69;
            MR_Word Var_141;
            MR_Word Var_142;
            MR_Word Var_144;
            MR_Word Var_145;
            MR_Word Var_146;
            MR_Word Var_147;
            MR_Word Var_148;

            Var_67 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0));
            Var_69 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0));
            {
              ReadModuleErrors_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ReadModuleErrors_45, 0) = ((MR_Box) (Var_67));
              MR_hl_field(0, ReadModuleErrors_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, ReadModuleErrors_45, 2) = ((MR_Box) (Var_69));
              MR_hl_field(0, ReadModuleErrors_45, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, ReadModuleErrors_45, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              HRM_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, HRM_46, 0) = ((MR_Box) (FileName_39));
              MR_hl_field(0, HRM_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, HRM_46, 2) = ((MR_Box) (ParseTreeInt0_36));
              MR_hl_field(0, HRM_46, 3) = ((MR_Box) (ReadModuleErrors_45));
            }
            mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[1]), ((MR_Box) (ModuleName_27)), ((MR_Box) (HRM_46)), Int0Map0_43, &Int0Map_47);
            Var_141 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_55_55, (MR_Integer) 0))));
            Var_142 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_55_55, (MR_Integer) 1))));
            Var_144 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_55_55, (MR_Integer) 3))));
            Var_145 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_55_55, (MR_Integer) 4))));
            Var_146 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_55_55, (MR_Integer) 5))));
            Var_147 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_55_55, (MR_Integer) 6))));
            Var_148 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_55_55, (MR_Integer) 7))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_HaveReadModuleMaps_52 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_141));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_142));
              MR_hl_field(0, base, 2) = ((MR_Box) (Int0Map_47));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_144));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_145));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_146));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_147));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_148));
            }
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_HaveReadModuleMaps_52 = STATE_VARIABLE_HaveReadModuleMaps_55_55;
          break;
      }
    }
    else
    {
      parse_tree__write_module_interface_files__report_file_not_written_10_p_0(Globals_17, (MR_Word) ((MR_Unsigned) 0U), ModuleName_27, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[3])), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[2])), EffectiveGetQualSpecs_35, Specs_24);
      *Succeeded_23 = (MR_Integer) 0;
      *STATE_VARIABLE_HaveReadModuleMaps_52 = STATE_VARIABLE_HaveReadModuleMaps_55_55;
    }
  }
  else
  {
    parse_tree__write_module_interface_files__report_file_not_written_10_p_0(Globals_17, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[7])), ModuleName_27, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[3])), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[2])), GetSpecs_31, Specs_24);
    *Succeeded_23 = (MR_Integer) 0;
    *STATE_VARIABLE_HaveReadModuleMaps_52 = STATE_VARIABLE_HaveReadModuleMaps_55_55;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__actually_write_interface_file0_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Globals_13,
  MR_Word ParseTreeInt0_14,
  MR_String FileName_15,
  MR_String TmpFileName_16,
  MR_Word MaybeTimestamp_17,
  MR_Word * Succeeded_18)
{
  MR_Word ModuleName_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 0))));
  MR_Word NoLineNumGlobals_21;
  MR_Word MaybeVersionNumbers_22;
  MR_Word ParseTreeInt0V_23;
  MR_Word OutputSucceeded_24;
  MR_Word UpdateSucceeded_25;
  MR_Word NoLineNumGlobals0_78;
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
  MR_Word Var_76;
  MR_Word Var_77;

  libs__globals__set_option_4_p_0((MR_Integer) 175, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[3])), Globals_13, &NoLineNumGlobals0_78);
  libs__globals__set_option_4_p_0((MR_Integer) 176, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[3])), NoLineNumGlobals0_78, &NoLineNumGlobals_21);
  parse_tree__write_module_interface_files__maybe_read_old_int0_and_compare_for_smart_recomp_7_p_0(ProgressStream_11, NoLineNumGlobals_21, ParseTreeInt0_14, MaybeTimestamp_17, &MaybeVersionNumbers_22);
  Var_54 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 0))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 1))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 3))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 4))));
  Var_59 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 5))));
  Var_60 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 6))));
  Var_61 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 7))));
  Var_62 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 8))));
  Var_63 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 9))));
  Var_64 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 10))));
  Var_65 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 11))));
  Var_66 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 12))));
  Var_67 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 13))));
  Var_68 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 14))));
  Var_69 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 15))));
  Var_70 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 16))));
  Var_71 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 17))));
  Var_72 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 18))));
  Var_73 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 19))));
  Var_74 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 20))));
  Var_75 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 21))));
  Var_76 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 22))));
  Var_77 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_14, (MR_Integer) 23))));
  {
    ParseTreeInt0V_23 = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ParseTreeInt0V_23, 0) = ((MR_Box) (Var_54));
    MR_hl_field(0, ParseTreeInt0V_23, 1) = ((MR_Box) (Var_55));
    MR_hl_field(0, ParseTreeInt0V_23, 2) = ((MR_Box) (MaybeVersionNumbers_22));
    MR_hl_field(0, ParseTreeInt0V_23, 3) = ((MR_Box) (Var_57));
    MR_hl_field(0, ParseTreeInt0V_23, 4) = ((MR_Box) (Var_58));
    MR_hl_field(0, ParseTreeInt0V_23, 5) = ((MR_Box) (Var_59));
    MR_hl_field(0, ParseTreeInt0V_23, 6) = ((MR_Box) (Var_60));
    MR_hl_field(0, ParseTreeInt0V_23, 7) = ((MR_Box) (Var_61));
    MR_hl_field(0, ParseTreeInt0V_23, 8) = ((MR_Box) (Var_62));
    MR_hl_field(0, ParseTreeInt0V_23, 9) = ((MR_Box) (Var_63));
    MR_hl_field(0, ParseTreeInt0V_23, 10) = ((MR_Box) (Var_64));
    MR_hl_field(0, ParseTreeInt0V_23, 11) = ((MR_Box) (Var_65));
    MR_hl_field(0, ParseTreeInt0V_23, 12) = ((MR_Box) (Var_66));
    MR_hl_field(0, ParseTreeInt0V_23, 13) = ((MR_Box) (Var_67));
    MR_hl_field(0, ParseTreeInt0V_23, 14) = ((MR_Box) (Var_68));
    MR_hl_field(0, ParseTreeInt0V_23, 15) = ((MR_Box) (Var_69));
    MR_hl_field(0, ParseTreeInt0V_23, 16) = ((MR_Box) (Var_70));
    MR_hl_field(0, ParseTreeInt0V_23, 17) = ((MR_Box) (Var_71));
    MR_hl_field(0, ParseTreeInt0V_23, 18) = ((MR_Box) (Var_72));
    MR_hl_field(0, ParseTreeInt0V_23, 19) = ((MR_Box) (Var_73));
    MR_hl_field(0, ParseTreeInt0V_23, 20) = ((MR_Box) (Var_74));
    MR_hl_field(0, ParseTreeInt0V_23, 21) = ((MR_Box) (Var_75));
    MR_hl_field(0, ParseTreeInt0V_23, 22) = ((MR_Box) (Var_76));
    MR_hl_field(0, ParseTreeInt0V_23, 23) = ((MR_Box) (Var_77));
  }
  parse_tree__parse_tree_out__output_parse_tree_int0_8_p_0(ProgressStream_11, ErrorStream_12, NoLineNumGlobals_21, TmpFileName_16, ParseTreeInt0V_23, &OutputSucceeded_24);
  parse_tree__module_cmds__copy_dot_tmp_to_base_file_report_any_error_7_p_0(Globals_13, (MR_String) ".int0", ModuleName_20, FileName_15, &UpdateSucceeded_25);
  *Succeeded_18 = libs__maybe_util__and_2_f_0(OutputSucceeded_24, UpdateSucceeded_25);
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
  MR_Word GenerateVersionNumbers_58;
  MR_Word DisableVersionNumbers_59;

  libs__globals__lookup_bool_option_3_p_0(NoLineNumGlobals_9, (MR_Integer) 155, &GenerateVersionNumbers_58);
  libs__globals__io_get_disable_generate_item_version_numbers_3_p_0(&DisableVersionNumbers_59);
  succeeded = (GenerateVersionNumbers_58 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DisableVersionNumbers_59 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word ModuleName_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_10, (MR_Integer) 0))));
    MR_Word Timestamp_16;
    MR_Word HaveReadInt0_17;
    MR_Word MaybeOldParseTreeInt0_22;
    MR_Word VersionNumbers_25;

    if ((MaybeTimestamp_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_module_interface_files.insist_on_timestamp\'/2", (MR_String) "timestamp not read with \140--smart-recompilation\'");
        return;
      }
    else
      Timestamp_16 = ((MR_Word) ((MR_hl_field(1, MaybeTimestamp_11, (MR_Integer) 0))));
    parse_tree__read_modules__read_module_int0_10_p_0(ProgressStream_8, NoLineNumGlobals_9, (MR_Integer) 2, (MR_Integer) 0, (MR_Integer) 1, ModuleName_15, (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[5]), &HaveReadInt0_17);
    if (((MR_tag((MR_Word) HaveReadInt0_17)) == (MR_Integer) 1))
      MaybeOldParseTreeInt0_22 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word OldParseTreeInt0_20 = ((MR_Word) ((MR_hl_field(0, HaveReadInt0_17, (MR_Integer) 2))));
      MR_Word OldModuleErrors_21 = ((MR_Word) ((MR_hl_field(0, HaveReadInt0_17, (MR_Integer) 3))));

      succeeded = parse_tree__parse_error__there_are_no_errors_1_p_0(OldModuleErrors_21);
      if (succeeded)
        {
          MaybeOldParseTreeInt0_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeOldParseTreeInt0_22, 0) = ((MR_Box) (OldParseTreeInt0_20));
        }
      else
        MaybeOldParseTreeInt0_22 = (MR_Word) ((MR_Unsigned) 0U);
    }
    recompilation__version__compute_version_numbers_int0_4_p_0(MaybeOldParseTreeInt0_22, Timestamp_16, ParseTreeInt0_10, &VersionNumbers_25);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeVersionNumbers_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (VersionNumbers_25));
    }
  }
  else
    *MaybeVersionNumbers_12 = (MR_Word) ((MR_Unsigned) 0U);
}

void MR_CALL 
parse_tree__write_module_interface_files__write_short_interface_file_int3_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word Globals_14,
  MR_Word AddToHrmm_15,
  MR_Word ParseTreeModuleSrc_16,
  MR_Word * Succeeded_17,
  MR_Word * Specs_18,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_36,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_37)
{
  MR_Word ParseTreeInt3_21;
  MR_Word Specs0_22;
  MR_Word Specs1_23;
  MR_Word EffectivelyErrors_24;
  MR_Word ModuleName_25;

  parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0(Globals_14, ParseTreeModuleSrc_16, &ParseTreeInt3_21, (MR_Word) ((MR_Unsigned) 0U), &Specs0_22);
  parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_14, Specs0_22, &Specs1_23);
  EffectivelyErrors_24 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_14, Specs1_23);
  ModuleName_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_16, (MR_Integer) 0))));
  switch (EffectivelyErrors_24) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String FileName_27;
        MR_String TmpFileName_28;
        MR_Word OutputSucceeded_29;
        MR_Word TouchSucceeded_30;

        parse_tree__write_module_interface_files__construct_int_file_name_8_p_0(Globals_14, ModuleName_25, (MR_Integer) 3, (MR_String) "", &FileName_27, &TmpFileName_28);
        parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_51_95_95_91_55_93_95_48_10_p_0(ProgressStream_12, ErrorStream_13, Globals_14, ParseTreeInt3_21, FileName_27, TmpFileName_28, &OutputSucceeded_29);
        parse_tree__module_cmds__touch_module_ext_datestamp_7_p_0(Globals_14, ProgressStream_12, ModuleName_25, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[0])), &TouchSucceeded_30);
        *Succeeded_17 = libs__maybe_util__and_2_f_0(OutputSucceeded_29, TouchSucceeded_30);
        *Specs_18 = Specs1_23;
        switch (AddToHrmm_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Int3Map0_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_36, (MR_Integer) 5))));
              MR_Word ReadModuleErrors_33;
              MR_Word HRM_34;
              MR_Word Int3Map_35;
              MR_Word Var_48;
              MR_Word Var_50;
              MR_Word Var_103;
              MR_Word Var_104;
              MR_Word Var_105;
              MR_Word Var_106;
              MR_Word Var_107;
              MR_Word Var_109;
              MR_Word Var_110;

              Var_48 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0));
              Var_50 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_nonfatal_read_module_error_0));
              {
                ReadModuleErrors_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ReadModuleErrors_33, 0) = ((MR_Box) (Var_48));
                MR_hl_field(0, ReadModuleErrors_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, ReadModuleErrors_33, 2) = ((MR_Box) (Var_50));
                MR_hl_field(0, ReadModuleErrors_33, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, ReadModuleErrors_33, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                HRM_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, HRM_34, 0) = ((MR_Box) (FileName_27));
                MR_hl_field(0, HRM_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, HRM_34, 2) = ((MR_Box) (ParseTreeInt3_21));
                MR_hl_field(0, HRM_34, 3) = ((MR_Box) (ReadModuleErrors_33));
              }
              mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[0]), ((MR_Box) (ModuleName_25)), ((MR_Box) (HRM_34)), Int3Map0_31, &Int3Map_35);
              Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_36, (MR_Integer) 0))));
              Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_36, (MR_Integer) 1))));
              Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_36, (MR_Integer) 2))));
              Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_36, (MR_Integer) 3))));
              Var_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_36, (MR_Integer) 4))));
              Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_36, (MR_Integer) 6))));
              Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveReadModuleMaps_0_36, (MR_Integer) 7))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_HaveReadModuleMaps_37 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_103));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_104));
                MR_hl_field(0, base, 2) = ((MR_Box) (Var_105));
                MR_hl_field(0, base, 3) = ((MR_Box) (Var_106));
                MR_hl_field(0, base, 4) = ((MR_Box) (Var_107));
                MR_hl_field(0, base, 5) = ((MR_Box) (Int3Map_35));
                MR_hl_field(0, base, 6) = ((MR_Box) (Var_109));
                MR_hl_field(0, base, 7) = ((MR_Box) (Var_110));
              }
            }
            break;
          case (MR_Integer) 0:
            *STATE_VARIABLE_HaveReadModuleMaps_37 = STATE_VARIABLE_HaveReadModuleMaps_0_36;
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        parse_tree__write_module_interface_files__report_file_not_written_10_p_0(Globals_14, (MR_Word) ((MR_Unsigned) 0U), ModuleName_25, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[1])), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[0])), Specs1_23, Specs_18);
        *Succeeded_17 = (MR_Integer) 0;
        *STATE_VARIABLE_HaveReadModuleMaps_37 = STATE_VARIABLE_HaveReadModuleMaps_0_36;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_51_95_95_91_55_93_95_48_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Globals_13,
  MR_Word ParseTreeInt3_14,
  MR_String FileName_15,
  MR_String TmpFileName_16,
  MR_Word * Succeeded_18)
{
  MR_Word ModuleName_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_14, (MR_Integer) 0))));
  MR_Word NoLineNumGlobals_21;
  MR_Word OutputSucceeded_22;
  MR_Word UpdateSucceeded_23;
  MR_Word NoLineNumGlobals0_37;

  libs__globals__set_option_4_p_0((MR_Integer) 175, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[3])), Globals_13, &NoLineNumGlobals0_37);
  libs__globals__set_option_4_p_0((MR_Integer) 176, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[3])), NoLineNumGlobals0_37, &NoLineNumGlobals_21);
  parse_tree__parse_tree_out__output_parse_tree_int3_8_p_0(ProgressStream_11, ErrorStream_12, NoLineNumGlobals_21, TmpFileName_16, ParseTreeInt3_14, &OutputSucceeded_22);
  parse_tree__module_cmds__copy_dot_tmp_to_base_file_report_any_error_7_p_0(Globals_13, (MR_String) ".int3", ModuleName_20, FileName_15, &UpdateSucceeded_23);
  *Succeeded_18 = libs__maybe_util__and_2_f_0(OutputSucceeded_22, UpdateSucceeded_23);
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
  MR_String IntAFileName_20;
  MR_String DateFileName_21;
  MR_Word NotWrittenPieces_22;
  MR_Word ToRemoveFileNames_23;
  MR_String ModuleNameStr_26;
  MR_Word InvisPiece_27;
  MR_Word NotWrittenSpec_28;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word _RemoveResults_29;
  MR_Box conv1_STATE_VARIABLE_IO_31;

  parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_module_interface_files.report_file_not_written\'/10", ExtA_14, ModuleName_13, &IntAFileName_20);
  parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_module_interface_files.report_file_not_written\'/10", ExtDate_16, ModuleName_13, &DateFileName_21);
  if ((MaybeExtB_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_34;
    MR_Word Var_41;

    {
      Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_34, 1) = ((MR_Box) (IntAFileName_20));
    }
    {
      NotWrittenPieces_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, NotWrittenPieces_22, 0) = ((MR_Box) (Var_34));
      MR_hl_field(1, NotWrittenPieces_22, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[12])));
    }
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (DateFileName_21));
      MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ToRemoveFileNames_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ToRemoveFileNames_23, 0) = ((MR_Box) (IntAFileName_20));
      MR_hl_field(1, ToRemoveFileNames_23, 1) = ((MR_Box) (Var_41));
    }
  }
  else
  {
    MR_Word ExtB_24 = ((MR_Word) ((MR_hl_field(1, MaybeExtB_15, (MR_Integer) 0))));
    MR_String IntBFileName_25;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_56;
    MR_Word Var_57;

    parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_module_interface_files.report_file_not_written\'/10", ExtB_24, ModuleName_13, &IntBFileName_25);
    {
      Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_44, 1) = ((MR_Box) (IntAFileName_20));
    }
    {
      Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_49, 1) = ((MR_Box) (IntBFileName_25));
    }
    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(1, Var_48, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[12])));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__write_module_interface_files_scalar_common_1[13])));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
    }
    {
      NotWrittenPieces_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, NotWrittenPieces_22, 0) = ((MR_Box) (Var_44));
      MR_hl_field(1, NotWrittenPieces_22, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (DateFileName_21));
      MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (IntBFileName_25));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_57));
    }
    {
      ToRemoveFileNames_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ToRemoveFileNames_23, 0) = ((MR_Box) (IntAFileName_20));
      MR_hl_field(1, ToRemoveFileNames_23, 1) = ((MR_Box) (Var_56));
    }
  }
  ModuleNameStr_26 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_13);
  {
    InvisPiece_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, InvisPiece_27, 0) = ((MR_Box) ((MR_Unsigned) 36U));
    MR_hl_field(3, InvisPiece_27, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, InvisPiece_27, 2) = ((MR_Box) (ModuleNameStr_26));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (InvisPiece_27));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (PrefixPieces_12));
  }
  Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, NotWrittenPieces_22);
  {
    NotWrittenSpec_28 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, NotWrittenSpec_28, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_module_interface_files.report_file_not_written\'/10"));
    MR_hl_field(2, NotWrittenSpec_28, 1) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(2, NotWrittenSpec_28, 2) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(2, NotWrittenSpec_28, 3) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Specs_18 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (NotWrittenSpec_28));
    MR_hl_field(1, base, 1) = ((MR_Box) (Specs0_17));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_res_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_4[0]), ToRemoveFileNames_23, &_RemoveResults_29, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_31);
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
  MR_Word Ext_17;
  MR_String OutputFileName0_18;
  MR_String _ExtStr_16;

  parse_tree__file_kind__int_file_kind_to_extension_3_p_0(IntFileKind_11, &_ExtStr_16, &Ext_17);
  parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_module_interface_files.construct_int_file_name\'/8", Ext_17, ModuleName_10, &OutputFileName0_18);
  *OutputFileName_13 = mercury__string__f_43_43_2_f_0(OutputFileName0_18, ExtraSuffix_12);
  *TmpOutputFileName_14 = mercury__string__f_43_43_2_f_0(*OutputFileName_13, (MR_String) ".tmp");
}

static MR_bool MR_CALL 
parse_tree__write_module_interface_files____Unify____maybe_add_to_hrmm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_module_interface_files____Unify____maybe_add_to_hrmm_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_add_to_hrmm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_module_interface_files____Compare____maybe_add_to_hrmm_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

	MR_register_type_ctor_info(&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_maybe_add_to_hrmm_0);
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
