/*
** Automatically generated from `make.timestamp.m'
** by the Mercury compiler,
** version rotd-2026-07-09
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
#include "backend_libs.link_target_util.mih"
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
#include "make.file_names.mih"
#include "make.get_module_dep_info.mih"
#include "make.hash.mih"
#include "make.index_set.mih"
#include "make.make_info.mih"
#include "make.options_file.mih"
#include "make.prereqs_cache.mih"
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
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static void MR_CALL 
make__timestamp__init_target_file_timestamp_map_0_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box make__timestamp_scalar_common_1[3][2];

static /* final */ const MR_Box make__timestamp_scalar_common_2[2][3];

static /* final */ const MR_Box make__timestamp_scalar_common_3[1][4];

static /* final */ const MR_Box make__timestamp_scalar_common_4[1][1];

static /* final */ const MR_Box make__timestamp_scalar_common_5[1][5];




static /* final */ const MR_Box make__timestamp_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &make__timestamp_scalar_common_4[0])))
  },
};

static /* final */ const MR_Box make__timestamp_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__timestamp_scalar_common_5[0])),
    ((MR_Box) (make__timestamp__init_target_file_timestamp_map_0_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__timestamp_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__timestamp_scalar_common_1[0])),
    ((MR_Box) (&make__timestamp_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box make__timestamp_scalar_common_4[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "invalid module")) },
};

