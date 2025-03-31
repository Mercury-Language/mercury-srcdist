/*
** Automatically generated from `conf.m'
** by the Mercury compiler,
** version rotd-2025-03-31
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


// :- module conf.
// :- implementation.

/*
INIT mercury__conf__init
ENDINIT
*/

#include "conf.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.file.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static void MR_CALL 
conf__hostname_cmd_1_p_0(
  MR_String * Hostname_1);

static void MR_CALL 
conf__mkfifo_cmd_1_p_0(
  MR_String * Mkfifo_1);







#include "array.mh"
#include "bitmap.mh"
#include "conf.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static void MR_CALL 
conf__hostname_cmd_1_p_0(
  MR_String * Hostname_1)
{
{
#define MR_PROC_LABEL conf__hostname_cmd_1_p_0

	MR_String Hostname;

		{

    /* shut up warnings about casting away const */
    Hostname = (MR_String) (MR_Integer) MR_HOSTNAMECMD;


		;}
#undef MR_PROC_LABEL
	*Hostname_1  = Hostname;
}
}

static void MR_CALL 
conf__mkfifo_cmd_1_p_0(
  MR_String * Mkfifo_1)
{
{
#define MR_PROC_LABEL conf__mkfifo_cmd_1_p_0

	MR_String Mkfifo;

		{

    /* shut up warnings about casting away const */
    Mkfifo = (MR_String) (MR_Integer) MR_MKFIFO;


		;}
#undef MR_PROC_LABEL
	*Mkfifo_1  = Mkfifo;
}
}

MR_Integer MR_CALL 
conf__getpid_0_f_0(void)
{
  MR_Integer Pid_1;

{
#define MR_PROC_LABEL conf__getpid_0_f_0

	MR_Integer Pid;

		{

#ifdef  MR_DEEP_PROFILER_ENABLED
    Pid = getpid();
#else
    MR_fatal_error("the deep profiler is not supported");
#endif


		;}
#undef MR_PROC_LABEL
	Pid_1  = Pid;
}
  return Pid_1;
}

