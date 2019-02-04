/*
** Automatically generated from `array.m'
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
INIT mercury__array__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "array.c"
#include "array.mh"

#line 28 "array.c"
#line 136 "io.int2"
#include "io.mh"

#line 32 "array.c"
#line 144 "io.int2"
#include "string.mh"

#line 36 "array.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 40 "array.c"
#line 28 "time.int2"
#include "time.mh"

#line 44 "array.c"
#line 21 "stm_builtin.int2"
#include "stm_builtin.mh"

#line 48 "array.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 52 "array.c"
#line 4 "char.opt"
#include "char.mh"

#line 56 "array.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 60 "array.c"
#line 150 "io.opt"
#include "dir.mh"

#line 64 "array.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 68 "array.c"
#line 3 "float.opt"
#include "float.mh"

#line 72 "array.c"
#line 3 "math.opt"
#include "math.mh"

#line 76 "array.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 80 "array.c"
#line 112 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 84 "array.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 88 "array.c"
#line 20 "store.opt"
#include "store.mh"

#line 92 "array.c"
#line 4 "int.opt"
#include "int.mh"

#line 96 "array.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 100 "array.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 104 "array.c"
#line 105 "array.c"
#ifndef ARRAY_DECL_GUARD
#define ARRAY_DECL_GUARD

#line 109 "array.c"
#line 611 "array.m"

#include "mercury_heap.h"     /* for MR_maybe_record_allocation() */
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

#define ML_alloc_array(newarray, arraysize, proclabel)                      do {                                                                        MR_Word newarray_word;                                                  MR_offset_incr_hp_msg(newarray_word, 0, (arraysize),                        proclabel, "array:array/1");                                      (newarray) = (MR_ArrayPtr) newarray_word;                           } while (0)

#line 130 "array.c"
#line 637 "array.m"

void ML_init_array(MR_ArrayPtr, MR_Integer size, MR_Word item);

#line 135 "array.c"
#line 1033 "array.m"

void ML_resize_array(MR_ArrayPtr new_array, MR_ArrayPtr old_array,
    MR_Integer array_size, MR_Word item);

#line 141 "array.c"
#line 1160 "array.m"

void ML_shrink_array(MR_ArrayPtr array, MR_ArrayPtr old_array,
    MR_Integer array_size);

#line 147 "array.c"
#line 1259 "array.m"

void ML_copy_array(MR_ArrayPtr array, MR_ConstArrayPtr old_array);

#line 152 "array.c"
#line 153 "array.c"

#endif
#line 156 "array.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Unsigned f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_array__type_ctor_info_array_1,
	mercury_data_array__type_ctor_info_index_out_of_bounds_0;
