/*
** Automatically generated from `create_launchers.m'
** by the Mercury compiler,
** version rotd-2026-07-23
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


// :- module backend_libs.create_launchers.
// :- implementation.

/*
INIT mercury__backend_libs__create_launchers__init
ENDINIT
*/

#include "backend_libs.create_launchers.mih"


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
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static MR_String MR_CALL 
backend_libs__create_launchers__IntroducedFrom__func__construct_java_msys_shell_script__197__1_1_f_0(
  MR_String LambdaHeadVar__1_31);

static void MR_CALL 
backend_libs__create_launchers__create_java_launcher_batch_file_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_String ContentStr_11,
  MR_Word * Succeeded_12);

static void MR_CALL 
backend_libs__create_launchers__construct_java_batch_file_4_p_0(
  MR_Word Globals_5,
  MR_Word MainModuleName_6,
  MR_String JarFileName_7,
  MR_String * ContentStr_8);

static MR_Box MR_CALL 
backend_libs__create_launchers__construct_java_msys_shell_script_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__create_launchers__construct_java_msys_shell_script_4_p_0(
  MR_Word Globals_5,
  MR_Word MainModuleName_6,
  MR_String JarFileName_7,
  MR_String * ContentStr_8);


static /* final */ const MR_Box backend_libs__create_launchers_scalar_common_1[1][1];

static /* final */ const MR_Box backend_libs__create_launchers_scalar_common_2[4][2];

static /* final */ const MR_Box backend_libs__create_launchers_scalar_common_3[1][5];

static /* final */ const MR_Box backend_libs__create_launchers_scalar_common_4[1][3];




static /* final */ const MR_Box backend_libs__create_launchers_scalar_common_1[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 1U) },
};

static /* final */ const MR_Box backend_libs__create_launchers_scalar_common_2[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) " \"\044\100\"\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) " %*\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
};

