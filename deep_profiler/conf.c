/*
** Automatically generated from `conf.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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




#line 154 "conf.m"
static void MR_CALL 
conf__hostname_cmd_1_p_0(
#line 154 "conf.m"
  MR_String * conf__Hostname_1);

#line 144 "conf.m"
static void MR_CALL 
conf__mkfifo_cmd_1_p_0(
#line 144 "conf.m"
  MR_String * conf__Mkfifo_1);


static /* final */ const MR_Box conf_scalar_common_1[1][1];




static /* final */ const MR_Box conf_scalar_common_1[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "conf.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 154 "conf.m"
static void MR_CALL 
conf__hostname_cmd_1_p_0(
#line 154 "conf.m"
  MR_String * conf__Hostname_1)
#line 154 "conf.m"
{
#line 156 "conf.m"
  {
#line 156 "conf.m"
    MR_bool conf__succeeded;

#line 159 "conf.m"
{
#define MR_PROC_LABEL conf__hostname_cmd_1_p_0

	MR_String Hostname;

		{
#line 159 "conf.m"

    /* shut up warnings about casting away const */
    Hostname = (MR_String) (MR_Integer) MR_HOSTNAMECMD;

#line 128 "conf.c"

		;}
#undef MR_PROC_LABEL
	 *conf__Hostname_1  = Hostname;
#line 159 "conf.m"
}
#line 156 "conf.m"
  }
#line 154 "conf.m"
}

#line 144 "conf.m"
static void MR_CALL 
conf__mkfifo_cmd_1_p_0(
#line 144 "conf.m"
  MR_String * conf__Mkfifo_1)
#line 144 "conf.m"
{
#line 146 "conf.m"
  {
#line 146 "conf.m"
    MR_bool conf__succeeded;

#line 149 "conf.m"
{
#define MR_PROC_LABEL conf__mkfifo_cmd_1_p_0

	MR_String Mkfifo;

		{
#line 149 "conf.m"

    /* shut up warnings about casting away const */
    Mkfifo = (MR_String) (MR_Integer) MR_MKFIFO;

#line 164 "conf.c"

		;}
#undef MR_PROC_LABEL
	 *conf__Mkfifo_1  = Mkfifo;
#line 149 "conf.m"
}
#line 146 "conf.m"
  }
#line 144 "conf.m"
}

#line 38 "conf.m"
MR_Integer MR_CALL 
conf__getpid_0_f_0(void)
#line 38 "conf.m"
{
#line 172 "conf.m"
  {
#line 172 "conf.m"
    MR_bool conf__succeeded;
#line 172 "conf.m"
    MR_Integer conf__Pid_1;

#line 175 "conf.m"
{
#define MR_PROC_LABEL conf__getpid_0_f_0

	MR_Integer Pid;

		{
#line 175 "conf.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    Pid = getpid();
#else
    MR_fatal_error("the deep profiler is not supported");
#endif

#line 203 "conf.c"

		;}
#undef MR_PROC_LABEL
	 conf__Pid_1  = Pid;
#line 175 "conf.m"
}
#line 172 "conf.m"
    return conf__Pid_1;
#line 172 "conf.m"
  }
#line 38 "conf.m"
}

#line 36 "conf.m"
void MR_CALL 
conf__script_name_3_p_0(
#line 36 "conf.m"
  MR_String * conf__ScriptName_4)
#line 36 "conf.m"
{
#line 133 "conf.m"
  {
#line 133 "conf.m"
    MR_bool conf__succeeded;
#line 133 "conf.m"
    MR_Word conf__MaybeScriptName_6;

#line 134 "conf.m"
    {
#line 134 "conf.m"
      mercury__io__get_environment_var_4_p_0((MR_String) "SCRIPT_NAME", &conf__MaybeScriptName_6);
    }
#line 137 "conf.m"
    if ((conf__MaybeScriptName_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 141 "conf.m"
      *conf__ScriptName_4 = (MR_String) "/cgi-bin/mdprof_cgi";
#line 137 "conf.m"
    else
#line 136 "conf.m"
      *conf__ScriptName_4 = ((MR_String) (MR_hl_field(MR_mktag(1), conf__MaybeScriptName_6, (MR_Integer) 0)));
#line 133 "conf.m"
  }
#line 36 "conf.m"
}

#line 31 "conf.m"
void MR_CALL 
conf__server_name_port_3_p_0(
#line 31 "conf.m"
  MR_String * conf__Machine_4)
#line 31 "conf.m"
{
#line 60 "conf.m"
  {
#line 60 "conf.m"
    MR_bool conf__succeeded;
#line 60 "conf.m"
    MR_String conf__ServerName_6;
#line 60 "conf.m"
    MR_Word conf__MaybeServerPort_7;
#line 60 "conf.m"
    MR_Word conf__MaybeServerName_19;

#line 74 "conf.m"
    {
#line 74 "conf.m"
      mercury__io__get_environment_var_4_p_0((MR_String) "SERVER_NAME", &conf__MaybeServerName_19);
    }
#line 77 "conf.m"
    if ((conf__MaybeServerName_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 84 "conf.m"
      {
#line 84 "conf.m"
        MR_String conf__TmpFile_27;
#line 84 "conf.m"
        MR_String conf__HostnameCmd_28;
#line 84 "conf.m"
        MR_String conf__ServerRedirectCmd_29;
#line 84 "conf.m"
        MR_Word conf__Res1_30;
#line 84 "conf.m"
        MR_String conf__V_70_70;
#line 84 "conf.m"
        MR_Word conf__V_76_76;
#line 84 "conf.m"
        MR_String conf__V_78_78;
#line 84 "conf.m"
        MR_String conf__V_79_79;

#line 85 "conf.m"
        {
#line 85 "conf.m"
          mercury__io__make_temp_3_p_0(&conf__TmpFile_27);
        }
#line 159 "conf.m"
{
#define MR_PROC_LABEL conf__server_name_port_3_p_0

	MR_String Hostname;

		{
#line 159 "conf.m"

    /* shut up warnings about casting away const */
    Hostname = (MR_String) (MR_Integer) MR_HOSTNAMECMD;

#line 310 "conf.c"

		;}
#undef MR_PROC_LABEL
	 conf__HostnameCmd_28  = Hostname;
#line 159 "conf.m"
}
#line 317 "conf.c"
        conf__V_76_76 = (MR_Word) &conf_scalar_common_1[0];
#line 88 "conf.m"
        {
#line 88 "conf.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(conf__V_76_76, conf__TmpFile_27, &conf__V_70_70);
        }
#line 88 "conf.m"
        {
#line 88 "conf.m"
          conf__V_78_78 = mercury__string__f_43_43_2_f_0((MR_String) " > ", conf__V_70_70);
        }
#line 88 "conf.m"
        {
#line 88 "conf.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(conf__V_76_76, conf__HostnameCmd_28, &conf__V_79_79);
        }
#line 88 "conf.m"
        {
#line 88 "conf.m"
          conf__ServerRedirectCmd_29 = mercury__string__f_43_43_2_f_0(conf__V_79_79, conf__V_78_78);
        }
#line 89 "conf.m"
        {
#line 89 "conf.m"
          mercury__io__call_system_4_p_0(conf__ServerRedirectCmd_29, &conf__Res1_30);
        }
#line 122 "conf.m"
        if (((MR_tag((MR_Word) conf__Res1_30)) == (MR_mktag((MR_Integer) 1))))
#line 123 "conf.m"
          {
#line 124 "conf.m"
            {
#line 124 "conf.m"
              mercury__require__unexpected_3_p_0((MR_String) "conf", (MR_String) "predicate \140conf.server_name_2\'/3", (MR_String) "cannot execute cmd to find the server\'s name");
#line 124 "conf.m"
              return;
            }
#line 123 "conf.m"
          }
#line 122 "conf.m"
        else
#line 91 "conf.m"
          {
#line 91 "conf.m"
            MR_Integer conf__ResCode_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), conf__Res1_30, (MR_Integer) 0)));

#line 92 "conf.m"
            conf__succeeded = (conf__ResCode_31 == (MR_Integer) 0);
#line 118 "conf.m"
            if (conf__succeeded)
#line 93 "conf.m"
              {
#line 93 "conf.m"
                MR_Word conf__TmpRes_32;
#line 117 "conf.m"
                MR_Word conf__V_40_40;

#line 93 "conf.m"
                {
#line 93 "conf.m"
                  mercury__io__open_input_4_p_0(conf__TmpFile_27, &conf__TmpRes_32);
                }
#line 112 "conf.m"
                if (((MR_tag((MR_Word) conf__TmpRes_32)) == (MR_mktag((MR_Integer) 1))))
#line 113 "conf.m"
                  {
#line 114 "conf.m"
                    {
#line 114 "conf.m"
                      mercury__require__unexpected_3_p_0((MR_String) "conf", (MR_String) "predicate \140conf.server_name_2\'/3", (MR_String) "cannot open file to find the server\'s name");
#line 114 "conf.m"
                      return;
                    }
#line 113 "conf.m"
                  }
#line 112 "conf.m"
                else
#line 95 "conf.m"
                  {
#line 95 "conf.m"
                    MR_Word conf__TmpStream_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), conf__TmpRes_32, (MR_Integer) 0)));
#line 95 "conf.m"
                    MR_Word conf__TmpReadRes_34;

#line 96 "conf.m"
                    {
#line 96 "conf.m"
                      mercury__io__read_file_as_string_4_p_0(conf__TmpStream_33, &conf__TmpReadRes_34);
                    }
#line 107 "conf.m"
                    if (((MR_tag((MR_Word) conf__TmpReadRes_34)) == (MR_mktag((MR_Integer) 1))))
#line 108 "conf.m"
                      {
#line 109 "conf.m"
                        {
#line 109 "conf.m"
                          mercury__require__unexpected_3_p_0((MR_String) "conf", (MR_String) "predicate \140conf.server_name_2\'/3", (MR_String) "cannot read server\'s name");
#line 109 "conf.m"
                          return;
                        }
#line 108 "conf.m"
                      }
#line 107 "conf.m"
                    else
#line 98 "conf.m"
                      {
#line 98 "conf.m"
                        MR_String conf__ServerNameNl_35 = ((MR_String) (MR_hl_field(MR_mktag(0), conf__TmpReadRes_34, (MR_Integer) 0)));
#line 104 "conf.m"
                        MR_String conf__ServerNamePrime_36;

#line 100 "conf.m"
                        {
#line 100 "conf.m"
                          conf__succeeded = mercury__string__remove_suffix_3_p_0(conf__ServerNameNl_35, (MR_String) "\n", &conf__ServerNamePrime_36);
                        }
#line 104 "conf.m"
                        if (conf__succeeded)
#line 103 "conf.m"
                          conf__ServerName_6 = conf__ServerNamePrime_36;
#line 104 "conf.m"
                        else
#line 105 "conf.m"
                          {
#line 105 "conf.m"
                            {
#line 105 "conf.m"
                              mercury__require__unexpected_3_p_0((MR_String) "conf", (MR_String) "predicate \140conf.server_name_2\'/3", (MR_String) "malformed server name");
#line 105 "conf.m"
                              return;
                            }
#line 105 "conf.m"
                          }
#line 98 "conf.m"
                      }
#line 111 "conf.m"
                    {
#line 111 "conf.m"
                      mercury__io__close_input_3_p_0(conf__TmpStream_33);
                    }
#line 95 "conf.m"
                  }
#line 117 "conf.m"
                {
#line 117 "conf.m"
                  mercury__io__remove_file_4_p_0(conf__TmpFile_27, &conf__V_40_40);
                }
#line 93 "conf.m"
              }
#line 118 "conf.m"
            else
#line 119 "conf.m"
              {
#line 119 "conf.m"
                {
#line 119 "conf.m"
                  mercury__require__unexpected_3_p_0((MR_String) "conf", (MR_String) "predicate \140conf.server_name_2\'/3", (MR_String) "cannot execute cmd to find the server\'s name");
#line 119 "conf.m"
                  return;
                }
#line 119 "conf.m"
              }
#line 91 "conf.m"
          }