static /* final */ const MR_Box make__timestamp_scalar_common_5[1][5] = {
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
make__timestamp__get_target_timestamp_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word TargetFile_11,
  MR_Word * MaybeTimestamp_12,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_bool succeeded;
  MR_Word ModuleName_15 = ((MR_Word) ((MR_hl_field(0, TargetFile_11, 0))));
  MR_Word TargetType_16 = ((MR_Word) ((MR_hl_field(0, TargetFile_11, 1))));

  succeeded = (TargetType_16 == (MR_Word) ((MR_Unsigned) 28U));
  if (succeeded)
  {
    MR_String FileName_17;
    MR_Word ModuleName_40;
    MR_Word TargetType_41;
    MR_Word FileTimestampMap0_42;
    MR_String _FileNameProposed_18;
    MR_Tuple MapValue_43;
    MR_Box conv0_MapValue_43;

    make__file_names__module_target_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140make.timestamp.get_target_timestamp\'/8", TargetType_16, ModuleName_15, &FileName_17, &_FileNameProposed_18);
    ModuleName_40 = ((MR_Word) ((MR_hl_field(0, TargetFile_11, 0))));
    TargetType_41 = ((MR_Word) ((MR_hl_field(0, TargetFile_11, 1))));
    FileTimestampMap0_42 = make__make_info__make_info_get_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_0_22);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_3[0]), FileTimestampMap0_42, ((MR_Box) (FileName_17)), &conv0_MapValue_43);
    if (succeeded)
    {
      MapValue_43 = ((MR_Tuple) (conv0_MapValue_43));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *MaybeTimestamp_12 = ((MR_Word) ((MR_hl_field(0, MapValue_43, 1))));
      *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
    }
    else
    {
      MR_Word Status_45;

      analysis__operations__do_read_module_overall_status_6_p_0((MR_Word) (&make__timestamp_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 0)), Globals_10, ModuleName_40, &Status_45);
      switch (Status_45) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word FileTimestampMap_46;

            *MaybeTimestamp_12 = (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_4[0]));
            mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_3[0]), ((MR_Box) (FileName_17)), ((MR_Box) (&make__timestamp_scalar_common_1[2])), FileTimestampMap0_42, &FileTimestampMap_46);
            make__make_info__make_info_set_file_timestamp_map_3_p_0(FileTimestampMap_46, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            MR_Word SearchDirs_58;
            MR_Word MaybeTimestamp0_59;
            MR_Word STATE_VARIABLE_Info_1_60;

            make__timestamp__get_file_timestamp_8_p_0((MR_Word) ((MR_Unsigned) 0U), FileName_17, &SearchDirs_58, &MaybeTimestamp0_59, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_1_60);
            succeeded = ((MR_tag((MR_Word) MaybeTimestamp0_59)) == (MR_Integer) 1);
            if (succeeded)
            {
              if ((TargetType_41 == (MR_Word) ((MR_Unsigned) 28U)))
                succeeded = MR_TRUE;
              else
              if ((TargetType_41 == (MR_Word) ((MR_Unsigned) 24U)))
                succeeded = MR_TRUE;
              else
                succeeded = MR_FALSE;
            }
            if (succeeded)
            {
              MR_Word MaybeModuleDepInfo_63;
              MR_Word STATE_VARIABLE_Info_1_68;
              MR_Word ModuleDepInfo_64;
              MR_String ModuleDir_65;
              MR_String Var_73;

              make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_9, Globals_10, ModuleName_40, &MaybeModuleDepInfo_63, STATE_VARIABLE_Info_1_60, &STATE_VARIABLE_Info_1_68);
              succeeded = (MaybeModuleDepInfo_63 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ModuleDepInfo_64 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_63, 0))));
                parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_64, &ModuleDir_65);
                Var_73 = mercury__dir__this_directory_0_f_0();
                succeeded = (strcmp(ModuleDir_65, Var_73) == 0);
                succeeded = !(succeeded);
              }
              if (succeeded)
              {
                MR_Word FileTimestampMap0_66;
                MR_Word FileTimestampMap_67;
                MR_Word Var_69;
                MR_Tuple Var_70;

                Var_69 = libs__timestamp__oldest_timestamp_0_f_0();
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeTimestamp_12 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_69));
                }
                FileTimestampMap0_66 = make__make_info__make_info_get_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_1_68);
                {
                  Var_70 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_70, 0) = ((MR_Box) (SearchDirs_58));
                  MR_hl_field(0, Var_70, 1) = ((MR_Box) (*MaybeTimestamp_12));
                }
                mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_3[0]), ((MR_Box) (FileName_17)), ((MR_Box) (Var_70)), FileTimestampMap0_66, &FileTimestampMap_67);
                make__make_info__make_info_set_file_timestamp_map_3_p_0(FileTimestampMap_67, STATE_VARIABLE_Info_1_68, STATE_VARIABLE_Info_23);
              }
              else
              {
                *MaybeTimestamp_12 = MaybeTimestamp0_59;
                *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_1_68;
              }
            }
            else
            {
              *MaybeTimestamp_12 = MaybeTimestamp0_59;
              *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_1_60;
            }
          }
          break;
      }
    }
  }
  else
  {
    MR_Word Timestamp_19;
    MR_Word Cache0_74;
    MR_Box conv1_Timestamp_19;

    Cache0_74 = make__make_info__make_info_get_target_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_0_22);
    succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), Cache0_74, ((MR_Box) (TargetFile_11)), &conv1_Timestamp_19);
    if (succeeded)
    {
      Timestamp_19 = ((MR_Word) (conv1_Timestamp_19));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTimestamp_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Timestamp_19));
      }
      *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
    }
    else
    {
      MR_Word STATE_VARIABLE_Info_2_33;
      MR_String FileName_39;
      MR_Word SearchDirs_78;
      MR_Word MaybeTimestamp0_79;
      MR_Word STATE_VARIABLE_Info_1_80;
      MR_String _FileNameProposed_38;

      make__file_names__module_maybe_nested_target_file_to_file_name_10_p_0(ProgressStream_9, Globals_10, (MR_String) "predicate \140make.timestamp.get_target_timestamp\'/8", TargetFile_11, &FileName_39, &_FileNameProposed_38, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_2_33);
      make__timestamp__get_file_timestamp_8_p_0((MR_Word) ((MR_Unsigned) 0U), FileName_39, &SearchDirs_78, &MaybeTimestamp0_79, STATE_VARIABLE_Info_2_33, &STATE_VARIABLE_Info_1_80);
      succeeded = ((MR_tag((MR_Word) MaybeTimestamp0_79)) == (MR_Integer) 1);
      if (succeeded)
      {
        if ((TargetType_16 == (MR_Word) ((MR_Unsigned) 28U)))
          succeeded = MR_TRUE;
        else
        if ((TargetType_16 == (MR_Word) ((MR_Unsigned) 24U)))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      if (succeeded)
      {
        MR_Word MaybeModuleDepInfo_83;
        MR_Word STATE_VARIABLE_Info_1_88;
        MR_Word ModuleDepInfo_84;
        MR_String ModuleDir_85;
        MR_String Var_93;

        make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_9, Globals_10, ModuleName_15, &MaybeModuleDepInfo_83, STATE_VARIABLE_Info_1_80, &STATE_VARIABLE_Info_1_88);
        succeeded = (MaybeModuleDepInfo_83 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ModuleDepInfo_84 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_83, 0))));
          parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_84, &ModuleDir_85);
          Var_93 = mercury__dir__this_directory_0_f_0();
          succeeded = (strcmp(ModuleDir_85, Var_93) == 0);
          succeeded = !(succeeded);
        }
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_Info_3_35;
          MR_Word FileTimestampMap0_86;
          MR_Word FileTimestampMap_87;
          MR_Tuple Var_90;
          MR_Word Timestamp_94;
          MR_Word TargetFileTimestampMap0_95;
          MR_Word TargetFileTimestampMap_96;

          Timestamp_94 = libs__timestamp__oldest_timestamp_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeTimestamp_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Timestamp_94));
          }
          FileTimestampMap0_86 = make__make_info__make_info_get_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_1_88);
          {
            Var_90 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_90, 0) = ((MR_Box) (SearchDirs_78));
            MR_hl_field(0, Var_90, 1) = ((MR_Box) (*MaybeTimestamp_12));
          }
          mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_3[0]), ((MR_Box) (FileName_39)), ((MR_Box) (Var_90)), FileTimestampMap0_86, &FileTimestampMap_87);
          make__make_info__make_info_set_file_timestamp_map_3_p_0(FileTimestampMap_87, STATE_VARIABLE_Info_1_88, &STATE_VARIABLE_Info_3_35);
          TargetFileTimestampMap0_95 = make__make_info__make_info_get_target_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_3_35);
          mercury__version_hash_table__det_insert_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), ((MR_Box) (TargetFile_11)), ((MR_Box) (Timestamp_94)), TargetFileTimestampMap0_95, &TargetFileTimestampMap_96);
          make__make_info__make_info_set_target_file_timestamp_map_3_p_0(TargetFileTimestampMap_96, STATE_VARIABLE_Info_3_35, STATE_VARIABLE_Info_23);
        }
        else
        {
          *MaybeTimestamp_12 = MaybeTimestamp0_79;
          *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_1_88;
        }
      }
      else
      {
        *MaybeTimestamp_12 = MaybeTimestamp0_79;
        if (((MR_tag((MR_Word) *MaybeTimestamp_12)) == (MR_Integer) 1))
          *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_1_80;
        else
        {
          MR_Word Timestamp_100 = ((MR_Word) ((MR_hl_field(0, *MaybeTimestamp_12, 0))));
          MR_Word TargetFileTimestampMap0_101;
          MR_Word TargetFileTimestampMap_102;

          TargetFileTimestampMap0_101 = make__make_info__make_info_get_target_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_1_80);
          mercury__version_hash_table__det_insert_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), ((MR_Box) (TargetFile_11)), ((MR_Box) (Timestamp_100)), TargetFileTimestampMap0_101, &TargetFileTimestampMap_102);
          make__make_info__make_info_set_target_file_timestamp_map_3_p_0(TargetFileTimestampMap_102, STATE_VARIABLE_Info_1_80, STATE_VARIABLE_Info_23);
        }
      }
    }
  }
}

