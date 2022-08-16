/*
** Automatically generated from `make.track_flags.m'
** by the Mercury compiler,
** version rotd-2022-08-16
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
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "backend_libs.compile_target_code.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.md5.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.dependencies.mih"
#include "make.deps_set.mih"
#include "make.make_info.mih"
#include "make.options_file.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 make__track_flags__set_tree234__pti_set_tree234_1__plain_libs__options__type_ctor_info_option_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__track_flags__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0;

static const MR_FA_TypeInfo_Struct1 make__track_flags__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo make__track_flags__make__track_flags__field_types_last_hash_0_0[2];

static const MR_ConstString make__track_flags__make__track_flags__field_names_last_hash_0_0[2];

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
make__track_flags__make_track_flags_files_2_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_LastHash_0_26,
  MR_Word * STATE_VARIABLE_LastHash_27,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
make__track_flags__write_hash_file_5_p_0(
  MR_String FileName_6,
  MR_String Hash_7,
  MR_Word * Succeeded_8);

static void MR_CALL 
make__track_flags__compare_hash_file_6_p_0(
  MR_Word Globals_7,
  MR_String FileName_8,
  MR_String Hash_9,
  MR_Word * Same_10);

static MR_bool MR_CALL 
make__track_flags__option_table_hash_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__track_flags__option_table_hash_4_p_0(
  MR_Word AllOptionArgs_5,
  MR_String * Hash_6);

static void MR_CALL 
make__track_flags__make_track_flags_files_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

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

static /* final */ const MR_Box make__track_flags_scalar_common_2[3][2];

static /* final */ const MR_Box make__track_flags_scalar_common_3[1][4];

static /* final */ const MR_Box make__track_flags_scalar_common_4[1][1];

static /* final */ const MR_Box make__track_flags_scalar_common_5[1][12];

static /* final */ const MR_Box make__track_flags_scalar_common_6[1][5];




static /* final */ const MR_Box make__track_flags_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__track_flags_scalar_common_5[0])),
    ((MR_Box) (make__track_flags__make_track_flags_files_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__track_flags_scalar_common_2[3][2] = {
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
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box make__track_flags_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__track_flags_scalar_common_2[0])),
    ((MR_Box) (&libs__optimization_options__libs__optimization_options__type_ctor_info_opt_tuple_0))
  },
};

