/*
** Automatically generated from `system_cmds.m'
** by the Mercury compiler,
** version rotd-2026-03-10
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


// :- module libs.system_cmds.
// :- implementation.

/*
INIT mercury__libs__system_cmds__init
ENDINIT
*/

#include "libs.system_cmds.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
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
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.process_util.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_EnumFunctorDesc libs__system_cmds__libs__system_cmds__enum_functor_desc_command_verbosity_0_0;

static const MR_EnumFunctorDesc libs__system_cmds__libs__system_cmds__enum_functor_desc_command_verbosity_0_1;

static const MR_EnumFunctorDescPtr libs__system_cmds__libs__system_cmds__enum_ordinal_ordered_command_verbosity_0[2];

static const MR_EnumFunctorDescPtr libs__system_cmds__libs__system_cmds__enum_name_ordered_command_verbosity_0[2];

static const MR_Integer libs__system_cmds__libs__system_cmds__functor_number_map_command_verbosity_0[2];

static const MR_EnumFunctorDesc libs__system_cmds__libs__system_cmds__enum_functor_desc_quote_char_0_0;

static const MR_EnumFunctorDesc libs__system_cmds__libs__system_cmds__enum_functor_desc_quote_char_0_1;

static const MR_EnumFunctorDescPtr libs__system_cmds__libs__system_cmds__enum_ordinal_ordered_quote_char_0[2];

static const MR_EnumFunctorDescPtr libs__system_cmds__libs__system_cmds__enum_name_ordered_quote_char_0[2];

static const MR_Integer libs__system_cmds__libs__system_cmds__functor_number_map_quote_char_0[2];

static MR_String MR_CALL 
libs__system_cmds__at_file_name_2_f_0(
  MR_Word Globals_4,
  MR_String FileName_5);

static MR_bool MR_CALL 
libs__system_cmds__use_win32_0_p_0(void);

static MR_bool MR_CALL 
libs__system_cmds__use_dotnet_0_p_0(void);

static MR_bool MR_CALL 
libs__system_cmds____Unify____command_verbosity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__system_cmds____Compare____command_verbosity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__system_cmds____Unify____quote_char_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__system_cmds____Compare____quote_char_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__system_cmds_scalar_common_1[1][1];




