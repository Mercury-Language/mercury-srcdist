/*
** Automatically generated from `arg_pack.m'
** by the Mercury compiler,
** version rotd-2011-09-03, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__backend_libs__arg_pack__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "backend_libs.arg_pack.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "backend_libs.arg_pack.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "backend_libs.arg_pack.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "backend_libs.arg_pack.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "backend_libs.arg_pack.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 48 "backend_libs.arg_pack.c"
#line 49 "backend_libs.arg_pack.c"
#include "backend_libs.arg_pack.mh"

#line 52 "backend_libs.arg_pack.c"
#line 53 "backend_libs.arg_pack.c"
#ifndef BACKEND_LIBS__ARG_PACK_DECL_GUARD
#define BACKEND_LIBS__ARG_PACK_DECL_GUARD

#line 57 "backend_libs.arg_pack.c"
#line 58 "backend_libs.arg_pack.c"

#endif
#line 61 "backend_libs.arg_pack.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label10(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0, 90,10,11,9,13,18,22,12,25,26)
MR_decl_label2(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0, 91,8)
MR_decl_label4(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_0, 3,36,8,5)
MR_decl_label7(backend_libs__arg_pack__chunk_list_by_words_3_0, 3,11,10,15,16,14,8)
MR_decl_label4(backend_libs__arg_pack__pack_args_8_0, 6,4,8,3)
MR_decl_label5(fn__backend_libs__arg_pack__count_distinct_words_1_0, 23,3,5,8,7)
MR_def_extern_entry(backend_libs__arg_pack__pack_args_8_0)
MR_def_extern_entry(fn__backend_libs__arg_pack__count_distinct_words_1_0)
MR_def_extern_entry(backend_libs__arg_pack__chunk_list_by_words_3_0)
MR_decl_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0)
MR_decl_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_0)



extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_arg_width_0;
MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(backend_libs__arg_pack_module0)
	MR_init_entry1(backend_libs__arg_pack__pack_args_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__arg_pack__pack_args_8_0);
	MR_init_label4(backend_libs__arg_pack__pack_args_8_0,6,4,8,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pack_args'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__arg_pack__pack_args_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(6) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(7) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(8));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(backend_libs__arg_pack__pack_args_8_0_i4);
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, arg_width);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		backend_libs__arg_pack__pack_args_8_0_i6);
MR_def_label(backend_libs__arg_pack__pack_args_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(8));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_GOTO_LAB(backend_libs__arg_pack__pack_args_8_0_i8);
MR_def_label(backend_libs__arg_pack__pack_args_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_GOTO_LAB(backend_libs__arg_pack__pack_args_8_0_i3);
MR_def_label(backend_libs__arg_pack__pack_args_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0);
MR_def_label(backend_libs__arg_pack__pack_args_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__arg_pack_module1)
	MR_init_entry1(fn__backend_libs__arg_pack__count_distinct_words_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__arg_pack__count_distinct_words_1_0);
	MR_init_label5(fn__backend_libs__arg_pack__count_distinct_words_1_0,23,3,5,8,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count_distinct_words'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__arg_pack__count_distinct_words_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(fn__backend_libs__arg_pack__count_distinct_words_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__backend_libs__arg_pack__count_distinct_words_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
MR_def_label(fn__backend_libs__arg_pack__count_distinct_words_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__backend_libs__arg_pack__count_distinct_words_1_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(fn__backend_libs__arg_pack__count_distinct_words_1_0,
		fn__backend_libs__arg_pack__count_distinct_words_1_0_i8);
MR_def_label(fn__backend_libs__arg_pack__count_distinct_words_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__backend_libs__arg_pack__count_distinct_words_1_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(fn__backend_libs__arg_pack__count_distinct_words_1_0,
		fn__backend_libs__arg_pack__count_distinct_words_1_0_i8);
MR_def_label(fn__backend_libs__arg_pack__count_distinct_words_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(1);
MR_def_label(fn__backend_libs__arg_pack__count_distinct_words_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(1);
	MR_GOTO_LAB(fn__backend_libs__arg_pack__count_distinct_words_1_0_i23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(backend_libs__arg_pack_module2)
	MR_init_entry1(backend_libs__arg_pack__chunk_list_by_words_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__arg_pack__chunk_list_by_words_3_0);
	MR_init_label7(backend_libs__arg_pack__chunk_list_by_words_3_0,3,11,10,15,16,14,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'chunk_list_by_words'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__arg_pack__chunk_list_by_words_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(backend_libs__arg_pack__chunk_list_by_words_3_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(backend_libs__arg_pack__chunk_list_by_words_3_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(backend_libs__arg_pack__chunk_list_by_words_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(backend_libs__arg_pack__chunk_list_by_words_3_0_i8);
	}
	MR_r4 = MR_tfield(1, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(backend_libs__arg_pack__chunk_list_by_words_3_0_i10);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r3, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_np_localcall_lab(backend_libs__arg_pack__chunk_list_by_words_3_0,
		backend_libs__arg_pack__chunk_list_by_words_3_0_i11);
MR_def_label(backend_libs__arg_pack__chunk_list_by_words_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(backend_libs__arg_pack__chunk_list_by_words_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(backend_libs__arg_pack__chunk_list_by_words_3_0_i14);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_0,
		backend_libs__arg_pack__chunk_list_by_words_3_0_i15);
MR_def_label(backend_libs__arg_pack__chunk_list_by_words_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_localcall_lab(backend_libs__arg_pack__chunk_list_by_words_3_0,
		backend_libs__arg_pack__chunk_list_by_words_3_0_i16);
MR_def_label(backend_libs__arg_pack__chunk_list_by_words_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(backend_libs__arg_pack__chunk_list_by_words_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.arg_pack", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140backend_libs.arg_pack.chunk_list_by_words\'/3", 55);
	MR_r3 = (MR_Word) MR_string_const("partial_word_shifted", 20);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(backend_libs__arg_pack__chunk_list_by_words_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.arg_pack", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140backend_libs.arg_pack.chunk_list_by_words\'/3", 55);
	MR_r3 = (MR_Word) MR_string_const("mismatched lists", 16);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_5);

MR_BEGIN_MODULE(backend_libs__arg_pack_module3)
	MR_init_entry1(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0);
	MR_init_label10(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0,90,10,11,9,13,18,22,12,25,26)
	MR_init_label2(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0,91,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_pack_args__[1, 2, 3]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0_i90);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0_i91);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_proceed();
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0_i8);
	}
	MR_r6 = MR_tfield(1, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0_i10);
	}
	MR_sv(1) = MR_tfield(1, MR_r3, 0);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_sv(3) = (MR_Integer) 0;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0_i9);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0_i11);
	}
	MR_sv(1) = MR_tfield(1, MR_r3, 0);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_sv(3) = (MR_Integer) 0;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0_i9);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r3, 0);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_sv(3) = MR_tfield(2, MR_r6, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r6,1)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0_i13);
	}
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0_i12);
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0_i12);
	}
	MR_sv(2) = MR_r1;
	}
	MR_np_localcall_lab(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0_i18);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0_i8);
	}
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0_i22);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0_i25);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_localcall_lab(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0_i26);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_97_99_107_95_97_114_103_115_95_95_91_49_44_32_50_44_32_51_93_95_48_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.arg_pack", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140backend_libs.arg_pack.do_pack_args\'/8", 48);
	MR_r3 = (MR_Word) MR_string_const("mismatched lists", 16);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__arg_pack_module4)
	MR_init_entry1(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_0);
	MR_init_label4(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_0,3,36,8,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__split_at_next_word__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (!((((MR_Integer) MR_tempr1 == (MR_Integer) MR_tbmkword(0, 0)) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 1))))) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_0_i36);
	}
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_0_i8);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_97_114_103_95_112_97_99_107_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_110_101_120_116_95_119_111_114_100_95_95_91_49_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.arg_pack", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140backend_libs.arg_pack.split_at_next_word\'/5", 54);
	MR_r3 = (MR_Word) MR_string_const("mismatched lists", 16);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__backend_libs__arg_pack_maybe_bunch_0(void)
{
	backend_libs__arg_pack_module0();
	backend_libs__arg_pack_module1();
	backend_libs__arg_pack_module2();
	backend_libs__arg_pack_module3();
	backend_libs__arg_pack_module4();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__backend_libs__arg_pack__init(void);
void mercury__backend_libs__arg_pack__init_type_tables(void);
void mercury__backend_libs__arg_pack__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__backend_libs__arg_pack__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__backend_libs__arg_pack__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__backend_libs__arg_pack__init_threadscope_string_table(void);
#endif

void mercury__backend_libs__arg_pack__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__backend_libs__arg_pack_maybe_bunch_0();
	mercury__backend_libs__arg_pack__init_debugger();
}

void mercury__backend_libs__arg_pack__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__backend_libs__arg_pack__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__backend_libs__arg_pack__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__backend_libs__arg_pack);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__backend_libs__arg_pack__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__backend_libs__arg_pack__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