static /* final */ const MR_Box backend_libs__create_launchers_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box backend_libs__create_launchers_scalar_common_4[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&backend_libs__create_launchers_scalar_common_3[0])),
    ((MR_Box) (backend_libs__create_launchers__construct_java_msys_shell_script_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static MR_String MR_CALL 
backend_libs__create_launchers__IntroducedFrom__func__construct_java_msys_shell_script__197__1_1_f_0(
  MR_String LambdaHeadVar__1_31)
{
  MR_String LambdaHeadVar__2_32;

  LambdaHeadVar__2_32 = mercury__string__replace_all_3_f_0(LambdaHeadVar__1_31, (MR_String) "\\", (MR_String) "/");
  return LambdaHeadVar__2_32;
}

void MR_CALL 
backend_libs__create_launchers__create_java_shell_script_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_Word MainModuleName_9,
  MR_Word * Succeeded_10)
{
  MR_bool succeeded;
  MR_String JarFileName_12;
  MR_Word TargetEnvType_14;
  MR_String _JarFileNameProposed_13;

  parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_8, (MR_String) "predicate \140backend_libs.create_launchers.create_java_shell_script\'/6", (MR_Word) (MR_mkword(2, &backend_libs__create_launchers_scalar_common_1[0])), MainModuleName_9, &JarFileName_12, &_JarFileNameProposed_13);
  libs__globals__get_target_env_type_2_p_0(Globals_8, &TargetEnvType_14);
  switch (TargetEnvType_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 0:
      {
        MR_Word MaybeStage2Base_15;
        MR_String ContentStr_16;
        MR_Word MercuryStdLibs_29;
        MR_Word UserClasspath_31;
        MR_Word Java_Incl_Dirs_32;
        MR_String ClassPath_33;
        MR_Word RuntimeFlags_34;
        MR_String RuntimeOpts0_35;
        MR_String RuntimeOpts_36;
        MR_String Java_37;
        MR_String ClassName_38;
        MR_Word Var_46;
        MR_String Var_47;
        MR_String Var_49;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_61;
        MR_Word Var_63;
        MR_Word Var_65;
        MR_Word Var_67;
        MR_Word Var_69;
        MR_Word Var_71;
        MR_Word Var_73;
        MR_Word Var_75;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_80;
        MR_Word Var_82;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_87;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_92;
        MR_Word Var_94;

        mercury__io__environment__get_environment_var_4_p_0((MR_String) "MERCURY_STAGE2_LAUNCHER_BASE", &MaybeStage2Base_15);
        if ((MaybeStage2Base_15 == (MR_Word) ((MR_Unsigned) 0U)))
          parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(Globals_8, &MercuryStdLibs_29);
        else
        {
          MR_String Stage2Base_30 = ((MR_String) ((MR_hl_field(1, MaybeStage2Base_15, 0))));
          MR_String Var_39;
          MR_Word Var_41;
          MR_String Var_42;

          Var_39 = mercury__dir__f_slash_2_f_0(Stage2Base_30, (MR_String) "library/mer_rt.jar");
          Var_42 = mercury__dir__f_slash_2_f_0(Stage2Base_30, (MR_String) "library/mer_std.jar");
          {
            Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
            MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MercuryStdLibs_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MercuryStdLibs_29, 0) = ((MR_Box) (Var_39));
            MR_hl_field(1, MercuryStdLibs_29, 1) = ((MR_Box) (Var_41));
          }
        }
        libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 500, &UserClasspath_31);
        Var_49 = mercury__string__f_43_43_2_f_0(JarFileName_12, (MR_String) "\"");
        Var_47 = mercury__string__f_43_43_2_f_0((MR_String) "\"\044DIR/", Var_49);
        {
          Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
          MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) ((MR_String) "\044CLASSPATH"));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) (UserClasspath_31));
        }
        Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MercuryStdLibs_29, Var_53);
        Java_Incl_Dirs_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_46, Var_52);
        ClassPath_33 = mercury__string__join_list_2_f_0((MR_String) "\044{SEP}", Java_Incl_Dirs_32);
        libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 501, &RuntimeFlags_34);
        RuntimeOpts0_35 = mercury__string__join_list_2_f_0((MR_String) " ", RuntimeFlags_34);
        succeeded = mercury__string__contains_char_2_p_0(RuntimeOpts0_35, (MR_Char) 39);
        if (succeeded)
          RuntimeOpts_36 = mercury__string__replace_all_3_f_0(RuntimeOpts0_35, (MR_String) "\'", (MR_String) "\'\\\'\'");
        else
          RuntimeOpts_36 = RuntimeOpts0_35;
        libs__globals__lookup_string_option_3_p_0(Globals_8, (MR_Integer) 497, &Java_37);
        parse_tree__java_names__mangle_sym_name_for_java_4_p_0(MainModuleName_9, (MR_Integer) 0, (MR_String) ".", &ClassName_38);
        {
          Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_94, 0) = ((MR_Box) (ClassName_38));
          MR_hl_field(1, Var_94, 1) = ((MR_Box) (MR_mkword(1, &backend_libs__create_launchers_scalar_common_2[1])));
        }
        {
          Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_92, 0) = ((MR_Box) ((MR_String) "exec \"\044MERCURY_JAVA\" \044MERCURY_JAVA_OPTIONS jmercury."));
          MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_94));
        }
        {
          Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_90, 0) = ((MR_Box) ((MR_String) "\'}\n"));
          MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_92));
        }
        {
          Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_89, 0) = ((MR_Box) (RuntimeOpts_36));
          MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_90));
        }
        {
          Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_87, 0) = ((MR_Box) ((MR_String) "MERCURY_JAVA_OPTIONS=\044{MERCURY_JAVA_OPTIONS:-\'"));
          MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_89));
        }
        {
          Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_85, 0) = ((MR_Box) ((MR_String) "\'}\n"));
          MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_87));
        }
        {
          Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_84, 0) = ((MR_Box) (Java_37));
          MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_85));
        }
        {
          Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_82, 0) = ((MR_Box) ((MR_String) "MERCURY_JAVA=\044{MERCURY_JAVA:-\'"));
          MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_84));
        }
        {
          Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_80, 0) = ((MR_Box) ((MR_String) "export CLASSPATH\n"));
          MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_82));
        }
        {
          Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_78, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_80));
        }
        {
          Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_77, 0) = ((MR_Box) (ClassPath_33));
          MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_78));
        }
        {
          Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_75, 0) = ((MR_Box) ((MR_String) "CLASSPATH="));
          MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_77));
        }
        {
          Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_73, 0) = ((MR_Box) ((MR_String) "esac\n"));
          MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_75));
        }
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) ((MR_String) "   *)  SEP=\';\' ;;\n"));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_73));
        }
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) ((MR_String) "   \'\') SEP=\':\' ;;\n"));
          MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_71));
        }
        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) ((MR_String) "case \044WINDIR in\n"));
          MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_69));
        }
        {
          Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_65, 0) = ((MR_Box) ((MR_String) "DIR=\044( cd \"\044{DIR}\" && pwd -P )\n"));
          MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_67));
        }
        {
          Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_63, 0) = ((MR_Box) ((MR_String) "DIR=\044{0%/*}\n"));
          MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_61, 0) = ((MR_Box) ((MR_String) "#!/bin/sh\n"));
          MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_63));
        }
        ContentStr_16 = mercury__string__append_list_1_f_0(Var_61);
        backend_libs__create_launchers__create_shell_script_as_executable_7_p_0(ProgressStream_7, Globals_8, MainModuleName_9, ContentStr_16, Succeeded_10);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String ContentStr_27;

        backend_libs__create_launchers__construct_java_msys_shell_script_4_p_0(Globals_8, MainModuleName_9, JarFileName_12, &ContentStr_27);
        backend_libs__create_launchers__create_shell_script_as_executable_7_p_0(ProgressStream_7, Globals_8, MainModuleName_9, ContentStr_27, Succeeded_10);
      }
      break;
    case (MR_Integer) 4:
    case (MR_Integer) 3:
      {
        MR_String ContentStr_28;

        backend_libs__create_launchers__construct_java_batch_file_4_p_0(Globals_8, MainModuleName_9, JarFileName_12, &ContentStr_28);
        backend_libs__create_launchers__create_java_launcher_batch_file_7_p_0(ProgressStream_7, Globals_8, MainModuleName_9, ContentStr_28, Succeeded_10);
      }
      break;
  }
}