void MR_CALL 
make__timestamp__get_target_id_timestamp_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word TargetId_11,
  MR_Word * MaybeTimestamp_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) TargetId_11)) == (MR_Integer) 0))
  {
    MR_Word Target_17 = (MR_Word) ((MR_Word) (TargetId_11));
    MR_Word MaybeTimestamp0_18;
    MR_Word Var_30;
    MR_Word Var_31;

    make__timestamp__get_target_timestamp_search_8_p_0(ProgressStream_9, Globals_10, Target_17, &MaybeTimestamp0_18, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
    succeeded = ((MR_tag((MR_Word) MaybeTimestamp0_18)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_30 = ((MR_Word) ((MR_hl_field(0, Target_17, 1))));
      succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_31 = ((MR_Unsigned) ((MR_hl_field(1, Var_30, 0))) & (MR_Integer) 1);
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
        *MaybeTimestamp_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_32));
      }
    }
    else
      *MaybeTimestamp_12 = MaybeTimestamp0_18;
  }
  else
  {
    MR_String FileName_15 = ((MR_String) ((MR_hl_field(1, TargetId_11, 0))));
    MR_Word _SearchDirs_16;

    make__timestamp__get_file_timestamp_8_p_0((MR_Word) ((MR_Unsigned) 0U), FileName_15, &_SearchDirs_16, MaybeTimestamp_12, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
  }
}