static /* final */ const MR_Box make__track_flags_scalar_common_4[1][1] = {
  /* row   0 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".track_flags"))))
  },
};

static /* final */ const MR_Box make__track_flags_scalar_common_5[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__maybe_succeeded__libs__maybe_succeeded__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__track_flags__make__track_flags__type_ctor_info_last_hash_0)),
    ((MR_Box) (&make__track_flags__make__track_flags__type_ctor_info_last_hash_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__track_flags_scalar_common_6[1][5] = {
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
#include "make.build.mh"



static const MR_FA_PseudoTypeInfo_Struct1 make__track_flags__set_tree234__pti_set_tree234_1__plain_libs__options__type_ctor_info_option_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0)
  }
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
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo make__track_flags__make__track_flags__field_types_last_hash_0_0[2] = {
  (MR_PseudoTypeInfo) (&make__track_flags__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString make__track_flags__make__track_flags__field_names_last_hash_0_0[2] = {
  (MR_String) "lh_options",
  (MR_String) "lh_hash"
};

static const MR_DuFunctorDesc make__track_flags__make__track_flags__du_functor_desc_last_hash_0_0 = {
  (MR_String) "last_hash",
  INT16_C(2),
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

static const MR_DuFunctorDescPtr make__track_flags__make__track_flags__du_stag_ordered_last_hash_0_0[1] = {
  &make__track_flags__make__track_flags__du_functor_desc_last_hash_0_0
};

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

static const MR_DuFunctorDescPtr make__track_flags__make__track_flags__du_name_ordered_last_hash_0[1] = {
  &make__track_flags__make__track_flags__du_functor_desc_last_hash_0_0
};

static const MR_Integer make__track_flags__make__track_flags__functor_number_map_last_hash_0[1] = {
  (MR_Integer) 0
};

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
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&make__track_flags_scalar_common_2[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
make__track_flags____Unify____last_hash_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__track_flags_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__track_flags__include_option_in_hash_2_p_0(
  MR_Word InconsequentialOptionsSet_3,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Option_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word OptionData_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

  if (((((((((((((((MR_tag((MR_Word) OptionData_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), OptionData_5, (MR_Integer) 0)))) == (MR_Integer) 3)))) || (((MR_tag((MR_Word) OptionData_5)) == (MR_Integer) 1)))) || (((MR_tag((MR_Word) OptionData_5)) == (MR_Integer) 2)))) || (((((MR_tag((MR_Word) OptionData_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), OptionData_5, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) OptionData_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), OptionData_5, (MR_Integer) 0)))) == (MR_Integer) 2)))))) || (((((MR_tag((MR_Word) OptionData_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), OptionData_5, (MR_Integer) 0)))) == (MR_Integer) 0))))))
  {
    succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), InconsequentialOptionsSet_3, ((MR_Box) (Option_4)));
    succeeded = !(succeeded);
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static void MR_CALL 
make__track_flags__make_track_flags_files_2_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word * Succeeded_12,
  MR_Word STATE_VARIABLE_LastHash_0_26,
  MR_Word * STATE_VARIABLE_LastHash_27,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_bool succeeded;
  MR_Word MaybeModuleOptionArgs_16;
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 5))));

  make__options_file__lookup_mmc_module_options_3_p_0(Var_32, ModuleName_11, &MaybeModuleOptionArgs_16);
  if (((MR_tag((MR_Word) MaybeModuleOptionArgs_16)) == (MR_Integer) 0))
  {
    MR_Word LookupSpecs_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeModuleOptionArgs_16, (MR_Integer) 0))));

    parse_tree__error_util__write_error_specs_4_p_0(Globals_10, LookupSpecs_25);
    *Succeeded_12 = (MR_Integer) 0;
    *STATE_VARIABLE_LastHash_27 = STATE_VARIABLE_LastHash_0_26;
  }
  else
  {
    MR_Word ModuleOptionArgs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleOptionArgs_16, (MR_Integer) 0))));
    MR_Word DetectedGradeFlags_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 3))));
    MR_Word OptionArgs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 4))));
    MR_Word AllOptionArgs_20;
    MR_String Hash_22;
    MR_String HashFileName_23;
    MR_Word Same_24;
    MR_Word Var_33;
    MR_String HashPrime_21;
    MR_Word Var_104;

    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ModuleOptionArgs_17, OptionArgs_19);
    AllOptionArgs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DetectedGradeFlags_18, Var_33);
    Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_LastHash_0_26, (MR_Integer) 0))));
    HashPrime_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_LastHash_0_26, (MR_Integer) 1))));
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__track_flags_scalar_common_2[1]), ((MR_Box) (AllOptionArgs_20)), ((MR_Box) (Var_104)));
    if (succeeded)
    {
      Hash_22 = HashPrime_21;
      *STATE_VARIABLE_LastHash_27 = STATE_VARIABLE_LastHash_0_26;
    }
    else
    {
      make__track_flags__option_table_hash_4_p_0(AllOptionArgs_20, &Hash_22);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_LastHash_27 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AllOptionArgs_20));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Hash_22));
      }
    }
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140make.track_flags.make_track_flags_files_2\'/9", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &make__track_flags_scalar_common_4[0])), ModuleName_11, &HashFileName_23);
    make__track_flags__compare_hash_file_6_p_0(Globals_10, HashFileName_23, Hash_22, &Same_24);
    switch (Same_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        make__track_flags__write_hash_file_5_p_0(HashFileName_23, Hash_22, Succeeded_12);
        break;
      case (MR_Integer) 1:
        *Succeeded_12 = (MR_Integer) 1;
        break;
    }
  }
  *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
}

static void MR_CALL 
make__track_flags__write_hash_file_5_p_0(
  MR_String FileName_6,
  MR_String Hash_7,
  MR_Word * Succeeded_8)
{
  MR_Word OpenResult_10;

  mercury__io__open_output_4_p_0(FileName_6, &OpenResult_10);
  if (((MR_tag((MR_Word) OpenResult_10)) == (MR_Integer) 1))
  {
    MR_Word Error_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpenResult_10, (MR_Integer) 0))));
    MR_String Var_24;

    Var_24 = mercury__io__error_message_1_f_0(Error_12);
    mercury__io__write_string_3_p_0((MR_String) "Error creating \140");
    mercury__io__write_string_3_p_0(FileName_6);
    mercury__io__write_string_3_p_0((MR_String) "\': ");
    mercury__io__write_string_3_p_0(Var_24);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    *Succeeded_8 = (MR_Integer) 0;
  }
  else
  {
    MR_Word Stream_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_10, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(Stream_11, Hash_7);
    mercury__io__close_output_3_p_0(Stream_11);
    *Succeeded_8 = (MR_Integer) 1;
  }
}

static void MR_CALL 
make__track_flags__compare_hash_file_6_p_0(
  MR_Word Globals_7,
  MR_String FileName_8,
  MR_String Hash_9,
  MR_Word * Same_10)
{
  MR_bool succeeded;
  MR_Word OpenResult_12;
  MR_Word Verbose_18;

  mercury__io__open_input_4_p_0(FileName_8, &OpenResult_12);
  if (((MR_tag((MR_Word) OpenResult_12)) == (MR_Integer) 1))
    *Same_10 = (MR_Integer) 0;
  else
  {
    MR_Word Stream_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_12, (MR_Integer) 0))));
    MR_Word ReadResult_14;

    mercury__io__read_line_as_string_4_p_0(Stream_13, &ReadResult_14);
    switch (MR_tag((MR_Word) ReadResult_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Same_10 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), ReadResult_14, (MR_Integer) 0))));

          succeeded = (strcmp(Line_15, Hash_9) == 0);
          if (succeeded)
            *Same_10 = (MR_Integer) 1;
          else
            *Same_10 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        *Same_10 = (MR_Integer) 0;
        break;
    }
    mercury__io__close_input_3_p_0(Stream_13);
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 72, &Verbose_18);
  switch (Verbose_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_string_3_p_0((MR_String) "% ");
        mercury__io__write_string_3_p_0(FileName_8);
        switch (*Same_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_3_p_0((MR_String) " will be UPDATED.\n");
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_3_p_0((MR_String) " does not need updating.\n");
            break;
        }
      }
      break;
  }
}

