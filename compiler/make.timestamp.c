/*
** Automatically generated from `make.timestamp.m'
** by the Mercury compiler,
** version rotd-2024-07-26
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




static void MR_CALL 
make__timestamp__get_target_timestamp_uncached_10_p_0(
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
    ((MR_Box) (make__timestamp__init_target_file_timestamps_0_f_0_1)),
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
  { ((MR_Box) ((MR_Integer) 709)) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 560)) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 708)) },
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
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_bool succeeded;
  MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 0))));
  MR_Word TargetType_18 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 1))));

  succeeded = (TargetType_18 == (MR_Word) ((MR_Unsigned) 28U));
  if (succeeded)
  {
    MR_Word ForSearch_19;
    MR_String FileName_20;
    MR_Word ModuleName_52;
    MR_Word FileTimestamps0_54;
    MR_Word MaybeTimestamp0_55;
    MR_Box conv0_MaybeTimestamp0_55;

    ForSearch_19 = parse_tree__file_names__maybe_search_to_maybe_for_search_1_f_0(Search_12);
    make__file_names__module_target_to_maybe_for_search_file_name_8_p_0(Globals_11, (MR_String) "predicate \140make.timestamp.get_target_timestamp\'/9", ForSearch_19, TargetType_18, ModuleName_17, &FileName_20);
    ModuleName_52 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 0))));
    FileTimestamps0_54 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_0_28);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_1[0]), FileTimestamps0_54, ((MR_Box) (FileName_20)), &conv0_MaybeTimestamp0_55);
    if (succeeded)
    {
      MaybeTimestamp0_55 = ((MR_Word) (conv0_MaybeTimestamp0_55));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *MaybeTimestamp_14 = MaybeTimestamp0_55;
      *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
    }
    else
    {
      MR_Word Status_56;

      analysis__operations__do_read_module_overall_status_6_p_0((MR_Word) (&make__timestamp_scalar_common_2[0]), ((MR_Box) ((MR_Integer) 0)), Globals_11, ModuleName_52, &Status_56);
      switch (Status_56) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word FileTimestamps_57;

            *MaybeTimestamp_14 = (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[0]));
            mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_1[0]), ((MR_Box) (FileName_20)), ((MR_Box) (*MaybeTimestamp_14)), FileTimestamps0_54, &FileTimestamps_57);
            make__make_info__make_info_set_file_timestamps_3_p_0(FileTimestamps_57, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            MR_Word ModuleName_66 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 0))));
            MR_Word TargetType_67 = ((MR_Word) ((MR_hl_field(0, TargetFile_13, (MR_Integer) 1))));
            MR_Word SearchDirs_68;
            MR_Word MaybeTimestamp0_69;
            MR_Word STATE_VARIABLE_Info_35_78;

            switch (Search_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String Var_76;

                  Var_76 = mercury__dir__this_directory_0_f_0();
                  {
                    SearchDirs_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SearchDirs_68, 0) = ((MR_Box) (Var_76));
                    MR_hl_field(1, SearchDirs_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 1:
                switch (MR_tag((MR_Word) TargetType_67)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(TargetType_67)) {
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
                          MR_String Var_90;

                          Var_90 = mercury__dir__this_directory_0_f_0();
                          {
                            SearchDirs_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, SearchDirs_68, 0) = ((MR_Box) (Var_90));
                            MR_hl_field(1, SearchDirs_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                      case (MR_Integer) 3:
                      case (MR_Integer) 4:
                      case (MR_Integer) 5:
                        {
                          MR_Word SearchDirOpt_121 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[3])), (MR_Integer) 0))));
                          MR_Word SearchDirs0_122;
                          MR_String Var_114;

                          libs__globals__lookup_accumulating_option_3_p_0(Globals_11, SearchDirOpt_121, &SearchDirs0_122);
                          Var_114 = mercury__dir__this_directory_0_f_0();
                          succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_114)), SearchDirs0_122);
                          if (succeeded)
                            SearchDirs_68 = SearchDirs0_122;
                          else
                          {
                            MR_String Var_116;

                            Var_116 = mercury__dir__this_directory_0_f_0();
                            {
                              SearchDirs_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, SearchDirs_68, 0) = ((MR_Box) (Var_116));
                              MR_hl_field(1, SearchDirs_68, 1) = ((MR_Box) (SearchDirs0_122));
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 6:
                      case (MR_Integer) 7:
                        {
                          MR_Word SearchDirOpt_86 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[1])), (MR_Integer) 0))));
                          MR_Word SearchDirs0_87;
                          MR_String Var_88;

                          libs__globals__lookup_accumulating_option_3_p_0(Globals_11, SearchDirOpt_86, &SearchDirs0_87);
                          Var_88 = mercury__dir__this_directory_0_f_0();
                          succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_88)), SearchDirs0_87);
                          if (succeeded)
                            SearchDirs_68 = SearchDirs0_87;
                          else
                          {
                            MR_String Var_89;

                            Var_89 = mercury__dir__this_directory_0_f_0();
                            {
                              SearchDirs_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, SearchDirs_68, 0) = ((MR_Box) (Var_89));
                              MR_hl_field(1, SearchDirs_68, 1) = ((MR_Box) (SearchDirs0_87));
                            }
                          }
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word SearchDirOpt_109 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[2])), (MR_Integer) 0))));
                      MR_Word SearchDirs0_110;
                      MR_String Var_102;

                      libs__globals__lookup_accumulating_option_3_p_0(Globals_11, SearchDirOpt_109, &SearchDirs0_110);
                      Var_102 = mercury__dir__this_directory_0_f_0();
                      succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_102)), SearchDirs0_110);
                      if (succeeded)
                        SearchDirs_68 = SearchDirs0_110;
                      else
                      {
                        MR_String Var_104;

                        Var_104 = mercury__dir__this_directory_0_f_0();
                        {
                          SearchDirs_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, SearchDirs_68, 0) = ((MR_Box) (Var_104));
                          MR_hl_field(1, SearchDirs_68, 1) = ((MR_Box) (SearchDirs0_110));
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    {
                      MR_String Var_90;

                      Var_90 = mercury__dir__this_directory_0_f_0();
                      {
                        SearchDirs_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, SearchDirs_68, 0) = ((MR_Box) (Var_90));
                        MR_hl_field(1, SearchDirs_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    break;
                }
                break;
            }
            make__timestamp__get_file_timestamp_7_p_0(SearchDirs_68, FileName_20, &MaybeTimestamp0_69, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_35_78);
            succeeded = ((MR_tag((MR_Word) MaybeTimestamp0_69)) == (MR_Integer) 1);
            if (succeeded)
            {
              if ((TargetType_67 == (MR_Word) ((MR_Unsigned) 28U)))
                succeeded = MR_TRUE;
              else
              if ((TargetType_67 == (MR_Word) ((MR_Unsigned) 24U)))
                succeeded = MR_TRUE;
              else
                succeeded = MR_FALSE;
            }
            if (succeeded)
            {
              MR_Word MaybeModuleDepInfo_71;
              MR_Word STATE_VARIABLE_Info_37_80;
              MR_Word ModuleDepInfo_72;
              MR_String ModuleDir_73;
              MR_String Var_84;

              make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_10, Globals_11, ModuleName_66, &MaybeModuleDepInfo_71, STATE_VARIABLE_Info_35_78, &STATE_VARIABLE_Info_37_80);
              succeeded = (MaybeModuleDepInfo_71 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ModuleDepInfo_72 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_71, (MR_Integer) 0))));
                parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_72, &ModuleDir_73);
                Var_84 = mercury__dir__this_directory_0_f_0();
                succeeded = (strcmp(ModuleDir_73, Var_84) == 0);
                succeeded = !(succeeded);
              }
              if (succeeded)
              {
                MR_Word FileTimestamps0_74;
                MR_Word FileTimestamps_75;
                MR_Word Var_81;

                Var_81 = libs__timestamp__oldest_timestamp_0_f_0();
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeTimestamp_14 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_81));
                }
                FileTimestamps0_74 = make__make_info__make_info_get_file_timestamps_1_f_0(STATE_VARIABLE_Info_37_80);
                mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_1[0]), ((MR_Box) (FileName_20)), ((MR_Box) (*MaybeTimestamp_14)), FileTimestamps0_74, &FileTimestamps_75);
                make__make_info__make_info_set_file_timestamps_3_p_0(FileTimestamps_75, STATE_VARIABLE_Info_37_80, STATE_VARIABLE_Info_29);
              }
              else
              {
                *MaybeTimestamp_14 = MaybeTimestamp0_69;
                *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_37_80;
              }
            }
            else
            {
              *MaybeTimestamp_14 = MaybeTimestamp0_69;
              *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_35_78;
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

    TargetFileTimestamps0_21 = make__make_info__make_info_get_target_file_timestamps_1_f_0(STATE_VARIABLE_Info_0_28);
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
      *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
    }
    else
    {
      MR_Word STATE_VARIABLE_Info_39_39;
      MR_Word STATE_VARIABLE_Info_41_41;
      MR_Word ForSearch_46;
      MR_String FileName_47;

      ForSearch_46 = parse_tree__file_names__maybe_search_to_maybe_for_search_1_f_0(Search_12);
      make__file_names__module_maybe_nested_target_file_to_file_name_10_p_0(ProgressStream_10, Globals_11, (MR_String) "predicate \140make.timestamp.get_target_timestamp\'/9", ForSearch_46, TargetFile_13, &FileName_47, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_39_39);
      make__timestamp__get_target_timestamp_uncached_10_p_0(ProgressStream_10, Globals_11, Search_12, TargetFile_13, FileName_47, MaybeTimestamp_14, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_41_41);
      if (((MR_tag((MR_Word) *MaybeTimestamp_14)) == (MR_Integer) 1))
        *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_41_41;
      else
      {
        MR_Word TargetFileTimestamps1_25;
        MR_Word TargetFileTimestamps_26;
        MR_Word Timestamp_44 = ((MR_Word) ((MR_hl_field(0, *MaybeTimestamp_14, (MR_Integer) 0))));

        TargetFileTimestamps1_25 = make__make_info__make_info_get_target_file_timestamps_1_f_0(STATE_VARIABLE_Info_41_41);
        mercury__version_hash_table__det_insert_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), ((MR_Box) (TargetFile_13)), ((MR_Box) (Timestamp_44)), TargetFileTimestamps1_25, &TargetFileTimestamps_26);
        make__make_info__make_info_set_target_file_timestamps_3_p_0(TargetFileTimestamps_26, STATE_VARIABLE_Info_41_41, STATE_VARIABLE_Info_29);
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
                MR_Word SearchDirOpt_79 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[3])), (MR_Integer) 0))));
                MR_Word SearchDirs0_80;
                MR_String Var_72;

                libs__globals__lookup_accumulating_option_3_p_0(Globals_12, SearchDirOpt_79, &SearchDirs0_80);
                Var_72 = mercury__dir__this_directory_0_f_0();
                succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_72)), SearchDirs0_80);
                if (succeeded)
                  SearchDirs_21 = SearchDirs0_80;
                else
                {
                  MR_String Var_74;

                  Var_74 = mercury__dir__this_directory_0_f_0();
                  {
                    SearchDirs_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SearchDirs_21, 0) = ((MR_Box) (Var_74));
                    MR_hl_field(1, SearchDirs_21, 1) = ((MR_Box) (SearchDirs0_80));
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
            MR_Word SearchDirOpt_67 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_3[2])), (MR_Integer) 0))));
            MR_Word SearchDirs0_68;
            MR_String Var_60;

            libs__globals__lookup_accumulating_option_3_p_0(Globals_12, SearchDirOpt_67, &SearchDirs0_68);
            Var_60 = mercury__dir__this_directory_0_f_0();
            succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_60)), SearchDirs0_68);
            if (succeeded)
              SearchDirs_21 = SearchDirs0_68;
            else
            {
              MR_String Var_62;

              Var_62 = mercury__dir__this_directory_0_f_0();
              {
                SearchDirs_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, SearchDirs_21, 0) = ((MR_Box) (Var_62));
                MR_hl_field(1, SearchDirs_21, 1) = ((MR_Box) (SearchDirs0_68));
              }
            }
          }
          break;
        case (MR_Integer) 2:
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
