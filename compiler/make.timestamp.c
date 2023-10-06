/*
** Automatically generated from `make.timestamp.m'
** by the Mercury compiler,
** version rotd-2023-10-06
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
#include "make.find_local_modules.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 make__timestamp__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

static void MR_CALL 
make__timestamp__find_error_or_oldest_ok_timestamp_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__timestamp__get_target_timestamp_2_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word Search_13,
  MR_Word TargetFile_14,
  MR_String FileName_15,
  MR_Word * MaybeTimestamp_16,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static void MR_CALL 
make__timestamp__init_target_file_timestamps_0_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box make__timestamp_scalar_common_1[3][3];

static /* final */ const MR_Box make__timestamp_scalar_common_2[1][2];

static /* final */ const MR_Box make__timestamp_scalar_common_3[4][1];

static /* final */ const MR_Box make__timestamp_scalar_common_4[1][5];

static /* final */ const MR_Box make__timestamp_scalar_common_5[1][6];




static /* final */ const MR_Box make__timestamp_scalar_common_1[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__timestamp_scalar_common_4[0])),
    ((MR_Box) (make__timestamp__init_target_file_timestamps_0_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__timestamp_scalar_common_5[0])),
    ((MR_Box) (make__timestamp__find_error_or_oldest_ok_timestamp_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__timestamp_scalar_common_2[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
};

static /* final */ const MR_Box make__timestamp_scalar_common_3[4][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "invalid module")) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 689)) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 542)) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 688)) },
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

static /* final */ const MR_Box make__timestamp_scalar_common_5[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__timestamp__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__timestamp__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__timestamp__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0))
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


static const MR_FA_PseudoTypeInfo_Struct2 make__timestamp__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static void MR_CALL 
make__timestamp__find_error_or_oldest_ok_timestamp_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeTimestamp_6;

  make__timestamp__find_error_or_older_ok_timestamp_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_MaybeTimestamp_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_MaybeTimestamp_6));
}

void MR_CALL 
make__timestamp__find_error_or_oldest_ok_timestamp_2_p_0(
  MR_Word MaybeTimestamps_3,
  MR_Word * MaybeTimestamp_4)
{
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Box conv1_MaybeTimestamp_4;

  Var_7 = libs__timestamp__newest_timestamp_0_f_0();
  {
    Var_6 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_6, 0) = ((MR_Box) (Var_7));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&make__timestamp_scalar_common_1[0]), (MR_Word) (&make__timestamp_scalar_common_1[0]), (MR_Word) (&make__timestamp_scalar_common_1[2]), MaybeTimestamps_3, ((MR_Box) (Var_6)), &conv1_MaybeTimestamp_4);
  *MaybeTimestamp_4 = ((MR_Word) (conv1_MaybeTimestamp_4));
}