static void MR_CALL 
backend_libs__create_launchers__create_java_launcher_batch_file_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_String ContentStr_11,
  MR_Word * Succeeded_12)
{
  MR_String FileName_14;
  MR_Word Verbose_16;
  MR_Word OpenResult_18;
  MR_String Var_28;
  MR_String Var_31;
  MR_String _FileNameProposed_15;
  MR_Word Var_17;

  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_9, (MR_String) "predicate \140backend_libs.create_launchers.create_java_launcher_batch_file\'/7", (MR_Word) (MR_mkword(3, &backend_libs__create_launchers_scalar_common_2[3])), MainModuleName_10, &FileName_14, &_FileNameProposed_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 131, &Verbose_16);
  Var_31 = mercury__string__f_43_43_2_f_0(FileName_14, (MR_String) "\'...\n");
  Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating batch file \140", Var_31);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_16, Var_28);
  mercury__io__file__remove_file_4_p_0(FileName_14, &Var_17);
  mercury__io__open_output_4_p_0(FileName_14, &OpenResult_18);
  if (((MR_tag((MR_Word) OpenResult_18)) == (MR_Integer) 1))
  {
    MR_Word Message_20 = ((MR_Word) ((MR_hl_field(1, OpenResult_18, 0))));
    MR_String Var_38;

    Var_38 = mercury__io__error_message_1_f_0(Message_20);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.create_launchers.create_java_launcher_batch_file\'/7", Var_38);
      return;
    }
  }
  else
  {
    MR_Word Stream_19 = ((MR_Word) ((MR_hl_field(0, OpenResult_18, 0))));

    mercury__io__write_string_4_p_0(Stream_19, ContentStr_11);
    mercury__io__close_output_3_p_0(Stream_19);
    *Succeeded_12 = (MR_Integer) 1;
  }
}

