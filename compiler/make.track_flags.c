/*
** Automatically generated from `make.track_flags.m'
** by the Mercury compiler,
** version rotd-2025-07-08
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


// :- module make.track_flags.
// :- implementation.

/*
INIT mercury__make__track_flags__init
ENDINIT
*/

#include "make.track_flags.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "make.mih"
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
#include "version_array.mih"
#include "version_hash_table.mih"
#include "backend_libs.compile_target_code.mih"
#include "backend_libs.link_target_code.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.md5.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.deps_cache.mih"
#include "make.deps_set.mih"
#include "make.find_local_modules.mih"
#include "make.make_info.mih"
#include "make.options_file.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 make__track_flags__set_tree234__pti_set_tree234_1__plain_libs__options__type_ctor_info_option_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__track_flags__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0;

static const MR_FA_TypeInfo_Struct1 make__track_flags__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 make__track_flags__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct2 make__track_flags__parse_tree__maybe_error__ti_maybe1_2list__ti_list_1builtin__type_ctor_info_string_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo make__track_flags__make__track_flags__field_types_last_hash_0_0[4];

static const MR_ConstString make__track_flags__make__track_flags__field_names_last_hash_0_0[4];

static const MR_DuFunctorDesc make__track_flags__make__track_flags__du_functor_desc_last_hash_0_0;

static const MR_DuFunctorDescPtr make__track_flags__make__track_flags__du_stag_ordered_last_hash_0_0[1];

static const MR_DuPtagLayout make__track_flags__make__track_flags__du_ptag_ordered_last_hash_0[1];

static const MR_DuFunctorDescPtr make__track_flags__make__track_flags__du_name_ordered_last_hash_0[1];

static const MR_Integer make__track_flags__make__track_flags__functor_number_map_last_hash_0[1];

static void MR_CALL 
make__track_flags____Compare____last_hash_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__track_flags____Unify____last_hash_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
make__track_flags__include_option_in_hash_2_p_0(
  MR_Word InconsequentialOptionsSet_3,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__track_flags__foldl3_make_track_flags_for_modules_loop_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_LastHash_0_6,
  MR_Word * STATE_VARIABLE_LastHash_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static MR_bool MR_CALL 
make__track_flags__make_track_flags_files_for_module_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__track_flags__make_track_flags_files_for_module_10_p_0(
  MR_Word ErrorStream_11,
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word Info_14,
  MR_Word ModuleName_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_LastHash_0_34,
  MR_Word * STATE_VARIABLE_LastHash_35);

static void MR_CALL 
make__track_flags__write_hash_file_6_p_0(
  MR_Word ProgressStream_7,
  MR_String FileName_8,
  MR_String Hash_9,
  MR_Word * Succeeded_10);

static MR_bool MR_CALL 
make__track_flags____Unify____last_hash_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__track_flags____Compare____last_hash_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__track_flags_scalar_common_1[2][3];

static /* final */ const MR_Box make__track_flags_scalar_common_2[4][2];

static /* final */ const MR_Box make__track_flags_scalar_common_3[2][4];

static /* final */ const MR_Box make__track_flags_scalar_common_4[1][1];

static /* final */ const MR_Box make__track_flags_scalar_common_5[1][5];




static /* final */ const MR_Box make__track_flags_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2)),
    ((MR_Box) (&make__track_flags_scalar_common_2[1])),
    ((MR_Box) (&make__track_flags_scalar_common_2[2]))
  },
};

static /* final */ const MR_Box make__track_flags_scalar_common_2[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__track_flags_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 14U)
  },
};

