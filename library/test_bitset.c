/*
** Automatically generated from `test_bitset.m'
** by the Mercury compiler,
** version rotd-2012-06-11, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__test_bitset__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "io.int2"
#include "io.mh"

#line 28 "test_bitset.c"
#line 150 "io.int2"
#include "time.mh"

#line 32 "test_bitset.c"
#line 151 "io.int2"
#include "string.mh"

#line 36 "test_bitset.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 40 "test_bitset.c"
#line 21 "stm_builtin.int2"
#include "stm_builtin.mh"

#line 44 "test_bitset.c"
#line 35 "store.int2"
#include "store.mh"

#line 48 "test_bitset.c"
#line 33 "array.int2"
#include "array.mh"

#line 52 "test_bitset.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 56 "test_bitset.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 60 "test_bitset.c"
#line 39 "pretty_printer.opt"
#include "version_array.mh"

#line 64 "test_bitset.c"
#line 3 "float.opt"
#include "float.mh"

#line 68 "test_bitset.c"
#line 3 "math.opt"
#include "math.mh"

#line 72 "test_bitset.c"
#line 157 "io.opt"
#include "dir.mh"

#line 76 "test_bitset.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 80 "test_bitset.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 84 "test_bitset.c"
#line 4 "char.opt"
#include "char.mh"

#line 88 "test_bitset.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 92 "test_bitset.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 96 "test_bitset.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 100 "test_bitset.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 104 "test_bitset.c"
#line 4 "int.opt"
#include "int.mh"

#line 108 "test_bitset.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "test_bitset.c"
#line 113 "test_bitset.c"
#include "test_bitset.mh"

#line 116 "test_bitset.c"
#line 117 "test_bitset.c"
#ifndef TEST_BITSET_DECL_GUARD
#define TEST_BITSET_DECL_GUARD

#line 121 "test_bitset.c"
#line 122 "test_bitset.c"

#endif
#line 125 "test_bitset.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Word * f1[5];
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
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
	MR_Integer f6;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_7 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Integer f5;
	MR_Word * f6;
	MR_Word * f7;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_test_bitset__type_ctor_info_bitset_error_1,
	mercury_data_test_bitset__type_ctor_info_test_bitset_1;
MR_decl_label3(f_116_101_115_116_95_98_105_116_115_101_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0, 10,3,4)
MR_decl_label9(test_bitset__all_true_2_0, 6,5,8,4,11,2,15,18,1)
MR_decl_label3(test_bitset__check0_3_0, 2,4,3)
MR_decl_label5(test_bitset__check1_4_0, 2,3,5,7,4)
MR_decl_label7(test_bitset__check2_5_0, 2,3,4,6,8,10,5)
MR_decl_label8(test_bitset__contains_2_0, 4,2,6,8,7,10,18,11)
MR_decl_label2(test_bitset__delete_3_0, 2,4)
MR_decl_label7(test_bitset__delete_list_3_0, 2,3,4,5,6,7,8)
MR_decl_label10(test_bitset__divide_4_0, 2,3,4,5,6,7,8,10,12,14)
MR_decl_label1(test_bitset__divide_4_0, 9)
MR_decl_label10(test_bitset__divide_by_set_4_0, 2,3,4,5,6,7,9,11,13,15)
MR_decl_label1(test_bitset__divide_by_set_4_0, 8)
MR_decl_label8(test_bitset__equal_2_0, 4,2,6,8,7,10,18,11)
MR_decl_label10(test_bitset__filter_4_0, 2,4,6,7,8,9,10,11,12,14)
MR_decl_label3(test_bitset__filter_4_0, 16,18,13)
MR_decl_label7(test_bitset__foldl_4_0, 2,4,6,7,9,11,8)
MR_decl_label10(test_bitset__foldl_4_1, 2,5,4,7,3,9,12,14,11,17)
MR_decl_label1(test_bitset__foldl_4_1, 1)
MR_decl_label7(test_bitset__get_sets_4_0, 32,4,6,8,5,11,12)
MR_decl_label2(test_bitset__insert_3_0, 2,3)
MR_decl_label7(test_bitset__insert_list_3_0, 2,3,4,5,6,7,8)
MR_decl_label8(test_bitset__insert_new_3_0, 4,7,10,6,2,13,16,1)
MR_decl_label10(test_bitset__is_empty_1_0, 5,4,8,9,2,11,12,14,23,15)
MR_decl_label10(test_bitset__is_non_empty_1_0, 7,6,10,11,3,13,14,16,25,17)
MR_decl_label9(test_bitset__is_singleton_2_0, 4,2,7,8,12,14,13,18,1)
MR_decl_label8(test_bitset__member_2_0, 4,2,6,8,7,10,18,11)
MR_decl_label9(test_bitset__member_2_1, 5,6,7,10,11,12,14,13,18)
MR_decl_label9(test_bitset__remove_3_0, 3,5,7,10,6,2,13,16,1)
MR_decl_label8(test_bitset__remove_least_3_0, 4,9,12,8,6,3,19,1)
MR_decl_label10(test_bitset__remove_list_3_0, 3,4,5,6,7,9,11,13,15,17)
MR_decl_label7(test_bitset__remove_list_3_0, 10,2,20,22,24,26,1)
MR_decl_label7(test_bitset__subset_2_0, 3,4,7,2,11,14,1)
MR_decl_label7(test_bitset__superset_2_0, 3,4,7,2,11,14,1)
MR_decl_label4(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0, 20,3,5,7)
MR_decl_label4(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0, 20,3,5,7)
MR_decl_label4(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0, 18,3,4,6)
MR_decl_label7(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0, 29,2,6,4,10,9,12)
MR_decl_label7(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0, 28,2,6,4,9,8,11)
MR_decl_label7(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0, 29,2,6,4,10,9,12)
MR_decl_label3(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0, 10,3,4)
MR_decl_label3(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0, 10,3,4)
MR_decl_label2(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0, 13,4)
MR_decl_label2(fn__test_bitset__bitset_to_set_1_0, 2,4)
MR_decl_label4(fn__test_bitset__count_1_0, 3,5,6,7)
MR_decl_label2(fn__test_bitset__difference_2_0, 2,3)
MR_decl_label10(fn__test_bitset__filter_2_0, 2,4,6,7,8,9,10,12,14,11)
MR_decl_label7(fn__test_bitset__foldl_3_0, 2,4,6,7,9,11,8)
MR_decl_label2(fn__test_bitset__init_0_0, 4,3)
MR_decl_label2(fn__test_bitset__intersect_2_0, 2,3)
MR_decl_label3(fn__test_bitset__intersect_list_1_0, 2,3,4)
MR_decl_label5(fn__test_bitset__list_to_set_1_0, 2,3,4,5,6)
MR_decl_label4(fn__test_bitset__make_singleton_set_1_0, 4,3,7,8)
MR_decl_label4(fn__test_bitset__singleton_set_1_0, 4,3,7,8)
MR_decl_label3(fn__test_bitset__sorted_list_to_set_1_0, 2,4,6)
MR_decl_label4(fn__test_bitset__to_sorted_list_1_0, 3,5,7,6)
MR_decl_label2(fn__test_bitset__union_2_0, 2,3)
MR_decl_label3(fn__test_bitset__union_list_1_0, 2,3,4)
MR_decl_label7(__Unify___test_bitset__bitset_error_1_0, 9,5,17,19,40,13,1)
MR_decl_label10(__Compare___test_bitset__bitset_error_1_0, 3,2,10,11,14,20,7,5,107,31)
MR_decl_label10(__Compare___test_bitset__bitset_error_1_0, 35,36,39,45,51,29,61,62,65,66)
MR_decl_label2(__Compare___test_bitset__bitset_error_1_0, 69,189)
MR_def_extern_entry(fn__test_bitset__init_0_0)
MR_def_extern_entry(fn__test_bitset__singleton_set_1_0)
MR_def_extern_entry(fn__test_bitset__make_singleton_set_1_0)
MR_def_extern_entry(test_bitset__init_1_0)
MR_def_extern_entry(test_bitset__singleton_set_2_0)
MR_def_extern_entry(test_bitset__make_singleton_set_2_0)
MR_def_extern_entry(fn__test_bitset__count_1_0)
MR_def_extern_entry(test_bitset__is_empty_1_0)
MR_def_extern_entry(test_bitset__is_non_empty_1_0)
MR_def_extern_entry(test_bitset__is_singleton_2_0)
MR_def_extern_entry(test_bitset__contains_2_0)
MR_def_extern_entry(test_bitset__member_2_0)
MR_def_extern_entry(test_bitset__member_2_1)
MR_def_extern_entry(test_bitset__equal_2_0)
MR_def_extern_entry(test_bitset__subset_2_0)
MR_def_extern_entry(test_bitset__superset_2_0)
MR_def_extern_entry(test_bitset__check0_3_0)
MR_def_extern_entry(fn__test_bitset__list_to_set_1_0)
MR_def_extern_entry(fn__test_bitset__sorted_list_to_set_1_0)
MR_def_extern_entry(fn__test_bitset__to_sorted_list_1_0)
MR_def_extern_entry(test_bitset__list_to_set_2_0)
MR_def_extern_entry(test_bitset__sorted_list_to_set_2_0)
MR_def_extern_entry(test_bitset__to_sorted_list_2_0)
MR_def_extern_entry(fn__test_bitset__set_to_bitset_1_0)
MR_def_extern_entry(fn__test_bitset__bitset_to_set_1_0)
MR_def_extern_entry(fn__test_bitset__from_set_1_0)
MR_def_extern_entry(fn__test_bitset__to_set_1_0)
MR_def_extern_entry(test_bitset__check1_4_0)
MR_def_extern_entry(test_bitset__insert_3_0)
MR_def_extern_entry(test_bitset__insert_new_3_0)
MR_def_extern_entry(test_bitset__insert_list_3_0)
MR_def_extern_entry(test_bitset__delete_3_0)
MR_def_extern_entry(test_bitset__delete_list_3_0)
MR_def_extern_entry(test_bitset__remove_3_0)
MR_def_extern_entry(test_bitset__remove_list_3_0)
MR_def_extern_entry(test_bitset__remove_least_3_0)
MR_decl_static(test_bitset__check2_5_0)
MR_def_extern_entry(fn__test_bitset__union_2_0)
MR_decl_static(test_bitset__get_sets_4_0)
MR_def_extern_entry(fn__test_bitset__union_list_1_0)
MR_def_extern_entry(fn__test_bitset__intersect_2_0)
MR_def_extern_entry(fn__test_bitset__intersect_list_1_0)
MR_def_extern_entry(fn__test_bitset__difference_2_0)
MR_def_extern_entry(test_bitset__union_3_0)
MR_def_extern_entry(test_bitset__union_list_2_0)
MR_def_extern_entry(test_bitset__intersect_3_0)
MR_def_extern_entry(test_bitset__intersect_list_2_0)
MR_def_extern_entry(test_bitset__difference_3_0)
MR_def_extern_entry(test_bitset__divide_4_0)
MR_def_extern_entry(test_bitset__divide_by_set_4_0)
MR_def_extern_entry(test_bitset__foldl_4_0)
MR_def_extern_entry(test_bitset__foldl_4_1)
MR_def_extern_entry(fn__test_bitset__foldl_3_0)
MR_def_extern_entry(test_bitset__all_true_2_0)
MR_def_extern_entry(fn__test_bitset__filter_2_0)
MR_def_extern_entry(test_bitset__filter_4_0)
MR_def_extern_entry(__Unify___test_bitset__bitset_error_1_0)
MR_def_extern_entry(__Compare___test_bitset__bitset_error_1_0)
MR_def_extern_entry(__Unify___test_bitset__test_bitset_1_0)
MR_def_extern_entry(__Compare___test_bitset__test_bitset_1_0)
MR_decl_static(test_bitset__IntroducedFrom__pred__member__234__1_3_0)
MR_decl_static(test_bitset__IntroducedFrom__pred__member__235__1_3_0)
MR_decl_static(fn__f_116_101_115_116_95_98_105_116_115_101_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(f_116_101_115_116_95_98_105_116_115_101_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
MR_decl_static(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0)
MR_decl_static(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0)
MR_decl_static(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0)
MR_decl_static(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0)
MR_decl_static(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0)
MR_decl_static(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0)
MR_decl_static(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0)
MR_decl_static(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0)
MR_decl_static(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0)

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__,
MR_CTOR0_ADDR(io, output_stream),
MR_IO_CTOR_ADDR
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__[];
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__,
MR_TAG_COMMON(0,0,0),
MR_CTOR0_ADDR(io, output_stream),
MR_IO_CTOR_ADDR
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__,
MR_TAG_COMMON(0,1,0),
MR_CTOR0_ADDR(io, output_stream),
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__,
MR_TAG_COMMON(0,1,0),
MR_CTOR0_ADDR(io, output_stream),
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_tbmkword(0, 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree_bitset__type_ctor_info_tree_bitset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_4 mercury_common_4[3] =
{
{
MR_CTOR1_ADDR(tree_bitset, tree_bitset),
1
},
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
1
},
{
MR_LIST_CTOR_ADDR,
1
},
};

static const struct mercury_type_5 mercury_common_5[2] =
{
{
{
1,
67631
}
},
{
{
1,
33
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__test_bitset__member_2_1_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_typeclass_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__test_bitset__member_2_1_2;
static const struct mercury_type_6 mercury_common_6[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__test_bitset__member_2_1_1,
MR_COMMON(5,0),
3,
MR_CTOR0_ADDR(private_builtin, typeclass_info),
MR_COMMON(4,0),
1
},
{
(MR_Word *) &mercury_data__closure_layout__test_bitset__member_2_1_2,
MR_COMMON(5,0),
3,
MR_CTOR0_ADDR(private_builtin, typeclass_info),
MR_COMMON(4,1),
1
},
};

static const MR_UserClosureId
mercury_data__closure_layout__test_bitset__member_2_1_3;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__test_bitset__member_2_1_4;
static const struct mercury_type_7 mercury_common_7[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__test_bitset__member_2_1_3,
MR_COMMON(5,1),
4,
MR_CTOR0_ADDR(private_builtin, type_info),
1,
MR_COMMON(4,2),
MR_COMMON(4,2)
},
{
(MR_Word *) &mercury_data__closure_layout__test_bitset__member_2_1_4,
MR_COMMON(5,1),
4,
MR_CTOR0_ADDR(private_builtin, type_info),
1,
MR_COMMON(4,2),
MR_COMMON(4,2)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_tree_bitset__pti_tree_bitset_1__pseudo_1 = {
	&mercury_data_tree_bitset__type_ctor_info_tree_bitset_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_PseudoTypeInfo) &mercury_data_tree_bitset__pti_tree_bitset_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__pti_set_ordlist_1__pseudo_1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_test_bitset__field_types_bitset_error_1_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_test_bitset__du_functor_desc_bitset_error_1_0 = {
	"zero_argument",
	2,
	2,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_test_bitset__field_types_bitset_error_1_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_test_bitset__field_types_bitset_error_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_test_bitset__du_functor_desc_bitset_error_1_1 = {
	"one_argument",
	3,
	6,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_test_bitset__field_types_bitset_error_1_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_test_bitset__field_types_bitset_error_1_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_test_bitset__du_functor_desc_bitset_error_1_2 = {
	"two_arguments",
	4,
	14,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_test_bitset__field_types_bitset_error_1_2,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_test_bitset__du_stag_ordered_bitset_error_1_0[] = {
	&mercury_data_test_bitset__du_functor_desc_bitset_error_1_0

};

const MR_DuFunctorDescPtr mercury_data_test_bitset__du_stag_ordered_bitset_error_1_1[] = {
	&mercury_data_test_bitset__du_functor_desc_bitset_error_1_1

};

const MR_DuFunctorDescPtr mercury_data_test_bitset__du_stag_ordered_bitset_error_1_2[] = {
	&mercury_data_test_bitset__du_functor_desc_bitset_error_1_2

};

const MR_DuPtagLayout mercury_data_test_bitset__du_ptag_ordered_bitset_error_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_test_bitset__du_stag_ordered_bitset_error_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_test_bitset__du_stag_ordered_bitset_error_1_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_test_bitset__du_stag_ordered_bitset_error_1_2 }

};

const MR_DuFunctorDescPtr mercury_data_test_bitset__du_name_ordered_bitset_error_1[] = {
	&mercury_data_test_bitset__du_functor_desc_bitset_error_1_1,
	&mercury_data_test_bitset__du_functor_desc_bitset_error_1_2,
	&mercury_data_test_bitset__du_functor_desc_bitset_error_1_0
};

const MR_Integer mercury_data_test_bitset__functor_number_map_bitset_error_1[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_test_bitset__type_ctor_info_bitset_error_1 = {
	1,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___test_bitset__bitset_error_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___test_bitset__bitset_error_1_0)),
	"test_bitset",
	"bitset_error",
	{ (void *)mercury_data_test_bitset__du_name_ordered_bitset_error_1 },
	{ (void *)mercury_data_test_bitset__du_ptag_ordered_bitset_error_1 },
	3,
	4,
	mercury_data_test_bitset__functor_number_map_bitset_error_1
};

const MR_TypeCtorInfo_Struct mercury_data_test_bitset__type_ctor_info_test_bitset_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___test_bitset__test_bitset_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___test_bitset__test_bitset_1_0)),
	"test_bitset",
	"test_bitset",
	{ 0 },
	{ (void *)&mercury_data_pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__test_bitset__member_2_1_4 = {
{
MR_PREDICATE,
"list",
"list",
"cons",
3,
0
},
"test_bitset",
"solutions.opt",
69,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__test_bitset__member_2_1_3 = {
{
MR_PREDICATE,
"list",
"list",
"cons",
3,
0
},
"test_bitset",
"solutions.opt",
69,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__test_bitset__member_2_1_2 = {
{
MR_PREDICATE,
"test_bitset",
"test_bitset",
"lambda_test_bitset_m_235",
3,
0
},
"test_bitset",
"test_bitset.m",
235,
"28"
};

static const MR_UserClosureId
mercury_data__closure_layout__test_bitset__member_2_1_1 = {
{
MR_PREDICATE,
"test_bitset",
"test_bitset",
"lambda_test_bitset_m_234",
3,
0
},
"test_bitset",
"test_bitset.m",
234,
"23"
};


MR_decl_entry(fn__tree_bitset__integrity_2_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(test_bitset_module0)
	MR_init_entry1(fn__test_bitset__init_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__test_bitset__init_0_0);
	MR_init_label2(fn__test_bitset__init_0_0,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__test_bitset__init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__tree_bitset__integrity_2_0,
		fn__test_bitset__init_0_0_i4);
MR_def_label(fn__test_bitset__init_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__test_bitset__init_0_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("tree_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("function \140tree_bitset.wrap_tree_bitset\'/1", 41);
	MR_r3 = (MR_Word) MR_string_const("integrity failed", 16);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__test_bitset__init_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__tree_bitset__insert_2_0);

MR_BEGIN_MODULE(test_bitset_module1)
	MR_init_entry1(fn__test_bitset__singleton_set_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__test_bitset__singleton_set_1_0);
	MR_init_label4(fn__test_bitset__singleton_set_1_0,4,3,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'singleton_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__test_bitset__singleton_set_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__tree_bitset__integrity_2_0,
		fn__test_bitset__singleton_set_1_0_i4);
MR_def_label(fn__test_bitset__singleton_set_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__test_bitset__singleton_set_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("tree_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("function \140tree_bitset.wrap_tree_bitset\'/1", 41);
	MR_r3 = (MR_Word) MR_string_const("integrity failed", 16);
	MR_np_call_localret_ent(require__unexpected_3_0,
		fn__test_bitset__singleton_set_1_0_i7);
MR_def_label(fn__test_bitset__singleton_set_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
MR_def_label(fn__test_bitset__singleton_set_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(fn__tree_bitset__insert_2_0,
		fn__test_bitset__singleton_set_1_0_i8);
MR_def_label(fn__test_bitset__singleton_set_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module2)
	MR_init_entry1(fn__test_bitset__make_singleton_set_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__test_bitset__make_singleton_set_1_0);
	MR_init_label4(fn__test_bitset__make_singleton_set_1_0,4,3,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_singleton_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__test_bitset__make_singleton_set_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__tree_bitset__integrity_2_0,
		fn__test_bitset__make_singleton_set_1_0_i4);
MR_def_label(fn__test_bitset__make_singleton_set_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__test_bitset__make_singleton_set_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("tree_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("function \140tree_bitset.wrap_tree_bitset\'/1", 41);
	MR_r3 = (MR_Word) MR_string_const("integrity failed", 16);
	MR_np_call_localret_ent(require__unexpected_3_0,
		fn__test_bitset__make_singleton_set_1_0_i7);
MR_def_label(fn__test_bitset__make_singleton_set_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
MR_def_label(fn__test_bitset__make_singleton_set_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(fn__tree_bitset__insert_2_0,
		fn__test_bitset__make_singleton_set_1_0_i8);
MR_def_label(fn__test_bitset__make_singleton_set_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module3)
	MR_init_entry1(test_bitset__init_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__init_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__test_bitset__init_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module4)
	MR_init_entry1(test_bitset__singleton_set_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__singleton_set_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'singleton_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__singleton_set_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__test_bitset__singleton_set_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module5)
	MR_init_entry1(test_bitset__make_singleton_set_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__make_singleton_set_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_singleton_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__make_singleton_set_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__test_bitset__make_singleton_set_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_3_0);

MR_BEGIN_MODULE(test_bitset_module6)
	MR_init_entry1(fn__test_bitset__count_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__test_bitset__count_1_0);
	MR_init_label4(fn__test_bitset__count_1_0,3,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__test_bitset__count_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__test_bitset__count_1_0_i3);
	}
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0,
		fn__test_bitset__count_1_0_i5);
MR_def_label(fn__test_bitset__count_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0,
		fn__test_bitset__count_1_0_i5);
MR_def_label(fn__test_bitset__count_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__test_bitset__count_1_0
	TypeClassInfo = MR_sv(2);
	Index = MR_r2;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1041 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__test_bitset__count_1_0_i6);
MR_def_label(fn__test_bitset__count_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_r1)) {
		MR_GOTO_LAB(fn__test_bitset__count_1_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(fn__test_bitset__count_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("function \140test_bitset.count\'/1", 30);
	MR_r3 = (MR_Word) MR_string_const("failed", 6);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree_bitset__tree_bitset_1_0);

MR_BEGIN_MODULE(test_bitset_module7)
	MR_init_entry1(test_bitset__is_empty_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__is_empty_1_0);
	MR_init_label10(test_bitset__is_empty_1_0,5,4,8,9,2,11,12,14,23,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__is_empty_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__tree_bitset__integrity_2_0,
		test_bitset__is_empty_1_0_i5);
MR_def_label(test_bitset__is_empty_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(test_bitset__is_empty_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("tree_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("function \140tree_bitset.wrap_tree_bitset\'/1", 41);
	MR_r3 = (MR_Word) MR_string_const("integrity failed", 16);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__is_empty_1_0_i8);
MR_def_label(test_bitset__is_empty_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(4);
MR_def_label(test_bitset__is_empty_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(__Unify___tree_bitset__tree_bitset_1_0,
		test_bitset__is_empty_1_0_i9);
MR_def_label(test_bitset__is_empty_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__is_empty_1_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(test_bitset__is_empty_1_0_i11);
MR_def_label(test_bitset__is_empty_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
MR_def_label(test_bitset__is_empty_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(test_bitset__is_empty_1_0_i12);
	}
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(test_bitset__is_empty_1_0_i14);
MR_def_label(test_bitset__is_empty_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
MR_def_label(test_bitset__is_empty_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(test_bitset__is_empty_1_0_i15);
	}
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(5);
MR_def_label(test_bitset__is_empty_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(test_bitset__is_empty_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.is_empty\'/1", 34);
	MR_r3 = (MR_Word) MR_string_const("failed", 6);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__is_empty_1_0_i23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module8)
	MR_init_entry1(test_bitset__is_non_empty_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__is_non_empty_1_0);
	MR_init_label10(test_bitset__is_non_empty_1_0,7,6,10,11,3,13,14,16,25,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_non_empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__is_non_empty_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__tree_bitset__integrity_2_0,
		test_bitset__is_non_empty_1_0_i7);
MR_def_label(test_bitset__is_non_empty_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(test_bitset__is_non_empty_1_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("tree_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("function \140tree_bitset.wrap_tree_bitset\'/1", 41);
	MR_r3 = (MR_Word) MR_string_const("integrity failed", 16);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__is_non_empty_1_0_i10);
MR_def_label(test_bitset__is_non_empty_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(4);
MR_def_label(test_bitset__is_non_empty_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(__Unify___tree_bitset__tree_bitset_1_0,
		test_bitset__is_non_empty_1_0_i11);
MR_def_label(test_bitset__is_non_empty_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(test_bitset__is_non_empty_1_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(test_bitset__is_non_empty_1_0_i13);
MR_def_label(test_bitset__is_non_empty_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
MR_def_label(test_bitset__is_non_empty_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(test_bitset__is_non_empty_1_0_i14);
	}
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(test_bitset__is_non_empty_1_0_i16);
MR_def_label(test_bitset__is_non_empty_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
MR_def_label(test_bitset__is_non_empty_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(test_bitset__is_non_empty_1_0_i17);
	}
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(5);
MR_def_label(test_bitset__is_non_empty_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(test_bitset__is_non_empty_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.is_non_empty\'/1", 38);
	MR_r3 = (MR_Word) MR_string_const("failed", 6);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__is_non_empty_1_0_i25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree_bitset__is_singleton_2_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(test_bitset_module9)
	MR_init_entry1(test_bitset__is_singleton_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__is_singleton_2_0);
	MR_init_label9(test_bitset__is_singleton_2_0,4,2,7,8,12,14,13,18,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_singleton'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__is_singleton_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(tree_bitset__is_singleton_2_0,
		test_bitset__is_singleton_2_0_i4);
MR_def_label(test_bitset__is_singleton_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__is_singleton_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(test_bitset__is_singleton_2_0_i7);
	}
MR_def_label(test_bitset__is_singleton_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(test_bitset__is_singleton_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(test_bitset__is_singleton_2_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r4 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(test_bitset__is_singleton_2_0_i8);
	}
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_GOTO_LAB(test_bitset__is_singleton_2_0_i12);
	}
MR_def_label(test_bitset__is_singleton_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(test_bitset__is_singleton_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__is_singleton_2_0
	TypeClassInfo = MR_sv(2);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1337 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		test_bitset__is_singleton_2_0_i14);
MR_def_label(test_bitset__is_singleton_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__is_singleton_2_0_i13);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(test_bitset__is_singleton_2_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(test_bitset__is_singleton_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.is_singleton\'/2", 38);
	MR_r3 = (MR_Word) MR_string_const("failed", 6);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__is_singleton_2_0_i18);
MR_def_label(test_bitset__is_singleton_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(test_bitset__is_singleton_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree_bitset__contains_2_0);
MR_decl_entry(set_ordlist__member_2_0);

MR_BEGIN_MODULE(test_bitset_module10)
	MR_init_entry1(test_bitset__contains_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__contains_2_0);
	MR_init_label8(test_bitset__contains_2_0,4,2,6,8,7,10,18,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'contains'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__contains_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(tree_bitset__contains_2_0,
		test_bitset__contains_2_0_i4);
MR_def_label(test_bitset__contains_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__contains_2_0_i2);
	}
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_sv(2) = (MR_Integer) 1;
	MR_GOTO_LAB(test_bitset__contains_2_0_i6);
MR_def_label(test_bitset__contains_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_sv(2) = (MR_Integer) 0;
	}
MR_def_label(test_bitset__contains_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__contains_2_0
	TypeClassInfo = MR_sv(3);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1441 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(set_ordlist__member_2_0,
		test_bitset__contains_2_0_i8);
MR_def_label(test_bitset__contains_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__contains_2_0_i7);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(test_bitset__contains_2_0_i10);
MR_def_label(test_bitset__contains_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
MR_def_label(test_bitset__contains_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_r1)) {
		MR_GOTO_LAB(test_bitset__contains_2_0_i11);
	}
	MR_r1 = ((MR_Integer) MR_sv(2) == (MR_Integer) 1);
	MR_decr_sp_and_return(4);
MR_def_label(test_bitset__contains_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(test_bitset__contains_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.contains\'/2", 34);
	MR_r3 = (MR_Word) MR_string_const("failed", 6);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__contains_2_0_i18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree_bitset__member_2_0);

MR_BEGIN_MODULE(test_bitset_module11)
	MR_init_entry1(test_bitset__member_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__member_2_0);
	MR_init_label8(test_bitset__member_2_0,4,2,6,8,7,10,18,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'member'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__member_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r3, 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tfield(0, MR_r3, 0);
	MR_np_call_localret_ent(tree_bitset__member_2_0,
		test_bitset__member_2_0_i4);
MR_def_label(test_bitset__member_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__member_2_0_i2);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_sv(2) = (MR_Integer) 1;
	MR_GOTO_LAB(test_bitset__member_2_0_i6);
MR_def_label(test_bitset__member_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_sv(2) = (MR_Integer) 0;
MR_def_label(test_bitset__member_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__member_2_0
	TypeClassInfo = MR_sv(3);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1536 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(set_ordlist__member_2_0,
		test_bitset__member_2_0_i8);
MR_def_label(test_bitset__member_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__member_2_0_i7);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(test_bitset__member_2_0_i10);
MR_def_label(test_bitset__member_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
MR_def_label(test_bitset__member_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_r1)) {
		MR_GOTO_LAB(test_bitset__member_2_0_i11);
	}
	MR_r1 = ((MR_Integer) MR_sv(2) == (MR_Integer) 1);
	MR_decr_sp_and_return(4);
MR_def_label(test_bitset__member_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(test_bitset__member_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.member\'/2", 32);
	MR_r3 = (MR_Word) MR_string_const("failed (in, in)", 15);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__member_2_0_i18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(list__cons_3_0);
MR_decl_entry(solutions__builtin_aggregate_4_7);
MR_decl_entry(list__merge_sort_and_remove_dups_2_3_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(tree_bitset__member_2_1);

MR_BEGIN_MODULE(test_bitset_module12)
	MR_init_entry1(test_bitset__member_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__member_2_1);
	MR_init_label9(test_bitset__member_2_1,5,6,7,10,11,12,14,13,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'member'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__member_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred test_bitset.member/2-1", 5,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(test_bitset__IntroducedFrom__pred__member__234__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_fv(2) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(test_bitset__IntroducedFrom__pred__member__235__1_3_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_r1;
	MR_tfield(0, MR_tempr2, 4) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__member_2_1
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1629 "test_bitset.c"
	MR_tempr3 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_ENTRY_AP(list__cons_3_0);
	MR_tfield(0, MR_tempr4, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr4, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r2, 1) = MR_tempr3;
	MR_fv(1) = MR_tfield(0, MR_tempr1, 4);
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_tempr3;
	MR_r1 = MR_tempr3;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_7,
		test_bitset__member_2_1_i5);
MR_def_label(test_bitset__member_2_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(5) = MR_r1;
	MR_r1 = MR_fv(4);
	MR_r2 = MR_fv(5);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		test_bitset__member_2_1_i6);
MR_def_label(test_bitset__member_2_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_fv(5);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		test_bitset__member_2_1_i7);
MR_def_label(test_bitset__member_2_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__member_2_1
	TypeClassInfo = MR_fv(3);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1685 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(list__cons_3_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tempr3 = MR_fv(2);
	MR_fv(2) = MR_r1;
	MR_fv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tempr3;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(solutions__builtin_aggregate_4_7,
		test_bitset__member_2_1_i10);
MR_def_label(test_bitset__member_2_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(5) = MR_r1;
	MR_r1 = MR_fv(4);
	MR_r2 = MR_fv(5);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		test_bitset__member_2_1_i11);
MR_def_label(test_bitset__member_2_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_fv(5);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		test_bitset__member_2_1_i12);
MR_def_label(test_bitset__member_2_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__member_2_1
	TypeClassInfo = MR_fv(3);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1742 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_fv(2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		test_bitset__member_2_1_i14);
MR_def_label(test_bitset__member_2_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__member_2_1_i13);
	}
	MR_r1 = MR_fv(3);
	MR_r2 = MR_fv(1);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_tailcall_ent(tree_bitset__member_2_1);
MR_def_label(test_bitset__member_2_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.member\'/2", 32);
	MR_r3 = (MR_Word) MR_string_const("failed (out, in)", 16);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__member_2_1_i18);
MR_def_label(test_bitset__member_2_1,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree_bitset__equal_2_0);
MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(test_bitset_module13)
	MR_init_entry1(test_bitset__equal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__equal_2_0);
	MR_init_label8(test_bitset__equal_2_0,4,2,6,8,7,10,18,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'equal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__equal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r3, 1);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tfield(0, MR_r3, 0);
	MR_np_call_localret_ent(tree_bitset__equal_2_0,
		test_bitset__equal_2_0_i4);
MR_def_label(test_bitset__equal_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__equal_2_0_i2);
	}
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_sv(2) = (MR_Integer) 1;
	MR_GOTO_LAB(test_bitset__equal_2_0_i6);
MR_def_label(test_bitset__equal_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_sv(2) = (MR_Integer) 0;
MR_def_label(test_bitset__equal_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__equal_2_0
	TypeClassInfo = MR_sv(3);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 1835 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		test_bitset__equal_2_0_i8);
MR_def_label(test_bitset__equal_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__equal_2_0_i7);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(test_bitset__equal_2_0_i10);
MR_def_label(test_bitset__equal_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
MR_def_label(test_bitset__equal_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_r1)) {
		MR_GOTO_LAB(test_bitset__equal_2_0_i11);
	}
	MR_r1 = ((MR_Integer) MR_sv(2) == (MR_Integer) 1);
	MR_decr_sp_and_return(4);
MR_def_label(test_bitset__equal_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(test_bitset__equal_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.equal\'/2", 31);
	MR_r3 = (MR_Word) MR_string_const("failed", 6);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__equal_2_0_i18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__tree_bitset__intersect_2_0);
MR_decl_entry(set_ordlist__intersect_2_3_1);

MR_BEGIN_MODULE(test_bitset_module14)
	MR_init_entry1(test_bitset__subset_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__subset_2_0);
	MR_init_label7(test_bitset__subset_2_0,3,4,7,2,11,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'subset'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__subset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__tree_bitset__intersect_2_0,
		test_bitset__subset_2_0_i3);
MR_def_label(test_bitset__subset_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___tree_bitset__tree_bitset_1_0,
		test_bitset__subset_2_0_i4);
MR_def_label(test_bitset__subset_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__subset_2_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r3;
	MR_np_call_localret_ent(set_ordlist__intersect_2_3_1,
		test_bitset__subset_2_0_i7);
MR_def_label(test_bitset__subset_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(test_bitset__subset_2_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.subset\'/2", 32);
	MR_r3 = (MR_Word) MR_string_const("unexpected success", 18);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__subset_2_0_i14);
MR_def_label(test_bitset__subset_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r3;
	MR_np_call_localret_ent(set_ordlist__intersect_2_3_1,
		test_bitset__subset_2_0_i11);
MR_def_label(test_bitset__subset_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__subset_2_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.subset\'/2", 32);
	MR_r3 = (MR_Word) MR_string_const("unexpected failure", 18);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__subset_2_0_i14);
MR_def_label(test_bitset__subset_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(test_bitset__subset_2_0,1)
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


MR_BEGIN_MODULE(test_bitset_module15)
	MR_init_entry1(test_bitset__superset_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__superset_2_0);
	MR_init_label7(test_bitset__superset_2_0,3,4,7,2,11,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'superset'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__superset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__tree_bitset__intersect_2_0,
		test_bitset__superset_2_0_i3);
MR_def_label(test_bitset__superset_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___tree_bitset__tree_bitset_1_0,
		test_bitset__superset_2_0_i4);
MR_def_label(test_bitset__superset_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__superset_2_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_r3;
	MR_np_call_localret_ent(set_ordlist__intersect_2_3_1,
		test_bitset__superset_2_0_i7);
MR_def_label(test_bitset__superset_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(test_bitset__superset_2_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.superset\'/2", 34);
	MR_r3 = (MR_Word) MR_string_const("unexpected success", 18);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__superset_2_0_i14);
MR_def_label(test_bitset__superset_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_r3;
	MR_np_call_localret_ent(set_ordlist__intersect_2_3_1,
		test_bitset__superset_2_0_i11);
MR_def_label(test_bitset__superset_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__superset_2_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.superset\'/2", 34);
	MR_r3 = (MR_Word) MR_string_const("unexpected failure", 18);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__superset_2_0_i14);
MR_def_label(test_bitset__superset_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(test_bitset__superset_2_0,1)
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

MR_decl_entry(tree_bitset__to_sorted_list_2_0);
MR_decl_entry(exception__throw_1_0);

MR_BEGIN_MODULE(test_bitset_module16)
	MR_init_entry1(test_bitset__check0_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__check0_3_0);
	MR_init_label3(test_bitset__check0_3_0,2,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__check0_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(tree_bitset__to_sorted_list_2_0,
		test_bitset__check0_3_0_i2);
MR_def_label(test_bitset__check0_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = (MR_Integer) 1;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__check0_3_0
	TypeClassInfo = MR_sv(3);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 2120 "test_bitset.c"
	MR_tempr2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_tempr4 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		test_bitset__check0_3_0_i4);
MR_def_label(test_bitset__check0_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__check0_3_0_i3);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(test_bitset__check0_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__check0_3_0
	TypeClassInfo = MR_sv(3);
	Index = MR_sv(4);
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 2159 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(test_bitset, bitset_error);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__merge_sort_2_3_0);
MR_decl_entry(fn__tree_bitset__sorted_list_to_set_1_0);

MR_BEGIN_MODULE(test_bitset_module17)
	MR_init_entry1(fn__test_bitset__list_to_set_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__test_bitset__list_to_set_1_0);
	MR_init_label5(fn__test_bitset__list_to_set_1_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_to_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__test_bitset__list_to_set_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__test_bitset__list_to_set_1_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 2209 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__test_bitset__list_to_set_1_0_i2);
MR_def_label(fn__test_bitset__list_to_set_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__merge_sort_2_3_0,
		fn__test_bitset__list_to_set_1_0_i3);
MR_def_label(fn__test_bitset__list_to_set_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__tree_bitset__sorted_list_to_set_1_0,
		fn__test_bitset__list_to_set_1_0_i4);
MR_def_label(fn__test_bitset__list_to_set_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__test_bitset__list_to_set_1_0
	TypeClassInfo = MR_sv(2);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 2258 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__test_bitset__list_to_set_1_0_i5);
MR_def_label(fn__test_bitset__list_to_set_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		fn__test_bitset__list_to_set_1_0_i6);
MR_def_label(fn__test_bitset__list_to_set_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("list_to_set", 11);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(test_bitset__check0_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__remove_adjacent_dups_2_3_0);

MR_BEGIN_MODULE(test_bitset_module18)
	MR_init_entry1(fn__test_bitset__sorted_list_to_set_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__test_bitset__sorted_list_to_set_1_0);
	MR_init_label3(fn__test_bitset__sorted_list_to_set_1_0,2,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sorted_list_to_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__test_bitset__sorted_list_to_set_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__tree_bitset__sorted_list_to_set_1_0,
		fn__test_bitset__sorted_list_to_set_1_0_i2);
MR_def_label(fn__test_bitset__sorted_list_to_set_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__test_bitset__sorted_list_to_set_1_0
	TypeClassInfo = MR_sv(2);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 2337 "test_bitset.c"
	MR_r4 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(fn__test_bitset__sorted_list_to_set_1_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("sorted_list_to_set", 18);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(test_bitset__check0_3_0);
	}
MR_def_label(fn__test_bitset__sorted_list_to_set_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r4;
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__remove_adjacent_dups_2_3_0,
		fn__test_bitset__sorted_list_to_set_1_0_i6);
MR_def_label(fn__test_bitset__sorted_list_to_set_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("sorted_list_to_set", 18);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(test_bitset__check0_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module19)
	MR_init_entry1(fn__test_bitset__to_sorted_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__test_bitset__to_sorted_list_1_0);
	MR_init_label4(fn__test_bitset__to_sorted_list_1_0,3,5,7,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_sorted_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__test_bitset__to_sorted_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__test_bitset__to_sorted_list_1_0_i3);
	}
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_r1;
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0,
		fn__test_bitset__to_sorted_list_1_0_i5);
MR_def_label(fn__test_bitset__to_sorted_list_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_r1;
	MR_r3 = MR_tfield(0, MR_r5, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0,
		fn__test_bitset__to_sorted_list_1_0_i5);
MR_def_label(fn__test_bitset__to_sorted_list_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__test_bitset__to_sorted_list_1_0
	TypeClassInfo = MR_sv(2);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 2444 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		fn__test_bitset__to_sorted_list_1_0_i7);
MR_def_label(fn__test_bitset__to_sorted_list_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__test_bitset__to_sorted_list_1_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(fn__test_bitset__to_sorted_list_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("function \140test_bitset.to_sorted_list\'/1", 39);
	MR_r3 = (MR_Word) MR_string_const("failed", 6);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module20)
	MR_init_entry1(test_bitset__list_to_set_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__list_to_set_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_to_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__list_to_set_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__test_bitset__list_to_set_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module21)
	MR_init_entry1(test_bitset__sorted_list_to_set_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__sorted_list_to_set_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sorted_list_to_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__sorted_list_to_set_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__test_bitset__sorted_list_to_set_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module22)
	MR_init_entry1(test_bitset__to_sorted_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__to_sorted_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_sorted_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__to_sorted_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__test_bitset__to_sorted_list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module23)
	MR_init_entry1(fn__test_bitset__set_to_bitset_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__test_bitset__set_to_bitset_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_to_bitset'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__test_bitset__set_to_bitset_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__test_bitset__sorted_list_to_set_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module24)
	MR_init_entry1(fn__test_bitset__bitset_to_set_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__test_bitset__bitset_to_set_1_0);
	MR_init_label2(fn__test_bitset__bitset_to_set_1_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bitset_to_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__test_bitset__bitset_to_set_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__test_bitset__to_sorted_list_1_0,
		fn__test_bitset__bitset_to_set_1_0_i2);
MR_def_label(fn__test_bitset__bitset_to_set_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__test_bitset__bitset_to_set_1_0
	TypeClassInfo = MR_sv(1);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 2590 "test_bitset.c"
	MR_r2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__test_bitset__bitset_to_set_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
MR_def_label(fn__test_bitset__bitset_to_set_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__remove_adjacent_dups_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module25)
	MR_init_entry1(fn__test_bitset__from_set_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__test_bitset__from_set_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__test_bitset__from_set_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__test_bitset__sorted_list_to_set_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module26)
	MR_init_entry1(fn__test_bitset__to_set_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__test_bitset__to_set_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__test_bitset__to_set_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__test_bitset__bitset_to_set_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module27)
	MR_init_entry1(test_bitset__check1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__check1_4_0);
	MR_init_label5(test_bitset__check1_4_0,2,3,5,7,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__check1_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(tree_bitset__to_sorted_list_2_0,
		test_bitset__check1_4_0_i2);
MR_def_label(test_bitset__check1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_sv(5);
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(8) = (MR_Integer) 1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(tree_bitset__to_sorted_list_2_0,
		test_bitset__check1_4_0_i3);
MR_def_label(test_bitset__check1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__check1_4_0
	TypeClassInfo = MR_sv(7);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 2718 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_tempr3 = MR_sv(6);
	MR_sv(6) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		test_bitset__check1_4_0_i5);
MR_def_label(test_bitset__check1_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__check1_4_0_i4);
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__check1_4_0
	TypeClassInfo = MR_sv(7);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 2749 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		test_bitset__check1_4_0_i7);
MR_def_label(test_bitset__check1_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__check1_4_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(9);
MR_def_label(test_bitset__check1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_tfield(1, MR_r2, 2) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__check1_4_0
	TypeClassInfo = MR_sv(7);
	Index = MR_sv(8);
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 2784 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(test_bitset, bitset_error);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set_ordlist__insert_2_3_0);

MR_BEGIN_MODULE(test_bitset_module28)
	MR_init_entry1(test_bitset__insert_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__insert_3_0);
	MR_init_label2(test_bitset__insert_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__insert_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__tree_bitset__insert_2_0,
		test_bitset__insert_3_0_i2);
MR_def_label(test_bitset__insert_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__insert_3_0
	TypeClassInfo = MR_sv(4);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 2847 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(set_ordlist__insert_2_3_0,
		test_bitset__insert_3_0_i3);
MR_def_label(test_bitset__insert_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("insert", 6);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(test_bitset__check1_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree_bitset__insert_new_3_0);
MR_decl_entry(set_ordlist__insert_new_2_3_0);

MR_BEGIN_MODULE(test_bitset_module29)
	MR_init_entry1(test_bitset__insert_new_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__insert_new_3_0);
	MR_init_label8(test_bitset__insert_new_3_0,4,7,10,6,2,13,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_new'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__insert_new_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(tree_bitset__insert_new_3_0,
		test_bitset__insert_new_3_0_i4);
MR_def_label(test_bitset__insert_new_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__insert_new_3_0_i2);
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__insert_new_3_0
	TypeClassInfo = MR_sv(4);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 2927 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_ordlist__insert_new_2_3_0,
		test_bitset__insert_new_3_0_i7);
MR_def_label(test_bitset__insert_new_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__insert_new_3_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("insert", 6);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(test_bitset__check1_4_0,
		test_bitset__insert_new_3_0_i10);
MR_def_label(test_bitset__insert_new_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(test_bitset__insert_new_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.insert_new\'/3", 36);
	MR_r3 = (MR_Word) MR_string_const("success/fail in tree_bitset/set_ordlist", 39);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__insert_new_3_0_i16);
MR_def_label(test_bitset__insert_new_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(4);
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__insert_new_3_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 2987 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_ordlist__insert_new_2_3_0,
		test_bitset__insert_new_3_0_i13);
MR_def_label(test_bitset__insert_new_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__insert_new_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.insert_new\'/3", 36);
	MR_r3 = (MR_Word) MR_string_const("fail/success in tree_bitset/set_ordlist", 39);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__insert_new_3_0_i16);
MR_def_label(test_bitset__insert_new_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(test_bitset__insert_new_3_0,1)
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

MR_decl_entry(fn__tree_bitset__union_2_0);
MR_decl_entry(list__merge_and_remove_dups_3_0);

MR_BEGIN_MODULE(test_bitset_module30)
	MR_init_entry1(test_bitset__insert_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__insert_list_3_0);
	MR_init_label7(test_bitset__insert_list_3_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__insert_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__insert_list_3_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 3060 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__insert_list_3_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 3076 "test_bitset.c"
	MR_tempr2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		test_bitset__insert_list_3_0_i2);
MR_def_label(test_bitset__insert_list_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__merge_sort_2_3_0,
		test_bitset__insert_list_3_0_i3);
MR_def_label(test_bitset__insert_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__tree_bitset__sorted_list_to_set_1_0,
		test_bitset__insert_list_3_0_i4);
MR_def_label(test_bitset__insert_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__tree_bitset__union_2_0,
		test_bitset__insert_list_3_0_i5);
MR_def_label(test_bitset__insert_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__insert_list_3_0
	TypeClassInfo = MR_sv(5);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 3141 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		test_bitset__insert_list_3_0_i6);
MR_def_label(test_bitset__insert_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		test_bitset__insert_list_3_0_i7);
MR_def_label(test_bitset__insert_list_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__merge_and_remove_dups_3_0,
		test_bitset__insert_list_3_0_i8);
MR_def_label(test_bitset__insert_list_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("insert_list", 11);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(test_bitset__check1_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__tree_bitset__delete_2_0);
MR_decl_entry(set_ordlist__difference_2_3_0);

MR_BEGIN_MODULE(test_bitset_module31)
	MR_init_entry1(test_bitset__delete_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__delete_3_0);
	MR_init_label2(test_bitset__delete_3_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__delete_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__tree_bitset__delete_2_0,
		test_bitset__delete_3_0_i2);
MR_def_label(test_bitset__delete_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__delete_3_0
	TypeClassInfo = MR_sv(4);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 3243 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(set_ordlist__difference_2_3_0,
		test_bitset__delete_3_0_i4);
MR_def_label(test_bitset__delete_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("delete", 6);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(test_bitset__check1_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__tree_bitset__difference_2_0);

MR_BEGIN_MODULE(test_bitset_module32)
	MR_init_entry1(test_bitset__delete_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__delete_list_3_0);
	MR_init_label7(test_bitset__delete_list_3_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__delete_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__delete_list_3_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 3310 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__delete_list_3_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 3326 "test_bitset.c"
	MR_tempr2 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		test_bitset__delete_list_3_0_i2);
MR_def_label(test_bitset__delete_list_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__merge_sort_2_3_0,
		test_bitset__delete_list_3_0_i3);
MR_def_label(test_bitset__delete_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__tree_bitset__sorted_list_to_set_1_0,
		test_bitset__delete_list_3_0_i4);
MR_def_label(test_bitset__delete_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__tree_bitset__difference_2_0,
		test_bitset__delete_list_3_0_i5);
MR_def_label(test_bitset__delete_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__delete_list_3_0
	TypeClassInfo = MR_sv(5);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 3391 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		test_bitset__delete_list_3_0_i6);
MR_def_label(test_bitset__delete_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__merge_sort_and_remove_dups_2_3_0,
		test_bitset__delete_list_3_0_i7);
MR_def_label(test_bitset__delete_list_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_ordlist__difference_2_3_0,
		test_bitset__delete_list_3_0_i8);
MR_def_label(test_bitset__delete_list_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("delete_list", 11);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(test_bitset__check1_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__delete_first_3_0);

MR_BEGIN_MODULE(test_bitset_module33)
	MR_init_entry1(test_bitset__remove_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__remove_3_0);
	MR_init_label9(test_bitset__remove_3_0,3,5,7,10,6,2,13,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__remove_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(1) = MR_tempr1;
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(tree_bitset__contains_2_0,
		test_bitset__remove_3_0_i3);
MR_def_label(test_bitset__remove_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__remove_3_0_i2);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__tree_bitset__delete_2_0,
		test_bitset__remove_3_0_i5);
MR_def_label(test_bitset__remove_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__remove_3_0
	TypeClassInfo = MR_sv(5);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 3503 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__delete_first_3_0,
		test_bitset__remove_3_0_i7);
MR_def_label(test_bitset__remove_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__remove_3_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("remove", 6);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(test_bitset__check1_4_0,
		test_bitset__remove_3_0_i10);
MR_def_label(test_bitset__remove_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(test_bitset__remove_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.remove\'/3", 32);
	MR_r3 = (MR_Word) MR_string_const("unexpected success", 18);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__remove_3_0_i16);
MR_def_label(test_bitset__remove_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__remove_3_0
	TypeClassInfo = MR_sv(5);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 3560 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__delete_first_3_0,
		test_bitset__remove_3_0_i13);
MR_def_label(test_bitset__remove_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__remove_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.remove\'/3", 32);
	MR_r3 = (MR_Word) MR_string_const("unexpected failure", 18);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__remove_3_0_i16);
MR_def_label(test_bitset__remove_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(test_bitset__remove_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set_ordlist__sort_no_dups_2_0);

MR_BEGIN_MODULE(test_bitset_module34)
	MR_init_entry1(test_bitset__remove_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__remove_list_3_0);
	MR_init_label10(test_bitset__remove_list_3_0,3,4,5,6,7,9,11,13,15,17)
	MR_init_label7(test_bitset__remove_list_3_0,10,2,20,22,24,26,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__remove_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__remove_list_3_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 3631 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_tempr2;
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		test_bitset__remove_list_3_0_i3);
MR_def_label(test_bitset__remove_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__merge_sort_2_3_0,
		test_bitset__remove_list_3_0_i4);
MR_def_label(test_bitset__remove_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__tree_bitset__sorted_list_to_set_1_0,
		test_bitset__remove_list_3_0_i5);
MR_def_label(test_bitset__remove_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__remove_list_3_0
	TypeClassInfo = MR_sv(4);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 3682 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(7) = (MR_Integer) 1;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__tree_bitset__intersect_2_0,
		test_bitset__remove_list_3_0_i6);
MR_def_label(test_bitset__remove_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___tree_bitset__tree_bitset_1_0,
		test_bitset__remove_list_3_0_i7);
MR_def_label(test_bitset__remove_list_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__remove_list_3_0_i2);
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__remove_list_3_0
	TypeClassInfo = MR_sv(4);
	Index = MR_sv(7);
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 3723 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__tree_bitset__difference_2_0,
		test_bitset__remove_list_3_0_i9);
MR_def_label(test_bitset__remove_list_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__remove_list_3_0
	TypeClassInfo = MR_sv(4);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 3747 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(set_ordlist__sort_no_dups_2_0,
		test_bitset__remove_list_3_0_i11);
MR_def_label(test_bitset__remove_list_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__remove_list_3_0_i10);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_r3;
	MR_np_call_localret_ent(set_ordlist__intersect_2_3_1,
		test_bitset__remove_list_3_0_i13);
MR_def_label(test_bitset__remove_list_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__remove_list_3_0_i10);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set_ordlist__difference_2_3_0,
		test_bitset__remove_list_3_0_i15);
MR_def_label(test_bitset__remove_list_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("remove_list", 11);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(test_bitset__check1_4_0,
		test_bitset__remove_list_3_0_i17);
MR_def_label(test_bitset__remove_list_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(test_bitset__remove_list_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.remove_list\'/3", 37);
	MR_r3 = (MR_Word) MR_string_const("unexpected success", 18);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__remove_list_3_0_i26);
MR_def_label(test_bitset__remove_list_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__remove_list_3_0
	TypeClassInfo = MR_sv(4);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 3823 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(set_ordlist__sort_no_dups_2_0,
		test_bitset__remove_list_3_0_i20);
MR_def_label(test_bitset__remove_list_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__remove_list_3_0_i1);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_r3;
	MR_np_call_localret_ent(set_ordlist__intersect_2_3_1,
		test_bitset__remove_list_3_0_i22);
MR_def_label(test_bitset__remove_list_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__remove_list_3_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set_ordlist__difference_2_3_0,
		test_bitset__remove_list_3_0_i24);
MR_def_label(test_bitset__remove_list_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.remove_list\'/3", 37);
	MR_r3 = (MR_Word) MR_string_const("unexpected failure", 18);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__remove_list_3_0_i26);
MR_def_label(test_bitset__remove_list_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(test_bitset__remove_list_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree_bitset__remove_least_3_0);
MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(test_bitset_module35)
	MR_init_entry1(test_bitset__remove_least_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__remove_least_3_0);
	MR_init_label8(test_bitset__remove_least_3_0,4,9,12,8,6,3,19,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_least'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__remove_least_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(tree_bitset__remove_least_3_0,
		test_bitset__remove_least_3_0_i4);
MR_def_label(test_bitset__remove_least_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__remove_least_3_0_i3);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(test_bitset__remove_least_3_0_i6);
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__remove_least_3_0
	TypeClassInfo = MR_sv(5);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 3923 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		test_bitset__remove_least_3_0_i9);
MR_def_label(test_bitset__remove_least_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__remove_least_3_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("remove_least", 12);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(test_bitset__check1_4_0,
		test_bitset__remove_least_3_0_i12);
MR_def_label(test_bitset__remove_least_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(test_bitset__remove_least_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.remove_least\'/3", 38);
	MR_r3 = (MR_Word) MR_string_const("wrong least element", 19);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__remove_least_3_0_i19);
MR_def_label(test_bitset__remove_least_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.remove_least\'/3", 38);
	MR_r3 = (MR_Word) MR_string_const("should be no least value", 24);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__remove_least_3_0_i19);
MR_def_label(test_bitset__remove_least_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(test_bitset__remove_least_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.remove_least\'/3", 38);
	MR_r3 = (MR_Word) MR_string_const("failed", 6);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__remove_least_3_0_i19);
MR_def_label(test_bitset__remove_least_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(test_bitset__remove_least_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module36)
	MR_init_entry1(test_bitset__check2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__check2_5_0);
	MR_init_label7(test_bitset__check2_5_0,2,3,4,6,8,10,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(test_bitset__check2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(8) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_r1;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(tree_bitset__to_sorted_list_2_0,
		test_bitset__check2_5_0_i2);
MR_def_label(test_bitset__check2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_sv(8);
	MR_sv(8) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(11) = (MR_Integer) 1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(tree_bitset__to_sorted_list_2_0,
		test_bitset__check2_5_0_i3);
MR_def_label(test_bitset__check2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_sv(5);
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(tree_bitset__to_sorted_list_2_0,
		test_bitset__check2_5_0_i4);
MR_def_label(test_bitset__check2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__check2_5_0
	TypeClassInfo = MR_sv(10);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 4079 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_tempr3 = MR_sv(9);
	MR_sv(9) = MR_sv(7);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		test_bitset__check2_5_0_i6);
MR_def_label(test_bitset__check2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__check2_5_0_i5);
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__check2_5_0
	TypeClassInfo = MR_sv(10);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 4110 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		test_bitset__check2_5_0_i8);
MR_def_label(test_bitset__check2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__check2_5_0_i5);
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__check2_5_0
	TypeClassInfo = MR_sv(10);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 4135 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		test_bitset__check2_5_0_i10);
MR_def_label(test_bitset__check2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__check2_5_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(12);
MR_def_label(test_bitset__check2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	MR_tfield(2, MR_r2, 1) = MR_sv(2);
	MR_tfield(2, MR_r2, 2) = MR_sv(3);
	MR_tfield(2, MR_r2, 3) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__check2_5_0
	TypeClassInfo = MR_sv(10);
	Index = MR_sv(11);
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 4171 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(test_bitset, bitset_error);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(exception__throw_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module37)
	MR_init_entry1(fn__test_bitset__union_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__test_bitset__union_2_0);
	MR_init_label2(fn__test_bitset__union_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'union'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__test_bitset__union_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__test_bitset__union_2_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 4219 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Integer) 1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__tree_bitset__union_2_0,
		fn__test_bitset__union_2_0_i2);
MR_def_label(fn__test_bitset__union_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__test_bitset__union_2_0
	TypeClassInfo = MR_sv(5);
	Index = MR_sv(6);
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 4252 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__merge_and_remove_dups_3_0,
		fn__test_bitset__union_2_0_i3);
MR_def_label(fn__test_bitset__union_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("union", 5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(test_bitset__check2_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(test_bitset_module38)
	MR_init_entry1(test_bitset__get_sets_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__get_sets_4_0);
	MR_init_label7(test_bitset__get_sets_4_0,32,4,6,8,5,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_sets'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(test_bitset__get_sets_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(test_bitset__get_sets_4_0_i32);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(test_bitset__get_sets_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(tree_bitset__to_sorted_list_2_0,
		test_bitset__get_sets_4_0_i4);
MR_def_label(test_bitset__get_sets_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__get_sets_4_0
	TypeClassInfo = MR_sv(5);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 4341 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		test_bitset__get_sets_4_0_i6);
MR_def_label(test_bitset__get_sets_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__get_sets_4_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(test_bitset__get_sets_4_0,
		test_bitset__get_sets_4_0_i8);
MR_def_label(test_bitset__get_sets_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(test_bitset__get_sets_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(" arg list", 9);
	MR_np_call_localret_ent(string__append_3_2,
		test_bitset__get_sets_4_0_i11);
MR_def_label(test_bitset__get_sets_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unequal sets in ", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		test_bitset__get_sets_4_0_i12);
MR_def_label(test_bitset__get_sets_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.get_sets\'/4", 34);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree_bitset__union_list_2_0);
MR_decl_entry(set_ordlist__power_union_2_3_0);

MR_BEGIN_MODULE(test_bitset_module39)
	MR_init_entry1(fn__test_bitset__union_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__test_bitset__union_list_1_0);
	MR_init_label3(fn__test_bitset__union_list_1_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'union_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__test_bitset__union_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("union_list", 10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(test_bitset__get_sets_4_0,
		fn__test_bitset__union_list_1_0_i2);
MR_def_label(fn__test_bitset__union_list_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__test_bitset__union_list_1_0
	TypeClassInfo = MR_sv(2);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 4454 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = (MR_Integer) 1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(tree_bitset__union_list_2_0,
		fn__test_bitset__union_list_1_0_i3);
MR_def_label(fn__test_bitset__union_list_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__test_bitset__union_list_1_0
	TypeClassInfo = MR_sv(2);
	Index = MR_sv(3);
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 4482 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(set_ordlist__power_union_2_3_0,
		fn__test_bitset__union_list_1_0_i4);
MR_def_label(fn__test_bitset__union_list_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("union_list", 10);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(test_bitset__check0_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set_ordlist__intersect_2_3_0);

MR_BEGIN_MODULE(test_bitset_module40)
	MR_init_entry1(fn__test_bitset__intersect_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__test_bitset__intersect_2_0);
	MR_init_label2(fn__test_bitset__intersect_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'intersect'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__test_bitset__intersect_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__test_bitset__intersect_2_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 4546 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Integer) 1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__tree_bitset__intersect_2_0,
		fn__test_bitset__intersect_2_0_i2);
MR_def_label(fn__test_bitset__intersect_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__test_bitset__intersect_2_0
	TypeClassInfo = MR_sv(5);
	Index = MR_sv(6);
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 4579 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(set_ordlist__intersect_2_3_0,
		fn__test_bitset__intersect_2_0_i3);
MR_def_label(fn__test_bitset__intersect_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("intersect", 9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(test_bitset__check2_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree_bitset__intersect_list_2_0);
MR_decl_entry(fn__set_ordlist__intersect_list_1_0);

MR_BEGIN_MODULE(test_bitset_module41)
	MR_init_entry1(fn__test_bitset__intersect_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__test_bitset__intersect_list_1_0);
	MR_init_label3(fn__test_bitset__intersect_list_1_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'intersect_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__test_bitset__intersect_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("intersect_list", 14);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(test_bitset__get_sets_4_0,
		fn__test_bitset__intersect_list_1_0_i2);
MR_def_label(fn__test_bitset__intersect_list_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__test_bitset__intersect_list_1_0
	TypeClassInfo = MR_sv(2);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 4657 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = (MR_Integer) 1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(tree_bitset__intersect_list_2_0,
		fn__test_bitset__intersect_list_1_0_i3);
MR_def_label(fn__test_bitset__intersect_list_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__test_bitset__intersect_list_1_0
	TypeClassInfo = MR_sv(2);
	Index = MR_sv(3);
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 4685 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__set_ordlist__intersect_list_1_0,
		fn__test_bitset__intersect_list_1_0_i4);
MR_def_label(fn__test_bitset__intersect_list_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("intersect_list", 14);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(test_bitset__check0_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module42)
	MR_init_entry1(fn__test_bitset__difference_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__test_bitset__difference_2_0);
	MR_init_label2(fn__test_bitset__difference_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'difference'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__test_bitset__difference_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__test_bitset__difference_2_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 4747 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Integer) 1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__tree_bitset__difference_2_0,
		fn__test_bitset__difference_2_0_i2);
MR_def_label(fn__test_bitset__difference_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__test_bitset__difference_2_0
	TypeClassInfo = MR_sv(5);
	Index = MR_sv(6);
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 4780 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(set_ordlist__difference_2_3_0,
		fn__test_bitset__difference_2_0_i3);
MR_def_label(fn__test_bitset__difference_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("difference", 10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(test_bitset__check2_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module43)
	MR_init_entry1(test_bitset__union_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__union_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'union'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__union_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__test_bitset__union_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module44)
	MR_init_entry1(test_bitset__union_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__union_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'union_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__union_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__test_bitset__union_list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module45)
	MR_init_entry1(test_bitset__intersect_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__intersect_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'intersect'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__intersect_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__test_bitset__intersect_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module46)
	MR_init_entry1(test_bitset__intersect_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__intersect_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'intersect_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__intersect_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__test_bitset__intersect_list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module47)
	MR_init_entry1(test_bitset__difference_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__difference_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'difference'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__difference_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__test_bitset__difference_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree_bitset__divide_4_0);
MR_decl_entry(set_ordlist__divide_2_6_0);
MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(test_bitset_module48)
	MR_init_entry1(test_bitset__divide_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__divide_4_0);
	MR_init_label10(test_bitset__divide_4_0,2,3,4,5,6,7,8,10,12,14)
	MR_init_label1(test_bitset__divide_4_0,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'divide'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__divide_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_r1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(tree_bitset__divide_4_0,
		test_bitset__divide_4_0_i2);
MR_def_label(test_bitset__divide_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__divide_4_0
	TypeClassInfo = MR_sv(7);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 4967 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(set_ordlist__divide_2_6_0,
		test_bitset__divide_4_0_i3);
MR_def_label(test_bitset__divide_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		test_bitset__divide_4_0_i4);
MR_def_label(test_bitset__divide_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		test_bitset__divide_4_0_i5);
MR_def_label(test_bitset__divide_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(tree_bitset__to_sorted_list_2_0,
		test_bitset__divide_4_0_i6);
MR_def_label(test_bitset__divide_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(tree_bitset__to_sorted_list_2_0,
		test_bitset__divide_4_0_i7);
MR_def_label(test_bitset__divide_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_sv(8);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(tree_bitset__to_sorted_list_2_0,
		test_bitset__divide_4_0_i8);
MR_def_label(test_bitset__divide_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__divide_4_0
	TypeClassInfo = MR_sv(7);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 5048 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_tempr3 = MR_sv(9);
	MR_sv(9) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		test_bitset__divide_4_0_i10);
MR_def_label(test_bitset__divide_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__divide_4_0_i9);
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__divide_4_0
	TypeClassInfo = MR_sv(7);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 5079 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		test_bitset__divide_4_0_i12);
MR_def_label(test_bitset__divide_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__divide_4_0_i9);
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__divide_4_0
	TypeClassInfo = MR_sv(7);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 5104 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		test_bitset__divide_4_0_i14);
MR_def_label(test_bitset__divide_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__divide_4_0_i9);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_decr_sp_and_return(10);
MR_def_label(test_bitset__divide_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.divide\'/4", 32);
	MR_r3 = (MR_Word) MR_string_const("failed", 6);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree_bitset__divide_by_set_4_0);
MR_decl_entry(set_ordlist__divide_by_set_4_0);

MR_BEGIN_MODULE(test_bitset_module49)
	MR_init_entry1(test_bitset__divide_by_set_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__divide_by_set_4_0);
	MR_init_label10(test_bitset__divide_by_set_4_0,2,3,4,5,6,7,9,11,13,15)
	MR_init_label1(test_bitset__divide_by_set_4_0,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'divide_by_set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__divide_by_set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_sv(9) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(10) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(11) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(tree_bitset__divide_by_set_4_0,
		test_bitset__divide_by_set_4_0_i2);
MR_def_label(test_bitset__divide_by_set_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__divide_by_set_4_0
	TypeClassInfo = MR_sv(11);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 5187 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(set_ordlist__divide_by_set_4_0,
		test_bitset__divide_by_set_4_0_i3);
MR_def_label(test_bitset__divide_by_set_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(tree_bitset__to_sorted_list_2_0,
		test_bitset__divide_by_set_4_0_i4);
MR_def_label(test_bitset__divide_by_set_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_tempr2 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(tree_bitset__to_sorted_list_2_0,
		test_bitset__divide_by_set_4_0_i5);
MR_def_label(test_bitset__divide_by_set_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(tree_bitset__to_sorted_list_2_0,
		test_bitset__divide_by_set_4_0_i6);
MR_def_label(test_bitset__divide_by_set_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_sv(3);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(tree_bitset__to_sorted_list_2_0,
		test_bitset__divide_by_set_4_0_i7);
MR_def_label(test_bitset__divide_by_set_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__divide_by_set_4_0
	TypeClassInfo = MR_sv(11);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 5256 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_tempr3 = MR_sv(10);
	MR_sv(10) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		test_bitset__divide_by_set_4_0_i9);
MR_def_label(test_bitset__divide_by_set_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__divide_by_set_4_0_i8);
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__divide_by_set_4_0
	TypeClassInfo = MR_sv(11);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 5287 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		test_bitset__divide_by_set_4_0_i11);
MR_def_label(test_bitset__divide_by_set_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__divide_by_set_4_0_i8);
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__divide_by_set_4_0
	TypeClassInfo = MR_sv(11);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 5312 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		test_bitset__divide_by_set_4_0_i13);
MR_def_label(test_bitset__divide_by_set_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__divide_by_set_4_0_i8);
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__divide_by_set_4_0
	TypeClassInfo = MR_sv(11);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 5337 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		test_bitset__divide_by_set_4_0_i15);
MR_def_label(test_bitset__divide_by_set_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__divide_by_set_4_0_i8);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_decr_sp_and_return(12);
MR_def_label(test_bitset__divide_by_set_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.divide_by_set\'/4", 39);
	MR_r3 = (MR_Word) MR_string_const("failed", 6);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree_bitset__do_foldl_pred_4_0);
MR_decl_entry(tree_bitset__leaf_foldl_pred_4_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(test_bitset_module50)
	MR_init_entry1(test_bitset__foldl_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__foldl_4_0);
	MR_init_label7(test_bitset__foldl_4_0,2,4,6,7,9,11,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__foldl_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_r5;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(tree_bitset__to_sorted_list_2_0,
		test_bitset__foldl_4_0_i2);
MR_def_label(test_bitset__foldl_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),1)) {
		MR_GOTO_LAB(test_bitset__foldl_4_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(3) = MR_sv(1);
	MR_sv(8) = (MR_Integer) 1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tfield(1, MR_tempr1, 1);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(tree_bitset__do_foldl_pred_4_0,
		test_bitset__foldl_4_0_i6);
MR_def_label(test_bitset__foldl_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(3) = MR_sv(1);
	MR_sv(8) = (MR_Integer) 1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(tree_bitset__leaf_foldl_pred_4_0,
		test_bitset__foldl_4_0_i6);
MR_def_label(test_bitset__foldl_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(7);
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__foldl_4_0
	TypeClassInfo = MR_sv(6);
	Index = MR_sv(8);
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 5458 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_r2;
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(list__foldl_4_0,
		test_bitset__foldl_4_0_i7);
MR_def_label(test_bitset__foldl_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__foldl_4_0
	TypeClassInfo = MR_sv(6);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 5482 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		test_bitset__foldl_4_0_i9);
MR_def_label(test_bitset__foldl_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__foldl_4_0_i8);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(builtin__unify_2_0,
		test_bitset__foldl_4_0_i11);
MR_def_label(test_bitset__foldl_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__foldl_4_0_i8);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(9);
MR_def_label(test_bitset__foldl_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.foldl\'/4", 31);
	MR_r3 = (MR_Word) MR_string_const("failed", 6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree_bitset__do_foldl_pred_4_3);
MR_decl_entry(tree_bitset__leaf_foldl_pred_4_3);
MR_decl_entry(list__foldl_4_3);

MR_BEGIN_MODULE(test_bitset_module51)
	MR_init_entry1(test_bitset__foldl_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__foldl_4_1);
	MR_init_label10(test_bitset__foldl_4_1,2,5,4,7,3,9,12,14,11,17)
	MR_init_label1(test_bitset__foldl_4_1,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__foldl_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_r5;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(tree_bitset__to_sorted_list_2_0,
		test_bitset__foldl_4_1_i2);
MR_def_label(test_bitset__foldl_4_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),1)) {
		MR_GOTO_LAB(test_bitset__foldl_4_1_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(3) = MR_sv(1);
	MR_sv(8) = (MR_Integer) 1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tfield(1, MR_tempr1, 1);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(tree_bitset__do_foldl_pred_4_3,
		test_bitset__foldl_4_1_i5);
MR_def_label(test_bitset__foldl_4_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__foldl_4_1_i1);
	}
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_sv(4) = MR_r2;
	MR_r2 = MR_sv(7);
	MR_GOTO_LAB(test_bitset__foldl_4_1_i3);
MR_def_label(test_bitset__foldl_4_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(3) = MR_sv(1);
	MR_sv(8) = (MR_Integer) 1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(tree_bitset__leaf_foldl_pred_4_3,
		test_bitset__foldl_4_1_i7);
MR_def_label(test_bitset__foldl_4_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__foldl_4_1_i1);
	}
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_sv(4) = MR_r2;
	MR_r2 = MR_sv(7);
MR_def_label(test_bitset__foldl_4_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__foldl_4_1
	TypeClassInfo = MR_sv(6);
	Index = MR_sv(8);
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 5628 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_r2;
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(list__foldl_4_3,
		test_bitset__foldl_4_1_i9);
MR_def_label(test_bitset__foldl_4_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__foldl_4_1_i1);
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__foldl_4_1
	TypeClassInfo = MR_sv(6);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 5653 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		test_bitset__foldl_4_1_i12);
MR_def_label(test_bitset__foldl_4_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__foldl_4_1_i11);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(builtin__unify_2_0,
		test_bitset__foldl_4_1_i14);
MR_def_label(test_bitset__foldl_4_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__foldl_4_1_i11);
	}
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(test_bitset__foldl_4_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.foldl\'/4", 31);
	MR_r3 = (MR_Word) MR_string_const("failed", 6);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__foldl_4_1_i17);
MR_def_label(test_bitset__foldl_4_1,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(test_bitset__foldl_4_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module52)
	MR_init_entry1(fn__test_bitset__foldl_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__test_bitset__foldl_3_0);
	MR_init_label7(fn__test_bitset__foldl_3_0,2,4,6,7,9,11,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__test_bitset__foldl_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(1) = MR_r5;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(tree_bitset__to_sorted_list_2_0,
		fn__test_bitset__foldl_3_0_i2);
MR_def_label(fn__test_bitset__foldl_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(fn__test_bitset__foldl_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0,
		fn__test_bitset__foldl_3_0_i6);
MR_def_label(fn__test_bitset__foldl_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0,
		fn__test_bitset__foldl_3_0_i6);
MR_def_label(fn__test_bitset__foldl_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_116_101_115_116_95_98_105_116_115_101_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,
		fn__test_bitset__foldl_3_0_i7);
MR_def_label(fn__test_bitset__foldl_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__test_bitset__foldl_3_0
	TypeClassInfo = MR_sv(4);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 5799 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		fn__test_bitset__foldl_3_0_i9);
MR_def_label(fn__test_bitset__foldl_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__test_bitset__foldl_3_0_i8);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__unify_2_0,
		fn__test_bitset__foldl_3_0_i11);
MR_def_label(fn__test_bitset__foldl_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__test_bitset__foldl_3_0_i8);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(7);
MR_def_label(fn__test_bitset__foldl_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("function \140test_bitset.foldl\'/3", 30);
	MR_r3 = (MR_Word) MR_string_const("failed", 6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree_bitset__interior_all_true_2_0);
MR_decl_entry(tree_bitset__leaf_all_true_2_0);
MR_decl_entry(list__all_true_2_0);

MR_BEGIN_MODULE(test_bitset_module53)
	MR_init_entry1(test_bitset__all_true_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__all_true_2_0);
	MR_init_label9(test_bitset__all_true_2_0,6,5,8,4,11,2,15,18,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'all_true'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__all_true_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(test_bitset__all_true_2_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(tree_bitset__interior_all_true_2_0,
		test_bitset__all_true_2_0_i6);
MR_def_label(test_bitset__all_true_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__all_true_2_0_i2);
	}
	MR_r2 = MR_sv(1);
	MR_GOTO_LAB(test_bitset__all_true_2_0_i4);
MR_def_label(test_bitset__all_true_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tfield(0, MR_r4, 0);
	MR_np_call_localret_ent(tree_bitset__leaf_all_true_2_0,
		test_bitset__all_true_2_0_i8);
MR_def_label(test_bitset__all_true_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__all_true_2_0_i2);
	}
	MR_r2 = MR_sv(1);
MR_def_label(test_bitset__all_true_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__all_true_2_0
	TypeClassInfo = MR_sv(3);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 5911 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__all_true_2_0,
		test_bitset__all_true_2_0_i11);
MR_def_label(test_bitset__all_true_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(test_bitset__all_true_2_0_i18);
	}
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.all_true\'/2", 34);
	MR_r3 = (MR_Word) MR_string_const("tree_bitset but not set_ordlist", 31);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__all_true_2_0_i18);
MR_def_label(test_bitset__all_true_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__all_true_2_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 5944 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__all_true_2_0,
		test_bitset__all_true_2_0_i15);
MR_def_label(test_bitset__all_true_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__all_true_2_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.all_true\'/2", 34);
	MR_r3 = (MR_Word) MR_string_const("set_ordlist but not tree_bitset", 31);
	MR_np_call_localret_ent(require__unexpected_3_0,
		test_bitset__all_true_2_0_i18);
MR_def_label(test_bitset__all_true_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(test_bitset__all_true_2_0,1)
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

MR_decl_entry(list__filter_3_0);
MR_decl_entry(fn__set_ordlist__filter_2_0);

MR_BEGIN_MODULE(test_bitset_module54)
	MR_init_entry1(fn__test_bitset__filter_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__test_bitset__filter_2_0);
	MR_init_label10(fn__test_bitset__filter_2_0,2,4,6,7,8,9,10,12,14,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__test_bitset__filter_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(tree_bitset__to_sorted_list_2_0,
		fn__test_bitset__filter_2_0_i2);
MR_def_label(fn__test_bitset__filter_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(fn__test_bitset__filter_2_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_sv(2);
	MR_sv(6) = (MR_Integer) 1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0,
		fn__test_bitset__filter_2_0_i6);
MR_def_label(fn__test_bitset__filter_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_sv(2);
	MR_sv(6) = (MR_Integer) 1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0,
		fn__test_bitset__filter_2_0_i6);
MR_def_label(fn__test_bitset__filter_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__test_bitset__filter_2_0
	TypeClassInfo = MR_sv(5);
	Index = MR_r1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 6059 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(list__filter_3_0,
		fn__test_bitset__filter_2_0_i7);
MR_def_label(fn__test_bitset__filter_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__tree_bitset__sorted_list_to_set_1_0,
		fn__test_bitset__filter_2_0_i8);
MR_def_label(fn__test_bitset__filter_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__test_bitset__filter_2_0
	TypeClassInfo = MR_sv(5);
	Index = MR_sv(6);
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 6092 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__set_ordlist__filter_2_0,
		fn__test_bitset__filter_2_0_i9);
MR_def_label(fn__test_bitset__filter_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(tree_bitset__to_sorted_list_2_0,
		fn__test_bitset__filter_2_0_i10);
MR_def_label(fn__test_bitset__filter_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__test_bitset__filter_2_0
	TypeClassInfo = MR_sv(5);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 6127 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_tempr3 = MR_sv(4);
	MR_sv(4) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		fn__test_bitset__filter_2_0_i12);
MR_def_label(fn__test_bitset__filter_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__test_bitset__filter_2_0_i11);
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__test_bitset__filter_2_0
	TypeClassInfo = MR_sv(5);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 6158 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		fn__test_bitset__filter_2_0_i14);
MR_def_label(fn__test_bitset__filter_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__test_bitset__filter_2_0_i11);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(7);
MR_def_label(fn__test_bitset__filter_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("function \140test_bitset.filter\'/2", 31);
	MR_r3 = (MR_Word) MR_string_const("failed", 6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_4_0);
MR_decl_entry(set_ordlist__filter_4_0);

MR_BEGIN_MODULE(test_bitset_module55)
	MR_init_entry1(test_bitset__filter_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__filter_4_0);
	MR_init_label10(test_bitset__filter_4_0,2,4,6,7,8,9,10,11,12,14)
	MR_init_label3(test_bitset__filter_4_0,16,18,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__test_bitset__filter_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(tree_bitset__to_sorted_list_2_0,
		test_bitset__filter_4_0_i2);
MR_def_label(test_bitset__filter_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),1)) {
		MR_GOTO_LAB(test_bitset__filter_4_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_sv(2);
	MR_sv(8) = (MR_Integer) 1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0,
		test_bitset__filter_4_0_i6);
MR_def_label(test_bitset__filter_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_sv(2);
	MR_sv(8) = (MR_Integer) 1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0,
		test_bitset__filter_4_0_i6);
MR_def_label(test_bitset__filter_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__filter_4_0
	TypeClassInfo = MR_sv(7);
	Index = MR_r1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 6270 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(list__filter_4_0,
		test_bitset__filter_4_0_i7);
MR_def_label(test_bitset__filter_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__tree_bitset__sorted_list_to_set_1_0,
		test_bitset__filter_4_0_i8);
MR_def_label(test_bitset__filter_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__tree_bitset__sorted_list_to_set_1_0,
		test_bitset__filter_4_0_i9);
MR_def_label(test_bitset__filter_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__filter_4_0
	TypeClassInfo = MR_sv(7);
	Index = MR_sv(8);
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 6315 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(set_ordlist__filter_4_0,
		test_bitset__filter_4_0_i10);
MR_def_label(test_bitset__filter_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(tree_bitset__to_sorted_list_2_0,
		test_bitset__filter_4_0_i11);
MR_def_label(test_bitset__filter_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_sv(2);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(tree_bitset__to_sorted_list_2_0,
		test_bitset__filter_4_0_i12);
MR_def_label(test_bitset__filter_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__filter_4_0
	TypeClassInfo = MR_sv(7);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 6359 "test_bitset.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_tempr3 = MR_sv(6);
	MR_sv(6) = MR_sv(8);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		test_bitset__filter_4_0_i14);
MR_def_label(test_bitset__filter_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__filter_4_0_i13);
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__filter_4_0
	TypeClassInfo = MR_sv(7);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 6390 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		test_bitset__filter_4_0_i16);
MR_def_label(test_bitset__filter_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__filter_4_0_i13);
	}
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__filter_4_0
	TypeClassInfo = MR_sv(7);
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 6415 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		test_bitset__filter_4_0_i18);
MR_def_label(test_bitset__filter_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(test_bitset__filter_4_0_i13);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(9);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(6);
	MR_decr_sp_and_return(10);
MR_def_label(test_bitset__filter_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("test_bitset", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140test_bitset.filter\'/4", 32);
	MR_r3 = (MR_Word) MR_string_const("failed", 6);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___pair__pair_2_0);

MR_BEGIN_MODULE(test_bitset_module56)
	MR_init_entry1(__Unify___test_bitset__bitset_error_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___test_bitset__bitset_error_1_0);
	MR_init_label7(__Unify___test_bitset__bitset_error_1_0,9,5,17,19,40,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___test_bitset__bitset_error_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___test_bitset__bitset_error_1_0_i40);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r1;
	MR_sv(3) = MR_tempr3;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___test_bitset__bitset_error_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___test_bitset__bitset_error_1_0_i1);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr5 = MR_tfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr4, (char *) (MR_Word *) MR_tempr5) != 0)) {
		MR_GOTO_LAB(__Unify___test_bitset__bitset_error_1_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(tree_bitset, tree_bitset);
	MR_tfield(0, MR_r1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_r2, 1) = MR_tempr3;
	MR_tempr4 = MR_tempr1;
	MR_sv(1) = MR_tfield(1, MR_tempr4, 2);
	MR_tempr5 = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r3 = MR_tfield(1, MR_tempr4, 1);
	MR_r4 = MR_tfield(1, MR_tempr5, 1);
	}
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___test_bitset__bitset_error_1_0_i9);
MR_def_label(__Unify___test_bitset__bitset_error_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___test_bitset__bitset_error_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___test_bitset__bitset_error_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___test_bitset__bitset_error_1_0_i13);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___test_bitset__bitset_error_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(2, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(2, MR_tempr4, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___test_bitset__bitset_error_1_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(tree_bitset, tree_bitset);
	MR_tempr5 = MR_sv(3);
	MR_tfield(0, MR_r1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_r2, 1) = MR_tempr5;
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(2, MR_tempr1, 2);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(2, MR_tempr2, 3);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r3 = MR_tfield(2, MR_tempr1, 1);
	MR_r4 = MR_tfield(2, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___test_bitset__bitset_error_1_0_i17);
MR_def_label(__Unify___test_bitset__bitset_error_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___test_bitset__bitset_error_1_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___test_bitset__bitset_error_1_0_i19);
MR_def_label(__Unify___test_bitset__bitset_error_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___test_bitset__bitset_error_1_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
MR_def_label(__Unify___test_bitset__bitset_error_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___test_bitset__bitset_error_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___test_bitset__bitset_error_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___test_bitset__bitset_error_1_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(tree_bitset, tree_bitset);
	MR_tempr5 = MR_sv(3);
	MR_tfield(0, MR_r1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_r2, 1) = MR_tempr5;
	MR_r3 = MR_tfield(0, MR_tempr3, 1);
	MR_r4 = MR_tfield(0, MR_tempr4, 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
	}
MR_def_label(__Unify___test_bitset__bitset_error_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___pair__pair_2_0);

MR_BEGIN_MODULE(test_bitset_module57)
	MR_init_entry1(__Compare___test_bitset__bitset_error_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___test_bitset__bitset_error_1_0);
	MR_init_label10(__Compare___test_bitset__bitset_error_1_0,3,2,10,11,14,20,7,5,107,31)
	MR_init_label10(__Compare___test_bitset__bitset_error_1_0,35,36,39,45,51,29,61,62,65,66)
	MR_init_label2(__Compare___test_bitset__bitset_error_1_0,69,189)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___test_bitset__bitset_error_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i3);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i2);
MR_def_label(__Compare___test_bitset__bitset_error_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___test_bitset__bitset_error_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr2, 2);
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_tfield(1, MR_tempr2, 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___test_bitset__bitset_error_1_0
	S1 = (MR_String) MR_r4;
	S2 = (MR_String) MR_r5;
{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 6680 "test_bitset.c"
	MR_r4 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i10);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i14);
	}
MR_def_label(__Compare___test_bitset__bitset_error_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i11);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i14);
MR_def_label(__Compare___test_bitset__bitset_error_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___test_bitset__bitset_error_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i189);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(tree_bitset, tree_bitset);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_r1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___test_bitset__bitset_error_1_0_i20);
MR_def_label(__Compare___test_bitset__bitset_error_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i189);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(tree_bitset, tree_bitset);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
	}
MR_def_label(__Compare___test_bitset__bitset_error_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i107);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(8);
MR_def_label(__Compare___test_bitset__bitset_error_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i29);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i31);
	}
MR_def_label(__Compare___test_bitset__bitset_error_1_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(8);
MR_def_label(__Compare___test_bitset__bitset_error_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i107);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(7) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 3);
	MR_tempr2 = MR_sv(2);
	MR_sv(3) = MR_tfield(2, MR_tempr2, 3);
	MR_r2 = MR_tfield(2, MR_tempr2, 2);
	MR_r3 = MR_tfield(2, MR_tempr2, 1);
	MR_r4 = MR_tfield(2, MR_tempr1, 0);
	MR_r5 = MR_tfield(2, MR_tempr2, 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___test_bitset__bitset_error_1_0
	S1 = (MR_String) MR_r4;
	S2 = (MR_String) MR_r5;
{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 6797 "test_bitset.c"
	MR_r4 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i35);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i39);
	}
MR_def_label(__Compare___test_bitset__bitset_error_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i36);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i39);
MR_def_label(__Compare___test_bitset__bitset_error_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___test_bitset__bitset_error_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i189);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(tree_bitset, tree_bitset);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_r1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___test_bitset__bitset_error_1_0_i45);
MR_def_label(__Compare___test_bitset__bitset_error_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i189);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(tree_bitset, tree_bitset);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___test_bitset__bitset_error_1_0_i51);
MR_def_label(__Compare___test_bitset__bitset_error_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i189);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(tree_bitset, tree_bitset);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
	}
MR_def_label(__Compare___test_bitset__bitset_error_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i61);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(8);
MR_def_label(__Compare___test_bitset__bitset_error_1_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i62);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(8);
MR_def_label(__Compare___test_bitset__bitset_error_1_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___test_bitset__bitset_error_1_0
	S1 = (MR_String) MR_r4;
	S2 = (MR_String) MR_r5;
{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 6921 "test_bitset.c"
	MR_r4 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i65);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i69);
	}
MR_def_label(__Compare___test_bitset__bitset_error_1_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i66);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i69);
MR_def_label(__Compare___test_bitset__bitset_error_1_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 2;
	MR_sv(2) = MR_r2;
MR_def_label(__Compare___test_bitset__bitset_error_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___test_bitset__bitset_error_1_0_i189);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR1_ADDR(tree_bitset, tree_bitset);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(4);
	MR_tfield(0, MR_r1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
	}
MR_def_label(__Compare___test_bitset__bitset_error_1_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module58)
	MR_init_entry1(__Unify___test_bitset__test_bitset_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___test_bitset__test_bitset_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___test_bitset__test_bitset_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(tree_bitset, tree_bitset);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module59)
	MR_init_entry1(__Compare___test_bitset__test_bitset_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___test_bitset__test_bitset_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___test_bitset__test_bitset_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(tree_bitset, tree_bitset);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module60)
	MR_init_entry1(test_bitset__IntroducedFrom__pred__member__234__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__IntroducedFrom__pred__member__234__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__member__234__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(test_bitset__IntroducedFrom__pred__member__234__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(tree_bitset__member_2_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set_ordlist__member_2_1);

MR_BEGIN_MODULE(test_bitset_module61)
	MR_init_entry1(test_bitset__IntroducedFrom__pred__member__235__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__test_bitset__IntroducedFrom__pred__member__235__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__member__235__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(test_bitset__IntroducedFrom__pred__member__235__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__test_bitset__IntroducedFrom__pred__member__235__1_3_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 1;
{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 7101 "test_bitset.c"
	MR_r1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(set_ordlist__member_2_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module62)
	MR_init_entry1(fn__f_116_101_115_116_95_98_105_116_115_101_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_116_101_115_116_95_98_105_116_115_101_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_116_101_115_116_95_98_105_116_115_101_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(test_bitset_module63)
	MR_init_entry1(f_116_101_115_116_95_98_105_116_115_101_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_115_116_95_98_105_116_115_101_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	MR_init_label3(f_116_101_115_116_95_98_105_116_115_101_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl__ho18__[1, 2, 4, 5, 6]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_115_116_95_98_105_116_115_101_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_116_101_115_116_95_98_105_116_115_101_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_116_101_115_116_95_98_105_116_115_101_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i4);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module64)
	MR_init_entry1(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0);
	MR_init_label3(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__leaf_foldl_pred__ho25__[1, 2, 4, 6]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0
{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 7218 "test_bitset.c"
	MR_r6 = Bits;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_tempr1 = MR_tempr4;
	MR_r3 = (MR_Integer) 0;
	MR_tempr2 = MR_r4;
	MR_tempr3 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr3, 0);
	MR_r5 = MR_tfield(0, MR_tempr3, 1);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0,
		f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0_i4);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module65)
	MR_init_entry1(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0);
	MR_init_label4(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0,20,3,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_foldl_pred__ho26__[1, 2, 4, 6]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_tempr2, 0), 2);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0_i5);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0,
		f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0_i7);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r3, 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tfield(1, MR_r5, 1);
	MR_np_localcall_lab(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0,
		f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0_i7);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_0_i20);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module66)
	MR_init_entry1(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0);
	MR_init_label2(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0,13,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__leaf_foldr_pred__ho30__[1, 2, 3, 4, 5, 7, 9]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0_i13);
	}
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r3, 0);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_np_localcall_lab(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0,
		f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0_i4);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0
{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 7359 "test_bitset.c"
	MR_r6 = Bits;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_tempr2 = MR_sv(1);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr2, 1);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module67)
	MR_init_entry1(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0);
	MR_init_label4(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0,18,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_foldr_pred__ho31__[1, 2, 3, 4, 5, 7, 9]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r3, 0);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_np_localcall_lab(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0,
		f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0_i4);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 2);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0_i6);
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0);
	}
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(1, MR_r5, 1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_0_i18);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__tree_bitset__index_to_enum_1_0);

MR_BEGIN_MODULE(test_bitset_module68)
	MR_init_entry1(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0);
	MR_init_label7(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0,29,2,6,4,10,9,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__fold_bits__ho33__[1, 2, 4, 7]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0_i2);
	}
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(7);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0_i4);
	}
	MR_sv(2) = MR_r7;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(fn__tree_bitset__index_to_enum_1_0,
		f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0_i6);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0));
	MR_np_tailcall_ent(do_call_closure_2);
	}
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0_i9);
	}
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r6 >> (MR_Integer) 1);
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = ~(((MR_Integer) -1 << (MR_Integer) MR_tempr1));
	MR_sv(4) = ((MR_Integer) MR_tempr2 & (MR_Integer) MR_r5);
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r4 = ((MR_Integer) MR_r4 + (MR_Integer) MR_tempr1);
	MR_r5 = ((MR_Integer) MR_tempr2 & ((MR_Integer) MR_r5 >> (MR_Integer) MR_tempr1));
	MR_r6 = MR_tempr1;
	}
	MR_np_localcall_lab(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0,
		f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0_i10);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0_i29);
	}
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r6 >> (MR_Integer) 1);
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = ~(((MR_Integer) -1 << (MR_Integer) MR_tempr1));
	MR_sv(4) = ((MR_Integer) MR_tempr2 & ((MR_Integer) MR_r5 >> (MR_Integer) MR_tempr1));
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r5 = ((MR_Integer) MR_tempr2 & (MR_Integer) MR_r5);
	MR_r6 = MR_tempr1;
	}
	MR_np_localcall_lab(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0,
		f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0_i12);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_r4 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_tempr2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_0_i29);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module69)
	MR_init_entry1(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0);
	MR_init_label3(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__leaf_foldl_pred__ho34__[1, 2, 3, 5]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0
{
#line 163 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 7609 "test_bitset.c"
	MR_r5 = Bits;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_tempr2 = MR_r3;
	MR_tempr3 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr3, 1);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0,
		f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0_i4);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module70)
	MR_init_entry1(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0);
	MR_init_label4(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0,20,3,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_foldl_pred__ho35__[1, 2, 3, 5]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 2);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0_i5);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0,
		f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0_i7);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r4, 1);
	MR_np_localcall_lab(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0,
		f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0_i7);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_0_i20);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module71)
	MR_init_entry1(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0);
	MR_init_label7(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0,28,2,6,4,9,8,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__fold_bits__ho37__[1, 2, 3, 6]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0_i2);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(6);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0_i4);
	}
	MR_sv(2) = MR_r6;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__tree_bitset__index_to_enum_1_0,
		f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0_i6);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_decr_sp_and_return(6);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0_i8);
	}
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r5 >> (MR_Integer) 1);
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = ~(((MR_Integer) -1 << (MR_Integer) MR_tempr1));
	MR_sv(4) = ((MR_Integer) MR_tempr2 & (MR_Integer) MR_r4);
	MR_sv(5) = MR_r1;
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) MR_tempr1);
	MR_r4 = ((MR_Integer) MR_tempr2 & ((MR_Integer) MR_r4 >> (MR_Integer) MR_tempr1));
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0,
		f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0_i9);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0_i28);
	}
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r5 >> (MR_Integer) 1);
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = ~(((MR_Integer) -1 << (MR_Integer) MR_tempr1));
	MR_sv(4) = ((MR_Integer) MR_tempr2 & ((MR_Integer) MR_r4 >> (MR_Integer) MR_tempr1));
	MR_sv(5) = MR_r1;
	MR_r4 = ((MR_Integer) MR_tempr2 & (MR_Integer) MR_r4);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0,
		f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0_i11);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_r3 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_tempr2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_0_i28);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(test_bitset_module72)
	MR_init_entry1(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0);
	MR_init_label7(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0,29,2,6,4,10,9,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__fold_bits__ho38__[1, 2, 3, 4, 5, 7, 10]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0_i2);
	}
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(7);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0_i4);
	}
	MR_sv(2) = MR_r7;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(fn__tree_bitset__index_to_enum_1_0,
		f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0_i6);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0_i9);
	}
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r6 >> (MR_Integer) 1);
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = ~(((MR_Integer) -1 << (MR_Integer) MR_tempr1));
	MR_sv(4) = ((MR_Integer) MR_tempr2 & (MR_Integer) MR_r5);
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r4 = ((MR_Integer) MR_r4 + (MR_Integer) MR_tempr1);
	MR_r5 = ((MR_Integer) MR_tempr2 & ((MR_Integer) MR_r5 >> (MR_Integer) MR_tempr1));
	MR_r6 = MR_tempr1;
	}
	MR_np_localcall_lab(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0,
		f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0_i10);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0_i29);
	}
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r6 >> (MR_Integer) 1);
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = ~(((MR_Integer) -1 << (MR_Integer) MR_tempr1));
	MR_sv(4) = ((MR_Integer) MR_tempr2 & ((MR_Integer) MR_r5 >> (MR_Integer) MR_tempr1));
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r5 = ((MR_Integer) MR_tempr2 & (MR_Integer) MR_r5);
	MR_r6 = MR_tempr1;
	}
	MR_np_localcall_lab(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0,
		f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0_i12);
MR_def_label(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_r4 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_tempr2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_116_101_115_116_95_98_105_116_115_101_116_95_95_116_114_101_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_0_i29);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__test_bitset_maybe_bunch_0(void)
{
	test_bitset_module0();
	test_bitset_module1();
	test_bitset_module2();
	test_bitset_module3();
	test_bitset_module4();
	test_bitset_module5();
	test_bitset_module6();
	test_bitset_module7();
	test_bitset_module8();
	test_bitset_module9();
	test_bitset_module10();
	test_bitset_module11();
	test_bitset_module12();
	test_bitset_module13();
	test_bitset_module14();
	test_bitset_module15();
	test_bitset_module16();
	test_bitset_module17();
	test_bitset_module18();
	test_bitset_module19();
	test_bitset_module20();
	test_bitset_module21();
	test_bitset_module22();
	test_bitset_module23();
	test_bitset_module24();
	test_bitset_module25();
	test_bitset_module26();
	test_bitset_module27();
	test_bitset_module28();
	test_bitset_module29();
	test_bitset_module30();
	test_bitset_module31();
	test_bitset_module32();
	test_bitset_module33();
	test_bitset_module34();
	test_bitset_module35();
	test_bitset_module36();
	test_bitset_module37();
	test_bitset_module38();
	test_bitset_module39();
}

static void mercury__test_bitset_maybe_bunch_1(void)
{
	test_bitset_module40();
	test_bitset_module41();
	test_bitset_module42();
	test_bitset_module43();
	test_bitset_module44();
	test_bitset_module45();
	test_bitset_module46();
	test_bitset_module47();
	test_bitset_module48();
	test_bitset_module49();
	test_bitset_module50();
	test_bitset_module51();
	test_bitset_module52();
	test_bitset_module53();
	test_bitset_module54();
	test_bitset_module55();
	test_bitset_module56();
	test_bitset_module57();
	test_bitset_module58();
	test_bitset_module59();
	test_bitset_module60();
	test_bitset_module61();
	test_bitset_module62();
	test_bitset_module63();
	test_bitset_module64();
	test_bitset_module65();
	test_bitset_module66();
	test_bitset_module67();
	test_bitset_module68();
	test_bitset_module69();
	test_bitset_module70();
	test_bitset_module71();
	test_bitset_module72();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__test_bitset__init(void);
void mercury__test_bitset__init_type_tables(void);
void mercury__test_bitset__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__test_bitset__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__test_bitset__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__test_bitset__init_threadscope_string_table(void);
#endif

void mercury__test_bitset__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__test_bitset_maybe_bunch_0();
	mercury__test_bitset_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_test_bitset__type_ctor_info_bitset_error_1,
		test_bitset__bitset_error_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_test_bitset__type_ctor_info_test_bitset_1,
		test_bitset__test_bitset_1_0);
	mercury__test_bitset__init_debugger();
}

void mercury__test_bitset__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_test_bitset__type_ctor_info_bitset_error_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_test_bitset__type_ctor_info_test_bitset_1);
	}
}


void mercury__test_bitset__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__test_bitset__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__test_bitset);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__test_bitset__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__test_bitset__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