static /* final */ const MR_Box libs__system_cmds_scalar_common_1[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "libs.process_util.mh"
#include "libs.system_cmds.mh"


static const MR_EnumFunctorDesc libs__system_cmds__libs__system_cmds__enum_functor_desc_command_verbosity_0_0 = {
  (MR_String) "cmd_verbose",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__system_cmds__libs__system_cmds__enum_functor_desc_command_verbosity_0_1 = {
  (MR_String) "cmd_verbose_commands",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__system_cmds__libs__system_cmds__enum_ordinal_ordered_command_verbosity_0[2] = {
  &libs__system_cmds__libs__system_cmds__enum_functor_desc_command_verbosity_0_0,
  &libs__system_cmds__libs__system_cmds__enum_functor_desc_command_verbosity_0_1
};

static const MR_EnumFunctorDescPtr libs__system_cmds__libs__system_cmds__enum_name_ordered_command_verbosity_0[2] = {
  &libs__system_cmds__libs__system_cmds__enum_functor_desc_command_verbosity_0_0,
  &libs__system_cmds__libs__system_cmds__enum_functor_desc_command_verbosity_0_1
};

static const MR_Integer libs__system_cmds__libs__system_cmds__functor_number_map_command_verbosity_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__system_cmds__libs__system_cmds__type_ctor_info_command_verbosity_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__system_cmds____Unify____command_verbosity_0_0_10001)),
  ((MR_Box) (libs__system_cmds____Compare____command_verbosity_0_0_10001)),
  (MR_String) "libs.system_cmds",
  (MR_String) "command_verbosity",
  { libs__system_cmds__libs__system_cmds__enum_name_ordered_command_verbosity_0 },
  { libs__system_cmds__libs__system_cmds__enum_ordinal_ordered_command_verbosity_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__system_cmds__libs__system_cmds__functor_number_map_command_verbosity_0,

};

static const MR_EnumFunctorDesc libs__system_cmds__libs__system_cmds__enum_functor_desc_quote_char_0_0 = {
  (MR_String) "forward",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__system_cmds__libs__system_cmds__enum_functor_desc_quote_char_0_1 = {
  (MR_String) "double",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__system_cmds__libs__system_cmds__enum_ordinal_ordered_quote_char_0[2] = {
  &libs__system_cmds__libs__system_cmds__enum_functor_desc_quote_char_0_0,
  &libs__system_cmds__libs__system_cmds__enum_functor_desc_quote_char_0_1
};

static const MR_EnumFunctorDescPtr libs__system_cmds__libs__system_cmds__enum_name_ordered_quote_char_0[2] = {
  &libs__system_cmds__libs__system_cmds__enum_functor_desc_quote_char_0_1,
  &libs__system_cmds__libs__system_cmds__enum_functor_desc_quote_char_0_0
};

static const MR_Integer libs__system_cmds__libs__system_cmds__functor_number_map_quote_char_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__system_cmds__libs__system_cmds__type_ctor_info_quote_char_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__system_cmds____Unify____quote_char_0_0_10001)),
  ((MR_Box) (libs__system_cmds____Compare____quote_char_0_0_10001)),
  (MR_String) "libs.system_cmds",
  (MR_String) "quote_char",
  { libs__system_cmds__libs__system_cmds__enum_name_ordered_quote_char_0 },
  { libs__system_cmds__libs__system_cmds__enum_ordinal_ordered_quote_char_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__system_cmds__libs__system_cmds__functor_number_map_quote_char_0,

};

void MR_CALL 
libs__system_cmds____Compare____quote_char_0_0(
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
libs__system_cmds____Unify____quote_char_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__system_cmds____Compare____command_verbosity_0_0(
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
libs__system_cmds____Unify____command_verbosity_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__system_cmds__make_command_string_3_p_0(
  MR_String String0_4,
  MR_Word QuoteType_5,
  MR_String * String_6)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL libs__system_cmds__make_command_string_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef MR_WIN32
    SUCCESS_INDICATOR = 1;
#else
    SUCCESS_INDICATOR = 0;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    MR_String Quote_7;
    MR_Word Var_8;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;

    switch (QuoteType_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Quote_7 = (MR_String) " \"";
        break;
      case (MR_Integer) 0:
        Quote_7 = (MR_String) " \'";
        break;
    }
    {
      Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_12, 0) = ((MR_Box) (Quote_7));
      MR_hl_field(1, Var_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_11, 0) = ((MR_Box) (String0_4));
      MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_12));
    }
    {
      Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_10, 0) = ((MR_Box) (Quote_7));
      MR_hl_field(1, Var_10, 1) = ((MR_Box) (Var_11));
    }
    {
      Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_8, 0) = ((MR_Box) ((MR_String) "sh -c "));
      MR_hl_field(1, Var_8, 1) = ((MR_Box) (Var_10));
    }
    mercury__string__append_list_2_p_0(Var_8, String_6);
  }
  else
    *String_6 = String0_4;
}

void MR_CALL 
libs__system_cmds__invoke_long_system_command_9_p_0(
  MR_Word Globals_10,
  MR_Word ProgressStream_11,
  MR_Word CmdOutputStream_12,
  MR_Word Verbosity_13,
  MR_String Cmd_14,
  MR_String Args_15,
  MR_Word * Succeeded_16)
{
  libs__system_cmds__invoke_long_system_command_maybe_filter_output_11_p_0(Globals_10, ProgressStream_11, CmdOutputStream_12, Verbosity_13, Cmd_14, (MR_String) "", Args_15, (MR_Word) ((MR_Unsigned) 0U), Succeeded_16);
}