static /* final */ const MR_Box make__track_flags_scalar_common_3[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__track_flags_scalar_common_2[0])),
    ((MR_Box) (&libs__optimization_options__libs__optimization_options__type_ctor_info_opt_tuple_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&make__track_flags_scalar_common_4[0])),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box make__track_flags_scalar_common_4[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box make__track_flags_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__track_flags__set_tree234__pti_set_tree234_1__plain_libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&make__track_flags__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "make.build.mh"


static const MR_FA_PseudoTypeInfo_Struct1 make__track_flags__set_tree234__pti_set_tree234_1__plain_libs__options__type_ctor_info_option_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__track_flags__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__track_flags__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 make__track_flags__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_TypeInfo_Struct2 make__track_flags__parse_tree__maybe_error__ti_maybe1_2list__ti_list_1builtin__type_ctor_info_string_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_TypeInfo) (&make__track_flags__list__ti_list_1builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&make__track_flags__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_PseudoTypeInfo make__track_flags__make__track_flags__field_types_last_hash_0_0[4] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_maybe_stdlib_grades_0),
  (MR_PseudoTypeInfo) (&make__track_flags__parse_tree__maybe_error__ti_maybe1_2list__ti_list_1builtin__type_ctor_info_string_0list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&make__track_flags__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString make__track_flags__make__track_flags__field_names_last_hash_0_0[4] = {
  (MR_String) "lh_maybe_stdlib_grades",
  (MR_String) "lh_maybe_stdlib_dirs",
  (MR_String) "lh_options",
  (MR_String) "lh_hash"
};

static const MR_DuFunctorDesc make__track_flags__make__track_flags__du_functor_desc_last_hash_0_0 = {
  (MR_String) "last_hash",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__track_flags__make__track_flags__field_types_last_hash_0_0,
  make__track_flags__make__track_flags__field_names_last_hash_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__track_flags__make__track_flags__du_stag_ordered_last_hash_0_0[1] = { &make__track_flags__make__track_flags__du_functor_desc_last_hash_0_0 };

static const MR_DuPtagLayout make__track_flags__make__track_flags__du_ptag_ordered_last_hash_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__track_flags__make__track_flags__du_stag_ordered_last_hash_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__track_flags__make__track_flags__du_name_ordered_last_hash_0[1] = { &make__track_flags__make__track_flags__du_functor_desc_last_hash_0_0 };

static const MR_Integer make__track_flags__make__track_flags__functor_number_map_last_hash_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__track_flags__make__track_flags__type_ctor_info_last_hash_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__track_flags____Unify____last_hash_0_0_10001)),
  ((MR_Box) (make__track_flags____Compare____last_hash_0_0_10001)),
  (MR_String) "make.track_flags",
  (MR_String) "last_hash",
  { make__track_flags__make__track_flags__du_name_ordered_last_hash_0 },
  { make__track_flags__make__track_flags__du_ptag_ordered_last_hash_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__track_flags__make__track_flags__functor_number_map_last_hash_0,

};

static void MR_CALL 
make__track_flags____Compare____last_hash_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_String ArgX4_13 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_String ArgY4_14 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    libs__globals____Compare____maybe_stdlib_grades_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&make__track_flags_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&make__track_flags_scalar_common_2[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

static MR_bool MR_CALL 
make__track_flags____Unify____last_hash_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_String ArgX4_9 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_String ArgY4_10 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = libs__globals____Unify____maybe_stdlib_grades_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&make__track_flags_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&make__track_flags_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
          succeeded = (strcmp(ArgX4_9, ArgY4_10) == 0);
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__track_flags__include_option_in_hash_2_p_0(
  MR_Word InconsequentialOptionsSet_3,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Option_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Word OptionData_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

  if (((((((((((((((MR_tag((MR_Word) OptionData_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, OptionData_5, 0)))) == (MR_Integer) 3)))) || (((MR_tag((MR_Word) OptionData_5)) == (MR_Integer) 1)))) || (((MR_tag((MR_Word) OptionData_5)) == (MR_Integer) 2)))) || (((((MR_tag((MR_Word) OptionData_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, OptionData_5, 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) OptionData_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, OptionData_5, 0)))) == (MR_Integer) 2)))))) || (((((MR_tag((MR_Word) OptionData_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, OptionData_5, 0)))) == (MR_Integer) 0))))))
  {
    succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), InconsequentialOptionsSet_3, ((MR_Box) (Option_4)));
    succeeded = !(succeeded);
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

void MR_CALL 
make__track_flags__make_track_flags_files_9_p_0(
  MR_Word ErrorStream_10,
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word ModuleName_13,
  MR_Word * Succeeded_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_Word Succeeded0_17;
  MR_Word ModuleNames_18;
  MR_Word STATE_VARIABLE_Info_1_25;

  make__find_local_modules__find_reachable_local_modules_9_p_0(ProgressStream_11, Globals_12, ModuleName_13, &Succeeded0_17, &ModuleNames_18, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_1_25);
  switch (Succeeded0_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Succeeded_14 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_1_25;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_32;
        MR_Word _LastHash_20;

        Var_32 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModuleNames_18);
        make__track_flags__foldl3_make_track_flags_for_modules_loop_11_p_0(ErrorStream_10, ProgressStream_11, Globals_12, Var_32, Succeeded_14, (MR_Word) (&make__track_flags_scalar_common_3[1]), &_LastHash_20, STATE_VARIABLE_Info_1_25, STATE_VARIABLE_Info_22);
      }
      break;
  }
}

