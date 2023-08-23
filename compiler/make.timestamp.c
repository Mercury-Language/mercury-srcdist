/*
** Automatically generated from `make.timestamp.m'
** by the Mercury compiler,
** version rotd-2023-08-23
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
#include "make.dependencies.mih"
#include "make.deps_set.mih"
#include "make.file_names.mih"
#include "make.hash.mih"
#include "make.make_info.mih"
#include "make.module_dep_file.mih"
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
make__timestamp__get_target_timestamp_2_9_p_0(
  MR_Word Globals_10,
  MR_Word Search_11,
  MR_Word TargetFile_12,
  MR_String FileName_13,
  MR_Word * MaybeTimestamp_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

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
  { ((MR_Box) ((MR_Integer) 688)) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 541)) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 687)) },
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
make__timestamp__get_dependency_timestamp_7_p_0(
  MR_Word Globals_8,
  MR_Word DependencyFile_9,
  MR_Word * MaybeTimestamp_10,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) DependencyFile_9)) == (MR_Integer) 1))
  {
    MR_String FileName_13 = ((MR_String) ((MR_hl_field(1, DependencyFile_9, (MR_Integer) 0))));
    MR_Word SearchDirs_14;
    MR_String Var_23;

    Var_23 = mercury__dir__this_directory_0_f_0();
    {
      SearchDirs_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SearchDirs_14, 0) = ((MR_Box) (Var_23));
      MR_hl_field(1, SearchDirs_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    make__timestamp__get_file_timestamp_7_p_0(SearchDirs_14, FileName_13, MaybeTimestamp_10, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
  }
  else
  {
    MR_Word Target_15 = ((MR_Word) ((MR_hl_field(0, DependencyFile_9, (MR_Integer) 0))));
    MR_Word MaybeTimestamp0_16;
    MR_Word Var_30;
    MR_Word Var_31;

    make__timestamp__get_target_timestamp_8_p_0(Globals_8, (MR_Integer) 1, Target_15, &MaybeTimestamp0_16, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
    succeeded = ((MR_tag((MR_Word) MaybeTimestamp0_16)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_30 = ((MR_Word) ((MR_hl_field(0, Target_15, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_31 = ((MR_Unsigned) ((MR_hl_field(1, Var_30, (MR_Integer) 0))) & (MR_Integer) 1);
        succeeded = (Var_31 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word Var_32;

      Var_32 = libs__timestamp__oldest_timestamp_0_f_0();
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTimestamp_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_32));
      }
    }
    else
      *MaybeTimestamp_10 = MaybeTimestamp0_16;
  }
}

void MR_CALL 
make__timestamp__get_target_timestamp_8_p_0(
  MR_Word Globals_9,
  MR_Word Search_10,
  MR_Word TargetFile_11,
  MR_Word * MaybeTimestamp_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_bool succeeded;
  MR_Word TargetType_16 = ((MR_Word) ((MR_hl_field(0, TargetFile_11, (MR_Integer) 1))));

  succeeded = (TargetType_16 == (MR_Word) ((MR_Unsigned) 28U));
  if (succeeded)
  {
    MR_Word ForSearch_17;
    MR_String FileName_18;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word ModuleName_47;
    MR_Word FileTimestamps0_49;
    MR_Word MaybeTimestamp0_50;
    MR_Box conv0_MaybeTimestamp0_50;

    ForSearch_17 = parse_tree__file_names__maybe_search_to_maybe_for_search_1_f_0(Search_10);
    make__file_names__get_file_name_9_p_0(Globals_9, (MR_String) "predicate \140make.timestamp.get_target_timestamp\'/8", ForSearch_17, TargetFile_11, &FileName_18, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_29_29);
    ModuleName_47 = ((MR_Word) ((MR_hl_field(0, TargetFile_11, (MR_Integer) 0))));
    FileTimestamps0_49 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_29_29);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_1[0]), FileTimestamps0_49, ((MR_Box) (FileName_18)), &conv0_MaybeTimestamp0_50);
    if (succeeded)
    {
      MaybeTimestamp0_50 = ((MR_Word) (conv0_MaybeTimestamp0_50));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *MaybeTimestamp_12 = MaybeTimestamp0_50;
      *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_29_29;
    }
    else
    {
      MR_Word Status_51;

      analysis__do_read_module_overall_status_6_p_0((MR_Word) (&make__timestamp_scalar_common_2[0]), ((MR_Box) ((MR_Integer) 0)), Globals_9, ModuleName_47, &Status_51);
      switch (Status_51) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word FileTimestamps_52;

            *MaybeTimestamp_12 = (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[0]));
            mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_1[0]), ((MR_Box) (FileName_18)), ((MR_Box) (*MaybeTimestamp_12)), FileTimestamps0_49, &FileTimestamps_52);
            make__make_info__make_info_set_file_timestamps_3_p_0(FileTimestamps_52, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_25);
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            MR_Word ModuleName_61 = ((MR_Word) ((MR_hl_field(0, TargetFile_11, (MR_Integer) 0))));
            MR_Word TargetType_62 = ((MR_Word) ((MR_hl_field(0, TargetFile_11, (MR_Integer) 1))));
            MR_Word SearchDirs_63;
            MR_Word MaybeTimestamp0_64;
            MR_Word STATE_VARIABLE_Info_33_73;

            switch (Search_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String Var_71;

                  Var_71 = mercury__dir__this_directory_0_f_0();
                  {
                    SearchDirs_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SearchDirs_63, 0) = ((MR_Box) (Var_71));
                    MR_hl_field(1, SearchDirs_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 1:
                switch (MR_tag((MR_Word) TargetType_62)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(TargetType_62)) {
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
                          MR_String Var_85;

                          Var_85 = mercury__dir__this_directory_0_f_0();
                          {
                            SearchDirs_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, SearchDirs_63, 0) = ((MR_Box) (Var_85));
                            MR_hl_field(1, SearchDirs_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                      case (MR_Integer) 3:
                      case (MR_Integer) 4:
                      case (MR_Integer) 5:
                        {
                          MR_Word SearchDirOpt_118 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[3])), (MR_Integer) 0))));
                          MR_Word SearchDirs0_119;
                          MR_String Var_111;

                          libs__globals__lookup_accumulating_option_3_p_0(Globals_9, SearchDirOpt_118, &SearchDirs0_119);
                          Var_111 = mercury__dir__this_directory_0_f_0();
                          succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_111)), SearchDirs0_119);
                          if (succeeded)
                            SearchDirs_63 = SearchDirs0_119;
                          else
                          {
                            MR_String Var_113;

                            Var_113 = mercury__dir__this_directory_0_f_0();
                            {
                              SearchDirs_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, SearchDirs_63, 0) = ((MR_Box) (Var_113));
                              MR_hl_field(1, SearchDirs_63, 1) = ((MR_Box) (SearchDirs0_119));
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 6:
                      case (MR_Integer) 7:
                        {
                          MR_Word SearchDirOpt_81 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[1])), (MR_Integer) 0))));
                          MR_Word SearchDirs0_82;
                          MR_String Var_83;

                          libs__globals__lookup_accumulating_option_3_p_0(Globals_9, SearchDirOpt_81, &SearchDirs0_82);
                          Var_83 = mercury__dir__this_directory_0_f_0();
                          succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_83)), SearchDirs0_82);
                          if (succeeded)
                            SearchDirs_63 = SearchDirs0_82;
                          else
                          {
                            MR_String Var_84;

                            Var_84 = mercury__dir__this_directory_0_f_0();
                            {
                              SearchDirs_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, SearchDirs_63, 0) = ((MR_Box) (Var_84));
                              MR_hl_field(1, SearchDirs_63, 1) = ((MR_Box) (SearchDirs0_82));
                            }
                          }
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word SearchDirOpt_106 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[2])), (MR_Integer) 0))));
                      MR_Word SearchDirs0_107;
                      MR_String Var_99;

                      libs__globals__lookup_accumulating_option_3_p_0(Globals_9, SearchDirOpt_106, &SearchDirs0_107);
                      Var_99 = mercury__dir__this_directory_0_f_0();
                      succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_99)), SearchDirs0_107);
                      if (succeeded)
                        SearchDirs_63 = SearchDirs0_107;
                      else
                      {
                        MR_String Var_101;

                        Var_101 = mercury__dir__this_directory_0_f_0();
                        {
                          SearchDirs_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, SearchDirs_63, 0) = ((MR_Box) (Var_101));
                          MR_hl_field(1, SearchDirs_63, 1) = ((MR_Box) (SearchDirs0_107));
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_String Var_85;

                      Var_85 = mercury__dir__this_directory_0_f_0();
                      {
                        SearchDirs_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, SearchDirs_63, 0) = ((MR_Box) (Var_85));
                        MR_hl_field(1, SearchDirs_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_String Var_85;

                      Var_85 = mercury__dir__this_directory_0_f_0();
                      {
                        SearchDirs_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, SearchDirs_63, 0) = ((MR_Box) (Var_85));
                        MR_hl_field(1, SearchDirs_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    break;
                }
                break;
            }
            make__timestamp__get_file_timestamp_7_p_0(SearchDirs_63, FileName_18, &MaybeTimestamp0_64, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_33_73);
            succeeded = ((MR_tag((MR_Word) MaybeTimestamp0_64)) == (MR_Integer) 1);
            if (succeeded)
            {
              if ((TargetType_62 == (MR_Word) ((MR_Unsigned) 28U)))
                succeeded = MR_TRUE;
              else
              if ((TargetType_62 == (MR_Word) ((MR_Unsigned) 24U)))
                succeeded = MR_TRUE;
              else
                succeeded = MR_FALSE;
            }
            if (succeeded)
            {
              MR_Word MaybeModuleDepInfo_66;
              MR_Word STATE_VARIABLE_Info_35_75;
              MR_Word ModuleDepInfo_67;
              MR_String ModuleDir_68;
              MR_String Var_79;

              make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_61, &MaybeModuleDepInfo_66, STATE_VARIABLE_Info_33_73, &STATE_VARIABLE_Info_35_75);
              succeeded = (MaybeModuleDepInfo_66 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ModuleDepInfo_67 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_66, (MR_Integer) 0))));
                parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_67, &ModuleDir_68);
                Var_79 = mercury__dir__this_directory_0_f_0();
                succeeded = (strcmp(ModuleDir_68, Var_79) == 0);
                succeeded = !(succeeded);
              }
              if (succeeded)
              {
                MR_Word FileTimestamps0_69;
                MR_Word FileTimestamps_70;
                MR_Word Var_76;

                Var_76 = libs__timestamp__oldest_timestamp_0_f_0();
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeTimestamp_12 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_76));
                }
                FileTimestamps0_69 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_35_75);
                mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_1[0]), ((MR_Box) (FileName_18)), ((MR_Box) (*MaybeTimestamp_12)), FileTimestamps0_69, &FileTimestamps_70);
                make__make_info__make_info_set_file_timestamps_3_p_0(FileTimestamps_70, STATE_VARIABLE_Info_35_75, STATE_VARIABLE_Info_25);
              }
              else
              {
                *MaybeTimestamp_12 = MaybeTimestamp0_64;
                *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_35_75;
              }
            }
            else
            {
              *MaybeTimestamp_12 = MaybeTimestamp0_64;
              *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_33_73;
            }
          }
          break;
      }
    }
  }
  else
  {
    MR_Word TargetFileTimestamps0_19;
    MR_Word Timestamp_20;
    MR_Box conv1_Timestamp_20;

    TargetFileTimestamps0_19 = make__make_info__make_info_get_target_file_timestamps_1_f_0(STATE_VARIABLE_Info_0_24);
    succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), TargetFileTimestamps0_19, ((MR_Box) (TargetFile_11)), &conv1_Timestamp_20);
    if (succeeded)
    {
      Timestamp_20 = ((MR_Word) (conv1_Timestamp_20));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTimestamp_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Timestamp_20));
      }
      *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
    }
    else
    {
      MR_Word STATE_VARIABLE_Info_34_34;
      MR_Word STATE_VARIABLE_Info_36_36;
      MR_Word ForSearch_41;
      MR_String FileName_42;

      ForSearch_41 = parse_tree__file_names__maybe_search_to_maybe_for_search_1_f_0(Search_10);
      make__file_names__get_file_name_9_p_0(Globals_9, (MR_String) "predicate \140make.timestamp.get_target_timestamp\'/8", ForSearch_41, TargetFile_11, &FileName_42, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_34_34);
      make__timestamp__get_target_timestamp_2_9_p_0(Globals_9, Search_10, TargetFile_11, FileName_42, MaybeTimestamp_12, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_36_36);
      if (((MR_tag((MR_Word) *MaybeTimestamp_12)) == (MR_Integer) 1))
        *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_36_36;
      else
      {
        MR_Word TargetFileTimestamps1_21;
        MR_Word TargetFileTimestamps_22;
        MR_Word Timestamp_39 = ((MR_Word) ((MR_hl_field(0, *MaybeTimestamp_12, (MR_Integer) 0))));

        TargetFileTimestamps1_21 = make__make_info__make_info_get_target_file_timestamps_1_f_0(STATE_VARIABLE_Info_36_36);
        mercury__version_hash_table__det_insert_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), ((MR_Box) (TargetFile_11)), ((MR_Box) (Timestamp_39)), TargetFileTimestamps1_21, &TargetFileTimestamps_22);
        make__make_info__make_info_set_target_file_timestamps_3_p_0(TargetFileTimestamps_22, STATE_VARIABLE_Info_36_36, STATE_VARIABLE_Info_25);
      }
    }
  }
}

static void MR_CALL 
make__timestamp__get_target_timestamp_2_9_p_0(
  MR_Word Globals_10,
  MR_Word Search_11,
  MR_Word TargetFile_12,
  MR_String FileName_13,
  MR_Word * MaybeTimestamp_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_bool succeeded;
  MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(0, TargetFile_12, (MR_Integer) 0))));
  MR_Word TargetType_18 = ((MR_Word) ((MR_hl_field(0, TargetFile_12, (MR_Integer) 1))));
  MR_Word SearchDirs_19;
  MR_Word MaybeTimestamp0_20;
  MR_Word STATE_VARIABLE_Info_33_33;

  switch (Search_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Var_31;

        Var_31 = mercury__dir__this_directory_0_f_0();
        {
          SearchDirs_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SearchDirs_19, 0) = ((MR_Box) (Var_31));
          MR_hl_field(1, SearchDirs_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      switch (MR_tag((MR_Word) TargetType_18)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(TargetType_18)) {
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
                MR_String Var_46;

                Var_46 = mercury__dir__this_directory_0_f_0();
                {
                  SearchDirs_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SearchDirs_19, 0) = ((MR_Box) (Var_46));
                  MR_hl_field(1, SearchDirs_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
              {
                MR_Word SearchDirOpt_79 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[3])), (MR_Integer) 0))));
                MR_Word SearchDirs0_80;
                MR_String Var_72;

                libs__globals__lookup_accumulating_option_3_p_0(Globals_10, SearchDirOpt_79, &SearchDirs0_80);
                Var_72 = mercury__dir__this_directory_0_f_0();
                succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_72)), SearchDirs0_80);
                if (succeeded)
                  SearchDirs_19 = SearchDirs0_80;
                else
                {
                  MR_String Var_74;

                  Var_74 = mercury__dir__this_directory_0_f_0();
                  {
                    SearchDirs_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SearchDirs_19, 0) = ((MR_Box) (Var_74));
                    MR_hl_field(1, SearchDirs_19, 1) = ((MR_Box) (SearchDirs0_80));
                  }
                }
              }
              break;
            case (MR_Integer) 6:
            case (MR_Integer) 7:
              {
                MR_Word SearchDirOpt_42 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[1])), (MR_Integer) 0))));
                MR_Word SearchDirs0_43;
                MR_String Var_44;

                libs__globals__lookup_accumulating_option_3_p_0(Globals_10, SearchDirOpt_42, &SearchDirs0_43);
                Var_44 = mercury__dir__this_directory_0_f_0();
                succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_44)), SearchDirs0_43);
                if (succeeded)
                  SearchDirs_19 = SearchDirs0_43;
                else
                {
                  MR_String Var_45;

                  Var_45 = mercury__dir__this_directory_0_f_0();
                  {
                    SearchDirs_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SearchDirs_19, 0) = ((MR_Box) (Var_45));
                    MR_hl_field(1, SearchDirs_19, 1) = ((MR_Box) (SearchDirs0_43));
                  }
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word SearchDirOpt_67 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[2])), (MR_Integer) 0))));
            MR_Word SearchDirs0_68;
            MR_String Var_60;

            libs__globals__lookup_accumulating_option_3_p_0(Globals_10, SearchDirOpt_67, &SearchDirs0_68);
            Var_60 = mercury__dir__this_directory_0_f_0();
            succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_60)), SearchDirs0_68);
            if (succeeded)
              SearchDirs_19 = SearchDirs0_68;
            else
            {
              MR_String Var_62;

              Var_62 = mercury__dir__this_directory_0_f_0();
              {
                SearchDirs_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, SearchDirs_19, 0) = ((MR_Box) (Var_62));
                MR_hl_field(1, SearchDirs_19, 1) = ((MR_Box) (SearchDirs0_68));
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_46;

            Var_46 = mercury__dir__this_directory_0_f_0();
            {
              SearchDirs_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, SearchDirs_19, 0) = ((MR_Box) (Var_46));
              MR_hl_field(1, SearchDirs_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String Var_46;

            Var_46 = mercury__dir__this_directory_0_f_0();
            {
              SearchDirs_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, SearchDirs_19, 0) = ((MR_Box) (Var_46));
              MR_hl_field(1, SearchDirs_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
      break;
  }
  make__timestamp__get_file_timestamp_7_p_0(SearchDirs_19, FileName_13, &MaybeTimestamp0_20, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_33_33);
  succeeded = ((MR_tag((MR_Word) MaybeTimestamp0_20)) == (MR_Integer) 1);
  if (succeeded)
  {
    if ((TargetType_18 == (MR_Word) ((MR_Unsigned) 28U)))
      succeeded = MR_TRUE;
    else
    if ((TargetType_18 == (MR_Word) ((MR_Unsigned) 24U)))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
  }
  if (succeeded)
  {
    MR_Word MaybeModuleDepInfo_22;
    MR_Word STATE_VARIABLE_Info_35_35;
    MR_Word ModuleDepInfo_23;
    MR_String ModuleDir_24;
    MR_String Var_40;

    make__module_dep_file__get_module_dependencies_7_p_0(Globals_10, ModuleName_17, &MaybeModuleDepInfo_22, STATE_VARIABLE_Info_33_33, &STATE_VARIABLE_Info_35_35);
    succeeded = (MaybeModuleDepInfo_22 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ModuleDepInfo_23 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_22, (MR_Integer) 0))));
      parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_23, &ModuleDir_24);
      Var_40 = mercury__dir__this_directory_0_f_0();
      succeeded = (strcmp(ModuleDir_24, Var_40) == 0);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word FileTimestamps0_25;
      MR_Word FileTimestamps_26;
      MR_Word Var_37;

      Var_37 = libs__timestamp__oldest_timestamp_0_f_0();
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTimestamp_14 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
      }
      FileTimestamps0_25 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_35_35);
      mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_1[0]), ((MR_Box) (FileName_13)), ((MR_Box) (*MaybeTimestamp_14)), FileTimestamps0_25, &FileTimestamps_26);
      make__make_info__make_info_set_file_timestamps_3_p_0(FileTimestamps_26, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_28);
    }
    else
    {
      *MaybeTimestamp_14 = MaybeTimestamp0_20;
      *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_35_35;
    }
  }
  else
  {
    *MaybeTimestamp_14 = MaybeTimestamp0_20;
    *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_33_33;
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
