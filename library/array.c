/*
** Automatically generated from `array.m'
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
INIT mercury__array__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "array.c"
#include "array.mh"

#line 28 "array.c"
#line 140 "io.int2"
#include "io.mh"

#line 32 "array.c"
#line 150 "io.int2"
#include "time.mh"

#line 36 "array.c"
#line 151 "io.int2"
#include "string.mh"

#line 40 "array.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 44 "array.c"
#line 21 "stm_builtin.int2"
#include "stm_builtin.mh"

#line 48 "array.c"
#line 35 "store.int2"
#include "store.mh"

#line 52 "array.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 56 "array.c"
#line 4 "char.opt"
#include "char.mh"

#line 60 "array.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 64 "array.c"
#line 157 "io.opt"
#include "dir.mh"

#line 68 "array.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 72 "array.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 76 "array.c"
#line 3 "float.opt"
#include "float.mh"

#line 80 "array.c"
#line 3 "math.opt"
#include "math.mh"

#line 84 "array.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 88 "array.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 92 "array.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 96 "array.c"
#line 4 "int.opt"
#include "int.mh"

#line 100 "array.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 104 "array.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 108 "array.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 112 "array.c"
#line 113 "array.c"
#ifndef ARRAY_DECL_GUARD
#define ARRAY_DECL_GUARD

#line 117 "array.c"
#line 861 "array.m"

#include "mercury_heap.h"             /* for MR_maybe_record_allocation() */
#include "mercury_library_types.h"    /* for MR_ArrayPtr */

/*
** We do not yet record term sizes for arrays in term size profiling
** grades. Doing so would require
**
** - modifying ML_alloc_array to allocate an extra word for the size;
** - modifying all the predicates that call ML_alloc_array to compute the
**   size of the array (the sum of the sizes of the elements and the size of
**   the array itself);
** - modifying all the predicates that update array elements to compute the
**   difference between the sizes of the terms being added to and deleted from
**   the array, and updating the array size accordingly.
*/

#define ML_alloc_array(newarray, arraysize, alloc_id)                       do {                                                                        MR_Word newarray_word;                                                  MR_offset_incr_hp_msg(newarray_word, 0, (arraysize),                        alloc_id, "array.array/1");                                       (newarray) = (MR_ArrayPtr) newarray_word;                           } while (0)

#line 138 "array.c"
#line 887 "array.m"

void ML_init_array(MR_ArrayPtr, MR_Integer size, MR_Word item);

#line 143 "array.c"
#line 1697 "array.m"

extern void
ML_resize_array(MR_ArrayPtr new_array, MR_ArrayPtr old_array,
    MR_Integer array_size, MR_Word item);

#line 150 "array.c"
#line 1794 "array.m"

extern void
ML_shrink_array(MR_ArrayPtr array, MR_ArrayPtr old_array,
    MR_Integer array_size);

#line 157 "array.c"
#line 1895 "array.m"

extern void
ML_copy_array(MR_ArrayPtr array, MR_ConstArrayPtr old_array);

#line 163 "array.c"
#line 164 "array.c"

#endif
#line 167 "array.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_String f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Integer f1;
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Word * f1;
	MR_Integer f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Unsigned f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_array__type_ctor_info_array_1,
	mercury_data_array__type_ctor_info_index_out_of_bounds_0;
MR_decl_label4(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0, 12,3,4,2)
MR_decl_label4(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0, 12,3,4,2)
MR_decl_label4(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0, 12,3,4,2)
MR_decl_label4(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0, 12,3,4,2)
MR_decl_label10(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0, 48,2,4,6,7,8,9,11,14,13)
MR_decl_label3(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0, 17,16,19)
MR_decl_label10(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0, 49,2,4,6,7,8,9,12,15,14)
MR_decl_label3(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0, 18,17,20)
MR_decl_label10(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0, 51,4,5,3,9,10,11,12,14,15)
MR_decl_label5(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0, 16,7,8,18,19)
MR_decl_label10(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0, 52,4,5,3,9,10,11,12,15,16)
MR_decl_label5(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0, 17,7,8,19,20)
MR_decl_label10(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0, 52,4,5,3,9,10,11,12,14,15)
MR_decl_label6(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0, 16,7,8,18,19,21)
MR_decl_label10(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0, 53,4,5,3,9,10,11,12,15,16)
MR_decl_label6(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0, 17,7,8,19,20,22)
MR_decl_label10(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0, 46,2,3,11,12,10,7,5,17,1)
MR_decl_label10(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0, 47,21,2,5,7,3,10,11,12,14)
MR_decl_label1(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0, 16)
MR_decl_label3(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_0, 10,2,3)
MR_decl_label1(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_95_91_49_93_95_48_4_0, 3)
MR_decl_label1(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_4_0, 3)
MR_decl_label10(array__approx_binary_search_2_6_0, 46,2,3,11,12,10,7,5,17,1)
MR_decl_label4(array__array_compare_3_0, 2,3,5,25)
MR_decl_label1(array__array_equal_2_0, 1)
MR_decl_label4(array__binary_search_3_0, 2,4,5,1)
MR_decl_label4(array__binary_search_4_0, 2,4,5,1)
MR_decl_label1(array__bounds_checks_0_0, 1)
MR_decl_label10(array__bsearch_2_6_0, 47,21,2,5,7,3,10,11,12,14)
MR_decl_label1(array__bsearch_2_6_0, 16)
MR_decl_label6(array__compare_elements_5_0, 17,2,3,4,5,20)
MR_decl_label4(array__copy_subarray_6_0, 12,3,4,2)
MR_decl_label4(array__copy_subarray_reverse_6_0, 12,3,4,2)
MR_decl_label3(array__do_foldl2_8_0, 10,2,3)
MR_decl_label3(array__do_foldl2_8_1, 10,2,3)
MR_decl_label3(array__do_foldl2_8_2, 10,2,3)
MR_decl_label4(array__do_foldl2_8_3, 18,2,3,1)
MR_decl_label4(array__do_foldl2_8_4, 18,2,3,1)
MR_decl_label4(array__do_foldl2_8_5, 18,2,3,1)
MR_decl_label3(array__do_foldl3_10_0, 10,2,3)
MR_decl_label3(array__do_foldl3_10_1, 10,2,3)
MR_decl_label3(array__do_foldl3_10_2, 10,2,3)
MR_decl_label4(array__do_foldl3_10_3, 18,2,3,1)
MR_decl_label4(array__do_foldl3_10_4, 18,2,3,1)
MR_decl_label4(array__do_foldl3_10_5, 18,2,3,1)
MR_decl_label3(array__do_foldl4_12_0, 10,2,3)
MR_decl_label3(array__do_foldl4_12_1, 10,2,3)
MR_decl_label3(array__do_foldl4_12_2, 10,2,3)
MR_decl_label4(array__do_foldl4_12_3, 18,2,3,1)
MR_decl_label4(array__do_foldl4_12_4, 18,2,3,1)
MR_decl_label4(array__do_foldl4_12_5, 18,2,3,1)
MR_decl_label3(array__do_foldl5_14_0, 10,2,3)
MR_decl_label3(array__do_foldl5_14_1, 10,2,3)
MR_decl_label3(array__do_foldl5_14_2, 10,2,3)
MR_decl_label4(array__do_foldl5_14_3, 18,2,3,1)
MR_decl_label4(array__do_foldl5_14_4, 18,2,3,1)
MR_decl_label4(array__do_foldl5_14_5, 18,2,3,1)
MR_decl_label3(array__do_foldl_pred_6_0, 10,2,3)
MR_decl_label3(array__do_foldl_pred_6_1, 10,2,3)
MR_decl_label3(array__do_foldl_pred_6_2, 10,2,3)
MR_decl_label4(array__do_foldl_pred_6_3, 18,2,3,1)
MR_decl_label4(array__do_foldl_pred_6_4, 18,2,3,1)
MR_decl_label4(array__do_foldl_pred_6_5, 18,2,3,1)
MR_decl_label3(array__do_foldr2_8_0, 10,2,3)
MR_decl_label3(array__do_foldr2_8_1, 10,2,3)
MR_decl_label3(array__do_foldr2_8_2, 10,2,3)
MR_decl_label4(array__do_foldr2_8_3, 18,2,3,1)
MR_decl_label4(array__do_foldr2_8_4, 18,2,3,1)
MR_decl_label4(array__do_foldr2_8_5, 18,2,3,1)
MR_decl_label3(array__do_foldr3_10_0, 10,2,3)
MR_decl_label3(array__do_foldr3_10_1, 10,2,3)
MR_decl_label3(array__do_foldr3_10_2, 10,2,3)
MR_decl_label4(array__do_foldr3_10_3, 18,2,3,1)
MR_decl_label4(array__do_foldr3_10_4, 18,2,3,1)
MR_decl_label4(array__do_foldr3_10_5, 18,2,3,1)
MR_decl_label3(array__do_foldr4_12_0, 10,2,3)
MR_decl_label3(array__do_foldr4_12_1, 10,2,3)
MR_decl_label3(array__do_foldr4_12_2, 10,2,3)
MR_decl_label4(array__do_foldr4_12_3, 18,2,3,1)
MR_decl_label4(array__do_foldr4_12_4, 18,2,3,1)
MR_decl_label4(array__do_foldr4_12_5, 18,2,3,1)
MR_decl_label3(array__do_foldr5_14_0, 10,2,3)
MR_decl_label3(array__do_foldr5_14_1, 10,2,3)
MR_decl_label3(array__do_foldr5_14_2, 10,2,3)
MR_decl_label4(array__do_foldr5_14_3, 18,2,3,1)
MR_decl_label4(array__do_foldr5_14_4, 18,2,3,1)
MR_decl_label4(array__do_foldr5_14_5, 18,2,3,1)
MR_decl_label3(array__do_foldr_pred_6_0, 10,2,3)
MR_decl_label3(array__do_foldr_pred_6_1, 10,2,3)
MR_decl_label3(array__do_foldr_pred_6_2, 10,2,3)
MR_decl_label4(array__do_foldr_pred_6_3, 18,2,3,1)
MR_decl_label4(array__do_foldr_pred_6_4, 18,2,3,1)
MR_decl_label4(array__do_foldr_pred_6_5, 18,2,3,1)
MR_decl_label3(array__dynamic_cast_to_array_2_0, 3,6,1)
MR_decl_label6(array__equal_elements_4_0, 19,3,4,5,9,1)
MR_decl_label2(array__fetch_items_4_0, 2,3)
MR_decl_label2(array__from_list_2_0, 13,4)
MR_decl_label6(array__generate_foldl_5_0, 2,3,5,7,9,8)
MR_decl_label6(array__generate_foldl_5_1, 2,3,5,7,9,8)
MR_decl_label6(array__generate_foldl_5_2, 2,3,5,7,9,8)
MR_decl_label8(array__generate_foldl_5_3, 2,3,5,7,9,19,8,1)
MR_decl_label8(array__generate_foldl_5_4, 2,3,5,7,9,19,8,1)
MR_decl_label8(array__generate_foldl_5_5, 2,3,5,7,9,19,8,1)
MR_decl_label3(array__generate_foldl_2_7_0, 11,3,2)
MR_decl_label3(array__generate_foldl_2_7_1, 11,3,2)
MR_decl_label3(array__generate_foldl_2_7_2, 11,3,2)
MR_decl_label4(array__generate_foldl_2_7_3, 18,3,2,1)
MR_decl_label4(array__generate_foldl_2_7_4, 18,3,2,1)
MR_decl_label4(array__generate_foldl_2_7_5, 18,3,2,1)
MR_decl_label1(array__in_bounds_2_0, 1)
MR_decl_label1(array__init_3_0, 2)
MR_decl_label2(array__lookup_3_0, 7,3)
MR_decl_label2(array__map_3_0, 3,2)
MR_decl_label3(array__map_2_6_0, 10,2,3)
MR_decl_label4(array__map_corresponding_foldl_6_0, 21,3,4,20)
MR_decl_label4(array__map_corresponding_foldl_6_1, 21,3,4,20)
MR_decl_label4(array__map_corresponding_foldl_6_2, 21,3,4,20)
MR_decl_label5(array__map_corresponding_foldl_6_3, 29,3,5,27,1)
MR_decl_label3(array__map_corresponding_foldl_2_9_0, 11,3,2)
MR_decl_label3(array__map_corresponding_foldl_2_9_1, 11,3,2)
MR_decl_label3(array__map_corresponding_foldl_2_9_2, 11,3,2)
MR_decl_label4(array__map_corresponding_foldl_2_9_3, 18,3,2,1)
MR_decl_label4(array__map_foldl_5_0, 21,3,4,20)
MR_decl_label4(array__map_foldl_5_1, 21,3,4,20)
MR_decl_label4(array__map_foldl_5_2, 21,3,4,20)
MR_decl_label5(array__map_foldl_5_3, 29,3,5,27,1)
MR_decl_label3(array__map_foldl_2_7_0, 12,4,3)
MR_decl_label3(array__map_foldl_2_7_1, 12,4,3)
MR_decl_label3(array__map_foldl_2_7_2, 12,4,3)
MR_decl_label4(array__map_foldl_2_7_3, 19,4,3,1)
MR_decl_label1(array__member_2_0, 1)
MR_decl_label10(array__merge_subarrays_8_0, 37,2,4,6,7,8,11,10,14,13)
MR_decl_label1(array__merge_subarrays_8_0, 16)
MR_decl_label10(array__out_of_bounds_error_3_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label9(array__permutation_2_8_0, 36,2,3,5,10,11,12,13,14)
MR_decl_label10(array__samsort_down_8_0, 39,4,5,3,9,10,11,12,7,8)
MR_decl_label2(array__samsort_down_8_0, 14,15)
MR_decl_label10(array__samsort_up_8_0, 40,4,5,3,9,10,11,12,7,8)
MR_decl_label3(array__samsort_up_8_0, 14,15,17)
MR_decl_label1(array__semidet_lookup_3_0, 1)
MR_decl_label1(array__semidet_set_4_0, 1)
MR_decl_label2(array__semidet_slow_set_4_0, 2,1)
MR_decl_label2(array__set_4_0, 7,3)
MR_decl_label2(array__shrink_3_0, 2,4)
MR_decl_label2(array__svset_4_0, 7,3)
MR_decl_label5(fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0, 3,5,6,8,10)
MR_decl_label1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_3_0, 2)
MR_decl_label1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_3_0, 2)
MR_decl_label8(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0, 31,5,6,7,8,10,2,3)
MR_decl_label8(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0, 32,5,6,7,8,11,2,3)
MR_decl_label1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_0, 2)
MR_decl_label1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_1_0, 2)
MR_decl_label1(fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_0, 2)
MR_decl_label5(fn__array__array_to_doc_1_0, 4,18,19,21,23)
MR_decl_label3(fn__array__do_foldl_func_5_0, 10,2,3)
MR_decl_label3(fn__array__do_foldl_func_5_1, 10,2,3)
MR_decl_label3(fn__array__do_foldr_func_5_0, 10,2,3)
MR_decl_label3(fn__array__do_foldr_func_5_1, 10,2,3)
MR_decl_label2(fn__array__from_reverse_list_1_0, 13,4)
MR_decl_label6(fn__array__generate_2_0, 2,3,5,7,9,8)
MR_decl_label3(fn__array__generate_2_4_0, 11,3,2)
MR_decl_label1(fn__array__init_2_0, 2)
MR_decl_label2(fn__array__map_2_0, 3,2)
MR_decl_label1(fn__array__samsort_subarray_3_0, 2)
MR_decl_label6(fn__array__search_until_4_0, 19,5,6,7,2,3)
MR_decl_label1(fn__array__sort_1_0, 2)
MR_decl_label3(fn__array__swap_elems_3_0, 2,3,4)
MR_decl_label2(__Unify___array__array_1_0, 6,1)
MR_decl_label1(__Unify___array__index_out_of_bounds_0_0, 4)
MR_decl_label2(__Compare___array__array_1_0, 3,2)
MR_decl_label3(__Compare___array__index_out_of_bounds_0_0, 4,12,5)
MR_def_extern_entry(array__make_empty_array_1_0)
MR_def_extern_entry(fn__array__make_empty_array_0_0)
MR_def_extern_entry(array__init_2_3_0)
MR_def_extern_entry(array__init_3_0)
MR_def_extern_entry(fn__array__init_2_0)
MR_def_extern_entry(fn__array__unsafe_init_3_0)
MR_def_extern_entry(array__unsafe_set_4_0)
MR_def_extern_entry(array__from_list_2_0)
MR_def_extern_entry(fn__array__array_1_0)
MR_def_extern_entry(fn__array__generate_2_4_0)
MR_def_extern_entry(fn__array__generate_2_0)
MR_def_extern_entry(array__generate_foldl_2_7_0)
MR_def_extern_entry(array__generate_foldl_2_7_1)
MR_def_extern_entry(array__generate_foldl_2_7_2)
MR_def_extern_entry(array__generate_foldl_2_7_3)
MR_def_extern_entry(array__generate_foldl_2_7_4)
MR_def_extern_entry(array__generate_foldl_2_7_5)
MR_def_extern_entry(array__generate_foldl_5_0)
MR_def_extern_entry(array__generate_foldl_5_1)
MR_def_extern_entry(array__generate_foldl_5_2)
MR_def_extern_entry(array__generate_foldl_5_3)
MR_def_extern_entry(array__generate_foldl_5_4)
MR_def_extern_entry(array__generate_foldl_5_5)
MR_def_extern_entry(array__min_2_0)
MR_def_extern_entry(fn__array__min_1_0)
MR_def_extern_entry(fn__array__least_index_1_0)
MR_def_extern_entry(array__max_2_0)
MR_def_extern_entry(fn__array__max_1_0)
MR_def_extern_entry(fn__array__greatest_index_1_0)
MR_def_extern_entry(array__size_2_0)
MR_def_extern_entry(fn__array__size_1_0)
MR_def_extern_entry(array__bounds_3_0)
MR_def_extern_entry(array__in_bounds_2_0)
MR_def_extern_entry(array__unsafe_lookup_3_0)
MR_def_extern_entry(array__bounds_checks_0_0)
MR_def_extern_entry(array__out_of_bounds_error_3_0)
MR_def_extern_entry(array__lookup_3_0)
MR_def_extern_entry(fn__array__lookup_2_0)
MR_def_extern_entry(array__semidet_lookup_3_0)
MR_def_extern_entry(array__set_4_0)
MR_def_extern_entry(fn__array__set_3_0)
MR_def_extern_entry(array__unsafe_svset_4_0)
MR_def_extern_entry(array__svset_4_0)
MR_def_extern_entry(array__semidet_set_4_0)
MR_def_extern_entry(array__copy_2_0)
MR_def_extern_entry(array__slow_set_4_0)
MR_def_extern_entry(fn__array__slow_set_3_0)
MR_def_extern_entry(array__semidet_slow_set_4_0)
MR_def_extern_entry(fn__array__elem_2_0)
MR_def_extern_entry(fn__array__unsafe_elem_2_0)
MR_def_extern_entry(fn__f_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0)
MR_def_extern_entry(fn__f_97_114_114_97_121_95_95_117_110_115_97_102_101_95_101_108_101_109_32_58_61_3_0)
MR_def_extern_entry(array__member_2_0)
MR_def_extern_entry(fn__array__copy_1_0)
MR_def_extern_entry(array__resize_4_0)
MR_def_extern_entry(fn__array__resize_3_0)
MR_decl_static(array__shrink_2_3_0)
MR_def_extern_entry(array__shrink_3_0)
MR_def_extern_entry(fn__array__shrink_2_0)
MR_def_extern_entry(fn__array__from_list_1_0)
MR_def_extern_entry(fn__array__from_reverse_list_1_0)
MR_def_extern_entry(fn__array__do_foldr_func_5_0)
MR_def_extern_entry(fn__array__do_foldr_func_5_1)
MR_def_extern_entry(array__fetch_items_4_0)
MR_def_extern_entry(array__to_list_2_0)
MR_def_extern_entry(fn__array__to_list_1_0)
MR_def_extern_entry(fn__array__fetch_items_3_0)
MR_def_extern_entry(array__bsearch_2_6_0)
MR_def_extern_entry(array__bsearch_4_0)
MR_def_extern_entry(fn__array__bsearch_3_0)
MR_def_extern_entry(array__approx_binary_search_2_6_0)
MR_def_extern_entry(array__approx_binary_search_4_0)
MR_def_extern_entry(array__approx_binary_search_3_0)
MR_def_extern_entry(array__binary_search_4_0)
MR_def_extern_entry(array__binary_search_3_0)
MR_def_extern_entry(array__map_2_6_0)
MR_def_extern_entry(array__map_3_0)
MR_def_extern_entry(fn__array__map_2_0)
MR_decl_static(array__compare_elements_5_0)
MR_def_extern_entry(array__array_compare_3_0)
MR_def_extern_entry(fn__array__array_compare_2_0)
MR_decl_static(fn__array__search_until_4_0)
MR_decl_static(array__copy_subarray_6_0)
MR_decl_static(array__copy_subarray_reverse_6_0)
MR_decl_static(array__merge_subarrays_8_0)
MR_decl_static(array__samsort_down_8_0)
MR_def_extern_entry(array__samsort_up_8_0)
MR_def_extern_entry(fn__array__samsort_subarray_3_0)
MR_def_extern_entry(fn__array__sort_1_0)
MR_def_extern_entry(fn__array__do_foldl_func_5_0)
MR_def_extern_entry(fn__array__do_foldl_func_5_1)
MR_def_extern_entry(fn__array__foldl_3_0)
MR_def_extern_entry(fn__array__foldl_3_1)
MR_def_extern_entry(array__do_foldl_pred_6_0)
MR_def_extern_entry(array__do_foldl_pred_6_1)
MR_def_extern_entry(array__do_foldl_pred_6_2)
MR_def_extern_entry(array__do_foldl_pred_6_3)
MR_def_extern_entry(array__do_foldl_pred_6_4)
MR_def_extern_entry(array__do_foldl_pred_6_5)
MR_def_extern_entry(array__foldl_4_0)
MR_def_extern_entry(array__foldl_4_1)
MR_def_extern_entry(array__foldl_4_2)
MR_def_extern_entry(array__foldl_4_3)
MR_def_extern_entry(array__foldl_4_4)
MR_def_extern_entry(array__foldl_4_5)
MR_def_extern_entry(array__do_foldl2_8_0)
MR_def_extern_entry(array__do_foldl2_8_1)
MR_def_extern_entry(array__do_foldl2_8_2)
MR_def_extern_entry(array__do_foldl2_8_3)
MR_def_extern_entry(array__do_foldl2_8_4)
MR_def_extern_entry(array__do_foldl2_8_5)
MR_def_extern_entry(array__foldl2_6_0)
MR_def_extern_entry(array__foldl2_6_1)
MR_def_extern_entry(array__foldl2_6_2)
MR_def_extern_entry(array__foldl2_6_3)
MR_def_extern_entry(array__foldl2_6_4)
MR_def_extern_entry(array__foldl2_6_5)
MR_def_extern_entry(array__do_foldl3_10_0)
MR_def_extern_entry(array__do_foldl3_10_1)
MR_def_extern_entry(array__do_foldl3_10_2)
MR_def_extern_entry(array__do_foldl3_10_3)
MR_def_extern_entry(array__do_foldl3_10_4)
MR_def_extern_entry(array__do_foldl3_10_5)
MR_def_extern_entry(array__foldl3_8_0)
MR_def_extern_entry(array__foldl3_8_1)
MR_def_extern_entry(array__foldl3_8_2)
MR_def_extern_entry(array__foldl3_8_3)
MR_def_extern_entry(array__foldl3_8_4)
MR_def_extern_entry(array__foldl3_8_5)
MR_def_extern_entry(array__do_foldl4_12_0)
MR_def_extern_entry(array__do_foldl4_12_1)
MR_def_extern_entry(array__do_foldl4_12_2)
MR_def_extern_entry(array__do_foldl4_12_3)
MR_def_extern_entry(array__do_foldl4_12_4)
MR_def_extern_entry(array__do_foldl4_12_5)
MR_def_extern_entry(array__foldl4_10_0)
MR_def_extern_entry(array__foldl4_10_1)
MR_def_extern_entry(array__foldl4_10_2)
MR_def_extern_entry(array__foldl4_10_3)
MR_def_extern_entry(array__foldl4_10_4)
MR_def_extern_entry(array__foldl4_10_5)
MR_def_extern_entry(array__do_foldl5_14_0)
MR_def_extern_entry(array__do_foldl5_14_1)
MR_def_extern_entry(array__do_foldl5_14_2)
MR_def_extern_entry(array__do_foldl5_14_3)
MR_def_extern_entry(array__do_foldl5_14_4)
MR_def_extern_entry(array__do_foldl5_14_5)
MR_def_extern_entry(array__foldl5_12_0)
MR_def_extern_entry(array__foldl5_12_1)
MR_def_extern_entry(array__foldl5_12_2)
MR_def_extern_entry(array__foldl5_12_3)
MR_def_extern_entry(array__foldl5_12_4)
MR_def_extern_entry(array__foldl5_12_5)
MR_def_extern_entry(fn__array__foldr_3_0)
MR_def_extern_entry(fn__array__foldr_3_1)
MR_def_extern_entry(array__do_foldr_pred_6_0)
MR_def_extern_entry(array__do_foldr_pred_6_1)
MR_def_extern_entry(array__do_foldr_pred_6_2)
MR_def_extern_entry(array__do_foldr_pred_6_3)
MR_def_extern_entry(array__do_foldr_pred_6_4)
MR_def_extern_entry(array__do_foldr_pred_6_5)
MR_def_extern_entry(array__foldr_4_0)
MR_def_extern_entry(array__foldr_4_1)
MR_def_extern_entry(array__foldr_4_2)
MR_def_extern_entry(array__foldr_4_3)
MR_def_extern_entry(array__foldr_4_4)
MR_def_extern_entry(array__foldr_4_5)
MR_def_extern_entry(array__do_foldr2_8_0)
MR_def_extern_entry(array__do_foldr2_8_1)
MR_def_extern_entry(array__do_foldr2_8_2)
MR_def_extern_entry(array__do_foldr2_8_3)
MR_def_extern_entry(array__do_foldr2_8_4)
MR_def_extern_entry(array__do_foldr2_8_5)
MR_def_extern_entry(array__foldr2_6_0)
MR_def_extern_entry(array__foldr2_6_1)
MR_def_extern_entry(array__foldr2_6_2)
MR_def_extern_entry(array__foldr2_6_3)
MR_def_extern_entry(array__foldr2_6_4)
MR_def_extern_entry(array__foldr2_6_5)
MR_def_extern_entry(array__do_foldr3_10_0)
MR_def_extern_entry(array__do_foldr3_10_1)
MR_def_extern_entry(array__do_foldr3_10_2)
MR_def_extern_entry(array__do_foldr3_10_3)
MR_def_extern_entry(array__do_foldr3_10_4)
MR_def_extern_entry(array__do_foldr3_10_5)
MR_def_extern_entry(array__foldr3_8_0)
MR_def_extern_entry(array__foldr3_8_1)
MR_def_extern_entry(array__foldr3_8_2)
MR_def_extern_entry(array__foldr3_8_3)
MR_def_extern_entry(array__foldr3_8_4)
MR_def_extern_entry(array__foldr3_8_5)
MR_def_extern_entry(array__do_foldr4_12_0)
MR_def_extern_entry(array__do_foldr4_12_1)
MR_def_extern_entry(array__do_foldr4_12_2)
MR_def_extern_entry(array__do_foldr4_12_3)
MR_def_extern_entry(array__do_foldr4_12_4)
MR_def_extern_entry(array__do_foldr4_12_5)
MR_def_extern_entry(array__foldr4_10_0)
MR_def_extern_entry(array__foldr4_10_1)
MR_def_extern_entry(array__foldr4_10_2)
MR_def_extern_entry(array__foldr4_10_3)
MR_def_extern_entry(array__foldr4_10_4)
MR_def_extern_entry(array__foldr4_10_5)
MR_def_extern_entry(array__do_foldr5_14_0)
MR_def_extern_entry(array__do_foldr5_14_1)
MR_def_extern_entry(array__do_foldr5_14_2)
MR_def_extern_entry(array__do_foldr5_14_3)
MR_def_extern_entry(array__do_foldr5_14_4)
MR_def_extern_entry(array__do_foldr5_14_5)
MR_def_extern_entry(array__foldr5_12_0)
MR_def_extern_entry(array__foldr5_12_1)
MR_def_extern_entry(array__foldr5_12_2)
MR_def_extern_entry(array__foldr5_12_3)
MR_def_extern_entry(array__foldr5_12_4)
MR_def_extern_entry(array__foldr5_12_5)
MR_def_extern_entry(array__map_foldl_2_7_0)
MR_def_extern_entry(array__map_foldl_2_7_1)
MR_def_extern_entry(array__map_foldl_2_7_2)
MR_def_extern_entry(array__map_foldl_2_7_3)
MR_def_extern_entry(array__map_foldl_5_0)
MR_def_extern_entry(array__map_foldl_5_1)
MR_def_extern_entry(array__map_foldl_5_2)
MR_def_extern_entry(array__map_foldl_5_3)
MR_def_extern_entry(array__map_corresponding_foldl_2_9_0)
MR_def_extern_entry(array__map_corresponding_foldl_2_9_1)
MR_def_extern_entry(array__map_corresponding_foldl_2_9_2)
MR_def_extern_entry(array__map_corresponding_foldl_2_9_3)
MR_def_extern_entry(array__map_corresponding_foldl_6_0)
MR_def_extern_entry(array__map_corresponding_foldl_6_1)
MR_def_extern_entry(array__map_corresponding_foldl_6_2)
MR_def_extern_entry(array__map_corresponding_foldl_6_3)
MR_def_extern_entry(fn__array__append_2_0)
MR_def_extern_entry(fn__array__swap_elems_3_0)
MR_def_extern_entry(array__permutation_2_8_0)
MR_def_extern_entry(array__random_permutation_4_0)
MR_def_extern_entry(fn__array__array_to_doc_1_0)
MR_def_extern_entry(array__dynamic_cast_to_array_2_0)
MR_decl_static(array__equal_elements_4_0)
MR_def_extern_entry(array__array_equal_2_0)
MR_def_extern_entry(__Unify___array__array_1_0)
MR_def_extern_entry(__Compare___array__array_1_0)
MR_def_extern_entry(__Unify___array__index_out_of_bounds_0_0)
MR_def_extern_entry(__Compare___array__index_out_of_bounds_0_0)
MR_decl_static(fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0)
MR_decl_static(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0)
MR_decl_static(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0)
MR_decl_static(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0)
MR_decl_static(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0)
MR_decl_static(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0)
MR_decl_static(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0)
MR_decl_static(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0)
MR_decl_static(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0)
MR_decl_static(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0)
MR_decl_static(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0)
MR_def_extern_entry(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0)
MR_def_extern_entry(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0)
MR_def_extern_entry(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_3_0)
MR_def_extern_entry(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_3_0)
MR_def_extern_entry(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_1_0)
MR_def_extern_entry(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_0)
MR_decl_static(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_114_105_110_107_95_50_95_95_91_49_93_95_48_3_0)
MR_decl_static(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_95_91_49_93_95_48_4_0)
MR_decl_static(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_4_0)
MR_decl_static(fn__f_97_114_114_97_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_0)
MR_decl_static(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0)
MR_decl_static(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0)
MR_decl_static(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_0)