void MR_CALL 
make__timestamp__find_error_or_older_ok_timestamp_3_p_0(
  MR_Word MaybeTimestampA_4,
  MR_Word MaybeTimestampB_5,
  MR_Word * MaybeTimestamp_6)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) MaybeTimestampA_4)) == (MR_Integer) 1))
    *MaybeTimestamp_6 = MaybeTimestampA_4;
  else
  {
    MR_Word TimestampA_8 = ((MR_Word) ((MR_hl_field(0, MaybeTimestampA_4, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) MaybeTimestampB_5)) == (MR_Integer) 1))
      *MaybeTimestamp_6 = MaybeTimestampB_5;
    else
    {
      MR_Word TimestampB_10 = ((MR_Word) ((MR_hl_field(0, MaybeTimestampB_5, (MR_Integer) 0))));
      MR_Word Timestamp_11;
      MR_Word Var_14;

      libs__timestamp____Compare____timestamp_0_0(&Var_14, TimestampA_8, TimestampB_10);
      succeeded = ((MR_Integer) 1 == Var_14);
      if (succeeded)
        Timestamp_11 = TimestampA_8;
      else
        Timestamp_11 = TimestampB_10;
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTimestamp_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Timestamp_11));
      }
    }
  }
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
    MR_Word SearchDirs_16;
    MR_String Var_25;

    Var_25 = mercury__dir__this_directory_0_f_0();
    {
      SearchDirs_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SearchDirs_16, 0) = ((MR_Box) (Var_25));
      MR_hl_field(1, SearchDirs_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    make__timestamp__get_file_timestamp_7_p_0(SearchDirs_16, FileName_15, MaybeTimestamp_12, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
  }
  else
  {
    MR_Word Target_17 = (MR_Word) ((MR_Word) (DependencyFile_11));
    MR_Word MaybeTimestamp0_18;
    MR_Word Var_32;
    MR_Word Var_33;

    make__timestamp__get_target_timestamp_9_p_0(ProgressStream_9, Globals_10, (MR_Integer) 1, Target_17, &MaybeTimestamp0_18, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
    succeeded = ((MR_tag((MR_Word) MaybeTimestamp0_18)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_32 = ((MR_Word) ((MR_hl_field(0, Target_17, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_33 = ((MR_Unsigned) ((MR_hl_field(1, Var_32, (MR_Integer) 0))) & (MR_Integer) 1);
        succeeded = (Var_33 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word Var_34;

      Var_34 = libs__timestamp__oldest_timestamp_0_f_0();
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTimestamp_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_34));
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
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  MR_bool succeeded;
  MR_Word TargetType_18 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 1))));

  succeeded = (TargetType_18 == (MR_Word) ((MR_Unsigned) 28U));
  if (succeeded)
  {
    MR_Word ForSearch_19;
    MR_String FileName_20;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Word ModuleName_49;
    MR_Word FileTimestamps0_51;
    MR_Word MaybeTimestamp0_52;
    MR_Box conv0_MaybeTimestamp0_52;

    ForSearch_19 = parse_tree__file_names__maybe_search_to_maybe_for_search_1_f_0(Search_12);
    make__file_names__get_file_name_10_p_0(ProgressStream_10, Globals_11, (MR_String) "predicate \140make.timestamp.get_target_timestamp\'/9", ForSearch_19, TargetFile_13, &FileName_20, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_31_31);
    ModuleName_49 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 0))));
    FileTimestamps0_51 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_31_31);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_1[0]), FileTimestamps0_51, ((MR_Box) (FileName_20)), &conv0_MaybeTimestamp0_52);
    if (succeeded)
    {
      MaybeTimestamp0_52 = ((MR_Word) (conv0_MaybeTimestamp0_52));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *MaybeTimestamp_14 = MaybeTimestamp0_52;
      *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_31_31;
    }
    else
    {
      MR_Word Status_53;

      analysis__do_read_module_overall_status_6_p_0((MR_Word) (&make__timestamp_scalar_common_2[0]), ((MR_Box) ((MR_Integer) 0)), Globals_11, ModuleName_49, &Status_53);
      switch (Status_53) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word FileTimestamps_54;

            *MaybeTimestamp_14 = (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[0]));
            mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_1[0]), ((MR_Box) (FileName_20)), ((MR_Box) (*MaybeTimestamp_14)), FileTimestamps0_51, &FileTimestamps_54);
            make__make_info__make_info_set_file_timestamps_3_p_0(FileTimestamps_54, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_27);
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            MR_Word ModuleName_63 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 0))));
            MR_Word TargetType_64 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 1))));
            MR_Word SearchDirs_65;
            MR_Word MaybeTimestamp0_66;
            MR_Word STATE_VARIABLE_Info_35_75;

            switch (Search_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String Var_73;

                  Var_73 = mercury__dir__this_directory_0_f_0();
                  {
                    SearchDirs_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SearchDirs_65, 0) = ((MR_Box) (Var_73));
                    MR_hl_field(1, SearchDirs_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 1:
                switch (MR_tag((MR_Word) TargetType_64)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(TargetType_64)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                      case (MR_Integer) 8:
                      case (MR_Integer) 9:
                      case (MR_Integer) 10:
                      case (MR_Integer) 11:
                      case (MR_Integer) 12:
                      case (MR_Integer) 13:
                        {
                          MR_String Var_87;

                          Var_87 = mercury__dir__this_directory_0_f_0();
                          {
                            SearchDirs_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, SearchDirs_65, 0) = ((MR_Box) (Var_87));
                            MR_hl_field(1, SearchDirs_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                      case (MR_Integer) 3:
                      case (MR_Integer) 4:
                      case (MR_Integer) 5:
                        {
                          MR_Word SearchDirOpt_120 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[3])), (MR_Integer) 0))));
                          MR_Word SearchDirs0_121;
                          MR_String Var_113;

                          libs__globals__lookup_accumulating_option_3_p_0(Globals_11, SearchDirOpt_120, &SearchDirs0_121);
                          Var_113 = mercury__dir__this_directory_0_f_0();
                          succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_113)), SearchDirs0_121);
                          if (succeeded)
                            SearchDirs_65 = SearchDirs0_121;
                          else
                          {
                            MR_String Var_115;

                            Var_115 = mercury__dir__this_directory_0_f_0();
                            {
                              SearchDirs_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, SearchDirs_65, 0) = ((MR_Box) (Var_115));
                              MR_hl_field(1, SearchDirs_65, 1) = ((MR_Box) (SearchDirs0_121));
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 6:
                      case (MR_Integer) 7:
                        {
                          MR_Word SearchDirOpt_83 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[1])), (MR_Integer) 0))));
                          MR_Word SearchDirs0_84;
                          MR_String Var_85;

                          libs__globals__lookup_accumulating_option_3_p_0(Globals_11, SearchDirOpt_83, &SearchDirs0_84);
                          Var_85 = mercury__dir__this_directory_0_f_0();
                          succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_85)), SearchDirs0_84);
                          if (succeeded)
                            SearchDirs_65 = SearchDirs0_84;
                          else
                          {
                            MR_String Var_86;

                            Var_86 = mercury__dir__this_directory_0_f_0();
                            {
                              SearchDirs_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, SearchDirs_65, 0) = ((MR_Box) (Var_86));
                              MR_hl_field(1, SearchDirs_65, 1) = ((MR_Box) (SearchDirs0_84));
                            }
                          }
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word SearchDirOpt_108 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[2])), (MR_Integer) 0))));
                      MR_Word SearchDirs0_109;
                      MR_String Var_101;

                      libs__globals__lookup_accumulating_option_3_p_0(Globals_11, SearchDirOpt_108, &SearchDirs0_109);
                      Var_101 = mercury__dir__this_directory_0_f_0();
                      succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_101)), SearchDirs0_109);
                      if (succeeded)
                        SearchDirs_65 = SearchDirs0_109;
                      else
                      {
                        MR_String Var_103;

                        Var_103 = mercury__dir__this_directory_0_f_0();
                        {
                          SearchDirs_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, SearchDirs_65, 0) = ((MR_Box) (Var_103));
                          MR_hl_field(1, SearchDirs_65, 1) = ((MR_Box) (SearchDirs0_109));
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_String Var_87;

                      Var_87 = mercury__dir__this_directory_0_f_0();
                      {
                        SearchDirs_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, SearchDirs_65, 0) = ((MR_Box) (Var_87));
                        MR_hl_field(1, SearchDirs_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_String Var_87;

                      Var_87 = mercury__dir__this_directory_0_f_0();
                      {
                        SearchDirs_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, SearchDirs_65, 0) = ((MR_Box) (Var_87));
                        MR_hl_field(1, SearchDirs_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    break;
                }
                break;
            }
            make__timestamp__get_file_timestamp_7_p_0(SearchDirs_65, FileName_20, &MaybeTimestamp0_66, STATE_VARIABLE_Info_31_31, &STATE_VARIABLE_Info_35_75);
            succeeded = ((MR_tag((MR_Word) MaybeTimestamp0_66)) == (MR_Integer) 1);
            if (succeeded)
            {
              if ((TargetType_64 == (MR_Word) ((MR_Unsigned) 28U)))
                succeeded = MR_TRUE;
              else
              if ((TargetType_64 == (MR_Word) ((MR_Unsigned) 24U)))
                succeeded = MR_TRUE;
              else
                succeeded = MR_FALSE;
            }
            if (succeeded)
            {
              MR_Word MaybeModuleDepInfo_68;
              MR_Word STATE_VARIABLE_Info_37_77;
              MR_Word ModuleDepInfo_69;
              MR_String ModuleDir_70;
              MR_String Var_81;

              make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_10, Globals_11, ModuleName_63, &MaybeModuleDepInfo_68, STATE_VARIABLE_Info_35_75, &STATE_VARIABLE_Info_37_77);
              succeeded = (MaybeModuleDepInfo_68 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ModuleDepInfo_69 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_68, (MR_Integer) 0))));
                parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_69, &ModuleDir_70);
                Var_81 = mercury__dir__this_directory_0_f_0();
                succeeded = (strcmp(ModuleDir_70, Var_81) == 0);
                succeeded = !(succeeded);
              }
              if (succeeded)
              {
                MR_Word FileTimestamps0_71;
                MR_Word FileTimestamps_72;
                MR_Word Var_78;

                Var_78 = libs__timestamp__oldest_timestamp_0_f_0();
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeTimestamp_14 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_78));
                }
                FileTimestamps0_71 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_37_77);
                mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_1[0]), ((MR_Box) (FileName_20)), ((MR_Box) (*MaybeTimestamp_14)), FileTimestamps0_71, &FileTimestamps_72);
                make__make_info__make_info_set_file_timestamps_3_p_0(FileTimestamps_72, STATE_VARIABLE_Info_37_77, STATE_VARIABLE_Info_27);
              }
              else
              {
                *MaybeTimestamp_14 = MaybeTimestamp0_66;
                *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_37_77;
              }
            }
            else
            {
              *MaybeTimestamp_14 = MaybeTimestamp0_66;
              *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_35_75;
            }
          }
          break;
      }
    }
  }
  else
  {
    MR_Word TargetFileTimestamps0_21;
    MR_Word Timestamp_22;
    MR_Box conv1_Timestamp_22;

    TargetFileTimestamps0_21 = make__make_info__make_info_get_target_file_timestamps_1_f_0(STATE_VARIABLE_Info_0_26);
    succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), TargetFileTimestamps0_21, ((MR_Box) (TargetFile_13)), &conv1_Timestamp_22);
    if (succeeded)
    {
      Timestamp_22 = ((MR_Word) (conv1_Timestamp_22));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTimestamp_14 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Timestamp_22));
      }
      *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
    }
    else
    {
      MR_Word STATE_VARIABLE_Info_36_36;
      MR_Word STATE_VARIABLE_Info_38_38;
      MR_Word ForSearch_43;
      MR_String FileName_44;

      ForSearch_43 = parse_tree__file_names__maybe_search_to_maybe_for_search_1_f_0(Search_12);
      make__file_names__get_file_name_10_p_0(ProgressStream_10, Globals_11, (MR_String) "predicate \140make.timestamp.get_target_timestamp\'/9", ForSearch_43, TargetFile_13, &FileName_44, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_36_36);
      make__timestamp__get_target_timestamp_2_10_p_0(ProgressStream_10, Globals_11, Search_12, TargetFile_13, FileName_44, MaybeTimestamp_14, STATE_VARIABLE_Info_36_36, &STATE_VARIABLE_Info_38_38);
      if (((MR_tag((MR_Word) *MaybeTimestamp_14)) == (MR_Integer) 1))
        *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_38_38;
      else
      {
        MR_Word TargetFileTimestamps1_23;
        MR_Word TargetFileTimestamps_24;
        MR_Word Timestamp_41 = ((MR_Word) ((MR_hl_field(0, *MaybeTimestamp_14, (MR_Integer) 0))));

        TargetFileTimestamps1_23 = make__make_info__make_info_get_target_file_timestamps_1_f_0(STATE_VARIABLE_Info_38_38);
        mercury__version_hash_table__det_insert_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), ((MR_Box) (TargetFile_13)), ((MR_Box) (Timestamp_41)), TargetFileTimestamps1_23, &TargetFileTimestamps_24);
        make__make_info__make_info_set_target_file_timestamps_3_p_0(TargetFileTimestamps_24, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_27);
      }
    }
  }
}