#line 84 "conf.m"
      }
#line 77 "conf.m"
    else
#line 76 "conf.m"
      conf__ServerName_6 = ((MR_String) (MR_hl_field(MR_mktag(1), conf__MaybeServerName_19, (MR_Integer) 0)));
#line 131 "conf.m"
    {
#line 131 "conf.m"
      mercury__io__get_environment_var_4_p_0((MR_String) "SERVER_PORT", &conf__MaybeServerPort_7);
    }
#line 66 "conf.m"
    if ((conf__MaybeServerPort_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 68 "conf.m"
      *conf__Machine_4 = conf__ServerName_6;
#line 66 "conf.m"
    else
#line 64 "conf.m"
      {
#line 64 "conf.m"
        MR_String conf__Port_8 = ((MR_String) (MR_hl_field(MR_mktag(1), conf__MaybeServerPort_7, (MR_Integer) 0)));
#line 64 "conf.m"
        MR_String conf__V_13_13;

#line 65 "conf.m"
        {
#line 65 "conf.m"
          conf__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) ":", conf__Port_8);
        }
#line 65 "conf.m"
        {
#line 65 "conf.m"
          *conf__Machine_4 = mercury__string__f_43_43_2_f_0(conf__ServerName_6, conf__V_13_13);
        }
#line 64 "conf.m"
      }
