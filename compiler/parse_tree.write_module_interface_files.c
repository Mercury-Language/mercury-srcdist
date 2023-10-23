/*
** Automatically generated from `write_module_interface_files.m'
** by the Mercury compiler,
** version rotd-2023-10-23
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




static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_add_to_hptm_0_0;

static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_add_to_hptm_0_1;

static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_ordinal_ordered_maybe_add_to_hptm_0[2];

static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_add_to_hptm_0[2];

static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_add_to_hptm_0[2];

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
parse_tree__write_module_interface_files__actually_write_interface_file0_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ParseTreeInt0_12,
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
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_51_95_95_91_54_93_95_48_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ParseTreeInt3_12,
  MR_String FileName_13,
  MR_String TmpFileName_14,
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
parse_tree__write_module_interface_files____Unify____maybe_add_to_hptm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_add_to_hptm_0_0_10001(
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
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int3_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int1_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_module_1)),
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


static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_add_to_hptm_0_0 = {
  (MR_String) "do_not_add_new_to_hptm",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_add_to_hptm_0_1 = {
  (MR_String) "do_add_new_to_hptm",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_ordinal_ordered_maybe_add_to_hptm_0[2] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_add_to_hptm_0_0,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_add_to_hptm_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_add_to_hptm_0[2] = {
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_add_to_hptm_0_1,
  &parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_functor_desc_maybe_add_to_hptm_0_0
};

static const MR_Integer parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_add_to_hptm_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_maybe_add_to_hptm_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__write_module_interface_files____Unify____maybe_add_to_hptm_0_0_10001)),
  ((MR_Box) (parse_tree__write_module_interface_files____Compare____maybe_add_to_hptm_0_0_10001)),
  (MR_String) "parse_tree.write_module_interface_files",
  (MR_String) "maybe_add_to_hptm",
  { parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_name_ordered_maybe_add_to_hptm_0 },
  { parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__enum_ordinal_ordered_maybe_add_to_hptm_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__functor_number_map_maybe_add_to_hptm_0,

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
parse_tree__write_module_interface_files____Compare____maybe_add_to_hptm_0_0(
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
parse_tree__write_module_interface_files____Unify____maybe_add_to_hptm_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__write_module_interface_files__write_interface_file_int1_int2_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word AddToHrmm_13,
  MR_Word BurdenedModule_14,
  MR_Word * Succeeded_15,
  MR_Word * Specs_16,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_55,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_56)
{
  MR_bool succeeded;
  MR_Word Baggage0_19 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_14, (MR_Integer) 0))));
  MR_Word ParseTreeModuleSrc0_20 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_14, (MR_Integer) 1))));
  MR_Word MaybeTimestamp_21 = ((MR_Word) ((MR_hl_field(0, Baggage0_19, (MR_Integer) 4))));
  MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 0))));
  MR_Word IntParseTreeModuleSrc_23;
  MR_Word AugMakeIntUnit1_24;
  MR_Word Baggage_25;
  MR_Word GetErrors_26;
  MR_Word GetSpecs_27;
  MR_Word GetSpecsEffectivelyErrors_28;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_59_59;

  parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0(ParseTreeModuleSrc0_20, &IntParseTreeModuleSrc_23);
  parse_tree__grab_modules__grab_unqual_imported_modules_make_int_10_p_0(ProgressStream_11, Globals_12, IntParseTreeModuleSrc_23, &AugMakeIntUnit1_24, Baggage0_19, &Baggage_25, STATE_VARIABLE_HaveParseTreeMaps_0_55, &STATE_VARIABLE_HaveParseTreeMaps_59_59);
  GetErrors_26 = ((MR_Word) ((MR_hl_field(0, Baggage_25, (MR_Integer) 7))));
  GetSpecs_27 = parse_tree__parse_error__get_read_module_specs_1_f_0(GetErrors_26);
  GetSpecsEffectivelyErrors_28 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_12, GetSpecs_27);
  succeeded = (GetSpecsEffectivelyErrors_28 == (MR_Integer) 0);
  if (succeeded)
    succeeded = parse_tree__parse_error__there_are_no_errors_1_p_0(GetErrors_26);
  if (succeeded)
  {
    MR_Word AugMakeIntUnit_29;
    MR_Word QualSpecs_30;
    MR_Word EffectiveGetQualSpecs_31;
    MR_Word Var_62;

    parse_tree__module_qual__module_qualify_aug_make_int_unit_5_p_0(Globals_12, AugMakeIntUnit1_24, &AugMakeIntUnit_29, (MR_Word) ((MR_Unsigned) 0U), &QualSpecs_30);
    Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), GetSpecs_27, QualSpecs_30);
    parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_12, Var_62, &EffectiveGetQualSpecs_31);
    if ((EffectiveGetQualSpecs_31 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ParseTreeInt1_32;
      MR_Word ParseTreeInt2_33;
      MR_Word GenerateSpecs_34;
      MR_String FileName1_36;
      MR_String TmpFileName1_37;
      MR_String FileName2_38;
      MR_String TmpFileName2_39;
      MR_Word OutputSucceeded1_40;
      MR_Word OutputSucceeded2_41;
      MR_Word TouchSucceeded_42;
      MR_Word Var_64;
      MR_Word Var_74;

      parse_tree__comp_unit_interface__generate_interfaces_int1_int2_6_p_0(Globals_12, AugMakeIntUnit_29, &ParseTreeInt1_32, &ParseTreeInt2_33, (MR_Word) ((MR_Unsigned) 0U), &GenerateSpecs_34);
      Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), EffectiveGetQualSpecs_31, GenerateSpecs_34);
      parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_12, Var_64, Specs_16);
      parse_tree__write_module_interface_files__construct_int_file_name_8_p_0(Globals_12, ModuleName_22, (MR_Integer) 1, (MR_String) "", &FileName1_36, &TmpFileName1_37);
      parse_tree__write_module_interface_files__construct_int_file_name_8_p_0(Globals_12, ModuleName_22, (MR_Integer) 2, (MR_String) "", &FileName2_38, &TmpFileName2_39);
      parse_tree__write_module_interface_files__actually_write_interface_file1_9_p_0(ProgressStream_11, Globals_12, ParseTreeInt1_32, FileName1_36, TmpFileName1_37, MaybeTimestamp_21, &OutputSucceeded1_40);
      parse_tree__write_module_interface_files__actually_write_interface_file2_9_p_0(ProgressStream_11, Globals_12, ParseTreeInt2_33, FileName2_38, TmpFileName2_39, MaybeTimestamp_21, &OutputSucceeded2_41);
      parse_tree__module_cmds__touch_module_ext_datestamp_7_p_0(Globals_12, ProgressStream_11, ModuleName_22, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[4])), &TouchSucceeded_42);
      Var_74 = libs__maybe_util__and_2_f_0(OutputSucceeded1_40, OutputSucceeded2_41);
      *Succeeded_15 = libs__maybe_util__and_2_f_0(Var_74, TouchSucceeded_42);
      switch (AddToHrmm_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Int1Map0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_59_59, (MR_Integer) 3))));
            MR_Word Int2Map0_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_59_59, (MR_Integer) 4))));
            MR_Word HM1_45;
            MR_Word HM2_46;
            MR_Word Int1Map_47;
            MR_Word Int2Map_48;
            MR_Word Var_162;
            MR_Word Var_163;
            MR_Word Var_164;
            MR_Word Var_167;
            MR_Word Var_168;
            MR_Word Var_169;

            {
              HM1_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, HM1_45, 0) = ((MR_Box) (FileName1_36));
              MR_hl_field(0, HM1_45, 1) = ((MR_Box) (ParseTreeInt1_32));
              MR_hl_field(0, HM1_45, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              HM2_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, HM2_46, 0) = ((MR_Box) (FileName2_38));
              MR_hl_field(0, HM2_46, 1) = ((MR_Box) (ParseTreeInt2_33));
              MR_hl_field(0, HM2_46, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[2]), ((MR_Box) (ModuleName_22)), ((MR_Box) (HM1_45)), Int1Map0_43, &Int1Map_47);
            mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[3]), ((MR_Box) (ModuleName_22)), ((MR_Box) (HM2_46)), Int2Map0_44, &Int2Map_48);
            Var_162 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_59_59, (MR_Integer) 0))));
            Var_163 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_59_59, (MR_Integer) 1))));
            Var_164 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_59_59, (MR_Integer) 2))));
            Var_167 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_59_59, (MR_Integer) 5))));
            Var_168 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_59_59, (MR_Integer) 6))));
            Var_169 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_59_59, (MR_Integer) 7))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_HaveParseTreeMaps_56 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_162));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_163));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_164));
              MR_hl_field(0, base, 3) = ((MR_Box) (Int1Map_47));
              MR_hl_field(0, base, 4) = ((MR_Box) (Int2Map_48));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_167));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_168));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_169));
            }
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_HaveParseTreeMaps_56 = STATE_VARIABLE_HaveParseTreeMaps_59_59;
          break;
      }
    }
    else
    {
      parse_tree__write_module_interface_files__report_file_not_written_10_p_0(Globals_12, (MR_Word) ((MR_Unsigned) 0U), ModuleName_22, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[5])), (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[7])), (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[4])), EffectiveGetQualSpecs_31, Specs_16);
      *Succeeded_15 = (MR_Integer) 0;
      *STATE_VARIABLE_HaveParseTreeMaps_56 = STATE_VARIABLE_HaveParseTreeMaps_59_59;
    }
  }
  else
  {
    parse_tree__write_module_interface_files__report_file_not_written_10_p_0(Globals_12, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[9])), ModuleName_22, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[5])), (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[7])), (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[4])), GetSpecs_27, Specs_16);
    *Succeeded_15 = (MR_Integer) 0;
    *STATE_VARIABLE_HaveParseTreeMaps_56 = STATE_VARIABLE_HaveParseTreeMaps_59_59;
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

  libs__globals__set_option_4_p_0((MR_Integer) 175, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[3])), Globals_11, &NoLineNumGlobals0_41);
  libs__globals__set_option_4_p_0((MR_Integer) 176, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[3])), NoLineNumGlobals0_41, &NoLineNumGlobals_18);
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
    parse_tree__read_modules__read_module_int2_10_p_0(ProgressStream_10, NoLineNumGlobals_18, (MR_Integer) 2, (MR_Integer) 0, (MR_Integer) 1, ModuleName_49, (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[5]), &HaveReadInt2_51);
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

  libs__globals__set_option_4_p_0((MR_Integer) 175, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[3])), Globals_11, &NoLineNumGlobals0_47);
  libs__globals__set_option_4_p_0((MR_Integer) 176, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[3])), NoLineNumGlobals0_47, &NoLineNumGlobals_18);
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
    parse_tree__read_modules__read_module_int1_10_p_0(ProgressStream_10, NoLineNumGlobals_18, (MR_Integer) 2, (MR_Integer) 0, (MR_Integer) 1, ModuleName_55, (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[5]), &HaveReadInt1_57);
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
parse_tree__write_module_interface_files__write_private_interface_file_int0_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word AddToHrmm_13,
  MR_Word BurdenedModule_14,
  MR_Word * Succeeded_15,
  MR_Word * Specs_16,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_46,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_47)
{
  MR_bool succeeded;
  MR_Word Baggage0_19 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_14, (MR_Integer) 0))));
  MR_Word ParseTreeModuleSrc0_20 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_14, (MR_Integer) 1))));
  MR_Word MaybeTimestamp_21 = ((MR_Word) ((MR_hl_field(0, Baggage0_19, (MR_Integer) 4))));
  MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc0_20, (MR_Integer) 0))));
  MR_Word AugMakeIntUnit1_23;
  MR_Word Baggage_24;
  MR_Word GetErrors_25;
  MR_Word GetSpecs_26;
  MR_Word GetSpecsEffectivelyErrors_27;
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_50_50;

  parse_tree__grab_modules__grab_unqual_imported_modules_make_int_10_p_0(ProgressStream_11, Globals_12, ParseTreeModuleSrc0_20, &AugMakeIntUnit1_23, Baggage0_19, &Baggage_24, STATE_VARIABLE_HaveParseTreeMaps_0_46, &STATE_VARIABLE_HaveParseTreeMaps_50_50);
  GetErrors_25 = ((MR_Word) ((MR_hl_field(0, Baggage_24, (MR_Integer) 7))));
  GetSpecs_26 = parse_tree__parse_error__get_read_module_specs_1_f_0(GetErrors_25);
  GetSpecsEffectivelyErrors_27 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_12, GetSpecs_26);
  succeeded = (GetSpecsEffectivelyErrors_27 == (MR_Integer) 0);
  if (succeeded)
    succeeded = parse_tree__parse_error__there_are_no_errors_1_p_0(GetErrors_25);
  if (succeeded)
  {
    MR_Word AugMakeIntUnit_28;
    MR_Word QualSpecs_29;
    MR_Word EffectiveGetQualSpecs_30;
    MR_Word Var_53;

    parse_tree__module_qual__module_qualify_aug_make_int_unit_5_p_0(Globals_12, AugMakeIntUnit1_23, &AugMakeIntUnit_28, (MR_Word) ((MR_Unsigned) 0U), &QualSpecs_29);
    Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), GetSpecs_26, QualSpecs_29);
    parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_12, Var_53, &EffectiveGetQualSpecs_30);
    if ((EffectiveGetQualSpecs_30 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ParseTreeInt0_31;
      MR_Word GenerateSpecs_32;
      MR_String FileName_34;
      MR_String TmpFileName_35;
      MR_Word OutputSucceeded_36;
      MR_Word TouchSucceeded_37;
      MR_Word Var_55;

      parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0(AugMakeIntUnit_28, &ParseTreeInt0_31, (MR_Word) ((MR_Unsigned) 0U), &GenerateSpecs_32);
      Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), EffectiveGetQualSpecs_30, GenerateSpecs_32);
      parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_12, Var_55, Specs_16);
      parse_tree__write_module_interface_files__construct_int_file_name_8_p_0(Globals_12, ModuleName_22, (MR_Integer) 0, (MR_String) "", &FileName_34, &TmpFileName_35);
      parse_tree__write_module_interface_files__actually_write_interface_file0_9_p_0(ProgressStream_11, Globals_12, ParseTreeInt0_31, FileName_34, TmpFileName_35, MaybeTimestamp_21, &OutputSucceeded_36);
      parse_tree__module_cmds__touch_module_ext_datestamp_7_p_0(Globals_12, ProgressStream_11, ModuleName_22, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[2])), &TouchSucceeded_37);
      *Succeeded_15 = libs__maybe_util__and_2_f_0(OutputSucceeded_36, TouchSucceeded_37);
      switch (AddToHrmm_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Int0Map0_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_50_50, (MR_Integer) 2))));
            MR_Word HM_39;
            MR_Word Int0Map_40;
            MR_Word Var_137;
            MR_Word Var_138;
            MR_Word Var_140;
            MR_Word Var_141;
            MR_Word Var_142;
            MR_Word Var_143;
            MR_Word Var_144;

            {
              HM_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, HM_39, 0) = ((MR_Box) (FileName_34));
              MR_hl_field(0, HM_39, 1) = ((MR_Box) (ParseTreeInt0_31));
              MR_hl_field(0, HM_39, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[1]), ((MR_Box) (ModuleName_22)), ((MR_Box) (HM_39)), Int0Map0_38, &Int0Map_40);
            Var_137 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_50_50, (MR_Integer) 0))));
            Var_138 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_50_50, (MR_Integer) 1))));
            Var_140 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_50_50, (MR_Integer) 3))));
            Var_141 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_50_50, (MR_Integer) 4))));
            Var_142 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_50_50, (MR_Integer) 5))));
            Var_143 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_50_50, (MR_Integer) 6))));
            Var_144 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_50_50, (MR_Integer) 7))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_HaveParseTreeMaps_47 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_137));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_138));
              MR_hl_field(0, base, 2) = ((MR_Box) (Int0Map_40));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_140));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_141));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_142));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_143));
              MR_hl_field(0, base, 7) = ((MR_Box) (Var_144));
            }
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_HaveParseTreeMaps_47 = STATE_VARIABLE_HaveParseTreeMaps_50_50;
          break;
      }
    }
    else
    {
      parse_tree__write_module_interface_files__report_file_not_written_10_p_0(Globals_12, (MR_Word) ((MR_Unsigned) 0U), ModuleName_22, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[3])), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[2])), EffectiveGetQualSpecs_30, Specs_16);
      *Succeeded_15 = (MR_Integer) 0;
      *STATE_VARIABLE_HaveParseTreeMaps_47 = STATE_VARIABLE_HaveParseTreeMaps_50_50;
    }
  }
  else
  {
    parse_tree__write_module_interface_files__report_file_not_written_10_p_0(Globals_12, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_1[7])), ModuleName_22, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[3])), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[2])), GetSpecs_26, Specs_16);
    *Succeeded_15 = (MR_Integer) 0;
    *STATE_VARIABLE_HaveParseTreeMaps_47 = STATE_VARIABLE_HaveParseTreeMaps_50_50;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__actually_write_interface_file0_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ParseTreeInt0_12,
  MR_String FileName_13,
  MR_String TmpFileName_14,
  MR_Word MaybeTimestamp_15,
  MR_Word * Succeeded_16)
{
  MR_Word NoLineNumGlobals_18;
  MR_Word MaybeVersionNumbers_19;
  MR_Word ParseTreeInt0V_20;
  MR_Word OutputSucceeded_21;
  MR_Word UpdateSucceeded_22;
  MR_Word NoLineNumGlobals0_52;
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
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;

  libs__globals__set_option_4_p_0((MR_Integer) 175, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[3])), Globals_11, &NoLineNumGlobals0_52);
  libs__globals__set_option_4_p_0((MR_Integer) 176, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[3])), NoLineNumGlobals0_52, &NoLineNumGlobals_18);
  parse_tree__write_module_interface_files__maybe_read_old_int0_and_compare_for_smart_recomp_7_p_0(ProgressStream_10, NoLineNumGlobals_18, ParseTreeInt0_12, MaybeTimestamp_15, &MaybeVersionNumbers_19);
  Var_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_12, (MR_Integer) 0))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_12, (MR_Integer) 1))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_12, (MR_Integer) 3))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_12, (MR_Integer) 4))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_12, (MR_Integer) 5))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_12, (MR_Integer) 6))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_12, (MR_Integer) 7))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_12, (MR_Integer) 8))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_12, (MR_Integer) 9))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_12, (MR_Integer) 10))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_12, (MR_Integer) 11))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_12, (MR_Integer) 12))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_12, (MR_Integer) 13))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_12, (MR_Integer) 14))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_12, (MR_Integer) 15))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_12, (MR_Integer) 16))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_12, (MR_Integer) 17))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_12, (MR_Integer) 18))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_12, (MR_Integer) 19))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_12, (MR_Integer) 20))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_12, (MR_Integer) 21))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_12, (MR_Integer) 22))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_12, (MR_Integer) 23))));
  {
    ParseTreeInt0V_20 = (MR_Word) MR_new_object(MR_Word, (24 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ParseTreeInt0V_20, 0) = ((MR_Box) (Var_28));
    MR_hl_field(0, ParseTreeInt0V_20, 1) = ((MR_Box) (Var_29));
    MR_hl_field(0, ParseTreeInt0V_20, 2) = ((MR_Box) (MaybeVersionNumbers_19));
    MR_hl_field(0, ParseTreeInt0V_20, 3) = ((MR_Box) (Var_31));
    MR_hl_field(0, ParseTreeInt0V_20, 4) = ((MR_Box) (Var_32));
    MR_hl_field(0, ParseTreeInt0V_20, 5) = ((MR_Box) (Var_33));
    MR_hl_field(0, ParseTreeInt0V_20, 6) = ((MR_Box) (Var_34));
    MR_hl_field(0, ParseTreeInt0V_20, 7) = ((MR_Box) (Var_35));
    MR_hl_field(0, ParseTreeInt0V_20, 8) = ((MR_Box) (Var_36));
    MR_hl_field(0, ParseTreeInt0V_20, 9) = ((MR_Box) (Var_37));
    MR_hl_field(0, ParseTreeInt0V_20, 10) = ((MR_Box) (Var_38));
    MR_hl_field(0, ParseTreeInt0V_20, 11) = ((MR_Box) (Var_39));
    MR_hl_field(0, ParseTreeInt0V_20, 12) = ((MR_Box) (Var_40));
    MR_hl_field(0, ParseTreeInt0V_20, 13) = ((MR_Box) (Var_41));
    MR_hl_field(0, ParseTreeInt0V_20, 14) = ((MR_Box) (Var_42));
    MR_hl_field(0, ParseTreeInt0V_20, 15) = ((MR_Box) (Var_43));
    MR_hl_field(0, ParseTreeInt0V_20, 16) = ((MR_Box) (Var_44));
    MR_hl_field(0, ParseTreeInt0V_20, 17) = ((MR_Box) (Var_45));
    MR_hl_field(0, ParseTreeInt0V_20, 18) = ((MR_Box) (Var_46));
    MR_hl_field(0, ParseTreeInt0V_20, 19) = ((MR_Box) (Var_47));
    MR_hl_field(0, ParseTreeInt0V_20, 20) = ((MR_Box) (Var_48));
    MR_hl_field(0, ParseTreeInt0V_20, 21) = ((MR_Box) (Var_49));
    MR_hl_field(0, ParseTreeInt0V_20, 22) = ((MR_Box) (Var_50));
    MR_hl_field(0, ParseTreeInt0V_20, 23) = ((MR_Box) (Var_51));
  }
  parse_tree__parse_tree_out__output_parse_tree_int0_7_p_0(ProgressStream_10, NoLineNumGlobals_18, TmpFileName_14, ParseTreeInt0V_20, &OutputSucceeded_21);
  parse_tree__module_cmds__copy_dot_tmp_to_base_file_report_any_error_7_p_0(ProgressStream_10, Globals_11, (MR_String) ".int0", FileName_13, &UpdateSucceeded_22);
  *Succeeded_16 = libs__maybe_util__and_2_f_0(OutputSucceeded_21, UpdateSucceeded_22);
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
    parse_tree__read_modules__read_module_int0_10_p_0(ProgressStream_8, NoLineNumGlobals_9, (MR_Integer) 2, (MR_Integer) 0, (MR_Integer) 1, ModuleName_15, (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_2[5]), &HaveReadInt0_17);
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
parse_tree__write_module_interface_files__write_short_interface_file_int3_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word AddToHrmm_13,
  MR_Word BurdenedModule_14,
  MR_Word * Succeeded_15,
  MR_Word * Specs_16,
  MR_Word STATE_VARIABLE_HaveParseTreeMaps_0_36,
  MR_Word * STATE_VARIABLE_HaveParseTreeMaps_37)
{
  MR_Word ParseTreeModuleSrc_20 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_14, (MR_Integer) 1))));
  MR_Word ParseTreeInt3_21;
  MR_Word Specs0_22;
  MR_Word Specs1_23;
  MR_Word EffectivelyErrors_24;
  MR_Word ModuleName_25;

  parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0(Globals_12, ParseTreeModuleSrc_20, &ParseTreeInt3_21, (MR_Word) ((MR_Unsigned) 0U), &Specs0_22);
  parse_tree__error_util__filter_interface_generation_specs_3_p_0(Globals_12, Specs0_22, &Specs1_23);
  EffectivelyErrors_24 = parse_tree__error_util__contains_errors_or_warnings_treated_as_errors_2_f_0(Globals_12, Specs1_23);
  ModuleName_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_20, (MR_Integer) 0))));
  switch (EffectivelyErrors_24) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String FileName_27;
        MR_String TmpFileName_28;
        MR_Word OutputSucceeded_29;
        MR_Word TouchSucceeded_30;

        parse_tree__write_module_interface_files__construct_int_file_name_8_p_0(Globals_12, ModuleName_25, (MR_Integer) 3, (MR_String) "", &FileName_27, &TmpFileName_28);
        parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_51_95_95_91_54_93_95_48_9_p_0(ProgressStream_11, Globals_12, ParseTreeInt3_21, FileName_27, TmpFileName_28, &OutputSucceeded_29);
        parse_tree__module_cmds__touch_module_ext_datestamp_7_p_0(Globals_12, ProgressStream_11, ModuleName_25, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[0])), &TouchSucceeded_30);
        *Succeeded_15 = libs__maybe_util__and_2_f_0(OutputSucceeded_29, TouchSucceeded_30);
        *Specs_16 = Specs1_23;
        switch (AddToHrmm_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Int3Map0_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_36, (MR_Integer) 5))));
              MR_Word HM_32;
              MR_Word Int3Map_33;
              MR_Word Var_96;
              MR_Word Var_97;
              MR_Word Var_98;
              MR_Word Var_99;
              MR_Word Var_100;
              MR_Word Var_102;
              MR_Word Var_103;

              {
                HM_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, HM_32, 0) = ((MR_Box) (FileName_27));
                MR_hl_field(0, HM_32, 1) = ((MR_Box) (ParseTreeInt3_21));
                MR_hl_field(0, HM_32, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_module_interface_files_scalar_common_1[0]), ((MR_Box) (ModuleName_25)), ((MR_Box) (HM_32)), Int3Map0_31, &Int3Map_33);
              Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_36, (MR_Integer) 0))));
              Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_36, (MR_Integer) 1))));
              Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_36, (MR_Integer) 2))));
              Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_36, (MR_Integer) 3))));
              Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_36, (MR_Integer) 4))));
              Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_36, (MR_Integer) 6))));
              Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_HaveParseTreeMaps_0_36, (MR_Integer) 7))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_HaveParseTreeMaps_37 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_96));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_97));
                MR_hl_field(0, base, 2) = ((MR_Box) (Var_98));
                MR_hl_field(0, base, 3) = ((MR_Box) (Var_99));
                MR_hl_field(0, base, 4) = ((MR_Box) (Var_100));
                MR_hl_field(0, base, 5) = ((MR_Box) (Int3Map_33));
                MR_hl_field(0, base, 6) = ((MR_Box) (Var_102));
                MR_hl_field(0, base, 7) = ((MR_Box) (Var_103));
              }
            }
            break;
          case (MR_Integer) 0:
            *STATE_VARIABLE_HaveParseTreeMaps_37 = STATE_VARIABLE_HaveParseTreeMaps_0_36;
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        parse_tree__write_module_interface_files__report_file_not_written_10_p_0(Globals_12, (MR_Word) ((MR_Unsigned) 0U), ModuleName_25, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[1])), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[0])), Specs1_23, Specs_16);
        *Succeeded_15 = (MR_Integer) 0;
        *STATE_VARIABLE_HaveParseTreeMaps_37 = STATE_VARIABLE_HaveParseTreeMaps_0_36;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__write_module_interface_files__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_116_117_97_108_108_121_95_119_114_105_116_101_95_105_110_116_101_114_102_97_99_101_95_102_105_108_101_51_95_95_91_54_93_95_48_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ParseTreeInt3_12,
  MR_String FileName_13,
  MR_String TmpFileName_14,
  MR_Word * Succeeded_16)
{
  MR_Word NoLineNumGlobals_18;
  MR_Word OutputSucceeded_19;
  MR_Word UpdateSucceeded_20;
  MR_Word NoLineNumGlobals0_25;

  libs__globals__set_option_4_p_0((MR_Integer) 175, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[3])), Globals_11, &NoLineNumGlobals0_25);
  libs__globals__set_option_4_p_0((MR_Integer) 176, (MR_Word) (MR_mkword(1, &parse_tree__write_module_interface_files_scalar_common_2[3])), NoLineNumGlobals0_25, &NoLineNumGlobals_18);
  parse_tree__parse_tree_out__output_parse_tree_int3_7_p_0(ProgressStream_10, NoLineNumGlobals_18, TmpFileName_14, ParseTreeInt3_12, &OutputSucceeded_19);
  parse_tree__module_cmds__copy_dot_tmp_to_base_file_report_any_error_7_p_0(ProgressStream_10, Globals_11, (MR_String) ".int3", FileName_13, &UpdateSucceeded_20);
  *Succeeded_16 = libs__maybe_util__and_2_f_0(OutputSucceeded_19, UpdateSucceeded_20);
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
parse_tree__write_module_interface_files____Unify____maybe_add_to_hptm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_module_interface_files____Unify____maybe_add_to_hptm_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_module_interface_files____Compare____maybe_add_to_hptm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_module_interface_files____Compare____maybe_add_to_hptm_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

	MR_register_type_ctor_info(&parse_tree__write_module_interface_files__parse_tree__write_module_interface_files__type_ctor_info_maybe_add_to_hptm_0);
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