MR_decl_label10(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0, 51,4,5,3,9,10,11,12,14,15)
MR_decl_label5(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0, 16,7,8,18,19)
MR_decl_label10(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0, 52,4,5,3,9,10,11,12,15,16)
MR_decl_label5(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0, 17,7,8,19,20)
MR_decl_label10(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0, 52,4,5,3,9,10,11,12,14,15)
MR_decl_label6(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0, 16,7,8,18,19,21)
MR_decl_label10(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0, 53,4,5,3,9,10,11,12,15,16)
MR_decl_label6(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0, 17,7,8,19,20,22)
MR_decl_label10(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0, 46,2,3,11,12,10,7,5,17,1)
MR_decl_label10(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0, 39,21,2,5,7,3,10,11,12,14)
MR_decl_label1(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0, 16)
MR_decl_label5(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_56_93_95_48_6_0, 12,2,3,4,5)
MR_decl_label1(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_95_91_49_93_95_48_4_0, 3)
MR_decl_label10(array__approx_binary_search_2_6_0, 46,2,3,11,12,10,7,5,17,1)
MR_decl_label4(array__array_compare_3_0, 2,3,5,25)
MR_decl_label1(array__array_equal_2_0, 1)
MR_decl_label4(array__binary_search_3_0, 2,4,5,1)
MR_decl_label4(array__binary_search_4_0, 2,4,5,1)
MR_decl_label1(array__bounds_checks_0_0, 1)
MR_decl_label10(array__bsearch_2_6_0, 39,21,2,5,7,3,10,11,12,14)
MR_decl_label1(array__bsearch_2_6_0, 16)
MR_decl_label6(array__compare_elements_5_0, 17,2,3,4,5,20)
MR_decl_label6(array__equal_elements_4_0, 19,3,4,5,9,1)
MR_decl_label4(array__foldl2_0_8_0, 11,2,3,4)
MR_decl_label4(array__foldl_0_6_0, 11,2,3,4)
MR_decl_label4(array__from_list_2_0, 21,4,5,20)
MR_decl_label1(array__in_bounds_2_0, 1)
MR_decl_label1(array__init_3_0, 2)
MR_decl_label2(array__lookup_3_0, 7,3)
MR_decl_label4(array__map_3_0, 3,4,23,2)
MR_decl_label5(array__map_2_6_0, 12,2,3,4,5)
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
MR_decl_label5(fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0, 3,5,6,8,10)
MR_decl_label4(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0, 12,3,4,2)
MR_decl_label4(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0, 12,3,4,2)
MR_decl_label4(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0, 12,3,4,2)
MR_decl_label4(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0, 12,3,4,2)
MR_decl_label10(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0, 54,2,4,6,7,8,9,11,13,17)
MR_decl_label2(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0, 16,19)
MR_decl_label10(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0, 55,2,4,6,7,8,9,12,14,18)
MR_decl_label2(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0, 17,20)
MR_decl_label1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_3_0, 2)
MR_decl_label1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_3_0, 2)
MR_decl_label8(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0, 31,5,6,7,8,10,2,3)
MR_decl_label8(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0, 32,5,6,7,8,11,2,3)
MR_decl_label1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_0, 2)
MR_decl_label1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_1_0, 2)
MR_decl_label3(fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_48_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_5_0, 11,2,3)
MR_decl_label5(fn__array__array_to_doc_1_0, 4,18,19,21,23)
MR_decl_label4(fn__array__copy_subarray_5_0, 12,3,4,2)
MR_decl_label4(fn__array__copy_subarray_reverse_5_0, 12,3,4,2)
MR_decl_label4(fn__array__foldl_0_5_0, 11,2,3,4)
MR_decl_label4(fn__array__foldr_0_5_0, 11,2,3,4)
MR_decl_label1(fn__array__init_2_0, 2)
MR_decl_label4(fn__array__map_2_0, 3,4,23,2)
MR_decl_label10(fn__array__merge_subarrays_7_0, 41,2,4,6,7,8,10,14,13,16)
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
MR_def_extern_entry(array__unsafe_set_4_0)
MR_def_extern_entry(array__from_list_2_0)
MR_def_extern_entry(fn__array__array_1_0)
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
MR_def_extern_entry(array__semidet_set_4_0)
MR_def_extern_entry(array__copy_2_0)
MR_def_extern_entry(array__slow_set_4_0)
MR_def_extern_entry(fn__array__slow_set_3_0)
MR_def_extern_entry(array__semidet_slow_set_4_0)
MR_def_extern_entry(fn__array__elem_2_0)
MR_def_extern_entry(fn__f_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0)
MR_def_extern_entry(fn__array__copy_1_0)
MR_def_extern_entry(array__resize_4_0)
MR_def_extern_entry(fn__array__resize_3_0)
MR_decl_static(array__shrink_2_3_0)
MR_def_extern_entry(array__shrink_3_0)
MR_def_extern_entry(fn__array__shrink_2_0)
MR_def_extern_entry(fn__array__from_list_1_0)
MR_def_extern_entry(fn__array__foldr_0_5_0)
MR_def_extern_entry(fn__array__foldr_0_5_1)
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
MR_decl_static(fn__array__copy_subarray_5_0)
MR_decl_static(fn__array__copy_subarray_reverse_5_0)
MR_decl_static(fn__array__merge_subarrays_7_0)
MR_decl_static(array__samsort_down_8_0)
MR_def_extern_entry(array__samsort_up_8_0)
MR_def_extern_entry(fn__array__samsort_subarray_3_0)
MR_def_extern_entry(fn__array__sort_1_0)
MR_def_extern_entry(fn__array__foldl_0_5_0)
MR_def_extern_entry(fn__array__foldl_0_5_1)
MR_def_extern_entry(fn__array__foldl_3_0)
MR_def_extern_entry(fn__array__foldl_3_1)
MR_def_extern_entry(array__foldl_0_6_0)
MR_def_extern_entry(array__foldl_0_6_1)
MR_def_extern_entry(array__foldl_0_6_2)
MR_def_extern_entry(array__foldl_4_0)
MR_def_extern_entry(array__foldl_4_1)
MR_def_extern_entry(array__foldl_4_2)
MR_def_extern_entry(array__foldl2_0_8_0)
MR_def_extern_entry(array__foldl2_0_8_1)
MR_def_extern_entry(array__foldl2_0_8_2)
MR_def_extern_entry(array__foldl2_6_0)
MR_def_extern_entry(array__foldl2_6_1)
MR_def_extern_entry(array__foldl2_6_2)
MR_def_extern_entry(fn__array__foldr_3_0)
MR_def_extern_entry(fn__array__foldr_3_1)
MR_def_extern_entry(fn__array__swap_elems_3_0)
MR_def_extern_entry(array__permutation_2_8_0)
MR_def_extern_entry(array__random_permutation_4_0)
MR_def_extern_entry(fn__array__array_to_doc_1_0)
MR_decl_static(array__equal_elements_4_0)
MR_def_extern_entry(array__array_equal_2_0)
MR_def_extern_entry(__Unify___array__array_1_0)
MR_def_extern_entry(__Compare___array__array_1_0)
MR_def_extern_entry(__Unify___array__index_out_of_bounds_0_0)
MR_def_extern_entry(__Compare___array__index_out_of_bounds_0_0)
MR_decl_static(fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0)
MR_decl_static(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0)
MR_decl_static(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0)
MR_decl_static(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0)
MR_decl_static(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0)
MR_decl_static(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0)
MR_decl_static(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0)
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
MR_decl_static(fn__f_97_114_114_97_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_48_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_5_0)
MR_decl_static(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0)
MR_decl_static(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0)
MR_decl_static(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_56_93_95_48_6_0)

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
17
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
mercury_data__closure_layout__fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0_2;
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
(MR_Word *) &mercury_data__closure_layout__fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0_1,
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
(MR_Word *) &mercury_data__closure_layout__fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0_2,
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
	13,
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
	13,
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
mercury_data__closure_layout__fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0_2 = {
{
MR_FUNCTION,
"array",
"array",
"lambda_array_m_1909",
4,
0
},
"array",
"array.m",
1909,
"d1;c3;e;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0_1 = {
{
MR_FUNCTION,
"array",
"array",
"lambda_array_m_1909",
4,
0
},
"array",
"array.m",
1909,
"d1;c3;e;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__array__array_to_doc_1_0_2 = {
{
MR_FUNCTION,
"array",
"array",
"lambda_array_m_1909",
4,
0
},
"array",
"array.m",
1909,
"d1;c3;e;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__array__array_to_doc_1_0_1 = {
{
MR_FUNCTION,
"array",
"array",
"lambda_array_m_1909",
4,
0
},
"array",
"array.m",
1909,
"d1;c3;e;c10;"
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
#line 737 "array.m"

    ML_alloc_array(Array, 1, MR_PROC_LABEL);
    ML_init_array(Array, 0, 0);
;}
#line 743 "array.c"
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
#line 737 "array.m"

    ML_alloc_array(Array, 1, MR_PROC_LABEL);
    ML_init_array(Array, 0, 0);
;}
#line 777 "array.c"
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
#line 728 "array.m"

    ML_alloc_array(Array, Size + 1, MR_PROC_LABEL);
    ML_init_array(Array, Size, Item);
;}
#line 815 "array.c"
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
#line 728 "array.m"

    ML_alloc_array(Array, Size + 1, MR_PROC_LABEL);
    ML_init_array(Array, Size, Item);
;}
#line 862 "array.c"
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
#line 728 "array.m"

    ML_alloc_array(Array, Size + 1, MR_PROC_LABEL);
    ML_init_array(Array, Size, Item);