static void MR_CALL 
make__track_flags__foldl3_make_track_flags_for_modules_loop_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_LastHash_0_6,
  MR_Word * STATE_VARIABLE_LastHash_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Integer) 1;
      *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
      *STATE_VARIABLE_LastHash_7 = STATE_VARIABLE_LastHash_0_6;
    }
    else
    {
      MR_Word ModuleName_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word ModuleNames_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word Succeeded0_33;
      MR_Word STATE_VARIABLE_LastHash_1_40;

      make__track_flags__make_track_flags_files_for_module_10_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, STATE_VARIABLE_Info_0_8, ModuleName_27, &Succeeded0_33, STATE_VARIABLE_LastHash_0_6, &STATE_VARIABLE_LastHash_1_40);
      switch (Succeeded0_33) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__5_5 = (MR_Integer) 0;
            *STATE_VARIABLE_LastHash_7 = STATE_VARIABLE_LastHash_1_40;
            *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__4_4 = ModuleNames_28;
            MR_Word next_value_of_STATE_VARIABLE_LastHash_0_6 = STATE_VARIABLE_LastHash_1_40;

            // direct tailcall eliminated
            ;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            STATE_VARIABLE_LastHash_0_6 = next_value_of_STATE_VARIABLE_LastHash_0_6;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