void MR_CALL 
conf__script_name_3_p_0(
  MR_String * ScriptName_4)
{
  MR_Word MaybeScriptName_6;

  mercury__io__environment__get_environment_var_4_p_0((MR_String) "SCRIPT_NAME", &MaybeScriptName_6);
  if ((MaybeScriptName_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *ScriptName_4 = (MR_String) "/cgi-bin/mdprof_cgi";
  else
    *ScriptName_4 = ((MR_String) ((MR_hl_field(1, MaybeScriptName_6, 0))));
}

void MR_CALL 
conf__server_name_port_3_p_0(
  MR_String * Machine_4)
{
  MR_bool succeeded;
  MR_String ServerName_6;
  MR_Word MaybeServerPort_7;
  MR_Word MaybeServerName_15;

  mercury__io__environment__get_environment_var_4_p_0((MR_String) "SERVER_NAME", &MaybeServerName_15);
  if ((MaybeServerName_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word TmpFileResult_18;

    mercury__io__file__make_temp_file_3_p_0(&TmpFileResult_18);
    if (((MR_tag((MR_Word) TmpFileResult_18)) == (MR_Integer) 1))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140conf.server_name_2\'/3", (MR_String) "Cannot create temporary file");
        return;
      }
    else
    {
      MR_String TmpFile_19 = ((MR_String) ((MR_hl_field(0, TmpFileResult_18, 0))));
      MR_String HostnameCmd_20;
      MR_String ServerRedirectCmd_21;
      MR_Word Res1_22;
      MR_String Var_60;

{
#define MR_PROC_LABEL conf__server_name_port_3_p_0

	MR_String Hostname;

		{

    /* shut up warnings about casting away const */
    Hostname = (MR_String) (MR_Integer) MR_HOSTNAMECMD;


		;}
#undef MR_PROC_LABEL
	HostnameCmd_20  = Hostname;
}
      Var_60 = mercury__string__f_43_43_2_f_0((MR_String) " > ", TmpFile_19);
      ServerRedirectCmd_21 = mercury__string__f_43_43_2_f_0(HostnameCmd_20, Var_60);
      mercury__io__call_system__call_system_4_p_0(ServerRedirectCmd_21, &Res1_22);
      if (((MR_tag((MR_Word) Res1_22)) == (MR_Integer) 1))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140conf.server_name_2\'/3", (MR_String) "cannot execute cmd to find the server\'s name");
          return;
        }
      else
      {
        MR_Integer ResCode_23 = ((MR_Integer) ((MR_hl_field(0, Res1_22, 0))));

        succeeded = (ResCode_23 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word TmpRes_24;
          MR_Word Var_32;

          mercury__io__open_input_4_p_0(TmpFile_19, &TmpRes_24);
          if (((MR_tag((MR_Word) TmpRes_24)) == (MR_Integer) 1))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140conf.server_name_2\'/3", (MR_String) "cannot open file to find the server\'s name");
              return;
            }
          else
          {
            MR_Word TmpStream_25 = ((MR_Word) ((MR_hl_field(0, TmpRes_24, 0))));
            MR_Word TmpReadRes_26;

            mercury__io__read_file_as_string_4_p_0(TmpStream_25, &TmpReadRes_26);
            if (((MR_tag((MR_Word) TmpReadRes_26)) == (MR_Integer) 1))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140conf.server_name_2\'/3", (MR_String) "cannot read server\'s name");
                return;
              }
            else
            {
              MR_String ServerNameNl_27 = ((MR_String) ((MR_hl_field(0, TmpReadRes_26, 0))));
              MR_String ServerNamePrime_28;

              succeeded = mercury__string__remove_suffix_3_p_0(ServerNameNl_27, (MR_String) "\n", &ServerNamePrime_28);
              if (succeeded)
                ServerName_6 = ServerNamePrime_28;
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140conf.server_name_2\'/3", (MR_String) "malformed server name");
                  return;
                }
            }
            mercury__io__close_input_3_p_0(TmpStream_25);
          }
          mercury__io__file__remove_file_4_p_0(TmpFile_19, &Var_32);
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140conf.server_name_2\'/3", (MR_String) "cannot execute cmd to find the server\'s name");
            return;
          }
      }
    }
  }
  else
    ServerName_6 = ((MR_String) ((MR_hl_field(1, MaybeServerName_15, 0))));
  mercury__io__environment__get_environment_var_4_p_0((MR_String) "SERVER_PORT", &MaybeServerPort_7);
  if ((MaybeServerPort_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *Machine_4 = ServerName_6;
  else
  {
    MR_String Port_8 = ((MR_String) ((MR_hl_field(1, MaybeServerPort_7, 0))));
    MR_String Var_13;

    Var_13 = mercury__string__f_43_43_2_f_0((MR_String) ":", Port_8);
    *Machine_4 = mercury__string__f_43_43_2_f_0(ServerName_6, Var_13);
  }
}

MR_String MR_CALL 
conf__make_pipe_cmd_1_f_0(
  MR_String PipeName_3)
{
  MR_bool succeeded;
  MR_String Cmd_4;
  MR_String CmdName_5;

{
#define MR_PROC_LABEL conf__make_pipe_cmd_1_f_0

	MR_String Mkfifo;

		{

    /* shut up warnings about casting away const */
    Mkfifo = (MR_String) (MR_Integer) MR_MKFIFO;


		;}
#undef MR_PROC_LABEL
	CmdName_5  = Mkfifo;
}
  succeeded = (strcmp(CmdName_5, (MR_String) "") == 0);
  if (succeeded)
    mercury__require__unexpected_2_p_0((MR_String) "function \140conf.make_pipe_cmd\'/1", (MR_String) "do not know what command to use");
  else
  {
    MR_String Var_15;

    Var_15 = mercury__string__f_43_43_2_f_0((MR_String) " ", PipeName_3);
    Cmd_4 = mercury__string__f_43_43_2_f_0(CmdName_5, Var_15);
  }
  return Cmd_4;
}

void mercury__conf__init(void)
{
}

void mercury__conf__init_type_tables(void)
{
}

void mercury__conf__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__conf__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module conf.