;}
#line 908 "array.c"
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
	MR_ArrayPtr	Array0;
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__unsafe_set_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array0);
	Index = MR_r3;
	Item = MR_r4;
{
#line 996 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 948 "array.c"
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

MR_BEGIN_MODULE(array_module6)
	MR_init_entry1(array__from_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__from_list_2_0);
	MR_init_label4(array__from_list_2_0,21,4,5,20)
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
		MR_GOTO_LAB(array__from_list_2_0_i21);
	}
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__from_list_2_0
{
#line 737 "array.m"

    ML_alloc_array(Array, 1, MR_PROC_LABEL);
    ML_init_array(Array, 0, 0);
;}
#line 987 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(array__from_list_2_0,21)
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
	if (MR_INT_GE(MR_r1,0)) {
		MR_GOTO_LAB(array__from_list_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("array.init: negative size", 25);
	MR_np_call_localret_ent(require__error_1_0,
		array__from_list_2_0_i20);
MR_def_label(array__from_list_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	Item;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__from_list_2_0
	Size = MR_r1;
	Item = MR_sv(1);
{
#line 728 "array.m"

    ML_alloc_array(Array, Size + 1, MR_PROC_LABEL);
    ML_init_array(Array, Size, Item);
;}
#line 1024 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r3);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
MR_def_label(array__from_list_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module7)
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


MR_BEGIN_MODULE(array_module8)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 1087 "array.c"
	MR_r1 = Min;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module9)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 1123 "array.c"
	MR_r1 = Min;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module10)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 1159 "array.c"
	MR_r1 = Min;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module11)
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
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 1194 "array.c"
	MR_r1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module12)
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
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 1229 "array.c"
	MR_r1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module13)
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
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 1264 "array.c"
	MR_r1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module14)
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
#line 872 "array.m"

    Max = Array->size;
;}
#line 1299 "array.c"
	MR_r1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module15)
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
#line 872 "array.m"

    Max = Array->size;
;}
#line 1334 "array.c"
	MR_r1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module16)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 1370 "array.c"
	MR_r1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__bounds_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 1384 "array.c"
	MR_r2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module17)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 1421 "array.c"
	MR_r1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__in_bounds_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 1435 "array.c"
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


MR_BEGIN_MODULE(array_module18)
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
#line 953 "array.m"

    Item = Array->elements[Index];
;}
#line 1480 "array.c"
	MR_r1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module19)
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
#line 575 "array.m"

#ifdef ML_OMIT_ARRAY_BOUNDS_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 1520 "array.c"
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

MR_BEGIN_MODULE(array_module20)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 1571 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__out_of_bounds_error_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 1585 "array.c"
	MR_r1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
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
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		array__out_of_bounds_error_3_0_i5);
MR_def_label(array__out_of_bounds_error_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
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
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		array__out_of_bounds_error_3_0_i8);
MR_def_label(array__out_of_bounds_error_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
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
	MR_r1 = MR_sv(2);
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


MR_BEGIN_MODULE(array_module21)
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
#line 575 "array.m"

#ifdef ML_OMIT_ARRAY_BOUNDS_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 1719 "array.c"
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 1738 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__lookup_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 1752 "array.c"
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
#line 953 "array.m"

    Item = Array->elements[Index];
;}
#line 1781 "array.c"
	MR_r1 = Item;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module22)
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


MR_BEGIN_MODULE(array_module23)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 1841 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__semidet_lookup_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 1855 "array.c"
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
#line 953 "array.m"

    Item = Array->elements[Index];
;}
#line 1877 "array.c"
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


MR_BEGIN_MODULE(array_module24)
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
#line 575 "array.m"

#ifdef ML_OMIT_ARRAY_BOUNDS_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 1923 "array.c"
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
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 1942 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__set_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 1956 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_tempr1 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(array__set_4_0_i7);
	}
	if (((MR_Integer) MR_r3 <= (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(array__set_4_0_i3);
	}
	}
MR_def_label(array__set_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_string_const("array.set", 9);
	MR_np_tailcall_ent(array__out_of_bounds_error_3_0);
MR_def_label(array__set_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array0;
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__set_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array0);
	Index = MR_r3;
	Item = MR_r4;
{
#line 996 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 1988 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module25)
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
	MR_np_tailcall_ent(array__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module26)
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
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 2048 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__semidet_set_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 2062 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_tempr1 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(array__semidet_set_4_0_i1);
	}
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(array__semidet_set_4_0_i1);
	}
	{
	MR_ArrayPtr	Array0;
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__semidet_set_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array0);
	Index = MR_r3;
	Item = MR_r4;
{
#line 996 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 2087 "array.c"
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


MR_BEGIN_MODULE(array_module27)
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
#line 1295 "array.m"

    ML_alloc_array(Array, Array0->size + 1, MR_PROC_LABEL);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 2129 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module28)
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
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array0);
{
#line 1295 "array.m"

    ML_alloc_array(Array, Array0->size + 1, MR_PROC_LABEL);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 2165 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r2);
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(array__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module29)
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
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__array__slow_set_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array0);
{
#line 1295 "array.m"

    ML_alloc_array(Array, Array0->size + 1, MR_PROC_LABEL);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 2201 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r2);
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(array__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module30)
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
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 2240 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__semidet_slow_set_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 2254 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_tempr1 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(array__semidet_slow_set_4_0_i1);
	}
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(array__semidet_slow_set_4_0_i1);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__semidet_slow_set_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array0);
{
#line 1295 "array.m"

    ML_alloc_array(Array, Array0->size + 1, MR_PROC_LABEL);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 2277 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r2);
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


MR_BEGIN_MODULE(array_module31)
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


MR_BEGIN_MODULE(array_module32)
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
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(array__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module33)
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
#line 1295 "array.m"

    ML_alloc_array(Array, Array0->size + 1, MR_PROC_LABEL);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 2378 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module34)
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
	MR_ArrayPtr	Array0;
	MR_Integer	Size;
	MR_Word	Item;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__resize_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array0);
	Size = MR_r3;
	Item = MR_r4;
{
#line 1084 "array.m"

    if ((Array0)->size == Size) {
        Array = Array0;
    } else {
        ML_alloc_array(Array, Size + 1, MR_PROC_LABEL);
        ML_resize_array(Array, Array0, Size, Item);
    }
;}
#line 2422 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module35)
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
	MR_ArrayPtr	Array0;
	MR_Integer	Size;
	MR_Word	Item;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__array__resize_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array0);
	Size = MR_r3;
	Item = MR_r4;
{
#line 1084 "array.m"

    if ((Array0)->size == Size) {
        Array = Array0;
    } else {
        ML_alloc_array(Array, Size + 1, MR_PROC_LABEL);
        ML_resize_array(Array, Array0, Size, Item);
    }
;}
#line 2466 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module36)
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


MR_BEGIN_MODULE(array_module37)
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
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 872 "array.m"

    Max = Array->size;
