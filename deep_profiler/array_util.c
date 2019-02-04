/*
** Automatically generated from `array_util.m'
** by the Mercury compiler,
** version rotd-2009-10-23, configured for i686-pc-linux-gnu.
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
INIT mercury__array_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "array_util.c"
#include "array_util.mh"

#line 27 "array_util.c"
#line 149 "../library/array.int"
#include "array.mh"

#line 31 "array_util.c"
#line 136 "../library/io.int2"
#include "io.mh"

#line 35 "array_util.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 39 "array_util.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "array_util.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "array_util.c"
#line 48 "array_util.c"
#ifndef ARRAY_UTIL_DECL_GUARD
#define ARRAY_UTIL_DECL_GUARD

#line 52 "array_util.c"
#line 53 "array_util.c"

#endif
#line 56 "array_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label4(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_0, 12,3,4,2)
MR_decl_label4(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_1, 12,3,4,2)
MR_decl_label4(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_3, 12,3,4,2)
MR_decl_label4(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_0, 12,3,4,2)
MR_decl_label4(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_1, 12,3,4,2)
MR_decl_label3(array_util__array_foldl_6_2, 3,4,2)
MR_decl_label3(array_util__array_foldl2_8_2, 3,4,2)
MR_decl_label1(array_util__array_foldl2_from_1_6_0, 2)
MR_decl_label1(array_util__array_foldl2_from_1_6_1, 2)
MR_decl_label4(array_util__array_foldl2_from_1_6_2, 2,4,5,3)
MR_decl_label1(array_util__array_foldl2_from_1_6_3, 2)
MR_decl_label1(array_util__array_foldl_from_0_4_0, 2)
MR_decl_label1(array_util__array_foldl_from_0_4_1, 2)
MR_decl_label4(array_util__array_foldl_from_0_4_2, 2,4,5,3)
MR_decl_label1(array_util__array_foldl_from_1_4_0, 2)
MR_decl_label1(array_util__array_foldl_from_1_4_1, 2)
MR_decl_label4(array_util__array_foldl_from_1_4_2, 2,4,5,3)
MR_decl_label3(array_util__array_list_foldl_4_0, 10,3,4)
MR_decl_label3(array_util__array_list_foldl2_6_0, 10,3,4)
MR_decl_label5(array_util__array_map_5_0, 12,2,3,4,5)
MR_decl_label1(array_util__array_map_from_0_3_0, 2)
MR_decl_label1(array_util__array_map_from_1_3_0, 2)
MR_def_extern_entry(fn__array_util__u_1_0)
MR_def_extern_entry(array_util__array_foldl_from_1_4_0)
MR_def_extern_entry(array_util__array_foldl_from_1_4_1)
MR_def_extern_entry(array_util__array_foldl_from_1_4_2)
MR_def_extern_entry(array_util__array_foldl_from_0_4_0)
MR_def_extern_entry(array_util__array_foldl_from_0_4_1)
MR_def_extern_entry(array_util__array_foldl_from_0_4_2)
MR_def_extern_entry(array_util__array_foldl_6_0)
MR_def_extern_entry(array_util__array_foldl_6_1)
MR_def_extern_entry(array_util__array_foldl_6_2)
MR_def_extern_entry(array_util__array_foldl2_from_1_6_0)
MR_def_extern_entry(array_util__array_foldl2_from_1_6_1)
MR_def_extern_entry(array_util__array_foldl2_from_1_6_2)
MR_def_extern_entry(array_util__array_foldl2_from_1_6_3)
MR_def_extern_entry(array_util__array_foldl2_from_1_6_4)
MR_def_extern_entry(array_util__array_foldl2_8_0)
MR_def_extern_entry(array_util__array_foldl2_8_1)
MR_def_extern_entry(array_util__array_foldl2_8_2)
MR_def_extern_entry(array_util__array_foldl2_8_3)
MR_def_extern_entry(array_util__array_foldl2_8_4)
MR_def_extern_entry(array_util__array_list_foldl_4_0)
MR_def_extern_entry(array_util__array_list_foldl2_6_0)
MR_decl_static(array_util__array_map_5_0)
MR_def_extern_entry(array_util__array_map_from_0_3_0)
MR_def_extern_entry(array_util__array_map_from_1_3_0)
MR_decl_static(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_0)
MR_decl_static(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_1)
MR_decl_static(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_0)
MR_decl_static(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_1)
MR_decl_static(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_3)




MR_BEGIN_MODULE(array_util_module0)
	MR_init_entry1(fn__array_util__u_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array_util__u_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'u'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array_util__u_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	A;
	MR_Word	B;
#define	MR_PROC_LABEL	mercury__fn__array_util__u_1_0
	A = MR_r2;
{
#line 130 "array_util.m"

    B = A;
;}
#line 142 "array_util.c"
	MR_r1 = B;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__max_2_0);

MR_BEGIN_MODULE(array_util_module1)
	MR_init_entry1(array_util__array_foldl_from_1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_foldl_from_1_4_0);
	MR_init_label1(array_util__array_foldl_from_1_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_foldl_from_1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array_util__array_foldl_from_1_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__max_2_0,
		array_util__array_foldl_from_1_4_0_i2);
MR_def_label(array_util__array_foldl_from_1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module2)
	MR_init_entry1(array_util__array_foldl_from_1_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_foldl_from_1_4_1);
	MR_init_label1(array_util__array_foldl_from_1_4_1,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_foldl_from_1'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array_util__array_foldl_from_1_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__max_2_0,
		array_util__array_foldl_from_1_4_1_i2);
MR_def_label(array_util__array_foldl_from_1_4_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__lookup_3_0);
MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(array_util_module3)
	MR_init_entry1(array_util__array_foldl_from_1_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_foldl_from_1_4_2);
	MR_init_label4(array_util__array_foldl_from_1_4_2,2,4,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_foldl_from_1'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array_util__array_foldl_from_1_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__max_2_0,
		array_util__array_foldl_from_1_4_2_i2);
MR_def_label(array_util__array_foldl_from_1_4_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 > (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(array_util__array_foldl_from_1_4_2_i3);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(array__lookup_3_0,
		array_util__array_foldl_from_1_4_2_i4);
MR_def_label(array_util__array_foldl_from_1_4_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array_util__array_foldl_from_1_4_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array_util__array_foldl_from_1_4_2_i5);
MR_def_label(array_util__array_foldl_from_1_4_2,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_1);
	}
MR_def_label(array_util__array_foldl_from_1_4_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module4)
	MR_init_entry1(array_util__array_foldl_from_0_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_foldl_from_0_4_0);
	MR_init_label1(array_util__array_foldl_from_0_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_foldl_from_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array_util__array_foldl_from_0_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__max_2_0,
		array_util__array_foldl_from_0_4_0_i2);
MR_def_label(array_util__array_foldl_from_0_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module5)
	MR_init_entry1(array_util__array_foldl_from_0_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_foldl_from_0_4_1);
	MR_init_label1(array_util__array_foldl_from_0_4_1,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_foldl_from_0'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array_util__array_foldl_from_0_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__max_2_0,
		array_util__array_foldl_from_0_4_1_i2);
MR_def_label(array_util__array_foldl_from_0_4_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module6)
	MR_init_entry1(array_util__array_foldl_from_0_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_foldl_from_0_4_2);
	MR_init_label4(array_util__array_foldl_from_0_4_2,2,4,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_foldl_from_0'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array_util__array_foldl_from_0_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__max_2_0,
		array_util__array_foldl_from_0_4_2_i2);
MR_def_label(array_util__array_foldl_from_0_4_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 > (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(array_util__array_foldl_from_0_4_2_i3);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(array__lookup_3_0,
		array_util__array_foldl_from_0_4_2_i4);
MR_def_label(array_util__array_foldl_from_0_4_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array_util__array_foldl_from_0_4_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array_util__array_foldl_from_0_4_2_i5);
MR_def_label(array_util__array_foldl_from_0_4_2,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_1);
	}
MR_def_label(array_util__array_foldl_from_0_4_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module7)
	MR_init_entry1(array_util__array_foldl_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_foldl_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_foldl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array_util__array_foldl_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_np_tailcall_ent(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module8)
	MR_init_entry1(array_util__array_foldl_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_foldl_6_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_foldl'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array_util__array_foldl_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_np_tailcall_ent(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module9)
	MR_init_entry1(array_util__array_foldl_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_foldl_6_2);
	MR_init_label3(array_util__array_foldl_6_2,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_foldl'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array_util__array_foldl_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(array_util__array_foldl_6_2_i2);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		array_util__array_foldl_6_2_i3);
MR_def_label(array_util__array_foldl_6_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array_util__array_foldl_6_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array_util__array_foldl_6_2_i4);
MR_def_label(array_util__array_foldl_6_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_1);
	}
MR_def_label(array_util__array_foldl_6_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module10)
	MR_init_entry1(array_util__array_foldl2_from_1_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_foldl2_from_1_6_0);
	MR_init_label1(array_util__array_foldl2_from_1_6_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_foldl2_from_1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array_util__array_foldl2_from_1_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__max_2_0,
		array_util__array_foldl2_from_1_6_0_i2);
MR_def_label(array_util__array_foldl2_from_1_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module11)
	MR_init_entry1(array_util__array_foldl2_from_1_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_foldl2_from_1_6_1);
	MR_init_label1(array_util__array_foldl2_from_1_6_1,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_foldl2_from_1'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array_util__array_foldl2_from_1_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__max_2_0,
		array_util__array_foldl2_from_1_6_1_i2);
MR_def_label(array_util__array_foldl2_from_1_6_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_4);

MR_BEGIN_MODULE(array_util_module12)
	MR_init_entry1(array_util__array_foldl2_from_1_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_foldl2_from_1_6_2);
	MR_init_label4(array_util__array_foldl2_from_1_6_2,2,4,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_foldl2_from_1'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array_util__array_foldl2_from_1_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__max_2_0,
		array_util__array_foldl2_from_1_6_2_i2);
MR_def_label(array_util__array_foldl2_from_1_6_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 > (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(array_util__array_foldl2_from_1_6_2_i3);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(array__lookup_3_0,
		array_util__array_foldl2_from_1_6_2_i4);
MR_def_label(array_util__array_foldl2_from_1_6_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array_util__array_foldl2_from_1_6_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__array_util__array_foldl2_from_1_6_2_i5);
MR_def_label(array_util__array_foldl2_from_1_6_2,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_1);
	}
MR_def_label(array_util__array_foldl2_from_1_6_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module13)
	MR_init_entry1(array_util__array_foldl2_from_1_6_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_foldl2_from_1_6_3);
	MR_init_label1(array_util__array_foldl2_from_1_6_3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_foldl2_from_1'/6 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array_util__array_foldl2_from_1_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__max_2_0,
		array_util__array_foldl2_from_1_6_3_i2);
MR_def_label(array_util__array_foldl2_from_1_6_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module14)
	MR_init_entry1(array_util__array_foldl2_from_1_6_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_foldl2_from_1_6_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_foldl2_from_1'/6 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array_util__array_foldl2_from_1_6_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(array_util__array_foldl2_from_1_6_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module15)
	MR_init_entry1(array_util__array_foldl2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_foldl2_8_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_foldl2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array_util__array_foldl2_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_np_tailcall_ent(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module16)
	MR_init_entry1(array_util__array_foldl2_8_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_foldl2_8_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_foldl2'/8 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array_util__array_foldl2_8_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_np_tailcall_ent(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module17)
	MR_init_entry1(array_util__array_foldl2_8_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_foldl2_8_2);
	MR_init_label3(array_util__array_foldl2_8_2,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_foldl2'/8 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array_util__array_foldl2_8_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(array_util__array_foldl2_8_2_i2);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_tempr2 = MR_r7;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		array_util__array_foldl2_8_2_i3);
MR_def_label(array_util__array_foldl2_8_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array_util__array_foldl2_8_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__array_util__array_foldl2_8_2_i4);
MR_def_label(array_util__array_foldl2_8_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_1);
	}
MR_def_label(array_util__array_foldl2_8_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module18)
	MR_init_entry1(array_util__array_foldl2_8_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_foldl2_8_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_foldl2'/8 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array_util__array_foldl2_8_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_np_tailcall_ent(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module19)
	MR_init_entry1(array_util__array_foldl2_8_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_foldl2_8_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_foldl2'/8 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array_util__array_foldl2_8_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(array_util__array_foldl2_8_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(array_util_module20)
	MR_init_entry1(array_util__array_list_foldl_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_list_foldl_4_0);
	MR_init_label3(array_util__array_list_foldl_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_list_foldl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array_util__array_list_foldl_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(array_util__array_list_foldl_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(array_util__array_list_foldl_4_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(5);
MR_def_label(array_util__array_list_foldl_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r5;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array_util__array_list_foldl_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array_util__array_list_foldl_4_0_i4);
MR_def_label(array_util__array_list_foldl_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(array_util__array_list_foldl_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module21)
	MR_init_entry1(array_util__array_list_foldl2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_list_foldl2_6_0);
	MR_init_label3(array_util__array_list_foldl2_6_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_list_foldl2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array_util__array_list_foldl2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(array_util__array_list_foldl2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(array_util__array_list_foldl2_6_0_i3);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(6);
MR_def_label(array_util__array_list_foldl2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array_util__array_list_foldl2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array_util__array_list_foldl2_6_0_i4);
MR_def_label(array_util__array_list_foldl2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(array_util__array_list_foldl2_6_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(array__set_4_0);

MR_BEGIN_MODULE(array_util_module22)
	MR_init_entry1(array_util__array_map_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_map_5_0);
	MR_init_label5(array_util__array_map_5_0,12,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_map'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(array_util__array_map_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(array_util__array_map_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 < (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(array_util__array_map_5_0_i2);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(6);
MR_def_label(array_util__array_map_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		array_util__array_map_5_0_i3);
MR_def_label(array_util__array_map_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array_util__array_map_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__array_util__array_map_5_0_i4);
MR_def_label(array_util__array_map_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		array_util__array_map_5_0_i5);
MR_def_label(array_util__array_map_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(array_util__array_map_5_0_i12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module23)
	MR_init_entry1(array_util__array_map_from_0_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_map_from_0_3_0);
	MR_init_label1(array_util__array_map_from_0_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_map_from_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array_util__array_map_from_0_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__max_2_0,
		array_util__array_map_from_0_3_0_i2);
MR_def_label(array_util__array_map_from_0_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(array_util__array_map_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module24)
	MR_init_entry1(array_util__array_map_from_1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array_util__array_map_from_1_3_0);
	MR_init_label1(array_util__array_map_from_1_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_map_from_1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array_util__array_map_from_1_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__max_2_0,
		array_util__array_map_from_1_3_0_i2);
MR_def_label(array_util__array_map_from_1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(array_util__array_map_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module25)
	MR_init_entry1(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_0);
	MR_init_label4(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_0,12,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_array_foldl__[2]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_0_i3);
MR_def_label(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_0_i4);
MR_def_label(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_0_i12);
	}
MR_def_label(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module26)
	MR_init_entry1(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_1);
	MR_init_label4(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_1,12,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_array_foldl__[2]_1'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_1_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_1_i3);
MR_def_label(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_1_i4);
MR_def_label(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_1_i12);
	}
MR_def_label(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_95_95_91_50_93_95_49_6_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module27)
	MR_init_entry1(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_0);
	MR_init_label4(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_0,12,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_array_foldl2__[2, 3]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_0_i3);
MR_def_label(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_0_i4);
MR_def_label(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_0_i12);
	}
MR_def_label(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_48_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module28)
	MR_init_entry1(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_1);
	MR_init_label4(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_1,12,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_array_foldl2__[2, 3]_1'/8 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_1_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_1_i3);
MR_def_label(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_1_i4);
MR_def_label(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_1_i12);
	}
MR_def_label(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_49_8_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_util_module29)
	MR_init_entry1(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_3);
	MR_init_label4(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_3,12,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_array_foldl2__[2, 3]_3'/8 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_3,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_3_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_3_i3);
MR_def_label(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_3_i4);
MR_def_label(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_3_i12);
	}
MR_def_label(f_97_114_114_97_121_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_114_114_97_121_95_102_111_108_100_108_50_95_95_91_50_44_32_51_93_95_51_8_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__array_util_maybe_bunch_0(void)
{
	array_util_module0();
	array_util_module1();
	array_util_module2();
	array_util_module3();
	array_util_module4();
	array_util_module5();
	array_util_module6();
	array_util_module7();
	array_util_module8();
	array_util_module9();
	array_util_module10();
	array_util_module11();
	array_util_module12();
	array_util_module13();
	array_util_module14();
	array_util_module15();
	array_util_module16();
	array_util_module17();
	array_util_module18();
	array_util_module19();
	array_util_module20();
	array_util_module21();
	array_util_module22();
	array_util_module23();
	array_util_module24();
	array_util_module25();
	array_util_module26();
	array_util_module27();
	array_util_module28();
	array_util_module29();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__array_util__init(void);
void mercury__array_util__init_type_tables(void);
void mercury__array_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__array_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__array_util__init_complexity_procs(void);
#endif

void mercury__array_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__array_util_maybe_bunch_0();
	mercury__array_util__init_debugger();
}

void mercury__array_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__array_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__array_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__array_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__array_util__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