void MR_CALL 
make__timestamp__get_target_timestamp_search_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word TargetFile_11,
  MR_Word * MaybeTimestamp_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;
  MR_Word ModuleName_15 = ((MR_Word) ((MR_hl_field(0, TargetFile_11, 0))));
  MR_Word TargetType_16 = ((MR_Word) ((MR_hl_field(0, TargetFile_11, 1))));

  succeeded = (TargetType_16 == (MR_Word) ((MR_Unsigned) 28U));
  if (succeeded)
  {
    MR_Word SearchAuthDirs_17;
    MR_String FileName_18;
    MR_Word ModuleName_42;
    MR_Word TargetType_43;
    MR_Word FileTimestampMap0_44;
    MR_String _FileNameProposed_19;
    MR_Tuple MapValue_45;
    MR_Box conv0_MapValue_45;

    make__file_names__module_target_to_search_file_name_9_p_0(Globals_10, (MR_String) "predicate \140make.timestamp.get_target_timestamp_search\'/8", TargetType_16, ModuleName_15, &SearchAuthDirs_17, &FileName_18, &_FileNameProposed_19);
    ModuleName_42 = ((MR_Word) ((MR_hl_field(0, TargetFile_11, 0))));
    TargetType_43 = ((MR_Word) ((MR_hl_field(0, TargetFile_11, 1))));
    FileTimestampMap0_44 = make__make_info__make_info_get_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_0_23);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_3[0]), FileTimestampMap0_44, ((MR_Box) (FileName_18)), &conv0_MapValue_45);
    if (succeeded)
    {
      MapValue_45 = ((MR_Tuple) (conv0_MapValue_45));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *MaybeTimestamp_12 = ((MR_Word) ((MR_hl_field(0, MapValue_45, 1))));
      *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
    }
    else
    {
      MR_Word Status_47;

      analysis__operations__do_read_module_overall_status_6_p_0((MR_Word) (&make__timestamp_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 0)), Globals_10, ModuleName_42, &Status_47);
      switch (Status_47) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word FileTimestampMap_48;

            *MaybeTimestamp_12 = (MR_Word) (MR_mkword(1, &make__timestamp_scalar_common_4[0]));
            mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_3[0]), ((MR_Box) (FileName_18)), ((MR_Box) (&make__timestamp_scalar_common_1[2])), FileTimestampMap0_44, &FileTimestampMap_48);
            make__make_info__make_info_set_file_timestamp_map_3_p_0(FileTimestampMap_48, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            MR_Word SearchDirs_59;
            MR_Word MaybeTimestamp0_60;
            MR_Word STATE_VARIABLE_Info_1_61;

            make__timestamp__get_file_timestamp_8_p_0(SearchAuthDirs_17, FileName_18, &SearchDirs_59, &MaybeTimestamp0_60, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_1_61);
            succeeded = ((MR_tag((MR_Word) MaybeTimestamp0_60)) == (MR_Integer) 1);
            if (succeeded)
            {
              if ((TargetType_43 == (MR_Word) ((MR_Unsigned) 28U)))
                succeeded = MR_TRUE;
              else
              if ((TargetType_43 == (MR_Word) ((MR_Unsigned) 24U)))
                succeeded = MR_TRUE;
              else
                succeeded = MR_FALSE;
            }
            if (succeeded)
            {
              MR_Word MaybeModuleDepInfo_64;
              MR_Word STATE_VARIABLE_Info_1_69;
              MR_Word ModuleDepInfo_65;
              MR_String ModuleDir_66;
              MR_String Var_74;

              make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_9, Globals_10, ModuleName_42, &MaybeModuleDepInfo_64, STATE_VARIABLE_Info_1_61, &STATE_VARIABLE_Info_1_69);
              succeeded = (MaybeModuleDepInfo_64 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ModuleDepInfo_65 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_64, 0))));
                parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_65, &ModuleDir_66);
                Var_74 = mercury__dir__this_directory_0_f_0();
                succeeded = (strcmp(ModuleDir_66, Var_74) == 0);
                succeeded = !(succeeded);
              }
              if (succeeded)
              {
                MR_Word FileTimestampMap0_67;
                MR_Word FileTimestampMap_68;
                MR_Word Var_70;
                MR_Tuple Var_71;

                Var_70 = libs__timestamp__oldest_timestamp_0_f_0();
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeTimestamp_12 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_70));
                }
                FileTimestampMap0_67 = make__make_info__make_info_get_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_1_69);
                {
                  Var_71 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_71, 0) = ((MR_Box) (SearchDirs_59));
                  MR_hl_field(0, Var_71, 1) = ((MR_Box) (*MaybeTimestamp_12));
                }
                mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_3[0]), ((MR_Box) (FileName_18)), ((MR_Box) (Var_71)), FileTimestampMap0_67, &FileTimestampMap_68);
                make__make_info__make_info_set_file_timestamp_map_3_p_0(FileTimestampMap_68, STATE_VARIABLE_Info_1_69, STATE_VARIABLE_Info_24);
              }
              else
              {
                *MaybeTimestamp_12 = MaybeTimestamp0_60;
                *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_1_69;
              }
            }
            else
            {
              *MaybeTimestamp_12 = MaybeTimestamp0_60;
              *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_1_61;
            }
          }
          break;
      }
    }
  }
  else
  {
    MR_Word Timestamp_20;
    MR_Word Cache0_75;
    MR_Box conv1_Timestamp_20;

    Cache0_75 = make__make_info__make_info_get_target_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_0_23);
    succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), Cache0_75, ((MR_Box) (TargetFile_11)), &conv1_Timestamp_20);
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
      *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
    }
    else
    {
      MR_Word STATE_VARIABLE_Info_2_34;
      MR_Word SearchAuthDirs_40;
      MR_String FileName_41;
      MR_Word SearchDirs_78;
      MR_Word MaybeTimestamp0_79;
      MR_Word STATE_VARIABLE_Info_1_80;
      MR_String _FileNameProposed_39;

      make__file_names__module_maybe_nested_target_file_to_search_file_name_11_p_0(ProgressStream_9, Globals_10, (MR_String) "predicate \140make.timestamp.get_target_timestamp_search\'/8", TargetFile_11, &SearchAuthDirs_40, &FileName_41, &_FileNameProposed_39, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_2_34);
      make__timestamp__get_file_timestamp_8_p_0(SearchAuthDirs_40, FileName_41, &SearchDirs_78, &MaybeTimestamp0_79, STATE_VARIABLE_Info_2_34, &STATE_VARIABLE_Info_1_80);
      succeeded = ((MR_tag((MR_Word) MaybeTimestamp0_79)) == (MR_Integer) 1);
      if (succeeded)
      {
        if ((TargetType_16 == (MR_Word) ((MR_Unsigned) 28U)))
          succeeded = MR_TRUE;
        else
        if ((TargetType_16 == (MR_Word) ((MR_Unsigned) 24U)))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      if (succeeded)
      {
        MR_Word MaybeModuleDepInfo_83;
        MR_Word STATE_VARIABLE_Info_1_88;
        MR_Word ModuleDepInfo_84;
        MR_String ModuleDir_85;
        MR_String Var_93;

        make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_9, Globals_10, ModuleName_15, &MaybeModuleDepInfo_83, STATE_VARIABLE_Info_1_80, &STATE_VARIABLE_Info_1_88);
        succeeded = (MaybeModuleDepInfo_83 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ModuleDepInfo_84 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_83, 0))));
          parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_84, &ModuleDir_85);
          Var_93 = mercury__dir__this_directory_0_f_0();
          succeeded = (strcmp(ModuleDir_85, Var_93) == 0);
          succeeded = !(succeeded);
        }
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_Info_3_36;
          MR_Word FileTimestampMap0_86;
          MR_Word FileTimestampMap_87;
          MR_Tuple Var_90;
          MR_Word Timestamp_94;
          MR_Word TargetFileTimestampMap0_95;
          MR_Word TargetFileTimestampMap_96;

          Timestamp_94 = libs__timestamp__oldest_timestamp_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeTimestamp_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Timestamp_94));
          }
          FileTimestampMap0_86 = make__make_info__make_info_get_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_1_88);
          {
            Var_90 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_90, 0) = ((MR_Box) (SearchDirs_78));
            MR_hl_field(0, Var_90, 1) = ((MR_Box) (*MaybeTimestamp_12));
          }
          mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_3[0]), ((MR_Box) (FileName_41)), ((MR_Box) (Var_90)), FileTimestampMap0_86, &FileTimestampMap_87);
          make__make_info__make_info_set_file_timestamp_map_3_p_0(FileTimestampMap_87, STATE_VARIABLE_Info_1_88, &STATE_VARIABLE_Info_3_36);
          TargetFileTimestampMap0_95 = make__make_info__make_info_get_target_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_3_36);
          mercury__version_hash_table__det_insert_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), ((MR_Box) (TargetFile_11)), ((MR_Box) (Timestamp_94)), TargetFileTimestampMap0_95, &TargetFileTimestampMap_96);
          make__make_info__make_info_set_target_file_timestamp_map_3_p_0(TargetFileTimestampMap_96, STATE_VARIABLE_Info_3_36, STATE_VARIABLE_Info_24);
        }
        else
        {
          *MaybeTimestamp_12 = MaybeTimestamp0_79;
          *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_1_88;
        }
      }
      else
      {
        *MaybeTimestamp_12 = MaybeTimestamp0_79;
        if (((MR_tag((MR_Word) *MaybeTimestamp_12)) == (MR_Integer) 1))
          *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_1_80;
        else
        {
          MR_Word Timestamp_100 = ((MR_Word) ((MR_hl_field(0, *MaybeTimestamp_12, 0))));
          MR_Word TargetFileTimestampMap0_101;
          MR_Word TargetFileTimestampMap_102;

          TargetFileTimestampMap0_101 = make__make_info__make_info_get_target_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_1_80);
          mercury__version_hash_table__det_insert_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), ((MR_Box) (TargetFile_11)), ((MR_Box) (Timestamp_100)), TargetFileTimestampMap0_101, &TargetFileTimestampMap_102);
          make__make_info__make_info_set_target_file_timestamp_map_3_p_0(TargetFileTimestampMap_102, STATE_VARIABLE_Info_1_80, STATE_VARIABLE_Info_24);
        }
      }
    }
  }
}