;}
#line 2525 "array.c"
	MR_r4 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r3 <= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(array__shrink_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("array.shrink: can\'t shrink to a larger size", 43);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(array__shrink_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r4)) {
		MR_GOTO_LAB(array__shrink_3_0_i4);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(array__shrink_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array0;
	MR_Integer	Size;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__shrink_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array0);
	Size = MR_r3;
{
#line 1213 "array.m"

    ML_alloc_array(Array, Size + 1, MR_PROC_LABEL);
    ML_shrink_array(Array, Array0, Size);
;}
#line 2556 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module38)
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
	MR_np_tailcall_ent(array__shrink_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module39)
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

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(array_module40)
	MR_init_entry1(fn__array__foldr_0_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__foldr_0_5_0);
	MR_init_label4(fn__array__foldr_0_5_0,11,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__foldr_0_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(fn__array__foldr_0_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(fn__array__foldr_0_5_0_i2);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(8);
MR_def_label(fn__array__foldr_0_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_tempr2 = MR_r7;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__array__foldr_0_5_0_i3);
MR_def_label(fn__array__foldr_0_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__array__foldr_0_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__array__foldr_0_5_0_i4);
MR_def_label(fn__array__foldr_0_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	MR_r7 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(fn__array__foldr_0_5_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module41)
	MR_init_entry1(fn__array__foldr_0_5_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__foldr_0_5_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr_0'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__foldr_0_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__array__foldr_0_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module42)
	MR_init_entry1(array__fetch_items_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__fetch_items_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fetch_items'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__fetch_items_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_48_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module43)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 2760 "array.c"
	MR_r4 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__to_list_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 2774 "array.c"
	MR_r5 = Max;
#undef	MR_PROC_LABEL
	}
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_48_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module44)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 2811 "array.c"
	MR_r4 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__to_list_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 2825 "array.c"
	MR_r5 = Max;
#undef	MR_PROC_LABEL
	}
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_48_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module45)
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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_48_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_105_110_116_95_95_62_62_2_0);

MR_BEGIN_MODULE(array_module46)
	MR_init_entry1(array__bsearch_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__bsearch_2_6_0);
	MR_init_label10(array__bsearch_2_6_0,39,21,2,5,7,3,10,11,12,14)
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
MR_def_label(array__bsearch_2_6_0,39)
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
	MR_GOTO_LAB(array__bsearch_2_6_0_i39);
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
	MR_GOTO_LAB(array__bsearch_2_6_0_i39);
MR_def_label(array__bsearch_2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = ((MR_Integer) MR_sv(6) - (MR_Integer) 1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__bsearch_2_6_0_i39);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module47)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 3031 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__bsearch_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 3045 "array.c"
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


MR_BEGIN_MODULE(array_module48)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 3090 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__bsearch_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 3104 "array.c"
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
	MR_np_tailcall_ent(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(array_module49)
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


MR_BEGIN_MODULE(array_module50)
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
#line 872 "array.m"

    Max = Array->size;
;}
#line 3280 "array.c"
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


MR_BEGIN_MODULE(array_module51)
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
#line 872 "array.m"

    Max = Array->size;
;}
#line 3320 "array.c"
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
	MR_np_tailcall_ent(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(array_module52)
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
#line 872 "array.m"

    Max = Array->size;
;}
#line 3369 "array.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
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
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		array__binary_search_4_0_i4);
MR_def_label(array__binary_search_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		array__binary_search_4_0_i5);
MR_def_label(array__binary_search_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__binary_search_4_0_i1);
	}
	MR_r2 = MR_sv(1);
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


MR_BEGIN_MODULE(array_module53)
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
#line 872 "array.m"

    Max = Array->size;
;}
#line 3458 "array.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0,
		array__binary_search_3_0_i2);
MR_def_label(array__binary_search_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__binary_search_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		array__binary_search_3_0_i4);
MR_def_label(array__binary_search_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		array__binary_search_3_0_i5);
MR_def_label(array__binary_search_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(array__binary_search_3_0_i1);
	}
	MR_r2 = MR_sv(1);
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

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(array_module54)
	MR_init_entry1(array__map_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__map_2_6_0);
	MR_init_label5(array__map_2_6_0,12,2,3,4,5)
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
MR_def_label(array__map_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 < (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(array__map_2_6_0_i2);
	}
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(8);
MR_def_label(array__map_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		array__map_2_6_0_i3);
MR_def_label(array__map_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__map_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__array__map_2_6_0_i4);
MR_def_label(array__map_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		array__map_2_6_0_i5);
MR_def_label(array__map_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__map_2_6_0_i12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module55)
	MR_init_entry1(array__map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__map_3_0);
	MR_init_label4(array__map_3_0,3,4,23,2)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 3634 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__map_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 3648 "array.c"
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
#line 953 "array.m"

    Item = Array->elements[Index];
;}
#line 3672 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__map_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 872 "array.m"

    Max = Array->size;
