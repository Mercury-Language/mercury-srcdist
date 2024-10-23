/*
** Automatically generated from `make.timestamp.m'
** by the Mercury compiler,
** version rotd-2024-10-23
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


// :- module make.timestamp.
// :- implementation.

/*
INIT mercury__make__timestamp__init
ENDINIT
*/

#include "make.timestamp.mih"


#include "analysis.mih"
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
#include "dir.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
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
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.compile_target_code.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.deps_cache.mih"
#include "make.deps_set.mih"
#include "make.file_names.mih"
#include "make.get_module_dep_info.mih"
#include "make.hash.mih"
#include "make.make_info.mih"
#include "make.options_file.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.mmc_analysis.mih"




static const MR_EnumFunctorDesc make__timestamp__make__timestamp__enum_functor_desc_search_option_0_0;

static const MR_EnumFunctorDesc make__timestamp__make__timestamp__enum_functor_desc_search_option_0_1;

static const MR_EnumFunctorDesc make__timestamp__make__timestamp__enum_functor_desc_search_option_0_2;

static const MR_EnumFunctorDescPtr make__timestamp__make__timestamp__enum_ordinal_ordered_search_option_0[3];

static const MR_EnumFunctorDescPtr make__timestamp__make__timestamp__enum_name_ordered_search_option_0[3];

static const MR_Integer make__timestamp__make__timestamp__functor_number_map_search_option_0[3];

static void MR_CALL 
make__timestamp____Compare____search_option_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__timestamp____Unify____search_option_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__timestamp__get_target_timestamp_uncached_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word Search_13,
  MR_Word TargetFile_14,
  MR_String FileName_15,
  MR_Word * MaybeTimestamp_16,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static void MR_CALL 
make__timestamp__init_target_file_timestamp_map_0_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__timestamp____Unify____search_option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__timestamp____Compare____search_option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__timestamp_scalar_common_1[2][3];

static /* final */ const MR_Box make__timestamp_scalar_common_2[1][2];

static /* final */ const MR_Box make__timestamp_scalar_common_3[4][1];

static /* final */ const MR_Box make__timestamp_scalar_common_4[1][5];




static /* final */ const MR_Box make__timestamp_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__timestamp_scalar_common_4[0])),
    ((MR_Box) (make__timestamp__init_target_file_timestamp_map_0_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__timestamp_scalar_common_2[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
};

static /* final */ const MR_Box make__timestamp_scalar_common_3[4][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "invalid module")) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 711)) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 561)) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 710)) },
};

static /* final */ const MR_Box make__timestamp_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "make.build.mh"


static const MR_EnumFunctorDesc make__timestamp__make__timestamp__enum_functor_desc_search_option_0_0 = {
  (MR_String) "c_include_directories",
  INT32_C(561)
};

static const MR_EnumFunctorDesc make__timestamp__make__timestamp__enum_functor_desc_search_option_0_1 = {
  (MR_String) "search_directories",
  INT32_C(710)
};

static const MR_EnumFunctorDesc make__timestamp__make__timestamp__enum_functor_desc_search_option_0_2 = {
  (MR_String) "intermod_directories",
  INT32_C(711)
};

static const MR_EnumFunctorDescPtr make__timestamp__make__timestamp__enum_ordinal_ordered_search_option_0[3] = {
  &make__timestamp__make__timestamp__enum_functor_desc_search_option_0_0,
  &make__timestamp__make__timestamp__enum_functor_desc_search_option_0_1,
  &make__timestamp__make__timestamp__enum_functor_desc_search_option_0_2
};

static const MR_EnumFunctorDescPtr make__timestamp__make__timestamp__enum_name_ordered_search_option_0[3] = {
  &make__timestamp__make__timestamp__enum_functor_desc_search_option_0_0,
  &make__timestamp__make__timestamp__enum_functor_desc_search_option_0_2,
  &make__timestamp__make__timestamp__enum_functor_desc_search_option_0_1
};

