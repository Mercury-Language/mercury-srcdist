/*
** Automatically generated from `conf.m'
** by the Mercury compiler,
** version rotd-2011-12-05, configured for x86_64-unknown-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** HIGHLEVEL_CODE=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__conf__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "conf.c"
#include "conf.mh"

#line 28 "conf.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 32 "conf.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 36 "conf.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 40 "conf.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "conf.c"
#line 45 "conf.c"
#ifndef CONF_DECL_GUARD
#define CONF_DECL_GUARD

#line 49 "conf.c"
#line 164 "conf.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
#include    <sys/types.h>
#include    <unistd.h>
#endif

#line 57 "conf.c"
#line 58 "conf.c"

#endif
#line 61 "conf.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label2(conf__script_name_3_0, 2,4)
MR_decl_label10(conf__server_name_port_3_0, 2,5,6,7,8,13,16,20,19,18)
MR_decl_label10(conf__server_name_port_3_0, 17,25,15,14,27,11,10,4,3,31)
MR_decl_label2(conf__server_name_port_3_0, 33,34)
MR_decl_label2(fn__conf__make_pipe_cmd_1_0, 16,5)
MR_decl_static(conf__mkfifo_cmd_1_0)
MR_def_extern_entry(fn__conf__make_pipe_cmd_1_0)
MR_decl_static(conf__hostname_cmd_1_0)
MR_def_extern_entry(conf__server_name_port_3_0)
MR_def_extern_entry(conf__script_name_3_0)
MR_def_extern_entry(fn__conf__getpid_0_0)




MR_BEGIN_MODULE(conf_module0)
	MR_init_entry1(conf__mkfifo_cmd_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__conf__mkfifo_cmd_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mkfifo_cmd'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(conf__mkfifo_cmd_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Mkfifo;
#define	MR_PROC_LABEL	mercury__conf__mkfifo_cmd_1_0
{
#line 149 "conf.m"

    /* shut up warnings about casting away const */
    Mkfifo = (MR_String) (MR_Integer) MR_MKFIFO;
;}
#line 105 "conf.c"
	MR_r1 = (MR_Word) Mkfifo;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(conf_module1)
	MR_init_entry1(fn__conf__make_pipe_cmd_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__conf__make_pipe_cmd_1_0);
	MR_init_label2(fn__conf__make_pipe_cmd_1_0,16,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_pipe_cmd'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__conf__make_pipe_cmd_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Mkfifo;
#define	MR_PROC_LABEL	mercury__fn__conf__make_pipe_cmd_1_0
{
#line 149 "conf.m"

    /* shut up warnings about casting away const */
    Mkfifo = (MR_String) (MR_Integer) MR_MKFIFO;
;}
#line 142 "conf.c"
	MR_r4 = (MR_Word) Mkfifo;
#undef	MR_PROC_LABEL
	}
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(fn__conf__make_pipe_cmd_1_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("conf", 4);
	MR_r2 = (MR_Word) MR_string_const("function \140conf.make_pipe_cmd\'/1", 31);
	MR_r3 = (MR_Word) MR_string_const("do not know what command to use", 31);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__conf__make_pipe_cmd_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__conf__make_pipe_cmd_1_0_i5);