;}
#line 3686 "array.c"
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
	if (MR_INT_GE(MR_sv(3),0)) {
		MR_GOTO_LAB(array__map_3_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("array.init: negative size", 25);
	MR_np_call_localret_ent(require__error_1_0,
		array__map_3_0_i23);
MR_def_label(array__map_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	Item;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_3_0
	Size = MR_sv(3);
	Item = MR_r1;
{
#line 728 "array.m"

    ML_alloc_array(Array, Size + 1, MR_PROC_LABEL);
    ML_init_array(Array, Size, Item);
;}
#line 3725 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r7);
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
MR_def_label(array__map_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(array__map_2_6_0);
MR_def_label(array__map_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__array__map_3_0
{
#line 737 "array.m"

    ML_alloc_array(Array, 1, MR_PROC_LABEL);
    ML_init_array(Array, 0, 0);
;}
#line 3751 "array.c"
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
	MR_init_entry1(fn__array__map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__map_2_0);
	MR_init_label4(fn__array__map_2_0,3,4,23,2)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 3790 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__map_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 3804 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GT(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__array__map_2_0_i2);
	}
	if (((MR_Integer) 0 > (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(fn__array__map_2_0_i2);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Index;
	MR_Word	Item;
#define	MR_PROC_LABEL	mercury__fn__array__map_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
	Index = (MR_Integer) 0;
{
#line 953 "array.m"

    Item = Array->elements[Index];
;}
#line 3828 "array.c"
	MR_tempr1 = Item;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__map_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 872 "array.m"

    Max = Array->size;
;}
#line 3842 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__array__map_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__array__map_2_0_i3);
MR_def_label(fn__array__map_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_sv(5),0)) {
		MR_GOTO_LAB(fn__array__map_2_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("array.init: negative size", 25);
	MR_np_call_localret_ent(require__error_1_0,
		fn__array__map_2_0_i23);
MR_def_label(fn__array__map_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Size;
	MR_Word	Item;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__array__map_2_0
	Size = MR_sv(5);
	Item = MR_r1;
{
#line 728 "array.m"

    ML_alloc_array(Array, Size + 1, MR_PROC_LABEL);
    ML_init_array(Array, Size, Item);
;}
#line 3881 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r7);
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r4 = (MR_Integer) 1;
MR_def_label(fn__array__map_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_56_93_95_48_6_0);
MR_def_label(fn__array__map_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__array__map_2_0
{
#line 737 "array.m"

    ML_alloc_array(Array, 1, MR_PROC_LABEL);
    ML_init_array(Array, 0, 0);
;}
#line 3907 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module57)
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


MR_BEGIN_MODULE(array_module58)
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
#line 872 "array.m"

    Max = Array->size;
;}
#line 4022 "array.c"
	MR_r4 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__array_compare_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r3, Array);
{
#line 872 "array.m"

    Max = Array->size;
;}
#line 4036 "array.c"
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


MR_BEGIN_MODULE(array_module59)
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


MR_BEGIN_MODULE(array_module60)
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


MR_BEGIN_MODULE(array_module61)
	MR_init_entry1(fn__array__copy_subarray_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__copy_subarray_5_0);
	MR_init_label4(fn__array__copy_subarray_5_0,12,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'copy_subarray'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__array__copy_subarray_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(fn__array__copy_subarray_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(fn__array__copy_subarray_5_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__array__copy_subarray_5_0_i3);
MR_def_label(fn__array__copy_subarray_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		fn__array__copy_subarray_5_0_i4);
MR_def_label(fn__array__copy_subarray_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r5 = MR_sv(4);
	MR_r6 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(fn__array__copy_subarray_5_0_i12);
	}
MR_def_label(fn__array__copy_subarray_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module62)
	MR_init_entry1(fn__array__copy_subarray_reverse_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__copy_subarray_reverse_5_0);
	MR_init_label4(fn__array__copy_subarray_reverse_5_0,12,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'copy_subarray_reverse'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__array__copy_subarray_reverse_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(fn__array__copy_subarray_reverse_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(fn__array__copy_subarray_reverse_5_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__array__copy_subarray_reverse_5_0_i3);
MR_def_label(fn__array__copy_subarray_reverse_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		fn__array__copy_subarray_reverse_5_0_i4);
MR_def_label(fn__array__copy_subarray_reverse_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r5 = MR_sv(4);
	MR_r6 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(fn__array__copy_subarray_reverse_5_0_i12);
	}
MR_def_label(fn__array__copy_subarray_reverse_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module63)
	MR_init_entry1(fn__array__merge_subarrays_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__merge_subarrays_7_0);
	MR_init_label10(fn__array__merge_subarrays_7_0,41,2,4,6,7,8,10,14,13,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_subarrays'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__array__merge_subarrays_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(fn__array__merge_subarrays_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 <= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(fn__array__merge_subarrays_7_0_i2);
	}
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__array__copy_subarray_5_0);
MR_def_label(fn__array__merge_subarrays_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 <= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(fn__array__merge_subarrays_7_0_i4);
	}
	MR_r6 = MR_r8;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__array__copy_subarray_5_0);
MR_def_label(fn__array__merge_subarrays_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(10) = MR_r1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__array__merge_subarrays_7_0_i6);
MR_def_label(fn__array__merge_subarrays_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__array__merge_subarrays_7_0_i7);
MR_def_label(fn__array__merge_subarrays_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(builtin__compare_3_0,
		fn__array__merge_subarrays_7_0_i8);
MR_def_label(fn__array__merge_subarrays_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__array__merge_subarrays_7_0_i10);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(array__set_4_0,
		fn__array__merge_subarrays_7_0_i14);
MR_def_label(fn__array__merge_subarrays_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__array__merge_subarrays_7_0_i13);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(array__set_4_0,
		fn__array__merge_subarrays_7_0_i14);
MR_def_label(fn__array__merge_subarrays_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = ((MR_Integer) MR_sv(7) + (MR_Integer) 1);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(fn__array__merge_subarrays_7_0_i41);
	}
MR_def_label(fn__array__merge_subarrays_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(array__set_4_0,
		fn__array__merge_subarrays_7_0_i16);
MR_def_label(fn__array__merge_subarrays_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r7 = MR_sv(6);
	MR_r8 = ((MR_Integer) MR_sv(7) + (MR_Integer) 1);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(fn__array__merge_subarrays_7_0_i41);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module64)
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
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
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
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr3 = MR_r2;
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(5);
	}
	MR_np_localcall_lab(array__samsort_down_8_0,
		array__samsort_down_8_0_i5);
MR_def_label(array__samsort_down_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(4);
	MR_r5 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_r7 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r8 = MR_r4;
	}
	MR_np_call_localret_ent(fn__array__merge_subarrays_7_0,
		array__samsort_down_8_0_i15);
MR_def_label(array__samsort_down_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(array__samsort_down_8_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r6;
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
	MR_r3 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
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
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(fn__array__search_until_4_0,
		array__samsort_down_8_0_i12);
MR_def_label(array__samsort_down_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r6 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__array__copy_subarray_reverse_5_0,
		array__samsort_down_8_0_i15);
MR_def_label(array__samsort_down_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r1 = MR_sv(6);
MR_def_label(array__samsort_down_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 2;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_r6;
	}
	MR_np_call_localret_ent(fn__array__search_until_4_0,
		array__samsort_down_8_0_i14);
MR_def_label(array__samsort_down_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r6 = MR_r4;
	MR_np_call_localret_ent(fn__array__copy_subarray_5_0,
		array__samsort_down_8_0_i15);
MR_def_label(array__samsort_down_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module65)
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
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r7;
	MR_sv(2) = MR_tempr2;
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
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(4);
	MR_r5 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_r7 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_r8 = MR_r4;
	}
	MR_np_call_localret_ent(fn__array__merge_subarrays_7_0,
		array__samsort_up_8_0_i5);
MR_def_label(array__samsort_up_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(2);
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
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r6;
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
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
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
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(fn__array__search_until_4_0,
		array__samsort_up_8_0_i12);
MR_def_label(array__samsort_up_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_r6 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__array__copy_subarray_reverse_5_0,
		array__samsort_up_8_0_i15);
MR_def_label(array__samsort_up_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r1 = MR_sv(6);
MR_def_label(array__samsort_up_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(5) = MR_tempr2;
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
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r6 = MR_r4;
	}
	MR_np_call_localret_ent(fn__array__copy_subarray_5_0,
		array__samsort_up_8_0_i15);
MR_def_label(array__samsort_up_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_r1;
	MR_r7 = MR_sv(3);
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


MR_BEGIN_MODULE(array_module66)
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
#line 1295 "array.m"

    ML_alloc_array(Array, Array0->size + 1, MR_PROC_LABEL);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 4908 "array.c"
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


MR_BEGIN_MODULE(array_module67)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 4962 "array.c"
	MR_r5 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__sort_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 4976 "array.c"
	MR_r6 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__array__sort_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array0);
{
#line 1295 "array.m"

    ML_alloc_array(Array, Array0->size + 1, MR_PROC_LABEL);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 4991 "array.c"
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


MR_BEGIN_MODULE(array_module68)
	MR_init_entry1(fn__array__foldl_0_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__foldl_0_5_0);
	MR_init_label4(fn__array__foldl_0_5_0,11,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__foldl_0_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(fn__array__foldl_0_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(fn__array__foldl_0_5_0_i2);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(8);
MR_def_label(fn__array__foldl_0_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__array__foldl_0_5_0_i3);
MR_def_label(fn__array__foldl_0_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__array__foldl_0_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__array__foldl_0_5_0_i4);
MR_def_label(fn__array__foldl_0_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r7 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(fn__array__foldl_0_5_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module69)
	MR_init_entry1(fn__array__foldl_0_5_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__foldl_0_5_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_0'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__array__foldl_0_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__array__foldl_0_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module70)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 5135 "array.c"
	MR_r6 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__foldl_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 5149 "array.c"
	MR_r7 = Max;
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(fn__array__foldl_0_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module71)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 5185 "array.c"
	MR_r6 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__foldl_3_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 5199 "array.c"
	MR_r7 = Max;
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(fn__array__foldl_0_5_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module72)
	MR_init_entry1(array__foldl_0_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl_0_6_0);
	MR_init_label4(array__foldl_0_6_0,11,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl_0_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(array__foldl_0_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(array__foldl_0_6_0_i2);
	}
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(8);
MR_def_label(array__foldl_0_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		array__foldl_0_6_0_i3);
MR_def_label(array__foldl_0_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__foldl_0_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__array__foldl_0_6_0_i4);
MR_def_label(array__foldl_0_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(array__foldl_0_6_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module73)
	MR_init_entry1(array__foldl_0_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl_0_6_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_0'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl_0_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(array__foldl_0_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module74)
	MR_init_entry1(array__foldl_0_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl_0_6_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_0'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl_0_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(array__foldl_0_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module75)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 5354 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 5368 "array.c"
	MR_r6 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_np_tailcall_ent(array__foldl_0_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module76)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 5410 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl_4_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 5424 "array.c"
	MR_r6 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_np_tailcall_ent(array__foldl_0_6_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module77)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 5466 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl_4_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 5480 "array.c"
	MR_r6 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_np_tailcall_ent(array__foldl_0_6_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(array_module78)
	MR_init_entry1(array__foldl2_0_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl2_0_8_0);
	MR_init_label4(array__foldl2_0_8_0,11,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl2_0_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(array__foldl2_0_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r7 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(array__foldl2_0_8_0_i2);
	}
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_decr_sp_and_return(10);
MR_def_label(array__foldl2_0_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		array__foldl2_0_8_0_i3);
MR_def_label(array__foldl2_0_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(array__foldl2_0_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__array__foldl2_0_8_0_i4);
MR_def_label(array__foldl2_0_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(array__foldl2_0_8_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module79)
	MR_init_entry1(array__foldl2_0_8_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl2_0_8_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2_0'/8 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl2_0_8_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(array__foldl2_0_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module80)
	MR_init_entry1(array__foldl2_0_8_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__array__foldl2_0_8_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2_0'/8 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__array__foldl2_0_8_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(array__foldl2_0_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module81)
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl2_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 5647 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl2_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 5661 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_tempr4 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_r9 = MR_tempr4;
	MR_np_tailcall_ent(array__foldl2_0_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module82)
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl2_6_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 5706 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl2_6_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 5720 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_tempr4 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_r9 = MR_tempr4;
	MR_np_tailcall_ent(array__foldl2_0_8_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module83)
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__array__foldl2_6_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 5765 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__foldl2_6_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r5, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 5779 "array.c"
	MR_tempr2 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_tempr4 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_r9 = MR_tempr4;
	MR_np_tailcall_ent(array__foldl2_0_8_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module84)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 5822 "array.c"
	MR_r6 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__foldr_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 5836 "array.c"
	MR_r7 = Max;
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(fn__array__foldr_0_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module85)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 5872 "array.c"
	MR_r6 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__foldr_3_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r4, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 5886 "array.c"
	MR_r7 = Max;
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(fn__array__foldr_0_5_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module86)
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
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		fn__array__swap_elems_3_0_i4);
MR_def_label(fn__array__swap_elems_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
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

MR_BEGIN_MODULE(array_module87)
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
#line 247 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif
;}
#line 6013 "array.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(array__permutation_2_8_0_i5);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(array__permutation_2_8_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(math, domain_error);
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("int.rem: division by zero", 25);
	MR_np_call_localret_ent(exception__throw_1_0,
		array__permutation_2_8_0_i10);
MR_def_label(array__permutation_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(7) = MR_r2;
	MR_r2 = MR_sv(5);
	MR_sv(6) = ((MR_Integer) MR_sv(2) + ((MR_Integer) MR_r1 % (MR_Integer) MR_sv(4)));
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
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(array__lookup_3_0,
		array__permutation_2_8_0_i12);
MR_def_label(array__permutation_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		array__permutation_2_8_0_i13);
MR_def_label(array__permutation_2_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(9);
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
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(array__permutation_2_8_0_i36);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module88)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 6121 "array.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__random_permutation_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 6135 "array.c"
	MR_r4 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__random_permutation_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r2, Array);
{
#line 872 "array.m"

    Max = Array->size;
;}
#line 6149 "array.c"
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

MR_BEGIN_MODULE(array_module89)
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
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 6199 "array.c"
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
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 6246 "array.c"
	MR_r2 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) 0 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(fn__array__array_to_doc_1_0_i23);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0);
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
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0);
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


MR_BEGIN_MODULE(array_module90)
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


MR_BEGIN_MODULE(array_module91)
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
#line 872 "array.m"

    Max = Array->size;
;}
#line 6450 "array.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__array__array_equal_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r3, Array);
{
#line 872 "array.m"

    Max = Array->size;
;}
#line 6464 "array.c"
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


MR_BEGIN_MODULE(array_module92)
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
#line 872 "array.m"

    Max = Array->size;
;}
#line 6526 "array.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury____Unify___array__array_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_tempr2, Array);
{
#line 872 "array.m"

    Max = Array->size;
;}
#line 6540 "array.c"
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


MR_BEGIN_MODULE(array_module93)
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


MR_BEGIN_MODULE(array_module94)
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


MR_BEGIN_MODULE(array_module95)
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
#line 139 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 6679 "array.c"
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


MR_BEGIN_MODULE(array_module96)
	MR_init_entry1(fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0);
	MR_init_label5(fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0,3,5,6,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__array_to_doc_2__1909__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r3, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 6738 "array.c"
	MR_r2 = Max;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_sv(2) <= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_decr_sp_and_return(5);
MR_def_label(fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0,3)
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
		fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0_i5);
MR_def_label(fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0_i6);
MR_def_label(fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__pretty_printer__format_arg_1_0,
		fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0_i8);
MR_def_label(fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_sv(1), Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 6789 "array.c"
	MR_r2 = Max;
#undef	MR_PROC_LABEL
	}
	if ((MR_sv(2) != MR_r2)) {
		MR_GOTO_LAB(fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0_i10);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0);
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
MR_def_label(fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(fn__array__IntroducedFrom__func__array_to_doc_2__1909__1_3_0);
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

MR_BEGIN_MODULE(array_module97)
	MR_init_entry1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0);
	MR_init_label10(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0,55,2,4,6,7,8,9,12,14,18)
	MR_init_label2(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0,17,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__merge_subarrays__[T = string]_0_1'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 <= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0_i2);
	}
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 <= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0_i4);
	}
	MR_r5 = MR_r7;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0_i6);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0_i7);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0
	S1 = (MR_String) MR_sv(8);
	S2 = (MR_String) MR_r1;
{
#line 139 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 6928 "array.c"
	MR_r5 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r5,0)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0_i8);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0_i12);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0_i9);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0_i12);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = (MR_Integer) 2;
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0_i14);
	}
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(array__set_4_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0_i18);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0_i17);
	}
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(array__set_4_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0_i18);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = ((MR_Integer) MR_sv(7) + (MR_Integer) 1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0_i55);
	}
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0_i20);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r6 = MR_sv(6);
	MR_r7 = ((MR_Integer) MR_sv(7) + (MR_Integer) 1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0_i55);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

MR_BEGIN_MODULE(array_module98)
	MR_init_entry1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0);
	MR_init_label10(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0,54,2,4,6,7,8,9,11,13,17)
	MR_init_label2(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0,16,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__merge_subarrays__[T = int]_0_1'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 <= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0_i2);
	}
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 <= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0_i4);
	}
	MR_r5 = MR_r7;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0_i6);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0_i7);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(8) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0_i8);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0_i11);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(8) != MR_r1)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0_i9);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0_i11);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = (MR_Integer) 2;
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0_i13);
	}
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(array__set_4_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0_i17);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0_i16);
	}
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(array__set_4_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0_i17);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = ((MR_Integer) MR_sv(7) + (MR_Integer) 1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0_i54);
	}
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0_i19);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r6 = MR_sv(6);
	MR_r7 = ((MR_Integer) MR_sv(7) + (MR_Integer) 1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0_i54);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module99)
	MR_init_entry1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0);
	MR_init_label4(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0,12,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__copy_subarray_reverse__[T = string]_0_1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0_i3);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0_i4);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r4 = MR_sv(4);
	MR_r5 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0_i12);
	}
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module100)
	MR_init_entry1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0);
	MR_init_label4(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0,12,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__copy_subarray_reverse__[T = int]_0_1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0_i3);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0_i4);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r4 = MR_sv(4);
	MR_r5 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0_i12);
	}
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module101)
	MR_init_entry1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0);
	MR_init_label4(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0,12,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__copy_subarray__[T = string]_0_1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0_i3);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0_i4);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r4 = MR_sv(4);
	MR_r5 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0_i12);
	}
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module102)
	MR_init_entry1(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0);
	MR_init_label4(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0,12,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__copy_subarray__[T = int]_0_1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0_i3);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0_i4);
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r4 = MR_sv(4);
	MR_r5 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0_i12);
	}