static void MR_CALL 
backend_libs__create_launchers__construct_java_batch_file_4_p_0(
  MR_Word Globals_5,
  MR_Word MainModuleName_6,
  MR_String JarFileName_7,
  MR_String * ContentStr_8)
{
  MR_Word MercuryStdLibs_9;
  MR_Word UserClasspath_10;
  MR_Word Java_Incl_Dirs_11;
  MR_String ClassPath_12;
  MR_Word RuntimeFlags_13;
  MR_String RuntimeOpts_14;
  MR_String Java_15;
  MR_String ClassName_16;
  MR_Word Var_18;
  MR_String Var_19;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_31;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_44;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_52;

  parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(Globals_5, &MercuryStdLibs_9);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 500, &UserClasspath_10);
  Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "%DIR%\\", JarFileName_7);
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) ((MR_String) "%CLASSPATH%"));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (UserClasspath_10));
  }
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MercuryStdLibs_9, Var_23);
  Java_Incl_Dirs_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_18, Var_22);
  ClassPath_12 = mercury__string__join_list_2_f_0((MR_String) ";", Java_Incl_Dirs_11);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 501, &RuntimeFlags_13);
  RuntimeOpts_14 = mercury__string__join_list_2_f_0((MR_String) " ", RuntimeFlags_13);
  libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 497, &Java_15);
  parse_tree__java_names__mangle_sym_name_for_java_4_p_0(MainModuleName_6, (MR_Integer) 0, (MR_String) ".", &ClassName_16);
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (ClassName_16));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &backend_libs__create_launchers_scalar_common_2[2])));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) ((MR_String) " %MERCURY_JAVA_OPTIONS% jmercury."));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Java_15));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_50));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_49));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (RuntimeOpts_14));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_47));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) ((MR_String) "if not defined MERCURY_JAVA_OPTIONS set MERCURY_JAVA_OPTIONS="));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_46));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_44));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (ClassPath_12));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_42));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) ((MR_String) "set CLASSPATH="));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_41));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) ((MR_String) "set DIR=%~dp0\n"));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) ((MR_String) "setlocal enableextensions\n"));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_37));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) ((MR_String) "rem Automatically generated by the Mercury compiler.\n"));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_35));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) ((MR_String) "\100echo off\n"));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_33));
  }
  *ContentStr_8 = mercury__string__append_list_1_f_0(Var_31);
}

static MR_Box MR_CALL 
backend_libs__create_launchers__construct_java_msys_shell_script_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_32;

  conv0_LambdaHeadVar__2_32 = backend_libs__create_launchers__IntroducedFrom__func__construct_java_msys_shell_script__197__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_32));
  return wrapper_arg_2;
}

static void MR_CALL 
backend_libs__create_launchers__construct_java_msys_shell_script_4_p_0(
  MR_Word Globals_5,
  MR_Word MainModuleName_6,
  MR_String JarFileName_7,
  MR_String * ContentStr_8)
{
  MR_bool succeeded;
  MR_Word MercuryStdLibs_9;
  MR_Word UserClasspath_10;
  MR_Word Java_Incl_Dirs0_11;
  MR_Word Java_Incl_Dirs_12;
  MR_String ClassPath_14;
  MR_Word RuntimeFlags_15;
  MR_String RuntimeOpts0_16;
  MR_String RuntimeOpts_17;
  MR_String Java_18;
  MR_String ClassName_19;
  MR_Word Var_21;
  MR_String Var_22;
  MR_String Var_24;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_41;
  MR_Word Var_43;
  MR_Word Var_45;
  MR_Word Var_47;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_52;
  MR_Word Var_54;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_59;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_64;
  MR_Word Var_66;

  parse_tree__module_cmds__get_mercury_std_libs_for_java_2_p_0(Globals_5, &MercuryStdLibs_9);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 500, &UserClasspath_10);
  Var_24 = mercury__string__f_43_43_2_f_0(JarFileName_7, (MR_String) "\"");
  Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "\"\044DIR/", Var_24);
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) ((MR_String) "\044CLASSPATH"));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (UserClasspath_10));
  }
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MercuryStdLibs_9, Var_28);
  Java_Incl_Dirs0_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_21, Var_27);
  Java_Incl_Dirs_12 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__create_launchers_scalar_common_4[0]), Java_Incl_Dirs0_11);
  ClassPath_14 = mercury__string__join_list_2_f_0((MR_String) "\\;", Java_Incl_Dirs_12);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 501, &RuntimeFlags_15);
  RuntimeOpts0_16 = mercury__string__join_list_2_f_0((MR_String) " ", RuntimeFlags_15);
  succeeded = mercury__string__contains_char_2_p_0(RuntimeOpts0_16, (MR_Char) 39);
  if (succeeded)
    RuntimeOpts_17 = mercury__string__replace_all_3_f_0(RuntimeOpts0_16, (MR_String) "\'", (MR_String) "\'\\\'\'");
  else
    RuntimeOpts_17 = RuntimeOpts0_16;
  libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 497, &Java_18);
  parse_tree__java_names__mangle_sym_name_for_java_4_p_0(MainModuleName_6, (MR_Integer) 0, (MR_String) ".", &ClassName_19);
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (ClassName_19));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) (MR_mkword(1, &backend_libs__create_launchers_scalar_common_2[1])));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) ((MR_String) "exec \"\044MERCURY_JAVA\" \044MERCURY_JAVA_OPTIONS jmercury."));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_66));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) ((MR_String) "\'}\n"));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_64));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (RuntimeOpts_17));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
  }
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) ((MR_String) "MERCURY_JAVA_OPTIONS=\044{MERCURY_JAVA_OPTIONS:-\'"));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_61));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) ((MR_String) "\'}\n"));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_59));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (Java_18));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_57));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) ((MR_String) "MERCURY_JAVA=\044{MERCURY_JAVA:-\'"));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_56));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) ((MR_String) "export CLASSPATH\n"));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_54));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) ((MR_String) "\n"));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (ClassPath_14));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_50));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) ((MR_String) "CLASSPATH="));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_49));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) ((MR_String) "DIR=\044( cd \"\044{DIR}\" && pwd -W )\n"));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) ((MR_String) "DIR=\044{0%/*}\n"));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_45));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) ((MR_String) "#!/bin/sh\n"));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_43));
  }
  *ContentStr_8 = mercury__string__append_list_1_f_0(Var_41);
}