make__track_flags__make_track_flags_files_for_module_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__track_flags__include_option_in_hash_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__track_flags__make_track_flags_files_for_module_10_p_0(
  MR_Word ErrorStream_11,
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word Info_14,
  MR_Word ModuleName_15,
  MR_Word * Succeeded_16,
  MR_Word STATE_VARIABLE_LastHash_0_34,
  MR_Word * STATE_VARIABLE_LastHash_35)
{
  MR_bool succeeded;
  MR_Word EnvOptFileVariables_19;
  MR_Word MaybeModuleOptionArgs_20;

  EnvOptFileVariables_19 = make__make_info__make_info_get_env_optfile_variables_1_f_0(Info_14);
  make__options_file__lookup_mmc_module_options_3_p_0(EnvOptFileVariables_19, ModuleName_15, &MaybeModuleOptionArgs_20);
  if (((MR_tag((MR_Word) MaybeModuleOptionArgs_20)) == (MR_Integer) 0))
  {
    MR_Word LookupSpecs_33 = ((MR_Word) ((MR_hl_field(0, MaybeModuleOptionArgs_20, 0))));

    parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_11, Globals_13, LookupSpecs_33);
    *Succeeded_16 = (MR_Integer) 0;
    *STATE_VARIABLE_LastHash_35 = STATE_VARIABLE_LastHash_0_34;
  }
  else
  {
    MR_Word ModuleOptionArgs_21 = ((MR_Word) ((MR_hl_field(1, MaybeModuleOptionArgs_20, 0))));
    MR_Word MaybeStdLibGrades_22;
    MR_Word MaybeStdLibDirs_23;
    MR_Word EnvVarArgs_24;
    MR_Word OptionArgs_25;
    MR_Word AllOptionArgs_26;
    MR_String Hash_28;
    MR_String HashFileName_30;
    MR_Word Var_38;
    MR_Word OpenResult_72;
    MR_Word Verbose_78;
    MR_String HashPrime_27;
    MR_Word TypeInfo_51_51;
    MR_Word TypeInfo_52_52;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_String _HashFileNameProposed_31;

    MaybeStdLibGrades_22 = make__make_info__make_info_get_maybe_stdlib_grades_1_f_0(Info_14);
    make__options_file__lookup_mercury_stdlib_dir_2_p_0(EnvOptFileVariables_19, &MaybeStdLibDirs_23);
    EnvVarArgs_24 = make__make_info__make_info_get_env_var_args_1_f_0(Info_14);
    OptionArgs_25 = make__make_info__make_info_get_option_args_1_f_0(Info_14);
    Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), EnvVarArgs_24, OptionArgs_25);
    AllOptionArgs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ModuleOptionArgs_21, Var_38);
    Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LastHash_0_34, 0))));
    Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LastHash_0_34, 1))));
    Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LastHash_0_34, 2))));
    HashPrime_27 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_LastHash_0_34, 3))));
    succeeded = libs__globals____Unify____maybe_stdlib_grades_0_0(MaybeStdLibGrades_22, Var_47);
    if (succeeded)
    {
      TypeInfo_51_51 = (MR_Word) (&make__track_flags_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_51_51, ((MR_Box) (MaybeStdLibDirs_23)), ((MR_Box) (Var_48)));
      if (succeeded)
      {
        TypeInfo_52_52 = (MR_Word) (&make__track_flags_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_52_52, ((MR_Box) (AllOptionArgs_26)), ((MR_Box) (Var_49)));
      }
    }
    if (succeeded)
    {
      Hash_28 = HashPrime_27;
      *STATE_VARIABLE_LastHash_35 = STATE_VARIABLE_LastHash_0_34;
    }
    else
    {
      MR_Word DefaultOptionTable_29;
      MR_Word OptionsErrors_55;
      MR_Word AllOptionArgsGlobals_56;
      MR_Word OptionTable_57;
      MR_Word OptionList_58;
      MR_Word DoNotTrackOptions_59;
      MR_Word HashOptionList_60;
      MR_Word OptTuple_61;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_String Var_66;
      MR_Tuple Var_67;
      MR_Word Var_53;
      MR_Word Var_54;

      libs__globals__get_default_options_2_p_0(Globals_13, &DefaultOptionTable_29);
      libs__handle_options__handle_given_options_11_p_0(ProgressStream_12, DefaultOptionTable_29, MaybeStdLibGrades_22, MaybeStdLibDirs_23, AllOptionArgs_26, &Var_53, &Var_54, &OptionsErrors_55, &AllOptionArgsGlobals_56);
      if (!((OptionsErrors_55 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          mercury__require__unexpected_2_p_0((MR_String) "make.track_flags.m", (MR_String) "predicate \140make.track_flags.option_table_hash\'/8: handle_options returned with errors");
          return;
        }
      libs__globals__get_options_2_p_0(AllOptionArgsGlobals_56, &OptionTable_57);
      mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_57, &OptionList_58);
      Var_64 = libs__options__options_not_to_track_0_f_0();
      DoNotTrackOptions_59 = mercury__set_tree234__list_to_set_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), Var_64);
      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_65, 0) = ((MR_Box) (&make__track_flags_scalar_common_5[0]));
        MR_hl_field(0, Var_65, 1) = ((MR_Box) (make__track_flags__make_track_flags_files_for_module_10_p_0_1));
        MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_65, 3) = ((MR_Box) (DoNotTrackOptions_59));
      }
      mercury__list__filter_3_p_0((MR_Word) (&make__track_flags_scalar_common_1[0]), Var_65, OptionList_58, &HashOptionList_60);
      libs__globals__get_opt_tuple_2_p_0(AllOptionArgsGlobals_56, &OptTuple_61);
      {
        Var_67 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_67, 0) = ((MR_Box) (HashOptionList_60));
        MR_hl_field(0, Var_67, 1) = ((MR_Box) (OptTuple_61));
      }
      Var_66 = mercury__string__string_1_f_0((MR_Word) (&make__track_flags_scalar_common_3[0]), ((MR_Box) (Var_67)));
      Hash_28 = libs__md5__md5sum_1_f_0(Var_66);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_LastHash_35 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (MaybeStdLibGrades_22));
        MR_hl_field(0, base, 1) = ((MR_Box) (MaybeStdLibDirs_23));
        MR_hl_field(0, base, 2) = ((MR_Box) (AllOptionArgs_26));
        MR_hl_field(0, base, 3) = ((MR_Box) (Hash_28));
      }
    }
    parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_13, (MR_String) "predicate \140make.track_flags.make_track_flags_files_for_module\'/10", (MR_Word) (MR_mkword(3, &make__track_flags_scalar_common_2[3])), ModuleName_15, &HashFileName_30, &_HashFileNameProposed_31);
    mercury__io__open_input_4_p_0(HashFileName_30, &OpenResult_72);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 131, &Verbose_78);
    if (((MR_tag((MR_Word) OpenResult_72)) == (MR_Integer) 1))
    {
      switch (Verbose_78) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(ProgressStream_12, (MR_String) "% ");
            mercury__io__write_string_4_p_0(ProgressStream_12, HashFileName_30);
            mercury__io__write_string_4_p_0(ProgressStream_12, (MR_String) " will be UPDATED.\n");
          }
          break;
      }
      make__track_flags__write_hash_file_6_p_0(ProgressStream_12, HashFileName_30, Hash_28, Succeeded_16);
    }
    else
    {
      MR_Word Stream_73 = ((MR_Word) ((MR_hl_field(0, OpenResult_72, 0))));
      MR_Word ReadResult_74;

      mercury__io__read_line_as_string_4_p_0(Stream_73, &ReadResult_74);
      mercury__io__close_input_3_p_0(Stream_73);
      switch (MR_tag((MR_Word) ReadResult_74)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            switch (Verbose_78) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_4_p_0(ProgressStream_12, (MR_String) "% ");
                  mercury__io__write_string_4_p_0(ProgressStream_12, HashFileName_30);
                  mercury__io__write_string_4_p_0(ProgressStream_12, (MR_String) " will be UPDATED.\n");
                }
                break;
            }
            make__track_flags__write_hash_file_6_p_0(ProgressStream_12, HashFileName_30, Hash_28, Succeeded_16);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Line_75 = ((MR_String) ((MR_hl_field(1, ReadResult_74, 0))));

            succeeded = (strcmp(Line_75, Hash_28) == 0);
            if (succeeded)
            {
              switch (Verbose_78) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_4_p_0(ProgressStream_12, (MR_String) "% ");
                    mercury__io__write_string_4_p_0(ProgressStream_12, HashFileName_30);
                    mercury__io__write_string_4_p_0(ProgressStream_12, (MR_String) " does not need updating.\n");
                  }
                  break;
              }
              *Succeeded_16 = (MR_Integer) 1;
            }
            else
            {
              switch (Verbose_78) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_4_p_0(ProgressStream_12, (MR_String) "% ");
                    mercury__io__write_string_4_p_0(ProgressStream_12, HashFileName_30);
                    mercury__io__write_string_4_p_0(ProgressStream_12, (MR_String) " will be UPDATED.\n");
                  }
                  break;
              }
              make__track_flags__write_hash_file_6_p_0(ProgressStream_12, HashFileName_30, Hash_28, Succeeded_16);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            switch (Verbose_78) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_4_p_0(ProgressStream_12, (MR_String) "% ");
                  mercury__io__write_string_4_p_0(ProgressStream_12, HashFileName_30);
                  mercury__io__write_string_4_p_0(ProgressStream_12, (MR_String) " will be UPDATED.\n");
                }
                break;
            }
            make__track_flags__write_hash_file_6_p_0(ProgressStream_12, HashFileName_30, Hash_28, Succeeded_16);
          }
          break;
      }
    }
  }
}

