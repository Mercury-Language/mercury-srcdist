/*
** Automatically generated from `int.m'
** by the Mercury compiler,
** version rotd-2012-03-21, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__int__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "int.c"
#include "int.mh"

#line 28 "int.c"
#line 250 "array.int"
#include "array.mh"

#line 32 "int.c"
#line 140 "io.int2"
#include "io.mh"

#line 36 "int.c"
#line 150 "io.int2"
#include "time.mh"

#line 40 "int.c"
#line 151 "io.int2"
#include "string.mh"

#line 44 "int.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 48 "int.c"
#line 21 "stm_builtin.int2"
#include "stm_builtin.mh"

#line 52 "int.c"
#line 35 "store.int2"
#include "store.mh"

#line 56 "int.c"
#line 4 "char.opt"
#include "char.mh"

#line 60 "int.c"
#line 157 "io.opt"
#include "dir.mh"

#line 64 "int.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 68 "int.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 72 "int.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 76 "int.c"
#line 3 "float.opt"
#include "float.mh"

#line 80 "int.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 84 "int.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 88 "int.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 92 "int.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 96 "int.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 100 "int.c"
#line 3 "math.opt"
#include "math.mh"

#line 104 "int.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 108 "int.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "int.c"
#line 113 "int.c"
#ifndef INT_DECL_GUARD
#define INT_DECL_GUARD

#line 117 "int.c"
#line 656 "int.m"

    #include <limits.h>

    #define ML_BITS_PER_INT     (sizeof(MR_Integer) * CHAR_BIT)

#line 124 "int.c"
#line 125 "int.c"

#endif
#line 128 "int.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_enum__enum__arity1__int__arity0__[];
MR_decl_label1(int__abs_2_0, 3)
MR_decl_label3(int__fold_down_5_0, 11,3,2)
MR_decl_label4(int__fold_down_5_4, 18,3,2,1)
MR_decl_label3(int__fold_down_5_7, 3,2,5)
MR_decl_label3(int__fold_down2_7_0, 11,3,2)
MR_decl_label4(int__fold_down2_7_5, 18,3,2,1)
MR_decl_label3(int__fold_down2_7_7, 3,2,5)
MR_decl_label3(int__fold_up_5_0, 11,3,2)
MR_decl_label4(int__fold_up_5_4, 18,3,2,1)
MR_decl_label3(int__fold_up_5_7, 3,2,5)
MR_decl_label3(int__fold_up2_7_0, 11,3,2)
MR_decl_label4(int__fold_up2_7_5, 18,3,2,1)
MR_decl_label3(int__fold_up2_7_8, 3,2,5)
MR_decl_label1(int__int_domain_checks_0_0, 1)
MR_decl_label1(int__log2_2_0, 3)
MR_decl_label1(int__log2_2_3_0, 2)
MR_decl_label1(int__max_3_0, 3)
MR_decl_label1(int__min_3_0, 3)
MR_decl_label2(int__nondet_int_in_range_3_0, 4,2)
MR_decl_label1(int__pow_3_0, 3)
MR_decl_label1(fn__f_105_110_116_95_95_47_2_0, 3)
MR_decl_label1(fn__f_105_110_116_95_95_47_47_2_0, 3)
MR_decl_label4(fn__f_105_110_116_95_95_60_60_2_0, 3,2,6,5)
MR_decl_label4(fn__f_105_110_116_95_95_62_62_2_0, 4,3,2,7)
MR_decl_label1(fn__int__abs_1_0, 3)
MR_decl_label8(fn__int__div_2_0, 3,8,12,13,15,20,10,22)
MR_decl_label1(fn__int__floor_to_multiple_of_bits_per_int_1_0, 2)
MR_decl_label3(fn__int__fold_down_4_0, 11,3,2)
MR_decl_label3(fn__int__fold_up_4_0, 11,3,2)
MR_decl_label1(fn__int__int_to_doc_1_0, 2)
MR_decl_label1(fn__int__max_2_0, 3)
MR_decl_label1(fn__int__min_2_0, 3)
MR_decl_label1(fn__int__mod_2_0, 2)
MR_decl_label4(fn__int__multiply_by_pow_3_0, 19,5,9,21)
MR_decl_label1(fn__int__rem_2_0, 3)
MR_def_extern_entry(f_105_110_116_95_95_60_2_0)
MR_def_extern_entry(f_105_110_116_95_95_62_2_0)
MR_def_extern_entry(f_105_110_116_95_95_61_60_2_0)
MR_def_extern_entry(f_105_110_116_95_95_62_61_2_0)
MR_def_extern_entry(fn__f_105_110_116_95_95_45_2_0)
MR_def_extern_entry(fn__f_105_110_116_95_95_45_2_1)
MR_def_extern_entry(fn__f_105_110_116_95_95_45_2_2)
MR_def_extern_entry(int__abs_2_0)
MR_def_extern_entry(fn__int__abs_1_0)
MR_def_extern_entry(int__max_3_0)
MR_def_extern_entry(fn__int__max_2_0)
MR_def_extern_entry(int__min_3_0)
MR_def_extern_entry(fn__int__min_2_0)
MR_def_extern_entry(int__int_domain_checks_0_0)
MR_def_extern_entry(fn__f_105_110_116_95_95_42_2_0)
MR_def_extern_entry(fn__int__unchecked_quotient_2_0)
MR_def_extern_entry(fn__f_105_110_116_95_95_47_47_2_0)
MR_def_extern_entry(fn__int__unchecked_rem_2_0)
MR_def_extern_entry(fn__int__rem_2_0)
MR_def_extern_entry(fn__int__div_2_0)
MR_def_extern_entry(fn__f_105_110_116_95_95_47_92_2_0)
MR_def_extern_entry(int__odd_1_0)
MR_decl_static(fn__int__multiply_by_pow_3_0)
MR_def_extern_entry(int__pow_3_0)
MR_def_extern_entry(fn__int__pow_2_0)
MR_def_extern_entry(fn__f_105_110_116_95_95_43_2_0)
MR_def_extern_entry(fn__f_105_110_116_95_95_43_2_1)
MR_def_extern_entry(fn__f_105_110_116_95_95_43_2_2)
MR_decl_static(int__log2_2_3_0)
MR_def_extern_entry(int__log2_2_0)
MR_def_extern_entry(fn__int__log2_1_0)
MR_def_extern_entry(fn__int__plus_2_0)
MR_def_extern_entry(fn__int__times_2_0)
MR_def_extern_entry(fn__int__minus_2_0)
MR_def_extern_entry(fn__f_105_110_116_95_95_47_2_0)
MR_def_extern_entry(fn__int__mod_2_0)
MR_def_extern_entry(fn__int__unchecked_left_shift_2_0)
MR_def_extern_entry(fn__int__unchecked_right_shift_2_0)
MR_def_extern_entry(fn__f_105_110_116_95_95_45_1_0)
MR_def_extern_entry(int__bits_per_int_1_0)
MR_def_extern_entry(fn__f_105_110_116_95_95_60_60_2_0)
MR_def_extern_entry(fn__f_105_110_116_95_95_62_62_2_0)
MR_def_extern_entry(int__even_1_0)
MR_def_extern_entry(fn__f_105_110_116_95_95_92_47_2_0)
MR_def_extern_entry(fn__int__xor_2_0)
MR_def_extern_entry(fn__int__xor_2_1)
MR_def_extern_entry(fn__int__xor_2_2)
MR_def_extern_entry(fn__f_105_110_116_95_95_92_1_0)
MR_def_extern_entry(fn__f_105_110_116_95_95_43_1_0)
MR_def_extern_entry(int__is_2_0)
MR_def_extern_entry(int__is_2_1)
MR_def_extern_entry(int__max_int_1_0)
MR_def_extern_entry(fn__int__max_int_0_0)
MR_def_extern_entry(int__min_int_1_0)
MR_def_extern_entry(fn__int__min_int_0_0)
MR_def_extern_entry(fn__int__bits_per_int_0_0)
MR_def_extern_entry(int__fold_up_5_0)
MR_def_extern_entry(int__fold_up_5_1)
MR_def_extern_entry(int__fold_up_5_2)
MR_def_extern_entry(int__fold_up_5_3)
MR_def_extern_entry(int__fold_up_5_4)
MR_def_extern_entry(int__fold_up_5_5)
MR_def_extern_entry(int__fold_up_5_6)
MR_def_extern_entry(int__fold_up_5_7)
MR_def_extern_entry(int__fold_up_5_8)
MR_def_extern_entry(int__fold_up_5_9)
MR_def_extern_entry(int__fold_up_5_10)
MR_def_extern_entry(fn__int__fold_up_4_0)
MR_def_extern_entry(int__fold_down_5_0)
MR_def_extern_entry(int__fold_down_5_1)
MR_def_extern_entry(int__fold_down_5_2)
MR_def_extern_entry(int__fold_down_5_3)
MR_def_extern_entry(int__fold_down_5_4)
MR_def_extern_entry(int__fold_down_5_5)
MR_def_extern_entry(int__fold_down_5_6)
MR_def_extern_entry(int__fold_down_5_7)
MR_def_extern_entry(int__fold_down_5_8)
MR_def_extern_entry(int__fold_down_5_9)
MR_def_extern_entry(int__fold_down_5_10)
MR_def_extern_entry(fn__int__fold_down_4_0)
MR_def_extern_entry(int__fold_up2_7_0)
MR_def_extern_entry(int__fold_up2_7_1)
MR_def_extern_entry(int__fold_up2_7_2)
MR_def_extern_entry(int__fold_up2_7_3)
MR_def_extern_entry(int__fold_up2_7_4)
MR_def_extern_entry(int__fold_up2_7_5)
MR_def_extern_entry(int__fold_up2_7_6)
MR_def_extern_entry(int__fold_up2_7_7)
MR_def_extern_entry(int__fold_up2_7_8)
MR_def_extern_entry(int__fold_up2_7_9)
MR_def_extern_entry(int__fold_down2_7_0)
MR_def_extern_entry(int__fold_down2_7_1)
MR_def_extern_entry(int__fold_down2_7_2)
MR_def_extern_entry(int__fold_down2_7_3)
MR_def_extern_entry(int__fold_down2_7_4)
MR_def_extern_entry(int__fold_down2_7_5)
MR_def_extern_entry(int__fold_down2_7_6)
MR_def_extern_entry(int__fold_down2_7_7)
MR_def_extern_entry(int__fold_down2_7_8)
MR_def_extern_entry(int__nondet_int_in_range_3_0)
MR_def_extern_entry(fn__int__int_to_doc_1_0)
MR_def_extern_entry(fn__int__quot_bits_per_int_1_0)
MR_def_extern_entry(fn__int__times_bits_per_int_1_0)
MR_def_extern_entry(fn__int__floor_to_multiple_of_bits_per_int_1_0)
MR_def_extern_entry(fn__int__rem_bits_per_int_1_0)
MR_def_extern_entry(fn__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_0)
MR_def_extern_entry(fn__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_0)
MR_decl_static(fn__f_105_110_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_enum__enum__arity1__int__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 2,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_0))
};




MR_BEGIN_MODULE(int_module0)
	MR_init_entry1(f_105_110_116_95_95_60_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_105_110_116_95_95_60_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '<'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_105_110_116_95_95_60_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 < (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module1)
	MR_init_entry1(f_105_110_116_95_95_62_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_105_110_116_95_95_62_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '>'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_105_110_116_95_95_62_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 > (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module2)
	MR_init_entry1(f_105_110_116_95_95_61_60_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_105_110_116_95_95_61_60_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '=<'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_105_110_116_95_95_61_60_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 <= (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module3)
	MR_init_entry1(f_105_110_116_95_95_62_61_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_105_110_116_95_95_62_61_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '>='/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_105_110_116_95_95_62_61_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 >= (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module4)
	MR_init_entry1(fn__f_105_110_116_95_95_45_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_105_110_116_95_95_45_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '-'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_95_95_45_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module5)
	MR_init_entry1(fn__f_105_110_116_95_95_45_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_105_110_116_95_95_45_2_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '-'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_95_95_45_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module6)
	MR_init_entry1(fn__f_105_110_116_95_95_45_2_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_105_110_116_95_95_45_2_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '-'/3 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_95_95_45_2_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module7)
	MR_init_entry1(int__abs_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__abs_2_0);
	MR_init_label1(int__abs_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'abs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__abs_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,0)) {
		MR_GOTO_LAB(int__abs_2_0_i3);
	}
	MR_r1 = ((MR_Integer) 0 - (MR_Integer) MR_r1);
MR_def_label(int__abs_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module8)
	MR_init_entry1(fn__int__abs_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__abs_1_0);
	MR_init_label1(fn__int__abs_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'abs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__abs_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,0)) {
		MR_GOTO_LAB(fn__int__abs_1_0_i3);
	}
	MR_r1 = ((MR_Integer) 0 - (MR_Integer) MR_r1);
MR_def_label(fn__int__abs_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module9)
	MR_init_entry1(int__max_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__max_3_0);
	MR_init_label1(int__max_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'max'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__max_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(int__max_3_0_i3);
	}
	MR_r1 = MR_r2;
MR_def_label(int__max_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module10)
	MR_init_entry1(fn__int__max_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__max_2_0);
	MR_init_label1(fn__int__max_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'max'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__max_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(fn__int__max_2_0_i3);
	}
	MR_r1 = MR_r2;
MR_def_label(fn__int__max_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module11)
	MR_init_entry1(int__min_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__min_3_0);
	MR_init_label1(int__min_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'min'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__min_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 < (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(int__min_3_0_i3);
	}
	MR_r1 = MR_r2;
MR_def_label(int__min_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module12)
	MR_init_entry1(fn__int__min_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__min_2_0);
	MR_init_label1(fn__int__min_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'min'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__min_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 < (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(fn__int__min_2_0_i3);
	}
	MR_r1 = MR_r2;
MR_def_label(fn__int__min_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module13)
	MR_init_entry1(int__int_domain_checks_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__int_domain_checks_0_0);
	MR_init_label1(int__int_domain_checks_0_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'int_domain_checks'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__int_domain_checks_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__int__int_domain_checks_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 481 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 645 "int.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(int__int_domain_checks_0_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(int__int_domain_checks_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module14)
	MR_init_entry1(fn__f_105_110_116_95_95_42_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_105_110_116_95_95_42_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '*'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_95_95_42_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 * (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module15)
	MR_init_entry1(fn__int__unchecked_quotient_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__unchecked_quotient_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unchecked_quotient'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__unchecked_quotient_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 / (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_math__type_ctor_info_domain_error_0;
MR_decl_entry(exception__throw_1_0);

MR_BEGIN_MODULE(int_module16)
	MR_init_entry1(fn__f_105_110_116_95_95_47_47_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_105_110_116_95_95_47_47_2_0);
	MR_init_label1(fn__f_105_110_116_95_95_47_47_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '//'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_95_95_47_47_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__f_105_110_116_95_95_47_47_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 481 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 738 "int.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__f_105_110_116_95_95_47_47_2_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_95_95_47_47_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("int.\'//\': division by zero", 26);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__f_105_110_116_95_95_47_47_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 / (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module17)
	MR_init_entry1(fn__int__unchecked_rem_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__unchecked_rem_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unchecked_rem'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__unchecked_rem_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 % (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module18)
	MR_init_entry1(fn__int__rem_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__rem_2_0);
	MR_init_label1(fn__int__rem_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rem'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__rem_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__int__rem_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 481 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 811 "int.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__int__rem_2_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__int__rem_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("int.rem: division by zero", 25);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__int__rem_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 % (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module19)
	MR_init_entry1(fn__int__div_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__div_2_0);
	MR_init_label8(fn__int__div_2_0,3,8,12,13,15,20,10,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'div'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__div_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__fn__int__div_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 481 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 864 "int.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__int__div_2_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__int__div_2_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("int.\'//\': division by zero", 26);
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__int__div_2_0_i8);
MR_def_label(fn__int__div_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = ((MR_Integer) MR_r1 / (MR_Integer) MR_r2);
MR_def_label(fn__int__div_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__int__div_2_0_i12);
	}
	if (MR_INT_GE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__int__div_2_0_i22);
	}
MR_def_label(fn__int__div_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__int__div_2_0_i13);
	}
	if (MR_INT_LT(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__int__div_2_0_i22);
	}
MR_def_label(fn__int__div_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__int__div_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 481 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 916 "int.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__int__div_2_0_i15);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__int__div_2_0_i15);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("int.rem: division by zero", 25);
	MR_np_call_localret_ent(exception__throw_1_0,
		fn__int__div_2_0_i20);
MR_def_label(fn__int__div_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_sv(1) % (MR_Integer) MR_sv(2));
MR_def_label(fn__int__div_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__int__div_2_0_i10);
	}
	MR_decr_sp_and_return(4);
MR_def_label(fn__int__div_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
MR_def_label(fn__int__div_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module20)
	MR_init_entry1(fn__f_105_110_116_95_95_47_92_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_105_110_116_95_95_47_92_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '/\'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_95_95_47_92_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 & (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module21)
	MR_init_entry1(int__odd_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__odd_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'odd'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__odd_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_r1 & (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_r2 != (MR_Integer) 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module22)
	MR_init_entry1(fn__int__multiply_by_pow_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__multiply_by_pow_3_0);
	MR_init_label4(fn__int__multiply_by_pow_3_0,19,5,9,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'multiply_by_pow'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__int__multiply_by_pow_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__int__multiply_by_pow_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(fn__int__multiply_by_pow_3_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = ((MR_Integer) MR_tempr2 & (MR_Integer) 1);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__int__multiply_by_pow_3_0_i5);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_sv(2) = ((MR_Integer) MR_sv(2) * (MR_Integer) MR_r2);
	MR_sv(3) = ((MR_Integer) MR_r2 * (MR_Integer) MR_r2);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__int__multiply_by_pow_3_0_i9);
MR_def_label(fn__int__multiply_by_pow_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(3) = ((MR_Integer) MR_r2 * (MR_Integer) MR_r2);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__int__multiply_by_pow_3_0_i9);
MR_def_label(fn__int__multiply_by_pow_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__int__multiply_by_pow_3_0_i19);
	}
MR_def_label(fn__int__multiply_by_pow_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module23)
	MR_init_entry1(int__pow_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__pow_3_0);
	MR_init_label1(int__pow_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pow'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__pow_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__int__pow_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 481 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 1090 "int.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(int__pow_3_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(int__pow_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("int.pow: zero base", 18);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(int__pow_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(fn__int__multiply_by_pow_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module24)
	MR_init_entry1(fn__int__pow_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__pow_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pow'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__pow_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__pow_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module25)
	MR_init_entry1(fn__f_105_110_116_95_95_43_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_105_110_116_95_95_43_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '+'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_95_95_43_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module26)
	MR_init_entry1(fn__f_105_110_116_95_95_43_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_105_110_116_95_95_43_2_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '+'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_95_95_43_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 - (MR_Integer) MR_r1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module27)
	MR_init_entry1(fn__f_105_110_116_95_95_43_2_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_105_110_116_95_95_43_2_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '+'/3 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_95_95_43_2_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 - (MR_Integer) MR_r1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module28)
	MR_init_entry1(int__log2_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__log2_2_3_0);
	MR_init_label1(int__log2_2_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'log2_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(int__log2_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(int__log2_2_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(int__log2_2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_r1 + (MR_Integer) 1) / (MR_Integer) 2);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_np_localtailcall(int__log2_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module29)
	MR_init_entry1(int__log2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__log2_2_0);
	MR_init_label1(int__log2_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'log2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__log2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__int__log2_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 481 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 1266 "int.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(int__log2_2_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GT(MR_r1,0)) {
		MR_GOTO_LAB(int__log2_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("int.log2: taking logarithm of zero", 34);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(int__log2_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_np_tailcall_ent(int__log2_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module30)
	MR_init_entry1(fn__int__log2_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__log2_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'log2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__log2_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__log2_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module31)
	MR_init_entry1(fn__int__plus_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__plus_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'plus'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__plus_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module32)
	MR_init_entry1(fn__int__times_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__times_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'times'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__times_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 * (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module33)
	MR_init_entry1(fn__int__minus_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__minus_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'minus'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__minus_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module34)
	MR_init_entry1(fn__f_105_110_116_95_95_47_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_105_110_116_95_95_47_2_0);
	MR_init_label1(fn__f_105_110_116_95_95_47_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '/'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_95_95_47_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__f_105_110_116_95_95_47_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 481 "int.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 1404 "int.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__f_105_110_116_95_95_47_2_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_95_95_47_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_r2 = (MR_Word) MR_string_const("int.\'//\': division by zero", 26);
	MR_np_tailcall_ent(exception__throw_1_0);
MR_def_label(fn__f_105_110_116_95_95_47_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 / (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module35)
	MR_init_entry1(fn__int__mod_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__mod_2_0);
	MR_init_label1(fn__int__mod_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mod'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__mod_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__int__div_2_0,
		fn__int__mod_2_0_i2);
MR_def_label(fn__int__mod_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) - ((MR_Integer) MR_r1 * (MR_Integer) MR_sv(2)));
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module36)
	MR_init_entry1(fn__int__unchecked_left_shift_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__unchecked_left_shift_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unchecked_left_shift'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__unchecked_left_shift_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 << (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module37)
	MR_init_entry1(fn__int__unchecked_right_shift_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__unchecked_right_shift_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unchecked_right_shift'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__unchecked_right_shift_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 >> (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module38)
	MR_init_entry1(fn__f_105_110_116_95_95_45_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_105_110_116_95_95_45_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '-'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_95_95_45_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 0 - (MR_Integer) MR_r1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module39)
	MR_init_entry1(int__bits_per_int_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__bits_per_int_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bits_per_int'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__bits_per_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__int__bits_per_int_1_0
{
#line 703 "int.m"

    Bits = ML_BITS_PER_INT;
;}
#line 1545 "int.c"
	MR_r1 = Bits;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module40)
	MR_init_entry1(fn__f_105_110_116_95_95_60_60_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_105_110_116_95_95_60_60_2_0);
	MR_init_label4(fn__f_105_110_116_95_95_60_60_2_0,3,2,6,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '<<'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_95_95_60_60_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__fn__f_105_110_116_95_95_60_60_2_0
{
#line 703 "int.m"

    Bits = ML_BITS_PER_INT;
;}
#line 1579 "int.c"
	MR_r3 = Bits;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_95_95_60_60_2_0_i2);
	}
	if (((MR_Integer) MR_r2 < (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__f_105_110_116_95_95_60_60_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__f_105_110_116_95_95_60_60_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 << (MR_Integer) MR_r2);
	MR_proceed();
MR_def_label(fn__f_105_110_116_95_95_60_60_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) 0 - (MR_Integer) MR_r3);
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(fn__f_105_110_116_95_95_60_60_2_0_i5);
	}
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_95_95_60_60_2_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(fn__f_105_110_116_95_95_60_60_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) -1;
	MR_proceed();
MR_def_label(fn__f_105_110_116_95_95_60_60_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 >> ((MR_Integer) 0 - (MR_Integer) MR_r2));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module41)
	MR_init_entry1(fn__f_105_110_116_95_95_62_62_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_105_110_116_95_95_62_62_2_0);
	MR_init_label4(fn__f_105_110_116_95_95_62_62_2_0,4,3,2,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '>>'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_95_95_62_62_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__fn__f_105_110_116_95_95_62_62_2_0
{
#line 703 "int.m"

    Bits = ML_BITS_PER_INT;
;}
#line 1646 "int.c"
	MR_r3 = Bits;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_95_95_62_62_2_0_i2);
	}
	if (((MR_Integer) MR_r2 < (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__f_105_110_116_95_95_62_62_2_0_i3);
	}
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(fn__f_105_110_116_95_95_62_62_2_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__f_105_110_116_95_95_62_62_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) -1;
	MR_proceed();
MR_def_label(fn__f_105_110_116_95_95_62_62_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 >> (MR_Integer) MR_r2);
	MR_proceed();
MR_def_label(fn__f_105_110_116_95_95_62_62_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) 0 - (MR_Integer) MR_r3);
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(fn__f_105_110_116_95_95_62_62_2_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(fn__f_105_110_116_95_95_62_62_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 << ((MR_Integer) 0 - (MR_Integer) MR_r2));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module42)
	MR_init_entry1(int__even_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__even_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'even'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__even_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_r1 & (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module43)
	MR_init_entry1(fn__f_105_110_116_95_95_92_47_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_105_110_116_95_95_92_47_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '\/'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_95_95_92_47_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 | (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module44)
	MR_init_entry1(fn__int__xor_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__xor_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'xor'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__xor_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 ^ (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module45)
	MR_init_entry1(fn__int__xor_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__xor_2_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'xor'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__xor_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 ^ (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module46)
	MR_init_entry1(fn__int__xor_2_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__xor_2_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'xor'/3 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__xor_2_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 ^ (MR_Integer) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module47)
	MR_init_entry1(fn__f_105_110_116_95_95_92_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_105_110_116_95_95_92_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '\'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_95_95_92_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ~((MR_Integer) MR_r1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module48)
	MR_init_entry1(fn__f_105_110_116_95_95_43_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_105_110_116_95_95_43_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '+'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_105_110_116_95_95_43_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module49)
	MR_init_entry1(int__is_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__is_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__is_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module50)
	MR_init_entry1(int__is_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__is_2_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__is_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module51)
	MR_init_entry1(int__max_int_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__max_int_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'max_int'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__max_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__int__max_int_1_0
{
#line 669 "int.m"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 1916 "int.c"
	MR_r1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module52)
	MR_init_entry1(fn__int__max_int_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__max_int_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'max_int'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__max_int_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__int__max_int_0_0
{
#line 669 "int.m"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 1955 "int.c"
	MR_r1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module53)
	MR_init_entry1(int__min_int_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__min_int_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'min_int'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__min_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__int__min_int_1_0
{
#line 686 "int.m"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Min = INT_MIN;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Min = LONG_MIN;
    } else {
        MR_fatal_error("Unable to figure out min integer size");
    }
;}
#line 1994 "int.c"
	MR_r1 = Min;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module54)
	MR_init_entry1(fn__int__min_int_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__min_int_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'min_int'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__min_int_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__fn__int__min_int_0_0
{
#line 686 "int.m"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Min = INT_MIN;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Min = LONG_MIN;
    } else {
        MR_fatal_error("Unable to figure out min integer size");
    }
;}
#line 2033 "int.c"
	MR_r1 = Min;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module55)
	MR_init_entry1(fn__int__bits_per_int_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__bits_per_int_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bits_per_int'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__bits_per_int_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__fn__int__bits_per_int_0_0
{
#line 703 "int.m"

    Bits = ML_BITS_PER_INT;
;}
#line 2066 "int.c"
	MR_r1 = Bits;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(int_module56)
	MR_init_entry1(int__fold_up_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_up_5_0);
	MR_init_label3(int__fold_up_5_0,11,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_up'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_up_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(int__fold_up_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(int__fold_up_5_0_i2);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(int__fold_up_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__int__fold_up_5_0_i3);
MR_def_label(int__fold_up_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(int__fold_up_5_0_i11);
	}
MR_def_label(int__fold_up_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module57)
	MR_init_entry1(int__fold_up_5_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_up_5_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_up'/5 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_up_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_up_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module58)
	MR_init_entry1(int__fold_up_5_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_up_5_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_up'/5 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_up_5_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_up_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module59)
	MR_init_entry1(int__fold_up_5_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_up_5_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_up'/5 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_up_5_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_up_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module60)
	MR_init_entry1(int__fold_up_5_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_up_5_4);
	MR_init_label4(int__fold_up_5_4,18,3,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_up'/5 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_up_5_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(int__fold_up_5_4,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(int__fold_up_5_4_i2);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(int__fold_up_5_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__int__fold_up_5_4_i3);
MR_def_label(int__fold_up_5_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(int__fold_up_5_4_i1);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(int__fold_up_5_4_i18);
	}
MR_def_label(int__fold_up_5_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(int__fold_up_5_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module61)
	MR_init_entry1(int__fold_up_5_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_up_5_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_up'/5 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_up_5_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_up_5_4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module62)
	MR_init_entry1(int__fold_up_5_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_up_5_6);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_up'/5 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_up_5_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_up_5_4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(int_module63)
	MR_init_entry1(int__fold_up_5_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_up_5_7);
	MR_init_label3(int__fold_up_5_7,3,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_up'/5 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_up_5_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred int.fold_up/5-7", 4,
		MR_ENTRY(MR_do_fail));
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(int__fold_up_5_7_i2);
	}
	MR_fv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_fv(1) = MR_tempr1;
	MR_fv(2) = MR_r4;
	MR_fv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(int__fold_up_5_7));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__int__fold_up_5_7_i3);
MR_def_label(int__fold_up_5_7,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(4);
	MR_r2 = MR_fv(3);
	MR_r3 = ((MR_Integer) MR_fv(1) + (MR_Integer) 1);
	MR_r4 = MR_fv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(int__fold_up_5_7,
		int__fold_up_5_7_i5);
MR_def_label(int__fold_up_5_7,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
MR_def_label(int__fold_up_5_7,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module64)
	MR_init_entry1(int__fold_up_5_8);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_up_5_8);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_up'/5 mode 8 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_up_5_8);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_up_5_7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module65)
	MR_init_entry1(int__fold_up_5_9);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_up_5_9);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_up'/5 mode 9 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_up_5_9);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_up_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module66)
	MR_init_entry1(int__fold_up_5_10);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_up_5_10);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_up'/5 mode 10 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_up_5_10);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_up_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module67)
	MR_init_entry1(fn__int__fold_up_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__fold_up_4_0);
	MR_init_label3(fn__int__fold_up_4_0,11,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_up'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__fold_up_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(fn__int__fold_up_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__int__fold_up_4_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__int__fold_up_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__int__fold_up_4_0_i3);
MR_def_label(fn__int__fold_up_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(fn__int__fold_up_4_0_i11);
	}
MR_def_label(fn__int__fold_up_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module68)
	MR_init_entry1(int__fold_down_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_down_5_0);
	MR_init_label3(int__fold_down_5_0,11,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_down'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_down_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(int__fold_down_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(int__fold_down_5_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(int__fold_down_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__int__fold_down_5_0_i3);
MR_def_label(int__fold_down_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(int__fold_down_5_0_i11);
	}
MR_def_label(int__fold_down_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module69)
	MR_init_entry1(int__fold_down_5_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_down_5_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_down'/5 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_down_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_down_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module70)
	MR_init_entry1(int__fold_down_5_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_down_5_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_down'/5 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_down_5_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_down_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module71)
	MR_init_entry1(int__fold_down_5_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_down_5_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_down'/5 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_down_5_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_down_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module72)
	MR_init_entry1(int__fold_down_5_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_down_5_4);
	MR_init_label4(int__fold_down_5_4,18,3,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_down'/5 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_down_5_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(int__fold_down_5_4,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(int__fold_down_5_4_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(int__fold_down_5_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__int__fold_down_5_4_i3);
MR_def_label(int__fold_down_5_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(int__fold_down_5_4_i1);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(int__fold_down_5_4_i18);
	}
MR_def_label(int__fold_down_5_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(int__fold_down_5_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module73)
	MR_init_entry1(int__fold_down_5_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_down_5_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_down'/5 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_down_5_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_down_5_4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module74)
	MR_init_entry1(int__fold_down_5_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_down_5_6);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_down'/5 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_down_5_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_down_5_4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module75)
	MR_init_entry1(int__fold_down_5_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_down_5_7);
	MR_init_label3(int__fold_down_5_7,3,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_down'/5 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_down_5_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred int.fold_down/5-7", 4,
		MR_ENTRY(MR_do_fail));
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(int__fold_down_5_7_i2);
	}
	MR_fv(3) = MR_r2;
	MR_fv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_fv(2) = MR_tempr1;
	MR_fv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(int__fold_down_5_7));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__int__fold_down_5_7_i3);
MR_def_label(int__fold_down_5_7,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(4);
	MR_r2 = MR_fv(3);
	MR_r3 = MR_fv(1);
	MR_r4 = ((MR_Integer) MR_fv(2) - (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(int__fold_down_5_7,
		int__fold_down_5_7_i5);
MR_def_label(int__fold_down_5_7,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
MR_def_label(int__fold_down_5_7,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module76)
	MR_init_entry1(int__fold_down_5_8);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_down_5_8);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_down'/5 mode 8 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_down_5_8);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_down_5_7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module77)
	MR_init_entry1(int__fold_down_5_9);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_down_5_9);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_down'/5 mode 9 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_down_5_9);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_down_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module78)
	MR_init_entry1(int__fold_down_5_10);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_down_5_10);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_down'/5 mode 10 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_down_5_10);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_down_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module79)
	MR_init_entry1(fn__int__fold_down_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__fold_down_4_0);
	MR_init_label3(fn__int__fold_down_4_0,11,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_down'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__fold_down_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(fn__int__fold_down_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__int__fold_down_4_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__int__fold_down_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__int__fold_down_4_0_i3);
MR_def_label(fn__int__fold_down_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(fn__int__fold_down_4_0_i11);
	}
MR_def_label(fn__int__fold_down_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(int_module80)
	MR_init_entry1(int__fold_up2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_up2_7_0);
	MR_init_label3(int__fold_up2_7_0,11,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_up2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_up2_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(int__fold_up2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(int__fold_up2_7_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(int__fold_up2_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__int__fold_up2_7_0_i3);
MR_def_label(int__fold_up2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(int__fold_up2_7_0_i11);
	}
MR_def_label(int__fold_up2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module81)
	MR_init_entry1(int__fold_up2_7_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_up2_7_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_up2'/7 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_up2_7_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_up2_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module82)
	MR_init_entry1(int__fold_up2_7_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_up2_7_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_up2'/7 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_up2_7_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_up2_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module83)
	MR_init_entry1(int__fold_up2_7_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_up2_7_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_up2'/7 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_up2_7_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_up2_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module84)
	MR_init_entry1(int__fold_up2_7_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_up2_7_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_up2'/7 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_up2_7_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_up2_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module85)
	MR_init_entry1(int__fold_up2_7_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_up2_7_5);
	MR_init_label4(int__fold_up2_7_5,18,3,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_up2'/7 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_up2_7_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(int__fold_up2_7_5,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(int__fold_up2_7_5_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(int__fold_up2_7_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__int__fold_up2_7_5_i3);
MR_def_label(int__fold_up2_7_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(int__fold_up2_7_5_i1);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(int__fold_up2_7_5_i18);
	}
MR_def_label(int__fold_up2_7_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(int__fold_up2_7_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module86)
	MR_init_entry1(int__fold_up2_7_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_up2_7_6);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_up2'/7 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_up2_7_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_up2_7_5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module87)
	MR_init_entry1(int__fold_up2_7_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_up2_7_7);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_up2'/7 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_up2_7_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_up2_7_5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module88)
	MR_init_entry1(int__fold_up2_7_8);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_up2_7_8);
	MR_init_label3(int__fold_up2_7_8,3,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_up2'/7 mode 8 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_up2_7_8);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred int.fold_up2/7-8", 5,
		MR_ENTRY(MR_do_fail));
	if (((MR_Integer) MR_r4 > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(int__fold_up2_7_8_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_fv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_fv(3) = MR_tempr2;
	MR_fv(1) = MR_r5;
	MR_fv(4) = MR_r1;
	MR_fv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(int__fold_up2_7_8));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__int__fold_up2_7_8_i3);
MR_def_label(int__fold_up2_7_8,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_fv(5);
	MR_r3 = MR_fv(2);
	MR_r4 = ((MR_Integer) MR_fv(3) + (MR_Integer) 1);
	MR_r5 = MR_fv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_localcall_lab(int__fold_up2_7_8,
		int__fold_up2_7_8_i5);
MR_def_label(int__fold_up2_7_8,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
MR_def_label(int__fold_up2_7_8,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module89)
	MR_init_entry1(int__fold_up2_7_9);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_up2_7_9);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_up2'/7 mode 9 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_up2_7_9);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_up2_7_8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module90)
	MR_init_entry1(int__fold_down2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_down2_7_0);
	MR_init_label3(int__fold_down2_7_0,11,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_down2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_down2_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(int__fold_down2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(int__fold_down2_7_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(int__fold_down2_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__int__fold_down2_7_0_i3);
MR_def_label(int__fold_down2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(int__fold_down2_7_0_i11);
	}
MR_def_label(int__fold_down2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module91)
	MR_init_entry1(int__fold_down2_7_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_down2_7_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_down2'/7 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_down2_7_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_down2_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module92)
	MR_init_entry1(int__fold_down2_7_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_down2_7_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_down2'/7 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_down2_7_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_down2_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module93)
	MR_init_entry1(int__fold_down2_7_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_down2_7_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_down2'/7 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_down2_7_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_down2_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module94)
	MR_init_entry1(int__fold_down2_7_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_down2_7_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_down2'/7 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_down2_7_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_down2_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module95)
	MR_init_entry1(int__fold_down2_7_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_down2_7_5);
	MR_init_label4(int__fold_down2_7_5,18,3,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_down2'/7 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_down2_7_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(int__fold_down2_7_5,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(int__fold_down2_7_5_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(int__fold_down2_7_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__int__fold_down2_7_5_i3);
MR_def_label(int__fold_down2_7_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(int__fold_down2_7_5_i1);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(int__fold_down2_7_5_i18);
	}
MR_def_label(int__fold_down2_7_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(int__fold_down2_7_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module96)
	MR_init_entry1(int__fold_down2_7_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_down2_7_6);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_down2'/7 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_down2_7_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_down2_7_5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module97)
	MR_init_entry1(int__fold_down2_7_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_down2_7_7);
	MR_init_label3(int__fold_down2_7_7,3,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_down2'/7 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_down2_7_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred int.fold_down2/7-7", 5,
		MR_ENTRY(MR_do_fail));
	if (((MR_Integer) MR_r4 > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(int__fold_down2_7_7_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_fv(2) = MR_tempr1;
	MR_fv(3) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_fv(1) = MR_tempr2;
	MR_fv(4) = MR_r1;
	MR_fv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(int__fold_down2_7_7));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__int__fold_down2_7_7_i3);
MR_def_label(int__fold_down2_7_7,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_fv(5);
	MR_r3 = MR_fv(2);
	MR_r4 = MR_fv(3);
	MR_r5 = ((MR_Integer) MR_fv(1) - (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_localcall_lab(int__fold_down2_7_7,
		int__fold_down2_7_7_i5);
MR_def_label(int__fold_down2_7_7,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
MR_def_label(int__fold_down2_7_7,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module98)
	MR_init_entry1(int__fold_down2_7_8);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__fold_down2_7_8);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_down2'/7 mode 8 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__fold_down2_7_8);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(int__fold_down2_7_7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module99)
	MR_init_entry1(int__nondet_int_in_range_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__int__nondet_int_in_range_3_0);
	MR_init_label2(int__nondet_int_in_range_3_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nondet_int_in_range'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__int__nondet_int_in_range_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred int.nondet_int_in_range/3-0", 2,
		MR_ENTRY(MR_do_fail));
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(int__nondet_int_in_range_3_0_i2);
	}
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(int__nondet_int_in_range_3_0_i4);
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_r2;
	MR_succeed();
MR_def_label(int__nondet_int_in_range_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = ((MR_Integer) MR_fv(1) + (MR_Integer) 1);
	MR_r2 = MR_fv(2);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_localtailcall(int__nondet_int_in_range_3_0);
MR_def_label(int__nondet_int_in_range_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_r2)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__int_to_base_string_3_0);

MR_BEGIN_MODULE(int_module100)
	MR_init_entry1(fn__int__int_to_doc_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__int_to_doc_1_0);
	MR_init_label1(fn__int__int_to_doc_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'int_to_doc'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__int_to_doc_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		fn__int__int_to_doc_1_0_i2);
MR_def_label(fn__int__int_to_doc_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module101)
	MR_init_entry1(fn__int__quot_bits_per_int_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__quot_bits_per_int_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'quot_bits_per_int'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__quot_bits_per_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Int;
	MR_Integer	Div;
#define	MR_PROC_LABEL	mercury__fn__int__quot_bits_per_int_1_0
	Int = MR_r1;
{
#line 711 "int.m"

    Div = Int / ML_BITS_PER_INT;
;}
#line 3691 "int.c"
	MR_r1 = Div;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module102)
	MR_init_entry1(fn__int__times_bits_per_int_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__times_bits_per_int_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'times_bits_per_int'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__times_bits_per_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Int;
	MR_Integer	Result;
#define	MR_PROC_LABEL	mercury__fn__int__times_bits_per_int_1_0
	Int = MR_r1;
{
#line 719 "int.m"

    Result = Int * ML_BITS_PER_INT;
;}
#line 3726 "int.c"
	MR_r1 = Result;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module103)
	MR_init_entry1(fn__int__floor_to_multiple_of_bits_per_int_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__floor_to_multiple_of_bits_per_int_1_0);
	MR_init_label1(fn__int__floor_to_multiple_of_bits_per_int_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'floor_to_multiple_of_bits_per_int'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__floor_to_multiple_of_bits_per_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Int;
	MR_Integer	Div;
#define	MR_PROC_LABEL	mercury__fn__int__floor_to_multiple_of_bits_per_int_1_0
	Int = MR_r1;
{
#line 711 "int.m"

    Div = Int / ML_BITS_PER_INT;
;}
#line 3762 "int.c"
	MR_r2 = Div;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Int;
	MR_Integer	Result;
#define	MR_PROC_LABEL	mercury__fn__int__floor_to_multiple_of_bits_per_int_1_0
	Int = MR_r2;
{
#line 719 "int.m"

    Result = Int * ML_BITS_PER_INT;
;}
#line 3776 "int.c"
	MR_r2 = Result;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r2 <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__int__floor_to_multiple_of_bits_per_int_1_0_i2);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__fn__int__floor_to_multiple_of_bits_per_int_1_0
{
#line 703 "int.m"

    Bits = ML_BITS_PER_INT;
;}
#line 3793 "int.c"
	MR_tempr1 = Bits;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_r2 - (MR_Integer) MR_tempr1);
	MR_proceed();
	}
MR_def_label(fn__int__floor_to_multiple_of_bits_per_int_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module104)
	MR_init_entry1(fn__int__rem_bits_per_int_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__rem_bits_per_int_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rem_bits_per_int'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__rem_bits_per_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Int;
	MR_Integer	Rem;
#define	MR_PROC_LABEL	mercury__fn__int__rem_bits_per_int_1_0
	Int = MR_r1;
{
#line 727 "int.m"

    Rem = Int % ML_BITS_PER_INT;
;}
#line 3834 "int.c"
	MR_r1 = Rem;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module105)
	MR_init_entry1(fn__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_enum__enum____int__arity0______enum__to_int_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module106)
	MR_init_entry1(fn__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_enum__enum____int__arity0______enum__from_int_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(int_module107)
	MR_init_entry1(fn__f_105_110_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_105_110_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_105_110_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__int_maybe_bunch_0(void)
{
	int_module0();
	int_module1();
	int_module2();
	int_module3();
	int_module4();
	int_module5();
	int_module6();
	int_module7();
	int_module8();
	int_module9();
	int_module10();
	int_module11();
	int_module12();
	int_module13();
	int_module14();
	int_module15();
	int_module16();
	int_module17();
	int_module18();
	int_module19();
	int_module20();
	int_module21();
	int_module22();
	int_module23();
	int_module24();
	int_module25();
	int_module26();
	int_module27();
	int_module28();
	int_module29();
	int_module30();
	int_module31();
	int_module32();
	int_module33();
	int_module34();
	int_module35();
	int_module36();
	int_module37();
	int_module38();
	int_module39();
}

static void mercury__int_maybe_bunch_1(void)
{
	int_module40();
	int_module41();
	int_module42();
	int_module43();
	int_module44();
	int_module45();
	int_module46();
	int_module47();
	int_module48();
	int_module49();
	int_module50();
	int_module51();
	int_module52();
	int_module53();
	int_module54();
	int_module55();
	int_module56();
	int_module57();
	int_module58();
	int_module59();
	int_module60();
	int_module61();
	int_module62();
	int_module63();
	int_module64();
	int_module65();
	int_module66();
	int_module67();
	int_module68();
	int_module69();
	int_module70();
	int_module71();
	int_module72();
	int_module73();
	int_module74();
	int_module75();
	int_module76();
	int_module77();
	int_module78();
	int_module79();
}

static void mercury__int_maybe_bunch_2(void)
{
	int_module80();
	int_module81();
	int_module82();
	int_module83();
	int_module84();
	int_module85();
	int_module86();
	int_module87();
	int_module88();
	int_module89();
	int_module90();
	int_module91();
	int_module92();
	int_module93();
	int_module94();
	int_module95();
	int_module96();
	int_module97();
	int_module98();
	int_module99();
	int_module100();
	int_module101();
	int_module102();
	int_module103();
	int_module104();
	int_module105();
	int_module106();
	int_module107();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__int__init(void);
void mercury__int__init_type_tables(void);
void mercury__int__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__int__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__int__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__int__init_threadscope_string_table(void);
#endif

void mercury__int__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__int_maybe_bunch_0();
	mercury__int_maybe_bunch_1();
	mercury__int_maybe_bunch_2();
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_enum__enum__arity1__int__arity0__, 5) =
			MR_ENTRY_AP(fn__int__ClassMethod_for_enum__enum____int__arity0______enum__to_int_1_1_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_enum__enum__arity1__int__arity0__, 6) =
			MR_ENTRY_AP(fn__int__ClassMethod_for_enum__enum____int__arity0______enum__from_int_1_1_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__int__init_debugger();
}

void mercury__int__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__int__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__int__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__int);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__int__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__int__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
