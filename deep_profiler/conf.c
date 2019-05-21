/*
** Automatically generated from `conf.m'
** by the Mercury compiler,
** version rotd-2017-07-31
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module conf. */
/* :- implementation. */

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
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static void MR_CALL 
conf__hostname_cmd_1_p_0(
  MR_String * conf__Hostname_1);

static void MR_CALL 
conf__mkfifo_cmd_1_p_0(
  MR_String * conf__Mkfifo_1);







#include "conf.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static void MR_CALL 
conf__hostname_cmd_1_p_0(
  MR_String * conf__Hostname_1)
{
  {
{
#define MR_PROC_LABEL conf__hostname_cmd_1_p_0

	MR_String Hostname;

		{

    /* shut up warnings about casting away const */
    Hostname = (MR_String) (MR_Integer) MR_HOSTNAMECMD;


		;}
#undef MR_PROC_LABEL
	 *conf__Hostname_1  = Hostname;
}
  }
}

static void MR_CALL 
conf__mkfifo_cmd_1_p_0(
  MR_String * conf__Mkfifo_1)
{
  {
{
#define MR_PROC_LABEL conf__mkfifo_cmd_1_p_0

	MR_String Mkfifo;

		{

    /* shut up warnings about casting away const */
    Mkfifo = (MR_String) (MR_Integer) MR_MKFIFO;


		;}
#undef MR_PROC_LABEL
	 *conf__Mkfifo_1  = Mkfifo;
}
  }
}

MR_Integer MR_CALL 
conf__getpid_0_f_0(void)
{
  {
    MR_Integer conf__Pid_1;

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
	 conf__Pid_1  = Pid;
}
    return conf__Pid_1;
  }
}