static const MR_Integer make__timestamp__make__timestamp__functor_number_map_search_option_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__timestamp__make__timestamp__type_ctor_info_search_option_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__timestamp____Unify____search_option_0_0_10001)),
  ((MR_Box) (make__timestamp____Compare____search_option_0_0_10001)),
  (MR_String) "make.timestamp",
  (MR_String) "search_option",
  { make__timestamp__make__timestamp__enum_name_ordered_search_option_0 },
  { make__timestamp__make__timestamp__enum_ordinal_ordered_search_option_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  make__timestamp__make__timestamp__functor_number_map_search_option_0,

};

static void MR_CALL 
make__timestamp____Compare____search_option_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);
  MR_Integer Var_7 = (MR_Integer) (Cast_HeadVar1_4);
  MR_Integer Var_8 = (MR_Integer) (Cast_HeadVar2_5);

  succeeded = (Var_7 < Var_8);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Var_7 > Var_8);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
make__timestamp____Unify____search_option_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
make__timestamp__get_dependency_timestamp_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word DependencyFile_11,
  MR_Word * MaybeTimestamp_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) DependencyFile_11)) == (MR_Integer) 1))
  {
    MR_String FileName_15 = ((MR_String) ((MR_hl_field(1, DependencyFile_11, (MR_Integer) 0))));
    MR_Word _SearchDirs_16;

    make__timestamp__get_file_timestamp_8_p_0((MR_Word) ((MR_Unsigned) 0U), FileName_15, &_SearchDirs_16, MaybeTimestamp_12, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
  }
  else
  {
    MR_Word Target_17 = (MR_Word) ((MR_Word) (DependencyFile_11));
    MR_Word MaybeTimestamp0_18;
    MR_Word Var_31;
    MR_Word Var_32;

    make__timestamp__get_target_timestamp_9_p_0(ProgressStream_9, Globals_10, (MR_Integer) 1, Target_17, &MaybeTimestamp0_18, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
    succeeded = ((MR_tag((MR_Word) MaybeTimestamp0_18)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_31 = ((MR_Word) ((MR_hl_field(0, Target_17, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_32 = ((MR_Unsigned) ((MR_hl_field(1, Var_31, (MR_Integer) 0))) & (MR_Integer) 1);
        succeeded = (Var_32 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word Var_33;

      Var_33 = libs__timestamp__oldest_timestamp_0_f_0();
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTimestamp_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_33));
      }
    }
    else
      *MaybeTimestamp_12 = MaybeTimestamp0_18;
  }
}

void MR_CALL 
make__timestamp__get_target_timestamp_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word Search_12,
  MR_Word TargetFile_13,
  MR_Word * MaybeTimestamp_14,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  MR_bool succeeded;
  MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 0))));
  MR_Word TargetType_18 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 1))));

  succeeded = (TargetType_18 == (MR_Word) ((MR_Unsigned) 28U));
  if (succeeded)
  {
    MR_Word ForSearch_19;
    MR_String FileName_20;
    MR_Word ModuleName_54;
    MR_Word FileTimestampMap0_56;
    MR_String _FileNameProposed_21;
    MR_Word MaybeTimestamp0_57;
    MR_Box conv0_MaybeTimestamp0_57;

    ForSearch_19 = parse_tree__file_names__maybe_search_to_maybe_for_search_1_f_0(Search_12);
    make__file_names__module_target_to_maybe_for_search_file_name_9_p_0(Globals_11, (MR_String) "predicate \140make.timestamp.get_target_timestamp\'/9", ForSearch_19, TargetType_18, ModuleName_17, &FileName_20, &_FileNameProposed_21);
    ModuleName_54 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 0))));
    FileTimestampMap0_56 = make__make_info__make_info_get_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_0_29);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_1[0]), FileTimestampMap0_56, ((MR_Box) (FileName_20)), &conv0_MaybeTimestamp0_57);
    if (succeeded)
    {
      MaybeTimestamp0_57 = ((MR_Word) (conv0_MaybeTimestamp0_57));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *MaybeTimestamp_14 = MaybeTimestamp0_57;
      *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
    }
    else
    {
      MR_Word Status_58;

      analysis__operations__do_read_module_overall_status_6_p_0((MR_Word) (&make__timestamp_scalar_common_2[0]), ((MR_Box) ((MR_Integer) 0)), Globals_11, ModuleName_54, &Status_58);
      switch (Status_58) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word FileTimestampMap_59;

            *MaybeTimestamp_14 = (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[0]));
            mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_1[0]), ((MR_Box) (FileName_20)), ((MR_Box) (*MaybeTimestamp_14)), FileTimestampMap0_56, &FileTimestampMap_59);
            make__make_info__make_info_set_file_timestamp_map_3_p_0(FileTimestampMap_59, STATE_VARIABLE_Info_0_29, STATE_VARIABLE_Info_30);
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          make__timestamp__get_target_timestamp_uncached_10_p_0(ProgressStream_10, Globals_11, Search_12, TargetFile_13, FileName_20, MaybeTimestamp_14, STATE_VARIABLE_Info_0_29, STATE_VARIABLE_Info_30);
          break;
      }
    }
  }
  else
  {
    MR_Word TargetFileTimestampMap0_22;
    MR_Word Timestamp_23;
    MR_Box conv1_Timestamp_23;

    TargetFileTimestampMap0_22 = make__make_info__make_info_get_target_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_0_29);
    succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), TargetFileTimestampMap0_22, ((MR_Box) (TargetFile_13)), &conv1_Timestamp_23);
    if (succeeded)
    {
      Timestamp_23 = ((MR_Word) (conv1_Timestamp_23));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTimestamp_14 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Timestamp_23));
      }
      *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
    }
    else
    {
      MR_Word STATE_VARIABLE_Info_40_40;
      MR_Word STATE_VARIABLE_Info_42_42;
      MR_Word ForSearch_48;
      MR_String FileName_49;
      MR_String _FileNameProposed_45;

      ForSearch_48 = parse_tree__file_names__maybe_search_to_maybe_for_search_1_f_0(Search_12);
      make__file_names__module_maybe_nested_target_file_to_file_name_11_p_0(ProgressStream_10, Globals_11, (MR_String) "predicate \140make.timestamp.get_target_timestamp\'/9", ForSearch_48, TargetFile_13, &FileName_49, &_FileNameProposed_45, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_40_40);
      make__timestamp__get_target_timestamp_uncached_10_p_0(ProgressStream_10, Globals_11, Search_12, TargetFile_13, FileName_49, MaybeTimestamp_14, STATE_VARIABLE_Info_40_40, &STATE_VARIABLE_Info_42_42);
      if (((MR_tag((MR_Word) *MaybeTimestamp_14)) == (MR_Integer) 1))
        *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_42_42;
      else
      {
        MR_Word TargetFileTimestampMap1_26;
        MR_Word TargetFileTimestampMap_27;
        MR_Word Timestamp_46 = ((MR_Word) ((MR_hl_field(0, *MaybeTimestamp_14, (MR_Integer) 0))));

        TargetFileTimestampMap1_26 = make__make_info__make_info_get_target_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_42_42);
        mercury__version_hash_table__det_insert_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), ((MR_Box) (TargetFile_13)), ((MR_Box) (Timestamp_46)), TargetFileTimestampMap1_26, &TargetFileTimestampMap_27);
        make__make_info__make_info_set_target_file_timestamp_map_3_p_0(TargetFileTimestampMap_27, STATE_VARIABLE_Info_42_42, STATE_VARIABLE_Info_30);
      }
    }
  }
}