MR_def_label(fn__conf__make_pipe_cmd_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(conf_module2)
	MR_init_entry1(conf__hostname_cmd_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__conf__hostname_cmd_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'hostname_cmd'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(conf__hostname_cmd_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Hostname;
#define	MR_PROC_LABEL	mercury__conf__hostname_cmd_1_0
{
#line 159 "conf.m"

    /* shut up warnings about casting away const */
    Hostname = (MR_String) (MR_Integer) MR_HOSTNAMECMD;
;}
#line 206 "conf.c"
	MR_r1 = (MR_Word) Hostname;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__get_environment_var_4_0);
MR_decl_entry(io__make_temp_3_0);
MR_decl_entry(io__call_system_4_0);
MR_decl_entry(io__open_input_4_0);
MR_decl_entry(io__read_file_as_string_4_0);
MR_decl_entry(string__remove_suffix_3_0);
MR_decl_entry(io__close_input_3_0);
MR_decl_entry(io__remove_file_4_0);

MR_BEGIN_MODULE(conf_module3)
	MR_init_entry1(conf__server_name_port_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__conf__server_name_port_3_0);
	MR_init_label10(conf__server_name_port_3_0,2,5,6,7,8,13,16,20,19,18)
	MR_init_label10(conf__server_name_port_3_0,17,25,15,14,27,11,10,4,3,31)
	MR_init_label2(conf__server_name_port_3_0,33,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'server_name_port'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__conf__server_name_port_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("SERVER_NAME", 11);
	MR_np_call_localret_ent(io__get_environment_var_4_0,
		conf__server_name_port_3_0_i2);
MR_def_label(conf__server_name_port_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(conf__server_name_port_3_0_i4);
	}
	MR_np_call_localret_ent(io__make_temp_3_0,
		conf__server_name_port_3_0_i5);
MR_def_label(conf__server_name_port_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_String	Hostname;
#define	MR_PROC_LABEL	mercury__conf__server_name_port_3_0
{
#line 159 "conf.m"

    /* shut up warnings about casting away const */
    Hostname = (MR_String) (MR_Integer) MR_HOSTNAMECMD;
;}
#line 267 "conf.c"
	MR_tempr1 = (MR_Word) Hostname;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const(" > ", 3);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		conf__server_name_port_3_0_i6);
MR_def_label(conf__server_name_port_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		conf__server_name_port_3_0_i7);
MR_def_label(conf__server_name_port_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__call_system_4_0,
		conf__server_name_port_3_0_i8);
MR_def_label(conf__server_name_port_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(conf__server_name_port_3_0_i10);
	}
	MR_r3 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(conf__server_name_port_3_0_i11);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__open_input_4_0,
		conf__server_name_port_3_0_i13);
MR_def_label(conf__server_name_port_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(conf__server_name_port_3_0_i15);
	}
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__read_file_as_string_4_0,
		conf__server_name_port_3_0_i16);
MR_def_label(conf__server_name_port_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(conf__server_name_port_3_0_i18);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		conf__server_name_port_3_0_i20);
MR_def_label(conf__server_name_port_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(conf__server_name_port_3_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__close_input_3_0,
		conf__server_name_port_3_0_i25);
MR_def_label(conf__server_name_port_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("conf", 4);
	MR_r2 = (MR_Word) MR_string_const("predicate \140conf.server_name_2\'/3", 32);
	MR_r3 = (MR_Word) MR_string_const("malformed server name", 21);
	MR_np_call_localret_ent(require__unexpected_3_0,
		conf__server_name_port_3_0_i17);
MR_def_label(conf__server_name_port_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("conf", 4);
	MR_r2 = (MR_Word) MR_string_const("predicate \140conf.server_name_2\'/3", 32);
	MR_r3 = (MR_Word) MR_string_const("cannot read server\'s name", 25);
	MR_np_call_localret_ent(require__unexpected_3_0,
		conf__server_name_port_3_0_i17);
MR_def_label(conf__server_name_port_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__close_input_3_0,
		conf__server_name_port_3_0_i25);
MR_def_label(conf__server_name_port_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__remove_file_4_0,
		conf__server_name_port_3_0_i27);
MR_def_label(conf__server_name_port_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("conf", 4);
	MR_r2 = (MR_Word) MR_string_const("predicate \140conf.server_name_2\'/3", 32);
	MR_r3 = (MR_Word) MR_string_const("cannot open file to find the server\'s name", 42);
	MR_np_call_localret_ent(require__unexpected_3_0,
		conf__server_name_port_3_0_i14);
MR_def_label(conf__server_name_port_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__remove_file_4_0,
		conf__server_name_port_3_0_i27);
MR_def_label(conf__server_name_port_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("SERVER_PORT", 11);
	MR_np_call_localret_ent(io__get_environment_var_4_0,
		conf__server_name_port_3_0_i31);
MR_def_label(conf__server_name_port_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("conf", 4);
	MR_r2 = (MR_Word) MR_string_const("predicate \140conf.server_name_2\'/3", 32);
	MR_r3 = (MR_Word) MR_string_const("cannot execute cmd to find the server\'s name", 44);
	MR_np_call_localret_ent(require__unexpected_3_0,
		conf__server_name_port_3_0_i3);
MR_def_label(conf__server_name_port_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("conf", 4);
	MR_r2 = (MR_Word) MR_string_const("predicate \140conf.server_name_2\'/3", 32);
	MR_r3 = (MR_Word) MR_string_const("cannot execute cmd to find the server\'s name", 44);
	MR_np_call_localret_ent(require__unexpected_3_0,
		conf__server_name_port_3_0_i3);
MR_def_label(conf__server_name_port_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("SERVER_PORT", 11);
MR_def_label(conf__server_name_port_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__get_environment_var_4_0,
		conf__server_name_port_3_0_i31);
MR_def_label(conf__server_name_port_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(conf__server_name_port_3_0_i33);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(conf__server_name_port_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		conf__server_name_port_3_0_i34);
MR_def_label(conf__server_name_port_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(conf_module4)
	MR_init_entry1(conf__script_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__conf__script_name_3_0);
	MR_init_label2(conf__script_name_3_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'script_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__conf__script_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("SCRIPT_NAME", 11);
	MR_np_call_localret_ent(io__get_environment_var_4_0,
		conf__script_name_3_0_i2);
MR_def_label(conf__script_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(conf__script_name_3_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("/cgi-bin/mdprof_cgi", 19);
	MR_decr_sp_and_return(1);
MR_def_label(conf__script_name_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(conf_module5)
	MR_init_entry1(fn__conf__getpid_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__conf__getpid_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'getpid'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__conf__getpid_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Pid;
#define	MR_PROC_LABEL	mercury__fn__conf__getpid_0_0
	MR_OBTAIN_GLOBAL_LOCK("getpid");
{
#line 175 "conf.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    Pid = getpid();
#else
    MR_fatal_error("the deep profiler is not supported");
#endif
;}
#line 494 "conf.c"
	MR_RELEASE_GLOBAL_LOCK("getpid");
	MR_r1 = Pid;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__conf_maybe_bunch_0(void)
{
	conf_module0();
	conf_module1();
	conf_module2();
	conf_module3();
	conf_module4();
	conf_module5();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__conf__init(void);
void mercury__conf__init_type_tables(void);
void mercury__conf__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__conf__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__conf__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__conf__init_threadscope_string_table(void);
#endif

void mercury__conf__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__conf_maybe_bunch_0();
	mercury__conf__init_debugger();
}

void mercury__conf__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__conf__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__conf__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__conf);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__conf__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__conf__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