void MR_CALL 
conf__script_name_3_p_0(
  MR_String * conf__ScriptName_4)
{
  {
    MR_Word conf__MaybeScriptName_6;

    {
      mercury__io__get_environment_var_4_p_0((MR_String) "SCRIPT_NAME", &conf__MaybeScriptName_6);
    }
    if ((conf__MaybeScriptName_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *conf__ScriptName_4 = (MR_String) "/cgi-bin/mdprof_cgi";
    else
      *conf__ScriptName_4 = ((MR_String) (MR_hl_field(MR_mktag(1), conf__MaybeScriptName_6, (MR_Integer) 0)));
  }
}

void MR_CALL 
conf__server_name_port_3_p_0(
  MR_String * conf__Machine_4)
{
  {
    MR_bool conf__succeeded;
    MR_String conf__ServerName_6;
    MR_Word conf__MaybeServerPort_7;
    MR_Word conf__MaybeServerName_19;

    {
      mercury__io__get_environment_var_4_p_0((MR_String) "SERVER_NAME", &conf__MaybeServerName_19);
    }
    if ((conf__MaybeServerName_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word conf__TmpFileResult_27;

      {
        mercury__io__make_temp_file_3_p_0(&conf__TmpFileResult_27);
      }
      if (((MR_tag((MR_Word) conf__TmpFileResult_27)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "conf", (MR_String) "predicate \140conf.server_name_2\'/3", (MR_String) "Cannot create temporary file");
          return;
        }
      }
      else
      {
        MR_String conf__TmpFile_28 = ((MR_String) (MR_hl_field(MR_mktag(0), conf__TmpFileResult_27, (MR_Integer) 0)));
        MR_String conf__HostnameCmd_29;
        MR_String conf__ServerRedirectCmd_30;
        MR_Word conf__Res1_31;
        MR_String conf__Var_76;

{
#define MR_PROC_LABEL conf__server_name_port_3_p_0

	MR_String Hostname;

		{

    /* shut up warnings about casting away const */
    Hostname = (MR_String) (MR_Integer) MR_HOSTNAMECMD;


		;}
#undef MR_PROC_LABEL
	 conf__HostnameCmd_29  = Hostname;
}
        {
          conf__Var_76 = mercury__string__f_43_43_2_f_0((MR_String) " > ", conf__TmpFile_28);
        }
        {
          conf__ServerRedirectCmd_30 = mercury__string__f_43_43_2_f_0(conf__HostnameCmd_29, conf__Var_76);
        }
        {
          mercury__io__call_system_4_p_0(conf__ServerRedirectCmd_30, &conf__Res1_31);
        }
        if (((MR_tag((MR_Word) conf__Res1_31)) == (MR_mktag((MR_Integer) 1))))
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "conf", (MR_String) "predicate \140conf.server_name_2\'/3", (MR_String) "cannot execute cmd to find the server\'s name");
            return;
          }
        }
        else
        {
          MR_Integer conf__ResCode_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), conf__Res1_31, (MR_Integer) 0)));

          conf__succeeded = (conf__ResCode_32 == (MR_Integer) 0);
          if (conf__succeeded)
          {
            MR_Word conf__TmpRes_33;
            MR_Word conf__Var_41;

            {
              mercury__io__open_input_4_p_0(conf__TmpFile_28, &conf__TmpRes_33);
            }
            if (((MR_tag((MR_Word) conf__TmpRes_33)) == (MR_mktag((MR_Integer) 1))))
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "conf", (MR_String) "predicate \140conf.server_name_2\'/3", (MR_String) "cannot open file to find the server\'s name");
                return;
              }
            }
            else
            {
              MR_Word conf__TmpStream_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), conf__TmpRes_33, (MR_Integer) 0)));
              MR_Word conf__TmpReadRes_35;

              {
                mercury__io__read_file_as_string_4_p_0(conf__TmpStream_34, &conf__TmpReadRes_35);
              }
              if (((MR_tag((MR_Word) conf__TmpReadRes_35)) == (MR_mktag((MR_Integer) 1))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "conf", (MR_String) "predicate \140conf.server_name_2\'/3", (MR_String) "cannot read server\'s name");
                  return;
                }
              }
              else
              {
                MR_String conf__ServerNameNl_36 = ((MR_String) (MR_hl_field(MR_mktag(0), conf__TmpReadRes_35, (MR_Integer) 0)));
                MR_String conf__ServerNamePrime_37;

                {
                  conf__succeeded = mercury__string__remove_suffix_3_p_0(conf__ServerNameNl_36, (MR_String) "\n", &conf__ServerNamePrime_37);
                }
                if (conf__succeeded)
                  conf__ServerName_6 = conf__ServerNamePrime_37;
                else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "conf", (MR_String) "predicate \140conf.server_name_2\'/3", (MR_String) "malformed server name");
                    return;
                  }
                }
              }
              {
                mercury__io__close_input_3_p_0(conf__TmpStream_34);
              }
            }
            {
              mercury__io__remove_file_4_p_0(conf__TmpFile_28, &conf__Var_41);
            }
          }
          else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "conf", (MR_String) "predicate \140conf.server_name_2\'/3", (MR_String) "cannot execute cmd to find the server\'s name");
              return;
            }
          }
        }
      }
    }
    else
      conf__ServerName_6 = ((MR_String) (MR_hl_field(MR_mktag(1), conf__MaybeServerName_19, (MR_Integer) 0)));
    {
      mercury__io__get_environment_var_4_p_0((MR_String) "SERVER_PORT", &conf__MaybeServerPort_7);
    }
    if ((conf__MaybeServerPort_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *conf__Machine_4 = conf__ServerName_6;
    else
    {
      MR_String conf__Port_8 = ((MR_String) (MR_hl_field(MR_mktag(1), conf__MaybeServerPort_7, (MR_Integer) 0)));
      MR_String conf__Var_13;

      {
        conf__Var_13 = mercury__string__f_43_43_2_f_0((MR_String) ":", conf__Port_8);
      }
      {
        *conf__Machine_4 = mercury__string__f_43_43_2_f_0(conf__ServerName_6, conf__Var_13);
      }
    }
  }
}

MR_String MR_CALL 
conf__make_pipe_cmd_1_f_0(
  MR_String conf__PipeName_3)
{
  {
    MR_bool conf__succeeded;
    MR_String conf__Cmd_4;
    MR_String conf__CmdName_5;

{
#define MR_PROC_LABEL conf__make_pipe_cmd_1_f_0

	MR_String Mkfifo;

		{

    /* shut up warnings about casting away const */
    Mkfifo = (MR_String) (MR_Integer) MR_MKFIFO;


		;}
#undef MR_PROC_LABEL
	 conf__CmdName_5  = Mkfifo;
}
    conf__succeeded = (strcmp(conf__CmdName_5, (MR_String) "") == 0);
    if (conf__succeeded)
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "conf", (MR_String) "function \140conf.make_pipe_cmd\'/1", (MR_String) "do not know what command to use");
      }
    }
    else
    {
      MR_String conf__Var_16;

      {
        conf__Var_16 = mercury__string__f_43_43_2_f_0((MR_String) " ", conf__PipeName_3);
      }
      {
        conf__Cmd_4 = mercury__string__f_43_43_2_f_0(conf__CmdName_5, conf__Var_16);
      }
    }
    return conf__Cmd_4;
  }
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

/* :- end_module conf. */