static void MR_CALL 
make__timestamp__get_target_timestamp_2_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word Search_13,
  MR_Word TargetFile_14,
  MR_String FileName_15,
  MR_Word * MaybeTimestamp_16,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  MR_bool succeeded;
  MR_Word ModuleName_19 = ((MR_Word) ((MR_hl_field(0, TargetFile_14, (MR_Integer) 0))));
  MR_Word TargetType_20 = ((MR_Word) ((MR_hl_field(0, TargetFile_14, (MR_Integer) 1))));
  MR_Word SearchDirs_21;
  MR_Word MaybeTimestamp0_22;
  MR_Word STATE_VARIABLE_Info_35_35;

  switch (Search_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Var_33;

        Var_33 = mercury__dir__this_directory_0_f_0();
        {
          SearchDirs_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SearchDirs_21, 0) = ((MR_Box) (Var_33));
          MR_hl_field(1, SearchDirs_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
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
              {
                MR_String Var_48;

                Var_48 = mercury__dir__this_directory_0_f_0();
                {
                  SearchDirs_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SearchDirs_21, 0) = ((MR_Box) (Var_48));
                  MR_hl_field(1, SearchDirs_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
              {
                MR_Word SearchDirOpt_81 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[3])), (MR_Integer) 0))));
                MR_Word SearchDirs0_82;
                MR_String Var_74;

                libs__globals__lookup_accumulating_option_3_p_0(Globals_12, SearchDirOpt_81, &SearchDirs0_82);
                Var_74 = mercury__dir__this_directory_0_f_0();
                succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_74)), SearchDirs0_82);
                if (succeeded)
                  SearchDirs_21 = SearchDirs0_82;
                else
                {
                  MR_String Var_76;

                  Var_76 = mercury__dir__this_directory_0_f_0();
                  {
                    SearchDirs_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SearchDirs_21, 0) = ((MR_Box) (Var_76));
                    MR_hl_field(1, SearchDirs_21, 1) = ((MR_Box) (SearchDirs0_82));
                  }
                }
              }
              break;
            case (MR_Integer) 6:
            case (MR_Integer) 7:
              {
                MR_Word SearchDirOpt_44 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[1])), (MR_Integer) 0))));
                MR_Word SearchDirs0_45;
                MR_String Var_46;

                libs__globals__lookup_accumulating_option_3_p_0(Globals_12, SearchDirOpt_44, &SearchDirs0_45);
                Var_46 = mercury__dir__this_directory_0_f_0();
                succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_46)), SearchDirs0_45);
                if (succeeded)
                  SearchDirs_21 = SearchDirs0_45;
                else
                {
                  MR_String Var_47;

                  Var_47 = mercury__dir__this_directory_0_f_0();
                  {
                    SearchDirs_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SearchDirs_21, 0) = ((MR_Box) (Var_47));
                    MR_hl_field(1, SearchDirs_21, 1) = ((MR_Box) (SearchDirs0_45));
                  }
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word SearchDirOpt_69 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[2])), (MR_Integer) 0))));
            MR_Word SearchDirs0_70;
            MR_String Var_62;

            libs__globals__lookup_accumulating_option_3_p_0(Globals_12, SearchDirOpt_69, &SearchDirs0_70);
            Var_62 = mercury__dir__this_directory_0_f_0();
            succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_62)), SearchDirs0_70);
            if (succeeded)
              SearchDirs_21 = SearchDirs0_70;
            else
            {
              MR_String Var_64;

              Var_64 = mercury__dir__this_directory_0_f_0();
              {
                SearchDirs_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, SearchDirs_21, 0) = ((MR_Box) (Var_64));
                MR_hl_field(1, SearchDirs_21, 1) = ((MR_Box) (SearchDirs0_70));
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_48;

            Var_48 = mercury__dir__this_directory_0_f_0();
            {
              SearchDirs_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, SearchDirs_21, 0) = ((MR_Box) (Var_48));
              MR_hl_field(1, SearchDirs_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String Var_48;

            Var_48 = mercury__dir__this_directory_0_f_0();
            {
              SearchDirs_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, SearchDirs_21, 0) = ((MR_Box) (Var_48));
              MR_hl_field(1, SearchDirs_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
      break;
  }
  make__timestamp__get_file_timestamp_7_p_0(SearchDirs_21, FileName_15, &MaybeTimestamp0_22, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_35_35);
  succeeded = ((MR_tag((MR_Word) MaybeTimestamp0_22)) == (MR_Integer) 1);
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
    MR_Word MaybeModuleDepInfo_24;
    MR_Word STATE_VARIABLE_Info_37_37;
    MR_Word ModuleDepInfo_25;
    MR_String ModuleDir_26;
    MR_String Var_42;

    make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_11, Globals_12, ModuleName_19, &MaybeModuleDepInfo_24, STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_37_37);
    succeeded = (MaybeModuleDepInfo_24 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ModuleDepInfo_25 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_24, (MR_Integer) 0))));
      parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_25, &ModuleDir_26);
      Var_42 = mercury__dir__this_directory_0_f_0();
      succeeded = (strcmp(ModuleDir_26, Var_42) == 0);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word FileTimestamps0_27;
      MR_Word FileTimestamps_28;
      MR_Word Var_39;

      Var_39 = libs__timestamp__oldest_timestamp_0_f_0();
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTimestamp_16 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_39));
      }
      FileTimestamps0_27 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_37_37);
      mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_1[0]), ((MR_Box) (FileName_15)), ((MR_Box) (*MaybeTimestamp_16)), FileTimestamps0_27, &FileTimestamps_28);
      make__make_info__make_info_set_file_timestamps_3_p_0(FileTimestamps_28, STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Info_30);
    }
    else
    {
      *MaybeTimestamp_16 = MaybeTimestamp0_22;
      *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_37_37;
    }
  }
  else
  {
    *MaybeTimestamp_16 = MaybeTimestamp0_22;
    *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_35_35;
  }
}