MR_def_label(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module103)
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
#line 139 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 7487 "array.c"
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


MR_BEGIN_MODULE(array_module104)
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


MR_BEGIN_MODULE(array_module105)
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
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
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
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	}
	MR_np_localcall_lab(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i5);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_r4 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_r6 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r7 = MR_r3;
	}
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i20);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i8);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
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
	MR_r3 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
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
#line 139 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 7742 "array.c"
	MR_r5 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r5,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i11);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i15);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i12);
	}
	MR_r2 = MR_sv(1);
	MR_sv(2) = MR_r2;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i15);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(2) = MR_r2;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Integer) 2;
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 == (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i16);
	}
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i7);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i17);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_r5 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i20);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Integer) 2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i19);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r5 = MR_r3;
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i20);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module106)
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
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
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
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	}
	MR_np_localcall_lab(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i5);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_r4 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_r6 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r7 = MR_r3;
	}
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i19);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i8);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
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
	MR_r3 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i10);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(6) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i11);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i14);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(6) != MR_r1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i12);
	}
	MR_r2 = MR_sv(1);
	MR_sv(2) = MR_r2;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i14);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(2) = MR_r2;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Integer) 2;
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 == (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i15);
	}
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i7);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i16);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_r5 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i19);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Integer) 2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i18);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r5 = MR_r3;
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i19);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_100_111_119_110_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module107)
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
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_sv(2) = MR_tempr2;
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
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_r4 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_r6 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_r7 = MR_r3;
	}
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_7_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i5);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(2);
	}
	MR_np_localcall_lab(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i22);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i9);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
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
#line 139 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 8176 "array.c"
	MR_r5 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r5,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i11);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i15);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i12);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i15);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Integer) 2;
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 == (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i16);
	}
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i7);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i17);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_r5 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i20);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_tempr2;
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
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r5 = MR_r3;
	}
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_5_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0_i20);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_r6 = MR_sv(3);
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


