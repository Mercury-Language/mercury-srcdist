/*
** Automatically generated from `make.util.m'
** by the Mercury compiler,
** version rotd-2020-07-30
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


// :- module make.util.
// :- implementation.

/*
INIT mercury__make__util__init
ENDINIT
*/

#include "make.util.mih"


#include "analysis.mih"
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
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
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
#include "libs.handle_options.mih"
#include "libs.md4.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.dependencies.mih"
#include "make.deps_set.mih"
#include "make.module_dep_file.mih"
#include "make.module_target.mih"
#include "make.options_file.mih"
#include "make.program_target.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.mmc_analysis.mih"




static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_dependency_list__525__1_2_f_0(
  MR_Word TargetType_5,
  MR_Word LambdaHeadVar__1_8);

static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_target_file_list__521__1_2_f_0(
  MR_Word TargetType_5,
  MR_Word LambdaHeadVar__1_8);

static void MR_CALL 
make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__959__1_4_p_0(
  MR_Word Globals_5,
  MR_Word Target_6);

static void MR_CALL 
make__util__make_write_module_or_linked_target_4_p_0(
  MR_Word Globals_5,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__util__file_error_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__util__target_file_error_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
make__util__make_dependency_list_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
make__util__make_target_file_list_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__util__get_target_timestamp_analysis_registry_9_p_0(
  MR_Word Globals_10,
  MR_Word Search_11,
  MR_Word TargetFile_12,
  MR_String FileName_13,
  MR_Word * MaybeTimestamp_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__util__get_target_timestamp_2_9_p_0(
  MR_Word Globals_10,
  MR_Word Search_11,
  MR_Word TargetFile_12,
  MR_String FileName_13,
  MR_Word * MaybeTimestamp_14,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
make__util__get_search_directories_3_p_0(
  MR_Word Globals_4,
  MR_Word TargetType_5,
  MR_Word * SearchDirs_6);

static void MR_CALL 
make__util__module_name_to_search_file_name_cache_8_p_0(
  MR_Word Globals_9,
  MR_String Ext_10,
  MR_Word ModuleName_11,
  MR_String * FileName_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
make__util__module_target_to_file_name_maybe_search_8_p_0(
  MR_Word Globals_9,
  MR_Word Search_10,
  MR_Word MkDir_11,
  MR_Word TargetType_12,
  MR_Word ModuleName_13,
  MR_String * FileName_14);


static /* final */ const MR_Box make__util_scalar_common_1[3][3];

static /* final */ const MR_Box make__util_scalar_common_2[1][2];

static /* final */ const MR_Box make__util_scalar_common_3[22][1];

static /* final */ const MR_Box make__util_scalar_common_4[3][6];

static /* final */ const MR_Box make__util_scalar_common_5[1][9];




static /* final */ const MR_Box make__util_scalar_common_1[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__util_scalar_common_2[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
};

static /* final */ const MR_Box make__util_scalar_common_3[22][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ".analysis"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ".c"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) ".mh"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) ".mih"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) ".cs"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) ".beam"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) ".erl"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) ".hrl"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) ".err"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) ".int0"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) ".int"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) ".int2"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) ".int3"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) ".class"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) ".java"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) ".opt"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) ".m"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) ".track_flags"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) ".xml"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "invalid module"))
  },
  /* row 20 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 21 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box make__util_scalar_common_4[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__make__type_ctor_info_module_target_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_file_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__make__type_ctor_info_module_target_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__util_scalar_common_5[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make__type_ctor_info_target_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "make.build.mh"
#include "make.util.mh"



static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_dependency_list__525__1_2_f_0(
  MR_Word TargetType_5,
  MR_Word LambdaHeadVar__1_8)
{
  {
    MR_Word LambdaHeadVar__2_9;
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (LambdaHeadVar__1_8));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (TargetType_5));
    }
    {
      LambdaHeadVar__2_9 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_9, 0) = ((MR_Box) (Var_10));
    }
    return LambdaHeadVar__2_9;
  }
}

static MR_Word MR_CALL 
make__util__IntroducedFrom__func__make_target_file_list__521__1_2_f_0(
  MR_Word TargetType_5,
  MR_Word LambdaHeadVar__1_8)
{
  {
    MR_Word LambdaHeadVar__2_9;

    {
      LambdaHeadVar__2_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_9, 0) = ((MR_Box) (LambdaHeadVar__1_8));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_9, 1) = ((MR_Box) (TargetType_5));
    }
    return LambdaHeadVar__2_9;
  }
}

void MR_CALL 
make__util__dependency_file_hash_2_p_0(
  MR_Word DepFile_3,
  MR_Integer * Hash_4)
{
  if (((MR_tag((MR_Word) DepFile_3)) == (MR_Integer) 1))
  {
    MR_String FileName_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), DepFile_3, (MR_Integer) 0))));

    *Hash_4 = mercury__string__hash_1_f_0(FileName_6);
  }
  else
  {
    MR_Word TargetFile_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DepFile_3, (MR_Integer) 0))));
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_5, (MR_Integer) 0))));
    MR_Word Type_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_5, (MR_Integer) 1))));
    MR_Integer Hash0_12;
    MR_Integer Hash1_13;
    MR_Integer H1_41;
    MR_Integer Var_42;

    if (((MR_tag((MR_Word) ModuleName_10)) == (MR_Integer) 1))
    {
      MR_String String_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), ModuleName_10, (MR_Integer) 1))));

      Hash0_12 = mercury__string__hash_1_f_0(String_18);
    }
    else
    {
      MR_String String_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleName_10, (MR_Integer) 0))));

      Hash0_12 = mercury__string__hash_1_f_0(String_16);
    }
    switch (MR_tag((MR_Word) Type_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Type_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Hash1_13 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            Hash1_13 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            Hash1_13 = (MR_Integer) 3;
            break;
          case (MR_Integer) 3:
            Hash1_13 = (MR_Integer) 4;
            break;
          case (MR_Integer) 4:
            Hash1_13 = (MR_Integer) 5;
            break;
          case (MR_Integer) 5:
            Hash1_13 = (MR_Integer) 6;
            break;
          case (MR_Integer) 6:
            Hash1_13 = (MR_Integer) 7;
            break;
          case (MR_Integer) 7:
            Hash1_13 = (MR_Integer) 8;
            break;
          case (MR_Integer) 8:
            Hash1_13 = (MR_Integer) 20;
            break;
          case (MR_Integer) 9:
            Hash1_13 = (MR_Integer) 11;
            break;
          case (MR_Integer) 10:
            Hash1_13 = (MR_Integer) 22;
            break;
          case (MR_Integer) 11:
            Hash1_13 = (MR_Integer) 12;
            break;
          case (MR_Integer) 12:
            Hash1_13 = (MR_Integer) 21;
            break;
          case (MR_Integer) 13:
            Hash1_13 = (MR_Integer) 13;
            break;
          case (MR_Integer) 14:
            Hash1_13 = (MR_Integer) 14;
            break;
          case (MR_Integer) 15:
            Hash1_13 = (MR_Integer) 15;
            break;
          case (MR_Integer) 16:
            Hash1_13 = (MR_Integer) 19;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Type_11, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_31) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Hash1_13 = (MR_Integer) 9;
              break;
            case (MR_Integer) 1:
              Hash1_13 = (MR_Integer) 10;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PIC_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Type_11, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Integer Var_26;
          MR_Integer H1_35;

          switch (PIC_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              Var_26 = (MR_Integer) 3;
              break;
            case (MR_Integer) 0:
              Var_26 = (MR_Integer) 1;
              break;
          }
          H1_35 = ((MR_Integer) 16 ^ (((MR_Integer) 16 << 5)));
          Hash1_13 = (H1_35 ^ Var_26);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Hash1_13 = (MR_Integer) 17;
            break;
          case (MR_Integer) 1:
            Hash1_13 = (MR_Integer) 18;
            break;
        }
        break;
    }
    Var_42 = (Hash0_12 << 5);
    H1_41 = (Hash0_12 ^ Var_42);
    *Hash_4 = (H1_41 ^ Hash1_13);
  }
}

void MR_CALL 
make__util__module_name_hash_2_p_0(
  MR_Word SymName_3,
  MR_Integer * Hash_4)
{
  if (((MR_tag((MR_Word) SymName_3)) == (MR_Integer) 1))
  {
    MR_String String_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_3, (MR_Integer) 1))));

    *Hash_4 = mercury__string__hash_1_f_0(String_7);
  }
  else
  {
    MR_String String_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_3, (MR_Integer) 0))));

    *Hash_4 = mercury__string__hash_1_f_0(String_5);
  }
}

void MR_CALL 
make__util__get_real_milliseconds_3_p_0(
  MR_Integer * Time_1)
{
  {
{
#define MR_PROC_LABEL make__util__get_real_milliseconds_3_p_0

	MR_Integer Time;

		{

    Time = MR_get_real_milliseconds();


		;}
#undef MR_PROC_LABEL
	 *Time_1  = Time;
}
  }
}

void MR_CALL 
make__util__maybe_symlink_or_copy_linked_target_message_4_p_0(
  MR_Word Globals_5,
  MR_Word Target_6)
{
  {
    MR_Word OptionValue_36;

    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 70, &OptionValue_36);
    switch (OptionValue_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__959__1_4_p_0(Globals_5, Target_6);
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

static void MR_CALL 
make__util__IntroducedFrom__pred__maybe_symlink_or_copy_linked_target_message__959__1_4_p_0(
  MR_Word Globals_5,
  MR_Word Target_6)
{
  {
    MR_Word ModuleName_26;
    MR_Word TargetType_27;

    mercury__io__write_string_3_p_0((MR_String) "Made symlink/copy of ");
    ModuleName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Target_6, (MR_Integer) 0))));
    TargetType_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Target_6, (MR_Integer) 1))));
    switch (MR_tag((MR_Word) TargetType_27)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ModuleTargetType_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetType_27, (MR_Integer) 0))));
          MR_Word TargetFile_30;

          {
            TargetFile_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TargetFile_30, 0) = ((MR_Box) (ModuleName_26));
            MR_hl_field(MR_mktag(0), TargetFile_30, 1) = ((MR_Box) (ModuleTargetType_29));
          }
          make__util__make_write_target_file_wrapped_6_p_0(Globals_5, (MR_String) "", TargetFile_30, (MR_String) "");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LinkedTargetType_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), TargetType_27, (MR_Integer) 0))) & (MR_Integer) 15);
          MR_String FileName_32;

          make__util__linked_target_file_name_6_p_0(Globals_5, ModuleName_26, LinkedTargetType_31, &FileName_32);
          mercury__io__write_string_3_p_0(FileName_32);
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.util.make_write_module_or_linked_target\'/4", (MR_String) "misc_target");
          return;
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

void MR_CALL 
make__util__maybe_warn_up_to_date_target_6_p_0(
  MR_Word Globals_7,
  MR_Word Target_8,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_bool succeeded;
    MR_Word Warn_11;
    MR_Word CmdLineTargets0_12;
    MR_Word CmdLineTargets_13;
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
    MR_Word Var_78;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Integer Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Unsigned packed_word_2;

    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 39, &Warn_11);
    switch (Warn_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 16))));

          succeeded = mercury__set__member_2_p_0((MR_Word) (&make__util_scalar_common_1[1]), ((MR_Box) (Target_8)), Var_19);
          if (succeeded)
          {
            mercury__io__write_string_3_p_0((MR_String) "** Nothing to be done for \140");
            make__util__make_write_module_or_linked_target_4_p_0(Globals_7, Target_8);
            mercury__io__write_string_3_p_0((MR_String) "\'.\n");
          }
        }
        break;
    }
    CmdLineTargets0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 16))));
    mercury__set__delete_3_p_0((MR_Word) (&make__util_scalar_common_1[1]), ((MR_Box) (Target_8)), CmdLineTargets0_12, &CmdLineTargets_13);
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 0))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 1))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 2))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 3))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 4))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 5))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 6))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 7))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 8))));
    Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 9))));
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 10))));
    Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 11))));
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 12))));
    packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 13)));
    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 14))));
    Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 15))));
    Var_84 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 17))));
    Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 18))));
    Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 19))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_2);
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (CmdLineTargets_13));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_86));
    }
  }
}

static void MR_CALL 
make__util__make_write_module_or_linked_target_4_p_0(
  MR_Word Globals_5,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word ModuleName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TargetType_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) TargetType_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ModuleTargetType_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetType_7, (MR_Integer) 0))));
          MR_Word TargetFile_10;

          {
            TargetFile_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TargetFile_10, 0) = ((MR_Box) (ModuleName_6));
            MR_hl_field(MR_mktag(0), TargetFile_10, 1) = ((MR_Box) (ModuleTargetType_9));
          }
          make__util__make_write_target_file_wrapped_6_p_0(Globals_5, (MR_String) "", TargetFile_10, (MR_String) "");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LinkedTargetType_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), TargetType_7, (MR_Integer) 0))) & (MR_Integer) 15);
          MR_String FileName_12;

          make__util__linked_target_file_name_6_p_0(Globals_5, ModuleName_6, LinkedTargetType_11, &FileName_12);
          mercury__io__write_string_3_p_0(FileName_12);
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.util.make_write_module_or_linked_target\'/4", (MR_String) "misc_target");
          return;
        }
        break;
    }
  }
}

static void MR_CALL 
make__util__file_error_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_string_3_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
  }
}

void MR_CALL 
make__util__file_error_4_p_0(
  MR_Word Info_5,
  MR_String TargetFile_6)
{
  {
    MR_Word Var_10;
    MR_String Var_12;
    MR_String Var_14;

    Var_14 = mercury__string__f_43_43_2_f_0(TargetFile_6, (MR_String) "\'.\n");
    Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "** Error making \140", Var_14);
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&make__util_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (make__util__file_error_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_12));
    }
    make__build__with_locked_stdout_4_p_0(Info_5, Var_10);
  }
}

static void MR_CALL 
make__util__target_file_error_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    make__util__make_write_target_file_wrapped_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))));
  }
}

void MR_CALL 
make__util__target_file_error_5_p_0(
  MR_Word Info_6,
  MR_Word Globals_7,
  MR_Word TargetFile_8)
{
  {
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&make__util_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (make__util__target_file_error_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Globals_7));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) ((MR_String) "** Error making \140"));
      MR_hl_field(MR_mktag(0), Var_12, 5) = ((MR_Box) (TargetFile_8));
      MR_hl_field(MR_mktag(0), Var_12, 6) = ((MR_Box) ((MR_String) "\'.\n"));
    }
    make__build__with_locked_stdout_4_p_0(Info_6, Var_12);
  }
}

void MR_CALL 
make__util__maybe_reanalyse_modules_message_3_p_0(
  MR_Word Globals_4)
{
  {
    MR_Word OptionValue_35;

    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 70, &OptionValue_35);
    switch (OptionValue_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word OutputStream_43;

          mercury__io__output_stream_3_p_0(&OutputStream_43);
          mercury__io__write_string_4_p_0(OutputStream_43, (MR_String) "Reanalysing invalid/suboptimal modules\n");
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

void MR_CALL 
make__util__maybe_make_target_message_4_p_0(
  MR_Word Globals_5,
  MR_Word TargetFile_6)
{
  {
    MR_Word OutputStream_8;

    mercury__io__output_stream_3_p_0(&OutputStream_8);
    make__util__maybe_make_target_message_to_stream_5_p_0(Globals_5, OutputStream_8, TargetFile_6);
  }
}

void MR_CALL 
make__util__maybe_make_target_message_to_stream_5_p_0(
  MR_Word Globals_6,
  MR_Word OutputStream_7,
  MR_Word TargetFile_8)
{
  {
    MR_Word OptionValue_40;

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 70, &OptionValue_40);
    switch (OptionValue_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word OldOutputStream_49;
          MR_Word Var_50;

          mercury__io__set_output_stream_4_p_0(OutputStream_7, &OldOutputStream_49);
          make__util__make_write_target_file_wrapped_6_p_0(Globals_6, (MR_String) "Making ", TargetFile_8, (MR_String) "\n");
          mercury__io__set_output_stream_4_p_0(OldOutputStream_49, &Var_50);
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

void MR_CALL 
make__util__maybe_make_linked_target_message_4_p_0(
  MR_Word Globals_5,
  MR_String TargetFile_6)
{
  {
    MR_Word OptionValue_36;

    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 70, &OptionValue_36);
    switch (OptionValue_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_51;
          MR_String Var_54;

          Var_54 = mercury__string__f_43_43_2_f_0(TargetFile_6, (MR_String) "\n");
          Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "Making ", Var_54);
          mercury__io__write_string_3_p_0(Var_51);
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

void MR_CALL 
make__util__make_write_target_file_4_p_0(
  MR_Word Globals_5,
  MR_Word TargetFile_6)
{
  make__util__make_write_target_file_wrapped_6_p_0(Globals_5, (MR_String) "", TargetFile_6, (MR_String) "");
}

void MR_CALL 
make__util__make_write_dependency_file_list_4_p_0(
  MR_Word Globals_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word DepFile_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word DepFiles_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_3_p_0((MR_String) "\t");
      if (((MR_tag((MR_Word) DepFile_10)) == (MR_Integer) 1))
      {
        MR_String FileName_27 = ((MR_String) ((MR_hl_field(MR_mktag(1), DepFile_10, (MR_Integer) 0))));

        mercury__io__write_string_3_p_0(FileName_27);
      }
      else
      {
        MR_Word TargetFile_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DepFile_10, (MR_Integer) 0))));

        make__util__make_write_target_file_wrapped_6_p_0(Globals_1, (MR_String) "", TargetFile_21, (MR_String) "");
      }
      mercury__io__nl_2_p_0();
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = DepFiles_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
make__util__make_write_dependency_file_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_String FileName_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    mercury__io__write_string_3_p_0(FileName_12);
  }
  else
  {
    MR_Word TargetFile_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    make__util__make_write_target_file_wrapped_6_p_0(HeadVar__1_1, (MR_String) "", TargetFile_6, (MR_String) "");
  }
}

void MR_CALL 
make__util__debug_file_msg_5_p_0(
  MR_Word Globals_6,
  MR_Word TargetFile_7,
  MR_String Msg_8)
{
  {
    MR_Word OptionValue_38;

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 95, &OptionValue_38);
    switch (OptionValue_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          make__util__make_write_target_file_wrapped_6_p_0(Globals_6, (MR_String) "", TargetFile_7, (MR_String) "");
          mercury__io__write_string_3_p_0((MR_String) ": ");
          mercury__io__write_string_3_p_0(Msg_8);
          mercury__io__nl_2_p_0();
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

void MR_CALL 
make__util__make_write_target_file_wrapped_6_p_0(
  MR_Word Globals_7,
  MR_String Prefix_8,
  MR_Word TargetFile_9,
  MR_String Suffix_10)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_9, (MR_Integer) 0))));
    MR_Word TargetType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_9, (MR_Integer) 1))));
    MR_String FileName_14;

    make__util__module_target_to_file_name_maybe_search_8_p_0(Globals_7, (MR_Integer) 1, (MR_Integer) 1, TargetType_13, ModuleName_12, &FileName_14);
    succeeded = (strcmp(Prefix_8, (MR_String) "") == 0);
    if (succeeded)
      succeeded = (strcmp(Suffix_10, (MR_String) "") == 0);
    if (succeeded)
      mercury__io__write_string_3_p_0(FileName_14);
    else
    {
      MR_String Var_20;
      MR_String Var_22;

      Var_22 = mercury__string__f_43_43_2_f_0(FileName_14, Suffix_10);
      Var_20 = mercury__string__f_43_43_2_f_0(Prefix_8, Var_22);
      mercury__io__write_string_3_p_0(Var_20);
    }
  }
}

void MR_CALL 
make__util__verbose_make_msg_option_5_p_0(
  MR_Word Globals_6,
  MR_Word Option_7,
  MR_Word P_8)
{
  {
    MR_Word OptionValue_10;

    libs__globals__lookup_bool_option_3_p_0(Globals_6, Option_7, &OptionValue_10);
    switch (OptionValue_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_8, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_IO_13_13;

          func_0(((MR_Box) (P_8)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13_13);
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

void MR_CALL 
make__util__verbose_make_msg_4_p_0(
  MR_Word Globals_5,
  MR_Word P_6)
{
  {
    MR_Word OptionValue_18;

    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 70, &OptionValue_18);
    switch (OptionValue_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_IO_13_19;

          func_0(((MR_Box) (P_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13_19);
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

void MR_CALL 
make__util__debug_make_msg_4_p_0(
  MR_Word Globals_5,
  MR_Word P_6)
{
  {
    MR_Word OptionValue_18;

    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 95, &OptionValue_18);
    switch (OptionValue_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_6, (MR_Integer) 1))));
          MR_Box conv1_STATE_VARIABLE_IO_13_19;

          func_0(((MR_Box) (P_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13_19);
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

MR_bool MR_CALL 
make__util__target_is_grade_or_arch_dependent_1_p_0(
  MR_Word Target_2)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Target_2)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(Target_2)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 6:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 7:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 8:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 9:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 10:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 11:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 12:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 13:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 14:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 15:
            succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Target_2, (MR_Integer) 0))) & (MR_Integer) 1);

          succeeded = (Var_13 == (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 2:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Target_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
        }
        break;
    }
    return succeeded;
  }
}

void MR_CALL 
make__util__linked_target_file_name_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word TargetType_9,
  MR_String * FileName_10)
{
  switch (TargetType_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 1, (MR_String) ".exe", ModuleName_8, FileName_10);
      break;
    case (MR_Integer) 4:
      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 1, (MR_String) ".dll", ModuleName_8, FileName_10);
      break;
    case (MR_Integer) 8:
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_7, (MR_String) "lib", ModuleName_8, (MR_String) ".beams", (MR_Integer) 1, FileName_10);
      break;
    case (MR_Integer) 7:
      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 1, (MR_String) "", ModuleName_8, FileName_10);
      break;
    case (MR_Integer) 0:
      {
        MR_String Ext_12;

        libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 604, &Ext_12);
        parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 1, Ext_12, ModuleName_8, FileName_10);
      }
      break;
    case (MR_Integer) 6:
    case (MR_Integer) 5:
      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 1, (MR_String) ".jar", ModuleName_8, FileName_10);
      break;
    case (MR_Integer) 2:
      {
        MR_String Ext_43;

        libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 602, &Ext_43);
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_7, (MR_String) "lib", ModuleName_8, Ext_43, (MR_Integer) 1, FileName_10);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Ext_42;

        libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 603, &Ext_42);
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_7, (MR_String) "lib", ModuleName_8, Ext_42, (MR_Integer) 1, FileName_10);
      }
      break;
  }
}

MR_bool MR_CALL 
make__util__target_extension_synonym_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded = (strcmp(HeadVar__1_1, (MR_String) ".csharp") == 0);

    if (succeeded)
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 40U);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
make__util__target_extension_2_f_1(
  MR_Word Globals_4,
  MR_Word * Target_5,
  MR_Word MaybeExt_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_bool succeeded;

    {
      MR_String Var_33;

      *Target_5 = (MR_Word) ((MR_Unsigned) 0U);
      Var_33 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExt_6, (MR_Integer) 0))));
      succeeded = (strcmp(Var_33, (MR_String) ".m") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_32;

      *Target_5 = (MR_Word) ((MR_Unsigned) 4U);
      Var_32 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExt_6, (MR_Integer) 0))));
      succeeded = (strcmp(Var_32, (MR_String) ".err") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_31;

      *Target_5 = (MR_Word) ((MR_Unsigned) 8U);
      Var_31 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExt_6, (MR_Integer) 0))));
      succeeded = (strcmp(Var_31, (MR_String) ".int0") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_30;

      *Target_5 = (MR_Word) ((MR_Unsigned) 12U);
      Var_30 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExt_6, (MR_Integer) 0))));
      succeeded = (strcmp(Var_30, (MR_String) ".int") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_29;

      *Target_5 = (MR_Word) ((MR_Unsigned) 16U);
      Var_29 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExt_6, (MR_Integer) 0))));
      succeeded = (strcmp(Var_29, (MR_String) ".int2") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_28;

      *Target_5 = (MR_Word) ((MR_Unsigned) 20U);
      Var_28 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExt_6, (MR_Integer) 0))));
      succeeded = (strcmp(Var_28, (MR_String) ".int3") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_27;

      *Target_5 = (MR_Word) ((MR_Unsigned) 24U);
      Var_27 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExt_6, (MR_Integer) 0))));
      succeeded = (strcmp(Var_27, (MR_String) ".opt") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_26;

      *Target_5 = (MR_Word) ((MR_Unsigned) 28U);
      Var_26 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExt_6, (MR_Integer) 0))));
      succeeded = (strcmp(Var_26, (MR_String) ".analysis") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_25;

      *Target_5 = (MR_Word) ((MR_Unsigned) 32U);
      Var_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExt_6, (MR_Integer) 0))));
      succeeded = (strcmp(Var_25, (MR_String) ".track_flags") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_24 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExt_6, (MR_Integer) 0))));

      succeeded = (strcmp(Var_24, (MR_String) ".mih") == 0);
      if (succeeded)
      {
        *Target_5 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[20]));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExt_6, (MR_Integer) 0))));

      succeeded = (strcmp(Var_22, (MR_String) ".mh") == 0);
      if (succeeded)
      {
        *Target_5 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[21]));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_20;

      *Target_5 = (MR_Word) ((MR_Unsigned) 36U);
      Var_20 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExt_6, (MR_Integer) 0))));
      succeeded = (strcmp(Var_20, (MR_String) ".c") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_19;

      *Target_5 = (MR_Word) ((MR_Unsigned) 40U);
      Var_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExt_6, (MR_Integer) 0))));
      succeeded = (strcmp(Var_19, (MR_String) ".cs") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_18;

      *Target_5 = (MR_Word) ((MR_Unsigned) 44U);
      Var_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExt_6, (MR_Integer) 0))));
      succeeded = (strcmp(Var_18, (MR_String) ".java") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_17;

      *Target_5 = (MR_Word) ((MR_Unsigned) 48U);
      Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExt_6, (MR_Integer) 0))));
      succeeded = (strcmp(Var_17, (MR_String) ".class") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_16;

      *Target_5 = (MR_Word) ((MR_Unsigned) 52U);
      Var_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExt_6, (MR_Integer) 0))));
      succeeded = (strcmp(Var_16, (MR_String) ".hrl") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_15;

      *Target_5 = (MR_Word) ((MR_Unsigned) 56U);
      Var_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExt_6, (MR_Integer) 0))));
      succeeded = (strcmp(Var_15, (MR_String) ".erl") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_14;

      *Target_5 = (MR_Word) ((MR_Unsigned) 60U);
      Var_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExt_6, (MR_Integer) 0))));
      succeeded = (strcmp(Var_14, (MR_String) ".beam") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_Word PIC_7;
      MR_String Ext_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExt_6, (MR_Integer) 0))));

      succeeded = backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_1(Globals_4, &PIC_7, Ext_8);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Target_5 = base;
          MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (PIC_7));
        }
        succeeded = MR_TRUE;
      }
      if (succeeded)
        cont(cont_env_ptr);
    }
    {
      MR_String Var_13;

      *Target_5 = (MR_Word) ((MR_Unsigned) 64U);
      Var_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExt_6, (MR_Integer) 0))));
      succeeded = (strcmp(Var_13, (MR_String) ".xml") == 0);
      if (succeeded)
        cont(cont_env_ptr);
    }
  }
}

static MR_Box MR_CALL 
make__util__make_dependency_list_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_9;

    conv0_LambdaHeadVar__2_9 = make__util__IntroducedFrom__func__make_dependency_list__525__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_9));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
make__util__make_dependency_list_2_f_0(
  MR_Word ModuleNames_4,
  MR_Word TargetType_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&make__util_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (make__util__make_dependency_list_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (TargetType_5));
    }
    HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), Var_7, ModuleNames_4);
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
make__util__make_target_file_list_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_9;

    conv0_LambdaHeadVar__2_9 = make__util__IntroducedFrom__func__make_target_file_list__521__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_9));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
make__util__make_target_file_list_2_f_0(
  MR_Word ModuleNames_4,
  MR_Word TargetType_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&make__util_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (make__util__make_target_file_list_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (TargetType_5));
    }
    HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make__type_ctor_info_target_file_0), Var_7, ModuleNames_4);
    return HeadVar__3_3;
  }
}

void MR_CALL 
make__util__make_remove_module_file_8_p_0(
  MR_Word Globals_9,
  MR_Word VerboseOption_10,
  MR_Word ModuleName_11,
  MR_String Ext_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_String FileName_15;

    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, Ext_12, ModuleName_11, &FileName_15);
    make__util__make_remove_file_7_p_0(Globals_9, VerboseOption_10, FileName_15, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
  }
}

void MR_CALL 
make__util__make_remove_target_file_7_p_0(
  MR_Word Globals_8,
  MR_Word VerboseOption_9,
  MR_Word Target_10,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  {
    MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Target_10, (MR_Integer) 0))));
    MR_Word TargetType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Target_10, (MR_Integer) 1))));

    make__util__make_remove_target_file_by_name_8_p_0(Globals_8, VerboseOption_9, ModuleName_13, TargetType_14, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
  }
}

void MR_CALL 
make__util__make_remove_target_file_by_name_8_p_0(
  MR_Word Globals_9,
  MR_Word VerboseOption_10,
  MR_Word ModuleName_11,
  MR_Word TargetType_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_bool succeeded;
    MR_String FileName_15;
    MR_Word STATE_VARIABLE_Info_23_23;
    MR_String TimestampExt_16;

    make__util__module_target_to_file_name_maybe_search_8_p_0(Globals_9, (MR_Integer) 1, (MR_Integer) 1, TargetType_12, ModuleName_11, &FileName_15);
    make__util__make_remove_file_7_p_0(Globals_9, VerboseOption_10, FileName_15, STATE_VARIABLE_Info_0_17, &STATE_VARIABLE_Info_23_23);
    succeeded = make__util__timestamp_extension_2_p_0(TargetType_12, &TimestampExt_16);
    if (succeeded)
    {
      MR_String FileName_47;

      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, TimestampExt_16, ModuleName_11, &FileName_47);
      make__util__make_remove_file_7_p_0(Globals_9, VerboseOption_10, FileName_47, STATE_VARIABLE_Info_23_23, STATE_VARIABLE_Info_18);
    }
    else
      *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_23_23;
  }
}

void MR_CALL 
make__util__make_remove_file_7_p_0(
  MR_Word Globals_8,
  MR_Word VerboseOption_9,
  MR_String FileName_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word FileTimestamps0_14;
    MR_Word FileTimestamps_15;
    MR_Word OptionValue_75;
    MR_Word Var_13;
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
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Integer Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Unsigned packed_word_1;

    libs__globals__lookup_bool_option_3_p_0(Globals_8, VerboseOption_9, &OptionValue_75);
    switch (OptionValue_75) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "Removing ");
          mercury__io__write_string_3_p_0(FileName_10);
          mercury__io__nl_2_p_0();
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
    mercury__io__remove_file_recursively_4_p_0(FileName_10, &Var_13);
    FileTimestamps0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 1))));
    mercury__map__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__util_scalar_common_1[0]), ((MR_Box) (FileName_10)), FileTimestamps0_14, &FileTimestamps_15);
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 0))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 2))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 3))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 4))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 5))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 6))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 7))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 8))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 9))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 10))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 11))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 12))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 14))));
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 15))));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 16))));
    Var_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 17))));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 18))));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 19))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FileTimestamps_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_1);
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_64));
    }
  }
}

MR_Word MR_CALL 
make__util__find_oldest_timestamp_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
      HeadVar__3_3 = HeadVar__1_1;
    else
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
        HeadVar__3_3 = HeadVar__2_2;
      else
      {
        MR_Word Timestamp2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Timestamp_12;
        MR_Word Var_15;

        libs__timestamp____Compare____timestamp_0_0(&Var_15, Var_16, Timestamp2_11);
        succeeded = ((MR_Integer) 1 == Var_15);
        if (succeeded)
          Timestamp_12 = Var_16;
        else
          Timestamp_12 = Timestamp2_11;
        {
          HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Timestamp_12));
        }
      }
    }
    return HeadVar__3_3;
  }
}

void MR_CALL 
make__util__get_target_timestamp_8_p_0(
  MR_Word Globals_9,
  MR_Word Search_10,
  MR_Word TargetFile_11,
  MR_Word * MaybeTimestamp_12,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  {
    MR_bool succeeded;
    MR_Word TargetType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 1))));
    MR_String FileName_17;
    MR_Word STATE_VARIABLE_Info_22_22;

    make__util__get_file_name_8_p_0(Globals_9, Search_10, TargetFile_11, &FileName_17, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_22_22);
    succeeded = (TargetType_16 == (MR_Word) ((MR_Unsigned) 28U));
    if (succeeded)
      make__util__get_target_timestamp_analysis_registry_9_p_0(Globals_9, Search_10, TargetFile_11, FileName_17, MaybeTimestamp_12, STATE_VARIABLE_Info_22_22, STATE_VARIABLE_Info_19);
    else
      make__util__get_target_timestamp_2_9_p_0(Globals_9, Search_10, TargetFile_11, FileName_17, MaybeTimestamp_12, STATE_VARIABLE_Info_22_22, STATE_VARIABLE_Info_19);
  }
}

void MR_CALL 
make__util__get_dependency_timestamp_7_p_0(
  MR_Word Globals_8,
  MR_Word DependencyFile_9,
  MR_Word * MaybeTimestamp_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) DependencyFile_9)) == (MR_Integer) 1))
    {
      MR_String FileName_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), DependencyFile_9, (MR_Integer) 0))));
      MR_Word MaybeOption_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DependencyFile_9, (MR_Integer) 1))));
      MR_Word SearchDirs_16;

      if ((MaybeOption_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Var_31;

        Var_31 = mercury__dir__this_directory_0_f_0();
        {
          SearchDirs_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SearchDirs_16, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(1), SearchDirs_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word Option_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOption_14, (MR_Integer) 0))));

        libs__globals__lookup_accumulating_option_3_p_0(Globals_8, Option_15, &SearchDirs_16);
      }
      make__util__get_file_timestamp_7_p_0(SearchDirs_16, FileName_13, MaybeTimestamp_10, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
    }
    else
    {
      MR_Word Target_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DependencyFile_9, (MR_Integer) 0))));
      MR_Word MaybeTimestamp0_18;
      MR_Word TargetType_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Target_17, (MR_Integer) 1))));
      MR_String FileName_47;
      MR_Word STATE_VARIABLE_Info_22_48;
      MR_Word Var_28;
      MR_Word Var_29;

      make__util__get_file_name_8_p_0(Globals_8, (MR_Integer) 0, Target_17, &FileName_47, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_22_48);
      succeeded = (TargetType_46 == (MR_Word) ((MR_Unsigned) 28U));
      if (succeeded)
        make__util__get_target_timestamp_analysis_registry_9_p_0(Globals_8, (MR_Integer) 0, Target_17, FileName_47, &MaybeTimestamp0_18, STATE_VARIABLE_Info_22_48, STATE_VARIABLE_Info_22);
      else
        make__util__get_target_timestamp_2_9_p_0(Globals_8, (MR_Integer) 0, Target_17, FileName_47, &MaybeTimestamp0_18, STATE_VARIABLE_Info_22_48, STATE_VARIABLE_Info_22);
      succeeded = ((MR_tag((MR_Word) MaybeTimestamp0_18)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Target_17, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0))) & (MR_Integer) 1);
          succeeded = (Var_29 == (MR_Integer) 1);
        }
      }
      if (succeeded)
      {
        MR_Word Var_30;

        Var_30 = libs__timestamp__oldest_timestamp_0_f_0();
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeTimestamp_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
        }
      }
      else
        *MaybeTimestamp_10 = MaybeTimestamp0_18;
    }
  }
}

static void MR_CALL 
make__util__get_target_timestamp_analysis_registry_9_p_0(
  MR_Word Globals_10,
  MR_Word Search_11,
  MR_Word TargetFile_12,
  MR_String FileName_13,
  MR_Word * MaybeTimestamp_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_12, (MR_Integer) 0))));
    MR_Word MaybeTimestamp0_19;
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 1))));
    MR_Box conv0_MaybeTimestamp0_19;

    succeeded = mercury__map__elem_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__util_scalar_common_1[0]), ((MR_Box) (FileName_13)), Var_25, &conv0_MaybeTimestamp0_19);
    if (succeeded)
    {
      MaybeTimestamp0_19 = ((MR_Word) (conv0_MaybeTimestamp0_19));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *MaybeTimestamp_14 = MaybeTimestamp0_19;
      *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
    }
    else
    {
      MR_Word Status_20;

      analysis__do_read_module_overall_status_6_p_0((MR_Word) (&make__util_scalar_common_2[0]), ((MR_Box) ((MR_Integer) 0)), Globals_10, ModuleName_17, &Status_20);
      switch (Status_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_30;
            MR_Word Var_31;
            MR_Word Var_74;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Word Var_79;
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_86;
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Word Var_91;
            MR_Integer Var_92;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Unsigned packed_word_2;

            *MaybeTimestamp_14 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[19]));
            Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 1))));
            Var_31 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__util_scalar_common_1[0]), ((MR_Box) (FileName_13)), Var_30, ((MR_Box) (*MaybeTimestamp_14)));
            Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 0))));
            Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 2))));
            Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 3))));
            Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));
            Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 5))));
            Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 6))));
            Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 7))));
            Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 8))));
            Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 9))));
            Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 10))));
            Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 11))));
            Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 12))));
            packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 13)));
            Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 14))));
            Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 15))));
            Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 16))));
            Var_92 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 17))));
            Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 18))));
            Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 19))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_22 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_74));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_31));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_76));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_77));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_78));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_79));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_80));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_81));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_82));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_83));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_84));
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_85));
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_86));
              MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_2);
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_89));
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_90));
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_91));
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_92));
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_93));
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_94));
            }
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          make__util__get_target_timestamp_2_9_p_0(Globals_10, Search_11, TargetFile_12, FileName_13, MaybeTimestamp_14, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
          break;
      }
    }
  }
}

static void MR_CALL 
make__util__get_target_timestamp_2_9_p_0(
  MR_Word Globals_10,
  MR_Word Search_11,
  MR_Word TargetFile_12,
  MR_String FileName_13,
  MR_Word * MaybeTimestamp_14,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_12, (MR_Integer) 0))));
    MR_Word TargetType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_12, (MR_Integer) 1))));
    MR_Word SearchDirs_19;
    MR_Word MaybeTimestamp0_20;
    MR_Word STATE_VARIABLE_Info_31_31;

    switch (Search_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String Var_29;

          Var_29 = mercury__dir__this_directory_0_f_0();
          {
            SearchDirs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SearchDirs_19, 0) = ((MR_Box) (Var_29));
            MR_hl_field(MR_mktag(1), SearchDirs_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 0:
        make__util__get_search_directories_3_p_0(Globals_10, TargetType_18, &SearchDirs_19);
        break;
    }
    make__util__get_file_timestamp_7_p_0(SearchDirs_19, FileName_13, &MaybeTimestamp0_20, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_31_31);
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
      MR_Word MaybeModuleAndImports_22;
      MR_Word STATE_VARIABLE_Info_33_33;
      MR_Word ModuleAndImports_23;
      MR_String ModuleDir_24;
      MR_String Var_82;

      make__module_dep_file__get_module_dependencies_7_p_0(Globals_10, ModuleName_17, &MaybeModuleAndImports_22, STATE_VARIABLE_Info_31_31, &STATE_VARIABLE_Info_33_33);
      succeeded = (MaybeModuleAndImports_22 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ModuleAndImports_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleAndImports_22, (MR_Integer) 0))));
        parse_tree__module_imports__module_and_imports_get_source_file_dir_2_p_0(ModuleAndImports_23, &ModuleDir_24);
        Var_82 = mercury__dir__this_directory_0_f_0();
        succeeded = (strcmp(ModuleDir_24, Var_82) == 0);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word Var_35;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_59;
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
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Integer Var_77;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Unsigned packed_word_1;

        Var_35 = libs__timestamp__oldest_timestamp_0_f_0();
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeTimestamp_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_35));
        }
        Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 1))));
        Var_38 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__util_scalar_common_1[0]), ((MR_Box) (FileName_13)), Var_37, ((MR_Box) (*MaybeTimestamp_14)));
        Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 0))));
        Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 2))));
        Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 3))));
        Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 4))));
        Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 5))));
        Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 6))));
        Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 7))));
        Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 8))));
        Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 9))));
        Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 10))));
        Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 11))));
        Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 12))));
        packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 13)));
        Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 14))));
        Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 15))));
        Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 16))));
        Var_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 17))));
        Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 18))));
        Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_33_33, (MR_Integer) 19))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_26 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_38));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_63));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_64));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_71));
          MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_1);
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_74));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_75));
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_76));
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_77));
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_78));
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_79));
        }
      }
      else
      {
        *MaybeTimestamp_14 = MaybeTimestamp0_20;
        *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_33_33;
      }
    }
    else
    {
      *MaybeTimestamp_14 = MaybeTimestamp0_20;
      *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_31_31;
    }
  }
}

static void MR_CALL 
make__util__get_search_directories_3_p_0(
  MR_Word Globals_4,
  MR_Word TargetType_5,
  MR_Word * SearchDirs_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) TargetType_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(TargetType_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
          case (MR_Integer) 16:
            {
              MR_String Var_10;

              Var_10 = mercury__dir__this_directory_0_f_0();
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *SearchDirs_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_10));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            {
              MR_Word SearchDirs0_64;
              MR_String Var_56;

              libs__globals__lookup_accumulating_option_3_p_0(Globals_4, (MR_Integer) 678, &SearchDirs0_64);
              Var_56 = mercury__dir__this_directory_0_f_0();
              succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_56)), SearchDirs0_64);
              if (succeeded)
                *SearchDirs_6 = SearchDirs0_64;
              else
              {
                MR_String Var_58;

                Var_58 = mercury__dir__this_directory_0_f_0();
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *SearchDirs_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_58));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SearchDirs0_64));
                }
              }
            }
            break;
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            {
              MR_Word SearchDirs0_9;
              MR_String Var_12;

              libs__globals__lookup_accumulating_option_3_p_0(Globals_4, (MR_Integer) 679, &SearchDirs0_9);
              Var_12 = mercury__dir__this_directory_0_f_0();
              succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_12)), SearchDirs0_9);
              if (succeeded)
                *SearchDirs_6 = SearchDirs0_9;
              else
              {
                MR_String Var_13;

                Var_13 = mercury__dir__this_directory_0_f_0();
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *SearchDirs_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_13));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SearchDirs0_9));
                }
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word SearchDirs0_51;
              MR_String Var_43;

              libs__globals__lookup_accumulating_option_3_p_0(Globals_4, (MR_Integer) 562, &SearchDirs0_51);
              Var_43 = mercury__dir__this_directory_0_f_0();
              succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_43)), SearchDirs0_51);
              if (succeeded)
                *SearchDirs_6 = SearchDirs0_51;
              else
              {
                MR_String Var_45;

                Var_45 = mercury__dir__this_directory_0_f_0();
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *SearchDirs_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_45));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SearchDirs0_51));
                }
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SearchDirs0_38;
          MR_String Var_30;

          libs__globals__lookup_accumulating_option_3_p_0(Globals_4, (MR_Integer) 523, &SearchDirs0_38);
          Var_30 = mercury__dir__this_directory_0_f_0();
          succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_30)), SearchDirs0_38);
          if (succeeded)
            *SearchDirs_6 = SearchDirs0_38;
          else
          {
            MR_String Var_32;

            Var_32 = mercury__dir__this_directory_0_f_0();
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *SearchDirs_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_32));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SearchDirs0_38));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Var_10;

          Var_10 = mercury__dir__this_directory_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *SearchDirs_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_String Var_10;

          Var_10 = mercury__dir__this_directory_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *SearchDirs_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
  }
}

void MR_CALL 
make__util__get_file_name_8_p_0(
  MR_Word Globals_9,
  MR_Word Search_10,
  MR_Word TargetFile_11,
  MR_String * FileName_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 0))));
    MR_Word TargetType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetFile_11, (MR_Integer) 1))));

    succeeded = (TargetType_16 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_Word MaybeModuleAndImports_17;

      make__module_dep_file__get_module_dependencies_7_p_0(Globals_9, ModuleName_15, &MaybeModuleAndImports_17, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
      if ((MaybeModuleAndImports_17 == (MR_Word) ((MR_Unsigned) 0U)))
        parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".m", ModuleName_15, FileName_12);
      else
      {
        MR_Word ModuleAndImports_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleAndImports_17, (MR_Integer) 0))));

        parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(ModuleAndImports_18, FileName_12);
      }
    }
    else
    {
      MR_Word MaybeExt_19;

      MaybeExt_19 = make__util__target_extension_2_f_0(Globals_9, TargetType_16);
      if ((MaybeExt_19 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        make__util__module_target_to_file_name_maybe_search_8_p_0(Globals_9, Search_10, (MR_Integer) 1, TargetType_16, ModuleName_15, FileName_12);
        *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
      }
      else
      {
        MR_String Ext_20 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExt_19, (MR_Integer) 0))));

        switch (Search_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, Ext_20, ModuleName_15, FileName_12);
              *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
            }
            break;
          case (MR_Integer) 0:
            make__util__module_name_to_search_file_name_cache_8_p_0(Globals_9, Ext_20, ModuleName_15, FileName_12, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
            break;
        }
      }
    }
  }
}

static void MR_CALL 
make__util__module_name_to_search_file_name_cache_8_p_0(
  MR_Word Globals_9,
  MR_String Ext_10,
  MR_Word ModuleName_11,
  MR_String * FileName_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_bool succeeded;
    MR_Word Key_15;
    MR_String FileName0_16;
    MR_Word Var_21;
    MR_Box conv0_FileName0_16;

    {
      Key_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Key_15, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(0), Key_15, 1) = ((MR_Box) (Ext_10));
    }
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 2))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&make__util_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_21, ((MR_Box) (Key_15)), &conv0_FileName0_16);
    if (succeeded)
    {
      FileName0_16 = ((MR_String) (conv0_FileName0_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *FileName_12 = FileName0_16;
      *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
    }
    else
    {
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Integer Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Unsigned packed_word_2;

      parse_tree__file_names__module_name_to_search_file_name_6_p_0(Globals_9, Ext_10, ModuleName_11, FileName_12);
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 2))));
      Var_25 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) (&make__util_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Key_15)), Var_24, ((MR_Box) (*FileName_12)));
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0))));
      Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 1))));
      Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 3))));
      Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 4))));
      Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 5))));
      Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 6))));
      Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 7))));
      Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 8))));
      Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 9))));
      Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 10))));
      Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 11))));
      Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 12))));
      packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 13)));
      Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 14))));
      Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 15))));
      Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 16))));
      Var_84 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 17))));
      Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 18))));
      Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 19))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_18 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_2);
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_86));
      }
    }
  }
}

void MR_CALL 
make__util__get_timestamp_file_timestamp_7_p_0(
  MR_Word Globals_8,
  MR_Word HeadVar__2_2,
  MR_Word * MaybeTimestamp_11,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TargetType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_String FileName_15;
    MR_Word SearchDirs_16;
    MR_String Var_25;
    MR_String TimestampExt_14;

    succeeded = make__util__timestamp_extension_2_p_0(TargetType_10, &TimestampExt_14);
    if (succeeded)
      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_8, (MR_Integer) 1, TimestampExt_14, ModuleName_9, &FileName_15);
    else
      make__util__module_target_to_file_name_maybe_search_8_p_0(Globals_8, (MR_Integer) 1, (MR_Integer) 1, TargetType_10, ModuleName_9, &FileName_15);
    Var_25 = mercury__dir__this_directory_0_f_0();
    {
      SearchDirs_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SearchDirs_16, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), SearchDirs_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    make__util__get_file_timestamp_7_p_0(SearchDirs_16, FileName_15, MaybeTimestamp_11, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
  }
}

static void MR_CALL 
make__util__module_target_to_file_name_maybe_search_8_p_0(
  MR_Word Globals_9,
  MR_Word Search_10,
  MR_Word MkDir_11,
  MR_Word TargetType_12,
  MR_Word ModuleName_13,
  MR_String * FileName_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word MaybeExt_16;

    // setup for model_det tailcalls optimized into a loop
    ;
    MaybeExt_16 = make__util__target_extension_2_f_0(Globals_9, TargetType_12);
    if ((MaybeExt_16 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (MR_tag((MR_Word) TargetType_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.util.module_target_to_file_name_maybe_search\'/8", (MR_String) "unexpected TargetType");
            return;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.util.module_target_to_file_name_maybe_search\'/8", (MR_String) "unexpected TargetType");
            return;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TargetType_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word PIC_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TargetType_12, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
                MR_Word Lang_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TargetType_12, (MR_Integer) 1))) & (MR_Integer) 3);
                MR_Word ForeignModuleName_20;

                succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_0(ModuleName_13, Lang_19, &ForeignModuleName_20);
                if (succeeded)
                {
                  MR_Word Var_29;
                  MR_Word next_value_of_TargetType_12;
                  MR_Word next_value_of_ModuleName_13;

                  {
                    Var_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_29, 0) = (MR_Box) ((MR_Unsigned) (PIC_18));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_TargetType_12 = Var_29;
                  next_value_of_ModuleName_13 = ForeignModuleName_20;
                  TargetType_12 = next_value_of_TargetType_12;
                  ModuleName_13 = next_value_of_ModuleName_13;
                  continue;
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.util.module_target_to_file_name_maybe_search\'/8", (MR_String) "object test failed");
                    return;
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String FactFile_21 = ((MR_String) ((MR_hl_field(MR_mktag(3), TargetType_12, (MR_Integer) 2))));
                MR_String Ext_35;
                MR_Word PIC_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TargetType_12, (MR_Integer) 1))) & (MR_Integer) 1);

                backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(Globals_9, PIC_36, &Ext_35);
                parse_tree__file_names__fact_table_file_name_8_p_0(Globals_9, ModuleName_13, FactFile_21, Ext_35, MkDir_11, FileName_14);
              }
              break;
          }
          break;
      }
    else
    {
      MR_String Ext_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExt_16, (MR_Integer) 0))));

      switch (Search_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, MkDir_11, Ext_17, ModuleName_13, FileName_14);
          break;
        case (MR_Integer) 0:
          parse_tree__file_names__module_name_to_search_file_name_6_p_0(Globals_9, Ext_17, ModuleName_13, FileName_14);
          break;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
make__util__target_extension_2_f_0(
  MR_Word Globals_4,
  MR_Word Target_5)
{
  {
    MR_Word MaybeExt_6;

    switch (MR_tag((MR_Word) Target_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Target_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MaybeExt_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[16]));
            break;
          case (MR_Integer) 1:
            MaybeExt_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[8]));
            break;
          case (MR_Integer) 2:
            MaybeExt_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[9]));
            break;
          case (MR_Integer) 3:
            MaybeExt_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[10]));
            break;
          case (MR_Integer) 4:
            MaybeExt_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[11]));
            break;
          case (MR_Integer) 5:
            MaybeExt_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[12]));
            break;
          case (MR_Integer) 6:
            MaybeExt_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[15]));
            break;
          case (MR_Integer) 7:
            MaybeExt_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[0]));
            break;
          case (MR_Integer) 8:
            MaybeExt_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[17]));
            break;
          case (MR_Integer) 9:
            MaybeExt_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[1]));
            break;
          case (MR_Integer) 10:
            MaybeExt_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[4]));
            break;
          case (MR_Integer) 11:
            MaybeExt_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[14]));
            break;
          case (MR_Integer) 12:
            MaybeExt_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[13]));
            break;
          case (MR_Integer) 13:
            MaybeExt_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[7]));
            break;
          case (MR_Integer) 14:
            MaybeExt_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[6]));
            break;
          case (MR_Integer) 15:
            MaybeExt_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[5]));
            break;
          case (MR_Integer) 16:
            MaybeExt_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[18]));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Target_5, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (Var_34) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              MaybeExt_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[2]));
              break;
            case (MR_Integer) 1:
              MaybeExt_6 = (MR_Word) (MR_mkword(MR_mktag(1), &make__util_scalar_common_3[3]));
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PIC_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Target_5, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_String Ext_8;

          backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(Globals_4, PIC_7, &Ext_8);
          {
            MaybeExt_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeExt_6, 0) = ((MR_Box) (Ext_8));
          }
        }
        break;
      case (MR_Integer) 3:
        MaybeExt_6 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
    return MaybeExt_6;
  }
}

MR_bool MR_CALL 
make__util__timestamp_extension_2_p_0(
  MR_Word ModuleTargetType_3,
  MR_String * Extension_4)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ModuleTargetType_3)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(ModuleTargetType_3)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              *Extension_4 = (MR_String) ".err_date";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              *Extension_4 = (MR_String) ".date0";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              *Extension_4 = (MR_String) ".date";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 4:
            {
              *Extension_4 = (MR_String) ".date";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 5:
            {
              *Extension_4 = (MR_String) ".date3";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 6:
            {
              *Extension_4 = (MR_String) ".optdate";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 7:
            {
              *Extension_4 = (MR_String) ".analysis_date";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 9:
            {
              *Extension_4 = (MR_String) ".c_date";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 10:
            {
              *Extension_4 = (MR_String) ".cs_date";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 11:
            {
              *Extension_4 = (MR_String) ".java_date";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 13:
          case (MR_Integer) 14:
            {
              *Extension_4 = (MR_String) ".erl_date";
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          *Extension_4 = (MR_String) ".c_date";
          succeeded = MR_TRUE;
        }
        break;
    }
    return succeeded;
  }
}

void MR_CALL 
make__util__get_file_timestamp_7_p_0(
  MR_Word SearchDirs_8,
  MR_String FileName_9,
  MR_Word * MaybeTimestamp_10,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  {
    MR_bool succeeded;
    MR_Word MaybeTimestamp0_13;
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 1))));
    MR_Box conv0_MaybeTimestamp0_13;

    succeeded = mercury__map__elem_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__util_scalar_common_1[0]), ((MR_Box) (FileName_9)), Var_22, &conv0_MaybeTimestamp0_13);
    if (succeeded)
    {
      MaybeTimestamp0_13 = ((MR_Word) (conv0_MaybeTimestamp0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *MaybeTimestamp_10 = MaybeTimestamp0_13;
      *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
    }
    else
    {
      MR_Word SearchResult_14;

      libs__file_util__search_for_file_mod_time_5_p_0(SearchDirs_8, FileName_9, &SearchResult_14);
      if (((MR_tag((MR_Word) SearchResult_14)) == (MR_Integer) 1))
      {
        MR_String Var_24;
        MR_String Var_26;

        Var_26 = mercury__string__f_43_43_2_f_0(FileName_9, (MR_String) "\' not found");
        Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "file \140", Var_26);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeTimestamp_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_24));
        }
        *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
      }
      else
      {
        MR_Word TimeT_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SearchResult_14, (MR_Integer) 0))));
        MR_Word Timestamp_16;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_71;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Integer Var_89;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Unsigned packed_word_2;

        Timestamp_16 = libs__timestamp__time_t_to_timestamp_1_f_0(TimeT_15);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeTimestamp_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Timestamp_16));
        }
        Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 1))));
        Var_30 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__util_scalar_common_1[0]), ((MR_Box) (FileName_9)), Var_29, ((MR_Box) (*MaybeTimestamp_10)));
        Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 0))));
        Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 2))));
        Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 3))));
        Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 4))));
        Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 5))));
        Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 6))));
        Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 7))));
        Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 8))));
        Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 9))));
        Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 10))));
        Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 11))));
        Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 12))));
        packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 13)));
        Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 14))));
        Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 15))));
        Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 16))));
        Var_89 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 17))));
        Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 18))));
        Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 19))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_19 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_71));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_30));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_73));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_74));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_75));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_76));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_77));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_78));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_79));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_80));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_81));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_82));
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_83));
          MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_2);
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_86));
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_87));
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_88));
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_89));
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_90));
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_91));
        }
      }
    }
  }
}

void mercury__make__util__init(void)
{
}

void mercury__make__util__init_type_tables(void)
{
}

void mercury__make__util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module make.util.