void MR_CALL 
backend_libs__create_launchers__create_shell_script_as_executable_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word MainModuleName_10,
  MR_String ContentStr_11,
  MR_Word * Succeeded_12)
{
  MR_bool succeeded;
  MR_String LauncherFileName_15;
  MR_Word Verbose_17;
  MR_Word OpenResult_19;
  MR_String Var_30;
  MR_String Var_33;
  MR_String _LauncherFileNameProposed_16;
  MR_Word Var_18;

  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_9, (MR_String) "predicate \140backend_libs.create_launchers.create_shell_script_as_executable\'/7", (MR_Word) (MR_mkword(3, &backend_libs__create_launchers_scalar_common_2[0])), MainModuleName_10, &LauncherFileName_15, &_LauncherFileNameProposed_16);
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 131, &Verbose_17);
  Var_33 = mercury__string__f_43_43_2_f_0(LauncherFileName_15, (MR_String) "\'...\n");
  Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "% Generating shell script \140", Var_33);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_17, Var_30);
  mercury__io__file__remove_file_4_p_0(LauncherFileName_15, &Var_18);
  mercury__io__open_output_4_p_0(LauncherFileName_15, &OpenResult_19);
  if (((MR_tag((MR_Word) OpenResult_19)) == (MR_Integer) 1))
  {
    MR_String Var_49;
    MR_Word Message_50 = ((MR_Word) ((MR_hl_field(1, OpenResult_19, 0))));

    Var_49 = mercury__io__error_message_1_f_0(Message_50);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.create_launchers.create_shell_script_as_executable\'/7", Var_49);
      return;
    }
  }
  else
  {
    MR_Word Stream_20 = ((MR_Word) ((MR_hl_field(0, OpenResult_19, 0))));
    MR_Word ChmodResult_21;
    MR_String Var_39;

    mercury__io__write_string_4_p_0(Stream_20, ContentStr_11);
    mercury__io__close_output_3_p_0(Stream_20);
    Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "chmod a+x ", LauncherFileName_15);
    mercury__io__call_system__call_system_4_p_0(Var_39, &ChmodResult_21);
    if (((MR_tag((MR_Word) ChmodResult_21)) == (MR_Integer) 1))
    {
      MR_Word Message_23 = ((MR_Word) ((MR_hl_field(1, ChmodResult_21, 0))));
      MR_String Var_47;

      Var_47 = mercury__io__error_message_1_f_0(Message_23);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.create_launchers.create_shell_script_as_executable\'/7", Var_47);
        return;
      }
    }
    else
    {
      MR_Integer Status_22 = ((MR_Integer) ((MR_hl_field(0, ChmodResult_21, 0))));

      succeeded = (Status_22 == (MR_Integer) 0);
      if (succeeded)
      {
        *Succeeded_12 = (MR_Integer) 1;
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_17, (MR_String) "% done.\n");
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.create_launchers.create_shell_script_as_executable\'/7", (MR_String) "chmod exit status != 0");
          return;
        }
    }
  }
}

void mercury__backend_libs__create_launchers__init(void)
{
}

void mercury__backend_libs__create_launchers__init_type_tables(void)
{
}

void mercury__backend_libs__create_launchers__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__create_launchers__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module backend_libs.create_launchers.