MR_BEGIN_MODULE(array_module108)
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
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_sv(2) = MR_tempr2;
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
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_r4 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_r6 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_r7 = MR_r3;
	}
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_115_117_98_97_114_114_97_121_115_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_7_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i5);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(2);
	}
	MR_np_localcall_lab(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i21);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i9);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i10);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(6) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i11);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i14);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(6) != MR_r1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i12);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i14);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r1 = (MR_Integer) 2;
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 == (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i7);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_117_110_116_105_108_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_4_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i16);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_r5 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_114_101_118_101_114_115_101_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i19);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_tempr2;
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
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r5 = MR_r3;
	}
	MR_np_call_localret_ent(fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_112_121_95_115_117_98_97_114_114_97_121_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_5_0,
		f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0_i19);
MR_def_label(f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_97_109_115_111_114_116_95_117_112_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_r6 = MR_sv(3);
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


MR_BEGIN_MODULE(array_module109)
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
#line 1295 "array.m"

    ML_alloc_array(Array, Array0->size + 1, MR_PROC_LABEL);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 8560 "array.c"
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


MR_BEGIN_MODULE(array_module110)
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
#line 1295 "array.m"

    ML_alloc_array(Array, Array0->size + 1, MR_PROC_LABEL);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 8616 "array.c"
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


MR_BEGIN_MODULE(array_module111)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 8670 "array.c"
	MR_r4 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r1, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 8684 "array.c"
	MR_r5 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_115_116_114_105_110_103_93_95_48_95_49_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r1, Array0);
{
#line 1295 "array.m"

    ML_alloc_array(Array, Array0->size + 1, MR_PROC_LABEL);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 8699 "array.c"
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


MR_BEGIN_MODULE(array_module112)
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
#line 798 "array.m"

    /* Array not used */
    Min = 0;
;}
#line 8750 "array.c"
	MR_r4 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r1, Array);
{
#line 831 "array.m"

    Max = Array->size - 1;
;}
#line 8764 "array.c"
	MR_r5 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array0;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__fn__f_97_114_114_97_121_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_105_110_116_93_95_48_95_49_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r1, Array0);
{
#line 1295 "array.m"

    ML_alloc_array(Array, Array0->size + 1, MR_PROC_LABEL);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);