static MR_bool MR_CALL 
make__track_flags__option_table_hash_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__track_flags__include_option_in_hash_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__track_flags__option_table_hash_4_p_0(
  MR_Word AllOptionArgs_5,
  MR_String * Hash_6)
{
  MR_bool succeeded;
  MR_Word OptionsErrors_10;
  MR_Word AllOptionArgsGlobals_11;
  MR_Word OptionTable_14;
  MR_Word OptionList_15;
  MR_Word InconsequentialOptions_16;
  MR_Word InconsequentialOptionsSet_17;
  MR_Word HashOptionList_18;
  MR_Word OptTuple_19;
  MR_Word Var_29;
  MR_String Var_30;
  MR_Tuple Var_31;
  MR_Word Var_8;
  MR_Word Var_9;

  libs__handle_options__handle_given_options_7_p_0(AllOptionArgs_5, &Var_8, &Var_9, &OptionsErrors_10, &AllOptionArgsGlobals_11);
  if (!((OptionsErrors_10 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String Var_24;
    MR_String Var_26;

    Var_26 = mercury__string__f_43_43_2_f_0((MR_String) ": ", (MR_String) "handle_options returned with errors");
    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "predicate \140make.track_flags.option_table_hash\'/4", Var_26);
    {
      mercury__require__unexpected_2_p_0((MR_String) "make.track_flags.m", Var_24);
      return;
    }
  }
  libs__globals__get_options_2_p_0(AllOptionArgsGlobals_11, &OptionTable_14);
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_14, &OptionList_15);
  libs__options__inconsequential_options_1_p_0(&InconsequentialOptions_16);
  InconsequentialOptionsSet_17 = mercury__set_tree234__from_set_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), InconsequentialOptions_16);
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&make__track_flags_scalar_common_6[0]));
    MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (make__track_flags__option_table_hash_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (InconsequentialOptionsSet_17));
  }
  mercury__list__filter_3_p_0((MR_Word) (&make__track_flags_scalar_common_1[0]), Var_29, OptionList_15, &HashOptionList_18);
  libs__globals__get_opt_tuple_2_p_0(AllOptionArgsGlobals_11, &OptTuple_19);
  {
    Var_31 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (HashOptionList_18));
    MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (OptTuple_19));
  }
  Var_30 = mercury__string__string_1_f_0((MR_Word) (&make__track_flags_scalar_common_3[0]), ((MR_Box) (Var_31)));
  *Hash_6 = libs__md5__md5sum_1_f_0(Var_30);
}

static void MR_CALL 
make__track_flags__make_track_flags_files_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Succeeded_12;
  MR_Word conv1_STATE_VARIABLE_LastHash_27;
  MR_Word conv0_STATE_VARIABLE_Info_29;

  make__track_flags__make_track_flags_files_2_9_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Succeeded_12, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_LastHash_27, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Info_29);
  *wrapper_arg_3 = ((MR_Box) (conv2_Succeeded_12));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_LastHash_27));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Info_29));
}

void MR_CALL 
make__track_flags__make_track_flags_files_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word * Succeeded_10,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_Word Succeeded0_13;
  MR_Word Modules_14;
  MR_Word STATE_VARIABLE_Info_22_22;

  make__dependencies__find_reachable_local_modules_8_p_0(Globals_8, ModuleName_9, &Succeeded0_13, &Modules_14, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_22_22);
  switch (Succeeded0_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Succeeded_10 = (MR_Integer) 0;
        *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_22_22;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_27;
        MR_Box conv5__LastHash_17;
        MR_Box conv4_STATE_VARIABLE_Info_19;
        MR_Box conv3_STATE_VARIABLE_IO_21;

        Var_27 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Modules_14);
        make__build__foldl3_maybe_stop_at_error_11_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__track_flags__make__track_flags__type_ctor_info_last_hash_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Integer) 0, (MR_Word) (&make__track_flags_scalar_common_1[1]), Globals_8, Var_27, Succeeded_10, ((MR_Box) (&make__track_flags_scalar_common_2[2])), &conv5__LastHash_17, ((MR_Box) (STATE_VARIABLE_Info_22_22)), &conv4_STATE_VARIABLE_Info_19, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_21);
        *STATE_VARIABLE_Info_19 = ((MR_Word) (conv4_STATE_VARIABLE_Info_19));
      }
      break;
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
