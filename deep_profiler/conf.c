/*
** Automatically generated from `conf.m'
** by the Mercury compiler,
** version rotd-2007-06-30, configured for i686-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__conf__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "conf.c"
#include "conf.mh"

#line 27 "conf.c"
#line 530 "../library/io.int"
#include "io.mh"

#line 31 "conf.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 35 "conf.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "conf.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "conf.c"
#line 44 "conf.c"
#ifndef CONF_DECL_GUARD
#define CONF_DECL_GUARD

#line 48 "conf.c"
#line 150 "conf.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
#include    <sys/types.h>
#include    <unistd.h>
#endif

#line 56 "conf.c"
#line 57 "conf.c"

#endif
#line 60 "conf.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label2(conf__script_name_3_0, 2,4)
MR_decl_label8(conf__server_name_port_3_0, 2,5,6,7,11,14,18,17)
MR_decl_label8(conf__server_name_port_3_0, 16,15,23,12,25,26,8,4)
MR_decl_label4(conf__server_name_port_3_0, 3,29,31,32)
MR_decl_label1(fn__conf__make_pipe_cmd_1_0, 2)
MR_decl_static(conf__mkfifo_cmd_1_0)
MR_def_extern_entry(fn__conf__make_pipe_cmd_1_0)
MR_decl_static(conf__hostname_cmd_1_0)
MR_def_extern_entry(conf__server_name_port_3_0)
MR_def_extern_entry(conf__script_name_3_0)
MR_def_extern_entry(fn__conf__getpid_0_0)


MR_BEGIN_MODULE(conf_module0)
	MR_init_entry1(conf__mkfifo_cmd_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(conf__mkfifo_cmd_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Mkfifo;
#define	MR_PROC_LABEL	mercury__conf__mkfifo_cmd_1_0
	MR_OBTAIN_GLOBAL_LOCK("mkfifo_cmd");
{
#line 135 "conf.m"

    /* shut up warnings about casting away const */
    Mkfifo = (MR_String) (MR_Integer) MR_MKFIFO;
;}
#line 100 "conf.c"
	MR_RELEASE_GLOBAL_LOCK("mkfifo_cmd");
	MR_r1 = (MR_Word) Mkfifo;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);
MR_decl_entry(string__format_3_0);