#line 60 "conf.m"
  }
#line 31 "conf.m"
}

#line 26 "conf.m"
MR_String MR_CALL 
conf__make_pipe_cmd_1_f_0(
#line 26 "conf.m"
  MR_String conf__PipeName_3)
#line 26 "conf.m"
{
#line 52 "conf.m"
  {
#line 52 "conf.m"
    MR_bool conf__succeeded;
#line 52 "conf.m"
    MR_String conf__Cmd_4;
#line 52 "conf.m"
    MR_String conf__CmdName_5;

#line 149 "conf.m"
{
#define MR_PROC_LABEL conf__make_pipe_cmd_1_f_0

	MR_String Mkfifo;

		{
#line 149 "conf.m"

    /* shut up warnings about casting away const */
    Mkfifo = (MR_String) (MR_Integer) MR_MKFIFO;

#line 551 "conf.c"

		;}
#undef MR_PROC_LABEL
	 conf__CmdName_5  = Mkfifo;
#line 149 "conf.m"
}
#line 54 "conf.m"
    conf__succeeded = (strcmp(conf__CmdName_5, (MR_String) "") == 0);
#line 56 "conf.m"
    if (conf__succeeded)
#line 55 "conf.m"
      {
#line 55 "conf.m"
        {
#line 55 "conf.m"
          mercury__require__unexpected_3_p_0((MR_String) "conf", (MR_String) "function \140conf.make_pipe_cmd\'/1", (MR_String) "do not know what command to use");
        }
#line 55 "conf.m"
      }
#line 56 "conf.m"
    else
#line 57 "conf.m"
      {
#line 57 "conf.m"
        MR_String conf__V_15_15;
#line 57 "conf.m"
        MR_Word conf__V_21_21 = (MR_Word) &conf_scalar_common_1[0];
#line 57 "conf.m"
        MR_String conf__V_23_23;
#line 57 "conf.m"
        MR_String conf__V_24_24;

#line 57 "conf.m"
        {
#line 57 "conf.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(conf__V_21_21, conf__PipeName_3, &conf__V_15_15);
        }
#line 57 "conf.m"
        {
#line 57 "conf.m"
          conf__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) " ", conf__V_15_15);
        }
#line 57 "conf.m"
        {
#line 57 "conf.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(conf__V_21_21, conf__CmdName_5, &conf__V_24_24);
        }
#line 57 "conf.m"
        {
#line 57 "conf.m"
          return conf__Cmd_4 = mercury__string__f_43_43_2_f_0(conf__V_24_24, conf__V_23_23);
        }
#line 57 "conf.m"
      }
#line 52 "conf.m"
    return conf__Cmd_4;
#line 52 "conf.m"
  }
#line 26 "conf.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module conf. */