static void MR_CALL 
make__track_flags__write_hash_file_6_p_0(
  MR_Word ProgressStream_7,
  MR_String FileName_8,
  MR_String Hash_9,
  MR_Word * Succeeded_10)
{
  MR_Word OpenResult_12;

  mercury__io__open_output_4_p_0(FileName_8, &OpenResult_12);
  if (((MR_tag((MR_Word) OpenResult_12)) == (MR_Integer) 1))
  {
    MR_Word Error_14 = ((MR_Word) ((MR_hl_field(1, OpenResult_12, 0))));
    MR_String Var_26;

    Var_26 = mercury__io__error_message_1_f_0(Error_14);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "Error creating \140");
    mercury__io__write_string_4_p_0(ProgressStream_7, FileName_8);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\': ");
    mercury__io__write_string_4_p_0(ProgressStream_7, Var_26);
    mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\n");
    *Succeeded_10 = (MR_Integer) 0;
  }
  else
  {
    MR_Word Stream_13 = ((MR_Word) ((MR_hl_field(0, OpenResult_12, 0))));

    mercury__io__write_string_4_p_0(Stream_13, Hash_9);
    mercury__io__close_output_3_p_0(Stream_13);
    *Succeeded_10 = (MR_Integer) 1;
  }
}

static MR_bool MR_CALL 
make__track_flags____Unify____last_hash_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__track_flags____Unify____last_hash_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__track_flags____Compare____last_hash_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__track_flags____Compare____last_hash_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__make__track_flags__init(void)
{
}

void mercury__make__track_flags__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&make__track_flags__make__track_flags__type_ctor_info_last_hash_0);
}

void mercury__make__track_flags__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__track_flags__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module make.track_flags.