void MR_CALL 
libs__system_cmds__invoke_long_system_command_maybe_filter_output_11_p_0(
  MR_Word Globals_12,
  MR_Word ProgressStream_13,
  MR_Word CmdOutputStream_14,
  MR_Word Verbosity_15,
  MR_String Cmd_16,
  MR_String NonAtArgs_17,
  MR_String Args_18,
  MR_Word MaybeProcessOutput_19,
  MR_Word * Succeeded_20)
{
  MR_bool succeeded;
  MR_Word RestrictedCommandLine_22;

  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 591, &RestrictedCommandLine_22);
  switch (RestrictedCommandLine_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String FullCmd_88;

        succeeded = (strcmp(NonAtArgs_17, (MR_String) "") == 0);
        if (succeeded)
        {
          MR_String Var_106;

          Var_106 = mercury__string__f_43_43_2_f_0((MR_String) " ", Args_18);
          FullCmd_88 = mercury__string__f_43_43_2_f_0(Cmd_16, Var_106);
        }
        else
        {
          MR_String Var_108;
          MR_String Var_109;
          MR_String Var_111;

          Var_108 = mercury__string__f_43_43_2_f_0((MR_String) " ", Args_18);
          Var_109 = mercury__string__f_43_43_2_f_0(NonAtArgs_17, Var_108);
          Var_111 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_109);
          FullCmd_88 = mercury__string__f_43_43_2_f_0(Cmd_16, Var_111);
        }
        libs__system_cmds__invoke_system_command_maybe_filter_output_9_p_0(Globals_12, ProgressStream_13, CmdOutputStream_14, Verbosity_15, FullCmd_88, MaybeProcessOutput_19, Succeeded_20);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TmpFileResult_23;

        libs__file_util__open_temp_output_3_p_0(&TmpFileResult_23);
        if (((MR_tag((MR_Word) TmpFileResult_23)) == (MR_Integer) 1))
        {
          MR_String ErrorMessage_33 = ((MR_String) ((MR_hl_field(1, TmpFileResult_23, 0))));

          mercury__io__write_string_4_p_0(ProgressStream_13, ErrorMessage_33);
          mercury__io__write_string_4_p_0(ProgressStream_13, (MR_String) "\n");
          *Succeeded_20 = (MR_Integer) 0;
        }
        else
        {
          MR_String TmpFile_24;
          MR_Word TmpStream_25;
          MR_String TmpFileArgs_26;
          MR_Word VeryVerbose_27;
          MR_String AtFileName_28;
          MR_String FullCmd_29;
          MR_Word Succeeded0_30;
          MR_Word RemoveResult_31;
          MR_Tuple Var_38 = ((MR_Tuple) ((MR_hl_field(0, TmpFileResult_23, 0))));

          TmpFile_24 = ((MR_String) ((MR_hl_field(0, Var_38, 0))));
          TmpStream_25 = ((MR_Word) ((MR_hl_field(0, Var_38, 1))));
          TmpFileArgs_26 = mercury__string__replace_all_3_f_0(Args_18, (MR_String) "\\", (MR_String) "\\\\");
          mercury__io__write_string_4_p_0(TmpStream_25, TmpFileArgs_26);
          mercury__io__close_output_3_p_0(TmpStream_25);
          libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 132, &VeryVerbose_27);
          AtFileName_28 = libs__system_cmds__at_file_name_2_f_0(Globals_12, TmpFile_24);
          switch (VeryVerbose_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_4_p_0(ProgressStream_13, (MR_String) "% Args placed in ");
                mercury__io__write_string_4_p_0(ProgressStream_13, AtFileName_28);
                mercury__io__write_string_4_p_0(ProgressStream_13, (MR_String) ": \140");
                mercury__io__write_string_4_p_0(ProgressStream_13, TmpFileArgs_26);
                mercury__io__write_string_4_p_0(ProgressStream_13, (MR_String) "\'\n");
                mercury__io__flush_output_3_p_0(ProgressStream_13);
              }
              break;
          }
          succeeded = (strcmp(NonAtArgs_17, (MR_String) "") == 0);
          if (succeeded)
          {
            MR_String Var_97;

            Var_97 = mercury__string__f_43_43_2_f_0((MR_String) " ", AtFileName_28);
            FullCmd_29 = mercury__string__f_43_43_2_f_0(Cmd_16, Var_97);
          }
          else
          {
            MR_String Var_99;
            MR_String Var_100;
            MR_String Var_102;

            Var_99 = mercury__string__f_43_43_2_f_0((MR_String) " ", AtFileName_28);
            Var_100 = mercury__string__f_43_43_2_f_0(NonAtArgs_17, Var_99);
            Var_102 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_100);
            FullCmd_29 = mercury__string__f_43_43_2_f_0(Cmd_16, Var_102);
          }
          libs__system_cmds__invoke_system_command_maybe_filter_output_9_p_0(Globals_12, ProgressStream_13, CmdOutputStream_14, Verbosity_15, FullCmd_29, MaybeProcessOutput_19, &Succeeded0_30);
          mercury__io__file__remove_file_4_p_0(TmpFile_24, &RemoveResult_31);
          if ((RemoveResult_31 == (MR_Word) ((MR_Unsigned) 0U)))
            *Succeeded_20 = Succeeded0_30;
          else
            *Succeeded_20 = (MR_Integer) 0;
        }
      }
      break;
  }
}

