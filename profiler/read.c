/*
** Automatically generated from `read.m'
** by the Mercury compiler,
** version rotd-2007-08-01, configured for i686-pc-linux-gnu.
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
INIT mercury__read__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "read.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "read.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "read.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "read.c"
#line 40 "read.c"
#include "read.mh"

#line 43 "read.c"
#line 44 "read.c"
#ifndef READ_DECL_GUARD
#define READ_DECL_GUARD

#line 48 "read.c"
#line 49 "read.c"

#endif
#line 52 "read.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label8(read__maybe_read_label_addr_3_0, 2,16,17,18,5,6,8,7)
MR_decl_label2(read__maybe_read_label_addr_3_0, 11,10)
MR_decl_label8(read__maybe_read_label_name_3_0, 2,3,11,12,13,6,7,20)
MR_decl_label1(read__maybe_read_label_name_3_0, 9)
MR_decl_label5(read__read_float_3_0, 2,5,3,7,8)
MR_decl_label5(read__read_int_3_0, 2,5,3,7,8)
MR_decl_label8(read__read_label_addr_3_0, 2,16,17,18,5,6,8,7)
MR_decl_label2(read__read_label_addr_3_0, 11,10)
MR_decl_label8(read__read_label_name_3_0, 2,3,11,12,13,6,7,4)
MR_decl_label5(read__read_string_3_0, 2,7,8,9,5)
MR_decl_label5(read__read_what_to_profile_3_0, 2,5,3,7,8)
MR_def_extern_entry(read__maybe_read_label_addr_3_0)
MR_def_extern_entry(read__maybe_read_label_name_3_0)
MR_def_extern_entry(read__read_label_addr_3_0)
MR_def_extern_entry(read__read_label_name_3_0)
MR_def_extern_entry(read__read_string_3_0)
MR_def_extern_entry(read__read_int_3_0)
MR_def_extern_entry(read__read_float_3_0)
MR_def_extern_entry(read__read_what_to_profile_3_0)

MR_decl_entry(io__read_word_3_0);
MR_decl_entry(fn__io__error_message_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(require__error_1_0);
MR_decl_entry(string__from_char_list_2_0);
MR_decl_entry(string__base_string_to_int_3_0);

MR_BEGIN_MODULE(read_module0)
	MR_init_entry1(read__maybe_read_label_addr_3_0);
	MR_init_label8(read__maybe_read_label_addr_3_0,2,16,17,18,5,6,8,7)
	MR_init_label2(read__maybe_read_label_addr_3_0,11,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__read__maybe_read_label_addr_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__read_word_3_0,
		read__maybe_read_label_addr_3_0_i2);
MR_def_label(read__maybe_read_label_addr_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read__maybe_read_label_addr_3_0_i5);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(read__maybe_read_label_addr_3_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
MR_def_label(read__maybe_read_label_addr_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		read__maybe_read_label_addr_3_0_i17);
MR_def_label(read__maybe_read_label_addr_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("maybe_read_label_addr: ", 23);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read__maybe_read_label_addr_3_0_i18);
MR_def_label(read__maybe_read_label_addr_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(read__maybe_read_label_addr_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(string__from_char_list_2_0,
		read__maybe_read_label_addr_3_0_i6);
MR_def_label(read__maybe_read_label_addr_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 10;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		read__maybe_read_label_addr_3_0_i8);
MR_def_label(read__maybe_read_label_addr_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read__maybe_read_label_addr_3_0_i7);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(read__maybe_read_label_addr_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		read__maybe_read_label_addr_3_0_i11);
MR_def_label(read__maybe_read_label_addr_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read__maybe_read_label_addr_3_0_i10);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(read__maybe_read_label_addr_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("maybe_read_label_addr: Label address not hexadecimal or integer\n", 64);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(globals__io_lookup_bool_option_4_0);
MR_decl_entry(demangle__demangle_2_0);

MR_BEGIN_MODULE(read_module1)
	MR_init_entry1(read__maybe_read_label_name_3_0);
	MR_init_label8(read__maybe_read_label_name_3_0,2,3,11,12,13,6,7,20)
	MR_init_label1(read__maybe_read_label_name_3_0,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__read__maybe_read_label_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 8;
	MR_np_call_localret_ent(globals__io_lookup_bool_option_4_0,
		read__maybe_read_label_name_3_0_i2);
MR_def_label(read__maybe_read_label_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__read_word_3_0,
		read__maybe_read_label_name_3_0_i3);
MR_def_label(read__maybe_read_label_name_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read__maybe_read_label_name_3_0_i6);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(read__maybe_read_label_name_3_0_i11);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
MR_def_label(read__maybe_read_label_name_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		read__maybe_read_label_name_3_0_i12);
MR_def_label(read__maybe_read_label_name_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("maybe_read_label_name: ", 23);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read__maybe_read_label_name_3_0_i13);
MR_def_label(read__maybe_read_label_name_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(read__maybe_read_label_name_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(string__from_char_list_2_0,
		read__maybe_read_label_name_3_0_i7);
MR_def_label(read__maybe_read_label_name_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(read__maybe_read_label_name_3_0_i9);
	}
MR_def_label(read__maybe_read_label_name_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(read__maybe_read_label_name_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(demangle__demangle_2_0,
		read__maybe_read_label_name_3_0_i20);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_module2)
	MR_init_entry1(read__read_label_addr_3_0);
	MR_init_label8(read__read_label_addr_3_0,2,16,17,18,5,6,8,7)
	MR_init_label2(read__read_label_addr_3_0,11,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__read__read_label_addr_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__read_word_3_0,
		read__read_label_addr_3_0_i2);
MR_def_label(read__read_label_addr_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read__read_label_addr_3_0_i5);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(read__read_label_addr_3_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("read_label_addr: EOF reached", 28);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(read__read_label_addr_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		read__read_label_addr_3_0_i17);
MR_def_label(read__read_label_addr_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("read_label_addr: ", 17);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read__read_label_addr_3_0_i18);
MR_def_label(read__read_label_addr_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(read__read_label_addr_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(string__from_char_list_2_0,
		read__read_label_addr_3_0_i6);
MR_def_label(read__read_label_addr_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 10;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		read__read_label_addr_3_0_i8);
MR_def_label(read__read_label_addr_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read__read_label_addr_3_0_i7);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(read__read_label_addr_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		read__read_label_addr_3_0_i11);
MR_def_label(read__read_label_addr_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read__read_label_addr_3_0_i10);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(read__read_label_addr_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("maybe_read_label_addr: Label address not hexadecimal or integer\n", 64);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_module3)
	MR_init_entry1(read__read_label_name_3_0);
	MR_init_label8(read__read_label_name_3_0,2,3,11,12,13,6,7,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__read__read_label_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 8;
	MR_np_call_localret_ent(globals__io_lookup_bool_option_4_0,
		read__read_label_name_3_0_i2);
MR_def_label(read__read_label_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__read_word_3_0,
		read__read_label_name_3_0_i3);
MR_def_label(read__read_label_name_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read__read_label_name_3_0_i6);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(read__read_label_name_3_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("read_label_name: EOF reached", 28);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(read__read_label_name_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		read__read_label_name_3_0_i12);
MR_def_label(read__read_label_name_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("read_label_name: ", 17);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read__read_label_name_3_0_i13);
MR_def_label(read__read_label_name_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(read__read_label_name_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(string__from_char_list_2_0,
		read__read_label_name_3_0_i7);
MR_def_label(read__read_label_name_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),0)) {
		MR_GOTO_LAB(read__read_label_name_3_0_i4);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(demangle__demangle_2_0);
MR_def_label(read__read_label_name_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(read_module4)
	MR_init_entry1(read__read_string_3_0);
	MR_init_label5(read__read_string_3_0,2,7,8,9,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__read__read_string_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__read_word_3_0,
		read__read_string_3_0_i2);
MR_def_label(read__read_string_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(read__read_string_3_0_i5);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(read__read_string_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("read_string: EOF reached", 24);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(read__read_string_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		read__read_string_3_0_i8);
MR_def_label(read__read_string_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("read_string: ", 13);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read__read_string_3_0_i9);
MR_def_label(read__read_string_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(read__read_string_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__from_char_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_int_2_0);

MR_BEGIN_MODULE(read_module5)
	MR_init_entry1(read__read_int_3_0);
	MR_init_label5(read__read_int_3_0,2,5,3,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__read__read_int_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(read__read_string_3_0,
		read__read_int_3_0_i2);
MR_def_label(read__read_int_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(string__to_int_2_0,
		read__read_int_3_0_i5);
MR_def_label(read__read_int_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read__read_int_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(read__read_int_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\nIntger = ", 10);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read__read_int_3_0_i7);
MR_def_label(read__read_int_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\nread_int: Not an integer\n", 26);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read__read_int_3_0_i8);
MR_def_label(read__read_int_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_float_2_0);

MR_BEGIN_MODULE(read_module6)
	MR_init_entry1(read__read_float_3_0);
	MR_init_label5(read__read_float_3_0,2,5,3,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__read__read_float_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(read__read_string_3_0,
		read__read_float_3_0_i2);
MR_def_label(read__read_float_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(string__to_float_2_0,
		read__read_float_3_0_i5);
MR_def_label(read__read_float_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read__read_float_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(read__read_float_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\nFloat = ", 9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read__read_float_3_0_i7);
MR_def_label(read__read_float_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\nread_float: Not an float\n", 26);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read__read_float_3_0_i8);
MR_def_label(read__read_float_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(globals__what_to_profile_2_0);

MR_BEGIN_MODULE(read_module7)
	MR_init_entry1(read__read_what_to_profile_3_0);
	MR_init_label5(read__read_what_to_profile_3_0,2,5,3,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__read__read_what_to_profile_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(read__read_string_3_0,
		read__read_what_to_profile_3_0_i2);
MR_def_label(read__read_what_to_profile_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(globals__what_to_profile_2_0,
		read__read_what_to_profile_3_0_i5);
MR_def_label(read__read_what_to_profile_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(read__read_what_to_profile_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(read__read_what_to_profile_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\nWhatToProfile = ", 17);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read__read_what_to_profile_3_0_i7);
MR_def_label(read__read_what_to_profile_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\nread_what_to_profile: invalid input\n", 37);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		read__read_what_to_profile_3_0_i8);
MR_def_label(read__read_what_to_profile_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__read_maybe_bunch_0(void)
{
	read_module0();
	read_module1();
	read_module2();
	read_module3();
	read_module4();
	read_module5();
	read_module6();
	read_module7();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__read__init(void);
void mercury__read__init_type_tables(void);
void mercury__read__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__read__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__read__init_complexity_procs(void);
#endif

void mercury__read__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__read_maybe_bunch_0();
	mercury__read__init_debugger();
}

void mercury__read__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__read__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__read__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__read__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
