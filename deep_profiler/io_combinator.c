/*
** Automatically generated from `io_combinator.m'
** by the Mercury compiler,
** version rotd-2010-01-31, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__io_combinator__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 28 "io_combinator.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 32 "io_combinator.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "io_combinator.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 40 "io_combinator.c"
#line 41 "io_combinator.c"
#include "io_combinator.mh"

#line 44 "io_combinator.c"
#line 45 "io_combinator.c"
#ifndef IO_COMBINATOR_DECL_GUARD
#define IO_COMBINATOR_DECL_GUARD

#line 49 "io_combinator.c"
#line 50 "io_combinator.c"

#endif
#line 53 "io_combinator.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label10(io_combinator__maybe_error_sequence_10_14_0, 2,5,8,11,14,17,20,23,26,29)
MR_decl_label1(io_combinator__maybe_error_sequence_10_14_0, 3)
MR_decl_label10(io_combinator__maybe_error_sequence_11_15_0, 2,5,8,11,14,17,20,23,26,29)
MR_decl_label2(io_combinator__maybe_error_sequence_11_15_0, 32,3)
MR_decl_label10(io_combinator__maybe_error_sequence_12_16_0, 2,5,8,11,14,17,20,23,26,29)
MR_decl_label3(io_combinator__maybe_error_sequence_12_16_0, 32,35,3)
MR_decl_label3(io_combinator__maybe_error_sequence_2_6_0, 2,5,3)
MR_decl_label4(io_combinator__maybe_error_sequence_3_7_0, 2,5,8,3)
MR_decl_label5(io_combinator__maybe_error_sequence_4_8_0, 2,5,8,11,3)
MR_decl_label6(io_combinator__maybe_error_sequence_5_9_0, 2,5,8,11,14,3)
MR_decl_label7(io_combinator__maybe_error_sequence_6_10_0, 2,5,8,11,14,17,3)
MR_decl_label8(io_combinator__maybe_error_sequence_7_11_0, 2,5,8,11,14,17,20,3)
MR_decl_label9(io_combinator__maybe_error_sequence_8_12_0, 2,5,8,11,14,17,20,23,3)
MR_decl_label10(io_combinator__maybe_error_sequence_9_13_0, 2,5,8,11,14,17,20,23,26,3)
MR_decl_label10(io_combinator__res_sequence_10_14_0, 2,5,8,11,14,17,20,23,26,29)
MR_decl_label1(io_combinator__res_sequence_10_14_0, 3)
MR_decl_label10(io_combinator__res_sequence_11_15_0, 2,5,8,11,14,17,20,23,26,29)
MR_decl_label2(io_combinator__res_sequence_11_15_0, 32,3)
MR_decl_label3(io_combinator__res_sequence_2_6_0, 2,5,3)
MR_decl_label4(io_combinator__res_sequence_3_7_0, 2,5,8,3)
MR_decl_label5(io_combinator__res_sequence_4_8_0, 2,5,8,11,3)
MR_decl_label6(io_combinator__res_sequence_5_9_0, 2,5,8,11,14,3)
MR_decl_label7(io_combinator__res_sequence_6_10_0, 2,5,8,11,14,17,3)
MR_decl_label8(io_combinator__res_sequence_7_11_0, 2,5,8,11,14,17,20,3)
MR_decl_label9(io_combinator__res_sequence_8_12_0, 2,5,8,11,14,17,20,23,3)
MR_decl_label10(io_combinator__res_sequence_9_13_0, 2,5,8,11,14,17,20,23,26,3)
MR_decl_label10(io_combinator__sequence_10_14_0, 2,6,7,11,12,16,17,21,22,26)
MR_decl_label10(io_combinator__sequence_10_14_0, 27,31,32,36,37,41,42,46,47,51)
MR_decl_label1(io_combinator__sequence_10_14_0, 3)
MR_decl_label10(io_combinator__sequence_11_15_0, 2,6,7,11,12,16,17,21,22,26)
MR_decl_label10(io_combinator__sequence_11_15_0, 27,31,32,36,37,41,42,46,47,51)
MR_decl_label3(io_combinator__sequence_11_15_0, 52,56,3)
MR_decl_label5(io_combinator__sequence_2_6_0, 2,6,7,11,3)
MR_decl_label7(io_combinator__sequence_3_7_0, 2,6,7,11,12,16,3)
MR_decl_label9(io_combinator__sequence_4_8_0, 2,6,7,11,12,16,17,21,3)
MR_decl_label10(io_combinator__sequence_5_9_0, 2,6,7,11,12,16,17,21,22,26)
MR_decl_label1(io_combinator__sequence_5_9_0, 3)
MR_decl_label10(io_combinator__sequence_6_10_0, 2,6,7,11,12,16,17,21,22,26)
MR_decl_label3(io_combinator__sequence_6_10_0, 27,31,3)
MR_decl_label10(io_combinator__sequence_7_11_0, 2,6,7,11,12,16,17,21,22,26)
MR_decl_label5(io_combinator__sequence_7_11_0, 27,31,32,36,3)
MR_decl_label10(io_combinator__sequence_8_12_0, 2,6,7,11,12,16,17,21,22,26)
MR_decl_label7(io_combinator__sequence_8_12_0, 27,31,32,36,37,41,3)
MR_decl_label10(io_combinator__sequence_9_13_0, 2,6,7,11,12,16,17,21,22,26)
MR_decl_label9(io_combinator__sequence_9_13_0, 27,31,32,36,37,41,42,46,3)
MR_def_extern_entry(io_combinator__sequence_2_6_0)
MR_def_extern_entry(io_combinator__sequence_3_7_0)
MR_def_extern_entry(io_combinator__sequence_4_8_0)
MR_def_extern_entry(io_combinator__sequence_5_9_0)
MR_def_extern_entry(io_combinator__sequence_6_10_0)
MR_def_extern_entry(io_combinator__sequence_7_11_0)
MR_def_extern_entry(io_combinator__sequence_8_12_0)
MR_def_extern_entry(io_combinator__sequence_9_13_0)
MR_def_extern_entry(io_combinator__sequence_10_14_0)
MR_def_extern_entry(io_combinator__sequence_11_15_0)
MR_def_extern_entry(io_combinator__res_sequence_2_6_0)
MR_def_extern_entry(io_combinator__res_sequence_3_7_0)
MR_def_extern_entry(io_combinator__res_sequence_4_8_0)
MR_def_extern_entry(io_combinator__res_sequence_5_9_0)
MR_def_extern_entry(io_combinator__res_sequence_6_10_0)
MR_def_extern_entry(io_combinator__res_sequence_7_11_0)
MR_def_extern_entry(io_combinator__res_sequence_8_12_0)
MR_def_extern_entry(io_combinator__res_sequence_9_13_0)
MR_def_extern_entry(io_combinator__res_sequence_10_14_0)
MR_def_extern_entry(io_combinator__res_sequence_11_15_0)
MR_def_extern_entry(io_combinator__maybe_error_sequence_2_6_0)
MR_def_extern_entry(io_combinator__maybe_error_sequence_3_7_0)
MR_def_extern_entry(io_combinator__maybe_error_sequence_4_8_0)
MR_def_extern_entry(io_combinator__maybe_error_sequence_5_9_0)
MR_def_extern_entry(io_combinator__maybe_error_sequence_6_10_0)
MR_def_extern_entry(io_combinator__maybe_error_sequence_7_11_0)
MR_def_extern_entry(io_combinator__maybe_error_sequence_8_12_0)
MR_def_extern_entry(io_combinator__maybe_error_sequence_9_13_0)
MR_def_extern_entry(io_combinator__maybe_error_sequence_10_14_0)
MR_def_extern_entry(io_combinator__maybe_error_sequence_11_15_0)
MR_def_extern_entry(io_combinator__maybe_error_sequence_12_16_0)



MR_declare_entry(mercury__do_call_closure_1);
MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(io_combinator_module0)
	MR_init_entry1(io_combinator__sequence_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__sequence_2_6_0);
	MR_init_label5(io_combinator__sequence_2_6_0,2,6,7,11,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sequence_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__sequence_2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_r1 = MR_r4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_2_6_0_i2);
MR_def_label(io_combinator__sequence_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_2_6_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_2_6_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(io_combinator__sequence_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_2_6_0_i7);
MR_def_label(io_combinator__sequence_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_2_6_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_2_6_0_i11);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(io_combinator__sequence_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_2_6_0));
	MR_np_tailcall_ent(do_call_closure_2);
	}
MR_def_label(io_combinator__sequence_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(io_combinator_module1)
	MR_init_entry1(io_combinator__sequence_3_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__sequence_3_7_0);
	MR_init_label7(io_combinator__sequence_3_7_0,2,6,7,11,12,16,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sequence_3'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__sequence_3_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_r1 = MR_r5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_3_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_3_7_0_i2);
MR_def_label(io_combinator__sequence_3_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_3_7_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_3_7_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(io_combinator__sequence_3_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_3_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_3_7_0_i7);
MR_def_label(io_combinator__sequence_3_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_3_7_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_3_7_0_i11);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(io_combinator__sequence_3_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_3_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_3_7_0_i12);
MR_def_label(io_combinator__sequence_3_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_3_7_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_3_7_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(io_combinator__sequence_3_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_3_7_0));
	MR_np_tailcall_ent(do_call_closure_3);
	}
MR_def_label(io_combinator__sequence_3_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_4);

MR_BEGIN_MODULE(io_combinator_module2)
	MR_init_entry1(io_combinator__sequence_4_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__sequence_4_8_0);
	MR_init_label9(io_combinator__sequence_4_8_0,2,6,7,11,12,16,17,21,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sequence_4'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__sequence_4_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r7;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_r1 = MR_r6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_4_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_4_8_0_i2);
MR_def_label(io_combinator__sequence_4_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_4_8_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_4_8_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(io_combinator__sequence_4_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_4_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_4_8_0_i7);
MR_def_label(io_combinator__sequence_4_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_4_8_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_4_8_0_i11);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(io_combinator__sequence_4_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_4_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_4_8_0_i12);
MR_def_label(io_combinator__sequence_4_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_4_8_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_4_8_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(io_combinator__sequence_4_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_4_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_4_8_0_i17);
MR_def_label(io_combinator__sequence_4_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_4_8_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_4_8_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(io_combinator__sequence_4_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_4_8_0));
	MR_np_tailcall_ent(do_call_closure_4);
	}
MR_def_label(io_combinator__sequence_4_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_5);

MR_BEGIN_MODULE(io_combinator_module3)
	MR_init_entry1(io_combinator__sequence_5_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__sequence_5_9_0);
	MR_init_label10(io_combinator__sequence_5_9_0,2,6,7,11,12,16,17,21,22,26)
	MR_init_label1(io_combinator__sequence_5_9_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sequence_5'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__sequence_5_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r8;
	MR_sv(2) = MR_r9;
	MR_sv(3) = MR_r10;
	MR_sv(4) = MR_r11;
	MR_sv(5) = MR_r12;
	MR_r1 = MR_r7;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_5_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_5_9_0_i2);
MR_def_label(io_combinator__sequence_5_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_5_9_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_5_9_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(io_combinator__sequence_5_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_5_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_5_9_0_i7);
MR_def_label(io_combinator__sequence_5_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_5_9_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_5_9_0_i11);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(io_combinator__sequence_5_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_5_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_5_9_0_i12);
MR_def_label(io_combinator__sequence_5_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_5_9_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_5_9_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(io_combinator__sequence_5_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_5_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_5_9_0_i17);
MR_def_label(io_combinator__sequence_5_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_5_9_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_5_9_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(io_combinator__sequence_5_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_5_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_5_9_0_i22);
MR_def_label(io_combinator__sequence_5_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_5_9_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_5_9_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(io_combinator__sequence_5_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_5_9_0));
	MR_np_tailcall_ent(do_call_closure_5);
	}
MR_def_label(io_combinator__sequence_5_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_compact);

MR_BEGIN_MODULE(io_combinator_module4)
	MR_init_entry1(io_combinator__sequence_6_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__sequence_6_10_0);
	MR_init_label10(io_combinator__sequence_6_10_0,2,6,7,11,12,16,17,21,22,26)
	MR_init_label3(io_combinator__sequence_6_10_0,27,31,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sequence_6'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__sequence_6_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r9;
	MR_sv(2) = MR_r10;
	MR_sv(3) = MR_r11;
	MR_sv(4) = MR_r12;
	MR_sv(5) = MR_r13;
	MR_sv(6) = MR_r14;
	MR_r1 = MR_r8;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_6_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_6_10_0_i2);
MR_def_label(io_combinator__sequence_6_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_6_10_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_6_10_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(io_combinator__sequence_6_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_6_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_6_10_0_i7);
MR_def_label(io_combinator__sequence_6_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_6_10_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_6_10_0_i11);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(io_combinator__sequence_6_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_6_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_6_10_0_i12);
MR_def_label(io_combinator__sequence_6_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_6_10_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_6_10_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(io_combinator__sequence_6_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_6_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_6_10_0_i17);
MR_def_label(io_combinator__sequence_6_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_6_10_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_6_10_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(io_combinator__sequence_6_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_6_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_6_10_0_i22);
MR_def_label(io_combinator__sequence_6_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_6_10_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_6_10_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(io_combinator__sequence_6_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_6_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_6_10_0_i27);
MR_def_label(io_combinator__sequence_6_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_6_10_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_6_10_0_i31);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(io_combinator__sequence_6_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 6;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_6_10_0));
	MR_np_tailcall_ent(do_call_closure_compact);
	}
MR_def_label(io_combinator__sequence_6_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module5)
	MR_init_entry1(io_combinator__sequence_7_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__sequence_7_11_0);
	MR_init_label10(io_combinator__sequence_7_11_0,2,6,7,11,12,16,17,21,22,26)
	MR_init_label5(io_combinator__sequence_7_11_0,27,31,32,36,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sequence_7'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__sequence_7_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r10;
	MR_sv(2) = MR_r11;
	MR_sv(3) = MR_r12;
	MR_sv(4) = MR_r13;
	MR_sv(5) = MR_r14;
	MR_sv(6) = MR_r15;
	MR_sv(7) = MR_r16;
	MR_r1 = MR_r9;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_7_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_7_11_0_i2);
MR_def_label(io_combinator__sequence_7_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_7_11_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_7_11_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(io_combinator__sequence_7_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_7_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_7_11_0_i7);
MR_def_label(io_combinator__sequence_7_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_7_11_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_7_11_0_i11);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(io_combinator__sequence_7_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_7_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_7_11_0_i12);
MR_def_label(io_combinator__sequence_7_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_7_11_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_7_11_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(io_combinator__sequence_7_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_7_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_7_11_0_i17);
MR_def_label(io_combinator__sequence_7_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_7_11_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_7_11_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(io_combinator__sequence_7_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_7_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_7_11_0_i22);
MR_def_label(io_combinator__sequence_7_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_7_11_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_7_11_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(io_combinator__sequence_7_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_7_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_7_11_0_i27);
MR_def_label(io_combinator__sequence_7_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_7_11_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_7_11_0_i31);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(io_combinator__sequence_7_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_7_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_7_11_0_i32);
MR_def_label(io_combinator__sequence_7_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_7_11_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_7_11_0_i36);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(io_combinator__sequence_7_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 7;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_7_11_0));
	MR_np_tailcall_ent(do_call_closure_compact);
	}
MR_def_label(io_combinator__sequence_7_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module6)
	MR_init_entry1(io_combinator__sequence_8_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__sequence_8_12_0);
	MR_init_label10(io_combinator__sequence_8_12_0,2,6,7,11,12,16,17,21,22,26)
	MR_init_label7(io_combinator__sequence_8_12_0,27,31,32,36,37,41,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sequence_8'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__sequence_8_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r11;
	MR_sv(2) = MR_r12;
	MR_sv(3) = MR_r13;
	MR_sv(4) = MR_r14;
	MR_sv(5) = MR_r15;
	MR_sv(6) = MR_r16;
	MR_sv(7) = MR_r17;
	MR_sv(8) = MR_r18;
	MR_r1 = MR_r10;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_8_12_0_i2);
MR_def_label(io_combinator__sequence_8_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_8_12_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_8_12_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(io_combinator__sequence_8_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_8_12_0_i7);
MR_def_label(io_combinator__sequence_8_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_8_12_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_8_12_0_i11);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(io_combinator__sequence_8_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_8_12_0_i12);
MR_def_label(io_combinator__sequence_8_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_8_12_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_8_12_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(io_combinator__sequence_8_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_8_12_0_i17);
MR_def_label(io_combinator__sequence_8_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_8_12_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_8_12_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(io_combinator__sequence_8_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_8_12_0_i22);
MR_def_label(io_combinator__sequence_8_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_8_12_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_8_12_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(io_combinator__sequence_8_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_8_12_0_i27);
MR_def_label(io_combinator__sequence_8_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_8_12_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_8_12_0_i31);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(io_combinator__sequence_8_12_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_8_12_0_i32);
MR_def_label(io_combinator__sequence_8_12_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_8_12_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_8_12_0_i36);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(io_combinator__sequence_8_12_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_8_12_0_i37);
MR_def_label(io_combinator__sequence_8_12_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_8_12_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_8_12_0_i41);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(io_combinator__sequence_8_12_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 8;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_8_12_0));
	MR_np_tailcall_ent(do_call_closure_compact);
	}
MR_def_label(io_combinator__sequence_8_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module7)
	MR_init_entry1(io_combinator__sequence_9_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__sequence_9_13_0);
	MR_init_label10(io_combinator__sequence_9_13_0,2,6,7,11,12,16,17,21,22,26)
	MR_init_label9(io_combinator__sequence_9_13_0,27,31,32,36,37,41,42,46,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sequence_9'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__sequence_9_13_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r12;
	MR_sv(2) = MR_r13;
	MR_sv(3) = MR_r14;
	MR_sv(4) = MR_r15;
	MR_sv(5) = MR_r16;
	MR_sv(6) = MR_r17;
	MR_sv(7) = MR_r18;
	MR_sv(8) = MR_r19;
	MR_sv(9) = MR_r20;
	MR_r1 = MR_r11;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_9_13_0_i2);
MR_def_label(io_combinator__sequence_9_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_9_13_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_9_13_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
MR_def_label(io_combinator__sequence_9_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_9_13_0_i7);
MR_def_label(io_combinator__sequence_9_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_9_13_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_9_13_0_i11);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
MR_def_label(io_combinator__sequence_9_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_9_13_0_i12);
MR_def_label(io_combinator__sequence_9_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_9_13_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_9_13_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
MR_def_label(io_combinator__sequence_9_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_9_13_0_i17);
MR_def_label(io_combinator__sequence_9_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_9_13_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_9_13_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
MR_def_label(io_combinator__sequence_9_13_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_9_13_0_i22);
MR_def_label(io_combinator__sequence_9_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_9_13_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_9_13_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
MR_def_label(io_combinator__sequence_9_13_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_9_13_0_i27);
MR_def_label(io_combinator__sequence_9_13_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_9_13_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_9_13_0_i31);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
MR_def_label(io_combinator__sequence_9_13_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_9_13_0_i32);
MR_def_label(io_combinator__sequence_9_13_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_9_13_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_9_13_0_i36);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
MR_def_label(io_combinator__sequence_9_13_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_9_13_0_i37);
MR_def_label(io_combinator__sequence_9_13_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_9_13_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_9_13_0_i41);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
MR_def_label(io_combinator__sequence_9_13_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_9_13_0_i42);
MR_def_label(io_combinator__sequence_9_13_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_9_13_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_9_13_0_i46);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
MR_def_label(io_combinator__sequence_9_13_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 9;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_9_13_0));
	MR_np_tailcall_ent(do_call_closure_compact);
	}
MR_def_label(io_combinator__sequence_9_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module8)
	MR_init_entry1(io_combinator__sequence_10_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__sequence_10_14_0);
	MR_init_label10(io_combinator__sequence_10_14_0,2,6,7,11,12,16,17,21,22,26)
	MR_init_label10(io_combinator__sequence_10_14_0,27,31,32,36,37,41,42,46,47,51)
	MR_init_label1(io_combinator__sequence_10_14_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sequence_10'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__sequence_10_14_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r13;
	MR_sv(2) = MR_r14;
	MR_sv(3) = MR_r15;
	MR_sv(4) = MR_r16;
	MR_sv(5) = MR_r17;
	MR_sv(6) = MR_r18;
	MR_sv(7) = MR_r19;
	MR_sv(8) = MR_r20;
	MR_sv(9) = MR_r21;
	MR_sv(10) = MR_r22;
	MR_r1 = MR_r12;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_10_14_0_i2);
MR_def_label(io_combinator__sequence_10_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_10_14_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_10_14_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(11);
MR_def_label(io_combinator__sequence_10_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_10_14_0_i7);
MR_def_label(io_combinator__sequence_10_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_10_14_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_10_14_0_i11);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(11);
MR_def_label(io_combinator__sequence_10_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_10_14_0_i12);
MR_def_label(io_combinator__sequence_10_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_10_14_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_10_14_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(11);
MR_def_label(io_combinator__sequence_10_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_10_14_0_i17);
MR_def_label(io_combinator__sequence_10_14_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_10_14_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_10_14_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(11);
MR_def_label(io_combinator__sequence_10_14_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_10_14_0_i22);
MR_def_label(io_combinator__sequence_10_14_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_10_14_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_10_14_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(11);
MR_def_label(io_combinator__sequence_10_14_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_10_14_0_i27);
MR_def_label(io_combinator__sequence_10_14_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_10_14_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_10_14_0_i31);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(11);
MR_def_label(io_combinator__sequence_10_14_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_10_14_0_i32);
MR_def_label(io_combinator__sequence_10_14_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_10_14_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_10_14_0_i36);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(11);
MR_def_label(io_combinator__sequence_10_14_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_10_14_0_i37);
MR_def_label(io_combinator__sequence_10_14_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_10_14_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_10_14_0_i41);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(11);
MR_def_label(io_combinator__sequence_10_14_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_10_14_0_i42);
MR_def_label(io_combinator__sequence_10_14_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_10_14_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_10_14_0_i46);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(11);
MR_def_label(io_combinator__sequence_10_14_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_10_14_0_i47);
MR_def_label(io_combinator__sequence_10_14_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_10_14_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_10_14_0_i51);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(11);
MR_def_label(io_combinator__sequence_10_14_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 10;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_10_14_0));
	MR_np_tailcall_ent(do_call_closure_compact);
	}
MR_def_label(io_combinator__sequence_10_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module9)
	MR_init_entry1(io_combinator__sequence_11_15_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__sequence_11_15_0);
	MR_init_label10(io_combinator__sequence_11_15_0,2,6,7,11,12,16,17,21,22,26)
	MR_init_label10(io_combinator__sequence_11_15_0,27,31,32,36,37,41,42,46,47,51)
	MR_init_label3(io_combinator__sequence_11_15_0,52,56,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sequence_11'/15 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__sequence_11_15_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r14;
	MR_sv(2) = MR_r15;
	MR_sv(3) = MR_r16;
	MR_sv(4) = MR_r17;
	MR_sv(5) = MR_r18;
	MR_sv(6) = MR_r19;
	MR_sv(7) = MR_r20;
	MR_sv(8) = MR_r21;
	MR_sv(9) = MR_r22;
	MR_sv(10) = MR_r23;
	MR_sv(11) = MR_r24;
	MR_r1 = MR_r13;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_11_15_0_i2);
MR_def_label(io_combinator__sequence_11_15_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_11_15_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_11_15_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(12);
MR_def_label(io_combinator__sequence_11_15_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_11_15_0_i7);
MR_def_label(io_combinator__sequence_11_15_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_11_15_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_11_15_0_i11);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(12);
MR_def_label(io_combinator__sequence_11_15_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_11_15_0_i12);
MR_def_label(io_combinator__sequence_11_15_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_11_15_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_11_15_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(12);
MR_def_label(io_combinator__sequence_11_15_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_11_15_0_i17);
MR_def_label(io_combinator__sequence_11_15_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_11_15_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_11_15_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(12);
MR_def_label(io_combinator__sequence_11_15_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_11_15_0_i22);
MR_def_label(io_combinator__sequence_11_15_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_11_15_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_11_15_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(12);
MR_def_label(io_combinator__sequence_11_15_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_11_15_0_i27);
MR_def_label(io_combinator__sequence_11_15_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_11_15_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_11_15_0_i31);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(12);
MR_def_label(io_combinator__sequence_11_15_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_11_15_0_i32);
MR_def_label(io_combinator__sequence_11_15_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_11_15_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_11_15_0_i36);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(12);
MR_def_label(io_combinator__sequence_11_15_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_11_15_0_i37);
MR_def_label(io_combinator__sequence_11_15_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_11_15_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_11_15_0_i41);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(12);
MR_def_label(io_combinator__sequence_11_15_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_11_15_0_i42);
MR_def_label(io_combinator__sequence_11_15_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_11_15_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_11_15_0_i46);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(12);
MR_def_label(io_combinator__sequence_11_15_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_11_15_0_i47);
MR_def_label(io_combinator__sequence_11_15_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_11_15_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_11_15_0_i51);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(12);
MR_def_label(io_combinator__sequence_11_15_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__sequence_11_15_0_i52);
MR_def_label(io_combinator__sequence_11_15_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(io_combinator__sequence_11_15_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__sequence_11_15_0_i56);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(12);
MR_def_label(io_combinator__sequence_11_15_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(10);
	MR_r13 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 11;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__sequence_11_15_0));
	MR_np_tailcall_ent(do_call_closure_compact);
	}
MR_def_label(io_combinator__sequence_11_15_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module10)
	MR_init_entry1(io_combinator__res_sequence_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__res_sequence_2_6_0);
	MR_init_label3(io_combinator__res_sequence_2_6_0,2,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'res_sequence_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__res_sequence_2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_r1 = MR_r4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_2_6_0_i2);
MR_def_label(io_combinator__res_sequence_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_2_6_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_2_6_0_i5);
MR_def_label(io_combinator__res_sequence_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_2_6_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_2_6_0));
	MR_np_tailcall_ent(do_call_closure_2);
	}
MR_def_label(io_combinator__res_sequence_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module11)
	MR_init_entry1(io_combinator__res_sequence_3_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__res_sequence_3_7_0);
	MR_init_label4(io_combinator__res_sequence_3_7_0,2,5,8,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'res_sequence_3'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__res_sequence_3_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_r1 = MR_r5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_3_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_3_7_0_i2);
MR_def_label(io_combinator__res_sequence_3_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_3_7_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_3_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_3_7_0_i5);
MR_def_label(io_combinator__res_sequence_3_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_3_7_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_3_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_3_7_0_i8);
MR_def_label(io_combinator__res_sequence_3_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_3_7_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_3_7_0));
	MR_np_tailcall_ent(do_call_closure_3);
	}
MR_def_label(io_combinator__res_sequence_3_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module12)
	MR_init_entry1(io_combinator__res_sequence_4_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__res_sequence_4_8_0);
	MR_init_label5(io_combinator__res_sequence_4_8_0,2,5,8,11,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'res_sequence_4'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__res_sequence_4_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r7;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_r1 = MR_r6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_4_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_4_8_0_i2);
MR_def_label(io_combinator__res_sequence_4_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_4_8_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_4_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_4_8_0_i5);
MR_def_label(io_combinator__res_sequence_4_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_4_8_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_4_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_4_8_0_i8);
MR_def_label(io_combinator__res_sequence_4_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_4_8_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_4_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_4_8_0_i11);
MR_def_label(io_combinator__res_sequence_4_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_4_8_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_4_8_0));
	MR_np_tailcall_ent(do_call_closure_4);
	}
MR_def_label(io_combinator__res_sequence_4_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module13)
	MR_init_entry1(io_combinator__res_sequence_5_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__res_sequence_5_9_0);
	MR_init_label6(io_combinator__res_sequence_5_9_0,2,5,8,11,14,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'res_sequence_5'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__res_sequence_5_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r8;
	MR_sv(2) = MR_r9;
	MR_sv(3) = MR_r10;
	MR_sv(4) = MR_r11;
	MR_sv(5) = MR_r12;
	MR_r1 = MR_r7;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_5_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_5_9_0_i2);
MR_def_label(io_combinator__res_sequence_5_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_5_9_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_5_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_5_9_0_i5);
MR_def_label(io_combinator__res_sequence_5_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_5_9_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_5_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_5_9_0_i8);
MR_def_label(io_combinator__res_sequence_5_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_5_9_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_5_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_5_9_0_i11);
MR_def_label(io_combinator__res_sequence_5_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_5_9_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_5_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_5_9_0_i14);
MR_def_label(io_combinator__res_sequence_5_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_5_9_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_5_9_0));
	MR_np_tailcall_ent(do_call_closure_5);
	}
MR_def_label(io_combinator__res_sequence_5_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module14)
	MR_init_entry1(io_combinator__res_sequence_6_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__res_sequence_6_10_0);
	MR_init_label7(io_combinator__res_sequence_6_10_0,2,5,8,11,14,17,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'res_sequence_6'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__res_sequence_6_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r9;
	MR_sv(2) = MR_r10;
	MR_sv(3) = MR_r11;
	MR_sv(4) = MR_r12;
	MR_sv(5) = MR_r13;
	MR_sv(6) = MR_r14;
	MR_r1 = MR_r8;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_6_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_6_10_0_i2);
MR_def_label(io_combinator__res_sequence_6_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_6_10_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_6_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_6_10_0_i5);
MR_def_label(io_combinator__res_sequence_6_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_6_10_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_6_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_6_10_0_i8);
MR_def_label(io_combinator__res_sequence_6_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_6_10_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_6_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_6_10_0_i11);
MR_def_label(io_combinator__res_sequence_6_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_6_10_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_6_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_6_10_0_i14);
MR_def_label(io_combinator__res_sequence_6_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_6_10_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_6_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_6_10_0_i17);
MR_def_label(io_combinator__res_sequence_6_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_6_10_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 6;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_6_10_0));
	MR_np_tailcall_ent(do_call_closure_compact);
	}
MR_def_label(io_combinator__res_sequence_6_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module15)
	MR_init_entry1(io_combinator__res_sequence_7_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__res_sequence_7_11_0);
	MR_init_label8(io_combinator__res_sequence_7_11_0,2,5,8,11,14,17,20,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'res_sequence_7'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__res_sequence_7_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r10;
	MR_sv(2) = MR_r11;
	MR_sv(3) = MR_r12;
	MR_sv(4) = MR_r13;
	MR_sv(5) = MR_r14;
	MR_sv(6) = MR_r15;
	MR_sv(7) = MR_r16;
	MR_r1 = MR_r9;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_7_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_7_11_0_i2);
MR_def_label(io_combinator__res_sequence_7_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_7_11_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_7_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_7_11_0_i5);
MR_def_label(io_combinator__res_sequence_7_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_7_11_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_7_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_7_11_0_i8);
MR_def_label(io_combinator__res_sequence_7_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_7_11_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_7_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_7_11_0_i11);
MR_def_label(io_combinator__res_sequence_7_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_7_11_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_7_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_7_11_0_i14);
MR_def_label(io_combinator__res_sequence_7_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_7_11_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_7_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_7_11_0_i17);
MR_def_label(io_combinator__res_sequence_7_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_7_11_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_7_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_7_11_0_i20);
MR_def_label(io_combinator__res_sequence_7_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_7_11_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 7;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_7_11_0));
	MR_np_tailcall_ent(do_call_closure_compact);
	}
MR_def_label(io_combinator__res_sequence_7_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module16)
	MR_init_entry1(io_combinator__res_sequence_8_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__res_sequence_8_12_0);
	MR_init_label9(io_combinator__res_sequence_8_12_0,2,5,8,11,14,17,20,23,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'res_sequence_8'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__res_sequence_8_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r11;
	MR_sv(2) = MR_r12;
	MR_sv(3) = MR_r13;
	MR_sv(4) = MR_r14;
	MR_sv(5) = MR_r15;
	MR_sv(6) = MR_r16;
	MR_sv(7) = MR_r17;
	MR_sv(8) = MR_r18;
	MR_r1 = MR_r10;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_8_12_0_i2);
MR_def_label(io_combinator__res_sequence_8_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_8_12_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_8_12_0_i5);
MR_def_label(io_combinator__res_sequence_8_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_8_12_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_8_12_0_i8);
MR_def_label(io_combinator__res_sequence_8_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_8_12_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_8_12_0_i11);
MR_def_label(io_combinator__res_sequence_8_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_8_12_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_8_12_0_i14);
MR_def_label(io_combinator__res_sequence_8_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_8_12_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_8_12_0_i17);
MR_def_label(io_combinator__res_sequence_8_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_8_12_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_8_12_0_i20);
MR_def_label(io_combinator__res_sequence_8_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_8_12_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_8_12_0_i23);
MR_def_label(io_combinator__res_sequence_8_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_8_12_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 8;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_8_12_0));
	MR_np_tailcall_ent(do_call_closure_compact);
	}
MR_def_label(io_combinator__res_sequence_8_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module17)
	MR_init_entry1(io_combinator__res_sequence_9_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__res_sequence_9_13_0);
	MR_init_label10(io_combinator__res_sequence_9_13_0,2,5,8,11,14,17,20,23,26,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'res_sequence_9'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__res_sequence_9_13_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r12;
	MR_sv(2) = MR_r13;
	MR_sv(3) = MR_r14;
	MR_sv(4) = MR_r15;
	MR_sv(5) = MR_r16;
	MR_sv(6) = MR_r17;
	MR_sv(7) = MR_r18;
	MR_sv(8) = MR_r19;
	MR_sv(9) = MR_r20;
	MR_r1 = MR_r11;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_9_13_0_i2);
MR_def_label(io_combinator__res_sequence_9_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_9_13_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_9_13_0_i5);
MR_def_label(io_combinator__res_sequence_9_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_9_13_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_9_13_0_i8);
MR_def_label(io_combinator__res_sequence_9_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_9_13_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_9_13_0_i11);
MR_def_label(io_combinator__res_sequence_9_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_9_13_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_9_13_0_i14);
MR_def_label(io_combinator__res_sequence_9_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_9_13_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_9_13_0_i17);
MR_def_label(io_combinator__res_sequence_9_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_9_13_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_9_13_0_i20);
MR_def_label(io_combinator__res_sequence_9_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_9_13_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_9_13_0_i23);
MR_def_label(io_combinator__res_sequence_9_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_9_13_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_9_13_0_i26);
MR_def_label(io_combinator__res_sequence_9_13_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_9_13_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 9;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_9_13_0));
	MR_np_tailcall_ent(do_call_closure_compact);
	}
MR_def_label(io_combinator__res_sequence_9_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module18)
	MR_init_entry1(io_combinator__res_sequence_10_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__res_sequence_10_14_0);
	MR_init_label10(io_combinator__res_sequence_10_14_0,2,5,8,11,14,17,20,23,26,29)
	MR_init_label1(io_combinator__res_sequence_10_14_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'res_sequence_10'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__res_sequence_10_14_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r13;
	MR_sv(2) = MR_r14;
	MR_sv(3) = MR_r15;
	MR_sv(4) = MR_r16;
	MR_sv(5) = MR_r17;
	MR_sv(6) = MR_r18;
	MR_sv(7) = MR_r19;
	MR_sv(8) = MR_r20;
	MR_sv(9) = MR_r21;
	MR_sv(10) = MR_r22;
	MR_r1 = MR_r12;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_10_14_0_i2);
MR_def_label(io_combinator__res_sequence_10_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_10_14_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_10_14_0_i5);
MR_def_label(io_combinator__res_sequence_10_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_10_14_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_10_14_0_i8);
MR_def_label(io_combinator__res_sequence_10_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_10_14_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_10_14_0_i11);
MR_def_label(io_combinator__res_sequence_10_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_10_14_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_10_14_0_i14);
MR_def_label(io_combinator__res_sequence_10_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_10_14_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_10_14_0_i17);
MR_def_label(io_combinator__res_sequence_10_14_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_10_14_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_10_14_0_i20);
MR_def_label(io_combinator__res_sequence_10_14_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_10_14_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_10_14_0_i23);
MR_def_label(io_combinator__res_sequence_10_14_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_10_14_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_10_14_0_i26);
MR_def_label(io_combinator__res_sequence_10_14_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_10_14_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_10_14_0_i29);
MR_def_label(io_combinator__res_sequence_10_14_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_10_14_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 10;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_10_14_0));
	MR_np_tailcall_ent(do_call_closure_compact);
	}
MR_def_label(io_combinator__res_sequence_10_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module19)
	MR_init_entry1(io_combinator__res_sequence_11_15_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__res_sequence_11_15_0);
	MR_init_label10(io_combinator__res_sequence_11_15_0,2,5,8,11,14,17,20,23,26,29)
	MR_init_label2(io_combinator__res_sequence_11_15_0,32,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'res_sequence_11'/15 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__res_sequence_11_15_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r14;
	MR_sv(2) = MR_r15;
	MR_sv(3) = MR_r16;
	MR_sv(4) = MR_r17;
	MR_sv(5) = MR_r18;
	MR_sv(6) = MR_r19;
	MR_sv(7) = MR_r20;
	MR_sv(8) = MR_r21;
	MR_sv(9) = MR_r22;
	MR_sv(10) = MR_r23;
	MR_sv(11) = MR_r24;
	MR_r1 = MR_r13;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_11_15_0_i2);
MR_def_label(io_combinator__res_sequence_11_15_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_11_15_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_11_15_0_i5);
MR_def_label(io_combinator__res_sequence_11_15_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_11_15_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_11_15_0_i8);
MR_def_label(io_combinator__res_sequence_11_15_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_11_15_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_11_15_0_i11);
MR_def_label(io_combinator__res_sequence_11_15_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_11_15_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_11_15_0_i14);
MR_def_label(io_combinator__res_sequence_11_15_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_11_15_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_11_15_0_i17);
MR_def_label(io_combinator__res_sequence_11_15_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_11_15_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_11_15_0_i20);
MR_def_label(io_combinator__res_sequence_11_15_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_11_15_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_11_15_0_i23);
MR_def_label(io_combinator__res_sequence_11_15_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_11_15_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_11_15_0_i26);
MR_def_label(io_combinator__res_sequence_11_15_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_11_15_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_11_15_0_i29);
MR_def_label(io_combinator__res_sequence_11_15_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_11_15_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__res_sequence_11_15_0_i32);
MR_def_label(io_combinator__res_sequence_11_15_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__res_sequence_11_15_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(10);
	MR_r13 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 11;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__res_sequence_11_15_0));
	MR_np_tailcall_ent(do_call_closure_compact);
	}
MR_def_label(io_combinator__res_sequence_11_15_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module20)
	MR_init_entry1(io_combinator__maybe_error_sequence_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__maybe_error_sequence_2_6_0);
	MR_init_label3(io_combinator__maybe_error_sequence_2_6_0,2,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_error_sequence_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__maybe_error_sequence_2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_r1 = MR_r4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_2_6_0_i2);
MR_def_label(io_combinator__maybe_error_sequence_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_2_6_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_2_6_0_i5);
MR_def_label(io_combinator__maybe_error_sequence_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_2_6_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_2_6_0));
	MR_np_tailcall_ent(do_call_closure_2);
	}
MR_def_label(io_combinator__maybe_error_sequence_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module21)
	MR_init_entry1(io_combinator__maybe_error_sequence_3_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__maybe_error_sequence_3_7_0);
	MR_init_label4(io_combinator__maybe_error_sequence_3_7_0,2,5,8,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_error_sequence_3'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__maybe_error_sequence_3_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_r1 = MR_r5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_3_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_3_7_0_i2);
MR_def_label(io_combinator__maybe_error_sequence_3_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_3_7_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_3_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_3_7_0_i5);
MR_def_label(io_combinator__maybe_error_sequence_3_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_3_7_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_3_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_3_7_0_i8);
MR_def_label(io_combinator__maybe_error_sequence_3_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_3_7_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_3_7_0));
	MR_np_tailcall_ent(do_call_closure_3);
	}
MR_def_label(io_combinator__maybe_error_sequence_3_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module22)
	MR_init_entry1(io_combinator__maybe_error_sequence_4_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__maybe_error_sequence_4_8_0);
	MR_init_label5(io_combinator__maybe_error_sequence_4_8_0,2,5,8,11,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_error_sequence_4'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__maybe_error_sequence_4_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r7;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_r1 = MR_r6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_4_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_4_8_0_i2);
MR_def_label(io_combinator__maybe_error_sequence_4_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_4_8_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_4_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_4_8_0_i5);
MR_def_label(io_combinator__maybe_error_sequence_4_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_4_8_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_4_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_4_8_0_i8);
MR_def_label(io_combinator__maybe_error_sequence_4_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_4_8_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_4_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_4_8_0_i11);
MR_def_label(io_combinator__maybe_error_sequence_4_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_4_8_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_4_8_0));
	MR_np_tailcall_ent(do_call_closure_4);
	}
MR_def_label(io_combinator__maybe_error_sequence_4_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module23)
	MR_init_entry1(io_combinator__maybe_error_sequence_5_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__maybe_error_sequence_5_9_0);
	MR_init_label6(io_combinator__maybe_error_sequence_5_9_0,2,5,8,11,14,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_error_sequence_5'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__maybe_error_sequence_5_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r8;
	MR_sv(2) = MR_r9;
	MR_sv(3) = MR_r10;
	MR_sv(4) = MR_r11;
	MR_sv(5) = MR_r12;
	MR_r1 = MR_r7;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_5_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_5_9_0_i2);
MR_def_label(io_combinator__maybe_error_sequence_5_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_5_9_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_5_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_5_9_0_i5);
MR_def_label(io_combinator__maybe_error_sequence_5_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_5_9_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_5_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_5_9_0_i8);
MR_def_label(io_combinator__maybe_error_sequence_5_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_5_9_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_5_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_5_9_0_i11);
MR_def_label(io_combinator__maybe_error_sequence_5_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_5_9_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_5_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_5_9_0_i14);
MR_def_label(io_combinator__maybe_error_sequence_5_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_5_9_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_5_9_0));
	MR_np_tailcall_ent(do_call_closure_5);
	}
MR_def_label(io_combinator__maybe_error_sequence_5_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module24)
	MR_init_entry1(io_combinator__maybe_error_sequence_6_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__maybe_error_sequence_6_10_0);
	MR_init_label7(io_combinator__maybe_error_sequence_6_10_0,2,5,8,11,14,17,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_error_sequence_6'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__maybe_error_sequence_6_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r9;
	MR_sv(2) = MR_r10;
	MR_sv(3) = MR_r11;
	MR_sv(4) = MR_r12;
	MR_sv(5) = MR_r13;
	MR_sv(6) = MR_r14;
	MR_r1 = MR_r8;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_6_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_6_10_0_i2);
MR_def_label(io_combinator__maybe_error_sequence_6_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_6_10_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_6_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_6_10_0_i5);
MR_def_label(io_combinator__maybe_error_sequence_6_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_6_10_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_6_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_6_10_0_i8);
MR_def_label(io_combinator__maybe_error_sequence_6_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_6_10_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_6_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_6_10_0_i11);
MR_def_label(io_combinator__maybe_error_sequence_6_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_6_10_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_6_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_6_10_0_i14);
MR_def_label(io_combinator__maybe_error_sequence_6_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_6_10_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_6_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_6_10_0_i17);
MR_def_label(io_combinator__maybe_error_sequence_6_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_6_10_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 6;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_6_10_0));
	MR_np_tailcall_ent(do_call_closure_compact);
	}
MR_def_label(io_combinator__maybe_error_sequence_6_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module25)
	MR_init_entry1(io_combinator__maybe_error_sequence_7_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__maybe_error_sequence_7_11_0);
	MR_init_label8(io_combinator__maybe_error_sequence_7_11_0,2,5,8,11,14,17,20,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_error_sequence_7'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__maybe_error_sequence_7_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r10;
	MR_sv(2) = MR_r11;
	MR_sv(3) = MR_r12;
	MR_sv(4) = MR_r13;
	MR_sv(5) = MR_r14;
	MR_sv(6) = MR_r15;
	MR_sv(7) = MR_r16;
	MR_r1 = MR_r9;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_7_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_7_11_0_i2);
MR_def_label(io_combinator__maybe_error_sequence_7_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_7_11_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_7_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_7_11_0_i5);
MR_def_label(io_combinator__maybe_error_sequence_7_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_7_11_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_7_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_7_11_0_i8);
MR_def_label(io_combinator__maybe_error_sequence_7_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_7_11_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_7_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_7_11_0_i11);
MR_def_label(io_combinator__maybe_error_sequence_7_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_7_11_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_7_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_7_11_0_i14);
MR_def_label(io_combinator__maybe_error_sequence_7_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_7_11_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_7_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_7_11_0_i17);
MR_def_label(io_combinator__maybe_error_sequence_7_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_7_11_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_7_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_7_11_0_i20);
MR_def_label(io_combinator__maybe_error_sequence_7_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_7_11_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 7;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_7_11_0));
	MR_np_tailcall_ent(do_call_closure_compact);
	}
MR_def_label(io_combinator__maybe_error_sequence_7_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module26)
	MR_init_entry1(io_combinator__maybe_error_sequence_8_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__maybe_error_sequence_8_12_0);
	MR_init_label9(io_combinator__maybe_error_sequence_8_12_0,2,5,8,11,14,17,20,23,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_error_sequence_8'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__maybe_error_sequence_8_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r11;
	MR_sv(2) = MR_r12;
	MR_sv(3) = MR_r13;
	MR_sv(4) = MR_r14;
	MR_sv(5) = MR_r15;
	MR_sv(6) = MR_r16;
	MR_sv(7) = MR_r17;
	MR_sv(8) = MR_r18;
	MR_r1 = MR_r10;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_8_12_0_i2);
MR_def_label(io_combinator__maybe_error_sequence_8_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_8_12_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_8_12_0_i5);
MR_def_label(io_combinator__maybe_error_sequence_8_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_8_12_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_8_12_0_i8);
MR_def_label(io_combinator__maybe_error_sequence_8_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_8_12_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_8_12_0_i11);
MR_def_label(io_combinator__maybe_error_sequence_8_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_8_12_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_8_12_0_i14);
MR_def_label(io_combinator__maybe_error_sequence_8_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_8_12_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_8_12_0_i17);
MR_def_label(io_combinator__maybe_error_sequence_8_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_8_12_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_8_12_0_i20);
MR_def_label(io_combinator__maybe_error_sequence_8_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_8_12_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_8_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_8_12_0_i23);
MR_def_label(io_combinator__maybe_error_sequence_8_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_8_12_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 8;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_8_12_0));
	MR_np_tailcall_ent(do_call_closure_compact);
	}
MR_def_label(io_combinator__maybe_error_sequence_8_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module27)
	MR_init_entry1(io_combinator__maybe_error_sequence_9_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__maybe_error_sequence_9_13_0);
	MR_init_label10(io_combinator__maybe_error_sequence_9_13_0,2,5,8,11,14,17,20,23,26,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_error_sequence_9'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__maybe_error_sequence_9_13_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r12;
	MR_sv(2) = MR_r13;
	MR_sv(3) = MR_r14;
	MR_sv(4) = MR_r15;
	MR_sv(5) = MR_r16;
	MR_sv(6) = MR_r17;
	MR_sv(7) = MR_r18;
	MR_sv(8) = MR_r19;
	MR_sv(9) = MR_r20;
	MR_r1 = MR_r11;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_9_13_0_i2);
MR_def_label(io_combinator__maybe_error_sequence_9_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_9_13_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_9_13_0_i5);
MR_def_label(io_combinator__maybe_error_sequence_9_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_9_13_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_9_13_0_i8);
MR_def_label(io_combinator__maybe_error_sequence_9_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_9_13_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_9_13_0_i11);
MR_def_label(io_combinator__maybe_error_sequence_9_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_9_13_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_9_13_0_i14);
MR_def_label(io_combinator__maybe_error_sequence_9_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_9_13_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_9_13_0_i17);
MR_def_label(io_combinator__maybe_error_sequence_9_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_9_13_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_9_13_0_i20);
MR_def_label(io_combinator__maybe_error_sequence_9_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_9_13_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_9_13_0_i23);
MR_def_label(io_combinator__maybe_error_sequence_9_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_9_13_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_9_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_9_13_0_i26);
MR_def_label(io_combinator__maybe_error_sequence_9_13_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_9_13_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 9;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_9_13_0));
	MR_np_tailcall_ent(do_call_closure_compact);
	}
MR_def_label(io_combinator__maybe_error_sequence_9_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module28)
	MR_init_entry1(io_combinator__maybe_error_sequence_10_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__maybe_error_sequence_10_14_0);
	MR_init_label10(io_combinator__maybe_error_sequence_10_14_0,2,5,8,11,14,17,20,23,26,29)
	MR_init_label1(io_combinator__maybe_error_sequence_10_14_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_error_sequence_10'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__maybe_error_sequence_10_14_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r13;
	MR_sv(2) = MR_r14;
	MR_sv(3) = MR_r15;
	MR_sv(4) = MR_r16;
	MR_sv(5) = MR_r17;
	MR_sv(6) = MR_r18;
	MR_sv(7) = MR_r19;
	MR_sv(8) = MR_r20;
	MR_sv(9) = MR_r21;
	MR_sv(10) = MR_r22;
	MR_r1 = MR_r12;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_10_14_0_i2);
MR_def_label(io_combinator__maybe_error_sequence_10_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_10_14_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_10_14_0_i5);
MR_def_label(io_combinator__maybe_error_sequence_10_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_10_14_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_10_14_0_i8);
MR_def_label(io_combinator__maybe_error_sequence_10_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_10_14_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_10_14_0_i11);
MR_def_label(io_combinator__maybe_error_sequence_10_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_10_14_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_10_14_0_i14);
MR_def_label(io_combinator__maybe_error_sequence_10_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_10_14_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_10_14_0_i17);
MR_def_label(io_combinator__maybe_error_sequence_10_14_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_10_14_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_10_14_0_i20);
MR_def_label(io_combinator__maybe_error_sequence_10_14_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_10_14_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_10_14_0_i23);
MR_def_label(io_combinator__maybe_error_sequence_10_14_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_10_14_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_10_14_0_i26);
MR_def_label(io_combinator__maybe_error_sequence_10_14_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_10_14_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_10_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_10_14_0_i29);
MR_def_label(io_combinator__maybe_error_sequence_10_14_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_10_14_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 10;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_10_14_0));
	MR_np_tailcall_ent(do_call_closure_compact);
	}
MR_def_label(io_combinator__maybe_error_sequence_10_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module29)
	MR_init_entry1(io_combinator__maybe_error_sequence_11_15_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__maybe_error_sequence_11_15_0);
	MR_init_label10(io_combinator__maybe_error_sequence_11_15_0,2,5,8,11,14,17,20,23,26,29)
	MR_init_label2(io_combinator__maybe_error_sequence_11_15_0,32,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_error_sequence_11'/15 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__maybe_error_sequence_11_15_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r14;
	MR_sv(2) = MR_r15;
	MR_sv(3) = MR_r16;
	MR_sv(4) = MR_r17;
	MR_sv(5) = MR_r18;
	MR_sv(6) = MR_r19;
	MR_sv(7) = MR_r20;
	MR_sv(8) = MR_r21;
	MR_sv(9) = MR_r22;
	MR_sv(10) = MR_r23;
	MR_sv(11) = MR_r24;
	MR_r1 = MR_r13;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_11_15_0_i2);
MR_def_label(io_combinator__maybe_error_sequence_11_15_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_11_15_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_11_15_0_i5);
MR_def_label(io_combinator__maybe_error_sequence_11_15_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_11_15_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_11_15_0_i8);
MR_def_label(io_combinator__maybe_error_sequence_11_15_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_11_15_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_11_15_0_i11);
MR_def_label(io_combinator__maybe_error_sequence_11_15_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_11_15_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_11_15_0_i14);
MR_def_label(io_combinator__maybe_error_sequence_11_15_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_11_15_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_11_15_0_i17);
MR_def_label(io_combinator__maybe_error_sequence_11_15_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_11_15_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_11_15_0_i20);
MR_def_label(io_combinator__maybe_error_sequence_11_15_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_11_15_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_11_15_0_i23);
MR_def_label(io_combinator__maybe_error_sequence_11_15_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_11_15_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_11_15_0_i26);
MR_def_label(io_combinator__maybe_error_sequence_11_15_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_11_15_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_11_15_0_i29);
MR_def_label(io_combinator__maybe_error_sequence_11_15_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_11_15_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_11_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_11_15_0_i32);
MR_def_label(io_combinator__maybe_error_sequence_11_15_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_11_15_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(10);
	MR_r13 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 11;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_11_15_0));
	MR_np_tailcall_ent(do_call_closure_compact);
	}
MR_def_label(io_combinator__maybe_error_sequence_11_15_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(io_combinator_module30)
	MR_init_entry1(io_combinator__maybe_error_sequence_12_16_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__io_combinator__maybe_error_sequence_12_16_0);
	MR_init_label10(io_combinator__maybe_error_sequence_12_16_0,2,5,8,11,14,17,20,23,26,29)
	MR_init_label3(io_combinator__maybe_error_sequence_12_16_0,32,35,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_error_sequence_12'/16 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__io_combinator__maybe_error_sequence_12_16_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r15;
	MR_sv(2) = MR_r16;
	MR_sv(3) = MR_r17;
	MR_sv(4) = MR_r18;
	MR_sv(5) = MR_r19;
	MR_sv(6) = MR_r20;
	MR_sv(7) = MR_r21;
	MR_sv(8) = MR_r22;
	MR_sv(9) = MR_r23;
	MR_sv(10) = MR_r24;
	MR_sv(11) = MR_r25;
	MR_sv(12) = MR_r26;
	MR_r1 = MR_r14;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_12_16_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_12_16_0_i2);
MR_def_label(io_combinator__maybe_error_sequence_12_16_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_12_16_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_12_16_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_12_16_0_i5);
MR_def_label(io_combinator__maybe_error_sequence_12_16_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_12_16_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_12_16_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_12_16_0_i8);
MR_def_label(io_combinator__maybe_error_sequence_12_16_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_12_16_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_12_16_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_12_16_0_i11);
MR_def_label(io_combinator__maybe_error_sequence_12_16_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_12_16_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_12_16_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_12_16_0_i14);
MR_def_label(io_combinator__maybe_error_sequence_12_16_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_12_16_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_12_16_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_12_16_0_i17);
MR_def_label(io_combinator__maybe_error_sequence_12_16_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_12_16_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_12_16_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_12_16_0_i20);
MR_def_label(io_combinator__maybe_error_sequence_12_16_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_12_16_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_12_16_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_12_16_0_i23);
MR_def_label(io_combinator__maybe_error_sequence_12_16_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_12_16_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_12_16_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_12_16_0_i26);
MR_def_label(io_combinator__maybe_error_sequence_12_16_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_12_16_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_12_16_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_12_16_0_i29);
MR_def_label(io_combinator__maybe_error_sequence_12_16_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_12_16_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_12_16_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_12_16_0_i32);
MR_def_label(io_combinator__maybe_error_sequence_12_16_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_12_16_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_12_16_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__io_combinator__maybe_error_sequence_12_16_0_i35);
MR_def_label(io_combinator__maybe_error_sequence_12_16_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(io_combinator__maybe_error_sequence_12_16_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(10);
	MR_r13 = MR_sv(11);
	MR_r14 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 12;
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(io_combinator__maybe_error_sequence_12_16_0));
	MR_np_tailcall_ent(do_call_closure_compact);
	}
MR_def_label(io_combinator__maybe_error_sequence_12_16_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__io_combinator_maybe_bunch_0(void)
{
	io_combinator_module0();
	io_combinator_module1();
	io_combinator_module2();
	io_combinator_module3();
	io_combinator_module4();
	io_combinator_module5();
	io_combinator_module6();
	io_combinator_module7();
	io_combinator_module8();
	io_combinator_module9();
	io_combinator_module10();
	io_combinator_module11();
	io_combinator_module12();
	io_combinator_module13();
	io_combinator_module14();
	io_combinator_module15();
	io_combinator_module16();
	io_combinator_module17();
	io_combinator_module18();
	io_combinator_module19();
	io_combinator_module20();
	io_combinator_module21();
	io_combinator_module22();
	io_combinator_module23();
	io_combinator_module24();
	io_combinator_module25();
	io_combinator_module26();
	io_combinator_module27();
	io_combinator_module28();
	io_combinator_module29();
	io_combinator_module30();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__io_combinator__init(void);
void mercury__io_combinator__init_type_tables(void);
void mercury__io_combinator__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__io_combinator__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__io_combinator__init_complexity_procs(void);
#endif

void mercury__io_combinator__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__io_combinator_maybe_bunch_0();
	mercury__io_combinator__init_debugger();
}

void mercury__io_combinator__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__io_combinator__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__io_combinator__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__io_combinator);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__io_combinator__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