void MR_CALL 
make__timestamp__get_file_timestamp_8_p_0(
  MR_Word SearchAuthDirs_9,
  MR_String FileName_10,
  MR_Word * SearchDirs_11,
  MR_Word * MaybeTimestamp_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;
  MR_Word FileTimestampMap0_15;
  MR_Tuple MapValue_16;
  MR_Box conv0_MapValue_16;

  FileTimestampMap0_15 = make__make_info__make_info_get_file_timestamp_map_1_f_0(STATE_VARIABLE_Info_0_23);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_3[0]), FileTimestampMap0_15, ((MR_Box) (FileName_10)), &conv0_MapValue_16);
  if (succeeded)
  {
    MapValue_16 = ((MR_Tuple) (conv0_MapValue_16));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *SearchDirs_11 = ((MR_Word) ((MR_hl_field(0, MapValue_16, 0))));
    *MaybeTimestamp_12 = ((MR_Word) ((MR_hl_field(0, MapValue_16, 1))));
    *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
  }
  else
  {
    MR_Word SearchResult_17;

    parse_tree__find_module__search_for_file_mod_time_6_p_0(SearchAuthDirs_9, FileName_10, SearchDirs_11, &SearchResult_17);
    if (((MR_tag((MR_Word) SearchResult_17)) == (MR_Integer) 1))
    {
      MR_String NotFoundMsg_22;
      MR_String Var_39;

      Var_39 = mercury__string__f_43_43_2_f_0(FileName_10, (MR_String) "\' not found");
      NotFoundMsg_22 = mercury__string__f_43_43_2_f_0((MR_String) "file \140", Var_39);
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
      MR_Word TimeT_18 = ((MR_Word) ((MR_hl_field(0, SearchResult_17, 0))));
      MR_Word Timestamp_19;
      MR_Word FileTimestampMap_20;
      MR_Tuple Var_28;

      Timestamp_19 = libs__timestamp__time_t_to_timestamp_1_f_0(TimeT_18);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTimestamp_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Timestamp_19));
      }
      {
        Var_28 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_28, 0) = ((MR_Box) (*SearchDirs_11));
        MR_hl_field(0, Var_28, 1) = ((MR_Box) (*MaybeTimestamp_12));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__timestamp_scalar_common_3[0]), ((MR_Box) (FileName_10)), ((MR_Box) (Var_28)), FileTimestampMap0_15, &FileTimestampMap_20);
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

  HeadVar__1_1 = mercury__version_hash_table__unsafe_init_default_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), (MR_Word) (&make__timestamp_scalar_common_2[1]));
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