static const struct mercury_type_0 mercury_common_0[5] =
{
{
MR_string_const("array([", 7)
},
{
MR_string_const("", 0)
},
{
MR_string_const("])", 2)
},
{
MR_string_const("  ", 2)
},
{
MR_string_const(", ", 2)
},
};

static const struct mercury_type_1 mercury_common_1[11] =
{
{
{
MR_TAG_COMMON(1,0,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,0,1),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(1,0,0),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_TAG_COMMON(3,2,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,3,0),
MR_TAG_COMMON(1,1,3)
}
},
{
{
MR_TAG_COMMON(3,2,0),
MR_TAG_COMMON(1,1,4)
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,0,4),
MR_TAG_COMMON(1,1,6)
}
},
{
{
MR_TAG_COMMON(3,2,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,3,2),
MR_TAG_COMMON(1,1,8)
}
},
{
{
MR_TAG_COMMON(3,2,2),
MR_TAG_COMMON(1,1,9)
}
},
};

static const struct mercury_type_2 mercury_common_2[4] =
{
{
4,
MR_TAG_COMMON(1,0,3)
},
{
4,
MR_tbmkword(0, 2)
},
{
4,
MR_tbmkword(0, 0)
},
{
4,
MR_tbmkword(0, 1)
},
};

static const struct mercury_type_3 mercury_common_3[4] =
{
{
MR_TAG_COMMON(1,1,2)
},
{
MR_TAG_COMMON(1,1,5)
},
{
MR_TAG_COMMON(1,1,7)
},
{
MR_TAG_COMMON(1,1,10)
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
MR_CTOR1_ADDR(array, array),
1
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
1,
33
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__array__array_to_doc_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pretty_printer__type_ctor_info_doc_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__array__array_to_doc_1_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0_2;
static const struct mercury_type_6 mercury_common_6[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__array__array_to_doc_1_0_1,
MR_COMMON(5,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_INT_CTOR_ADDR,
MR_COMMON(4,0),
MR_CTOR0_ADDR(pretty_printer, doc)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__array__array_to_doc_1_0_2,
MR_COMMON(5,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_INT_CTOR_ADDR,
MR_COMMON(4,0),
MR_CTOR0_ADDR(pretty_printer, doc)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0_1,
MR_COMMON(5,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_INT_CTOR_ADDR,
MR_COMMON(4,0),
MR_CTOR0_ADDR(pretty_printer, doc)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0_2,
MR_COMMON(5,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_INT_CTOR_ADDR,
MR_COMMON(4,0),
MR_CTOR0_ADDR(pretty_printer, doc)
}
},
};

const MR_TypeCtorInfo_Struct mercury_data_array__type_ctor_info_array_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_ARRAY,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___array__array_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___array__array_1_0)),
	"array",
	"array",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_NotagFunctorDesc mercury_data_array__notag_functor_desc_index_out_of_bounds_0 = {
	"index_out_of_bounds",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	NULL
};

const MR_Integer mercury_data_array__functor_number_map_index_out_of_bounds_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_array__type_ctor_info_index_out_of_bounds_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___array__index_out_of_bounds_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___array__index_out_of_bounds_0_0)),
	"array",
	"index_out_of_bounds",
	{ (void *)&mercury_data_array__notag_functor_desc_index_out_of_bounds_0 },
	{ (void *)&mercury_data_array__notag_functor_desc_index_out_of_bounds_0 },
	1,
	4,
	mercury_data_array__functor_number_map_index_out_of_bounds_0
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0_2 = {
{
MR_FUNCTION,
"array",
"array",
"lambda_array_m_2916",
4,
0
},
"array",
"array.m",
2916,
"33"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0_1 = {
{
MR_FUNCTION,
"array",
"array",
"lambda_array_m_2916",
4,
0
},
"array",
"array.m",
2916,
"33"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__array__array_to_doc_1_0_2 = {
{
MR_FUNCTION,
"array",
"array",
"lambda_array_m_2916",
4,
0
},
"array",
"array.m",
2916,
"33"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__array__array_to_doc_1_0_1 = {
{
MR_FUNCTION,
"array",
"array",
"lambda_array_m_2916",
4,
0
},
"array",
"array.m",
2916,
"33"
};



MR_BEGIN_MODULE(array_module0)
	MR_init_entry1(array__make_empty_array_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__make_empty_array_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_empty_array'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__make_empty_array_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__make_empty_array_1_0
{
#line 1198 "array.m"

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);
;}
#line 1048 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module1)
	MR_init_entry1(fn__array__make_empty_array_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__make_empty_array_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_empty_array'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__make_empty_array_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__array__make_empty_array_0_0
{
#line 1198 "array.m"

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);
;}
#line 1082 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module2)
	MR_init_entry1(array__init_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__init_2_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__init_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	Item;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__init_2_3_0
	Size = MR_r2;
	Item = MR_r3;
{
#line 1186 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);
;}
#line 1120 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(array_module3)
	MR_init_entry1(array__init_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__init_3_0);
	MR_init_label1(array__init_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__init_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(array__init_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("array.init: negative size", 25);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(array__init_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	Item;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__init_3_0
	Size = MR_r2;
	Item = MR_r3;
{
#line 1186 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);
;}
#line 1167 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module4)
	MR_init_entry1(fn__array__init_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__init_2_0);
	MR_init_label1(fn__array__init_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__init_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(fn__array__init_2_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("array.init: negative size", 25);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(fn__array__init_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	Item;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__array__init_2_0
	Size = MR_r2;
	Item = MR_r3;
{
#line 1186 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);
;}
#line 1213 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module5)
	MR_init_entry1(fn__array__unsafe_init_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__unsafe_init_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_init'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__unsafe_init_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	FirstElem;
	MR_Integer	IndexToSet;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__array__unsafe_init_3_0
	Size = MR_r2;
	FirstElem = MR_r3;
	IndexToSet = MR_r4;
{
#line 1272 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */ 
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;    
        Array->elements[IndexToSet] = FirstElem;
    #endif

;}
#line 1265 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module6)
	MR_init_entry1(array__unsafe_set_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__unsafe_set_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__unsafe_set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__unsafe_set_4_0
	Index = MR_r2;
	Item = MR_r3;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array0);
{
#line 1603 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 1305 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_3_0);

MR_BEGIN_MODULE(array_module7)
	MR_init_entry1(array__from_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__from_list_2_0);
	MR_init_label2(array__from_list_2_0,13,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__from_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(array__from_list_2_0_i13);
	}
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__from_list_2_0
{
#line 1198 "array.m"

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);
;}
#line 1344 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(array__from_list_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		array__from_list_2_0_i4);
MR_def_label(array__from_list_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	FirstElem;
	MR_Integer	IndexToSet;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__from_list_2_0
	Size = MR_r1;
	FirstElem = MR_sv(1);
	IndexToSet = (MR_Integer) 0;
{
#line 1272 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */ 
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;    
        Array->elements[IndexToSet] = FirstElem;
    #endif

;}
#line 1387 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r3);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module8)
	MR_init_entry1(fn__array__array_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__array_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__array_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(array__from_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(array_module9)
	MR_init_entry1(fn__array__generate_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__generate_2_4_0);
	MR_init_label3(fn__array__generate_2_4_0,11,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__generate_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(fn__array__generate_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__array__generate_2_4_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__array__generate_2_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__array__generate_2_4_0_i3);
MR_def_label(fn__array__generate_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__array__generate_2_4_0
	Index = MR_sv(1);
	Item = MR_r1;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(4), Array0);
{
#line 1603 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 1476 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r5);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(5);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(fn__array__generate_2_4_0_i11);
MR_def_label(fn__array__generate_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module10)
	MR_init_entry1(fn__array__generate_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__generate_2_0);
	MR_init_label6(fn__array__generate_2_0,2,3,5,7,9,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__generate_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(fn__array__generate_2_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__array__generate_2_0_i5);
MR_def_label(fn__array__generate_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__array__generate_2_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__array__generate_2_0_i5);
MR_def_label(fn__array__generate_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 2;
MR_def_label(fn__array__generate_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__array__generate_2_0_i7);
	}
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__array__generate_2_0
{
#line 1198 "array.m"

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);
;}
#line 1551 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(4);
MR_def_label(fn__array__generate_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__array__generate_2_0_i8);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__array__generate_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__array__generate_2_0_i9);
MR_def_label(fn__array__generate_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	FirstElem;
	MR_Integer	IndexToSet;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__array__generate_2_0
	Size = MR_sv(1);
	FirstElem = MR_r1;
	IndexToSet = (MR_Integer) 0;
{
#line 1272 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */ 
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;    
        Array->elements[IndexToSet] = FirstElem;
    #endif

;}
#line 1595 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r5);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__array__generate_2_4_0);
MR_def_label(fn__array__generate_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("array.generate: negative size", 29);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(array_module11)
	MR_init_entry1(array__generate_foldl_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__generate_foldl_2_7_0);
	MR_init_label3(array__generate_foldl_2_7_0,11,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_foldl_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__generate_foldl_2_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(array__generate_foldl_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(array__generate_foldl_2_7_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__generate_foldl_2_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__generate_foldl_2_7_0_i3);
MR_def_label(array__generate_foldl_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__generate_foldl_2_7_0
	Index = MR_sv(1);
	Item = MR_r1;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(4), Array0);
{
#line 1603 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 1675 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r6);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(array__generate_foldl_2_7_0_i11);
	}
MR_def_label(array__generate_foldl_2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module12)
	MR_init_entry1(array__generate_foldl_2_7_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__generate_foldl_2_7_1);
	MR_init_label3(array__generate_foldl_2_7_1,11,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_foldl_2'/7 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__generate_foldl_2_7_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(array__generate_foldl_2_7_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(array__generate_foldl_2_7_1_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__generate_foldl_2_7_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__generate_foldl_2_7_1_i3);
MR_def_label(array__generate_foldl_2_7_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__generate_foldl_2_7_1
	Index = MR_sv(1);
	Item = MR_r1;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(4), Array0);
{
#line 1603 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 1758 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r6);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(array__generate_foldl_2_7_1_i11);
	}
MR_def_label(array__generate_foldl_2_7_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module13)
	MR_init_entry1(array__generate_foldl_2_7_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__generate_foldl_2_7_2);
	MR_init_label3(array__generate_foldl_2_7_2,11,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_foldl_2'/7 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__generate_foldl_2_7_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(array__generate_foldl_2_7_2,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(array__generate_foldl_2_7_2_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__generate_foldl_2_7_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__generate_foldl_2_7_2_i3);
MR_def_label(array__generate_foldl_2_7_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__generate_foldl_2_7_2
	Index = MR_sv(1);
	Item = MR_r1;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(4), Array0);
{
#line 1603 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 1841 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r6);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(array__generate_foldl_2_7_2_i11);
	}
MR_def_label(array__generate_foldl_2_7_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module14)
	MR_init_entry1(array__generate_foldl_2_7_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__generate_foldl_2_7_3);
	MR_init_label4(array__generate_foldl_2_7_3,18,3,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_foldl_2'/7 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__generate_foldl_2_7_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(array__generate_foldl_2_7_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(array__generate_foldl_2_7_3_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__generate_foldl_2_7_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__generate_foldl_2_7_3_i3);
MR_def_label(array__generate_foldl_2_7_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__generate_foldl_2_7_3_i1);
	}
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__generate_foldl_2_7_3
	Index = MR_sv(1);
	Item = MR_r2;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(4), Array0);
{
#line 1603 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 1927 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r6);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(array__generate_foldl_2_7_3_i18);
	}
MR_def_label(array__generate_foldl_2_7_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(array__generate_foldl_2_7_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module15)
	MR_init_entry1(array__generate_foldl_2_7_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__generate_foldl_2_7_4);
	MR_init_label4(array__generate_foldl_2_7_4,18,3,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_foldl_2'/7 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__generate_foldl_2_7_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(array__generate_foldl_2_7_4,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(array__generate_foldl_2_7_4_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__generate_foldl_2_7_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__generate_foldl_2_7_4_i3);
MR_def_label(array__generate_foldl_2_7_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__generate_foldl_2_7_4_i1);
	}
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__generate_foldl_2_7_4
	Index = MR_sv(1);
	Item = MR_r2;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(4), Array0);
{
#line 1603 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 2018 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r6);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(array__generate_foldl_2_7_4_i18);
	}
MR_def_label(array__generate_foldl_2_7_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(array__generate_foldl_2_7_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module16)
	MR_init_entry1(array__generate_foldl_2_7_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__generate_foldl_2_7_5);
	MR_init_label4(array__generate_foldl_2_7_5,18,3,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_foldl_2'/7 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__generate_foldl_2_7_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(array__generate_foldl_2_7_5,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(array__generate_foldl_2_7_5_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__generate_foldl_2_7_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__generate_foldl_2_7_5_i3);
MR_def_label(array__generate_foldl_2_7_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__generate_foldl_2_7_5_i1);
	}
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__generate_foldl_2_7_5
	Index = MR_sv(1);
	Item = MR_r2;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(4), Array0);
{
#line 1603 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 2109 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r6);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(array__generate_foldl_2_7_5_i18);
	}
MR_def_label(array__generate_foldl_2_7_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(array__generate_foldl_2_7_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module17)
	MR_init_entry1(array__generate_foldl_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__generate_foldl_5_0);
	MR_init_label6(array__generate_foldl_5_0,2,3,5,7,9,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_foldl'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__generate_foldl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_INT_GE(MR_r3,0)) {
		MR_GOTO_LAB(array__generate_foldl_5_0_i2);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r5;
	MR_GOTO_LAB(array__generate_foldl_5_0_i5);
MR_def_label(array__generate_foldl_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(array__generate_foldl_5_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r5;
	MR_GOTO_LAB(array__generate_foldl_5_0_i5);
MR_def_label(array__generate_foldl_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r5;
MR_def_label(array__generate_foldl_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(array__generate_foldl_5_0_i7);
	}
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__generate_foldl_5_0
{
#line 1198 "array.m"

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);
;}
#line 2202 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(5);
MR_def_label(array__generate_foldl_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(array__generate_foldl_5_0_i8);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__generate_foldl_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__generate_foldl_5_0_i9);
MR_def_label(array__generate_foldl_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	FirstElem;
	MR_Integer	IndexToSet;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__generate_foldl_5_0
	Size = MR_sv(1);
	FirstElem = MR_r1;
	IndexToSet = (MR_Integer) 0;
{
#line 1272 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */ 
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;    
        Array->elements[IndexToSet] = FirstElem;
    #endif

;}
#line 2251 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r6);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(array__generate_foldl_2_7_0);
	}
MR_def_label(array__generate_foldl_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("array.generate_foldl: negative size", 35);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module18)
	MR_init_entry1(array__generate_foldl_5_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__generate_foldl_5_1);
	MR_init_label6(array__generate_foldl_5_1,2,3,5,7,9,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_foldl'/5 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__generate_foldl_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_INT_GE(MR_r3,0)) {
		MR_GOTO_LAB(array__generate_foldl_5_1_i2);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r5;
	MR_GOTO_LAB(array__generate_foldl_5_1_i5);
MR_def_label(array__generate_foldl_5_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(array__generate_foldl_5_1_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r5;
	MR_GOTO_LAB(array__generate_foldl_5_1_i5);
MR_def_label(array__generate_foldl_5_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r5;
MR_def_label(array__generate_foldl_5_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(array__generate_foldl_5_1_i7);
	}
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__generate_foldl_5_1
{
#line 1198 "array.m"

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);
;}
#line 2341 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(5);
MR_def_label(array__generate_foldl_5_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(array__generate_foldl_5_1_i8);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__generate_foldl_5_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__generate_foldl_5_1_i9);
MR_def_label(array__generate_foldl_5_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	FirstElem;
	MR_Integer	IndexToSet;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__generate_foldl_5_1
	Size = MR_sv(1);
	FirstElem = MR_r1;
	IndexToSet = (MR_Integer) 0;
{
#line 1272 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */ 
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;    
        Array->elements[IndexToSet] = FirstElem;
    #endif

;}
#line 2390 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r6);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(array__generate_foldl_2_7_1);
	}
MR_def_label(array__generate_foldl_5_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("array.generate_foldl: negative size", 35);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module19)
	MR_init_entry1(array__generate_foldl_5_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__generate_foldl_5_2);
	MR_init_label6(array__generate_foldl_5_2,2,3,5,7,9,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_foldl'/5 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__generate_foldl_5_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_INT_GE(MR_r3,0)) {
		MR_GOTO_LAB(array__generate_foldl_5_2_i2);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r5;
	MR_GOTO_LAB(array__generate_foldl_5_2_i5);
MR_def_label(array__generate_foldl_5_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(array__generate_foldl_5_2_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r5;
	MR_GOTO_LAB(array__generate_foldl_5_2_i5);
MR_def_label(array__generate_foldl_5_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r5;
MR_def_label(array__generate_foldl_5_2,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(array__generate_foldl_5_2_i7);
	}
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__generate_foldl_5_2
{
#line 1198 "array.m"

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);
;}
#line 2480 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(5);
MR_def_label(array__generate_foldl_5_2,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(array__generate_foldl_5_2_i8);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__generate_foldl_5_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__generate_foldl_5_2_i9);
MR_def_label(array__generate_foldl_5_2,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	FirstElem;
	MR_Integer	IndexToSet;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__generate_foldl_5_2
	Size = MR_sv(1);
	FirstElem = MR_r1;
	IndexToSet = (MR_Integer) 0;
{
#line 1272 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */ 
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;    
        Array->elements[IndexToSet] = FirstElem;
    #endif

;}
#line 2529 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r6);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(array__generate_foldl_2_7_2);
	}
MR_def_label(array__generate_foldl_5_2,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("array.generate_foldl: negative size", 35);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module20)
	MR_init_entry1(array__generate_foldl_5_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__generate_foldl_5_3);
	MR_init_label8(array__generate_foldl_5_3,2,3,5,7,9,19,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_foldl'/5 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__generate_foldl_5_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_INT_GE(MR_r3,0)) {
		MR_GOTO_LAB(array__generate_foldl_5_3_i2);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r5;
	MR_GOTO_LAB(array__generate_foldl_5_3_i5);
MR_def_label(array__generate_foldl_5_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(array__generate_foldl_5_3_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r5;
	MR_GOTO_LAB(array__generate_foldl_5_3_i5);
MR_def_label(array__generate_foldl_5_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r5;
MR_def_label(array__generate_foldl_5_3,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(array__generate_foldl_5_3_i7);
	}
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__generate_foldl_5_3
{
#line 1198 "array.m"

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);
;}
#line 2619 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(array__generate_foldl_5_3,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(array__generate_foldl_5_3_i8);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__generate_foldl_5_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__generate_foldl_5_3_i9);
MR_def_label(array__generate_foldl_5_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__generate_foldl_5_3_i1);
	}
	{
	MR_Integer	Size;
	MR_Word	FirstElem;
	MR_Integer	IndexToSet;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__generate_foldl_5_3
	Size = MR_sv(1);
	FirstElem = MR_r2;
	IndexToSet = (MR_Integer) 0;
{
#line 1272 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */ 
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;    
        Array->elements[IndexToSet] = FirstElem;
    #endif

;}
#line 2680 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r6);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(array__generate_foldl_2_7_3);
	}
MR_def_label(array__generate_foldl_5_3,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(array__generate_foldl_5_3,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("array.generate_foldl: negative size", 35);
	MR_np_call_localret_ent(require__error_1_0,
		array__generate_foldl_5_3_i19);
MR_def_label(array__generate_foldl_5_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module21)
	MR_init_entry1(array__generate_foldl_5_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__generate_foldl_5_4);
	MR_init_label8(array__generate_foldl_5_4,2,3,5,7,9,19,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_foldl'/5 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__generate_foldl_5_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_INT_GE(MR_r3,0)) {
		MR_GOTO_LAB(array__generate_foldl_5_4_i2);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r5;
	MR_GOTO_LAB(array__generate_foldl_5_4_i5);
MR_def_label(array__generate_foldl_5_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(array__generate_foldl_5_4_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r5;
	MR_GOTO_LAB(array__generate_foldl_5_4_i5);
MR_def_label(array__generate_foldl_5_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r5;
MR_def_label(array__generate_foldl_5_4,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(array__generate_foldl_5_4_i7);
	}
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__generate_foldl_5_4
{
#line 1198 "array.m"

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);
;}
#line 2781 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(array__generate_foldl_5_4,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(array__generate_foldl_5_4_i8);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__generate_foldl_5_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__generate_foldl_5_4_i9);
MR_def_label(array__generate_foldl_5_4,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__generate_foldl_5_4_i1);
	}
	{
	MR_Integer	Size;
	MR_Word	FirstElem;
	MR_Integer	IndexToSet;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__generate_foldl_5_4
	Size = MR_sv(1);
	FirstElem = MR_r2;
	IndexToSet = (MR_Integer) 0;
{
#line 1272 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */ 
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;    
        Array->elements[IndexToSet] = FirstElem;
    #endif

;}
#line 2842 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r6);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(array__generate_foldl_2_7_4);
	}
MR_def_label(array__generate_foldl_5_4,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(array__generate_foldl_5_4,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("array.generate_foldl: negative size", 35);
	MR_np_call_localret_ent(require__error_1_0,
		array__generate_foldl_5_4_i19);
MR_def_label(array__generate_foldl_5_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module22)
	MR_init_entry1(array__generate_foldl_5_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__generate_foldl_5_5);
	MR_init_label8(array__generate_foldl_5_5,2,3,5,7,9,19,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_foldl'/5 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__generate_foldl_5_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_INT_GE(MR_r3,0)) {
		MR_GOTO_LAB(array__generate_foldl_5_5_i2);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r5;
	MR_GOTO_LAB(array__generate_foldl_5_5_i5);
MR_def_label(array__generate_foldl_5_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(array__generate_foldl_5_5_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r5;
	MR_GOTO_LAB(array__generate_foldl_5_5_i5);
MR_def_label(array__generate_foldl_5_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r5;
MR_def_label(array__generate_foldl_5_5,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(array__generate_foldl_5_5_i7);
	}
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__generate_foldl_5_5
{
#line 1198 "array.m"

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);
;}
#line 2943 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(array__generate_foldl_5_5,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(array__generate_foldl_5_5_i8);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__generate_foldl_5_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__generate_foldl_5_5_i9);
MR_def_label(array__generate_foldl_5_5,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__generate_foldl_5_5_i1);
	}
	{
	MR_Integer	Size;
	MR_Word	FirstElem;
	MR_Integer	IndexToSet;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__generate_foldl_5_5
	Size = MR_sv(1);
	FirstElem = MR_r2;
	IndexToSet = (MR_Integer) 0;
{
#line 1272 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */ 
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;    
        Array->elements[IndexToSet] = FirstElem;
    #endif

;}
#line 3004 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r6);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(array__generate_foldl_2_7_5);
	}
MR_def_label(array__generate_foldl_5_5,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(array__generate_foldl_5_5,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("array.generate_foldl: negative size", 35);
	MR_np_call_localret_ent(require__error_1_0,
		array__generate_foldl_5_5_i19);
MR_def_label(array__generate_foldl_5_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module23)
	MR_init_entry1(array__min_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__min_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'min'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__min_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__min_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 3069 "array.c"
	MR_r1 = Min;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module24)
	MR_init_entry1(fn__array__min_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__min_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'min'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__min_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__fn__array__min_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 3105 "array.c"
	MR_r1 = Min;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module25)
	MR_init_entry1(fn__array__least_index_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__least_index_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'least_index'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__least_index_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__fn__array__least_index_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 3141 "array.c"
	MR_r1 = Min;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module26)
	MR_init_entry1(array__max_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__max_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'max'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__max_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__max_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 3176 "array.c"
	MR_r1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module27)
	MR_init_entry1(fn__array__max_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__max_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'max'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__max_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__max_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 3211 "array.c"
	MR_r1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module28)
	MR_init_entry1(fn__array__greatest_index_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__greatest_index_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'greatest_index'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__greatest_index_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__greatest_index_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 3246 "array.c"
	MR_r1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module29)
	MR_init_entry1(array__size_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__size_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'size'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__size_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__size_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 3281 "array.c"
	MR_r1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module30)
	MR_init_entry1(fn__array__size_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__size_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'size'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__size_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__size_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 3316 "array.c"
	MR_r1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module31)
	MR_init_entry1(array__bounds_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__bounds_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bounds'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__bounds_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__bounds_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 3352 "array.c"
	MR_r1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__bounds_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 3366 "array.c"
	MR_r2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module32)
	MR_init_entry1(array__in_bounds_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__in_bounds_2_0);
	MR_init_label1(array__in_bounds_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'in_bounds'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__in_bounds_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__in_bounds_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 3403 "array.c"
	MR_r1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__in_bounds_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 3417 "array.c"
	MR_r2 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(array__in_bounds_2_0_i1);
	}
	MR_r1 = ((MR_Integer) MR_r3 <= (MR_Integer) MR_r2);
	MR_proceed();
MR_def_label(array__in_bounds_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module33)
	MR_init_entry1(array__unsafe_lookup_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__unsafe_lookup_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_lookup'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__unsafe_lookup_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__unsafe_lookup_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
	Index = MR_r3;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 3462 "array.c"
	MR_r1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module34)
	MR_init_entry1(array__bounds_checks_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__bounds_checks_0_0);
	MR_init_label1(array__bounds_checks_0_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bounds_checks'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__bounds_checks_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__array__bounds_checks_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 825 "array.m"

#ifdef ML_OMIT_ARRAY_BOUNDS_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 3502 "array.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(array__bounds_checks_0_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(array__bounds_checks_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__int_to_base_string_3_0);
MR_decl_entry(string__append_3_2);
MR_decl_entry(exception__throw_1_0);

MR_BEGIN_MODULE(array_module35)
	MR_init_entry1(array__out_of_bounds_error_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__out_of_bounds_error_3_0);
	MR_init_label10(array__out_of_bounds_error_3_0,2,3,4,5,6,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'out_of_bounds_error'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__out_of_bounds_error_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__out_of_bounds_error_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 3553 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__out_of_bounds_error_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 3567 "array.c"
	MR_r1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_r2 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		array__out_of_bounds_error_3_0_i2);
MR_def_label(array__out_of_bounds_error_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("]", 1);
	MR_np_call_localret_ent(string__append_3_2,
		array__out_of_bounds_error_3_0_i3);
MR_def_label(array__out_of_bounds_error_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		array__out_of_bounds_error_3_0_i4);
MR_def_label(array__out_of_bounds_error_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		array__out_of_bounds_error_3_0_i5);
MR_def_label(array__out_of_bounds_error_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(string__append_3_2,
		array__out_of_bounds_error_3_0_i6);
MR_def_label(array__out_of_bounds_error_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" not in range [", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		array__out_of_bounds_error_3_0_i7);
MR_def_label(array__out_of_bounds_error_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		array__out_of_bounds_error_3_0_i8);
MR_def_label(array__out_of_bounds_error_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(string__append_3_2,
		array__out_of_bounds_error_3_0_i9);
MR_def_label(array__out_of_bounds_error_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": index ", 8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		array__out_of_bounds_error_3_0_i10);
MR_def_label(array__out_of_bounds_error_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		array__out_of_bounds_error_3_0_i11);
MR_def_label(array__out_of_bounds_error_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(array, index_out_of_bounds);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module36)
	MR_init_entry1(array__lookup_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__lookup_3_0);
	MR_init_label2(array__lookup_3_0,7,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__lookup_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__array__lookup_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 825 "array.m"

#ifdef ML_OMIT_ARRAY_BOUNDS_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 3701 "array.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(array__lookup_3_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__lookup_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 3720 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__lookup_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 3734 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_tempr1 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(array__lookup_3_0_i7);
	}
	if (((MR_Integer) MR_r3 <= (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(array__lookup_3_0_i3);
	}
	}
MR_def_label(array__lookup_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_string_const("array.lookup", 12);
	MR_np_tailcall_ent(array__out_of_bounds_error_3_0);
MR_def_label(array__lookup_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__lookup_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
	Index = MR_r3;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 3763 "array.c"
	MR_r1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module37)
	MR_init_entry1(fn__array__lookup_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__lookup_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__lookup_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(array__lookup_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module38)
	MR_init_entry1(array__semidet_lookup_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__semidet_lookup_3_0);
	MR_init_label1(array__semidet_lookup_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'semidet_lookup'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__semidet_lookup_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__semidet_lookup_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 3823 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__semidet_lookup_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 3837 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_tempr1 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(array__semidet_lookup_3_0_i1);
	}
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(array__semidet_lookup_3_0_i1);
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__semidet_lookup_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
	Index = MR_r3;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 3859 "array.c"
	MR_r2 = Item;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(array__semidet_lookup_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module39)
	MR_init_entry1(array__set_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__set_4_0);
	MR_init_label2(array__set_4_0,7,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__array__set_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 825 "array.m"

#ifdef ML_OMIT_ARRAY_BOUNDS_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 3905 "array.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(array__set_4_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__set_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 3924 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__set_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 3938 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_tempr1 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(array__set_4_0_i7);
	}
	if (((MR_Integer) MR_r2 <= (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(array__set_4_0_i3);
	}
	}
MR_def_label(array__set_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("array.set", 9);
	MR_np_tailcall_ent(array__out_of_bounds_error_3_0);
	}
MR_def_label(array__set_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__set_4_0
	Index = MR_r2;
	Item = MR_r3;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array0);
{
#line 1603 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 3976 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module40)
	MR_init_entry1(fn__array__set_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__set_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__set_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(array__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module41)
	MR_init_entry1(array__unsafe_svset_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__unsafe_svset_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_svset'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__unsafe_svset_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__unsafe_svset_4_0
	Index = MR_r2;
	Item = MR_r3;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array0);
{
#line 1617 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 4044 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module42)
	MR_init_entry1(array__svset_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__svset_4_0);
	MR_init_label2(array__svset_4_0,7,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'svset'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__svset_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__array__svset_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 825 "array.m"

#ifdef ML_OMIT_ARRAY_BOUNDS_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 4084 "array.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(array__svset_4_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__svset_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 4103 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__svset_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 4117 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_tempr1 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(array__svset_4_0_i7);
	}
	if (((MR_Integer) MR_r2 <= (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(array__svset_4_0_i3);
	}
	}
MR_def_label(array__svset_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("array.set", 9);
	MR_np_tailcall_ent(array__out_of_bounds_error_3_0);
	}
MR_def_label(array__svset_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__svset_4_0
	Index = MR_r2;
	Item = MR_r3;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array0);
{
#line 1617 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 4155 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module43)
	MR_init_entry1(array__semidet_set_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__semidet_set_4_0);
	MR_init_label1(array__semidet_set_4_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'semidet_set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__semidet_set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__semidet_set_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 4194 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__semidet_set_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 4208 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_tempr1 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(array__semidet_set_4_0_i1);
	}
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(array__semidet_set_4_0_i1);
	}
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__semidet_set_4_0
	Index = MR_r2;
	Item = MR_r3;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array0);
{
#line 1603 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 4233 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r2);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(array__semidet_set_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module44)
	MR_init_entry1(array__copy_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__copy_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'copy'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__copy_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__copy_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array0);
{
#line 1936 "array.m"

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 4275 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module45)
	MR_init_entry1(array__slow_set_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__slow_set_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'slow_set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__slow_set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__slow_set_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array0);
{
#line 1936 "array.m"

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 4311 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r4);
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(array__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module46)
	MR_init_entry1(fn__array__slow_set_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__slow_set_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'slow_set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__slow_set_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__array__slow_set_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array0);
{
#line 1936 "array.m"

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 4349 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(array__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module47)
	MR_init_entry1(array__semidet_slow_set_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__semidet_slow_set_4_0);
	MR_init_label2(array__semidet_slow_set_4_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'semidet_slow_set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__semidet_slow_set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__semidet_slow_set_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 4392 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__semidet_slow_set_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 4406 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_tempr1 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(array__semidet_slow_set_4_0_i1);
	}
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(array__semidet_slow_set_4_0_i1);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__semidet_slow_set_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array0);
{
#line 1936 "array.m"

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 4429 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r4);
#undef	MR_PROC_LABEL
	}
	}
	MR_np_call_localret_ent(array__set_4_0,
		array__semidet_slow_set_4_0_i2);
MR_def_label(array__semidet_slow_set_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(array__semidet_slow_set_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module48)
	MR_init_entry1(fn__array__elem_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__elem_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'elem'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__elem_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(array__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module49)
	MR_init_entry1(fn__array__unsafe_elem_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__unsafe_elem_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_elem'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__unsafe_elem_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__fn__array__unsafe_elem_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r3, Array);
	Index = MR_r2;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 4504 "array.c"
	MR_r1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module50)
	MR_init_entry1(fn__f_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'elem :='/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(array__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module51)
	MR_init_entry1(fn__f_97_114_114_97_121_95_95_117_110_115_97_102_101_95_101_108_101_109_32_58_61_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_97_114_114_97_121_95_95_117_110_115_97_102_101_95_101_108_101_109_32_58_61_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_elem :='/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_97_114_114_97_121_95_95_117_110_115_97_102_101_95_101_108_101_109_32_58_61_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__f_97_114_114_97_121_95_95_117_110_115_97_102_101_95_101_108_101_109_32_58_61_3_0
	Index = MR_r2;
	Item = MR_r4;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r3, Array0);
{
#line 1603 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 4571 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(int__nondet_int_in_range_3_0);

MR_BEGIN_MODULE(array_module52)
	MR_init_entry1(array__member_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__member_2_0);
	MR_init_label1(array__member_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'member'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__member_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred array.member/2-0", 1,
		MR_ENTRY(MR_do_fail));
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__member_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 4612 "array.c"
	MR_r1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__member_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 4628 "array.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_fv(1) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(int__nondet_int_in_range_3_0,
		array__member_2_0_i1);
MR_def_label(array__member_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__member_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_fv(1), Array);
	Index = MR_r1;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 4651 "array.c"
	MR_r1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module53)
	MR_init_entry1(fn__array__copy_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__copy_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'copy'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__copy_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__array__copy_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array0);
{
#line 1936 "array.m"

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 4687 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module54)
	MR_init_entry1(array__resize_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__resize_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'resize'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__resize_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__resize_4_0
	Size = MR_r2;
	Item = MR_r3;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array0);
{
#line 1752 "array.m"

    if ((Array0)->size == Size) {
        Array = Array0;
    } else {
        ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
        ML_resize_array(Array, Array0, Size, Item);
    }
;}
#line 4731 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module55)
	MR_init_entry1(fn__array__resize_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__resize_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'resize'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__resize_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__array__resize_3_0
	Size = MR_r3;
	Item = MR_r4;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array0);
{
#line 1752 "array.m"

    if ((Array0)->size == Size) {
        Array = Array0;
    } else {
        ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
        ML_resize_array(Array, Array0, Size, Item);
    }
;}
#line 4775 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module56)
	MR_init_entry1(array__shrink_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__shrink_2_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'shrink_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(array__shrink_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_114_105_110_107_95_50_95_95_91_49_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module57)
	MR_init_entry1(array__shrink_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__shrink_3_0);
	MR_init_label2(array__shrink_3_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'shrink'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__shrink_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__shrink_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r3, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 4834 "array.c"
	MR_r4 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r2 <= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(array__shrink_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("array.shrink: can\'t shrink to a larger size", 43);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(array__shrink_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r4)) {
		MR_GOTO_LAB(array__shrink_3_0_i4);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(array__shrink_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__shrink_3_0
	Size = MR_r2;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r3, Array0);
{
#line 1851 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_shrink_array(Array, Array0, Size);
;}
#line 4865 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module58)
	MR_init_entry1(fn__array__shrink_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__shrink_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'shrink'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__shrink_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(array__shrink_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module59)
	MR_init_entry1(fn__array__from_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__from_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__from_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(array__from_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module60)
	MR_init_entry1(fn__array__from_reverse_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__from_reverse_list_1_0);
	MR_init_label2(fn__array__from_reverse_list_1_0,13,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_reverse_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__from_reverse_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__array__from_reverse_list_1_0_i13);
	}
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__array__from_reverse_list_1_0
{
#line 1198 "array.m"

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);
;}
#line 4951 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(fn__array__from_reverse_list_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__array__from_reverse_list_1_0_i4);
MR_def_label(fn__array__from_reverse_list_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	{
	MR_Integer	Size;
	MR_Word	FirstElem;
	MR_Integer	IndexToSet;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__array__from_reverse_list_1_0
	Size = MR_r1;
	FirstElem = MR_sv(1);
	IndexToSet = MR_tempr1;
{
#line 1272 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */ 
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;    
        Array->elements[IndexToSet] = FirstElem;
    #endif

;}
#line 4997 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r3);
#undef	MR_PROC_LABEL
	}
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module61)
	MR_init_entry1(fn__array__do_foldr_func_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__do_foldr_func_5_0);
	MR_init_label3(fn__array__do_foldr_func_5_0,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr_func'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__do_foldr_func_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(fn__array__do_foldr_func_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(fn__array__do_foldr_func_5_0_i2);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(7);
MR_def_label(fn__array__do_foldr_func_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__fn__array__do_foldr_func_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
	Index = MR_r7;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 5054 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__array__do_foldr_func_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__array__do_foldr_func_5_0_i3);
MR_def_label(fn__array__do_foldr_func_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(3);
	MR_r7 = ((MR_Integer) MR_sv(4) - (MR_Integer) 1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(fn__array__do_foldr_func_5_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module62)
	MR_init_entry1(fn__array__do_foldr_func_5_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__do_foldr_func_5_1);
	MR_init_label3(fn__array__do_foldr_func_5_1,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr_func'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__do_foldr_func_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(fn__array__do_foldr_func_5_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(fn__array__do_foldr_func_5_1_i2);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(7);
MR_def_label(fn__array__do_foldr_func_5_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__fn__array__do_foldr_func_5_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
	Index = MR_r7;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 5133 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__array__do_foldr_func_5_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__array__do_foldr_func_5_1_i3);
MR_def_label(fn__array__do_foldr_func_5_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(3);
	MR_r7 = ((MR_Integer) MR_sv(4) - (MR_Integer) 1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(fn__array__do_foldr_func_5_1_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module63)
	MR_init_entry1(array__fetch_items_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__fetch_items_4_0);
	MR_init_label2(array__fetch_items_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fetch_items'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__fetch_items_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(array__fetch_items_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(array__fetch_items_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__fetch_items_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 5207 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__fetch_items_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 5221 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_tempr1 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(array__fetch_items_4_0_i3);
	}
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(array__fetch_items_4_0_i3);
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__fetch_items_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 5242 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__fetch_items_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 5256 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_tempr1 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(array__fetch_items_4_0_i3);
	}
	if (((MR_Integer) MR_r4 > (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(array__fetch_items_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_0);
	}
MR_def_label(array__fetch_items_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("array.fetch_items/4: One or more index is out of bounds", 55);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module64)
	MR_init_entry1(array__to_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__to_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__to_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__to_list_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 5305 "array.c"
	MR_r3 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__to_list_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 5319 "array.c"
	MR_r4 = Max;
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(array__fetch_items_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module65)
	MR_init_entry1(fn__array__to_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__to_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__to_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__fn__array__to_list_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 5355 "array.c"
	MR_r3 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__to_list_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 5369 "array.c"
	MR_r4 = Max;
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(array__fetch_items_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module66)
	MR_init_entry1(fn__array__fetch_items_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__fetch_items_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fetch_items'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__fetch_items_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(array__fetch_items_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_105_110_116_95_95_62_62_2_0);

MR_BEGIN_MODULE(array_module67)
	MR_init_entry1(array__bsearch_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__bsearch_2_6_0);
	MR_init_label10(array__bsearch_2_6_0,47,21,2,5,7,3,10,11,12,14)
	MR_init_label1(array__bsearch_2_6_0,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bsearch_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__bsearch_2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(array__bsearch_2_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = ((MR_Integer) MR_r4 - (MR_Integer) MR_r3);
	if (MR_INT_GE(MR_r7,0)) {
		MR_GOTO_LAB(array__bsearch_2_6_0_i2);
	}
MR_def_label(array__bsearch_2_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(array__bsearch_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(array__bsearch_2_6_0_i3);
	}
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_np_call_localret_ent(array__lookup_3_0,
		array__bsearch_2_6_0_i5);
MR_def_label(array__bsearch_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__bsearch_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__bsearch_2_6_0_i7);
MR_def_label(array__bsearch_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(array__bsearch_2_6_0_i21);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(array__bsearch_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(7) = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_tempr2);
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		array__bsearch_2_6_0_i10);
MR_def_label(array__bsearch_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(array__lookup_3_0,
		array__bsearch_2_6_0_i11);
MR_def_label(array__bsearch_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__bsearch_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__bsearch_2_6_0_i12);
MR_def_label(array__bsearch_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(array__bsearch_2_6_0_i14);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__bsearch_2_6_0_i47);
MR_def_label(array__bsearch_2_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(array__bsearch_2_6_0_i16);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__bsearch_2_6_0_i47);
MR_def_label(array__bsearch_2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = ((MR_Integer) MR_sv(6) - (MR_Integer) 1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__bsearch_2_6_0_i47);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module68)
	MR_init_entry1(array__bsearch_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__bsearch_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bsearch'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__bsearch_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__bsearch_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 5566 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__bsearch_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 5580 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	MR_np_tailcall_ent(array__bsearch_2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module69)
	MR_init_entry1(fn__array__bsearch_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__bsearch_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bsearch'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__bsearch_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__fn__array__bsearch_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 5625 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__bsearch_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 5639 "array.c"
	MR_r5 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_r4;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr1;
	MR_r6 = MR_tempr4;
	MR_np_tailcall_ent(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(array_module70)
	MR_init_entry1(array__approx_binary_search_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__approx_binary_search_2_6_0);
	MR_init_label10(array__approx_binary_search_2_6_0,46,2,3,11,12,10,7,5,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'approx_binary_search_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__approx_binary_search_2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(array__approx_binary_search_2_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 > (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(array__approx_binary_search_2_6_0_i1);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_tempr3 = MR_r6;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = (((MR_Integer) MR_tempr2 + (MR_Integer) MR_tempr3) / (MR_Integer) 2);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		array__approx_binary_search_2_6_0_i2);
MR_def_label(array__approx_binary_search_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__approx_binary_search_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__approx_binary_search_2_6_0_i3);
MR_def_label(array__approx_binary_search_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(array__approx_binary_search_2_6_0_i5);
	}
	if (((MR_Integer) MR_sv(6) >= (MR_Integer) MR_sv(5))) {
		MR_GOTO_LAB(array__approx_binary_search_2_6_0_i10);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_np_call_localret_ent(array__lookup_3_0,
		array__approx_binary_search_2_6_0_i11);
MR_def_label(array__approx_binary_search_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		array__approx_binary_search_2_6_0_i12);
MR_def_label(array__approx_binary_search_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(array__approx_binary_search_2_6_0_i10);
	}
	MR_r2 = MR_sv(6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(array__approx_binary_search_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(6) != MR_sv(5))) {
		MR_GOTO_LAB(array__approx_binary_search_2_6_0_i7);
	}
	MR_r2 = MR_sv(6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(array__approx_binary_search_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__approx_binary_search_2_6_0_i46);
MR_def_label(array__approx_binary_search_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(array__approx_binary_search_2_6_0_i17);
	}
	MR_r2 = MR_sv(6);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(array__approx_binary_search_2_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = ((MR_Integer) MR_sv(6) - (MR_Integer) 1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__approx_binary_search_2_6_0_i46);
MR_def_label(array__approx_binary_search_2_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module71)
	MR_init_entry1(array__approx_binary_search_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__approx_binary_search_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'approx_binary_search'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__approx_binary_search_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__approx_binary_search_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r3, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 5815 "array.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_r5 = (MR_Integer) 0;
	MR_r6 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_np_tailcall_ent(array__approx_binary_search_2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module72)
	MR_init_entry1(array__approx_binary_search_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__approx_binary_search_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'approx_binary_search'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__approx_binary_search_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__approx_binary_search_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 5855 "array.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_np_tailcall_ent(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(array_module73)
	MR_init_entry1(array__binary_search_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__binary_search_4_0);
	MR_init_label4(array__binary_search_4_0,2,4,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'binary_search'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__binary_search_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__binary_search_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r3, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 5904 "array.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(array__approx_binary_search_2_6_0,
		array__binary_search_4_0_i2);
MR_def_label(array__binary_search_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__binary_search_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		array__binary_search_4_0_i4);
MR_def_label(array__binary_search_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		array__binary_search_4_0_i5);
MR_def_label(array__binary_search_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__binary_search_4_0_i1);
	}
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(array__binary_search_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module74)
	MR_init_entry1(array__binary_search_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__binary_search_3_0);
	MR_init_label4(array__binary_search_3_0,2,4,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'binary_search'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__binary_search_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__binary_search_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 5993 "array.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0,
		array__binary_search_3_0_i2);
MR_def_label(array__binary_search_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__binary_search_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		array__binary_search_3_0_i4);
MR_def_label(array__binary_search_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		array__binary_search_3_0_i5);
MR_def_label(array__binary_search_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__binary_search_3_0_i1);
	}
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(array__binary_search_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module75)
	MR_init_entry1(array__map_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__map_2_6_0);
	MR_init_label3(array__map_2_6_0,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__map_2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(array__map_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 < (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(array__map_2_6_0_i2);
	}
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(8);
MR_def_label(array__map_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_2_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
	Index = MR_r3;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 6096 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__map_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__array__map_2_6_0_i3);
MR_def_label(array__map_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_2_6_0
	Index = MR_sv(1);
	Item = MR_r1;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(5), Array0);
{
#line 1603 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 6131 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r7);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__map_2_6_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module76)
	MR_init_entry1(array__map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__map_3_0);
	MR_init_label2(array__map_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__map_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 6177 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__map_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 6191 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GT(MR_tempr1,0)) {
		MR_GOTO_LAB(array__map_3_0_i2);
	}
	if (((MR_Integer) 0 > (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(array__map_3_0_i2);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
	Index = (MR_Integer) 0;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 6215 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__map_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 6229 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__map_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__array__map_3_0_i3);
MR_def_label(array__map_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	FirstElem;
	MR_Integer	IndexToSet;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_3_0
	Size = MR_sv(3);
	FirstElem = MR_r1;
	IndexToSet = (MR_Integer) 0;
{
#line 1272 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */ 
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;    
        Array->elements[IndexToSet] = FirstElem;
    #endif

;}
#line 6274 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r7);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(array__map_2_6_0);
MR_def_label(array__map_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_3_0
{
#line 1198 "array.m"

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);
;}
#line 6298 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module77)
	MR_init_entry1(fn__array__map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__map_2_0);
	MR_init_label2(fn__array__map_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__map_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__fn__array__map_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 6337 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__map_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 6351 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GT(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__array__map_2_0_i2);
	}
	if (((MR_Integer) 0 > (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(fn__array__map_2_0_i2);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__fn__array__map_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
	Index = (MR_Integer) 0;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 6375 "array.c"
	MR_r2 = Item;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__map_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 6389 "array.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__array__map_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__array__map_2_0_i3);
MR_def_label(fn__array__map_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	FirstElem;
	MR_Integer	IndexToSet;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__array__map_2_0
	Size = MR_sv(3);
	FirstElem = MR_r1;
	IndexToSet = (MR_Integer) 0;
{
#line 1272 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);

    /*
    ** In debugging grades we fill the array with the first element
    ** in case the return value of a call to this predicate is examined
    ** in the debugger.
    */ 
    #if defined(MR_EXEC_TRACE)
        ML_init_array(Array, Size, FirstElem);
    #else
        Array->size = Size;    
        Array->elements[IndexToSet] = FirstElem;
    #endif

;}
#line 6431 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r5);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_0);
MR_def_label(fn__array__map_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__array__map_2_0
{
#line 1198 "array.m"

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);
;}
#line 6453 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module78)
	MR_init_entry1(array__compare_elements_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__compare_elements_5_0);
	MR_init_label6(array__compare_elements_5_0,17,2,3,4,5,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compare_elements'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(array__compare_elements_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(array__compare_elements_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(array__compare_elements_5_0_i2);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(array__compare_elements_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		array__compare_elements_5_0_i3);
MR_def_label(array__compare_elements_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		array__compare_elements_5_0_i4);
MR_def_label(array__compare_elements_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		array__compare_elements_5_0_i5);
MR_def_label(array__compare_elements_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((((MR_Integer) MR_r1 == (MR_Integer) 1) || ((MR_Integer) MR_r1 == (MR_Integer) 2))) {
		MR_GOTO_LAB(array__compare_elements_5_0_i20);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(array__compare_elements_5_0_i17);
MR_def_label(array__compare_elements_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module79)
	MR_init_entry1(array__array_compare_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__array_compare_3_0);
	MR_init_label4(array__array_compare_3_0,2,3,5,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_compare'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__array_compare_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__array_compare_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 6568 "array.c"
	MR_r4 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__array_compare_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r3, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 6582 "array.c"
	MR_r5 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(array__array_compare_3_0_i2);
	}
	MR_r6 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r5 = MR_r6;
	MR_GOTO_LAB(array__array_compare_3_0_i5);
MR_def_label(array__array_compare_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_r5)) {
		MR_GOTO_LAB(array__array_compare_3_0_i3);
	}
	MR_r6 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r5 = MR_r6;
	MR_GOTO_LAB(array__array_compare_3_0_i5);
MR_def_label(array__array_compare_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r5 = MR_tempr1;
	}
MR_def_label(array__array_compare_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(array__array_compare_3_0_i25);
	}
	MR_r1 = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(array__compare_elements_5_0);
	}
MR_def_label(array__array_compare_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module80)
	MR_init_entry1(fn__array__array_compare_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__array_compare_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_compare'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__array_compare_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(array__array_compare_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module81)
	MR_init_entry1(fn__array__search_until_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__search_until_4_0);
	MR_init_label6(fn__array__search_until_4_0,19,5,6,7,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_until'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__array__search_until_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(fn__array__search_until_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(fn__array__search_until_4_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__array__search_until_4_0_i5);
MR_def_label(fn__array__search_until_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__array__search_until_4_0_i6);
MR_def_label(fn__array__search_until_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		fn__array__search_until_4_0_i7);
MR_def_label(fn__array__search_until_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) == MR_r1)) {
		MR_GOTO_LAB(fn__array__search_until_4_0_i2);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(fn__array__search_until_4_0_i19);
MR_def_label(fn__array__search_until_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
MR_def_label(fn__array__search_until_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module82)
	MR_init_entry1(array__copy_subarray_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__copy_subarray_6_0);
	MR_init_label4(array__copy_subarray_6_0,12,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'copy_subarray'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(array__copy_subarray_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(array__copy_subarray_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(array__copy_subarray_6_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(array__lookup_3_0,
		array__copy_subarray_6_0_i3);
MR_def_label(array__copy_subarray_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(array__set_4_0,
		array__copy_subarray_6_0_i4);
MR_def_label(array__copy_subarray_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = MR_sv(3);
	MR_r5 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(array__copy_subarray_6_0_i12);
	}
MR_def_label(array__copy_subarray_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module83)
	MR_init_entry1(array__copy_subarray_reverse_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__copy_subarray_reverse_6_0);
	MR_init_label4(array__copy_subarray_reverse_6_0,12,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'copy_subarray_reverse'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(array__copy_subarray_reverse_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(array__copy_subarray_reverse_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(array__copy_subarray_reverse_6_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(array__lookup_3_0,
		array__copy_subarray_reverse_6_0_i3);
MR_def_label(array__copy_subarray_reverse_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(array__set_4_0,
		array__copy_subarray_reverse_6_0_i4);
MR_def_label(array__copy_subarray_reverse_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = MR_sv(3);
	MR_r5 = ((MR_Integer) MR_sv(4) - (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(array__copy_subarray_reverse_6_0_i12);
	}
MR_def_label(array__copy_subarray_reverse_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module84)
	MR_init_entry1(array__merge_subarrays_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__merge_subarrays_8_0);
	MR_init_label10(array__merge_subarrays_8_0,37,2,4,6,7,8,11,10,14,13)
	MR_init_label1(array__merge_subarrays_8_0,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_subarrays'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(array__merge_subarrays_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(array__merge_subarrays_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 <= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(array__merge_subarrays_8_0_i2);
	}
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(array__copy_subarray_6_0);
MR_def_label(array__merge_subarrays_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 <= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(array__merge_subarrays_8_0_i4);
	}
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(array__copy_subarray_6_0);
MR_def_label(array__merge_subarrays_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(9) = MR_r8;
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(array__lookup_3_0,
		array__merge_subarrays_8_0_i6);
MR_def_label(array__merge_subarrays_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		array__merge_subarrays_8_0_i7);
MR_def_label(array__merge_subarrays_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(builtin__compare_3_0,
		array__merge_subarrays_8_0_i8);
MR_def_label(array__merge_subarrays_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(array__merge_subarrays_8_0_i10);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(array__set_4_0,
		array__merge_subarrays_8_0_i11);
MR_def_label(array__merge_subarrays_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(array__merge_subarrays_8_0_i37);
	}
MR_def_label(array__merge_subarrays_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(array__merge_subarrays_8_0_i13);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(array__set_4_0,
		array__merge_subarrays_8_0_i14);
MR_def_label(array__merge_subarrays_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(array__merge_subarrays_8_0_i37);
	}
MR_def_label(array__merge_subarrays_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(array__set_4_0,
		array__merge_subarrays_8_0_i16);
MR_def_label(array__merge_subarrays_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r6 = MR_sv(5);
	MR_r7 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(array__merge_subarrays_8_0_i37);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module85)
	MR_init_entry1(array__samsort_down_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__samsort_down_8_0);
	MR_init_label10(array__samsort_down_8_0,39,4,5,3,9,10,11,12,7,8)
	MR_init_label2(array__samsort_down_8_0,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'samsort_down'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(array__samsort_down_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 <= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(array__samsort_down_8_0_i39);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_proceed();
MR_def_label(array__samsort_down_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(array__samsort_down_8_0_i3);
	}
	MR_sv(5) = MR_r2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(6) = MR_r1;
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	}
	MR_np_localcall_lab(array__samsort_down_8_0,
		array__samsort_down_8_0_i4);
MR_def_label(array__samsort_down_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr3 = MR_r2;
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	}
	MR_np_localcall_lab(array__samsort_down_8_0,
		array__samsort_down_8_0_i5);
MR_def_label(array__samsort_down_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_r6 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_r7 = MR_r3;
	MR_r8 = MR_tempr2;
	}
	MR_np_call_localret_ent(array__merge_subarrays_8_0,
		array__samsort_down_8_0_i15);
MR_def_label(array__samsort_down_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(array__samsort_down_8_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r6;
	MR_sv(6) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		array__samsort_down_8_0_i9);
MR_def_label(array__samsort_down_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_np_call_localret_ent(array__lookup_3_0,
		array__samsort_down_8_0_i10);
MR_def_label(array__samsort_down_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		array__samsort_down_8_0_i11);
MR_def_label(array__samsort_down_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(array__samsort_down_8_0_i7);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(fn__array__search_until_4_0,
		array__samsort_down_8_0_i12);
MR_def_label(array__samsort_down_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r5 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(array__copy_subarray_reverse_6_0,
		array__samsort_down_8_0_i15);
MR_def_label(array__samsort_down_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r1 = MR_sv(6);
MR_def_label(array__samsort_down_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_r6;
	}
	MR_np_call_localret_ent(fn__array__search_until_4_0,
		array__samsort_down_8_0_i14);
MR_def_label(array__samsort_down_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_r5 = MR_r3;
	MR_r6 = MR_sv(2);
	MR_np_call_localret_ent(array__copy_subarray_6_0,
		array__samsort_down_8_0_i15);
MR_def_label(array__samsort_down_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module86)
	MR_init_entry1(array__samsort_up_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__samsort_up_8_0);
	MR_init_label10(array__samsort_up_8_0,40,4,5,3,9,10,11,12,7,8)
	MR_init_label3(array__samsort_up_8_0,14,15,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'samsort_up'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__samsort_up_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 <= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(array__samsort_up_8_0_i40);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(array__samsort_up_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(array__samsort_up_8_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r7;
	MR_sv(4) = MR_tempr2;
	MR_sv(6) = MR_r1;
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(array__samsort_down_8_0,
		array__samsort_up_8_0_i4);
MR_def_label(array__samsort_up_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_r6 = ((MR_Integer) MR_sv(4) - (MR_Integer) 1);
	MR_r7 = MR_r3;
	MR_r8 = MR_tempr2;
	}
	MR_np_call_localret_ent(array__merge_subarrays_8_0,
		array__samsort_up_8_0_i5);
MR_def_label(array__samsort_up_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	}
	MR_np_localcall_lab(array__samsort_up_8_0,
		array__samsort_up_8_0_i17);
MR_def_label(array__samsort_up_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(array__samsort_up_8_0_i8);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r6;
	MR_sv(6) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		array__samsort_up_8_0_i9);
MR_def_label(array__samsort_up_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(array__lookup_3_0,
		array__samsort_up_8_0_i10);
MR_def_label(array__samsort_up_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		array__samsort_up_8_0_i11);
MR_def_label(array__samsort_up_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(array__samsort_up_8_0_i7);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(fn__array__search_until_4_0,
		array__samsort_up_8_0_i12);
MR_def_label(array__samsort_up_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_r5 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__copy_subarray_reverse_6_0,
		array__samsort_up_8_0_i15);
MR_def_label(array__samsort_up_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r1 = MR_sv(6);
MR_def_label(array__samsort_up_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(3) = MR_tempr2;
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__array__search_until_4_0,
		array__samsort_up_8_0_i14);
MR_def_label(array__samsort_up_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_r5 = MR_r3;
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__copy_subarray_6_0,
		array__samsort_up_8_0_i15);
MR_def_label(array__samsort_up_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_r1;
	MR_r7 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_np_localcall_lab(array__samsort_up_8_0,
		array__samsort_up_8_0_i17);
MR_def_label(array__samsort_up_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module87)
	MR_init_entry1(fn__array__samsort_subarray_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__samsort_subarray_3_0);
	MR_init_label1(fn__array__samsort_subarray_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'samsort_subarray'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__samsort_subarray_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__array__samsort_subarray_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array0);
{
#line 1936 "array.m"

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 7458 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	MR_r7 = MR_r5;
	}
	MR_np_call_localret_ent(array__samsort_up_8_0,
		fn__array__samsort_subarray_3_0_i2);
MR_def_label(fn__array__samsort_subarray_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module88)
	MR_init_entry1(fn__array__sort_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__sort_1_0);
	MR_init_label1(fn__array__sort_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sort'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__sort_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__fn__array__sort_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 7512 "array.c"
	MR_r5 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__sort_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 7526 "array.c"
	MR_r6 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__array__sort_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array0);
{
#line 1936 "array.m"

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 7541 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r4);
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_r7 = MR_r5;
	}
	MR_np_call_localret_ent(array__samsort_up_8_0,
		fn__array__sort_1_0_i2);
MR_def_label(fn__array__sort_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module89)
	MR_init_entry1(fn__array__do_foldl_func_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__do_foldl_func_5_0);
	MR_init_label3(fn__array__do_foldl_func_5_0,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl_func'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__do_foldl_func_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(fn__array__do_foldl_func_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(fn__array__do_foldl_func_5_0_i2);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(7);
MR_def_label(fn__array__do_foldl_func_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__fn__array__do_foldl_func_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
	Index = MR_r6;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 7604 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__array__do_foldl_func_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__array__do_foldl_func_5_0_i3);
MR_def_label(fn__array__do_foldl_func_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r7 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(fn__array__do_foldl_func_5_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module90)
	MR_init_entry1(fn__array__do_foldl_func_5_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__do_foldl_func_5_1);
	MR_init_label3(fn__array__do_foldl_func_5_1,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl_func'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__do_foldl_func_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(fn__array__do_foldl_func_5_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(fn__array__do_foldl_func_5_1_i2);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(7);
MR_def_label(fn__array__do_foldl_func_5_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__fn__array__do_foldl_func_5_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
	Index = MR_r6;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 7683 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__array__do_foldl_func_5_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__array__do_foldl_func_5_1_i3);
MR_def_label(fn__array__do_foldl_func_5_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r7 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(fn__array__do_foldl_func_5_1_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module91)
	MR_init_entry1(fn__array__foldl_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__foldl_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__foldl_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__fn__array__foldl_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 7747 "array.c"
	MR_r6 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__foldl_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 7761 "array.c"
	MR_r7 = Max;
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(fn__array__do_foldl_func_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module92)
	MR_init_entry1(fn__array__foldl_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__foldl_3_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__foldl_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__fn__array__foldl_3_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 7797 "array.c"
	MR_r6 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__foldl_3_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 7811 "array.c"
	MR_r7 = Max;
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(fn__array__do_foldl_func_5_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module93)
	MR_init_entry1(array__do_foldl_pred_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl_pred_6_0);
	MR_init_label3(array__do_foldl_pred_6_0,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl_pred'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl_pred_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl_pred_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(array__do_foldl_pred_6_0_i2);
	}
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(7);
MR_def_label(array__do_foldl_pred_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl_pred_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
	Index = MR_r5;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 7862 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl_pred_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__do_foldl_pred_6_0_i3);
MR_def_label(array__do_foldl_pred_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(array__do_foldl_pred_6_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module94)
	MR_init_entry1(array__do_foldl_pred_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl_pred_6_1);
	MR_init_label3(array__do_foldl_pred_6_1,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl_pred'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl_pred_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl_pred_6_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(array__do_foldl_pred_6_1_i2);
	}
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(7);
MR_def_label(array__do_foldl_pred_6_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl_pred_6_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
	Index = MR_r5;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 7941 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl_pred_6_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__do_foldl_pred_6_1_i3);
MR_def_label(array__do_foldl_pred_6_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(array__do_foldl_pred_6_1_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module95)
	MR_init_entry1(array__do_foldl_pred_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl_pred_6_2);
	MR_init_label3(array__do_foldl_pred_6_2,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl_pred'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl_pred_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl_pred_6_2,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(array__do_foldl_pred_6_2_i2);
	}
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(7);
MR_def_label(array__do_foldl_pred_6_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl_pred_6_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
	Index = MR_r5;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 8020 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl_pred_6_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__do_foldl_pred_6_2_i3);
MR_def_label(array__do_foldl_pred_6_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(array__do_foldl_pred_6_2_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module96)
	MR_init_entry1(array__do_foldl_pred_6_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl_pred_6_3);
	MR_init_label4(array__do_foldl_pred_6_3,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl_pred'/6 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl_pred_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl_pred_6_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(array__do_foldl_pred_6_3_i2);
	}
	MR_r2 = MR_r7;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(array__do_foldl_pred_6_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl_pred_6_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
	Index = MR_r5;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 8100 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl_pred_6_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__do_foldl_pred_6_3_i3);
MR_def_label(array__do_foldl_pred_6_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldl_pred_6_3_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(array__do_foldl_pred_6_3_i18);
	}
MR_def_label(array__do_foldl_pred_6_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module97)
	MR_init_entry1(array__do_foldl_pred_6_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl_pred_6_4);
	MR_init_label4(array__do_foldl_pred_6_4,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl_pred'/6 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl_pred_6_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl_pred_6_4,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(array__do_foldl_pred_6_4_i2);
	}
	MR_r2 = MR_r7;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(array__do_foldl_pred_6_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl_pred_6_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
	Index = MR_r5;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 8187 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl_pred_6_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__do_foldl_pred_6_4_i3);
MR_def_label(array__do_foldl_pred_6_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldl_pred_6_4_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(array__do_foldl_pred_6_4_i18);
	}
MR_def_label(array__do_foldl_pred_6_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module98)
	MR_init_entry1(array__do_foldl_pred_6_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl_pred_6_5);
	MR_init_label4(array__do_foldl_pred_6_5,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl_pred'/6 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl_pred_6_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl_pred_6_5,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(array__do_foldl_pred_6_5_i2);
	}
	MR_r2 = MR_r7;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(array__do_foldl_pred_6_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl_pred_6_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
	Index = MR_r5;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 8274 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl_pred_6_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__do_foldl_pred_6_5_i3);
MR_def_label(array__do_foldl_pred_6_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldl_pred_6_5_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(array__do_foldl_pred_6_5_i18);
	}
MR_def_label(array__do_foldl_pred_6_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module99)
	MR_init_entry1(array__foldl_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 8347 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 8361 "array.c"
	MR_r6 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_np_tailcall_ent(array__do_foldl_pred_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module100)
	MR_init_entry1(array__foldl_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl_4_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl_4_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 8403 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl_4_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 8417 "array.c"
	MR_r6 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_np_tailcall_ent(array__do_foldl_pred_6_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module101)
	MR_init_entry1(array__foldl_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl_4_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl_4_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 8459 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl_4_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 8473 "array.c"
	MR_r6 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_np_tailcall_ent(array__do_foldl_pred_6_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module102)
	MR_init_entry1(array__foldl_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl_4_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl_4_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 8515 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl_4_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 8529 "array.c"
	MR_r6 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_np_tailcall_ent(array__do_foldl_pred_6_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module103)
	MR_init_entry1(array__foldl_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl_4_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl_4_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 8571 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl_4_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 8585 "array.c"
	MR_r6 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_np_tailcall_ent(array__do_foldl_pred_6_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module104)
	MR_init_entry1(array__foldl_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl_4_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl_4_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 8627 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl_4_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 8641 "array.c"
	MR_r6 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_np_tailcall_ent(array__do_foldl_pred_6_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(array_module105)
	MR_init_entry1(array__do_foldl2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl2_8_0);
	MR_init_label3(array__do_foldl2_8_0,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl2_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(array__do_foldl2_8_0_i2);
	}
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_decr_sp_and_return(8);
MR_def_label(array__do_foldl2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl2_8_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
	Index = MR_r5;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 8698 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl2_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array__do_foldl2_8_0_i3);
MR_def_label(array__do_foldl2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__do_foldl2_8_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module106)
	MR_init_entry1(array__do_foldl2_8_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl2_8_1);
	MR_init_label3(array__do_foldl2_8_1,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl2'/8 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl2_8_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl2_8_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(array__do_foldl2_8_1_i2);
	}
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_decr_sp_and_return(8);
MR_def_label(array__do_foldl2_8_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl2_8_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
	Index = MR_r5;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 8783 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl2_8_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array__do_foldl2_8_1_i3);
MR_def_label(array__do_foldl2_8_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__do_foldl2_8_1_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module107)
	MR_init_entry1(array__do_foldl2_8_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl2_8_2);
	MR_init_label3(array__do_foldl2_8_2,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl2'/8 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl2_8_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl2_8_2,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(array__do_foldl2_8_2_i2);
	}
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_decr_sp_and_return(8);
MR_def_label(array__do_foldl2_8_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl2_8_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
	Index = MR_r5;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 8868 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl2_8_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array__do_foldl2_8_2_i3);
MR_def_label(array__do_foldl2_8_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__do_foldl2_8_2_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module108)
	MR_init_entry1(array__do_foldl2_8_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl2_8_3);
	MR_init_label4(array__do_foldl2_8_3,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl2'/8 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl2_8_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl2_8_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(array__do_foldl2_8_3_i2);
	}
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(array__do_foldl2_8_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl2_8_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
	Index = MR_r5;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 8954 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl2_8_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array__do_foldl2_8_3_i3);
MR_def_label(array__do_foldl2_8_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldl2_8_3_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__do_foldl2_8_3_i18);
	}
MR_def_label(array__do_foldl2_8_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module109)
	MR_init_entry1(array__do_foldl2_8_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl2_8_4);
	MR_init_label4(array__do_foldl2_8_4,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl2'/8 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl2_8_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl2_8_4,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(array__do_foldl2_8_4_i2);
	}
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(array__do_foldl2_8_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl2_8_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
	Index = MR_r5;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 9047 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl2_8_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array__do_foldl2_8_4_i3);
MR_def_label(array__do_foldl2_8_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldl2_8_4_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__do_foldl2_8_4_i18);
	}
MR_def_label(array__do_foldl2_8_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module110)
	MR_init_entry1(array__do_foldl2_8_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl2_8_5);
	MR_init_label4(array__do_foldl2_8_5,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl2'/8 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl2_8_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl2_8_5,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(array__do_foldl2_8_5_i2);
	}
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(array__do_foldl2_8_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl2_8_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
	Index = MR_r5;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 9140 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl2_8_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array__do_foldl2_8_5_i3);
MR_def_label(array__do_foldl2_8_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldl2_8_5_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__do_foldl2_8_5_i18);
	}
MR_def_label(array__do_foldl2_8_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module111)
	MR_init_entry1(array__foldl2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl2_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl2_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 9218 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl2_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 9232 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_np_tailcall_ent(array__do_foldl2_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module112)
	MR_init_entry1(array__foldl2_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl2_6_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl2_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl2_6_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 9279 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl2_6_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 9293 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_np_tailcall_ent(array__do_foldl2_8_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module113)
	MR_init_entry1(array__foldl2_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl2_6_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl2_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl2_6_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 9340 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl2_6_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 9354 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_np_tailcall_ent(array__do_foldl2_8_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module114)
	MR_init_entry1(array__foldl2_6_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl2_6_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl2_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl2_6_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 9401 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl2_6_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 9415 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_np_tailcall_ent(array__do_foldl2_8_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module115)
	MR_init_entry1(array__foldl2_6_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl2_6_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl2_6_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl2_6_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 9462 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl2_6_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 9476 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_np_tailcall_ent(array__do_foldl2_8_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module116)
	MR_init_entry1(array__foldl2_6_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl2_6_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl2_6_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl2_6_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 9523 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl2_6_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 9537 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_np_tailcall_ent(array__do_foldl2_8_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_4);

MR_BEGIN_MODULE(array_module117)
	MR_init_entry1(array__do_foldl3_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl3_10_0);
	MR_init_label3(array__do_foldl3_10_0,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl3'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl3_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl3_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(array__do_foldl3_10_0_i2);
	}
	MR_r1 = MR_r9;
	MR_r2 = MR_r10;
	MR_r3 = MR_r11;
	MR_decr_sp_and_return(9);
MR_def_label(array__do_foldl3_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl3_10_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
	Index = MR_r6;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 9600 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl3_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__array__do_foldl3_10_0_i3);
MR_def_label(array__do_foldl3_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(array__do_foldl3_10_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module118)
	MR_init_entry1(array__do_foldl3_10_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl3_10_1);
	MR_init_label3(array__do_foldl3_10_1,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl3'/10 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl3_10_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl3_10_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(array__do_foldl3_10_1_i2);
	}
	MR_r1 = MR_r9;
	MR_r2 = MR_r10;
	MR_r3 = MR_r11;
	MR_decr_sp_and_return(9);
MR_def_label(array__do_foldl3_10_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl3_10_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
	Index = MR_r6;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 9691 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl3_10_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__array__do_foldl3_10_1_i3);
MR_def_label(array__do_foldl3_10_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(array__do_foldl3_10_1_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module119)
	MR_init_entry1(array__do_foldl3_10_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl3_10_2);
	MR_init_label3(array__do_foldl3_10_2,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl3'/10 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl3_10_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl3_10_2,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(array__do_foldl3_10_2_i2);
	}
	MR_r1 = MR_r9;
	MR_r2 = MR_r10;
	MR_r3 = MR_r11;
	MR_decr_sp_and_return(9);
MR_def_label(array__do_foldl3_10_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl3_10_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
	Index = MR_r6;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 9782 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl3_10_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__array__do_foldl3_10_2_i3);
MR_def_label(array__do_foldl3_10_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(array__do_foldl3_10_2_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module120)
	MR_init_entry1(array__do_foldl3_10_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl3_10_3);
	MR_init_label4(array__do_foldl3_10_3,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl3'/10 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl3_10_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl3_10_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(array__do_foldl3_10_3_i2);
	}
	MR_r2 = MR_r9;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(array__do_foldl3_10_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl3_10_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
	Index = MR_r6;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 9874 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl3_10_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__array__do_foldl3_10_3_i3);
MR_def_label(array__do_foldl3_10_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldl3_10_3_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(array__do_foldl3_10_3_i18);
	}
MR_def_label(array__do_foldl3_10_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module121)
	MR_init_entry1(array__do_foldl3_10_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl3_10_4);
	MR_init_label4(array__do_foldl3_10_4,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl3'/10 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl3_10_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl3_10_4,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(array__do_foldl3_10_4_i2);
	}
	MR_r2 = MR_r9;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(array__do_foldl3_10_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl3_10_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
	Index = MR_r6;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 9973 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl3_10_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__array__do_foldl3_10_4_i3);
MR_def_label(array__do_foldl3_10_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldl3_10_4_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(array__do_foldl3_10_4_i18);
	}
MR_def_label(array__do_foldl3_10_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module122)
	MR_init_entry1(array__do_foldl3_10_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl3_10_5);
	MR_init_label4(array__do_foldl3_10_5,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl3'/10 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl3_10_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl3_10_5,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(array__do_foldl3_10_5_i2);
	}
	MR_r2 = MR_r9;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(array__do_foldl3_10_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl3_10_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
	Index = MR_r6;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 10072 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl3_10_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__array__do_foldl3_10_5_i3);
MR_def_label(array__do_foldl3_10_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldl3_10_5_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(array__do_foldl3_10_5_i18);
	}
MR_def_label(array__do_foldl3_10_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module123)
	MR_init_entry1(array__foldl3_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl3_8_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl3_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl3_8_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 10155 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl3_8_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 10169 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_tempr4 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_tempr5 = MR_r8;
	MR_r8 = MR_tempr3;
	MR_tempr6 = MR_r9;
	MR_r9 = MR_tempr4;
	MR_r10 = MR_tempr5;
	MR_r11 = MR_tempr6;
	MR_np_tailcall_ent(array__do_foldl3_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module124)
	MR_init_entry1(array__foldl3_8_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl3_8_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3'/8 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl3_8_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl3_8_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 10218 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl3_8_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 10232 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_tempr4 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_tempr5 = MR_r8;
	MR_r8 = MR_tempr3;
	MR_tempr6 = MR_r9;
	MR_r9 = MR_tempr4;
	MR_r10 = MR_tempr5;
	MR_r11 = MR_tempr6;
	MR_np_tailcall_ent(array__do_foldl3_10_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module125)
	MR_init_entry1(array__foldl3_8_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl3_8_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3'/8 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl3_8_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl3_8_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 10281 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl3_8_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 10295 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_tempr4 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_tempr5 = MR_r8;
	MR_r8 = MR_tempr3;
	MR_tempr6 = MR_r9;
	MR_r9 = MR_tempr4;
	MR_r10 = MR_tempr5;
	MR_r11 = MR_tempr6;
	MR_np_tailcall_ent(array__do_foldl3_10_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module126)
	MR_init_entry1(array__foldl3_8_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl3_8_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3'/8 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl3_8_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl3_8_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 10344 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl3_8_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 10358 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_tempr4 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_tempr5 = MR_r8;
	MR_r8 = MR_tempr3;
	MR_tempr6 = MR_r9;
	MR_r9 = MR_tempr4;
	MR_r10 = MR_tempr5;
	MR_r11 = MR_tempr6;
	MR_np_tailcall_ent(array__do_foldl3_10_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module127)
	MR_init_entry1(array__foldl3_8_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl3_8_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3'/8 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl3_8_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl3_8_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 10407 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl3_8_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 10421 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_tempr4 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_tempr5 = MR_r8;
	MR_r8 = MR_tempr3;
	MR_tempr6 = MR_r9;
	MR_r9 = MR_tempr4;
	MR_r10 = MR_tempr5;
	MR_r11 = MR_tempr6;
	MR_np_tailcall_ent(array__do_foldl3_10_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module128)
	MR_init_entry1(array__foldl3_8_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl3_8_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3'/8 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl3_8_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl3_8_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 10470 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl3_8_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 10484 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_tempr4 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_tempr5 = MR_r8;
	MR_r8 = MR_tempr3;
	MR_tempr6 = MR_r9;
	MR_r9 = MR_tempr4;
	MR_r10 = MR_tempr5;
	MR_r11 = MR_tempr6;
	MR_np_tailcall_ent(array__do_foldl3_10_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_5);

MR_BEGIN_MODULE(array_module129)
	MR_init_entry1(array__do_foldl4_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl4_12_0);
	MR_init_label3(array__do_foldl4_12_0,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl4'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl4_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl4_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r8 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(array__do_foldl4_12_0_i2);
	}
	MR_r1 = MR_r10;
	MR_r2 = MR_r11;
	MR_r3 = MR_r12;
	MR_r4 = MR_r13;
	MR_decr_sp_and_return(10);
MR_def_label(array__do_foldl4_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl4_12_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r9, Array);
	Index = MR_r7;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 10550 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl4_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__array__do_foldl4_12_0_i3);
MR_def_label(array__do_foldl4_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(1);
	MR_r7 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(array__do_foldl4_12_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module130)
	MR_init_entry1(array__do_foldl4_12_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl4_12_1);
	MR_init_label3(array__do_foldl4_12_1,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl4'/12 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl4_12_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl4_12_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r8 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(array__do_foldl4_12_1_i2);
	}
	MR_r1 = MR_r10;
	MR_r2 = MR_r11;
	MR_r3 = MR_r12;
	MR_r4 = MR_r13;
	MR_decr_sp_and_return(10);
MR_def_label(array__do_foldl4_12_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl4_12_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r9, Array);
	Index = MR_r7;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 10647 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl4_12_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__array__do_foldl4_12_1_i3);
MR_def_label(array__do_foldl4_12_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(1);
	MR_r7 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(array__do_foldl4_12_1_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module131)
	MR_init_entry1(array__do_foldl4_12_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl4_12_2);
	MR_init_label3(array__do_foldl4_12_2,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl4'/12 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl4_12_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl4_12_2,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r8 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(array__do_foldl4_12_2_i2);
	}
	MR_r1 = MR_r10;
	MR_r2 = MR_r11;
	MR_r3 = MR_r12;
	MR_r4 = MR_r13;
	MR_decr_sp_and_return(10);
MR_def_label(array__do_foldl4_12_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl4_12_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r9, Array);
	Index = MR_r7;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 10744 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl4_12_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__array__do_foldl4_12_2_i3);
MR_def_label(array__do_foldl4_12_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(1);
	MR_r7 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(array__do_foldl4_12_2_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module132)
	MR_init_entry1(array__do_foldl4_12_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl4_12_3);
	MR_init_label4(array__do_foldl4_12_3,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl4'/12 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl4_12_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl4_12_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r8 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(array__do_foldl4_12_3_i2);
	}
	MR_r2 = MR_r10;
	MR_r3 = MR_r11;
	MR_r4 = MR_r12;
	MR_r5 = MR_r13;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(array__do_foldl4_12_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl4_12_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r9, Array);
	Index = MR_r7;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 10842 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl4_12_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__array__do_foldl4_12_3_i3);
MR_def_label(array__do_foldl4_12_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldl4_12_3_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(1);
	MR_r7 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(array__do_foldl4_12_3_i18);
	}
MR_def_label(array__do_foldl4_12_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module133)
	MR_init_entry1(array__do_foldl4_12_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl4_12_4);
	MR_init_label4(array__do_foldl4_12_4,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl4'/12 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl4_12_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl4_12_4,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r8 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(array__do_foldl4_12_4_i2);
	}
	MR_r2 = MR_r10;
	MR_r3 = MR_r11;
	MR_r4 = MR_r12;
	MR_r5 = MR_r13;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(array__do_foldl4_12_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl4_12_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r9, Array);
	Index = MR_r7;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 10947 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl4_12_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__array__do_foldl4_12_4_i3);
MR_def_label(array__do_foldl4_12_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldl4_12_4_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(1);
	MR_r7 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(array__do_foldl4_12_4_i18);
	}
MR_def_label(array__do_foldl4_12_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module134)
	MR_init_entry1(array__do_foldl4_12_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl4_12_5);
	MR_init_label4(array__do_foldl4_12_5,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl4'/12 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl4_12_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl4_12_5,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r8 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(array__do_foldl4_12_5_i2);
	}
	MR_r2 = MR_r10;
	MR_r3 = MR_r11;
	MR_r4 = MR_r12;
	MR_r5 = MR_r13;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(array__do_foldl4_12_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl4_12_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r9, Array);
	Index = MR_r7;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 11052 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl4_12_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__array__do_foldl4_12_5_i3);
MR_def_label(array__do_foldl4_12_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldl4_12_5_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(1);
	MR_r7 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(array__do_foldl4_12_5_i18);
	}
MR_def_label(array__do_foldl4_12_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module135)
	MR_init_entry1(array__foldl4_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl4_10_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl4'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl4_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl4_10_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 11140 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl4_10_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 11154 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_tempr4 = MR_r8;
	MR_r8 = MR_tempr2;
	MR_tempr5 = MR_r9;
	MR_r9 = MR_tempr3;
	MR_tempr6 = MR_r10;
	MR_r10 = MR_tempr4;
	MR_tempr7 = MR_r11;
	MR_r11 = MR_tempr5;
	MR_r12 = MR_tempr6;
	MR_r13 = MR_tempr7;
	MR_np_tailcall_ent(array__do_foldl4_12_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module136)
	MR_init_entry1(array__foldl4_10_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl4_10_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl4'/10 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl4_10_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl4_10_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 11205 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl4_10_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 11219 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_tempr4 = MR_r8;
	MR_r8 = MR_tempr2;
	MR_tempr5 = MR_r9;
	MR_r9 = MR_tempr3;
	MR_tempr6 = MR_r10;
	MR_r10 = MR_tempr4;
	MR_tempr7 = MR_r11;
	MR_r11 = MR_tempr5;
	MR_r12 = MR_tempr6;
	MR_r13 = MR_tempr7;
	MR_np_tailcall_ent(array__do_foldl4_12_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module137)
	MR_init_entry1(array__foldl4_10_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl4_10_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl4'/10 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl4_10_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl4_10_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 11270 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl4_10_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 11284 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_tempr4 = MR_r8;
	MR_r8 = MR_tempr2;
	MR_tempr5 = MR_r9;
	MR_r9 = MR_tempr3;
	MR_tempr6 = MR_r10;
	MR_r10 = MR_tempr4;
	MR_tempr7 = MR_r11;
	MR_r11 = MR_tempr5;
	MR_r12 = MR_tempr6;
	MR_r13 = MR_tempr7;
	MR_np_tailcall_ent(array__do_foldl4_12_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module138)
	MR_init_entry1(array__foldl4_10_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl4_10_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl4'/10 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl4_10_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl4_10_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 11335 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl4_10_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 11349 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_tempr4 = MR_r8;
	MR_r8 = MR_tempr2;
	MR_tempr5 = MR_r9;
	MR_r9 = MR_tempr3;
	MR_tempr6 = MR_r10;
	MR_r10 = MR_tempr4;
	MR_tempr7 = MR_r11;
	MR_r11 = MR_tempr5;
	MR_r12 = MR_tempr6;
	MR_r13 = MR_tempr7;
	MR_np_tailcall_ent(array__do_foldl4_12_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module139)
	MR_init_entry1(array__foldl4_10_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl4_10_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl4'/10 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl4_10_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl4_10_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 11400 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl4_10_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 11414 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_tempr4 = MR_r8;
	MR_r8 = MR_tempr2;
	MR_tempr5 = MR_r9;
	MR_r9 = MR_tempr3;
	MR_tempr6 = MR_r10;
	MR_r10 = MR_tempr4;
	MR_tempr7 = MR_r11;
	MR_r11 = MR_tempr5;
	MR_r12 = MR_tempr6;
	MR_r13 = MR_tempr7;
	MR_np_tailcall_ent(array__do_foldl4_12_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module140)
	MR_init_entry1(array__foldl4_10_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl4_10_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl4'/10 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl4_10_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl4_10_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 11465 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl4_10_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 11479 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_tempr4 = MR_r8;
	MR_r8 = MR_tempr2;
	MR_tempr5 = MR_r9;
	MR_r9 = MR_tempr3;
	MR_tempr6 = MR_r10;
	MR_r10 = MR_tempr4;
	MR_tempr7 = MR_r11;
	MR_r11 = MR_tempr5;
	MR_r12 = MR_tempr6;
	MR_r13 = MR_tempr7;
	MR_np_tailcall_ent(array__do_foldl4_12_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_compact);

MR_BEGIN_MODULE(array_module141)
	MR_init_entry1(array__do_foldl5_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl5_14_0);
	MR_init_label3(array__do_foldl5_14_0,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl5'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl5_14_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl5_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r9 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(array__do_foldl5_14_0_i2);
	}
	MR_r1 = MR_r11;
	MR_r2 = MR_r12;
	MR_r3 = MR_r13;
	MR_r4 = MR_r14;
	MR_r5 = MR_r15;
	MR_decr_sp_and_return(11);
MR_def_label(array__do_foldl5_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl5_14_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r10, Array);
	Index = MR_r8;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 11548 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r7;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	MR_r7 = MR_r14;
	MR_r8 = MR_r15;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl5_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__array__do_foldl5_14_0_i3);
MR_def_label(array__do_foldl5_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(1);
	MR_r8 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r13 = MR_tempr3;
	MR_r14 = MR_tempr4;
	MR_r15 = MR_tempr5;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(array__do_foldl5_14_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module142)
	MR_init_entry1(array__do_foldl5_14_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl5_14_1);
	MR_init_label3(array__do_foldl5_14_1,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl5'/14 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl5_14_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl5_14_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r9 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(array__do_foldl5_14_1_i2);
	}
	MR_r1 = MR_r11;
	MR_r2 = MR_r12;
	MR_r3 = MR_r13;
	MR_r4 = MR_r14;
	MR_r5 = MR_r15;
	MR_decr_sp_and_return(11);
MR_def_label(array__do_foldl5_14_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl5_14_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r10, Array);
	Index = MR_r8;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 11652 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r7;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	MR_r7 = MR_r14;
	MR_r8 = MR_r15;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl5_14_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__array__do_foldl5_14_1_i3);
MR_def_label(array__do_foldl5_14_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(1);
	MR_r8 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r13 = MR_tempr3;
	MR_r14 = MR_tempr4;
	MR_r15 = MR_tempr5;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(array__do_foldl5_14_1_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module143)
	MR_init_entry1(array__do_foldl5_14_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl5_14_2);
	MR_init_label3(array__do_foldl5_14_2,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl5'/14 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl5_14_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl5_14_2,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r9 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(array__do_foldl5_14_2_i2);
	}
	MR_r1 = MR_r11;
	MR_r2 = MR_r12;
	MR_r3 = MR_r13;
	MR_r4 = MR_r14;
	MR_r5 = MR_r15;
	MR_decr_sp_and_return(11);
MR_def_label(array__do_foldl5_14_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl5_14_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r10, Array);
	Index = MR_r8;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 11756 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r7;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	MR_r7 = MR_r14;
	MR_r8 = MR_r15;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl5_14_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__array__do_foldl5_14_2_i3);
MR_def_label(array__do_foldl5_14_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(1);
	MR_r8 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r13 = MR_tempr3;
	MR_r14 = MR_tempr4;
	MR_r15 = MR_tempr5;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(array__do_foldl5_14_2_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module144)
	MR_init_entry1(array__do_foldl5_14_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl5_14_3);
	MR_init_label4(array__do_foldl5_14_3,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl5'/14 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl5_14_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl5_14_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r9 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(array__do_foldl5_14_3_i2);
	}
	MR_r2 = MR_r11;
	MR_r3 = MR_r12;
	MR_r4 = MR_r13;
	MR_r5 = MR_r14;
	MR_r6 = MR_r15;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(11);
MR_def_label(array__do_foldl5_14_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl5_14_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r10, Array);
	Index = MR_r8;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 11861 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r7;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	MR_r7 = MR_r14;
	MR_r8 = MR_r15;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl5_14_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__array__do_foldl5_14_3_i3);
MR_def_label(array__do_foldl5_14_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldl5_14_3_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(9);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(1);
	MR_r8 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r13 = MR_tempr3;
	MR_r14 = MR_tempr4;
	MR_r15 = MR_tempr5;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(array__do_foldl5_14_3_i18);
	}
MR_def_label(array__do_foldl5_14_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module145)
	MR_init_entry1(array__do_foldl5_14_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl5_14_4);
	MR_init_label4(array__do_foldl5_14_4,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl5'/14 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl5_14_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl5_14_4,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r9 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(array__do_foldl5_14_4_i2);
	}
	MR_r2 = MR_r11;
	MR_r3 = MR_r12;
	MR_r4 = MR_r13;
	MR_r5 = MR_r14;
	MR_r6 = MR_r15;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(11);
MR_def_label(array__do_foldl5_14_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl5_14_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r10, Array);
	Index = MR_r8;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 11973 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r7;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	MR_r7 = MR_r14;
	MR_r8 = MR_r15;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl5_14_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__array__do_foldl5_14_4_i3);
MR_def_label(array__do_foldl5_14_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldl5_14_4_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(9);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(1);
	MR_r8 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r13 = MR_tempr3;
	MR_r14 = MR_tempr4;
	MR_r15 = MR_tempr5;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(array__do_foldl5_14_4_i18);
	}
MR_def_label(array__do_foldl5_14_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module146)
	MR_init_entry1(array__do_foldl5_14_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldl5_14_5);
	MR_init_label4(array__do_foldl5_14_5,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl5'/14 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldl5_14_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(array__do_foldl5_14_5,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r9 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(array__do_foldl5_14_5_i2);
	}
	MR_r2 = MR_r11;
	MR_r3 = MR_r12;
	MR_r4 = MR_r13;
	MR_r5 = MR_r14;
	MR_r6 = MR_r15;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(11);
MR_def_label(array__do_foldl5_14_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldl5_14_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r10, Array);
	Index = MR_r8;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 12085 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r7;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	MR_r7 = MR_r14;
	MR_r8 = MR_r15;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldl5_14_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__array__do_foldl5_14_5_i3);
MR_def_label(array__do_foldl5_14_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldl5_14_5_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(9);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(1);
	MR_r8 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r13 = MR_tempr3;
	MR_r14 = MR_tempr4;
	MR_r15 = MR_tempr5;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(array__do_foldl5_14_5_i18);
	}
MR_def_label(array__do_foldl5_14_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module147)
	MR_init_entry1(array__foldl5_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl5_12_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl5'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl5_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl5_12_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 12179 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl5_12_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 12193 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r8;
	MR_r8 = MR_tempr1;
	MR_tempr4 = MR_r9;
	MR_r9 = MR_tempr2;
	MR_tempr5 = MR_r10;
	MR_r10 = MR_tempr3;
	MR_tempr6 = MR_r11;
	MR_r11 = MR_tempr4;
	MR_tempr7 = MR_r12;
	MR_r12 = MR_tempr5;
	MR_tempr8 = MR_r13;
	MR_r13 = MR_tempr6;
	MR_r14 = MR_tempr7;
	MR_r15 = MR_tempr8;
	MR_np_tailcall_ent(array__do_foldl5_14_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module148)
	MR_init_entry1(array__foldl5_12_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl5_12_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl5'/12 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl5_12_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl5_12_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 12246 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl5_12_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 12260 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r8;
	MR_r8 = MR_tempr1;
	MR_tempr4 = MR_r9;
	MR_r9 = MR_tempr2;
	MR_tempr5 = MR_r10;
	MR_r10 = MR_tempr3;
	MR_tempr6 = MR_r11;
	MR_r11 = MR_tempr4;
	MR_tempr7 = MR_r12;
	MR_r12 = MR_tempr5;
	MR_tempr8 = MR_r13;
	MR_r13 = MR_tempr6;
	MR_r14 = MR_tempr7;
	MR_r15 = MR_tempr8;
	MR_np_tailcall_ent(array__do_foldl5_14_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module149)
	MR_init_entry1(array__foldl5_12_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl5_12_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl5'/12 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl5_12_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl5_12_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 12313 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl5_12_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 12327 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r8;
	MR_r8 = MR_tempr1;
	MR_tempr4 = MR_r9;
	MR_r9 = MR_tempr2;
	MR_tempr5 = MR_r10;
	MR_r10 = MR_tempr3;
	MR_tempr6 = MR_r11;
	MR_r11 = MR_tempr4;
	MR_tempr7 = MR_r12;
	MR_r12 = MR_tempr5;
	MR_tempr8 = MR_r13;
	MR_r13 = MR_tempr6;
	MR_r14 = MR_tempr7;
	MR_r15 = MR_tempr8;
	MR_np_tailcall_ent(array__do_foldl5_14_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module150)
	MR_init_entry1(array__foldl5_12_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl5_12_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl5'/12 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl5_12_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl5_12_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 12380 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl5_12_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 12394 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r8;
	MR_r8 = MR_tempr1;
	MR_tempr4 = MR_r9;
	MR_r9 = MR_tempr2;
	MR_tempr5 = MR_r10;
	MR_r10 = MR_tempr3;
	MR_tempr6 = MR_r11;
	MR_r11 = MR_tempr4;
	MR_tempr7 = MR_r12;
	MR_r12 = MR_tempr5;
	MR_tempr8 = MR_r13;
	MR_r13 = MR_tempr6;
	MR_r14 = MR_tempr7;
	MR_r15 = MR_tempr8;
	MR_np_tailcall_ent(array__do_foldl5_14_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module151)
	MR_init_entry1(array__foldl5_12_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl5_12_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl5'/12 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl5_12_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl5_12_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 12447 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl5_12_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 12461 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r8;
	MR_r8 = MR_tempr1;
	MR_tempr4 = MR_r9;
	MR_r9 = MR_tempr2;
	MR_tempr5 = MR_r10;
	MR_r10 = MR_tempr3;
	MR_tempr6 = MR_r11;
	MR_r11 = MR_tempr4;
	MR_tempr7 = MR_r12;
	MR_r12 = MR_tempr5;
	MR_tempr8 = MR_r13;
	MR_r13 = MR_tempr6;
	MR_r14 = MR_tempr7;
	MR_r15 = MR_tempr8;
	MR_np_tailcall_ent(array__do_foldl5_14_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module152)
	MR_init_entry1(array__foldl5_12_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl5_12_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl5'/12 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl5_12_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl5_12_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 12514 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl5_12_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 12528 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r8;
	MR_r8 = MR_tempr1;
	MR_tempr4 = MR_r9;
	MR_r9 = MR_tempr2;
	MR_tempr5 = MR_r10;
	MR_r10 = MR_tempr3;
	MR_tempr6 = MR_r11;
	MR_r11 = MR_tempr4;
	MR_tempr7 = MR_r12;
	MR_r12 = MR_tempr5;
	MR_tempr8 = MR_r13;
	MR_r13 = MR_tempr6;
	MR_r14 = MR_tempr7;
	MR_r15 = MR_tempr8;
	MR_np_tailcall_ent(array__do_foldl5_14_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module153)
	MR_init_entry1(fn__array__foldr_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__foldr_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__foldr_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__fn__array__foldr_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 12579 "array.c"
	MR_r6 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__foldr_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 12593 "array.c"
	MR_r7 = Max;
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(fn__array__do_foldr_func_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module154)
	MR_init_entry1(fn__array__foldr_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__foldr_3_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__foldr_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__fn__array__foldr_3_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 12629 "array.c"
	MR_r6 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__foldr_3_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 12643 "array.c"
	MR_r7 = Max;
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(fn__array__do_foldr_func_5_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module155)
	MR_init_entry1(array__do_foldr_pred_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr_pred_6_0);
	MR_init_label3(array__do_foldr_pred_6_0,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr_pred'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr_pred_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr_pred_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(array__do_foldr_pred_6_0_i2);
	}
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(7);
MR_def_label(array__do_foldr_pred_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr_pred_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
	Index = MR_r5;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 12694 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr_pred_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__do_foldr_pred_6_0_i3);
MR_def_label(array__do_foldr_pred_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(array__do_foldr_pred_6_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module156)
	MR_init_entry1(array__do_foldr_pred_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr_pred_6_1);
	MR_init_label3(array__do_foldr_pred_6_1,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr_pred'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr_pred_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr_pred_6_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(array__do_foldr_pred_6_1_i2);
	}
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(7);
MR_def_label(array__do_foldr_pred_6_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr_pred_6_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
	Index = MR_r5;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 12773 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr_pred_6_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__do_foldr_pred_6_1_i3);
MR_def_label(array__do_foldr_pred_6_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(array__do_foldr_pred_6_1_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module157)
	MR_init_entry1(array__do_foldr_pred_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr_pred_6_2);
	MR_init_label3(array__do_foldr_pred_6_2,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr_pred'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr_pred_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr_pred_6_2,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(array__do_foldr_pred_6_2_i2);
	}
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(7);
MR_def_label(array__do_foldr_pred_6_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr_pred_6_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
	Index = MR_r5;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 12852 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr_pred_6_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__do_foldr_pred_6_2_i3);
MR_def_label(array__do_foldr_pred_6_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(array__do_foldr_pred_6_2_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module158)
	MR_init_entry1(array__do_foldr_pred_6_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr_pred_6_3);
	MR_init_label4(array__do_foldr_pred_6_3,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr_pred'/6 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr_pred_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr_pred_6_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(array__do_foldr_pred_6_3_i2);
	}
	MR_r2 = MR_r7;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(array__do_foldr_pred_6_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr_pred_6_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
	Index = MR_r5;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 12932 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr_pred_6_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__do_foldr_pred_6_3_i3);
MR_def_label(array__do_foldr_pred_6_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldr_pred_6_3_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(array__do_foldr_pred_6_3_i18);
	}
MR_def_label(array__do_foldr_pred_6_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module159)
	MR_init_entry1(array__do_foldr_pred_6_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr_pred_6_4);
	MR_init_label4(array__do_foldr_pred_6_4,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr_pred'/6 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr_pred_6_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr_pred_6_4,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(array__do_foldr_pred_6_4_i2);
	}
	MR_r2 = MR_r7;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(array__do_foldr_pred_6_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr_pred_6_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
	Index = MR_r5;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 13019 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr_pred_6_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__do_foldr_pred_6_4_i3);
MR_def_label(array__do_foldr_pred_6_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldr_pred_6_4_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(array__do_foldr_pred_6_4_i18);
	}
MR_def_label(array__do_foldr_pred_6_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module160)
	MR_init_entry1(array__do_foldr_pred_6_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr_pred_6_5);
	MR_init_label4(array__do_foldr_pred_6_5,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr_pred'/6 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr_pred_6_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr_pred_6_5,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(array__do_foldr_pred_6_5_i2);
	}
	MR_r2 = MR_r7;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(array__do_foldr_pred_6_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr_pred_6_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
	Index = MR_r5;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 13106 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr_pred_6_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__do_foldr_pred_6_5_i3);
MR_def_label(array__do_foldr_pred_6_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldr_pred_6_5_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(array__do_foldr_pred_6_5_i18);
	}
MR_def_label(array__do_foldr_pred_6_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module161)
	MR_init_entry1(array__foldr_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 13179 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 13193 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	MR_np_tailcall_ent(array__do_foldr_pred_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module162)
	MR_init_entry1(array__foldr_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr_4_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr_4_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 13238 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr_4_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 13252 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	MR_np_tailcall_ent(array__do_foldr_pred_6_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module163)
	MR_init_entry1(array__foldr_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr_4_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr_4_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 13297 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr_4_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 13311 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	MR_np_tailcall_ent(array__do_foldr_pred_6_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module164)
	MR_init_entry1(array__foldr_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr_4_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr_4_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 13356 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr_4_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 13370 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	MR_np_tailcall_ent(array__do_foldr_pred_6_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module165)
	MR_init_entry1(array__foldr_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr_4_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr_4_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 13415 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr_4_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 13429 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	MR_np_tailcall_ent(array__do_foldr_pred_6_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module166)
	MR_init_entry1(array__foldr_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr_4_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr_4_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 13474 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr_4_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 13488 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	MR_np_tailcall_ent(array__do_foldr_pred_6_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module167)
	MR_init_entry1(array__do_foldr2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr2_8_0);
	MR_init_label3(array__do_foldr2_8_0,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr2_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(array__do_foldr2_8_0_i2);
	}
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_decr_sp_and_return(8);
MR_def_label(array__do_foldr2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr2_8_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
	Index = MR_r6;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 13547 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr2_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array__do_foldr2_8_0_i3);
MR_def_label(array__do_foldr2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__do_foldr2_8_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module168)
	MR_init_entry1(array__do_foldr2_8_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr2_8_1);
	MR_init_label3(array__do_foldr2_8_1,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr2'/8 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr2_8_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr2_8_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(array__do_foldr2_8_1_i2);
	}
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_decr_sp_and_return(8);
MR_def_label(array__do_foldr2_8_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr2_8_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
	Index = MR_r6;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 13632 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr2_8_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array__do_foldr2_8_1_i3);
MR_def_label(array__do_foldr2_8_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__do_foldr2_8_1_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module169)
	MR_init_entry1(array__do_foldr2_8_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr2_8_2);
	MR_init_label3(array__do_foldr2_8_2,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr2'/8 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr2_8_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr2_8_2,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(array__do_foldr2_8_2_i2);
	}
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_decr_sp_and_return(8);
MR_def_label(array__do_foldr2_8_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr2_8_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
	Index = MR_r6;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 13717 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr2_8_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array__do_foldr2_8_2_i3);
MR_def_label(array__do_foldr2_8_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__do_foldr2_8_2_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module170)
	MR_init_entry1(array__do_foldr2_8_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr2_8_3);
	MR_init_label4(array__do_foldr2_8_3,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr2'/8 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr2_8_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr2_8_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(array__do_foldr2_8_3_i2);
	}
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(array__do_foldr2_8_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr2_8_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
	Index = MR_r6;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 13803 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr2_8_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array__do_foldr2_8_3_i3);
MR_def_label(array__do_foldr2_8_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldr2_8_3_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__do_foldr2_8_3_i18);
	}
MR_def_label(array__do_foldr2_8_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module171)
	MR_init_entry1(array__do_foldr2_8_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr2_8_4);
	MR_init_label4(array__do_foldr2_8_4,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr2'/8 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr2_8_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr2_8_4,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(array__do_foldr2_8_4_i2);
	}
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(array__do_foldr2_8_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr2_8_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
	Index = MR_r6;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 13896 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr2_8_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array__do_foldr2_8_4_i3);
MR_def_label(array__do_foldr2_8_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldr2_8_4_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__do_foldr2_8_4_i18);
	}
MR_def_label(array__do_foldr2_8_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module172)
	MR_init_entry1(array__do_foldr2_8_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr2_8_5);
	MR_init_label4(array__do_foldr2_8_5,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr2'/8 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr2_8_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr2_8_5,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(array__do_foldr2_8_5_i2);
	}
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(array__do_foldr2_8_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr2_8_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
	Index = MR_r6;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 13989 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr2_8_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array__do_foldr2_8_5_i3);
MR_def_label(array__do_foldr2_8_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldr2_8_5_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__do_foldr2_8_5_i18);
	}
MR_def_label(array__do_foldr2_8_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module173)
	MR_init_entry1(array__foldr2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr2_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr2_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 14067 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr2_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 14081 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_np_tailcall_ent(array__do_foldr2_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module174)
	MR_init_entry1(array__foldr2_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr2_6_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr2'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr2_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr2_6_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 14128 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr2_6_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 14142 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_np_tailcall_ent(array__do_foldr2_8_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module175)
	MR_init_entry1(array__foldr2_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr2_6_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr2'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr2_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr2_6_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 14189 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr2_6_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 14203 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_np_tailcall_ent(array__do_foldr2_8_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module176)
	MR_init_entry1(array__foldr2_6_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr2_6_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr2'/6 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr2_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr2_6_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 14250 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr2_6_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 14264 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_np_tailcall_ent(array__do_foldr2_8_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module177)
	MR_init_entry1(array__foldr2_6_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr2_6_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr2'/6 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr2_6_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr2_6_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 14311 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr2_6_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 14325 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_np_tailcall_ent(array__do_foldr2_8_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module178)
	MR_init_entry1(array__foldr2_6_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr2_6_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr2'/6 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr2_6_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr2_6_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 14372 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr2_6_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 14386 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_np_tailcall_ent(array__do_foldr2_8_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module179)
	MR_init_entry1(array__do_foldr3_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr3_10_0);
	MR_init_label3(array__do_foldr3_10_0,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr3'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr3_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr3_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(array__do_foldr3_10_0_i2);
	}
	MR_r1 = MR_r9;
	MR_r2 = MR_r10;
	MR_r3 = MR_r11;
	MR_decr_sp_and_return(9);
MR_def_label(array__do_foldr3_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr3_10_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
	Index = MR_r7;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 14448 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr3_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__array__do_foldr3_10_0_i3);
MR_def_label(array__do_foldr3_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(array__do_foldr3_10_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module180)
	MR_init_entry1(array__do_foldr3_10_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr3_10_1);
	MR_init_label3(array__do_foldr3_10_1,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr3'/10 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr3_10_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr3_10_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(array__do_foldr3_10_1_i2);
	}
	MR_r1 = MR_r9;
	MR_r2 = MR_r10;
	MR_r3 = MR_r11;
	MR_decr_sp_and_return(9);
MR_def_label(array__do_foldr3_10_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr3_10_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
	Index = MR_r7;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 14539 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr3_10_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__array__do_foldr3_10_1_i3);
MR_def_label(array__do_foldr3_10_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(array__do_foldr3_10_1_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module181)
	MR_init_entry1(array__do_foldr3_10_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr3_10_2);
	MR_init_label3(array__do_foldr3_10_2,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr3'/10 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr3_10_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr3_10_2,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(array__do_foldr3_10_2_i2);
	}
	MR_r1 = MR_r9;
	MR_r2 = MR_r10;
	MR_r3 = MR_r11;
	MR_decr_sp_and_return(9);
MR_def_label(array__do_foldr3_10_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr3_10_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
	Index = MR_r7;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 14630 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr3_10_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__array__do_foldr3_10_2_i3);
MR_def_label(array__do_foldr3_10_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(array__do_foldr3_10_2_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module182)
	MR_init_entry1(array__do_foldr3_10_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr3_10_3);
	MR_init_label4(array__do_foldr3_10_3,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr3'/10 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr3_10_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr3_10_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(array__do_foldr3_10_3_i2);
	}
	MR_r2 = MR_r9;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(array__do_foldr3_10_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr3_10_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
	Index = MR_r7;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 14722 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr3_10_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__array__do_foldr3_10_3_i3);
MR_def_label(array__do_foldr3_10_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldr3_10_3_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(array__do_foldr3_10_3_i18);
	}
MR_def_label(array__do_foldr3_10_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module183)
	MR_init_entry1(array__do_foldr3_10_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr3_10_4);
	MR_init_label4(array__do_foldr3_10_4,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr3'/10 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr3_10_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr3_10_4,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(array__do_foldr3_10_4_i2);
	}
	MR_r2 = MR_r9;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(array__do_foldr3_10_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr3_10_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
	Index = MR_r7;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 14821 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr3_10_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__array__do_foldr3_10_4_i3);
MR_def_label(array__do_foldr3_10_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldr3_10_4_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(array__do_foldr3_10_4_i18);
	}
MR_def_label(array__do_foldr3_10_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module184)
	MR_init_entry1(array__do_foldr3_10_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr3_10_5);
	MR_init_label4(array__do_foldr3_10_5,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr3'/10 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr3_10_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr3_10_5,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(array__do_foldr3_10_5_i2);
	}
	MR_r2 = MR_r9;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(array__do_foldr3_10_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr3_10_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
	Index = MR_r7;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 14920 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr3_10_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__array__do_foldr3_10_5_i3);
MR_def_label(array__do_foldr3_10_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldr3_10_5_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(array__do_foldr3_10_5_i18);
	}
MR_def_label(array__do_foldr3_10_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module185)
	MR_init_entry1(array__foldr3_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr3_8_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr3'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr3_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr3_8_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 15003 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr3_8_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 15017 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_tempr4 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_tempr5 = MR_r8;
	MR_r8 = MR_tempr3;
	MR_tempr6 = MR_r9;
	MR_r9 = MR_tempr4;
	MR_r10 = MR_tempr5;
	MR_r11 = MR_tempr6;
	MR_np_tailcall_ent(array__do_foldr3_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module186)
	MR_init_entry1(array__foldr3_8_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr3_8_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr3'/8 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr3_8_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr3_8_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 15066 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr3_8_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 15080 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_tempr4 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_tempr5 = MR_r8;
	MR_r8 = MR_tempr3;
	MR_tempr6 = MR_r9;
	MR_r9 = MR_tempr4;
	MR_r10 = MR_tempr5;
	MR_r11 = MR_tempr6;
	MR_np_tailcall_ent(array__do_foldr3_10_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module187)
	MR_init_entry1(array__foldr3_8_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr3_8_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr3'/8 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr3_8_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr3_8_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 15129 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr3_8_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 15143 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_tempr4 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_tempr5 = MR_r8;
	MR_r8 = MR_tempr3;
	MR_tempr6 = MR_r9;
	MR_r9 = MR_tempr4;
	MR_r10 = MR_tempr5;
	MR_r11 = MR_tempr6;
	MR_np_tailcall_ent(array__do_foldr3_10_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module188)
	MR_init_entry1(array__foldr3_8_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr3_8_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr3'/8 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr3_8_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr3_8_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 15192 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr3_8_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 15206 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_tempr4 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_tempr5 = MR_r8;
	MR_r8 = MR_tempr3;
	MR_tempr6 = MR_r9;
	MR_r9 = MR_tempr4;
	MR_r10 = MR_tempr5;
	MR_r11 = MR_tempr6;
	MR_np_tailcall_ent(array__do_foldr3_10_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module189)
	MR_init_entry1(array__foldr3_8_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr3_8_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr3'/8 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr3_8_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr3_8_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 15255 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr3_8_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 15269 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_tempr4 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_tempr5 = MR_r8;
	MR_r8 = MR_tempr3;
	MR_tempr6 = MR_r9;
	MR_r9 = MR_tempr4;
	MR_r10 = MR_tempr5;
	MR_r11 = MR_tempr6;
	MR_np_tailcall_ent(array__do_foldr3_10_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module190)
	MR_init_entry1(array__foldr3_8_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr3_8_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr3'/8 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr3_8_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr3_8_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 15318 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr3_8_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 15332 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_tempr4 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_tempr5 = MR_r8;
	MR_r8 = MR_tempr3;
	MR_tempr6 = MR_r9;
	MR_r9 = MR_tempr4;
	MR_r10 = MR_tempr5;
	MR_r11 = MR_tempr6;
	MR_np_tailcall_ent(array__do_foldr3_10_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module191)
	MR_init_entry1(array__do_foldr4_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr4_12_0);
	MR_init_label3(array__do_foldr4_12_0,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr4'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr4_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr4_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r8 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(array__do_foldr4_12_0_i2);
	}
	MR_r1 = MR_r10;
	MR_r2 = MR_r11;
	MR_r3 = MR_r12;
	MR_r4 = MR_r13;
	MR_decr_sp_and_return(10);
MR_def_label(array__do_foldr4_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr4_12_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r9, Array);
	Index = MR_r8;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 15397 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr4_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__array__do_foldr4_12_0_i3);
MR_def_label(array__do_foldr4_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(array__do_foldr4_12_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module192)
	MR_init_entry1(array__do_foldr4_12_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr4_12_1);
	MR_init_label3(array__do_foldr4_12_1,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr4'/12 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr4_12_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr4_12_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r8 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(array__do_foldr4_12_1_i2);
	}
	MR_r1 = MR_r10;
	MR_r2 = MR_r11;
	MR_r3 = MR_r12;
	MR_r4 = MR_r13;
	MR_decr_sp_and_return(10);
MR_def_label(array__do_foldr4_12_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr4_12_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r9, Array);
	Index = MR_r8;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 15494 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr4_12_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__array__do_foldr4_12_1_i3);
MR_def_label(array__do_foldr4_12_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(array__do_foldr4_12_1_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module193)
	MR_init_entry1(array__do_foldr4_12_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr4_12_2);
	MR_init_label3(array__do_foldr4_12_2,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr4'/12 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr4_12_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr4_12_2,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r8 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(array__do_foldr4_12_2_i2);
	}
	MR_r1 = MR_r10;
	MR_r2 = MR_r11;
	MR_r3 = MR_r12;
	MR_r4 = MR_r13;
	MR_decr_sp_and_return(10);
MR_def_label(array__do_foldr4_12_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr4_12_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r9, Array);
	Index = MR_r8;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 15591 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr4_12_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__array__do_foldr4_12_2_i3);
MR_def_label(array__do_foldr4_12_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(array__do_foldr4_12_2_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module194)
	MR_init_entry1(array__do_foldr4_12_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr4_12_3);
	MR_init_label4(array__do_foldr4_12_3,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr4'/12 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr4_12_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr4_12_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r8 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(array__do_foldr4_12_3_i2);
	}
	MR_r2 = MR_r10;
	MR_r3 = MR_r11;
	MR_r4 = MR_r12;
	MR_r5 = MR_r13;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(array__do_foldr4_12_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr4_12_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r9, Array);
	Index = MR_r8;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 15689 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr4_12_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__array__do_foldr4_12_3_i3);
MR_def_label(array__do_foldr4_12_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldr4_12_3_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(array__do_foldr4_12_3_i18);
	}
MR_def_label(array__do_foldr4_12_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module195)
	MR_init_entry1(array__do_foldr4_12_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr4_12_4);
	MR_init_label4(array__do_foldr4_12_4,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr4'/12 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr4_12_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr4_12_4,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r8 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(array__do_foldr4_12_4_i2);
	}
	MR_r2 = MR_r10;
	MR_r3 = MR_r11;
	MR_r4 = MR_r12;
	MR_r5 = MR_r13;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(array__do_foldr4_12_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr4_12_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r9, Array);
	Index = MR_r8;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 15794 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr4_12_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__array__do_foldr4_12_4_i3);
MR_def_label(array__do_foldr4_12_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldr4_12_4_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(array__do_foldr4_12_4_i18);
	}
MR_def_label(array__do_foldr4_12_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module196)
	MR_init_entry1(array__do_foldr4_12_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr4_12_5);
	MR_init_label4(array__do_foldr4_12_5,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr4'/12 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr4_12_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr4_12_5,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r8 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(array__do_foldr4_12_5_i2);
	}
	MR_r2 = MR_r10;
	MR_r3 = MR_r11;
	MR_r4 = MR_r12;
	MR_r5 = MR_r13;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(array__do_foldr4_12_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr4_12_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r9, Array);
	Index = MR_r8;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 15899 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr4_12_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__array__do_foldr4_12_5_i3);
MR_def_label(array__do_foldr4_12_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldr4_12_5_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(array__do_foldr4_12_5_i18);
	}
MR_def_label(array__do_foldr4_12_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module197)
	MR_init_entry1(array__foldr4_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr4_10_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr4'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr4_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr4_10_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 15987 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr4_10_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 16001 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_tempr4 = MR_r8;
	MR_r8 = MR_tempr2;
	MR_tempr5 = MR_r9;
	MR_r9 = MR_tempr3;
	MR_tempr6 = MR_r10;
	MR_r10 = MR_tempr4;
	MR_tempr7 = MR_r11;
	MR_r11 = MR_tempr5;
	MR_r12 = MR_tempr6;
	MR_r13 = MR_tempr7;
	MR_np_tailcall_ent(array__do_foldr4_12_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module198)
	MR_init_entry1(array__foldr4_10_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr4_10_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr4'/10 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr4_10_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr4_10_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 16052 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr4_10_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 16066 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_tempr4 = MR_r8;
	MR_r8 = MR_tempr2;
	MR_tempr5 = MR_r9;
	MR_r9 = MR_tempr3;
	MR_tempr6 = MR_r10;
	MR_r10 = MR_tempr4;
	MR_tempr7 = MR_r11;
	MR_r11 = MR_tempr5;
	MR_r12 = MR_tempr6;
	MR_r13 = MR_tempr7;
	MR_np_tailcall_ent(array__do_foldr4_12_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module199)
	MR_init_entry1(array__foldr4_10_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr4_10_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr4'/10 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr4_10_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr4_10_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 16117 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr4_10_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 16131 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_tempr4 = MR_r8;
	MR_r8 = MR_tempr2;
	MR_tempr5 = MR_r9;
	MR_r9 = MR_tempr3;
	MR_tempr6 = MR_r10;
	MR_r10 = MR_tempr4;
	MR_tempr7 = MR_r11;
	MR_r11 = MR_tempr5;
	MR_r12 = MR_tempr6;
	MR_r13 = MR_tempr7;
	MR_np_tailcall_ent(array__do_foldr4_12_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module200)
	MR_init_entry1(array__foldr4_10_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr4_10_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr4'/10 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr4_10_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr4_10_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 16182 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr4_10_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 16196 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_tempr4 = MR_r8;
	MR_r8 = MR_tempr2;
	MR_tempr5 = MR_r9;
	MR_r9 = MR_tempr3;
	MR_tempr6 = MR_r10;
	MR_r10 = MR_tempr4;
	MR_tempr7 = MR_r11;
	MR_r11 = MR_tempr5;
	MR_r12 = MR_tempr6;
	MR_r13 = MR_tempr7;
	MR_np_tailcall_ent(array__do_foldr4_12_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module201)
	MR_init_entry1(array__foldr4_10_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr4_10_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr4'/10 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr4_10_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr4_10_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 16247 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr4_10_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 16261 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_tempr4 = MR_r8;
	MR_r8 = MR_tempr2;
	MR_tempr5 = MR_r9;
	MR_r9 = MR_tempr3;
	MR_tempr6 = MR_r10;
	MR_r10 = MR_tempr4;
	MR_tempr7 = MR_r11;
	MR_r11 = MR_tempr5;
	MR_r12 = MR_tempr6;
	MR_r13 = MR_tempr7;
	MR_np_tailcall_ent(array__do_foldr4_12_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module202)
	MR_init_entry1(array__foldr4_10_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr4_10_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr4'/10 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr4_10_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr4_10_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 16312 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr4_10_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 16326 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_tempr4 = MR_r8;
	MR_r8 = MR_tempr2;
	MR_tempr5 = MR_r9;
	MR_r9 = MR_tempr3;
	MR_tempr6 = MR_r10;
	MR_r10 = MR_tempr4;
	MR_tempr7 = MR_r11;
	MR_r11 = MR_tempr5;
	MR_r12 = MR_tempr6;
	MR_r13 = MR_tempr7;
	MR_np_tailcall_ent(array__do_foldr4_12_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module203)
	MR_init_entry1(array__do_foldr5_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr5_14_0);
	MR_init_label3(array__do_foldr5_14_0,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr5'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr5_14_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr5_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r9 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(array__do_foldr5_14_0_i2);
	}
	MR_r1 = MR_r11;
	MR_r2 = MR_r12;
	MR_r3 = MR_r13;
	MR_r4 = MR_r14;
	MR_r5 = MR_r15;
	MR_decr_sp_and_return(11);
MR_def_label(array__do_foldr5_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr5_14_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r10, Array);
	Index = MR_r9;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 16394 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r7;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	MR_r7 = MR_r14;
	MR_r8 = MR_r15;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr5_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__array__do_foldr5_14_0_i3);
MR_def_label(array__do_foldr5_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r9 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r13 = MR_tempr3;
	MR_r14 = MR_tempr4;
	MR_r15 = MR_tempr5;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(array__do_foldr5_14_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module204)
	MR_init_entry1(array__do_foldr5_14_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr5_14_1);
	MR_init_label3(array__do_foldr5_14_1,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr5'/14 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr5_14_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr5_14_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r9 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(array__do_foldr5_14_1_i2);
	}
	MR_r1 = MR_r11;
	MR_r2 = MR_r12;
	MR_r3 = MR_r13;
	MR_r4 = MR_r14;
	MR_r5 = MR_r15;
	MR_decr_sp_and_return(11);
MR_def_label(array__do_foldr5_14_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr5_14_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r10, Array);
	Index = MR_r9;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 16498 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r7;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	MR_r7 = MR_r14;
	MR_r8 = MR_r15;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr5_14_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__array__do_foldr5_14_1_i3);
MR_def_label(array__do_foldr5_14_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r9 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r13 = MR_tempr3;
	MR_r14 = MR_tempr4;
	MR_r15 = MR_tempr5;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(array__do_foldr5_14_1_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module205)
	MR_init_entry1(array__do_foldr5_14_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr5_14_2);
	MR_init_label3(array__do_foldr5_14_2,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr5'/14 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr5_14_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr5_14_2,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r9 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(array__do_foldr5_14_2_i2);
	}
	MR_r1 = MR_r11;
	MR_r2 = MR_r12;
	MR_r3 = MR_r13;
	MR_r4 = MR_r14;
	MR_r5 = MR_r15;
	MR_decr_sp_and_return(11);
MR_def_label(array__do_foldr5_14_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr5_14_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r10, Array);
	Index = MR_r9;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 16602 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r7;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	MR_r7 = MR_r14;
	MR_r8 = MR_r15;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr5_14_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__array__do_foldr5_14_2_i3);
MR_def_label(array__do_foldr5_14_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r9 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r13 = MR_tempr3;
	MR_r14 = MR_tempr4;
	MR_r15 = MR_tempr5;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(array__do_foldr5_14_2_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module206)
	MR_init_entry1(array__do_foldr5_14_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr5_14_3);
	MR_init_label4(array__do_foldr5_14_3,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr5'/14 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr5_14_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr5_14_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r9 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(array__do_foldr5_14_3_i2);
	}
	MR_r2 = MR_r11;
	MR_r3 = MR_r12;
	MR_r4 = MR_r13;
	MR_r5 = MR_r14;
	MR_r6 = MR_r15;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(11);
MR_def_label(array__do_foldr5_14_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr5_14_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r10, Array);
	Index = MR_r9;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 16707 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r7;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	MR_r7 = MR_r14;
	MR_r8 = MR_r15;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr5_14_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__array__do_foldr5_14_3_i3);
MR_def_label(array__do_foldr5_14_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldr5_14_3_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(9);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r9 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r13 = MR_tempr3;
	MR_r14 = MR_tempr4;
	MR_r15 = MR_tempr5;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(array__do_foldr5_14_3_i18);
	}
MR_def_label(array__do_foldr5_14_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module207)
	MR_init_entry1(array__do_foldr5_14_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr5_14_4);
	MR_init_label4(array__do_foldr5_14_4,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr5'/14 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr5_14_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr5_14_4,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r9 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(array__do_foldr5_14_4_i2);
	}
	MR_r2 = MR_r11;
	MR_r3 = MR_r12;
	MR_r4 = MR_r13;
	MR_r5 = MR_r14;
	MR_r6 = MR_r15;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(11);
MR_def_label(array__do_foldr5_14_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr5_14_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r10, Array);
	Index = MR_r9;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 16819 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r7;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	MR_r7 = MR_r14;
	MR_r8 = MR_r15;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr5_14_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__array__do_foldr5_14_4_i3);
MR_def_label(array__do_foldr5_14_4,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldr5_14_4_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(9);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r9 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r13 = MR_tempr3;
	MR_r14 = MR_tempr4;
	MR_r15 = MR_tempr5;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(array__do_foldr5_14_4_i18);
	}
MR_def_label(array__do_foldr5_14_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module208)
	MR_init_entry1(array__do_foldr5_14_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__do_foldr5_14_5);
	MR_init_label4(array__do_foldr5_14_5,18,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr5'/14 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__do_foldr5_14_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(array__do_foldr5_14_5,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r9 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(array__do_foldr5_14_5_i2);
	}
	MR_r2 = MR_r11;
	MR_r3 = MR_r12;
	MR_r4 = MR_r13;
	MR_r5 = MR_r14;
	MR_r6 = MR_r15;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(11);
MR_def_label(array__do_foldr5_14_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__do_foldr5_14_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r10, Array);
	Index = MR_r9;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 16931 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r7;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	MR_r7 = MR_r14;
	MR_r8 = MR_r15;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__do_foldr5_14_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__array__do_foldr5_14_5_i3);
MR_def_label(array__do_foldr5_14_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__do_foldr5_14_5_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(8);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(9);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r9 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r13 = MR_tempr3;
	MR_r14 = MR_tempr4;
	MR_r15 = MR_tempr5;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(array__do_foldr5_14_5_i18);
	}
MR_def_label(array__do_foldr5_14_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module209)
	MR_init_entry1(array__foldr5_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr5_12_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr5'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr5_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr5_12_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 17025 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr5_12_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 17039 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r8;
	MR_r8 = MR_tempr1;
	MR_tempr4 = MR_r9;
	MR_r9 = MR_tempr2;
	MR_tempr5 = MR_r10;
	MR_r10 = MR_tempr3;
	MR_tempr6 = MR_r11;
	MR_r11 = MR_tempr4;
	MR_tempr7 = MR_r12;
	MR_r12 = MR_tempr5;
	MR_tempr8 = MR_r13;
	MR_r13 = MR_tempr6;
	MR_r14 = MR_tempr7;
	MR_r15 = MR_tempr8;
	MR_np_tailcall_ent(array__do_foldr5_14_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module210)
	MR_init_entry1(array__foldr5_12_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr5_12_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr5'/12 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr5_12_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr5_12_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 17092 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr5_12_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 17106 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r8;
	MR_r8 = MR_tempr1;
	MR_tempr4 = MR_r9;
	MR_r9 = MR_tempr2;
	MR_tempr5 = MR_r10;
	MR_r10 = MR_tempr3;
	MR_tempr6 = MR_r11;
	MR_r11 = MR_tempr4;
	MR_tempr7 = MR_r12;
	MR_r12 = MR_tempr5;
	MR_tempr8 = MR_r13;
	MR_r13 = MR_tempr6;
	MR_r14 = MR_tempr7;
	MR_r15 = MR_tempr8;
	MR_np_tailcall_ent(array__do_foldr5_14_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module211)
	MR_init_entry1(array__foldr5_12_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr5_12_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr5'/12 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr5_12_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr5_12_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 17159 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr5_12_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 17173 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r8;
	MR_r8 = MR_tempr1;
	MR_tempr4 = MR_r9;
	MR_r9 = MR_tempr2;
	MR_tempr5 = MR_r10;
	MR_r10 = MR_tempr3;
	MR_tempr6 = MR_r11;
	MR_r11 = MR_tempr4;
	MR_tempr7 = MR_r12;
	MR_r12 = MR_tempr5;
	MR_tempr8 = MR_r13;
	MR_r13 = MR_tempr6;
	MR_r14 = MR_tempr7;
	MR_r15 = MR_tempr8;
	MR_np_tailcall_ent(array__do_foldr5_14_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module212)
	MR_init_entry1(array__foldr5_12_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr5_12_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr5'/12 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr5_12_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr5_12_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 17226 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr5_12_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 17240 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r8;
	MR_r8 = MR_tempr1;
	MR_tempr4 = MR_r9;
	MR_r9 = MR_tempr2;
	MR_tempr5 = MR_r10;
	MR_r10 = MR_tempr3;
	MR_tempr6 = MR_r11;
	MR_r11 = MR_tempr4;
	MR_tempr7 = MR_r12;
	MR_r12 = MR_tempr5;
	MR_tempr8 = MR_r13;
	MR_r13 = MR_tempr6;
	MR_r14 = MR_tempr7;
	MR_r15 = MR_tempr8;
	MR_np_tailcall_ent(array__do_foldr5_14_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module213)
	MR_init_entry1(array__foldr5_12_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr5_12_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr5'/12 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr5_12_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr5_12_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 17293 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr5_12_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 17307 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r8;
	MR_r8 = MR_tempr1;
	MR_tempr4 = MR_r9;
	MR_r9 = MR_tempr2;
	MR_tempr5 = MR_r10;
	MR_r10 = MR_tempr3;
	MR_tempr6 = MR_r11;
	MR_r11 = MR_tempr4;
	MR_tempr7 = MR_r12;
	MR_r12 = MR_tempr5;
	MR_tempr8 = MR_r13;
	MR_r13 = MR_tempr6;
	MR_r14 = MR_tempr7;
	MR_r15 = MR_tempr8;
	MR_np_tailcall_ent(array__do_foldr5_14_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module214)
	MR_init_entry1(array__foldr5_12_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldr5_12_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr5'/12 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldr5_12_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldr5_12_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 17360 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldr5_12_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 17374 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r8;
	MR_r8 = MR_tempr1;
	MR_tempr4 = MR_r9;
	MR_r9 = MR_tempr2;
	MR_tempr5 = MR_r10;
	MR_r10 = MR_tempr3;
	MR_tempr6 = MR_r11;
	MR_r11 = MR_tempr4;
	MR_tempr7 = MR_r12;
	MR_r12 = MR_tempr5;
	MR_tempr8 = MR_r13;
	MR_r13 = MR_tempr6;
	MR_r14 = MR_tempr7;
	MR_r15 = MR_tempr8;
	MR_np_tailcall_ent(array__do_foldr5_14_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module215)
	MR_init_entry1(array__map_foldl_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__map_foldl_2_7_0);
	MR_init_label3(array__map_foldl_2_7_0,12,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__map_foldl_2_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(array__map_foldl_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__map_foldl_2_7_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 17431 "array.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(array__map_foldl_2_7_0_i3);
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_foldl_2_7_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
	Index = MR_r5;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 17450 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__map_foldl_2_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__map_foldl_2_7_0_i4);
MR_def_label(array__map_foldl_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_foldl_2_7_0
	Index = MR_sv(1);
	Item = MR_r1;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(3), Array0);
{
#line 1603 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 17486 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r7);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_r5 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r6 = MR_sv(2);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__map_foldl_2_7_0_i12);
	}
MR_def_label(array__map_foldl_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module216)
	MR_init_entry1(array__map_foldl_2_7_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__map_foldl_2_7_1);
	MR_init_label3(array__map_foldl_2_7_1,12,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl_2'/7 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__map_foldl_2_7_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(array__map_foldl_2_7_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__map_foldl_2_7_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 17545 "array.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(array__map_foldl_2_7_1_i3);
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_foldl_2_7_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
	Index = MR_r5;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 17564 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__map_foldl_2_7_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__map_foldl_2_7_1_i4);
MR_def_label(array__map_foldl_2_7_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_foldl_2_7_1
	Index = MR_sv(1);
	Item = MR_r1;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(3), Array0);
{
#line 1603 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 17600 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r7);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_r5 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r6 = MR_sv(2);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__map_foldl_2_7_1_i12);
	}
MR_def_label(array__map_foldl_2_7_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module217)
	MR_init_entry1(array__map_foldl_2_7_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__map_foldl_2_7_2);
	MR_init_label3(array__map_foldl_2_7_2,12,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl_2'/7 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__map_foldl_2_7_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(array__map_foldl_2_7_2,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__map_foldl_2_7_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 17659 "array.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(array__map_foldl_2_7_2_i3);
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_foldl_2_7_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
	Index = MR_r5;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 17678 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__map_foldl_2_7_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__map_foldl_2_7_2_i4);
MR_def_label(array__map_foldl_2_7_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_foldl_2_7_2
	Index = MR_sv(1);
	Item = MR_r1;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(3), Array0);
{
#line 1603 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 17714 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r7);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_r5 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r6 = MR_sv(2);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__map_foldl_2_7_2_i12);
	}
MR_def_label(array__map_foldl_2_7_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module218)
	MR_init_entry1(array__map_foldl_2_7_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__map_foldl_2_7_3);
	MR_init_label4(array__map_foldl_2_7_3,19,4,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl_2'/7 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__map_foldl_2_7_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(array__map_foldl_2_7_3,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__map_foldl_2_7_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 17773 "array.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(array__map_foldl_2_7_3_i3);
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_foldl_2_7_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
	Index = MR_r5;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 17792 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__map_foldl_2_7_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__map_foldl_2_7_3_i4);
MR_def_label(array__map_foldl_2_7_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__map_foldl_2_7_3_i1);
	}
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_foldl_2_7_3
	Index = MR_sv(1);
	Item = MR_r2;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(3), Array0);
{
#line 1603 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 17831 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r7);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_r5 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r6 = MR_sv(2);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__map_foldl_2_7_3_i19);
	}
MR_def_label(array__map_foldl_2_7_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(array__map_foldl_2_7_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module219)
	MR_init_entry1(array__map_foldl_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__map_foldl_5_0);
	MR_init_label4(array__map_foldl_5_0,21,3,4,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__map_foldl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__map_foldl_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 17889 "array.c"
	MR_r7 = Max;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GT(MR_r7,0)) {
		MR_GOTO_LAB(array__map_foldl_5_0_i21);
	}
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_foldl_5_0
{
#line 1198 "array.m"

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);
;}
#line 17905 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r6;
	MR_proceed();
MR_def_label(array__map_foldl_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_foldl_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
	Index = (MR_Integer) 0;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 17929 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__map_foldl_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__map_foldl_5_0_i3);
MR_def_label(array__map_foldl_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_sv(3),0)) {
		MR_GOTO_LAB(array__map_foldl_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("array.init: negative size", 25);
	MR_np_call_localret_ent(require__error_1_0,
		array__map_foldl_5_0_i20);
MR_def_label(array__map_foldl_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	Item;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_foldl_5_0
	Size = MR_sv(3);
	Item = MR_r1;
{
#line 1186 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);
;}
#line 17970 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r7);
#undef	MR_PROC_LABEL
	}
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r8 = MR_r2;
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
MR_def_label(array__map_foldl_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(array__map_foldl_2_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module220)
	MR_init_entry1(array__map_foldl_5_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__map_foldl_5_1);
	MR_init_label4(array__map_foldl_5_1,21,3,4,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl'/5 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__map_foldl_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__map_foldl_5_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 18017 "array.c"
	MR_r7 = Max;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GT(MR_r7,0)) {
		MR_GOTO_LAB(array__map_foldl_5_1_i21);
	}
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_foldl_5_1
{
#line 1198 "array.m"

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);
;}
#line 18033 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r6;
	MR_proceed();
MR_def_label(array__map_foldl_5_1,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_foldl_5_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
	Index = (MR_Integer) 0;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 18057 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__map_foldl_5_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__map_foldl_5_1_i3);
MR_def_label(array__map_foldl_5_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_sv(3),0)) {
		MR_GOTO_LAB(array__map_foldl_5_1_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("array.init: negative size", 25);
	MR_np_call_localret_ent(require__error_1_0,
		array__map_foldl_5_1_i20);
MR_def_label(array__map_foldl_5_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	Item;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_foldl_5_1
	Size = MR_sv(3);
	Item = MR_r1;
{
#line 1186 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);
;}
#line 18098 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r7);
#undef	MR_PROC_LABEL
	}
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r8 = MR_r2;
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
MR_def_label(array__map_foldl_5_1,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(array__map_foldl_2_7_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module221)
	MR_init_entry1(array__map_foldl_5_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__map_foldl_5_2);
	MR_init_label4(array__map_foldl_5_2,21,3,4,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl'/5 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__map_foldl_5_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__map_foldl_5_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 18145 "array.c"
	MR_r7 = Max;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GT(MR_r7,0)) {
		MR_GOTO_LAB(array__map_foldl_5_2_i21);
	}
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_foldl_5_2
{
#line 1198 "array.m"

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);
;}
#line 18161 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r6;
	MR_proceed();
MR_def_label(array__map_foldl_5_2,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_foldl_5_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
	Index = (MR_Integer) 0;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 18185 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__map_foldl_5_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__map_foldl_5_2_i3);
MR_def_label(array__map_foldl_5_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_sv(3),0)) {
		MR_GOTO_LAB(array__map_foldl_5_2_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("array.init: negative size", 25);
	MR_np_call_localret_ent(require__error_1_0,
		array__map_foldl_5_2_i20);
MR_def_label(array__map_foldl_5_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	Item;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_foldl_5_2
	Size = MR_sv(3);
	Item = MR_r1;
{
#line 1186 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);
;}
#line 18226 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r7);
#undef	MR_PROC_LABEL
	}
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r8 = MR_r2;
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
MR_def_label(array__map_foldl_5_2,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(array__map_foldl_2_7_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module222)
	MR_init_entry1(array__map_foldl_5_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__map_foldl_5_3);
	MR_init_label5(array__map_foldl_5_3,29,3,5,27,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl'/5 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__map_foldl_5_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__map_foldl_5_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 18273 "array.c"
	MR_r7 = Max;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GT(MR_r7,0)) {
		MR_GOTO_LAB(array__map_foldl_5_3_i29);
	}
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_foldl_5_3
{
#line 1198 "array.m"

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);
;}
#line 18289 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r2);
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(array__map_foldl_5_3,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_foldl_5_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
	Index = (MR_Integer) 0;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 18314 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__map_foldl_5_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__map_foldl_5_3_i3);
MR_def_label(array__map_foldl_5_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__map_foldl_5_3_i1);
	}
	if (MR_INT_GE(MR_sv(3),0)) {
		MR_GOTO_LAB(array__map_foldl_5_3_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("array.init: negative size", 25);
	MR_np_call_localret_ent(require__error_1_0,
		array__map_foldl_5_3_i27);
MR_def_label(array__map_foldl_5_3,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	Item;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_foldl_5_3
	Size = MR_sv(3);
	Item = MR_r2;
{
#line 1186 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);
;}
#line 18358 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r7);
#undef	MR_PROC_LABEL
	}
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r8 = MR_r3;
	MR_r5 = (MR_Integer) 1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
MR_def_label(array__map_foldl_5_3,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(array__map_foldl_2_7_3);
MR_def_label(array__map_foldl_5_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module223)
	MR_init_entry1(array__map_corresponding_foldl_2_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__map_corresponding_foldl_2_9_0);
	MR_init_label3(array__map_corresponding_foldl_2_9_0,11,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl_2'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__map_corresponding_foldl_2_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(array__map_corresponding_foldl_2_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(array__map_corresponding_foldl_2_9_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_2_9_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
	Index = MR_r6;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 18420 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_2_9_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r9, Array);
	Index = MR_r6;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 18436 "array.c"
	MR_tempr2 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r5;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r9;
	MR_sv(6) = MR_r10;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__map_corresponding_foldl_2_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array__map_corresponding_foldl_2_9_0_i3);
MR_def_label(array__map_corresponding_foldl_2_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_2_9_0
	Index = MR_sv(2);
	Item = MR_r1;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(6), Array0);
{
#line 1603 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 18476 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r10);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(1);
	MR_r6 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(5);
	MR_r11 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(array__map_corresponding_foldl_2_9_0_i11);
	}
MR_def_label(array__map_corresponding_foldl_2_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r10;
	MR_r2 = MR_r11;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module224)
	MR_init_entry1(array__map_corresponding_foldl_2_9_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__map_corresponding_foldl_2_9_1);
	MR_init_label3(array__map_corresponding_foldl_2_9_1,11,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl_2'/9 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__map_corresponding_foldl_2_9_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(array__map_corresponding_foldl_2_9_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(array__map_corresponding_foldl_2_9_1_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_2_9_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
	Index = MR_r6;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 18543 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_2_9_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r9, Array);
	Index = MR_r6;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 18559 "array.c"
	MR_tempr2 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r5;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r9;
	MR_sv(6) = MR_r10;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__map_corresponding_foldl_2_9_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array__map_corresponding_foldl_2_9_1_i3);
MR_def_label(array__map_corresponding_foldl_2_9_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_2_9_1
	Index = MR_sv(2);
	Item = MR_r1;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(6), Array0);
{
#line 1603 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 18599 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r10);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(1);
	MR_r6 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(5);
	MR_r11 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(array__map_corresponding_foldl_2_9_1_i11);
	}
MR_def_label(array__map_corresponding_foldl_2_9_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r10;
	MR_r2 = MR_r11;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module225)
	MR_init_entry1(array__map_corresponding_foldl_2_9_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__map_corresponding_foldl_2_9_2);
	MR_init_label3(array__map_corresponding_foldl_2_9_2,11,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl_2'/9 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__map_corresponding_foldl_2_9_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(array__map_corresponding_foldl_2_9_2,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(array__map_corresponding_foldl_2_9_2_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_2_9_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
	Index = MR_r6;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 18666 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_2_9_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r9, Array);
	Index = MR_r6;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 18682 "array.c"
	MR_tempr2 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r5;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r9;
	MR_sv(6) = MR_r10;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__map_corresponding_foldl_2_9_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array__map_corresponding_foldl_2_9_2_i3);
MR_def_label(array__map_corresponding_foldl_2_9_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_2_9_2
	Index = MR_sv(2);
	Item = MR_r1;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(6), Array0);
{
#line 1603 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 18722 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r10);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(1);
	MR_r6 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(5);
	MR_r11 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(array__map_corresponding_foldl_2_9_2_i11);
	}
MR_def_label(array__map_corresponding_foldl_2_9_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r10;
	MR_r2 = MR_r11;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module226)
	MR_init_entry1(array__map_corresponding_foldl_2_9_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__map_corresponding_foldl_2_9_3);
	MR_init_label4(array__map_corresponding_foldl_2_9_3,18,3,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl_2'/9 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__map_corresponding_foldl_2_9_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(array__map_corresponding_foldl_2_9_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(array__map_corresponding_foldl_2_9_3_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_2_9_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r8, Array);
	Index = MR_r6;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 18789 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_2_9_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r9, Array);
	Index = MR_r6;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 18805 "array.c"
	MR_tempr2 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r5;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r9;
	MR_sv(6) = MR_r10;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__map_corresponding_foldl_2_9_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array__map_corresponding_foldl_2_9_3_i3);
MR_def_label(array__map_corresponding_foldl_2_9_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__map_corresponding_foldl_2_9_3_i1);
	}
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_2_9_3
	Index = MR_sv(2);
	Item = MR_r2;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(6), Array0);
{
#line 1603 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 18848 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r10);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(1);
	MR_r6 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(5);
	MR_r11 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(array__map_corresponding_foldl_2_9_3_i18);
	}
MR_def_label(array__map_corresponding_foldl_2_9_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r10;
	MR_r3 = MR_r11;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(11);
MR_def_label(array__map_corresponding_foldl_2_9_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module227)
	MR_init_entry1(array__map_corresponding_foldl_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__map_corresponding_foldl_6_0);
	MR_init_label4(array__map_corresponding_foldl_6_0,21,3,4,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__map_corresponding_foldl_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 18909 "array.c"
	MR_r9 = Max;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GT(MR_r9,0)) {
		MR_GOTO_LAB(array__map_corresponding_foldl_6_0_i21);
	}
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_6_0
{
#line 1198 "array.m"

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);
;}
#line 18925 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r8;
	MR_proceed();
MR_def_label(array__map_corresponding_foldl_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
	Index = (MR_Integer) 0;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 18949 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
	Index = (MR_Integer) 0;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 18965 "array.c"
	MR_tempr2 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r5;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_r8;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__map_corresponding_foldl_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array__map_corresponding_foldl_6_0_i3);
MR_def_label(array__map_corresponding_foldl_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_sv(4),0)) {
		MR_GOTO_LAB(array__map_corresponding_foldl_6_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("array.init: negative size", 25);
	MR_np_call_localret_ent(require__error_1_0,
		array__map_corresponding_foldl_6_0_i20);
MR_def_label(array__map_corresponding_foldl_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	Item;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_6_0
	Size = MR_sv(4);
	Item = MR_r1;
{
#line 1186 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);
;}
#line 19009 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r10);
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r11 = MR_r2;
	MR_r6 = (MR_Integer) 1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
MR_def_label(array__map_corresponding_foldl_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(array__map_corresponding_foldl_2_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module228)
	MR_init_entry1(array__map_corresponding_foldl_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__map_corresponding_foldl_6_1);
	MR_init_label4(array__map_corresponding_foldl_6_1,21,3,4,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__map_corresponding_foldl_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_6_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 19059 "array.c"
	MR_r9 = Max;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GT(MR_r9,0)) {
		MR_GOTO_LAB(array__map_corresponding_foldl_6_1_i21);
	}
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_6_1
{
#line 1198 "array.m"

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);
;}
#line 19075 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r8;
	MR_proceed();
MR_def_label(array__map_corresponding_foldl_6_1,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_6_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
	Index = (MR_Integer) 0;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 19099 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_6_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
	Index = (MR_Integer) 0;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 19115 "array.c"
	MR_tempr2 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r5;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_r8;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__map_corresponding_foldl_6_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array__map_corresponding_foldl_6_1_i3);
MR_def_label(array__map_corresponding_foldl_6_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_sv(4),0)) {
		MR_GOTO_LAB(array__map_corresponding_foldl_6_1_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("array.init: negative size", 25);
	MR_np_call_localret_ent(require__error_1_0,
		array__map_corresponding_foldl_6_1_i20);
MR_def_label(array__map_corresponding_foldl_6_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	Item;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_6_1
	Size = MR_sv(4);
	Item = MR_r1;
{
#line 1186 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);
;}
#line 19159 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r10);
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r11 = MR_r2;
	MR_r6 = (MR_Integer) 1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
MR_def_label(array__map_corresponding_foldl_6_1,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(array__map_corresponding_foldl_2_9_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module229)
	MR_init_entry1(array__map_corresponding_foldl_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__map_corresponding_foldl_6_2);
	MR_init_label4(array__map_corresponding_foldl_6_2,21,3,4,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__map_corresponding_foldl_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_6_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 19209 "array.c"
	MR_r9 = Max;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GT(MR_r9,0)) {
		MR_GOTO_LAB(array__map_corresponding_foldl_6_2_i21);
	}
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_6_2
{
#line 1198 "array.m"

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);
;}
#line 19225 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r8;
	MR_proceed();
MR_def_label(array__map_corresponding_foldl_6_2,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_6_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
	Index = (MR_Integer) 0;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 19249 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_6_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
	Index = (MR_Integer) 0;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 19265 "array.c"
	MR_tempr2 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r5;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_r8;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__map_corresponding_foldl_6_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array__map_corresponding_foldl_6_2_i3);
MR_def_label(array__map_corresponding_foldl_6_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_sv(4),0)) {
		MR_GOTO_LAB(array__map_corresponding_foldl_6_2_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("array.init: negative size", 25);
	MR_np_call_localret_ent(require__error_1_0,
		array__map_corresponding_foldl_6_2_i20);
MR_def_label(array__map_corresponding_foldl_6_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	Item;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_6_2
	Size = MR_sv(4);
	Item = MR_r1;
{
#line 1186 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);
;}
#line 19309 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r10);
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r11 = MR_r2;
	MR_r6 = (MR_Integer) 1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
MR_def_label(array__map_corresponding_foldl_6_2,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(array__map_corresponding_foldl_2_9_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module230)
	MR_init_entry1(array__map_corresponding_foldl_6_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__map_corresponding_foldl_6_3);
	MR_init_label5(array__map_corresponding_foldl_6_3,29,3,5,27,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl'/6 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__map_corresponding_foldl_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_6_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 19359 "array.c"
	MR_r9 = Max;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GT(MR_r9,0)) {
		MR_GOTO_LAB(array__map_corresponding_foldl_6_3_i29);
	}
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_6_3
{
#line 1198 "array.m"

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);
;}
#line 19375 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r2);
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r8;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(array__map_corresponding_foldl_6_3,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_6_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r6, Array);
	Index = (MR_Integer) 0;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 19400 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_6_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r7, Array);
	Index = (MR_Integer) 0;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 19416 "array.c"
	MR_tempr2 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r5;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_r8;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__map_corresponding_foldl_6_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array__map_corresponding_foldl_6_3_i3);
MR_def_label(array__map_corresponding_foldl_6_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__map_corresponding_foldl_6_3_i1);
	}
	if (MR_INT_GE(MR_sv(4),0)) {
		MR_GOTO_LAB(array__map_corresponding_foldl_6_3_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("array.init: negative size", 25);
	MR_np_call_localret_ent(require__error_1_0,
		array__map_corresponding_foldl_6_3_i27);
MR_def_label(array__map_corresponding_foldl_6_3,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	Item;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_corresponding_foldl_6_3
	Size = MR_sv(4);
	Item = MR_r2;
{
#line 1186 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_init_array(Array, Size, Item);
;}
#line 19463 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r10);
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r11 = MR_r3;
	MR_r6 = (MR_Integer) 1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
MR_def_label(array__map_corresponding_foldl_6_3,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(array__map_corresponding_foldl_2_9_3);
MR_def_label(array__map_corresponding_foldl_6_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module231)
	MR_init_entry1(fn__array__append_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__append_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'append'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__append_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	ArrayA;
	MR_ArrayPtr	ArrayB;
	MR_ArrayPtr	ArrayC;
#define	MR_PROC_LABEL	mercury__fn__array__append_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, ArrayA);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r3, ArrayB);
{
#line 2230 "array.m"

    MR_Integer sizeC;
    MR_Integer i;
    MR_Integer offset;

    sizeC = ArrayA->size + ArrayB->size;
    ML_alloc_array(ArrayC, sizeC + 1, MR_ALLOC_ID);

    ArrayC->size = sizeC;
    for (i = 0; i < ArrayA->size; i++) {
        ArrayC->elements[i] = ArrayA->elements[i];
    }

    offset = ArrayA->size;
    for (i = 0; i < ArrayB->size; i++) {
        ArrayC->elements[offset + i] = ArrayB->elements[i];
    }
;}
#line 19533 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, ArrayC, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module232)
	MR_init_entry1(fn__array__swap_elems_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__swap_elems_3_0);
	MR_init_label3(fn__array__swap_elems_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'swap_elems'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__swap_elems_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__array__swap_elems_3_0_i2);
MR_def_label(fn__array__swap_elems_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__array__swap_elems_3_0_i3);
MR_def_label(fn__array__swap_elems_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__set_4_0,
		fn__array__swap_elems_3_0_i4);
MR_def_label(fn__array__swap_elems_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(array__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(random__random_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_math__type_ctor_info_domain_error_0;

MR_BEGIN_MODULE(array_module233)
	MR_init_entry1(array__permutation_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__permutation_2_8_0);
	MR_init_label9(array__permutation_2_8_0,36,2,3,5,10,11,12,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'permutation_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__permutation_2_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(array__permutation_2_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 <= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(array__permutation_2_8_0_i2);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(10);
MR_def_label(array__permutation_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r7;
	MR_np_call_localret_ent(random__random_3_0,
		array__permutation_2_8_0_i3);
MR_def_label(array__permutation_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__array__permutation_2_8_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 258 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 19660 "array.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(array__permutation_2_8_0_i5);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(array__permutation_2_8_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_sv(6) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("int.rem: division by zero", 25);
	MR_np_call_localret_ent(exception__throw_1_0,
		array__permutation_2_8_0_i10);
MR_def_label(array__permutation_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(5);
	MR_sv(7) = ((MR_Integer) MR_sv(2) + ((MR_Integer) MR_r1 % (MR_Integer) MR_sv(4)));
	MR_r1 = MR_sv(8);
MR_def_label(array__permutation_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(5) = MR_r2;
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(array__lookup_3_0,
		array__permutation_2_8_0_i11);
MR_def_label(array__permutation_2_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(array__lookup_3_0,
		array__permutation_2_8_0_i12);
MR_def_label(array__permutation_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(array__set_4_0,
		array__permutation_2_8_0_i13);
MR_def_label(array__permutation_2_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		array__permutation_2_8_0_i14);
MR_def_label(array__permutation_2_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(array__permutation_2_8_0_i36);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module234)
	MR_init_entry1(array__random_permutation_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__random_permutation_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'random_permutation'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__random_permutation_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__random_permutation_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 19768 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__random_permutation_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 19782 "array.c"
	MR_r4 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__random_permutation_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 19796 "array.c"
	MR_r5 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_r2;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_np_tailcall_ent(array__permutation_2_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(univ__type_to_univ_2_1);
MR_decl_entry(fn__pretty_printer__format_arg_1_0);

MR_BEGIN_MODULE(array_module235)
	MR_init_entry1(fn__array__array_to_doc_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__array_to_doc_1_0);
	MR_init_label5(fn__array__array_to_doc_1_0,4,18,19,21,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_to_doc'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__array_to_doc_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,0,0);
	{
	MR_Word MR_tempr1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__array_to_doc_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 19846 "array.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) 0 <= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(fn__array__array_to_doc_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(2,3,1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__array__array_to_doc_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__array__array_to_doc_1_0_i18);
MR_def_label(fn__array__array_to_doc_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		fn__array__array_to_doc_1_0_i19);
MR_def_label(fn__array__array_to_doc_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__pretty_printer__format_arg_1_0,
		fn__array__array_to_doc_1_0_i21);
MR_def_label(fn__array__array_to_doc_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__array_to_doc_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(1), Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 19893 "array.c"
	MR_r2 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) 0 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(fn__array__array_to_doc_1_0_i23);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	MR_tfield(0, MR_r2, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 5) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__array__array_to_doc_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	MR_tfield(0, MR_r2, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 5) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(2,3,3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_type_desc_0;
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(private_builtin__typed_unify_2_1);

MR_BEGIN_MODULE(array_module236)
	MR_init_entry1(array__dynamic_cast_to_array_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__dynamic_cast_to_array_2_0);
	MR_init_label3(array__dynamic_cast_to_array_2_0,3,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dynamic_cast_to_array'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__dynamic_cast_to_array_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__array__dynamic_cast_to_array_2_0
	TypeInfo_for_T = MR_r1;
{
#line 56 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

};}
#line 20033 "array.c"
	MR_r4 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgTypes;
#define	MR_PROC_LABEL	mercury__array__dynamic_cast_to_array_2_0
	TypeDesc = MR_r4;
{
#line 76 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
};}
#line 20059 "array.c"
	MR_tempr1 = ArgTypes;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(array__dynamic_cast_to_array_2_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		array__dynamic_cast_to_array_2_0_i3);
MR_def_label(array__dynamic_cast_to_array_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__dynamic_cast_to_array_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__array__dynamic_cast_to_array_2_0
	TypeInfo = MR_sv(1);
{
#line 72 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;
;}
#line 20093 "array.c"
	MR_tempr1 = TypeInfo_for_T;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(array, array);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		array__dynamic_cast_to_array_2_0_i6);
MR_def_label(array__dynamic_cast_to_array_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__dynamic_cast_to_array_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(array__dynamic_cast_to_array_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module237)
	MR_init_entry1(array__equal_elements_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__equal_elements_4_0);
	MR_init_label6(array__equal_elements_4_0,19,3,4,5,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'equal_elements'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(array__equal_elements_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(array__equal_elements_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(array__equal_elements_4_0_i9);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		array__equal_elements_4_0_i3);
MR_def_label(array__equal_elements_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		array__equal_elements_4_0_i4);
MR_def_label(array__equal_elements_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		array__equal_elements_4_0_i5);
MR_def_label(array__equal_elements_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__equal_elements_4_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(array__equal_elements_4_0_i19);
MR_def_label(array__equal_elements_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(array__equal_elements_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module238)
	MR_init_entry1(array__array_equal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__array_equal_2_0);
	MR_init_label1(array__array_equal_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_equal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__array_equal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__array_equal_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 20241 "array.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__array_equal_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r3, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 20255 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(array__array_equal_2_0_i1);
	}
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(array__equal_elements_4_0);
	}
MR_def_label(array__array_equal_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module239)
	MR_init_entry1(__Unify___array__array_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___array__array_1_0);
	MR_init_label2(__Unify___array__array_1_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___array__array_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___array__array_1_0_i6);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury____Unify___array__array_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr1, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 20317 "array.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury____Unify___array__array_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr2, Array);
{
#line 1447 "array.m"

    Max = Array->size;
;}
#line 20331 "array.c"
	MR_tempr3 = Max;
#undef	MR_PROC_LABEL
	}
	if ((MR_r3 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___array__array_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(array__equal_elements_4_0);
	}
MR_def_label(__Unify___array__array_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___array__array_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module240)
	MR_init_entry1(__Compare___array__array_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___array__array_1_0);
	MR_init_label2(__Compare___array__array_1_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___array__array_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___array__array_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___array__array_1_0_i2);
MR_def_label(__Compare___array__array_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___array__array_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(array__array_compare_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module241)
	MR_init_entry1(__Unify___array__index_out_of_bounds_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___array__index_out_of_bounds_0_0);
	MR_init_label1(__Unify___array__index_out_of_bounds_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___array__index_out_of_bounds_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___array__index_out_of_bounds_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(2)) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___array__index_out_of_bounds_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module242)
	MR_init_entry1(__Compare___array__index_out_of_bounds_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___array__index_out_of_bounds_0_0);
	MR_init_label3(__Compare___array__index_out_of_bounds_0_0,4,12,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___array__index_out_of_bounds_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___array__index_out_of_bounds_0_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___array__index_out_of_bounds_0_0
	S1 = (MR_String) MR_sv(1);
	S2 = (MR_String) MR_sv(2);
{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 20470 "array.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___array__index_out_of_bounds_0_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___array__index_out_of_bounds_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___array__index_out_of_bounds_0_0_i5);
	}
MR_def_label(__Compare___array__index_out_of_bounds_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___array__index_out_of_bounds_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module243)
	MR_init_entry1(fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0);
	MR_init_label5(fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0,3,5,6,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__array_to_doc_2__2916__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r3, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 20529 "array.c"
	MR_r2 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_sv(2) <= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_decr_sp_and_return(5);
MR_def_label(fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0_i5);
MR_def_label(fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0_i6);
MR_def_label(fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__pretty_printer__format_arg_1_0,
		fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0_i8);
MR_def_label(fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(1), Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 20580 "array.c"
	MR_r2 = Max;
#undef	MR_PROC_LABEL
	}
	if ((MR_sv(2) != MR_r2)) {
		MR_GOTO_LAB(fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0_i10);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_tfield(0, MR_r2, 5) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(fn__array__IntroducedFrom__func__array_to_doc_2__2916__1_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_tfield(0, MR_r2, 5) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(2,3,3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

MR_BEGIN_MODULE(array_module244)
	MR_init_entry1(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0);
	MR_init_label10(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,49,2,4,6,7,8,9,12,15,14)
	MR_init_label3(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,18,17,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__merge_subarrays__[T = string]_0_1'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 <= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i2);
	}
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 <= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i4);
	}
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i6);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i7);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0
	S1 = (MR_String) MR_sv(7);
	S2 = (MR_String) MR_r1;
{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 20722 "array.c"
	MR_r5 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r5,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i8);
	}
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r5 = (MR_Integer) 1;
	MR_r4 = MR_sv(8);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i12);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i9);
	}
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r5 = (MR_Integer) 0;
	MR_r4 = MR_sv(8);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i12);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r5 = (MR_Integer) 2;
	MR_r4 = MR_sv(8);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i14);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(array__set_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i15);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i49);
	}
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i17);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(array__set_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i18);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i49);
	}
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i20);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r5 = MR_sv(5);
	MR_r6 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i49);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

MR_BEGIN_MODULE(array_module245)
	MR_init_entry1(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0);
	MR_init_label10(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,48,2,4,6,7,8,9,11,14,13)
	MR_init_label3(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,17,16,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__merge_subarrays__[T = int]_0_1'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 <= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i2);
	}
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 <= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i4);
	}
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i6);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i7);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(7) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i8);
	}
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r5 = (MR_Integer) 1;
	MR_r4 = MR_sv(8);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i11);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(7) != MR_r1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i9);
	}
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r5 = (MR_Integer) 0;
	MR_r4 = MR_sv(8);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i11);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r5 = (MR_Integer) 2;
	MR_r4 = MR_sv(8);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i13);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(array__set_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i14);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i48);
	}
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i16);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(array__set_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i17);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i48);
	}
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i19);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r5 = MR_sv(5);
	MR_r6 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i48);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module246)
	MR_init_entry1(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0);
	MR_init_label4(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0,12,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__copy_subarray_reverse__[T = string]_0_1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0_i3);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(array__set_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0_i4);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = ((MR_Integer) MR_sv(4) - (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0_i12);
	}
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module247)
	MR_init_entry1(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0);
	MR_init_label4(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0,12,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__copy_subarray_reverse__[T = int]_0_1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0_i3);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(array__set_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0_i4);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = ((MR_Integer) MR_sv(4) - (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0_i12);
	}
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module248)
	MR_init_entry1(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0);
	MR_init_label4(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0,12,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__copy_subarray__[T = string]_0_1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0_i3);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(array__set_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0_i4);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0_i12);
	}
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module249)
	MR_init_entry1(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0);
	MR_init_label4(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0,12,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__copy_subarray__[T = int]_0_1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0_i3);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(array__set_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0_i4);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0_i12);
	}
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module250)
	MR_init_entry1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0);
	MR_init_label8(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0,32,5,6,7,8,11,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__search_until__[T = string]_0_1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0_i5);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0_i6);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0
	S1 = (MR_String) MR_sv(5);
	S2 = (MR_String) MR_r1;
{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 21318 "array.c"
	MR_r5 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r5,0)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0_i11);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0_i11);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r3 = (MR_Integer) 2;
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r3)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0_i32);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module251)
	MR_init_entry1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0);
	MR_init_label8(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0,31,5,6,7,8,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__search_until__[T = int]_0_1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0_i5);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0_i6);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(5) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0_i10);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) != MR_r1)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0_i10);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r3 = (MR_Integer) 2;
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r3)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0_i31);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module252)
	MR_init_entry1(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0);
	MR_init_label10(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,52,4,5,3,9,10,11,12,15,16)
	MR_init_label5(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,17,7,8,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__samsort_down__[T = string]_0_1'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 <= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i52);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_proceed();
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i3);
	}
	MR_sv(5) = MR_r1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i4);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	}
	MR_np_localcall_lab(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i5);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_r5 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_r6 = MR_r2;
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i20);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i8);
	}
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i9);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i10);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0
	S1 = (MR_String) MR_sv(6);
	S2 = (MR_String) MR_r1;
{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 21573 "array.c"
	MR_r5 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r5,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i11);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i15);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i12);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i15);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r1 = (MR_Integer) 2;
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 == (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i16);
	}
	MR_sv(5) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i7);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i17);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_r4 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i20);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Integer) 2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i19);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_r4 = MR_r2;
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i20);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module253)
	MR_init_entry1(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0);
	MR_init_label10(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,51,4,5,3,9,10,11,12,14,15)
	MR_init_label5(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,16,7,8,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__samsort_down__[T = int]_0_1'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 <= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i51);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_proceed();
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i3);
	}
	MR_sv(5) = MR_r1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i4);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	}
	MR_np_localcall_lab(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i5);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_r5 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_r6 = MR_r2;
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i19);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i8);
	}
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i9);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i10);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(6) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i11);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i14);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(6) != MR_r1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i12);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i14);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r1 = (MR_Integer) 2;
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 == (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i15);
	}
	MR_sv(5) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i7);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i16);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_r4 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i19);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Integer) 2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i18);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_r4 = MR_r2;
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i19);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module254)
	MR_init_entry1(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0);
	MR_init_label10(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,53,4,5,3,9,10,11,12,15,16)
	MR_init_label6(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,17,7,8,19,20,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__samsort_up__[T = string]_0_1'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 <= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i53);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_sv(4) = MR_tempr2;
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i4);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_r5 = ((MR_Integer) MR_sv(4) - (MR_Integer) 1);
	MR_r6 = MR_r2;
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i5);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	}
	MR_np_localcall_lab(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i22);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i9);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i10);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0
	S1 = (MR_String) MR_sv(6);
	S2 = (MR_String) MR_r1;
{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 22003 "array.c"
	MR_r5 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r5,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i11);
	}
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i15);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i12);
	}
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i15);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = (MR_Integer) 2;
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 == (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i16);
	}
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i7);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i17);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_r4 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i20);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_r1 = (MR_Integer) 2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i19);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_r4 = MR_r2;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_6_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i20);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_r6 = MR_sv(5);
	}
	MR_np_localcall_lab(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i22);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module255)
	MR_init_entry1(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0);
	MR_init_label10(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,52,4,5,3,9,10,11,12,14,15)
	MR_init_label6(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,16,7,8,18,19,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__samsort_up__[T = int]_0_1'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 <= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i52);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_sv(4) = MR_tempr2;
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i4);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_r5 = ((MR_Integer) MR_sv(4) - (MR_Integer) 1);
	MR_r6 = MR_r2;
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i5);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	}
	MR_np_localcall_lab(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i21);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i9);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i10);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(6) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i11);
	}
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i14);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(6) != MR_r1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i12);
	}
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i14);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = (MR_Integer) 2;
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 == (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i15);
	}
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i7);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i16);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_r4 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i19);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_r1 = (MR_Integer) 2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i18);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_r4 = MR_r2;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_6_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i19);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_r6 = MR_sv(5);
	}
	MR_np_localcall_lab(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i21);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module256)
	MR_init_entry1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_3_0);
	MR_init_label1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__samsort_subarray__[T = string]_0_1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r1, Array0);
{
#line 1936 "array.m"

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 22387 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_r4;
	}
	MR_np_call_localret_ent(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_3_0_i2);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module257)
	MR_init_entry1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_3_0);
	MR_init_label1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__samsort_subarray__[T = int]_0_1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r1, Array0);
{
#line 1936 "array.m"

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 22443 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_tempr1);
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_r4;
	}
	MR_np_call_localret_ent(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_3_0_i2);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module258)
	MR_init_entry1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_1_0);
	MR_init_label1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__sort__[T = string]_0_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r1, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 22497 "array.c"
	MR_r4 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r1, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 22511 "array.c"
	MR_r5 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r1, Array0);
{
#line 1936 "array.m"

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 22526 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r6 = MR_r4;
	}
	MR_np_call_localret_ent(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_1_0_i2);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module259)
	MR_init_entry1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_0);
	MR_init_label1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__sort__[T = int]_0_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r1, Array);
{
#line 1367 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 22577 "array.c"
	MR_r4 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r1, Array);
{
#line 1403 "array.m"

    Max = Array->size - 1;
;}
#line 22591 "array.c"
	MR_r5 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r1, Array0);
{
#line 1936 "array.m"

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 22606 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r3);
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r6 = MR_r4;
	}
	MR_np_call_localret_ent(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_0_i2);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module260)
	MR_init_entry1(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_114_105_110_107_95_50_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_114_105_110_107_95_50_95_95_91_49_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__shrink_2__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_114_105_110_107_95_50_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_114_105_110_107_95_50_95_95_91_49_93_95_48_3_0
	Size = MR_r1;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array0);
{
#line 1851 "array.m"

    ML_alloc_array(Array, Size + 1, MR_ALLOC_ID);
    ML_shrink_array(Array, Array0, Size);
;}
#line 22656 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module261)
	MR_init_entry1(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_95_91_49_93_95_48_4_0);
	MR_init_label1(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_95_91_49_93_95_48_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__unsafe_insert_items__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_95_91_49_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_95_91_49_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_95_91_49_93_95_48_4_0
	Index = MR_r2;
	Item = MR_tempr1;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r3, Array0);
{
#line 1603 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 22707 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r3);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_np_localtailcall(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_95_91_49_93_95_48_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module262)
	MR_init_entry1(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_4_0);
	MR_init_label1(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__unsafe_insert_items_reverse__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_4_0
	Index = MR_r2;
	Item = MR_tempr1;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r3, Array0);
{
#line 1603 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 22761 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r3);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_np_localtailcall(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_114_101_118_101_114_115_101_95_95_91_49_93_95_48_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module263)
	MR_init_entry1(fn__f_97_114_114_97_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_97_114_114_97_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_97_114_114_97_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module264)
	MR_init_entry1(fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_0);
	MR_init_label1(fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__do_foldr_func__ho9__[1, 2, 3, 4, 5]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_0_i2);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r1, Array);
	Index = MR_r4;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 22833 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r4 = ((MR_Integer) MR_r4 - (MR_Integer) 1);
	MR_np_localtailcall(fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module265)
	MR_init_entry1(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0);
	MR_init_label10(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0,47,21,2,5,7,3,10,11,12,14)
	MR_init_label1(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__bsearch_2__ho10__[1, 8]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = ((MR_Integer) MR_r5 - (MR_Integer) MR_r4);
	if (MR_INT_GE(MR_r7,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0_i2);
	}
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r6;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0_i5);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0_i7);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0_i21);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r6;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_tempr2);
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0_i10);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0_i11);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0_i12);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0_i14);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0_i47);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0_i16);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0_i47);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_48_95_95_91_49_44_32_56_93_95_48_6_0_i47);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module266)
	MR_init_entry1(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0);
	MR_init_label10(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0,46,2,3,11,12,10,7,5,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__approx_binary_search_2__ho11__[3]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 > (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r6;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = (((MR_Integer) MR_tempr2 + (MR_Integer) MR_tempr3) / (MR_Integer) 2);
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0_i2);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0_i3);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0_i5);
	}
	if (((MR_Integer) MR_sv(5) >= (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0_i10);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0_i11);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0_i12);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0_i10);
	}
	MR_r2 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) != MR_sv(4))) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0_i7);
	}
	MR_r2 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0_i46);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0_i17);
	}
	MR_r2 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0_i46);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_49_95_95_91_51_93_95_48_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module267)
	MR_init_entry1(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_0);
	MR_init_label3(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_0,10,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__map_2__ho12__[1, 2, 4, 5, 8]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 < (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_0_i2);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(6);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
	Index = MR_r2;
{
#line 1535 "array.m"

    Item = Array->elements[Index];
;}
#line 23163 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_0_i3);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_0
	Index = MR_sv(1);
	Item = MR_r1;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(4), Array0);
{
#line 1603 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 23194 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r5);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(5);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_56_93_95_48_6_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 1900 "array.m"

/*
** The caller is responsible for allocating the storage for the new array.
** This routine does the job of copying the array elements.
*/
void
ML_copy_array(MR_ArrayPtr array, MR_ConstArrayPtr old_array)
{
    /*
    ** Any changes to this function will probably also require changes to
    ** - array.append below, and
    ** - MR_deep_copy() in runtime/mercury_deep_copy.[ch].
    */

    MR_Integer i;
    MR_Integer array_size;

    array_size = old_array->size;
    array->size = array_size;
    for (i = 0; i < array_size; i++) {
        array->elements[i] = old_array->elements[i];
    }
}

#line 23234 "array.c"
#line 1800 "array.m"

/*
** The caller is responsible for allocating the storage for the new array.
** This routine does the job of copying the old array elements to the
** new array and deallocating the old array.
*/
void
ML_shrink_array(MR_ArrayPtr array, MR_ArrayPtr old_array,
    MR_Integer array_size)
{
    MR_Integer i;

    array->size = array_size;
    for (i = 0; i < array_size; i++) {
        array->elements[i] = old_array->elements[i];
    }

    /*
    ** Since the mode on the old array is `array_di', it is safe to
    ** deallocate the storage for it.
    */
#ifdef MR_CONSERVATIVE_GC
    MR_GC_free_attrib(old_array);
#endif
}

#line 23262 "array.c"
#line 1703 "array.m"

/*
** The caller is responsible for allocating the storage for the new array.
** This routine does the job of copying the old array elements to the
** new array, initializing any additional elements in the new array,
** and deallocating the old array.
*/
void
ML_resize_array(MR_ArrayPtr array, MR_ArrayPtr old_array,
    MR_Integer array_size, MR_Word item)
{
    MR_Integer i;
    MR_Integer elements_to_copy;

    elements_to_copy = old_array->size;
    if (elements_to_copy > array_size) {
        elements_to_copy = array_size;
    }

    array->size = array_size;
    for (i = 0; i < elements_to_copy; i++) {
        array->elements[i] = old_array->elements[i];
    }
    for (; i < array_size; i++) {
        array->elements[i] = item;
    }

    /*
    ** Since the mode on the old array is `array_di', it is safe to
    ** deallocate the storage for it.
    */
#ifdef MR_CONSERVATIVE_GC
    MR_GC_free_attrib(old_array);
#endif
}

#line 23300 "array.c"
#line 891 "array.m"

/*
** The caller is responsible for allocating the memory for the array.
** This routine does the job of initializing the already-allocated memory.
*/
void
ML_init_array(MR_ArrayPtr array, MR_Integer size, MR_Word item)
{
    MR_Integer i;

    array->size = size;
    for (i = 0; i < size; i++) {
        array->elements[i] = item;
    }
}

#line 23318 "array.c"

MR_declare_entry(mercury__array__array_compare_3_0);

void
ML_array_compare(MR_Word Mercury__argument1, MR_Word * Mercury__argument2, MR_ArrayPtr Mercury__argument3, MR_ArrayPtr Mercury__argument4);

void
ML_array_compare(MR_Word Mercury__argument1, MR_Word * Mercury__argument2, MR_ArrayPtr Mercury__argument3, MR_ArrayPtr Mercury__argument4)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__array__array_compare_3_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Mercury__argument3, MR_r2);
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Mercury__argument4, MR_r3);
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__array__array_compare_3_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_entry(mercury__array__array_equal_2_0);

MR_bool
ML_array_equal(MR_Word Mercury__argument1, MR_ArrayPtr Mercury__argument2, MR_ArrayPtr Mercury__argument3);

MR_bool
ML_array_equal(MR_Word Mercury__argument1, MR_ArrayPtr Mercury__argument2, MR_ArrayPtr Mercury__argument3)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__array__array_equal_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Mercury__argument2, MR_r2);
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Mercury__argument3, MR_r3);
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__array__array_equal_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	if (!MR_r1) {
		MR_restore_regs_from_mem(c_regs);
	return MR_FALSE;
	}
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return MR_TRUE;
}


static void mercury__array_maybe_bunch_0(void)
{
	array_module0();
	array_module1();
	array_module2();
	array_module3();
	array_module4();
	array_module5();
	array_module6();
	array_module7();
	array_module8();
	array_module9();
	array_module10();
	array_module11();
	array_module12();
	array_module13();
	array_module14();
	array_module15();
	array_module16();
	array_module17();
	array_module18();
	array_module19();
	array_module20();
	array_module21();
	array_module22();
	array_module23();
	array_module24();
	array_module25();
	array_module26();
	array_module27();
	array_module28();
	array_module29();
	array_module30();
	array_module31();
	array_module32();
	array_module33();
	array_module34();
	array_module35();
	array_module36();
	array_module37();
	array_module38();
	array_module39();
}

static void mercury__array_maybe_bunch_1(void)
{
	array_module40();
	array_module41();
	array_module42();
	array_module43();
	array_module44();
	array_module45();
	array_module46();
	array_module47();
	array_module48();
	array_module49();
	array_module50();
	array_module51();
	array_module52();
	array_module53();
	array_module54();
	array_module55();
	array_module56();
	array_module57();
	array_module58();
	array_module59();
	array_module60();
	array_module61();
	array_module62();
	array_module63();
	array_module64();
	array_module65();
	array_module66();
	array_module67();
	array_module68();
	array_module69();
	array_module70();
	array_module71();
	array_module72();
	array_module73();
	array_module74();
	array_module75();
	array_module76();
	array_module77();
	array_module78();
	array_module79();
}

static void mercury__array_maybe_bunch_2(void)
{
	array_module80();
	array_module81();
	array_module82();
	array_module83();
	array_module84();
	array_module85();
	array_module86();
	array_module87();
	array_module88();
	array_module89();
	array_module90();
	array_module91();
	array_module92();
	array_module93();
	array_module94();
	array_module95();
	array_module96();
	array_module97();
	array_module98();
	array_module99();
	array_module100();
	array_module101();
	array_module102();
	array_module103();
	array_module104();
	array_module105();
	array_module106();
	array_module107();
	array_module108();
	array_module109();
	array_module110();
	array_module111();
	array_module112();
	array_module113();
	array_module114();
	array_module115();
	array_module116();
	array_module117();
	array_module118();
	array_module119();
}

static void mercury__array_maybe_bunch_3(void)
{
	array_module120();
	array_module121();
	array_module122();
	array_module123();
	array_module124();
	array_module125();
	array_module126();
	array_module127();
	array_module128();
	array_module129();
	array_module130();
	array_module131();
	array_module132();
	array_module133();
	array_module134();
	array_module135();
	array_module136();
	array_module137();
	array_module138();
	array_module139();
	array_module140();
	array_module141();
	array_module142();
	array_module143();
	array_module144();
	array_module145();
	array_module146();
	array_module147();
	array_module148();
	array_module149();
	array_module150();
	array_module151();
	array_module152();
	array_module153();
	array_module154();
	array_module155();
	array_module156();
	array_module157();
	array_module158();
	array_module159();
}

static void mercury__array_maybe_bunch_4(void)
{
	array_module160();
	array_module161();
	array_module162();
	array_module163();
	array_module164();
	array_module165();
	array_module166();
	array_module167();
	array_module168();
	array_module169();
	array_module170();
	array_module171();
	array_module172();
	array_module173();
	array_module174();
	array_module175();
	array_module176();
	array_module177();
	array_module178();
	array_module179();
	array_module180();
	array_module181();
	array_module182();
	array_module183();
	array_module184();
	array_module185();
	array_module186();
	array_module187();
	array_module188();
	array_module189();
	array_module190();
	array_module191();
	array_module192();
	array_module193();
	array_module194();
	array_module195();
	array_module196();
	array_module197();
	array_module198();
	array_module199();
}

static void mercury__array_maybe_bunch_5(void)
{
	array_module200();
	array_module201();
	array_module202();
	array_module203();
	array_module204();
	array_module205();
	array_module206();
	array_module207();
	array_module208();
	array_module209();
	array_module210();
	array_module211();
	array_module212();
	array_module213();
	array_module214();
	array_module215();
	array_module216();
	array_module217();
	array_module218();
	array_module219();
	array_module220();
	array_module221();
	array_module222();
	array_module223();
	array_module224();
	array_module225();
	array_module226();
	array_module227();
	array_module228();
	array_module229();
	array_module230();
	array_module231();
	array_module232();
	array_module233();
	array_module234();
	array_module235();
	array_module236();
	array_module237();
	array_module238();
	array_module239();
}

static void mercury__array_maybe_bunch_6(void)
{
	array_module240();
	array_module241();
	array_module242();
	array_module243();
	array_module244();
	array_module245();
	array_module246();
	array_module247();
	array_module248();
	array_module249();
	array_module250();
	array_module251();
	array_module252();
	array_module253();
	array_module254();
	array_module255();
	array_module256();
	array_module257();
	array_module258();
	array_module259();
	array_module260();
	array_module261();
	array_module262();
	array_module263();
	array_module264();
	array_module265();
	array_module266();
	array_module267();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__array__init(void);
void mercury__array__init_type_tables(void);
void mercury__array__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__array__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__array__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__array__init_threadscope_string_table(void);
#endif

void mercury__array__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__array_maybe_bunch_0();
	mercury__array_maybe_bunch_1();
	mercury__array_maybe_bunch_2();
	mercury__array_maybe_bunch_3();
	mercury__array_maybe_bunch_4();
	mercury__array_maybe_bunch_5();
	mercury__array_maybe_bunch_6();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_array__type_ctor_info_array_1,
		array__array_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_array__type_ctor_info_index_out_of_bounds_0,
		array__index_out_of_bounds_0_0);
	mercury__array__init_debugger();
}

void mercury__array__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_array__type_ctor_info_array_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_array__type_ctor_info_index_out_of_bounds_0);
	}
}


void mercury__array__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__array__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__array);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__array__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__array__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