static MR_String MR_CALL 
libs__system_cmds__at_file_name_2_f_0(
  MR_Word Globals_4,
  MR_String FileName_5)
{
  MR_String AtFileName_6;
  MR_Word EnvType_7;

  libs__globals__get_system_env_type_2_p_0(Globals_4, &EnvType_7);
  switch (EnvType_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 2:
    case (MR_Integer) 0:
    case (MR_Integer) 3:
      AtFileName_6 = mercury__string__f_43_43_2_f_0((MR_String) "\100", FileName_5);
      break;
    case (MR_Integer) 4:
      AtFileName_6 = mercury__string__f_43_43_2_f_0((MR_String) "\140\100", FileName_5);
      break;
  }
  return AtFileName_6;
}

void MR_CALL 
libs__system_cmds__invoke_system_command_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word CmdOutputStream_11,
  MR_Word Verbosity_12,
  MR_String Command_13,
  MR_Word * Succeeded_14)
{
  libs__system_cmds__invoke_system_command_maybe_filter_output_9_p_0(Globals_9, ProgressStream_10, CmdOutputStream_11, Verbosity_12, Command_13, (MR_Word) ((MR_Unsigned) 0U), Succeeded_14);
}

void MR_CALL 
libs__system_cmds__invoke_system_command_maybe_filter_output_9_p_0(
  MR_Word Globals_10,
  MR_Word ProgressStream_11,
  MR_Word CmdOutputStream_12,
  MR_Word Verbosity_13,
  MR_String Command_14,
  MR_Word MaybeProcessOutput_15,
  MR_Word * Succeeded_16)
{
  MR_bool succeeded;
  MR_Integer OldStatus_18;
  MR_Word Verbose_19;
  MR_Word PrintCommand_20;
  MR_Word TmpFileResult_21;
  MR_String TmpFile_22;
  MR_Word CommandSucceeded_26;
  MR_String MaybeProcessedTmpFile_38;
  MR_Word ProcessOutputSucceeded_44;
  MR_String ProcessOutput_34;

  mercury__io__get_exit_status_3_p_0(&OldStatus_18);
  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 131, &Verbose_19);
  switch (Verbosity_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      PrintCommand_20 = Verbose_19;
      break;
    case (MR_Integer) 1:
      libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 138, &PrintCommand_20);
      break;
  }
  switch (PrintCommand_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_string_4_p_0(ProgressStream_11, (MR_String) "% Invoking system command \140");
        mercury__io__write_string_4_p_0(ProgressStream_11, Command_14);
        mercury__io__write_string_4_p_0(ProgressStream_11, (MR_String) "\'...\n");
        mercury__io__flush_output_3_p_0(ProgressStream_11);
      }
      break;
  }
  mercury__io__file__make_temp_file_3_p_0(&TmpFileResult_21);
  if (((MR_tag((MR_Word) TmpFileResult_21)) == (MR_Integer) 1))
  {
    MR_Word Error_32 = ((MR_Word) ((MR_hl_field(1, TmpFileResult_21, 0))));
    MR_String TmpMsg_33;
    MR_String Var_97;

    Var_97 = mercury__io__error_message_1_f_0(Error_32);
    TmpMsg_33 = mercury__string__f_43_43_2_f_0((MR_String) "Could not create temporary file: ", Var_97);
    libs__file_util__report_arbitrary_error_4_p_0(ProgressStream_11, TmpMsg_33);
    TmpFile_22 = (MR_String) "";
    CommandSucceeded_26 = (MR_Integer) 0;
  }
  else
  {
    MR_String CommandRedirected_23;
    MR_Word CmdResult_24;

    TmpFile_22 = ((MR_String) ((MR_hl_field(0, TmpFileResult_21, 0))));
    succeeded = libs__system_cmds__use_dotnet_0_p_0();
    if (succeeded)
      CommandRedirected_23 = Command_14;
    else
    {
      succeeded = libs__system_cmds__use_win32_0_p_0();
      if (succeeded)
      {
        MR_String Var_157;

        Var_157 = mercury__string__f_43_43_2_f_0((MR_String) " > ", TmpFile_22);
        CommandRedirected_23 = mercury__string__f_43_43_2_f_0(Command_14, Var_157);
      }
      else
      {
        MR_String Var_159;
        MR_String Var_161;

        Var_159 = mercury__string__f_43_43_2_f_0(TmpFile_22, (MR_String) " 2>&1");
        Var_161 = mercury__string__f_43_43_2_f_0((MR_String) " > ", Var_159);
        CommandRedirected_23 = mercury__string__f_43_43_2_f_0(Command_14, Var_161);
      }
    }
    mercury__io__call_system__call_system_return_signal_4_p_0(CommandRedirected_23, &CmdResult_24);
    if (((MR_tag((MR_Word) CmdResult_24)) == (MR_Integer) 1))
    {
      MR_Word CmdIOError_30 = ((MR_Word) ((MR_hl_field(1, CmdResult_24, 0))));
      MR_String CmdErrorMsg_31;

      CmdErrorMsg_31 = mercury__io__error_message_1_f_0(CmdIOError_30);
      libs__file_util__report_arbitrary_error_4_p_0(ProgressStream_11, CmdErrorMsg_31);
      CommandSucceeded_26 = (MR_Integer) 0;
    }
    else
    {
      MR_Word Var_150 = ((MR_Word) ((MR_hl_field(0, CmdResult_24, 0))));

      if (((MR_tag((MR_Word) Var_150)) == (MR_Integer) 0))
      {
        MR_Integer Status_25 = ((MR_Integer) ((MR_hl_field(0, Var_150, 0))));

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, PrintCommand_20, (MR_String) "% done.\n");
        succeeded = (Status_25 == (MR_Integer) 0);
        if (succeeded)
          CommandSucceeded_26 = (MR_Integer) 1;
        else
          CommandSucceeded_26 = (MR_Integer) 0;
      }
      else
      {
        MR_Integer Signal_27 = ((MR_Integer) ((MR_hl_field(1, Var_150, 0))));
        MR_String ErrorMsg_28;
        MR_Word StdOut_29;
        MR_String Var_163;
        MR_String Var_170;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&libs__system_cmds_scalar_common_1[0]), Signal_27, &Var_163);
        Var_170 = mercury__string__f_43_43_2_f_0(Var_163, (MR_String) ".");
        ErrorMsg_28 = mercury__string__f_43_43_2_f_0((MR_String) "system command received signal ", Var_170);
        libs__file_util__report_arbitrary_error_4_p_0(ProgressStream_11, ErrorMsg_28);
        mercury__io__stdout_stream_3_p_0(&StdOut_29);
        libs__file_util__report_arbitrary_error_4_p_0(StdOut_29, ErrorMsg_28);
        libs__process_util__raise_signal_3_p_0(Signal_27);
        CommandSucceeded_26 = (MR_Integer) 0;
      }
    }
  }
  succeeded = ((MR_tag((MR_Word) TmpFileResult_21)) == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (MaybeProcessOutput_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ProcessOutput_34 = ((MR_String) ((MR_hl_field(1, MaybeProcessOutput_15, 0))));
      succeeded = libs__system_cmds__use_dotnet_0_p_0();
      succeeded = !(succeeded);
    }
  }
  if (succeeded)
  {
    MR_Word ProcessedTmpFileResult_36;

    mercury__io__file__make_temp_file_3_p_0(&ProcessedTmpFileResult_36);
    if (((MR_tag((MR_Word) ProcessedTmpFileResult_36)) == (MR_Integer) 1))
    {
      MR_Word ProcessTmpError_49 = ((MR_Word) ((MR_hl_field(1, ProcessedTmpFileResult_36, 0))));
      MR_String ProcessTmpErrorMsg_50;

      ProcessTmpErrorMsg_50 = mercury__io__error_message_1_f_0(ProcessTmpError_49);
      libs__file_util__report_arbitrary_error_4_p_0(ProgressStream_11, ProcessTmpErrorMsg_50);
      ProcessOutputSucceeded_44 = (MR_Integer) 0;
      MaybeProcessedTmpFile_38 = TmpFile_22;
    }
    else
    {
      MR_String ProcessOutputRedirected_40;
      MR_Word ProcessOutputResult_41;
      MR_Word Var_42;

      MaybeProcessedTmpFile_38 = ((MR_String) ((MR_hl_field(0, ProcessedTmpFileResult_36, 0))));
      succeeded = libs__system_cmds__use_win32_0_p_0();
      if (succeeded)
      {
        MR_Word SystemEnvType_39;

        libs__globals__get_system_env_type_2_p_0(Globals_10, &SystemEnvType_39);
        succeeded = (SystemEnvType_39 == (MR_Integer) 4);
        if (succeeded)
        {
          MR_String Var_173;
          MR_String Var_175;
          MR_String Var_176;
          MR_String Var_178;
          MR_String Var_179;

          Var_173 = mercury__string__f_43_43_2_f_0(MaybeProcessedTmpFile_38, (MR_String) " 2>&1");
          Var_175 = mercury__string__f_43_43_2_f_0((MR_String) " > ", Var_173);
          Var_176 = mercury__string__f_43_43_2_f_0(ProcessOutput_34, Var_175);
          Var_178 = mercury__string__f_43_43_2_f_0((MR_String) " | ", Var_176);
          Var_179 = mercury__string__f_43_43_2_f_0(TmpFile_22, Var_178);
          ProcessOutputRedirected_40 = mercury__string__f_43_43_2_f_0((MR_String) "Get-context ", Var_179);
        }
        else
        {
          MR_String Var_182;
          MR_String Var_183;
          MR_String Var_185;

          Var_182 = mercury__string__f_43_43_2_f_0((MR_String) " > ", MaybeProcessedTmpFile_38);
          Var_183 = mercury__string__f_43_43_2_f_0(TmpFile_22, Var_182);
          Var_185 = mercury__string__f_43_43_2_f_0((MR_String) " < ", Var_183);
          ProcessOutputRedirected_40 = mercury__string__f_43_43_2_f_0(ProcessOutput_34, Var_185);
        }
      }
      else
      {
        MR_String Var_187;
        MR_String Var_189;
        MR_String Var_190;
        MR_String Var_192;

        Var_187 = mercury__string__f_43_43_2_f_0(MaybeProcessedTmpFile_38, (MR_String) " 2>&1");
        Var_189 = mercury__string__f_43_43_2_f_0((MR_String) " > ", Var_187);
        Var_190 = mercury__string__f_43_43_2_f_0(TmpFile_22, Var_189);
        Var_192 = mercury__string__f_43_43_2_f_0((MR_String) " < ", Var_190);
        ProcessOutputRedirected_40 = mercury__string__f_43_43_2_f_0(ProcessOutput_34, Var_192);
      }
      switch (PrintCommand_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(ProgressStream_11, (MR_String) "% Invoking system command \140");
            mercury__io__write_string_4_p_0(ProgressStream_11, ProcessOutputRedirected_40);
            mercury__io__write_string_4_p_0(ProgressStream_11, (MR_String) "\'...\n");
            mercury__io__flush_output_3_p_0(ProgressStream_11);
          }
          break;
      }
      mercury__io__call_system__call_system_return_signal_4_p_0(ProcessOutputRedirected_40, &ProcessOutputResult_41);
      mercury__io__file__remove_file_4_p_0(TmpFile_22, &Var_42);
      if (((MR_tag((MR_Word) ProcessOutputResult_41)) == (MR_Integer) 1))
      {
        MR_Word ProcessOutputError_47 = ((MR_Word) ((MR_hl_field(1, ProcessOutputResult_41, 0))));
        MR_String ProcessOutputErrorMsg_48;

        ProcessOutputErrorMsg_48 = mercury__io__error_message_1_f_0(ProcessOutputError_47);
        libs__file_util__report_arbitrary_error_4_p_0(ProgressStream_11, ProcessOutputErrorMsg_48);
        ProcessOutputSucceeded_44 = (MR_Integer) 0;
      }
      else
      {
        MR_Word Var_151 = ((MR_Word) ((MR_hl_field(0, ProcessOutputResult_41, 0))));

        if (((MR_tag((MR_Word) Var_151)) == (MR_Integer) 0))
        {
          MR_Integer ProcessOutputStatus_43 = ((MR_Integer) ((MR_hl_field(0, Var_151, 0))));

          libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, PrintCommand_20, (MR_String) "% done.\n");
          succeeded = (ProcessOutputStatus_43 == (MR_Integer) 0);
          if (succeeded)
            ProcessOutputSucceeded_44 = (MR_Integer) 1;
          else
            ProcessOutputSucceeded_44 = (MR_Integer) 0;
        }
        else
        {
          MR_Integer ProcessOutputSignal_45 = ((MR_Integer) ((MR_hl_field(1, Var_151, 0))));
          MR_String OutputSignalMsg_46;
          MR_String Var_198;
          MR_String Var_205;

          libs__process_util__raise_signal_3_p_0(ProcessOutputSignal_45);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&libs__system_cmds_scalar_common_1[0]), ProcessOutputSignal_45, &Var_198);
          Var_205 = mercury__string__f_43_43_2_f_0(Var_198, (MR_String) ".");
          OutputSignalMsg_46 = mercury__string__f_43_43_2_f_0((MR_String) "system command received signal ", Var_205);
          libs__file_util__report_arbitrary_error_4_p_0(ProgressStream_11, OutputSignalMsg_46);
          ProcessOutputSucceeded_44 = (MR_Integer) 0;
        }
      }
    }
  }
  else
  {
    ProcessOutputSucceeded_44 = (MR_Integer) 1;
    MaybeProcessedTmpFile_38 = TmpFile_22;
  }
  *Succeeded_16 = libs__maybe_util__and_2_f_0(CommandSucceeded_26, ProcessOutputSucceeded_44);
  if (!(((MR_tag((MR_Word) TmpFileResult_21)) == (MR_Integer) 1)))
  {
    MR_Word MaybeProcessedTmpFileResult_52;
    MR_Word Var_56;

    mercury__io__read_named_file_as_string_4_p_0(MaybeProcessedTmpFile_38, &MaybeProcessedTmpFileResult_52);
    if (((MR_tag((MR_Word) MaybeProcessedTmpFileResult_52)) == (MR_Integer) 1))
    {
      MR_Word MaybeProcessedTmpFileError_54 = ((MR_Word) ((MR_hl_field(1, MaybeProcessedTmpFileResult_52, 0))));
      MR_String Msg_55;
      MR_String Var_147;

      Var_147 = mercury__io__error_message_1_f_0(MaybeProcessedTmpFileError_54);
      Msg_55 = mercury__string__f_43_43_2_f_0((MR_String) "error opening command output: ", Var_147);
      libs__file_util__report_arbitrary_error_4_p_0(ProgressStream_11, Msg_55);
    }
    else
    {
      MR_String MaybeProcessedTmpFileStr_53 = ((MR_String) ((MR_hl_field(0, MaybeProcessedTmpFileResult_52, 0))));

      mercury__io__write_string_4_p_0(CmdOutputStream_12, MaybeProcessedTmpFileStr_53);
    }
    mercury__io__file__remove_file_4_p_0(MaybeProcessedTmpFile_38, &Var_56);
  }
  mercury__io__set_exit_status_3_p_0(OldStatus_18);
}

static MR_bool MR_CALL 
libs__system_cmds__use_win32_0_p_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL libs__system_cmds__use_win32_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef MR_WIN32
    SUCCESS_INDICATOR = 1;
#else
    SUCCESS_INDICATOR = 0;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

static MR_bool MR_CALL 
libs__system_cmds__use_dotnet_0_p_0(void)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__semidet_fail_0_p_0();
  return succeeded;
}

static MR_bool MR_CALL 
libs__system_cmds____Unify____command_verbosity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__system_cmds____Unify____command_verbosity_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__system_cmds____Compare____command_verbosity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__system_cmds____Compare____command_verbosity_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__system_cmds____Unify____quote_char_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__system_cmds____Unify____quote_char_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__system_cmds____Compare____quote_char_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__system_cmds____Compare____quote_char_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__libs__system_cmds__init(void)
{
}

void mercury__libs__system_cmds__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&libs__system_cmds__libs__system_cmds__type_ctor_info_command_verbosity_0);
  MR_register_type_ctor_info(&libs__system_cmds__libs__system_cmds__type_ctor_info_quote_char_0);
}

void mercury__libs__system_cmds__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__system_cmds__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module libs.system_cmds.