static void MR_CALL 
make__timestamp__get_target_timestamp_uncached_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word Search_13,
  MR_Word TargetFile_14,
  MR_String FileName_15,
  MR_Word * MaybeTimestamp_16,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  MR_bool succeeded;
  MR_Word ModuleName_19 = ((MR_Word) ((MR_hl_field(0, TargetFile_14, (MR_Integer) 0))));
  MR_Word TargetType_20 = ((MR_Word) ((MR_hl_field(0, TargetFile_14, (MR_Integer) 1))));
  MR_Word SearchWhichDirs_21;
  MR_Word MaybeTimestamp0_23;
  MR_Word STATE_VARIABLE_Info_34_34;
  MR_Word _SearchDirs_22;

  switch (Search_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      SearchWhichDirs_21 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word MaybeOption_42;

        switch (MR_tag((MR_Word) TargetType_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(TargetType_20)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 8:
              case (MR_Integer) 9:
              case (MR_Integer) 10:
              case (MR_Integer) 11:
              case (MR_Integer) 12:
              case (MR_Integer) 13:
                MaybeOption_42 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 5:
                MaybeOption_42 = (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[3]));
                break;
              case (MR_Integer) 6:
              case (MR_Integer) 7:
                MaybeOption_42 = (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[1]));
                break;
            }
            break;
          case (MR_Integer) 1:
            MaybeOption_42 = (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[2]));
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            MaybeOption_42 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        if ((MaybeOption_42 == (MR_Word) ((MR_Unsigned) 0U)))
          SearchWhichDirs_21 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word SearchDirOption_43 = ((MR_Word) ((MR_hl_field(1, MaybeOption_42, (MR_Integer) 0))));
          MR_Word OptionTable_44;
          MR_Word SearchDirs0_45;
          MR_Word SearchWhichDirs0_46;
          MR_String Var_50;

          libs__globals__get_options_2_p_0(Globals_12, &OptionTable_44);
          switch (SearchDirOption_43) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 561:
              {
                libs__globals__lookup_accumulating_option_3_p_0(Globals_12, (MR_Integer) 561, &SearchDirs0_45);
                {
                  SearchWhichDirs0_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, SearchWhichDirs0_46, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(3, SearchWhichDirs0_46, 1) = ((MR_Box) (OptionTable_44));
                }
              }
              break;
            case (MR_Integer) 711:
              {
                libs__globals__lookup_accumulating_option_3_p_0(Globals_12, (MR_Integer) 711, &SearchDirs0_45);
                {
                  SearchWhichDirs0_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, SearchWhichDirs0_46, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, SearchWhichDirs0_46, 1) = ((MR_Box) (OptionTable_44));
                }
              }
              break;
            case (MR_Integer) 710:
              {
                libs__globals__lookup_accumulating_option_3_p_0(Globals_12, (MR_Integer) 710, &SearchDirs0_45);
                {
                  SearchWhichDirs0_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, SearchWhichDirs0_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, SearchWhichDirs0_46, 1) = ((MR_Box) (OptionTable_44));
                }
              }
              break;
          }
          Var_50 = mercury__dir__this_directory_0_f_0();
          succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_50)), SearchDirs0_45);
          if (succeeded)
            SearchWhichDirs_21 = (MR_Word) (SearchWhichDirs0_46);
          else
          {
            MR_String Var_51;

            Var_51 = mercury__dir__this_directory_0_f_0();
            {
              SearchWhichDirs_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, SearchWhichDirs_21, 0) = ((MR_Box) (Var_51));
              MR_hl_field(2, SearchWhichDirs_21, 1) = ((MR_Box) (SearchWhichDirs0_46));
            }
          }
        }
      }
      break;
  }
  make__timestamp__get_file_timestamp_8_p_0(SearchWhichDirs_21, FileName_15, &_SearchDirs_22, &MaybeTimestamp0_23, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_34_34);
  succeeded = ((MR_tag((MR_Word) MaybeTimestamp0_23)) == (MR_Integer) 1);
  if (succeeded)
  {
    if ((TargetType_20 == (MR_Word) ((MR_Unsigned) 28U)))
      succeeded = MR_TRUE;
    else
    if ((TargetType_20 == (MR_Word) ((MR_Unsigned) 24U)))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
  }
  if (succeeded)
  {
    MR_Word MaybeModuleDepInfo_25;
    MR_Word STATE_VARIABLE_Info_36_36;
    MR_Word ModuleDepInfo_26;
    MR_String ModuleDir_27;
    MR_String Var_41;

    make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_11, Globals_12, ModuleName_19, &MaybeModuleDepInfo_25, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_36_36);
    succeeded = (MaybeModuleDepInfo_25 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ModuleDepInfo_26 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_25, (MR_Integer) 0))));
      parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_26, &ModuleDir_27);
      Var_41 = mercury__dir__this_directory_0_f_0();
      succeeded = (strcmp(ModuleDir_27, Var_41) == 0);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word FileTimestampMap0_28;
      MR_Word FileTimestampMap_29;
      MR_Word Var_38;

      Var_38 = libs__timestamp__oldest_timestamp_0_f_0();
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTimestamp_16 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_38));
      }
      FileTimestampMap0_28 = make__make_info__make_info_get_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_36_36);
      mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_1[0]), ((MR_Box) (FileName_15)), ((MR_Box) (*MaybeTimestamp_16)), FileTimestampMap0_28, &FileTimestampMap_29);
      make__make_info__make_info_set_file_timestamp_map_3_p_0(FileTimestampMap_29, STATE_VARIABLE_Info_36_36, STATE_VARIABLE_Info_31);
    }
    else
    {
      *MaybeTimestamp_16 = MaybeTimestamp0_23;
      *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_36_36;
    }
  }
  else
  {
    *MaybeTimestamp_16 = MaybeTimestamp0_23;
    *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_34_34;
  }
}