void MR_CALL 
make__timestamp__get_timestamp_file_timestamp_7_p_0(
  MR_Word Globals_8,
  MR_Word HeadVar__2_2,
  MR_Word * MaybeTimestamp_11,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_bool succeeded;
  MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word TargetType_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_String FileName_15;
  MR_Word SearchDirs_16;
  MR_String Var_24;
  MR_Word TimestampExt_14;

  succeeded = make__file_names__timestamp_extension_2_p_0(TargetType_10, &TimestampExt_14);
  if (succeeded)
    parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_8, (MR_String) "predicate \140make.timestamp.get_timestamp_file_timestamp\'/7", TimestampExt_14, ModuleName_9, &FileName_15);
  else
    make__file_names__module_target_to_file_name_7_p_0(Globals_8, (MR_String) "predicate \140make.timestamp.get_timestamp_file_timestamp\'/7", TargetType_10, ModuleName_9, &FileName_15);
  Var_24 = mercury__dir__this_directory_0_f_0();
  {
    SearchDirs_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SearchDirs_16, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, SearchDirs_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  make__timestamp__get_file_timestamp_7_p_0(SearchDirs_16, FileName_15, MaybeTimestamp_11, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
}

void MR_CALL 
make__timestamp__get_file_timestamp_7_p_0(
  MR_Word SearchDirs_8,
  MR_String FileName_9,
  MR_Word * MaybeTimestamp_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word FileTimestamps0_13;
  MR_Word MaybeTimestamp0_14;
  MR_Box conv0_MaybeTimestamp0_14;

  FileTimestamps0_13 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_0_21);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_1[0]), FileTimestamps0_13, ((MR_Box) (FileName_9)), &conv0_MaybeTimestamp0_14);
  if (succeeded)
  {
    MaybeTimestamp0_14 = ((MR_Word) (conv0_MaybeTimestamp0_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *MaybeTimestamp_10 = MaybeTimestamp0_14;
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
  }
  else
  {
    MR_Word SearchResult_15;

    parse_tree__find_module__search_for_file_mod_time_5_p_0(SearchDirs_8, FileName_9, &SearchResult_15);
    if (((MR_tag((MR_Word) SearchResult_15)) == (MR_Integer) 1))
    {
      MR_String NotFoundMsg_20;
      MR_String Var_36;

      Var_36 = mercury__string__f_43_43_2_f_0(FileName_9, (MR_String) "\' not found");
      NotFoundMsg_20 = mercury__string__f_43_43_2_f_0((MR_String) "file \140", Var_36);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeTimestamp_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (NotFoundMsg_20));
      }
      *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
    }
    else
    {
      MR_Word TimeT_16 = ((MR_Word) ((MR_hl_field(0, SearchResult_15, (MR_Integer) 0))));
      MR_Word Timestamp_17;
      MR_Word FileTimestamps_18;

      Timestamp_17 = libs__timestamp__time_t_to_timestamp_1_f_0(TimeT_16);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTimestamp_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Timestamp_17));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_1[0]), ((MR_Box) (FileName_9)), ((MR_Box) (*MaybeTimestamp_10)), FileTimestamps0_13, &FileTimestamps_18);
      make__make_info__make_info_set_file_timestamps_3_p_0(FileTimestamps_18, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
    }
  }
}

static void MR_CALL 
make__timestamp__init_target_file_timestamps_0_f_0_1(
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
make__timestamp__init_target_file_timestamps_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__version_hash_table__unsafe_init_default_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), (MR_Word) (&make__timestamp_scalar_common_1[1]));
  return HeadVar__1_1;
}

void mercury__make__timestamp__init(void)
{
}

void mercury__make__timestamp__init_type_tables(void)
{
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