MR_BEGIN_MODULE(conf_module1)
	MR_init_entry1(fn__conf__make_pipe_cmd_1_0);
	MR_init_label1(fn__conf__make_pipe_cmd_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__conf__make_pipe_cmd_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Mkfifo;
#define	MR_PROC_LABEL	mercury__fn__conf__make_pipe_cmd_1_0
	MR_OBTAIN_GLOBAL_LOCK("mkfifo_cmd");
{
#line 135 "conf.m"

    /* shut up warnings about casting away const */
    Mkfifo = (MR_String) (MR_Integer) MR_MKFIFO;
;}
#line 136 "conf.c"
	MR_RELEASE_GLOBAL_LOCK("mkfifo_cmd");
	MR_r2 = (MR_Word) Mkfifo;
#undef	MR_PROC_LABEL
	}
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(fn__conf__make_pipe_cmd_1_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("make_pipe_cmd: do not know what command to use", 46);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(fn__conf__make_pipe_cmd_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%s %s", 5);
	MR_np_tailcall_ent(string__format_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(conf_module2)
	MR_init_entry1(conf__hostname_cmd_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(conf__hostname_cmd_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Hostname;
#define	MR_PROC_LABEL	mercury__conf__hostname_cmd_1_0
	MR_OBTAIN_GLOBAL_LOCK("hostname_cmd");
{
#line 145 "conf.m"

    /* shut up warnings about casting away const */
    Hostname = (MR_String) (MR_Integer) MR_HOSTNAMECMD;
;}
#line 191 "conf.c"
	MR_RELEASE_GLOBAL_LOCK("hostname_cmd");
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
MR_decl_entry(fn__string__format_2_0);
MR_decl_entry(io__call_system_4_0);
MR_decl_entry(io__open_input_4_0);
MR_decl_entry(io__read_file_as_string_4_0);
MR_decl_entry(string__remove_suffix_3_0);
MR_decl_entry(io__close_input_3_0);
MR_decl_entry(io__remove_file_4_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(conf_module3)
	MR_init_entry1(conf__server_name_port_3_0);
	MR_init_label8(conf__server_name_port_3_0,2,5,6,7,11,14,18,17)
	MR_init_label8(conf__server_name_port_3_0,16,15,23,12,25,26,8,4)
	MR_init_label4(conf__server_name_port_3_0,3,29,31,32)
MR_BEGIN_CODE

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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_String	Hostname;
#define	MR_PROC_LABEL	mercury__conf__server_name_port_3_0
	MR_OBTAIN_GLOBAL_LOCK("hostname_cmd");
{
#line 145 "conf.m"

    /* shut up warnings about casting away const */
    Hostname = (MR_String) (MR_Integer) MR_HOSTNAMECMD;
;}
#line 253 "conf.c"
	MR_RELEASE_GLOBAL_LOCK("hostname_cmd");
	MR_tempr1 = (MR_Word) Hostname;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("%s > %s", 7);
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		conf__server_name_port_3_0_i6);
MR_def_label(conf__server_name_port_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__call_system_4_0,
		conf__server_name_port_3_0_i7);
MR_def_label(conf__server_name_port_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(conf__server_name_port_3_0_i8);
	}
	MR_r3 = MR_ctfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(conf__server_name_port_3_0_i8);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__open_input_4_0,
		conf__server_name_port_3_0_i11);
MR_def_label(conf__server_name_port_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(conf__server_name_port_3_0_i12);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__read_file_as_string_4_0,
		conf__server_name_port_3_0_i14);
MR_def_label(conf__server_name_port_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(conf__server_name_port_3_0_i16);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		conf__server_name_port_3_0_i18);
MR_def_label(conf__server_name_port_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(conf__server_name_port_3_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(io__close_input_3_0,
		conf__server_name_port_3_0_i23);
MR_def_label(conf__server_name_port_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("malformed server name", 21);
	MR_np_call_localret_ent(require__error_1_0,
		conf__server_name_port_3_0_i15);
MR_def_label(conf__server_name_port_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("cannot read server\'s name", 25);
	MR_np_call_localret_ent(require__error_1_0,
		conf__server_name_port_3_0_i15);
MR_def_label(conf__server_name_port_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__close_input_3_0,
		conf__server_name_port_3_0_i23);
MR_def_label(conf__server_name_port_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__remove_file_4_0,
		conf__server_name_port_3_0_i26);
MR_def_label(conf__server_name_port_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("cannot open file to find the server\'s name", 42);
	MR_np_call_localret_ent(require__error_1_0,
		conf__server_name_port_3_0_i25);
MR_def_label(conf__server_name_port_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__remove_file_4_0,
		conf__server_name_port_3_0_i26);
MR_def_label(conf__server_name_port_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("SERVER_PORT", 11);
	MR_np_call_localret_ent(io__get_environment_var_4_0,
		conf__server_name_port_3_0_i29);
MR_def_label(conf__server_name_port_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("cannot execute cmd to find the server\'s name", 44);
	MR_np_call_localret_ent(require__error_1_0,
		conf__server_name_port_3_0_i3);
MR_def_label(conf__server_name_port_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("SERVER_PORT", 11);
MR_def_label(conf__server_name_port_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__get_environment_var_4_0,
		conf__server_name_port_3_0_i29);
MR_def_label(conf__server_name_port_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(conf__server_name_port_3_0_i31);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(conf__server_name_port_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		conf__server_name_port_3_0_i32);
MR_def_label(conf__server_name_port_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(conf_module4)
	MR_init_entry1(conf__script_name_3_0);
	MR_init_label2(conf__script_name_3_0,2,4)
MR_BEGIN_CODE

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
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(conf_module5)
	MR_init_entry1(fn__conf__getpid_0_0);
MR_BEGIN_CODE

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
#line 161 "conf.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    Pid = getpid();
#else
    MR_fatal_error("the deep profiler is not supported");
#endif
;}
#line 451 "conf.c"
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
void mercury__conf__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__conf__init_complexity_procs(void);
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

void mercury__conf__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__conf__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