void MR_CALL 
make__timestamp__get_file_timestamp_8_p_0(
  MR_Word SearchWhichDirs_9,
  MR_String FileName_10,
  MR_Word * SearchDirs_11,
  MR_Word * MaybeTimestamp_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;
  MR_Word FileTimestampMap0_15;
  MR_Word MaybeTimestamp0_16;
  MR_Box conv0_MaybeTimestamp0_16;

  FileTimestampMap0_15 = make__make_info__make_info_get_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_0_23);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_1[0]), FileTimestampMap0_15, ((MR_Box) (FileName_10)), &conv0_MaybeTimestamp0_16);
  if (succeeded)
  {
    MaybeTimestamp0_16 = ((MR_Word) (conv0_MaybeTimestamp0_16));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *SearchDirs_11 = (MR_Word) ((MR_Unsigned) 0U);
    *MaybeTimestamp_12 = MaybeTimestamp0_16;
    *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
  }
  else
  {
    MR_Word SearchResult_17;

    parse_tree__find_module__search_for_file_mod_time_6_p_0(SearchWhichDirs_9, FileName_10, SearchDirs_11, &SearchResult_17);
    if (((MR_tag((MR_Word) SearchResult_17)) == (MR_Integer) 1))
    {
      MR_String NotFoundMsg_22;
      MR_String Var_38;

      Var_38 = mercury__string__f_43_43_2_f_0(FileName_10, (MR_String) "\' not found");
      NotFoundMsg_22 = mercury__string__f_43_43_2_f_0((MR_String) "file \140", Var_38);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeTimestamp_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (NotFoundMsg_22));
      }
      *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
    }
    else
    {
      MR_Word TimeT_18 = ((MR_Word) ((MR_hl_field(0, SearchResult_17, (MR_Integer) 0))));
      MR_Word Timestamp_19;
      MR_Word FileTimestampMap_20;

      Timestamp_19 = libs__timestamp__time_t_to_timestamp_1_f_0(TimeT_18);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTimestamp_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Timestamp_19));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_1[0]), ((MR_Box) (FileName_10)), ((MR_Box) (*MaybeTimestamp_12)), FileTimestampMap0_15, &FileTimestampMap_20);
      make__make_info__make_info_set_file_timestamp_map_3_p_0(FileTimestampMap_20, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
    }
  }
}

static void MR_CALL 
make__timestamp__init_target_file_timestamp_map_0_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  make__hash__target_file_hash_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

MR_Word MR_CALL 
make__timestamp__init_target_file_timestamp_map_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__version_hash_table__unsafe_init_default_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), (MR_Word) (&make__timestamp_scalar_common_1[1]));
  return HeadVar__1_1;
}

static MR_bool MR_CALL 
make__timestamp____Unify____search_option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__timestamp____Unify____search_option_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__timestamp____Compare____search_option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__timestamp____Compare____search_option_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__make__timestamp__init(void)
{
}

void mercury__make__timestamp__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&make__timestamp__make__timestamp__type_ctor_info_search_option_0);
}

void mercury__make__timestamp__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__timestamp__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module make.timestamp.
