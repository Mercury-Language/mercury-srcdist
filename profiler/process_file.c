/*
** Automatically generated from `process_file.m'
** by the Mercury compiler,
** version rotd-2011-05-29, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__process_file__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "process_file.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "process_file.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "process_file.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "process_file.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "process_file.c"
#line 45 "process_file.c"
#include "process_file.mh"

#line 48 "process_file.c"
#line 49 "process_file.c"
#ifndef PROCESS_FILE_DECL_GUARD
#define PROCESS_FILE_DECL_GUARD

#line 53 "process_file.c"
#line 54 "process_file.c"

#endif
#line 57 "process_file.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label7(process_file__lookup_addr_6_0, 3,2,5,6,7,8,9)
MR_decl_label10(process_file__process_addr_8_0, 2,3,6,7,8,9,10,5,11,12)
MR_decl_label6(process_file__process_addr_8_0, 13,14,15,16,17,18)
MR_decl_label10(process_file__process_addr_2_6_0, 27,2,4,5,7,9,10,11,6,12)
MR_decl_label3(process_file__process_addr_2_6_0, 13,14,15)
MR_decl_label10(process_file__process_addr_decl_2_6_0, 37,2,4,5,6,7,9,8,12,11)
MR_decl_label7(process_file__process_addr_decl_2_6_0, 14,15,16,17,18,20,21)
MR_decl_label10(process_file__process_addr_pair_7_0, 2,3,4,7,8,9,6,10,11,12)
MR_decl_label2(process_file__process_addr_pair_7_0, 13,14)
MR_decl_label10(process_file__process_addr_pair_2_9_0, 51,2,4,5,6,8,7,10,11,12)
MR_decl_label10(process_file__process_addr_pair_2_9_0, 13,14,15,16,17,18,19,20,22,23)
MR_decl_label7(process_file__process_addr_pair_2_9_0, 21,25,27,29,30,31,32)
MR_decl_label10(process_file__process_profiling_data_files_4_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(process_file__process_profiling_data_files_4_0, 14,15,16,17,13,18,19,20,21,22)
MR_decl_label10(process_file__process_profiling_data_files_4_0, 12,24,25,26,27,28,29,30,31,32)
MR_decl_label7(process_file__process_profiling_data_files_4_0, 33,34,35,36,37,38,39)
MR_decl_static(process_file__lookup_addr_6_0)
MR_decl_static(process_file__process_addr_decl_2_6_0)
MR_decl_static(process_file__process_addr_2_6_0)
MR_decl_static(process_file__process_addr_8_0)
MR_decl_static(process_file__process_addr_pair_2_9_0)
MR_decl_static(process_file__process_addr_pair_7_0)
MR_def_extern_entry(process_file__process_profiling_data_files_4_0)



extern const MR_TypeCtorInfo_Struct mercury_data_prof_info__type_ctor_info_prof_node_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__prof_info__prof_node_init_1_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(process_file_module0)
	MR_init_entry1(process_file__lookup_addr_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__process_file__lookup_addr_6_0);
	MR_init_label7(process_file__lookup_addr_6_0,3,2,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_addr'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(process_file__lookup_addr_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(prof_info, prof_node);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		process_file__lookup_addr_6_0_i3);
MR_def_label(process_file__lookup_addr_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(process_file__lookup_addr_6_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(process_file__lookup_addr_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		process_file__lookup_addr_6_0_i5);
MR_def_label(process_file__lookup_addr_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unknown__", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		process_file__lookup_addr_6_0_i6);
MR_def_label(process_file__lookup_addr_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__prof_info__prof_node_init_1_0,
		process_file__lookup_addr_6_0_i7);
MR_def_label(process_file__lookup_addr_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(prof_info, prof_node);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		process_file__lookup_addr_6_0_i8);
MR_def_label(process_file__lookup_addr_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		process_file__lookup_addr_6_0_i9);
MR_def_label(process_file__lookup_addr_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(read__maybe_read_label_addr_3_0);
MR_decl_entry(read__read_label_name_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
MR_decl_entry(prof_info__prof_node_concat_to_name_list_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(process_file_module1)
	MR_init_entry1(process_file__process_addr_decl_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__process_file__process_addr_decl_2_6_0);
	MR_init_label10(process_file__process_addr_decl_2_6_0,37,2,4,5,6,7,9,8,12,11)
	MR_init_label7(process_file__process_addr_decl_2_6_0,14,15,16,17,18,20,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_addr_decl_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(process_file__process_addr_decl_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(process_file__process_addr_decl_2_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(read__maybe_read_label_addr_3_0,
		process_file__process_addr_decl_2_6_0_i2);
MR_def_label(process_file__process_addr_decl_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(process_file__process_addr_decl_2_6_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(7);
MR_def_label(process_file__process_addr_decl_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(read__read_label_name_3_0,
		process_file__process_addr_decl_2_6_0_i5);
MR_def_label(process_file__process_addr_decl_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__prof_info__prof_node_init_1_0,
		process_file__process_addr_decl_2_6_0_i6);
MR_def_label(process_file__process_addr_decl_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		process_file__process_addr_decl_2_6_0_i7);
MR_def_label(process_file__process_addr_decl_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(prof_info, prof_node);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		process_file__process_addr_decl_2_6_0_i9);
MR_def_label(process_file__process_addr_decl_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(process_file__process_addr_decl_2_6_0_i8);
	}
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(process_file__process_addr_decl_2_6_0_i37);
MR_def_label(process_file__process_addr_decl_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(prof_info, prof_node);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		process_file__process_addr_decl_2_6_0_i12);
MR_def_label(process_file__process_addr_decl_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(process_file__process_addr_decl_2_6_0_i11);
	}
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_sv(5);
	MR_np_call_localret_ent(prof_info__prof_node_concat_to_name_list_3_0,
		process_file__process_addr_decl_2_6_0_i20);
MR_def_label(process_file__process_addr_decl_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		process_file__process_addr_decl_2_6_0_i14);
MR_def_label(process_file__process_addr_decl_2_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unknown__", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		process_file__process_addr_decl_2_6_0_i15);
MR_def_label(process_file__process_addr_decl_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__prof_info__prof_node_init_1_0,
		process_file__process_addr_decl_2_6_0_i16);
MR_def_label(process_file__process_addr_decl_2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(prof_info, prof_node);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		process_file__process_addr_decl_2_6_0_i17);
MR_def_label(process_file__process_addr_decl_2_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(map__det_insert_4_0,
		process_file__process_addr_decl_2_6_0_i18);
MR_def_label(process_file__process_addr_decl_2_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(prof_info__prof_node_concat_to_name_list_3_0,
		process_file__process_addr_decl_2_6_0_i20);
MR_def_label(process_file__process_addr_decl_2_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(prof_info, prof_node);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		process_file__process_addr_decl_2_6_0_i21);
MR_def_label(process_file__process_addr_decl_2_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(process_file__process_addr_decl_2_6_0_i37);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(read__read_int_3_0);
MR_decl_entry(prof_info__prof_node_get_initial_counts_2_0);
MR_decl_entry(prof_info__prof_node_set_initial_counts_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(process_file_module2)
	MR_init_entry1(process_file__process_addr_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__process_file__process_addr_2_6_0);
	MR_init_label10(process_file__process_addr_2_6_0,27,2,4,5,7,9,10,11,6,12)
	MR_init_label3(process_file__process_addr_2_6_0,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_addr_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(process_file__process_addr_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(process_file__process_addr_2_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(read__maybe_read_label_addr_3_0,
		process_file__process_addr_2_6_0_i2);
MR_def_label(process_file__process_addr_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(process_file__process_addr_2_6_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(process_file__process_addr_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(read__read_int_3_0,
		process_file__process_addr_2_6_0_i5);
MR_def_label(process_file__process_addr_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(prof_info, prof_node);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		process_file__process_addr_2_6_0_i7);
MR_def_label(process_file__process_addr_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(process_file__process_addr_2_6_0_i6);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(prof_info__prof_node_get_initial_counts_2_0,
		process_file__process_addr_2_6_0_i9);
MR_def_label(process_file__process_addr_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) MR_sv(2));
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(prof_info__prof_node_set_initial_counts_3_0,
		process_file__process_addr_2_6_0_i10);
MR_def_label(process_file__process_addr_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(prof_info, prof_node);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		process_file__process_addr_2_6_0_i11);
MR_def_label(process_file__process_addr_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_sv(2));
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(process_file__process_addr_2_6_0_i27);
MR_def_label(process_file__process_addr_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_string_const(" not found!  Ignoring address and continuing computation.\n", 58);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		process_file__process_addr_2_6_0_i12);
MR_def_label(process_file__process_addr_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		process_file__process_addr_2_6_0_i13);
MR_def_label(process_file__process_addr_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\nWarning address ", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		process_file__process_addr_2_6_0_i14);
MR_def_label(process_file__process_addr_2_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		process_file__process_addr_2_6_0_i15);
MR_def_label(process_file__process_addr_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(process_file__process_addr_2_6_0_i27);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(globals__io_lookup_string_option_4_0);
MR_decl_entry(io__see_4_0);
MR_decl_entry(read__read_what_to_profile_3_0);
MR_decl_entry(read__read_float_3_0);
MR_decl_entry(read__read_string_3_0);
MR_decl_entry(io__seen_2_0);
MR_decl_entry(io__error_message_2_0);
static const MR_Float mercury_float_const_1pt0000000000000000 = 1.0000000000000000;

MR_BEGIN_MODULE(process_file_module3)
	MR_init_entry1(process_file__process_addr_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__process_file__process_addr_8_0);
	MR_init_label10(process_file__process_addr_8_0,2,3,6,7,8,9,10,5,11,12)
	MR_init_label6(process_file__process_addr_8_0,13,14,15,16,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_addr'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(process_file__process_addr_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(globals__io_lookup_string_option_4_0,
		process_file__process_addr_8_0_i2);
MR_def_label(process_file__process_addr_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__see_4_0,
		process_file__process_addr_8_0_i3);
MR_def_label(process_file__process_addr_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(process_file__process_addr_8_0_i5);
	}
	MR_np_call_localret_ent(read__read_what_to_profile_3_0,
		process_file__process_addr_8_0_i6);
MR_def_label(process_file__process_addr_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(read__read_float_3_0,
		process_file__process_addr_8_0_i7);
MR_def_label(process_file__process_addr_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(read__read_string_3_0,
		process_file__process_addr_8_0_i8);
MR_def_label(process_file__process_addr_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(process_file__process_addr_2_6_0,
		process_file__process_addr_8_0_i9);
MR_def_label(process_file__process_addr_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(io__seen_2_0,
		process_file__process_addr_8_0_i10);
MR_def_label(process_file__process_addr_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(process_file__process_addr_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		process_file__process_addr_8_0_i11);
MR_def_label(process_file__process_addr_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\nWarning: error opening \140", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		process_file__process_addr_8_0_i12);
MR_def_label(process_file__process_addr_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		process_file__process_addr_8_0_i13);
MR_def_label(process_file__process_addr_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\': ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		process_file__process_addr_8_0_i14);
MR_def_label(process_file__process_addr_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		process_file__process_addr_8_0_i15);
MR_def_label(process_file__process_addr_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		process_file__process_addr_8_0_i16);
MR_def_label(process_file__process_addr_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("The generated profile will only include ", 40);
	MR_np_call_localret_ent(io__write_string_3_0,
		process_file__process_addr_8_0_i17);
MR_def_label(process_file__process_addr_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("call counts.\n\n", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		process_file__process_addr_8_0_i18);
MR_def_label(process_file__process_addr_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_r4 = (MR_Word) MR_string_const("", 0);
	MR_r5 = (MR_Integer) 0;
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(read__read_label_addr_3_0);
MR_decl_entry(prof_info__prof_node_get_pred_name_2_0);
MR_decl_entry(prof_info__prof_node_concat_to_child_4_0);
MR_decl_entry(prof_info__prof_node_get_total_calls_2_0);
MR_decl_entry(prof_info__prof_node_set_total_calls_3_0);
MR_decl_entry(prof_info__prof_node_concat_to_parent_4_0);
MR_decl_entry(prof_info__prof_node_set_self_calls_3_0);
MR_decl_entry(digraph__add_vertex_4_0);
MR_decl_entry(digraph__add_edge_4_0);

MR_BEGIN_MODULE(process_file_module4)
	MR_init_entry1(process_file__process_addr_pair_2_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__process_file__process_addr_pair_2_9_0);
	MR_init_label10(process_file__process_addr_pair_2_9_0,51,2,4,5,6,8,7,10,11,12)
	MR_init_label10(process_file__process_addr_pair_2_9_0,13,14,15,16,17,18,19,20,22,23)
	MR_init_label7(process_file__process_addr_pair_2_9_0,21,25,27,29,30,31,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_addr_pair_2'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(process_file__process_addr_pair_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(process_file__process_addr_pair_2_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_np_call_localret_ent(read__maybe_read_label_addr_3_0,
		process_file__process_addr_pair_2_9_0_i2);
MR_def_label(process_file__process_addr_pair_2_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(process_file__process_addr_pair_2_9_0_i4);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(11);
MR_def_label(process_file__process_addr_pair_2_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(read__read_label_addr_3_0,
		process_file__process_addr_pair_2_9_0_i5);
MR_def_label(process_file__process_addr_pair_2_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(read__read_int_3_0,
		process_file__process_addr_pair_2_9_0_i6);
MR_def_label(process_file__process_addr_pair_2_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(prof_info, prof_node);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		process_file__process_addr_pair_2_9_0_i8);
MR_def_label(process_file__process_addr_pair_2_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(process_file__process_addr_pair_2_9_0_i7);
	}
	MR_r1 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r4;
	MR_GOTO_LAB(process_file__process_addr_pair_2_9_0_i15);
MR_def_label(process_file__process_addr_pair_2_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		process_file__process_addr_pair_2_9_0_i10);
MR_def_label(process_file__process_addr_pair_2_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unknown__", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		process_file__process_addr_pair_2_9_0_i11);
MR_def_label(process_file__process_addr_pair_2_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__prof_info__prof_node_init_1_0,
		process_file__process_addr_pair_2_9_0_i12);
MR_def_label(process_file__process_addr_pair_2_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(prof_info, prof_node);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		process_file__process_addr_pair_2_9_0_i13);
MR_def_label(process_file__process_addr_pair_2_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		process_file__process_addr_pair_2_9_0_i14);
MR_def_label(process_file__process_addr_pair_2_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
MR_def_label(process_file__process_addr_pair_2_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(process_file__lookup_addr_6_0,
		process_file__process_addr_pair_2_9_0_i16);
MR_def_label(process_file__process_addr_pair_2_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(prof_info__prof_node_get_pred_name_2_0,
		process_file__process_addr_pair_2_9_0_i17);
MR_def_label(process_file__process_addr_pair_2_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(prof_info__prof_node_get_pred_name_2_0,
		process_file__process_addr_pair_2_9_0_i18);
MR_def_label(process_file__process_addr_pair_2_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(prof_info__prof_node_concat_to_child_4_0,
		process_file__process_addr_pair_2_9_0_i19);
MR_def_label(process_file__process_addr_pair_2_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(prof_info, prof_node);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		process_file__process_addr_pair_2_9_0_i20);
MR_def_label(process_file__process_addr_pair_2_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) == MR_sv(2))) {
		MR_GOTO_LAB(process_file__process_addr_pair_2_9_0_i21);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(prof_info__prof_node_get_total_calls_2_0,
		process_file__process_addr_pair_2_9_0_i22);
MR_def_label(process_file__process_addr_pair_2_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) MR_sv(4));
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(prof_info__prof_node_set_total_calls_3_0,
		process_file__process_addr_pair_2_9_0_i23);
MR_def_label(process_file__process_addr_pair_2_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(prof_info__prof_node_concat_to_parent_4_0,
		process_file__process_addr_pair_2_9_0_i25);
MR_def_label(process_file__process_addr_pair_2_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(prof_info__prof_node_set_self_calls_3_0,
		process_file__process_addr_pair_2_9_0_i25);
MR_def_label(process_file__process_addr_pair_2_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		process_file__process_addr_pair_2_9_0_i27);
MR_def_label(process_file__process_addr_pair_2_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(process_file__process_addr_pair_2_9_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(process_file__process_addr_pair_2_9_0_i51);
	}
MR_def_label(process_file__process_addr_pair_2_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(digraph__add_vertex_4_0,
		process_file__process_addr_pair_2_9_0_i30);
MR_def_label(process_file__process_addr_pair_2_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(digraph__add_vertex_4_0,
		process_file__process_addr_pair_2_9_0_i31);
MR_def_label(process_file__process_addr_pair_2_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(digraph__add_edge_4_0,
		process_file__process_addr_pair_2_9_0_i32);
MR_def_label(process_file__process_addr_pair_2_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(9);
	MR_r3 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(process_file__process_addr_pair_2_9_0_i51);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(globals__io_lookup_bool_option_4_0);
MR_decl_entry(fn__digraph__init_0_0);
MR_decl_entry(fn__io__error_message_1_0);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(process_file_module5)
	MR_init_entry1(process_file__process_addr_pair_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__process_file__process_addr_pair_7_0);
	MR_init_label10(process_file__process_addr_pair_7_0,2,3,4,7,8,9,6,10,11,12)
	MR_init_label2(process_file__process_addr_pair_7_0,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_addr_pair'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(process_file__process_addr_pair_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(globals__io_lookup_bool_option_4_0,
		process_file__process_addr_pair_7_0_i2);
MR_def_label(process_file__process_addr_pair_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(globals__io_lookup_string_option_4_0,
		process_file__process_addr_pair_7_0_i3);
MR_def_label(process_file__process_addr_pair_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(io__see_4_0,
		process_file__process_addr_pair_7_0_i4);
MR_def_label(process_file__process_addr_pair_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(process_file__process_addr_pair_7_0_i6);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__digraph__init_0_0,
		process_file__process_addr_pair_7_0_i7);
MR_def_label(process_file__process_addr_pair_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(process_file__process_addr_pair_2_9_0,
		process_file__process_addr_pair_7_0_i8);
MR_def_label(process_file__process_addr_pair_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(io__seen_2_0,
		process_file__process_addr_pair_7_0_i9);
MR_def_label(process_file__process_addr_pair_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(process_file__process_addr_pair_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		process_file__process_addr_pair_7_0_i10);
MR_def_label(process_file__process_addr_pair_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		process_file__process_addr_pair_7_0_i11);
MR_def_label(process_file__process_addr_pair_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\': ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		process_file__process_addr_pair_7_0_i12);
MR_def_label(process_file__process_addr_pair_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		process_file__process_addr_pair_7_0_i13);
MR_def_label(process_file__process_addr_pair_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("error opening pair file \140", 25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		process_file__process_addr_pair_7_0_i14);
MR_def_label(process_file__process_addr_pair_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(options__maybe_write_string_4_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(map__init_1_0);
MR_decl_entry(prof_info__prof_set_entire_7_0);
MR_decl_entry(globals__io_get_globals_3_0);
MR_decl_entry(globals__set_what_to_profile_3_0);
MR_decl_entry(globals__io_set_globals_3_0);

MR_BEGIN_MODULE(process_file_module6)
	MR_init_entry1(process_file__process_profiling_data_files_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__process_file__process_profiling_data_files_4_0);
	MR_init_label10(process_file__process_profiling_data_files_4_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(process_file__process_profiling_data_files_4_0,14,15,16,17,13,18,19,20,21,22)
	MR_init_label10(process_file__process_profiling_data_files_4_0,12,24,25,26,27,28,29,30,31,32)
	MR_init_label7(process_file__process_profiling_data_files_4_0,33,34,35,36,37,38,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_profiling_data_files'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__process_file__process_profiling_data_files_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(globals__io_lookup_bool_option_4_0,
		process_file__process_profiling_data_files_4_0_i2);
MR_def_label(process_file__process_profiling_data_files_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 11;
	MR_np_call_localret_ent(globals__io_lookup_string_option_4_0,
		process_file__process_profiling_data_files_4_0_i3);
MR_def_label(process_file__process_profiling_data_files_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(globals__io_lookup_string_option_4_0,
		process_file__process_profiling_data_files_4_0_i4);
MR_def_label(process_file__process_profiling_data_files_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(globals__io_lookup_string_option_4_0,
		process_file__process_profiling_data_files_4_0_i5);
MR_def_label(process_file__process_profiling_data_files_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(globals__io_lookup_bool_option_4_0,
		process_file__process_profiling_data_files_4_0_i6);
MR_def_label(process_file__process_profiling_data_files_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\n\t% Processing ", 15);
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		process_file__process_profiling_data_files_4_0_i7);
MR_def_label(process_file__process_profiling_data_files_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		process_file__process_profiling_data_files_4_0_i8);
MR_def_label(process_file__process_profiling_data_files_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("...", 3);
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		process_file__process_profiling_data_files_4_0_i9);
MR_def_label(process_file__process_profiling_data_files_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_np_call_localret_ent(globals__io_lookup_string_option_4_0,
		process_file__process_profiling_data_files_4_0_i10);
MR_def_label(process_file__process_profiling_data_files_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(io__see_4_0,
		process_file__process_profiling_data_files_4_0_i11);
MR_def_label(process_file__process_profiling_data_files_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(process_file__process_profiling_data_files_4_0_i13);
	}
	MR_sv(2) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__map__init_0_0,
		process_file__process_profiling_data_files_4_0_i14);
MR_def_label(process_file__process_profiling_data_files_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(prof_info, prof_node);
	MR_np_call_localret_ent(fn__map__init_0_0,
		process_file__process_profiling_data_files_4_0_i15);
MR_def_label(process_file__process_profiling_data_files_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(process_file__process_addr_decl_2_6_0,
		process_file__process_profiling_data_files_4_0_i16);
MR_def_label(process_file__process_profiling_data_files_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(io__seen_2_0,
		process_file__process_profiling_data_files_4_0_i17);
MR_def_label(process_file__process_profiling_data_files_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	MR_GOTO_LAB(process_file__process_profiling_data_files_4_0_i12);
MR_def_label(process_file__process_profiling_data_files_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		process_file__process_profiling_data_files_4_0_i18);
MR_def_label(process_file__process_profiling_data_files_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		process_file__process_profiling_data_files_4_0_i19);
MR_def_label(process_file__process_profiling_data_files_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\': ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		process_file__process_profiling_data_files_4_0_i20);
MR_def_label(process_file__process_profiling_data_files_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		process_file__process_profiling_data_files_4_0_i21);
MR_def_label(process_file__process_profiling_data_files_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("error opening declaration file \140", 32);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		process_file__process_profiling_data_files_4_0_i22);
MR_def_label(process_file__process_profiling_data_files_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(require__error_1_0,
		process_file__process_profiling_data_files_4_0_i12);
MR_def_label(process_file__process_profiling_data_files_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		process_file__process_profiling_data_files_4_0_i24);
MR_def_label(process_file__process_profiling_data_files_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\t% Processing ", 14);
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		process_file__process_profiling_data_files_4_0_i25);
MR_def_label(process_file__process_profiling_data_files_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		process_file__process_profiling_data_files_4_0_i26);
MR_def_label(process_file__process_profiling_data_files_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("...", 3);
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		process_file__process_profiling_data_files_4_0_i27);
MR_def_label(process_file__process_profiling_data_files_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(process_file__process_addr_8_0,
		process_file__process_profiling_data_files_4_0_i28);
MR_def_label(process_file__process_profiling_data_files_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		process_file__process_profiling_data_files_4_0_i29);
MR_def_label(process_file__process_profiling_data_files_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\t% Processing ", 14);
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		process_file__process_profiling_data_files_4_0_i30);
MR_def_label(process_file__process_profiling_data_files_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		process_file__process_profiling_data_files_4_0_i31);
MR_def_label(process_file__process_profiling_data_files_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("...", 3);
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		process_file__process_profiling_data_files_4_0_i32);
MR_def_label(process_file__process_profiling_data_files_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(process_file__process_addr_pair_7_0,
		process_file__process_profiling_data_files_4_0_i33);
MR_def_label(process_file__process_profiling_data_files_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(" done.\n", 7);
	}
	MR_np_call_localret_ent(options__maybe_write_string_4_0,
		process_file__process_profiling_data_files_4_0_i34);
MR_def_label(process_file__process_profiling_data_files_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(map__init_1_0,
		process_file__process_profiling_data_files_4_0_i35);
MR_def_label(process_file__process_profiling_data_files_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(prof_info__prof_set_entire_7_0,
		process_file__process_profiling_data_files_4_0_i36);
MR_def_label(process_file__process_profiling_data_files_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(globals__io_get_globals_3_0,
		process_file__process_profiling_data_files_4_0_i37);
MR_def_label(process_file__process_profiling_data_files_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(globals__set_what_to_profile_3_0,
		process_file__process_profiling_data_files_4_0_i38);
MR_def_label(process_file__process_profiling_data_files_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(globals__io_set_globals_3_0,
		process_file__process_profiling_data_files_4_0_i39);
MR_def_label(process_file__process_profiling_data_files_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__process_file_maybe_bunch_0(void)
{
	process_file_module0();
	process_file_module1();
	process_file_module2();
	process_file_module3();
	process_file_module4();
	process_file_module5();
	process_file_module6();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__process_file__init(void);
void mercury__process_file__init_type_tables(void);
void mercury__process_file__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__process_file__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__process_file__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__process_file__init_threadscope_string_table(void);
#endif

void mercury__process_file__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__process_file_maybe_bunch_0();
	mercury__process_file__init_debugger();
}

void mercury__process_file__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__process_file__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__process_file__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__process_file);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__process_file__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__process_file__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