;}
#line 8779 "array.c"
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


MR_BEGIN_MODULE(array_module113)
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
	MR_ArrayPtr	Array0;
	MR_Integer	Size;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_104_114_105_110_107_95_50_95_95_91_49_93_95_48_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r1, Array0);
	Size = MR_r2;
{
#line 1213 "array.m"

    ML_alloc_array(Array, Size + 1, MR_PROC_LABEL);
    ML_shrink_array(Array, Array0, Size);
;}
#line 8829 "array.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module114)
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
	MR_ArrayPtr	Array0;
	MR_Integer	Index;
	MR_Word	Item;
	MR_ArrayPtr	Array;
#define	MR_PROC_LABEL	mercury__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_97_102_101_95_105_110_115_101_114_116_95_105_116_101_109_115_95_95_91_49_93_95_48_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r3, Array0);
	Index = MR_r2;
	Item = MR_tempr1;
{
#line 996 "array.m"

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;
;}
#line 8880 "array.c"
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


MR_BEGIN_MODULE(array_module115)
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


MR_BEGIN_MODULE(array_module116)
	MR_init_entry1(fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_48_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_48_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_5_0);
	MR_init_label3(fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_48_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_5_0,11,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__foldr_0__ho11__[1, 2, 4, 5]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_48_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_48_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_48_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_5_0_i2);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(6);
MR_def_label(fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_48_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_48_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_5_0_i3);
MR_def_label(fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_48_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = ((MR_Integer) MR_sv(4) - (MR_Integer) 1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(fn__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_48_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_5_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module117)
	MR_init_entry1(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0);
	MR_init_label10(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0,39,21,2,5,7,3,10,11,12,14)
	MR_init_label1(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__bsearch_2__ho12__[1, 8]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = ((MR_Integer) MR_r5 - (MR_Integer) MR_r4);
	if (MR_INT_GE(MR_r7,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0_i2);
	}
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0_i3);
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
		f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0_i5);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0_i7);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0_i21);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0,3)
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
		f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0_i10);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0_i11);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0_i12);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0_i14);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0_i39);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0_i16);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0_i39);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_115_101_97_114_99_104_95_50_95_95_104_111_49_50_95_95_91_49_44_32_56_93_95_48_6_0_i39);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module118)
	MR_init_entry1(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0);
	MR_init_label10(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0,46,2,3,11,12,10,7,5,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__approx_binary_search_2__ho13__[3]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 > (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0_i1);
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
		f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0_i2);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0_i3);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0_i5);
	}
	if (((MR_Integer) MR_sv(5) >= (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0_i10);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0_i11);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0_i12);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0_i10);
	}
	MR_r2 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) != MR_sv(4))) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0_i7);
	}
	MR_r2 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0_i46);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0_i17);
	}
	MR_r2 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0_i46);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_114_111_120_95_98_105_110_97_114_121_95_115_101_97_114_99_104_95_50_95_95_104_111_49_51_95_95_91_51_93_95_48_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(array_module119)
	MR_init_entry1(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_56_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_56_93_95_48_6_0);
	MR_init_label5(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_56_93_95_48_6_0,12,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__map_2__ho14__[1, 2, 8]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_56_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_56_93_95_48_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 < (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_56_93_95_48_6_0_i2);
	}
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(8);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_56_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_56_93_95_48_6_0_i3);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_56_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_56_93_95_48_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_56_93_95_48_6_0_i4);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_56_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__set_4_0,
		f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_56_93_95_48_6_0_i5);
MR_def_label(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_56_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_50_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_56_93_95_48_6_0_i12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 1263 "array.m"

/*
** The caller is responsible for allocating the storage for the new array.
** This routine does the job of copying the array elements.
*/
void
ML_copy_array(MR_ArrayPtr array, MR_ConstArrayPtr old_array)
{
    /*
    ** Any changes to this function will probably also require
    ** changes to deepcopy() in runtime/deep_copy.c.
    */

    MR_Integer i;
    MR_Integer array_size;

    array_size = old_array->size;
    array->size = array_size;
    for (i = 0; i < array_size; i++) {
        array->elements[i] = old_array->elements[i];
    }
}

#line 9358 "array.c"
#line 1165 "array.m"

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
    GC_FREE(old_array);
#endif
}

#line 9386 "array.c"
#line 1038 "array.m"

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
    GC_FREE(old_array);
#endif
}

#line 9424 "array.c"
#line 641 "array.m"

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

#line 9442 "array.c"

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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
