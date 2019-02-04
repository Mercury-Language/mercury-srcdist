/*
** Automatically generated from `interface.m'
** by the Mercury compiler,
** version rotd-2009-12-12, configured for i686-pc-linux-gnu.
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
INIT mercury__interface__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "interface.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "interface.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "interface.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "interface.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 43 "interface.c"
#line 33 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "interface.c"
#line 48 "interface.c"
#include "interface.mh"

#line 51 "interface.c"
#line 52 "interface.c"
#ifndef INTERFACE_DECL_GUARD
#define INTERFACE_DECL_GUARD

#line 56 "interface.c"
#line 57 "interface.c"

#endif
#line 60 "interface.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];
MR_decl_label10(interface__recv_string_5_0, 2,5,7,8,9,6,11,33,13,14)
MR_decl_label10(interface__recv_string_5_0, 18,19,16,21,22,23,4,26,27,28)
MR_decl_label1(interface__recv_string_5_0, 29)
MR_decl_label10(interface__recv_term_5_0, 2,5,15,9,10,11,12,13,6,18)
MR_decl_label10(interface__recv_term_5_0, 41,20,21,25,26,23,28,29,30,4)
MR_decl_label4(interface__recv_term_5_0, 33,34,35,36)
MR_decl_label10(interface__send_string_5_0, 2,5,4,7,8,9,10,3,14,17)
MR_decl_label6(interface__send_string_5_0, 16,19,20,21,22,12)
MR_decl_label10(interface__send_term_5_0, 2,5,6,4,8,9,10,11,3,15)
MR_decl_label8(interface__send_term_5_0, 18,19,17,21,22,23,24,13)
MR_decl_label6(fn__interface__filename_mangle_2_1_0, 15,16,4,8,14,2)
MR_decl_label5(fn__interface__from_server_pipe_name_1_0, 2,3,4,5,6)
MR_decl_label5(fn__interface__mutex_file_name_1_0, 2,3,4,5,6)
MR_decl_label7(fn__interface__response_file_name_2_0, 2,3,4,5,6,7,8)
MR_decl_label5(fn__interface__server_startup_name_1_0, 2,3,4,5,6)
MR_decl_label5(fn__interface__to_server_pipe_name_1_0, 2,3,4,5,6)
MR_decl_label4(fn__interface__want_file_name_0_0, 2,3,4,5)
MR_decl_static(fn__interface__filename_mangle_2_1_0)
MR_def_extern_entry(fn__interface__to_server_pipe_name_1_0)
MR_def_extern_entry(fn__interface__from_server_pipe_name_1_0)
MR_def_extern_entry(fn__interface__server_startup_name_1_0)
MR_def_extern_entry(fn__interface__mutex_file_name_1_0)
MR_def_extern_entry(fn__interface__want_dir_0_0)
MR_def_extern_entry(fn__interface__want_prefix_0_0)
MR_def_extern_entry(fn__interface__want_file_name_0_0)
MR_def_extern_entry(fn__interface__response_file_name_2_0)
MR_def_extern_entry(interface__send_term_5_0)
MR_def_extern_entry(interface__send_string_5_0)
MR_def_extern_entry(interface__recv_term_5_0)
MR_def_extern_entry(interface__recv_string_5_0)

extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_maybe_partial_res_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_CTOR1_ADDR(io, maybe_partial_res),
MR_STRING_CTOR_ADDR
}
},
};




MR_BEGIN_MODULE(interface_module0)
	MR_init_entry1(fn__interface__filename_mangle_2_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__interface__filename_mangle_2_1_0);
	MR_init_label6(fn__interface__filename_mangle_2_1_0,15,16,4,8,14,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filename_mangle_2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__interface__filename_mangle_2_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__interface__filename_mangle_2_1_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(fn__interface__filename_mangle_2_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break; } /* end while */
MR_def_label(fn__interface__filename_mangle_2_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),47)) {
		MR_GOTO_LAB(fn__interface__filename_mangle_2_1_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 46;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 58;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_GOTO_LAB(fn__interface__filename_mangle_2_1_0_i14);
	}
MR_def_label(fn__interface__filename_mangle_2_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),58)) {
		MR_GOTO_LAB(fn__interface__filename_mangle_2_1_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 58;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 58;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_GOTO_LAB(fn__interface__filename_mangle_2_1_0_i14);
	}
MR_def_label(fn__interface__filename_mangle_2_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(fn__interface__filename_mangle_2_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__interface__filename_mangle_2_1_0_i16);
	}
	MR_proceed();
MR_def_label(fn__interface__filename_mangle_2_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__to_char_list_1_0);
MR_decl_entry(fn__string__from_char_list_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(interface_module1)
	MR_init_entry1(fn__interface__to_server_pipe_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__interface__to_server_pipe_name_1_0);
	MR_init_label5(fn__interface__to_server_pipe_name_1_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_server_pipe_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__to_server_pipe_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__string__to_char_list_1_0,
		fn__interface__to_server_pipe_name_1_0_i2);
MR_def_label(fn__interface__to_server_pipe_name_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__interface__filename_mangle_2_1_0,
		fn__interface__to_server_pipe_name_1_0_i3);
MR_def_label(fn__interface__to_server_pipe_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__from_char_list_1_0,
		fn__interface__to_server_pipe_name_1_0_i4);
MR_def_label(fn__interface__to_server_pipe_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mdprof_server_to", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__to_server_pipe_name_1_0_i5);
MR_def_label(fn__interface__to_server_pipe_name_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__to_server_pipe_name_1_0_i6);
MR_def_label(fn__interface__to_server_pipe_name_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/var/tmp", 8);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module2)
	MR_init_entry1(fn__interface__from_server_pipe_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__interface__from_server_pipe_name_1_0);
	MR_init_label5(fn__interface__from_server_pipe_name_1_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_server_pipe_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__from_server_pipe_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__string__to_char_list_1_0,
		fn__interface__from_server_pipe_name_1_0_i2);
MR_def_label(fn__interface__from_server_pipe_name_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__interface__filename_mangle_2_1_0,
		fn__interface__from_server_pipe_name_1_0_i3);
MR_def_label(fn__interface__from_server_pipe_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__from_char_list_1_0,
		fn__interface__from_server_pipe_name_1_0_i4);
MR_def_label(fn__interface__from_server_pipe_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mdprof_server_from", 18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__from_server_pipe_name_1_0_i5);
MR_def_label(fn__interface__from_server_pipe_name_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__from_server_pipe_name_1_0_i6);
MR_def_label(fn__interface__from_server_pipe_name_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/var/tmp", 8);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module3)
	MR_init_entry1(fn__interface__server_startup_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__interface__server_startup_name_1_0);
	MR_init_label5(fn__interface__server_startup_name_1_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'server_startup_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__server_startup_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__string__to_char_list_1_0,
		fn__interface__server_startup_name_1_0_i2);
MR_def_label(fn__interface__server_startup_name_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__interface__filename_mangle_2_1_0,
		fn__interface__server_startup_name_1_0_i3);
MR_def_label(fn__interface__server_startup_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__from_char_list_1_0,
		fn__interface__server_startup_name_1_0_i4);
MR_def_label(fn__interface__server_startup_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mdprof_startup_err", 18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__server_startup_name_1_0_i5);
MR_def_label(fn__interface__server_startup_name_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__server_startup_name_1_0_i6);
MR_def_label(fn__interface__server_startup_name_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/var/tmp", 8);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module4)
	MR_init_entry1(fn__interface__mutex_file_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__interface__mutex_file_name_1_0);
	MR_init_label5(fn__interface__mutex_file_name_1_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mutex_file_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__mutex_file_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__string__to_char_list_1_0,
		fn__interface__mutex_file_name_1_0_i2);
MR_def_label(fn__interface__mutex_file_name_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__interface__filename_mangle_2_1_0,
		fn__interface__mutex_file_name_1_0_i3);
MR_def_label(fn__interface__mutex_file_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__from_char_list_1_0,
		fn__interface__mutex_file_name_1_0_i4);
MR_def_label(fn__interface__mutex_file_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mdprof_mutex", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__mutex_file_name_1_0_i5);
MR_def_label(fn__interface__mutex_file_name_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__mutex_file_name_1_0_i6);
MR_def_label(fn__interface__mutex_file_name_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/var/tmp", 8);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module5)
	MR_init_entry1(fn__interface__want_dir_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__interface__want_dir_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'want_dir'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__want_dir_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/var/tmp", 8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module6)
	MR_init_entry1(fn__interface__want_prefix_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__interface__want_prefix_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'want_prefix'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__want_prefix_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdprof_want", 11);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__conf__getpid_0_0);
MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(interface_module7)
	MR_init_entry1(fn__interface__want_file_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__interface__want_file_name_0_0);
	MR_init_label4(fn__interface__want_file_name_0_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'want_file_name'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__want_file_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__conf__getpid_0_0,
		fn__interface__want_file_name_0_0_i2);
MR_def_label(fn__interface__want_file_name_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__interface__want_file_name_0_0_i3);
MR_def_label(fn__interface__want_file_name_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mdprof_want", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__want_file_name_0_0_i4);
MR_def_label(fn__interface__want_file_name_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__want_file_name_0_0_i5);
MR_def_label(fn__interface__want_file_name_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/var/tmp", 8);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module8)
	MR_init_entry1(fn__interface__response_file_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__interface__response_file_name_2_0);
	MR_init_label7(fn__interface__response_file_name_2_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'response_file_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__interface__response_file_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__string__to_char_list_1_0,
		fn__interface__response_file_name_2_0_i2);
MR_def_label(fn__interface__response_file_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__interface__filename_mangle_2_1_0,
		fn__interface__response_file_name_2_0_i3);
MR_def_label(fn__interface__response_file_name_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__from_char_list_1_0,
		fn__interface__response_file_name_2_0_i4);
MR_def_label(fn__interface__response_file_name_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__interface__response_file_name_2_0_i5);
MR_def_label(fn__interface__response_file_name_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__response_file_name_2_0_i6);
MR_def_label(fn__interface__response_file_name_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mdprof_response", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__response_file_name_2_0_i7);
MR_def_label(fn__interface__response_file_name_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__interface__response_file_name_2_0_i8);
MR_def_label(fn__interface__response_file_name_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/var/tmp", 8);
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

MR_decl_entry(io__open_output_4_0);
MR_decl_entry(io__write_4_0);
MR_decl_entry(io__write_string_4_0);
MR_decl_entry(io__close_output_3_0);
MR_decl_entry(io__error_message_2_0);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(interface_module9)
	MR_init_entry1(interface__send_term_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__interface__send_term_5_0);
	MR_init_label10(interface__send_term_5_0,2,5,6,4,8,9,10,11,3,15)
	MR_init_label8(interface__send_term_5_0,18,19,17,21,22,23,24,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'send_term'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__interface__send_term_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__open_output_4_0,
		interface__send_term_5_0_i2);
MR_def_label(interface__send_term_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(interface__send_term_5_0_i4);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(io__write_4_0,
		interface__send_term_5_0_i5);
MR_def_label(interface__send_term_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__write_string_4_0,
		interface__send_term_5_0_i6);
MR_def_label(interface__send_term_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__close_output_3_0,
		interface__send_term_5_0_i3);
MR_def_label(interface__send_term_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		interface__send_term_5_0_i8);
MR_def_label(interface__send_term_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__send_term_5_0_i9);
MR_def_label(interface__send_term_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__send_term_5_0_i10);
MR_def_label(interface__send_term_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("send_term: couldn\'t open pipe ", 30);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__send_term_5_0_i11);
MR_def_label(interface__send_term_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(require__error_1_0,
		interface__send_term_5_0_i3);
MR_def_label(interface__send_term_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(2),0)) {
		MR_GOTO_LAB(interface__send_term_5_0_i13);
	}
	MR_sv(1) = (MR_Word) MR_string_const("/tmp/.send_term", 15);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__open_output_4_0,
		interface__send_term_5_0_i15);
MR_def_label(interface__send_term_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(interface__send_term_5_0_i17);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(io__write_4_0,
		interface__send_term_5_0_i18);
MR_def_label(interface__send_term_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__write_string_4_0,
		interface__send_term_5_0_i19);
MR_def_label(interface__send_term_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__close_output_3_0);
MR_def_label(interface__send_term_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		interface__send_term_5_0_i21);
MR_def_label(interface__send_term_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__send_term_5_0_i22);
MR_def_label(interface__send_term_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__send_term_5_0_i23);
MR_def_label(interface__send_term_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("send_term: couldn\'t open debug file ", 36);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__send_term_5_0_i24);
MR_def_label(interface__send_term_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(interface__send_term_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(interface_module10)
	MR_init_entry1(interface__send_string_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__interface__send_string_5_0);
	MR_init_label10(interface__send_string_5_0,2,5,4,7,8,9,10,3,14,17)
	MR_init_label6(interface__send_string_5_0,16,19,20,21,22,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'send_string'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__interface__send_string_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(io__open_output_4_0,
		interface__send_string_5_0_i2);
MR_def_label(interface__send_string_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(interface__send_string_5_0_i4);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_4_0,
		interface__send_string_5_0_i5);
MR_def_label(interface__send_string_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__close_output_3_0,
		interface__send_string_5_0_i3);
MR_def_label(interface__send_string_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		interface__send_string_5_0_i7);
MR_def_label(interface__send_string_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__send_string_5_0_i8);
MR_def_label(interface__send_string_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__send_string_5_0_i9);
MR_def_label(interface__send_string_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("send_term: couldn\'t open pipe ", 30);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__send_string_5_0_i10);
MR_def_label(interface__send_string_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(require__error_1_0,
		interface__send_string_5_0_i3);
MR_def_label(interface__send_string_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(2),0)) {
		MR_GOTO_LAB(interface__send_string_5_0_i12);
	}
	MR_sv(1) = (MR_Word) MR_string_const("/tmp/.send_string", 17);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__open_output_4_0,
		interface__send_string_5_0_i14);
MR_def_label(interface__send_string_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(interface__send_string_5_0_i16);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_4_0,
		interface__send_string_5_0_i17);
MR_def_label(interface__send_string_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__close_output_3_0);
MR_def_label(interface__send_string_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		interface__send_string_5_0_i19);
MR_def_label(interface__send_string_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__send_string_5_0_i20);
MR_def_label(interface__send_string_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__send_string_5_0_i21);
MR_def_label(interface__send_string_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("send_term: couldn\'t open debug file ", 36);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__send_string_5_0_i22);
MR_def_label(interface__send_string_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(interface__send_string_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__open_input_4_0);
MR_decl_entry(io__read_4_0);
MR_decl_entry(io__close_input_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_read_result_1;

MR_BEGIN_MODULE(interface_module11)
	MR_init_entry1(interface__recv_term_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__interface__recv_term_5_0);
	MR_init_label10(interface__recv_term_5_0,2,5,15,9,10,11,12,13,6,18)
	MR_init_label10(interface__recv_term_5_0,41,20,21,25,26,23,28,29,30,4)
	MR_init_label4(interface__recv_term_5_0,33,34,35,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'recv_term'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__interface__recv_term_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__open_input_4_0,
		interface__recv_term_5_0_i2);
MR_def_label(interface__recv_term_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(interface__recv_term_5_0_i4);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__read_4_0,
		interface__recv_term_5_0_i5);
MR_def_label(interface__recv_term_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(interface__recv_term_5_0_i9);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(interface__recv_term_5_0_i15);
	}
	MR_sv(3) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("recv_term: read failed: premature eof", 37);
	}
	MR_np_call_localret_ent(require__error_1_0,
		interface__recv_term_5_0_i6);
MR_def_label(interface__recv_term_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__close_input_3_0,
		interface__recv_term_5_0_i18);
MR_def_label(interface__recv_term_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tfield(2, MR_sv(3), 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__recv_term_5_0_i10);
MR_def_label(interface__recv_term_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		interface__recv_term_5_0_i11);
MR_def_label(interface__recv_term_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__recv_term_5_0_i12);
MR_def_label(interface__recv_term_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("recv_term: read failed at line ", 31);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__recv_term_5_0_i13);
MR_def_label(interface__recv_term_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(require__error_1_0,
		interface__recv_term_5_0_i6);
MR_def_label(interface__recv_term_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__close_input_3_0,
		interface__recv_term_5_0_i18);
MR_def_label(interface__recv_term_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(interface__recv_term_5_0_i20);
	}
MR_def_label(interface__recv_term_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(interface__recv_term_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_string_const("/tmp/.recv_term", 15);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__open_output_4_0,
		interface__recv_term_5_0_i21);
MR_def_label(interface__recv_term_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(interface__recv_term_5_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(io, read_result);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(io__write_4_0,
		interface__recv_term_5_0_i25);
MR_def_label(interface__recv_term_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__write_string_4_0,
		interface__recv_term_5_0_i26);
MR_def_label(interface__recv_term_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__close_output_3_0,
		interface__recv_term_5_0_i41);
MR_def_label(interface__recv_term_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		interface__recv_term_5_0_i28);
MR_def_label(interface__recv_term_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__recv_term_5_0_i29);
MR_def_label(interface__recv_term_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__recv_term_5_0_i30);
MR_def_label(interface__recv_term_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("recv_term: couldn\'t open debug file ", 36);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__recv_term_5_0_i36);
MR_def_label(interface__recv_term_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		interface__recv_term_5_0_i33);
MR_def_label(interface__recv_term_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__recv_term_5_0_i34);
MR_def_label(interface__recv_term_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__recv_term_5_0_i35);
MR_def_label(interface__recv_term_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("recv_term: couldn\'t open pipe ", 30);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__recv_term_5_0_i36);
MR_def_label(interface__recv_term_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__read_file_as_string_4_0);

MR_BEGIN_MODULE(interface_module12)
	MR_init_entry1(interface__recv_string_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__interface__recv_string_5_0);
	MR_init_label10(interface__recv_string_5_0,2,5,7,8,9,6,11,33,13,14)
	MR_init_label10(interface__recv_string_5_0,18,19,16,21,22,23,4,26,27,28)
	MR_init_label1(interface__recv_string_5_0,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'recv_string'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__interface__recv_string_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(io__open_input_4_0,
		interface__recv_string_5_0_i2);
MR_def_label(interface__recv_string_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(interface__recv_string_5_0_i4);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__read_file_as_string_4_0,
		interface__recv_string_5_0_i5);
MR_def_label(interface__recv_string_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(interface__recv_string_5_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__close_input_3_0,
		interface__recv_string_5_0_i11);
MR_def_label(interface__recv_string_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_call_localret_ent(io__error_message_2_0,
		interface__recv_string_5_0_i8);
MR_def_label(interface__recv_string_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("recv_string: read failed: ", 26);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__recv_string_5_0_i9);
MR_def_label(interface__recv_string_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(require__error_1_0,
		interface__recv_string_5_0_i6);
MR_def_label(interface__recv_string_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__close_input_3_0,
		interface__recv_string_5_0_i11);
MR_def_label(interface__recv_string_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(interface__recv_string_5_0_i13);
	}
MR_def_label(interface__recv_string_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(interface__recv_string_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_string_const("/tmp/.recv_string", 17);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__open_output_4_0,
		interface__recv_string_5_0_i14);
MR_def_label(interface__recv_string_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(interface__recv_string_5_0_i16);
	}
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(io__write_4_0,
		interface__recv_string_5_0_i18);
MR_def_label(interface__recv_string_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__write_string_4_0,
		interface__recv_string_5_0_i19);
MR_def_label(interface__recv_string_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__close_output_3_0,
		interface__recv_string_5_0_i33);
MR_def_label(interface__recv_string_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		interface__recv_string_5_0_i21);
MR_def_label(interface__recv_string_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__recv_string_5_0_i22);
MR_def_label(interface__recv_string_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__recv_string_5_0_i23);
MR_def_label(interface__recv_string_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("recv_string: couldn\'t open debug file ", 38);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__recv_string_5_0_i29);
MR_def_label(interface__recv_string_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		interface__recv_string_5_0_i26);
MR_def_label(interface__recv_string_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__recv_string_5_0_i27);
MR_def_label(interface__recv_string_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__recv_string_5_0_i28);
MR_def_label(interface__recv_string_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("recv_string: couldn\'t open pipe ", 32);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		interface__recv_string_5_0_i29);
MR_def_label(interface__recv_string_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__interface_maybe_bunch_0(void)
{
	interface_module0();
	interface_module1();
	interface_module2();
	interface_module3();
	interface_module4();
	interface_module5();
	interface_module6();
	interface_module7();
	interface_module8();
	interface_module9();
	interface_module10();
	interface_module11();
	interface_module12();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__interface__init(void);
void mercury__interface__init_type_tables(void);
void mercury__interface__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__interface__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__interface__init_complexity_procs(void);
#endif

void mercury__interface__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__interface_maybe_bunch_0();
	mercury__interface__init_debugger();
}

void mercury__interface__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__interface__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__interface__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__interface);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__interface__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
