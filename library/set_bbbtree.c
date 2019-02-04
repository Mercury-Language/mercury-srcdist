/*
** Automatically generated from `set_bbbtree.m'
** by the Mercury compiler,
** version rotd-2011-09-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__set_bbbtree__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "io.int2"
#include "io.mh"

#line 28 "set_bbbtree.c"
#line 150 "io.int2"
#include "string.mh"

#line 32 "set_bbbtree.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 36 "set_bbbtree.c"
#line 30 "time.int2"
#include "time.mh"

#line 40 "set_bbbtree.c"
#line 33 "array.int2"
#include "array.mh"

#line 44 "set_bbbtree.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 48 "set_bbbtree.c"
#line 55 "array.opt"
#include "stm_builtin.mh"

#line 52 "set_bbbtree.c"
#line 57 "array.opt"
#include "store.mh"

#line 56 "set_bbbtree.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "set_bbbtree.c"
#line 156 "io.opt"
#include "dir.mh"

#line 64 "set_bbbtree.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 68 "set_bbbtree.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 72 "set_bbbtree.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "set_bbbtree.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "set_bbbtree.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 84 "set_bbbtree.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 88 "set_bbbtree.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "set_bbbtree.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 96 "set_bbbtree.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 100 "set_bbbtree.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 104 "set_bbbtree.c"
#line 4 "int.opt"
#include "int.mh"

#line 108 "set_bbbtree.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "set_bbbtree.c"
#line 113 "set_bbbtree.c"
#include "set_bbbtree.mh"

#line 116 "set_bbbtree.c"
#line 117 "set_bbbtree.c"
#ifndef SET_BBBTREE_DECL_GUARD
#define SET_BBBTREE_DECL_GUARD

#line 121 "set_bbbtree.c"
#line 122 "set_bbbtree.c"

#endif
#line 125 "set_bbbtree.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_set_bbbtree__type_ctor_info_set_bbbtree_1;
MR_decl_label5(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0, 25,3,6,8,4)
MR_decl_label3(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0, 10,3,4)
MR_decl_label3(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_0, 10,3,4)
MR_decl_label10(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0, 3,2,5,4,119,6,12,11,14,13)
MR_decl_label10(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0, 16,15,20,21,19,10,8,30,29,32)
MR_decl_label3(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0, 31,124,28)
MR_decl_label3(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0, 3,2,5)
MR_decl_label4(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0, 6,7,5,3)
MR_decl_label2(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0, 4,3)
MR_decl_label10(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0, 3,6,5,2,11,9,22,20,31,29)
MR_decl_label6(set_bbbtree__concat4_5_0, 3,41,9,8,12,11)
MR_decl_label1(set_bbbtree__count_2_0, 3)
MR_decl_label2(set_bbbtree__delete_3_0, 4,2)
MR_decl_label4(set_bbbtree__delete_list_3_0, 19,3,6,4)
MR_decl_label10(set_bbbtree__difference_r_4_0, 101,4,5,6,7,10,13,12,17,16)
MR_decl_label7(set_bbbtree__difference_r_4_0, 22,21,20,28,27,8,100)
MR_decl_label3(set_bbbtree__equal_2_0, 2,4,1)
MR_decl_label2(set_bbbtree__filter_3_0, 2,3)
MR_decl_label4(set_bbbtree__filter_4_0, 2,3,4,5)
MR_decl_label1(set_bbbtree__fold_4_0, 2)
MR_decl_label1(set_bbbtree__fold_4_1, 2)
MR_decl_label1(set_bbbtree__fold_4_2, 2)
MR_decl_label1(set_bbbtree__fold_4_3, 2)
MR_decl_label1(set_bbbtree__fold_4_4, 2)
MR_decl_label1(set_bbbtree__fold_4_5, 2)
MR_decl_label1(set_bbbtree__fold2_6_0, 2)
MR_decl_label1(set_bbbtree__fold2_6_1, 2)
MR_decl_label1(set_bbbtree__fold2_6_2, 2)
MR_decl_label1(set_bbbtree__fold2_6_3, 2)
MR_decl_label1(set_bbbtree__fold2_6_4, 2)
MR_decl_label1(set_bbbtree__fold2_6_5, 2)
MR_decl_label1(set_bbbtree__fold3_8_0, 2)
MR_decl_label1(set_bbbtree__fold3_8_1, 2)
MR_decl_label1(set_bbbtree__fold3_8_2, 2)
MR_decl_label1(set_bbbtree__fold3_8_3, 2)
MR_decl_label1(set_bbbtree__fold3_8_4, 2)
MR_decl_label1(set_bbbtree__fold3_8_5, 2)
MR_decl_label1(set_bbbtree__fold4_10_0, 2)
MR_decl_label1(set_bbbtree__fold4_10_1, 2)
MR_decl_label1(set_bbbtree__fold4_10_2, 2)
MR_decl_label1(set_bbbtree__fold4_10_3, 2)
MR_decl_label1(set_bbbtree__fold4_10_4, 2)
MR_decl_label1(set_bbbtree__fold4_10_5, 2)
MR_decl_label1(set_bbbtree__fold5_12_0, 2)
MR_decl_label1(set_bbbtree__fold5_12_1, 2)
MR_decl_label1(set_bbbtree__fold5_12_2, 2)
MR_decl_label1(set_bbbtree__fold5_12_3, 2)
MR_decl_label1(set_bbbtree__fold5_12_4, 2)
MR_decl_label1(set_bbbtree__fold5_12_5, 2)
MR_decl_label1(set_bbbtree__fold6_14_0, 2)
MR_decl_label1(set_bbbtree__fold6_14_1, 2)
MR_decl_label1(set_bbbtree__fold6_14_2, 2)
MR_decl_label1(set_bbbtree__fold6_14_3, 2)
MR_decl_label1(set_bbbtree__fold6_14_4, 2)
MR_decl_label1(set_bbbtree__fold6_14_5, 2)
MR_decl_label3(set_bbbtree__insert_list_r_4_0, 10,3,4)
MR_decl_label6(set_bbbtree__insert_r_4_0, 37,5,8,7,10,11)
MR_decl_label10(set_bbbtree__intersect_r_4_0, 101,4,5,6,7,10,8,14,13,18)
MR_decl_label7(set_bbbtree__intersect_r_4_0, 17,23,22,21,29,28,100)
MR_decl_label2(set_bbbtree__is_member_3_0, 3,2)
MR_decl_label2(set_bbbtree__largest_2_0, 4,1)
MR_decl_label2(set_bbbtree__largest_2_1, 4,1)
MR_decl_label2(set_bbbtree__least_2_0, 4,1)
MR_decl_label2(set_bbbtree__least_2_1, 4,1)
MR_decl_label5(set_bbbtree__member_2_0, 28,3,5,8,1)
MR_decl_label6(set_bbbtree__member_2_1, 4,3,6,5,2,7)
MR_decl_label2(set_bbbtree__power_intersect_2_0, 16,4)
MR_decl_label2(set_bbbtree__power_intersect_r_3_0, 16,4)
MR_decl_label6(set_bbbtree__power_intersect_r2_4_0, 25,3,13,7,8,9)
MR_decl_label4(set_bbbtree__power_union_r_3_0, 18,4,5,6)
MR_decl_label10(set_bbbtree__remove_3_0, 3,6,5,11,10,15,14,20,19,18)
MR_decl_label7(set_bbbtree__remove_3_0, 26,28,25,9,34,4,1)
MR_decl_label4(set_bbbtree__remove_largest_3_0, 23,5,22,1)
MR_decl_label4(set_bbbtree__remove_least_3_0, 23,5,22,1)
MR_decl_label4(set_bbbtree__remove_list_3_0, 18,3,4,1)
MR_decl_label1(set_bbbtree__singleton_set_2_1, 1)
MR_decl_label2(set_bbbtree__singleton_set_2_2, 3,1)
MR_decl_label4(set_bbbtree__sorted_list_to_set_2_0, 2,4,5,7)
MR_decl_label3(set_bbbtree__sorted_list_to_set_len_3_0, 25,4,6)
MR_decl_label6(set_bbbtree__split_gt_4_0, 30,3,4,7,6,9)
MR_decl_label6(set_bbbtree__split_lt_4_0, 30,3,4,6,8,9)
MR_decl_label2(set_bbbtree__subset_2_0, 2,1)
MR_decl_label2(set_bbbtree__superset_2_0, 2,1)
MR_decl_label3(set_bbbtree__to_sorted_list2_3_0, 11,3,4)
MR_decl_label5(set_bbbtree__union_r_4_0, 16,4,5,6,7)
MR_decl_label1(fn__set_bbbtree__count_1_0, 3)
MR_decl_label2(fn__set_bbbtree__delete_2_0, 4,2)
MR_decl_label2(fn__set_bbbtree__filter_map_2_0, 2,3)
MR_decl_label1(fn__set_bbbtree__fold_3_0, 2)
MR_decl_label1(fn__set_bbbtree__intersect_list_1_0, 3)
MR_decl_label3(fn__set_bbbtree__intersect_list_r_3_0, 10,3,4)
MR_decl_label2(fn__set_bbbtree__map_2_0, 2,3)
MR_decl_label2(fn__set_bbbtree__power_intersect_1_0, 16,4)
MR_decl_label6(__Unify___set_bbbtree__set_bbbtree_1_0, 40,16,5,7,9,1)
MR_decl_label10(__Compare___set_bbbtree__set_bbbtree_1_0, 74,42,7,5,9,11,16,17,19,23)
MR_decl_label1(__Compare___set_bbbtree__set_bbbtree_1_0, 79)
MR_def_extern_entry(set_bbbtree__init_1_0)
MR_def_extern_entry(fn__set_bbbtree__init_0_0)
MR_def_extern_entry(set_bbbtree__empty_1_0)
MR_def_extern_entry(set_bbbtree__is_empty_1_0)
MR_def_extern_entry(set_bbbtree__non_empty_1_0)
MR_def_extern_entry(set_bbbtree__count_2_0)
MR_def_extern_entry(fn__set_bbbtree__count_1_0)
MR_def_extern_entry(set_bbbtree__member_2_0)
MR_def_extern_entry(set_bbbtree__member_2_1)
MR_def_extern_entry(set_bbbtree__is_member_3_0)
MR_def_extern_entry(set_bbbtree__contains_2_0)
MR_def_extern_entry(set_bbbtree__least_2_0)
MR_def_extern_entry(set_bbbtree__least_2_1)
MR_def_extern_entry(set_bbbtree__largest_2_0)
MR_def_extern_entry(set_bbbtree__largest_2_1)
MR_def_extern_entry(set_bbbtree__singleton_set_2_0)
MR_def_extern_entry(set_bbbtree__singleton_set_2_1)
MR_def_extern_entry(set_bbbtree__singleton_set_2_2)
MR_def_extern_entry(set_bbbtree__singleton_set_2_3)
MR_def_extern_entry(fn__set_bbbtree__make_singleton_set_1_0)
MR_def_extern_entry(set_bbbtree__def_ratio_1_0)
MR_def_extern_entry(set_bbbtree__remove_least_3_0)
MR_def_extern_entry(set_bbbtree__remove_largest_3_0)
MR_def_extern_entry(set_bbbtree__insert_r_4_0)
MR_decl_static(set_bbbtree__concat4_5_0)
MR_decl_static(set_bbbtree__split_lt_4_0)
MR_decl_static(set_bbbtree__split_gt_4_0)
MR_def_extern_entry(set_bbbtree__difference_r_4_0)
MR_def_extern_entry(set_bbbtree__difference_3_0)
MR_def_extern_entry(set_bbbtree__subset_2_0)
MR_def_extern_entry(set_bbbtree__equal_2_0)
MR_def_extern_entry(set_bbbtree__insert_3_0)
MR_def_extern_entry(set_bbbtree__insert_3_1)
MR_def_extern_entry(fn__set_bbbtree__insert_2_0)
MR_def_extern_entry(set_bbbtree__insert_list_r_4_0)
MR_def_extern_entry(set_bbbtree__insert_list_3_0)
MR_def_extern_entry(fn__set_bbbtree__insert_list_2_0)
MR_def_extern_entry(set_bbbtree__remove_3_0)
MR_def_extern_entry(set_bbbtree__delete_3_0)
MR_def_extern_entry(set_bbbtree__delete_3_1)
MR_def_extern_entry(fn__set_bbbtree__delete_2_0)
MR_def_extern_entry(set_bbbtree__delete_list_3_0)
MR_def_extern_entry(fn__set_bbbtree__delete_list_2_0)
MR_def_extern_entry(set_bbbtree__remove_list_3_0)
MR_def_extern_entry(set_bbbtree__list_to_set_r_3_0)
MR_def_extern_entry(set_bbbtree__list_to_set_2_0)
MR_def_extern_entry(fn__set_bbbtree__list_to_set_1_0)
MR_def_extern_entry(fn__set_bbbtree__from_list_1_0)
MR_def_extern_entry(set_bbbtree__sorted_list_to_set_len_3_0)
MR_def_extern_entry(set_bbbtree__sorted_list_to_set_2_0)
MR_def_extern_entry(fn__set_bbbtree__sorted_list_to_set_1_0)
MR_def_extern_entry(fn__set_bbbtree__from_sorted_list_1_0)
MR_def_extern_entry(set_bbbtree__to_sorted_list2_3_0)
MR_def_extern_entry(set_bbbtree__to_sorted_list2_3_1)
MR_def_extern_entry(set_bbbtree__to_sorted_list_2_0)
MR_def_extern_entry(set_bbbtree__to_sorted_list_2_1)
MR_def_extern_entry(fn__set_bbbtree__to_sorted_list_1_0)
MR_def_extern_entry(set_bbbtree__union_r_4_0)
MR_def_extern_entry(set_bbbtree__union_3_0)
MR_def_extern_entry(fn__set_bbbtree__union_2_0)
MR_def_extern_entry(fn__set_bbbtree__union_list_1_0)
MR_def_extern_entry(set_bbbtree__power_union_r_3_0)
MR_def_extern_entry(set_bbbtree__power_union_2_0)
MR_def_extern_entry(fn__set_bbbtree__power_union_1_0)
MR_def_extern_entry(set_bbbtree__intersect_r_4_0)
MR_def_extern_entry(set_bbbtree__intersect_3_0)
MR_def_extern_entry(fn__set_bbbtree__intersect_2_0)
MR_decl_static(set_bbbtree__power_intersect_r2_4_0)
MR_def_extern_entry(set_bbbtree__power_intersect_r_3_0)
MR_def_extern_entry(set_bbbtree__power_intersect_2_0)
MR_def_extern_entry(fn__set_bbbtree__power_intersect_1_0)
MR_def_extern_entry(fn__set_bbbtree__intersect_list_r_3_0)
MR_def_extern_entry(fn__set_bbbtree__intersect_list_1_0)
MR_def_extern_entry(fn__set_bbbtree__difference_2_0)
MR_def_extern_entry(set_bbbtree__superset_2_0)
MR_def_extern_entry(fn__set_bbbtree__fold_3_0)
MR_def_extern_entry(set_bbbtree__fold_4_0)
MR_def_extern_entry(set_bbbtree__fold_4_1)
MR_def_extern_entry(set_bbbtree__fold_4_2)
MR_def_extern_entry(set_bbbtree__fold_4_3)
MR_def_extern_entry(set_bbbtree__fold_4_4)
MR_def_extern_entry(set_bbbtree__fold_4_5)
MR_def_extern_entry(set_bbbtree__fold2_6_0)
MR_def_extern_entry(set_bbbtree__fold2_6_1)
MR_def_extern_entry(set_bbbtree__fold2_6_2)
MR_def_extern_entry(set_bbbtree__fold2_6_3)
MR_def_extern_entry(set_bbbtree__fold2_6_4)
MR_def_extern_entry(set_bbbtree__fold2_6_5)
MR_def_extern_entry(set_bbbtree__fold3_8_0)
MR_def_extern_entry(set_bbbtree__fold3_8_1)
MR_def_extern_entry(set_bbbtree__fold3_8_2)
MR_def_extern_entry(set_bbbtree__fold3_8_3)
MR_def_extern_entry(set_bbbtree__fold3_8_4)
MR_def_extern_entry(set_bbbtree__fold3_8_5)
MR_def_extern_entry(set_bbbtree__fold4_10_0)
MR_def_extern_entry(set_bbbtree__fold4_10_1)
MR_def_extern_entry(set_bbbtree__fold4_10_2)
MR_def_extern_entry(set_bbbtree__fold4_10_3)
MR_def_extern_entry(set_bbbtree__fold4_10_4)
MR_def_extern_entry(set_bbbtree__fold4_10_5)
MR_def_extern_entry(set_bbbtree__fold5_12_0)
MR_def_extern_entry(set_bbbtree__fold5_12_1)
MR_def_extern_entry(set_bbbtree__fold5_12_2)
MR_def_extern_entry(set_bbbtree__fold5_12_3)
MR_def_extern_entry(set_bbbtree__fold5_12_4)
MR_def_extern_entry(set_bbbtree__fold5_12_5)
MR_def_extern_entry(set_bbbtree__fold6_14_0)
MR_def_extern_entry(set_bbbtree__fold6_14_1)
MR_def_extern_entry(set_bbbtree__fold6_14_2)
MR_def_extern_entry(set_bbbtree__fold6_14_3)
MR_def_extern_entry(set_bbbtree__fold6_14_4)
MR_def_extern_entry(set_bbbtree__fold6_14_5)
MR_def_extern_entry(fn__set_bbbtree__map_2_0)
MR_def_extern_entry(fn__set_bbbtree__filter_map_2_0)
MR_def_extern_entry(set_bbbtree__filter_3_0)
MR_def_extern_entry(set_bbbtree__filter_4_0)
MR_def_extern_entry(__Unify___set_bbbtree__set_bbbtree_1_0)
MR_def_extern_entry(__Compare___set_bbbtree__set_bbbtree_1_0)
MR_decl_static(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0)
MR_decl_static(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0)
MR_decl_static(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0)
MR_decl_static(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0)
MR_decl_static(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0)
MR_decl_static(fn__f_115_101_116_95_98_98_98_116_114_101_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
MR_decl_static(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0)
MR_decl_static(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_0)

static const MR_DuFunctorDesc mercury_data_set_bbbtree__du_functor_desc_set_bbbtree_1_0 = {
	"empty",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_set_bbbtree__pti_set_bbbtree_1__pseudo_1 = {
	&mercury_data_set_bbbtree__type_ctor_info_set_bbbtree_1,
{	(MR_PseudoTypeInfo) 1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_set_bbbtree__field_types_set_bbbtree_1_1[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_set_bbbtree__pti_set_bbbtree_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_set_bbbtree__pti_set_bbbtree_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_set_bbbtree__du_functor_desc_set_bbbtree_1_1 = {
	"tree",
	4,
	13,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_set_bbbtree__field_types_set_bbbtree_1_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_set_bbbtree__du_stag_ordered_set_bbbtree_1_0[] = {
	&mercury_data_set_bbbtree__du_functor_desc_set_bbbtree_1_0

};

const MR_DuFunctorDescPtr mercury_data_set_bbbtree__du_stag_ordered_set_bbbtree_1_1[] = {
	&mercury_data_set_bbbtree__du_functor_desc_set_bbbtree_1_1

};

const MR_DuPtagLayout mercury_data_set_bbbtree__du_ptag_ordered_set_bbbtree_1[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_set_bbbtree__du_stag_ordered_set_bbbtree_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_set_bbbtree__du_stag_ordered_set_bbbtree_1_1 }

};

const MR_DuFunctorDescPtr mercury_data_set_bbbtree__du_name_ordered_set_bbbtree_1[] = {
	&mercury_data_set_bbbtree__du_functor_desc_set_bbbtree_1_0,
	&mercury_data_set_bbbtree__du_functor_desc_set_bbbtree_1_1
};

const MR_Integer mercury_data_set_bbbtree__functor_number_map_set_bbbtree_1[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_set_bbbtree__type_ctor_info_set_bbbtree_1 = {
	1,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___set_bbbtree__set_bbbtree_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___set_bbbtree__set_bbbtree_1_0)),
	"set_bbbtree",
	"set_bbbtree",
	{ (void *)mercury_data_set_bbbtree__du_name_ordered_set_bbbtree_1 },
	{ (void *)mercury_data_set_bbbtree__du_ptag_ordered_set_bbbtree_1 },
	2,
	4,
	mercury_data_set_bbbtree__functor_number_map_set_bbbtree_1
};




MR_BEGIN_MODULE(set_bbbtree_module0)
	MR_init_entry1(set_bbbtree__init_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__init_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module1)
	MR_init_entry1(fn__set_bbbtree__init_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_bbbtree__init_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_bbbtree__init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module2)
	MR_init_entry1(set_bbbtree__empty_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__empty_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__empty_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module3)
	MR_init_entry1(set_bbbtree__is_empty_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__is_empty_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__is_empty_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module4)
	MR_init_entry1(set_bbbtree__non_empty_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__non_empty_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'non_empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__non_empty_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 != (MR_Integer) MR_tbmkword(0, 0));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module5)
	MR_init_entry1(set_bbbtree__count_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__count_2_0);
	MR_init_label1(set_bbbtree__count_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__count_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__count_2_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(set_bbbtree__count_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r2, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module6)
	MR_init_entry1(fn__set_bbbtree__count_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_bbbtree__count_1_0);
	MR_init_label1(fn__set_bbbtree__count_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_bbbtree__count_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__set_bbbtree__count_1_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__set_bbbtree__count_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r2, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);
MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(set_bbbtree_module7)
	MR_init_entry1(set_bbbtree__member_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__member_2_0);
	MR_init_label5(set_bbbtree__member_2_0,28,3,5,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'member'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__member_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(set_bbbtree__member_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(set_bbbtree__member_2_0_i1);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(5) = MR_r1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_bbbtree__member_2_0_i3);
MR_def_label(set_bbbtree__member_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_bbbtree__member_2_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(set_bbbtree__member_2_0_i28);
MR_def_label(set_bbbtree__member_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_bbbtree__member_2_0_i8);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(set_bbbtree__member_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(set_bbbtree__member_2_0_i28);
MR_def_label(set_bbbtree__member_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_redo);
MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(set_bbbtree_module8)
	MR_init_entry1(set_bbbtree__member_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__member_2_1);
	MR_init_label6(set_bbbtree__member_2_1,4,3,6,5,2,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'member'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__member_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_mkframe("pred set_bbbtree.member/2-1", 5,
		MR_LABEL_AP(set_bbbtree__member_2_1_i3));
	MR_fv(3) = MR_tfield(1, MR_r2, 3);
	MR_fv(2) = MR_tfield(1, MR_r2, 0);
	MR_fv(5) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 2);
	MR_np_localcall_lab(set_bbbtree__member_2_1,
		set_bbbtree__member_2_1_i4);
MR_def_label(set_bbbtree__member_2_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_fv(2);
	MR_fv(4) = (MR_Integer) 1;
	MR_r1 = MR_fv(5);
	MR_GOTO_LAB(set_bbbtree__member_2_1_i2);
MR_def_label(set_bbbtree__member_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(set_bbbtree__member_2_1_i5);
	MR_r1 = MR_fv(5);
	MR_r2 = MR_fv(3);
	MR_np_localcall_lab(set_bbbtree__member_2_1,
		set_bbbtree__member_2_1_i6);
MR_def_label(set_bbbtree__member_2_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_fv(2);
	MR_fv(4) = (MR_Integer) 2;
	MR_r1 = MR_fv(5);
	MR_GOTO_LAB(set_bbbtree__member_2_1_i2);
MR_def_label(set_bbbtree__member_2_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r2 = MR_fv(2);
	MR_r3 = MR_r2;
	MR_fv(4) = (MR_Integer) 0;
	MR_r1 = MR_fv(5);
MR_def_label(set_bbbtree__member_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(1) = MR_r2;
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_bbbtree__member_2_1_i7);
MR_def_label(set_bbbtree__member_2_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_fv(4) != MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(1);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module9)
	MR_init_entry1(set_bbbtree__is_member_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__is_member_3_0);
	MR_init_label2(set_bbbtree__is_member_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_member'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__is_member_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(set_bbbtree__member_2_0,
		set_bbbtree__is_member_3_0_i3);
MR_def_label(set_bbbtree__is_member_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_bbbtree__is_member_3_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(set_bbbtree__is_member_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module10)
	MR_init_entry1(set_bbbtree__contains_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__contains_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'contains'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__contains_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(set_bbbtree__member_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module11)
	MR_init_entry1(set_bbbtree__least_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__least_2_0);
	MR_init_label2(set_bbbtree__least_2_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'least'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__least_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__least_2_0_i1);
	}
	MR_r3 = MR_tfield(1, MR_r2, 2);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(set_bbbtree__least_2_0_i4);
	}
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(set_bbbtree__least_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_localtailcall(set_bbbtree__least_2_0);
MR_def_label(set_bbbtree__least_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module12)
	MR_init_entry1(set_bbbtree__least_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__least_2_1);
	MR_init_label2(set_bbbtree__least_2_1,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'least'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__least_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__least_2_1_i1);
	}
	MR_r4 = MR_tfield(1, MR_r2, 2);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(set_bbbtree__least_2_1_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
MR_def_label(set_bbbtree__least_2_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r4;
	MR_np_localtailcall(set_bbbtree__least_2_1);
MR_def_label(set_bbbtree__least_2_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module13)
	MR_init_entry1(set_bbbtree__largest_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__largest_2_0);
	MR_init_label2(set_bbbtree__largest_2_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'largest'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__largest_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__largest_2_0_i1);
	}
	MR_r3 = MR_tfield(1, MR_r2, 3);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(set_bbbtree__largest_2_0_i4);
	}
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(set_bbbtree__largest_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_localtailcall(set_bbbtree__largest_2_0);
MR_def_label(set_bbbtree__largest_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module14)
	MR_init_entry1(set_bbbtree__largest_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__largest_2_1);
	MR_init_label2(set_bbbtree__largest_2_1,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'largest'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__largest_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__largest_2_1_i1);
	}
	MR_r4 = MR_tfield(1, MR_r2, 3);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(set_bbbtree__largest_2_1_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
MR_def_label(set_bbbtree__largest_2_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r4;
	MR_np_localtailcall(set_bbbtree__largest_2_1);
MR_def_label(set_bbbtree__largest_2_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module15)
	MR_init_entry1(set_bbbtree__singleton_set_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__singleton_set_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'singleton_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__singleton_set_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module16)
	MR_init_entry1(set_bbbtree__singleton_set_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__singleton_set_2_1);
	MR_init_label1(set_bbbtree__singleton_set_2_1,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'singleton_set'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__singleton_set_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__singleton_set_2_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(set_bbbtree__singleton_set_2_1_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(set_bbbtree__singleton_set_2_1_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 3);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(set_bbbtree__singleton_set_2_1_i1);
	}
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_bbbtree__singleton_set_2_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module17)
	MR_init_entry1(set_bbbtree__singleton_set_2_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__singleton_set_2_2);
	MR_init_label2(set_bbbtree__singleton_set_2_2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'singleton_set'/2 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__singleton_set_2_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__singleton_set_2_2_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_tfield(1, MR_r2, 2);
	MR_sv(3) = MR_tfield(1, MR_r2, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		set_bbbtree__singleton_set_2_2_i3);
MR_def_label(set_bbbtree__singleton_set_2_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_bbbtree__singleton_set_2_2_i1);
	}
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(set_bbbtree__singleton_set_2_2_i1);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(set_bbbtree__singleton_set_2_2_i1);
	}
	MR_r1 = ((MR_Integer) MR_sv(3) == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(4);
MR_def_label(set_bbbtree__singleton_set_2_2,1)
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


MR_BEGIN_MODULE(set_bbbtree_module18)
	MR_init_entry1(set_bbbtree__singleton_set_2_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__singleton_set_2_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'singleton_set'/2 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__singleton_set_2_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_bbbtree__singleton_set_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module19)
	MR_init_entry1(fn__set_bbbtree__make_singleton_set_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_bbbtree__make_singleton_set_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_singleton_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_bbbtree__make_singleton_set_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module20)
	MR_init_entry1(set_bbbtree__def_ratio_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__def_ratio_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'def_ratio'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__def_ratio_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module21)
	MR_init_entry1(set_bbbtree__remove_least_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__remove_least_3_0);
	MR_init_label4(set_bbbtree__remove_least_3_0,23,5,22,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_least'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__remove_least_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__remove_least_3_0_i22);
	}
	MR_r4 = MR_tfield(1, MR_r2, 2);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(set_bbbtree__remove_least_3_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_bbbtree__remove_least_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_tfield(1, MR_r2, 3);
	MR_r2 = MR_r4;
	MR_np_localcall_lab(set_bbbtree__remove_least_3_0,
		set_bbbtree__remove_least_3_0_i5);
MR_def_label(set_bbbtree__remove_least_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_bbbtree__remove_least_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 2) = MR_r3;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(set_bbbtree__remove_least_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(set_bbbtree__remove_least_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module22)
	MR_init_entry1(set_bbbtree__remove_largest_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__remove_largest_3_0);
	MR_init_label4(set_bbbtree__remove_largest_3_0,23,5,22,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_largest'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__remove_largest_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__remove_largest_3_0_i22);
	}
	MR_r4 = MR_tfield(1, MR_r2, 3);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(set_bbbtree__remove_largest_3_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_bbbtree__remove_largest_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_tfield(1, MR_r2, 2);
	MR_r2 = MR_r4;
	MR_np_localcall_lab(set_bbbtree__remove_largest_3_0,
		set_bbbtree__remove_largest_3_0_i5);
MR_def_label(set_bbbtree__remove_largest_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_bbbtree__remove_largest_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 3) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(set_bbbtree__remove_largest_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(set_bbbtree__remove_largest_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module23)
	MR_init_entry1(set_bbbtree__insert_r_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__insert_r_4_0);
	MR_init_label6(set_bbbtree__insert_r_4_0,37,5,8,7,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_r'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__insert_r_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__insert_r_4_0_i37);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_r1, 0) = MR_r3;
	MR_tfield(1, MR_r1, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(set_bbbtree__insert_r_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_tfield(1, MR_r2, 2);
	MR_sv(6) = MR_tfield(1, MR_r2, 3);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_bbbtree__insert_r_4_0_i5);
MR_def_label(set_bbbtree__insert_r_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_bbbtree__insert_r_4_0_i7);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(set_bbbtree__insert_r_4_0,
		set_bbbtree__insert_r_4_0_i8);
MR_def_label(set_bbbtree__insert_r_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0);
	}
MR_def_label(set_bbbtree__insert_r_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_bbbtree__insert_r_4_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(8);
MR_def_label(set_bbbtree__insert_r_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(set_bbbtree__insert_r_4_0,
		set_bbbtree__insert_r_4_0_i11);
MR_def_label(set_bbbtree__insert_r_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module24)
	MR_init_entry1(set_bbbtree__concat4_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__concat4_5_0);
	MR_init_label6(set_bbbtree__concat4_5_0,3,41,9,8,12,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'concat4'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(set_bbbtree__concat4_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__concat4_5_0_i3);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(set_bbbtree__insert_r_4_0);
MR_def_label(set_bbbtree__concat4_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(set_bbbtree__concat4_5_0_i41);
	}
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(set_bbbtree__insert_r_4_0);
MR_def_label(set_bbbtree__concat4_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_r6 = MR_tfield(1, MR_tempr2, 1);
	MR_r7 = MR_tfield(1, MR_r2, 3);
	MR_sv(3) = MR_tfield(1, MR_r2, 2);
	MR_r8 = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_tempr3 = MR_r5;
	MR_tempr1 = ((MR_Integer) MR_tempr3 * (MR_Integer) MR_r8);
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(set_bbbtree__concat4_5_0_i8);
	}
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 3);
	MR_r3 = MR_tfield(1, MR_r3, 2);
	}
	MR_np_localcall_lab(set_bbbtree__concat4_5_0,
		set_bbbtree__concat4_5_0_i9);
MR_def_label(set_bbbtree__concat4_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0);
	}
MR_def_label(set_bbbtree__concat4_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = ((MR_Integer) MR_tempr2 * (MR_Integer) MR_r6);
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(set_bbbtree__concat4_5_0_i11);
	}
	MR_sv(1) = MR_tempr2;
	MR_r2 = MR_r7;
	}
	MR_np_localcall_lab(set_bbbtree__concat4_5_0,
		set_bbbtree__concat4_5_0_i12);
MR_def_label(set_bbbtree__concat4_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0);
	}
MR_def_label(set_bbbtree__concat4_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module25)
	MR_init_entry1(set_bbbtree__split_lt_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__split_lt_4_0);
	MR_init_label6(set_bbbtree__split_lt_4_0,30,3,4,6,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'split_lt'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(set_bbbtree__split_lt_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(set_bbbtree__split_lt_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__split_lt_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(set_bbbtree__split_lt_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 2);
	MR_sv(5) = MR_tfield(1, MR_r2, 3);
	MR_sv(6) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_bbbtree__split_lt_4_0_i4);
MR_def_label(set_bbbtree__split_lt_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_bbbtree__split_lt_4_0_i6);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(set_bbbtree__split_lt_4_0_i30);
MR_def_label(set_bbbtree__split_lt_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_bbbtree__split_lt_4_0_i8);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(7);
MR_def_label(set_bbbtree__split_lt_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(set_bbbtree__split_lt_4_0,
		set_bbbtree__split_lt_4_0_i9);
MR_def_label(set_bbbtree__split_lt_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(set_bbbtree__concat4_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module26)
	MR_init_entry1(set_bbbtree__split_gt_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__split_gt_4_0);
	MR_init_label6(set_bbbtree__split_gt_4_0,30,3,4,7,6,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'split_gt'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(set_bbbtree__split_gt_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(set_bbbtree__split_gt_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__split_gt_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(set_bbbtree__split_gt_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 2);
	MR_sv(5) = MR_tfield(1, MR_r2, 3);
	MR_sv(6) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_bbbtree__split_gt_4_0_i4);
MR_def_label(set_bbbtree__split_gt_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_bbbtree__split_gt_4_0_i6);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(set_bbbtree__split_gt_4_0,
		set_bbbtree__split_gt_4_0_i7);
MR_def_label(set_bbbtree__split_gt_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(set_bbbtree__concat4_5_0);
	}
MR_def_label(set_bbbtree__split_gt_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_bbbtree__split_gt_4_0_i9);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(set_bbbtree__split_gt_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(set_bbbtree__split_gt_4_0_i30);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(set_bbbtree_module27)
	MR_init_entry1(set_bbbtree__difference_r_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__difference_r_4_0);
	MR_init_label10(set_bbbtree__difference_r_4_0,101,4,5,6,7,10,13,12,17,16)
	MR_init_label7(set_bbbtree__difference_r_4_0,22,21,20,28,27,8,100)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'difference_r'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__difference_r_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__difference_r_4_0_i101);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(set_bbbtree__difference_r_4_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_tfield(1, MR_r2, 2);
	MR_sv(3) = MR_tfield(1, MR_r2, 3);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(set_bbbtree__split_lt_4_0,
		set_bbbtree__difference_r_4_0_i4);
MR_def_label(set_bbbtree__difference_r_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(set_bbbtree__split_gt_4_0,
		set_bbbtree__difference_r_4_0_i5);
MR_def_label(set_bbbtree__difference_r_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_localcall_lab(set_bbbtree__difference_r_4_0,
		set_bbbtree__difference_r_4_0_i6);
MR_def_label(set_bbbtree__difference_r_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_localcall_lab(set_bbbtree__difference_r_4_0,
		set_bbbtree__difference_r_4_0_i7);
MR_def_label(set_bbbtree__difference_r_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_bbbtree__member_2_0,
		set_bbbtree__difference_r_4_0_i10);
MR_def_label(set_bbbtree__difference_r_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_bbbtree__difference_r_4_0_i8);
	}
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(set_bbbtree__difference_r_4_0_i13);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(set_bbbtree__difference_r_4_0_i12);
MR_def_label(set_bbbtree__difference_r_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tfield(1, MR_sv(5), 1);
MR_def_label(set_bbbtree__difference_r_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(set_bbbtree__difference_r_4_0_i100);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(set_bbbtree__difference_r_4_0_i17);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(set_bbbtree__difference_r_4_0_i16);
MR_def_label(set_bbbtree__difference_r_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_tfield(1, MR_sv(6), 1);
MR_def_label(set_bbbtree__difference_r_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(set_bbbtree__difference_r_4_0_i100);
	}
	if (((MR_Integer) MR_r2 <= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(set_bbbtree__difference_r_4_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_bbbtree__remove_largest_3_0,
		set_bbbtree__difference_r_4_0_i22);
MR_def_label(set_bbbtree__difference_r_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_bbbtree__difference_r_4_0_i21);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0);
MR_def_label(set_bbbtree__difference_r_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("set_bbbtree.concat3.1", 21);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(set_bbbtree__difference_r_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(set_bbbtree__remove_least_3_0,
		set_bbbtree__difference_r_4_0_i28);
MR_def_label(set_bbbtree__difference_r_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_bbbtree__difference_r_4_0_i27);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0);
MR_def_label(set_bbbtree__difference_r_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("set_bbbtree.concat3.2", 21);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(set_bbbtree__difference_r_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(set_bbbtree__concat4_5_0);
	}
MR_def_label(set_bbbtree__difference_r_4_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module28)
	MR_init_entry1(set_bbbtree__difference_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__difference_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'difference'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__difference_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 5;
	MR_np_tailcall_ent(set_bbbtree__difference_r_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module29)
	MR_init_entry1(set_bbbtree__subset_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__subset_2_0);
	MR_init_label2(set_bbbtree__subset_2_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'subset'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__subset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r4 = (MR_Integer) 5;
	MR_np_call_localret_ent(set_bbbtree__difference_r_4_0,
		set_bbbtree__subset_2_0_i2);
MR_def_label(set_bbbtree__subset_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(set_bbbtree__subset_2_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(set_bbbtree__subset_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module30)
	MR_init_entry1(set_bbbtree__equal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__equal_2_0);
	MR_init_label3(set_bbbtree__equal_2_0,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'equal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__equal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r4 = (MR_Integer) 5;
	MR_np_call_localret_ent(set_bbbtree__difference_r_4_0,
		set_bbbtree__equal_2_0_i2);
MR_def_label(set_bbbtree__equal_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(set_bbbtree__equal_2_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Integer) 5;
	MR_np_call_localret_ent(set_bbbtree__difference_r_4_0,
		set_bbbtree__equal_2_0_i4);
MR_def_label(set_bbbtree__equal_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(set_bbbtree__equal_2_0_i1);
	}
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(set_bbbtree__equal_2_0,1)
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


MR_BEGIN_MODULE(set_bbbtree_module31)
	MR_init_entry1(set_bbbtree__insert_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__insert_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__insert_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 5;
	MR_np_tailcall_ent(set_bbbtree__insert_r_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module32)
	MR_init_entry1(set_bbbtree__insert_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__insert_3_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__insert_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 5;
	MR_np_tailcall_ent(set_bbbtree__insert_r_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module33)
	MR_init_entry1(fn__set_bbbtree__insert_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_bbbtree__insert_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_bbbtree__insert_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 5;
	MR_np_tailcall_ent(set_bbbtree__insert_r_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module34)
	MR_init_entry1(set_bbbtree__insert_list_r_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__insert_list_r_4_0);
	MR_init_label3(set_bbbtree__insert_list_r_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_list_r'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__insert_list_r_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(set_bbbtree__insert_list_r_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(set_bbbtree__insert_list_r_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(set_bbbtree__insert_list_r_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r3, 1);
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(set_bbbtree__insert_r_4_0,
		set_bbbtree__insert_list_r_4_0_i4);
MR_def_label(set_bbbtree__insert_list_r_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(set_bbbtree__insert_list_r_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module35)
	MR_init_entry1(set_bbbtree__insert_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__insert_list_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__insert_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 5;
	MR_np_tailcall_ent(set_bbbtree__insert_list_r_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module36)
	MR_init_entry1(fn__set_bbbtree__insert_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_bbbtree__insert_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_bbbtree__insert_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 5;
	MR_np_tailcall_ent(set_bbbtree__insert_list_r_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module37)
	MR_init_entry1(set_bbbtree__remove_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__remove_3_0);
	MR_init_label10(set_bbbtree__remove_3_0,3,6,5,11,10,15,14,20,19,18)
	MR_init_label7(set_bbbtree__remove_3_0,26,28,25,9,34,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__remove_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(set_bbbtree__remove_3_0_i1);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(6) = MR_r1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_bbbtree__remove_3_0_i3);
MR_def_label(set_bbbtree__remove_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_bbbtree__remove_3_0_i5);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(set_bbbtree__remove_3_0,
		set_bbbtree__remove_3_0_i6);
MR_def_label(set_bbbtree__remove_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_bbbtree__remove_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 2) = MR_r2;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_bbbtree__remove_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_bbbtree__remove_3_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(set_bbbtree__remove_3_0_i11);
	}
	MR_r2 = MR_sv(5);
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(set_bbbtree__remove_3_0_i10);
MR_def_label(set_bbbtree__remove_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r1 = MR_tfield(1, MR_sv(4), 1);
MR_def_label(set_bbbtree__remove_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(set_bbbtree__remove_3_0_i4);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__remove_3_0_i15);
	}
	MR_sv(5) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(set_bbbtree__remove_3_0_i14);
MR_def_label(set_bbbtree__remove_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(1, MR_sv(5), 1);
MR_def_label(set_bbbtree__remove_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(set_bbbtree__remove_3_0_i4);
	}
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(set_bbbtree__remove_3_0_i18);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(set_bbbtree__remove_largest_3_0,
		set_bbbtree__remove_3_0_i20);
MR_def_label(set_bbbtree__remove_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_bbbtree__remove_3_0_i19);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0,
		set_bbbtree__remove_3_0_i28);
MR_def_label(set_bbbtree__remove_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("set_bbbtree.concat3.1", 21);
	MR_np_call_localret_ent(require__error_1_0,
		set_bbbtree__remove_3_0_i4);
MR_def_label(set_bbbtree__remove_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(set_bbbtree__remove_least_3_0,
		set_bbbtree__remove_3_0_i26);
MR_def_label(set_bbbtree__remove_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_bbbtree__remove_3_0_i25);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0,
		set_bbbtree__remove_3_0_i28);
MR_def_label(set_bbbtree__remove_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(set_bbbtree__remove_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("set_bbbtree.concat3.2", 21);
	MR_np_call_localret_ent(require__error_1_0,
		set_bbbtree__remove_3_0_i4);
MR_def_label(set_bbbtree__remove_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_localcall_lab(set_bbbtree__remove_3_0,
		set_bbbtree__remove_3_0_i34);
MR_def_label(set_bbbtree__remove_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_bbbtree__remove_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 3) = MR_r2;
	MR_r2 = MR_tempr1;
	}
MR_def_label(set_bbbtree__remove_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(set_bbbtree__remove_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module38)
	MR_init_entry1(set_bbbtree__delete_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__delete_3_0);
	MR_init_label2(set_bbbtree__delete_3_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__delete_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(set_bbbtree__remove_3_0,
		set_bbbtree__delete_3_0_i4);
MR_def_label(set_bbbtree__delete_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_bbbtree__delete_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(set_bbbtree__delete_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module39)
	MR_init_entry1(set_bbbtree__delete_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__delete_3_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__delete_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_bbbtree__delete_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module40)
	MR_init_entry1(fn__set_bbbtree__delete_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_bbbtree__delete_2_0);
	MR_init_label2(fn__set_bbbtree__delete_2_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_bbbtree__delete_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set_bbbtree__remove_3_0,
		fn__set_bbbtree__delete_2_0_i4);
MR_def_label(fn__set_bbbtree__delete_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__set_bbbtree__delete_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__set_bbbtree__delete_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module41)
	MR_init_entry1(set_bbbtree__delete_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__delete_list_3_0);
	MR_init_label4(set_bbbtree__delete_list_3_0,19,3,6,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__delete_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(set_bbbtree__delete_list_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__delete_list_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(set_bbbtree__delete_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(set_bbbtree__remove_3_0,
		set_bbbtree__delete_list_3_0_i6);
MR_def_label(set_bbbtree__delete_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_bbbtree__delete_list_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(set_bbbtree__delete_list_3_0_i19);
	}
MR_def_label(set_bbbtree__delete_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(set_bbbtree__delete_list_3_0_i19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module42)
	MR_init_entry1(fn__set_bbbtree__delete_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_bbbtree__delete_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_bbbtree__delete_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(set_bbbtree__delete_list_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module43)
	MR_init_entry1(set_bbbtree__remove_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__remove_list_3_0);
	MR_init_label4(set_bbbtree__remove_list_3_0,18,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__remove_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(set_bbbtree__remove_list_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__remove_list_3_0_i3);
	}
	MR_r2 = MR_r3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(set_bbbtree__remove_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(set_bbbtree__remove_3_0,
		set_bbbtree__remove_list_3_0_i4);
MR_def_label(set_bbbtree__remove_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_bbbtree__remove_list_3_0_i1);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(set_bbbtree__remove_list_3_0_i18);
	}
MR_def_label(set_bbbtree__remove_list_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module44)
	MR_init_entry1(set_bbbtree__list_to_set_r_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__list_to_set_r_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_to_set_r'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__list_to_set_r_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(set_bbbtree__insert_list_r_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module45)
	MR_init_entry1(set_bbbtree__list_to_set_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__list_to_set_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_to_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__list_to_set_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 5;
	MR_np_tailcall_ent(set_bbbtree__insert_list_r_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module46)
	MR_init_entry1(fn__set_bbbtree__list_to_set_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_bbbtree__list_to_set_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_to_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_bbbtree__list_to_set_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 5;
	MR_np_tailcall_ent(set_bbbtree__insert_list_r_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module47)
	MR_init_entry1(fn__set_bbbtree__from_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_bbbtree__from_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_bbbtree__from_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 5;
	MR_np_tailcall_ent(set_bbbtree__insert_list_r_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module48)
	MR_init_entry1(set_bbbtree__sorted_list_to_set_len_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__sorted_list_to_set_len_3_0);
	MR_init_label3(set_bbbtree__sorted_list_to_set_len_3_0,25,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sorted_list_to_set_len'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__sorted_list_to_set_len_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__sorted_list_to_set_len_3_0_i25);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(set_bbbtree__sorted_list_to_set_len_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0,
		set_bbbtree__sorted_list_to_set_len_3_0_i4);
MR_def_label(set_bbbtree__sorted_list_to_set_len_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(set_bbbtree__sorted_list_to_set_len_3_0_i6);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(set_bbbtree__sorted_list_to_set_len_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("set_bbbtree.sorted_list_to_set_r", 32);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_3_0);

MR_BEGIN_MODULE(set_bbbtree_module49)
	MR_init_entry1(set_bbbtree__sorted_list_to_set_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__sorted_list_to_set_2_0);
	MR_init_label4(set_bbbtree__sorted_list_to_set_2_0,2,4,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sorted_list_to_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__sorted_list_to_set_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		set_bbbtree__sorted_list_to_set_2_0_i2);
MR_def_label(set_bbbtree__sorted_list_to_set_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(set_bbbtree__sorted_list_to_set_2_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
MR_def_label(set_bbbtree__sorted_list_to_set_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0,
		set_bbbtree__sorted_list_to_set_2_0_i5);
MR_def_label(set_bbbtree__sorted_list_to_set_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(set_bbbtree__sorted_list_to_set_2_0_i7);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(set_bbbtree__sorted_list_to_set_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("set_bbbtree.sorted_list_to_set_r", 32);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module50)
	MR_init_entry1(fn__set_bbbtree__sorted_list_to_set_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_bbbtree__sorted_list_to_set_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sorted_list_to_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_bbbtree__sorted_list_to_set_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_bbbtree__sorted_list_to_set_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module51)
	MR_init_entry1(fn__set_bbbtree__from_sorted_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_bbbtree__from_sorted_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_sorted_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_bbbtree__from_sorted_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_bbbtree__sorted_list_to_set_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module52)
	MR_init_entry1(set_bbbtree__to_sorted_list2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__to_sorted_list2_3_0);
	MR_init_label3(set_bbbtree__to_sorted_list2_3_0,11,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_sorted_list2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__to_sorted_list2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(set_bbbtree__to_sorted_list2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__to_sorted_list2_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(set_bbbtree__to_sorted_list2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 2);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 3);
	MR_np_localcall_lab(set_bbbtree__to_sorted_list2_3_0,
		set_bbbtree__to_sorted_list2_3_0_i4);
MR_def_label(set_bbbtree__to_sorted_list2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(set_bbbtree__to_sorted_list2_3_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module53)
	MR_init_entry1(set_bbbtree__to_sorted_list2_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__to_sorted_list2_3_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_sorted_list2'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__to_sorted_list2_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_bbbtree__to_sorted_list2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module54)
	MR_init_entry1(set_bbbtree__to_sorted_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__to_sorted_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_sorted_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__to_sorted_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(set_bbbtree__to_sorted_list2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module55)
	MR_init_entry1(set_bbbtree__to_sorted_list_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__to_sorted_list_2_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_sorted_list'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__to_sorted_list_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(set_bbbtree__to_sorted_list2_3_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module56)
	MR_init_entry1(fn__set_bbbtree__to_sorted_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_bbbtree__to_sorted_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_sorted_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_bbbtree__to_sorted_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(set_bbbtree__to_sorted_list2_3_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module57)
	MR_init_entry1(set_bbbtree__union_r_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__union_r_4_0);
	MR_init_label5(set_bbbtree__union_r_4_0,16,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'union_r'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__union_r_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__union_r_4_0_i16);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(set_bbbtree__union_r_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 2);
	MR_sv(4) = MR_tfield(1, MR_r2, 3);
	MR_sv(6) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(set_bbbtree__split_lt_4_0,
		set_bbbtree__union_r_4_0_i4);
MR_def_label(set_bbbtree__union_r_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(set_bbbtree__split_gt_4_0,
		set_bbbtree__union_r_4_0_i5);
MR_def_label(set_bbbtree__union_r_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_localcall_lab(set_bbbtree__union_r_4_0,
		set_bbbtree__union_r_4_0_i6);
MR_def_label(set_bbbtree__union_r_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_localcall_lab(set_bbbtree__union_r_4_0,
		set_bbbtree__union_r_4_0_i7);
MR_def_label(set_bbbtree__union_r_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(set_bbbtree__concat4_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module58)
	MR_init_entry1(set_bbbtree__union_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__union_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'union'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__union_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 5;
	MR_np_tailcall_ent(set_bbbtree__union_r_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module59)
	MR_init_entry1(fn__set_bbbtree__union_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_bbbtree__union_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'union'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_bbbtree__union_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 5;
	MR_np_tailcall_ent(set_bbbtree__union_r_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module60)
	MR_init_entry1(fn__set_bbbtree__union_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_bbbtree__union_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'union_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_bbbtree__union_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module61)
	MR_init_entry1(set_bbbtree__power_union_r_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__power_union_r_3_0);
	MR_init_label4(set_bbbtree__power_union_r_3_0,18,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'power_union_r'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__power_union_r_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__power_union_r_3_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(set_bbbtree__power_union_r_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 3);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 2);
	MR_np_localcall_lab(set_bbbtree__power_union_r_3_0,
		set_bbbtree__power_union_r_3_0_i4);
MR_def_label(set_bbbtree__power_union_r_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_localcall_lab(set_bbbtree__power_union_r_3_0,
		set_bbbtree__power_union_r_3_0_i5);
MR_def_label(set_bbbtree__power_union_r_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(set_bbbtree__union_r_4_0,
		set_bbbtree__power_union_r_3_0_i6);
MR_def_label(set_bbbtree__power_union_r_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(set_bbbtree__union_r_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module62)
	MR_init_entry1(set_bbbtree__power_union_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__power_union_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'power_union'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__power_union_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 5;
	MR_np_tailcall_ent(set_bbbtree__power_union_r_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module63)
	MR_init_entry1(fn__set_bbbtree__power_union_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_bbbtree__power_union_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'power_union'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_bbbtree__power_union_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 5;
	MR_np_tailcall_ent(set_bbbtree__power_union_r_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module64)
	MR_init_entry1(set_bbbtree__intersect_r_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__intersect_r_4_0);
	MR_init_label10(set_bbbtree__intersect_r_4_0,101,4,5,6,7,10,8,14,13,18)
	MR_init_label7(set_bbbtree__intersect_r_4_0,17,23,22,21,29,28,100)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'intersect_r'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__intersect_r_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__intersect_r_4_0_i101);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(set_bbbtree__intersect_r_4_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_tfield(1, MR_r2, 2);
	MR_sv(3) = MR_tfield(1, MR_r2, 3);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(set_bbbtree__split_lt_4_0,
		set_bbbtree__intersect_r_4_0_i4);
MR_def_label(set_bbbtree__intersect_r_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(set_bbbtree__split_gt_4_0,
		set_bbbtree__intersect_r_4_0_i5);
MR_def_label(set_bbbtree__intersect_r_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_localcall_lab(set_bbbtree__intersect_r_4_0,
		set_bbbtree__intersect_r_4_0_i6);
MR_def_label(set_bbbtree__intersect_r_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_localcall_lab(set_bbbtree__intersect_r_4_0,
		set_bbbtree__intersect_r_4_0_i7);
MR_def_label(set_bbbtree__intersect_r_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_bbbtree__member_2_0,
		set_bbbtree__intersect_r_4_0_i10);
MR_def_label(set_bbbtree__intersect_r_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_bbbtree__intersect_r_4_0_i8);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(set_bbbtree__concat4_5_0);
MR_def_label(set_bbbtree__intersect_r_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(set_bbbtree__intersect_r_4_0_i14);
	}
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(set_bbbtree__intersect_r_4_0_i13);
MR_def_label(set_bbbtree__intersect_r_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_sv(5), 1);
MR_def_label(set_bbbtree__intersect_r_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(set_bbbtree__intersect_r_4_0_i100);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(set_bbbtree__intersect_r_4_0_i18);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(set_bbbtree__intersect_r_4_0_i17);
MR_def_label(set_bbbtree__intersect_r_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_tfield(1, MR_sv(6), 1);
MR_def_label(set_bbbtree__intersect_r_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(set_bbbtree__intersect_r_4_0_i100);
	}
	if (((MR_Integer) MR_r2 <= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(set_bbbtree__intersect_r_4_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_bbbtree__remove_largest_3_0,
		set_bbbtree__intersect_r_4_0_i23);
MR_def_label(set_bbbtree__intersect_r_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_bbbtree__intersect_r_4_0_i22);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0);
MR_def_label(set_bbbtree__intersect_r_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("set_bbbtree.concat3.1", 21);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(set_bbbtree__intersect_r_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(set_bbbtree__remove_least_3_0,
		set_bbbtree__intersect_r_4_0_i29);
MR_def_label(set_bbbtree__intersect_r_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_bbbtree__intersect_r_4_0_i28);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0);
MR_def_label(set_bbbtree__intersect_r_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("set_bbbtree.concat3.2", 21);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(set_bbbtree__intersect_r_4_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module65)
	MR_init_entry1(set_bbbtree__intersect_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__intersect_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'intersect'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__intersect_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 5;
	MR_np_tailcall_ent(set_bbbtree__intersect_r_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module66)
	MR_init_entry1(fn__set_bbbtree__intersect_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_bbbtree__intersect_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'intersect'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_bbbtree__intersect_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 5;
	MR_np_tailcall_ent(set_bbbtree__intersect_r_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module67)
	MR_init_entry1(set_bbbtree__power_intersect_r2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__power_intersect_r2_4_0);
	MR_init_label6(set_bbbtree__power_intersect_r2_4_0,25,3,13,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'power_intersect_r2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(set_bbbtree__power_intersect_r2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(set_bbbtree__power_intersect_r2_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__power_intersect_r2_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(set_bbbtree__power_intersect_r2_4_0_i13);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(set_bbbtree__power_intersect_r2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(set_bbbtree__power_intersect_r2_4_0_i7);
	}
MR_def_label(set_bbbtree__power_intersect_r2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(set_bbbtree__power_intersect_r2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_r2, 3);
	MR_sv(4) = MR_tfield(1, MR_r2, 2);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(set_bbbtree__intersect_r_4_0,
		set_bbbtree__power_intersect_r2_4_0_i8);
MR_def_label(set_bbbtree__power_intersect_r2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_localcall_lab(set_bbbtree__power_intersect_r2_4_0,
		set_bbbtree__power_intersect_r2_4_0_i9);
MR_def_label(set_bbbtree__power_intersect_r2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(set_bbbtree__power_intersect_r2_4_0_i25);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module68)
	MR_init_entry1(set_bbbtree__power_intersect_r_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__power_intersect_r_3_0);
	MR_init_label2(set_bbbtree__power_intersect_r_3_0,16,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'power_intersect_r'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__power_intersect_r_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__power_intersect_r_3_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(set_bbbtree__power_intersect_r_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 3);
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r2, 2);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(set_bbbtree__power_intersect_r2_4_0,
		set_bbbtree__power_intersect_r_3_0_i4);
MR_def_label(set_bbbtree__power_intersect_r_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(set_bbbtree__power_intersect_r2_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module69)
	MR_init_entry1(set_bbbtree__power_intersect_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__power_intersect_2_0);
	MR_init_label2(set_bbbtree__power_intersect_2_0,16,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'power_intersect'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__power_intersect_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_bbbtree__power_intersect_2_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(set_bbbtree__power_intersect_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r2, 2);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = (MR_Integer) 5;
	}
	MR_np_call_localret_ent(set_bbbtree__power_intersect_r2_4_0,
		set_bbbtree__power_intersect_2_0_i4);
MR_def_label(set_bbbtree__power_intersect_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 5;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(set_bbbtree__power_intersect_r2_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module70)
	MR_init_entry1(fn__set_bbbtree__power_intersect_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_bbbtree__power_intersect_1_0);
	MR_init_label2(fn__set_bbbtree__power_intersect_1_0,16,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'power_intersect'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_bbbtree__power_intersect_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__set_bbbtree__power_intersect_1_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__set_bbbtree__power_intersect_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r2, 2);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = (MR_Integer) 5;
	}
	MR_np_call_localret_ent(set_bbbtree__power_intersect_r2_4_0,
		fn__set_bbbtree__power_intersect_1_0_i4);
MR_def_label(fn__set_bbbtree__power_intersect_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 5;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(set_bbbtree__power_intersect_r2_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module71)
	MR_init_entry1(fn__set_bbbtree__intersect_list_r_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_bbbtree__intersect_list_r_3_0);
	MR_init_label3(fn__set_bbbtree__intersect_list_r_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'intersect_list_r'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_bbbtree__intersect_list_r_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__set_bbbtree__intersect_list_r_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__set_bbbtree__intersect_list_r_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(fn__set_bbbtree__intersect_list_r_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r3, 1);
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(set_bbbtree__intersect_r_4_0,
		fn__set_bbbtree__intersect_list_r_3_0_i4);
MR_def_label(fn__set_bbbtree__intersect_list_r_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__set_bbbtree__intersect_list_r_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module72)
	MR_init_entry1(fn__set_bbbtree__intersect_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_bbbtree__intersect_list_1_0);
	MR_init_label1(fn__set_bbbtree__intersect_list_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'intersect_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_bbbtree__intersect_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__set_bbbtree__intersect_list_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__set_bbbtree__intersect_list_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = (MR_Integer) 5;
	MR_np_tailcall_ent(fn__set_bbbtree__intersect_list_r_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module73)
	MR_init_entry1(fn__set_bbbtree__difference_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_bbbtree__difference_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'difference'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_bbbtree__difference_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 5;
	MR_np_tailcall_ent(set_bbbtree__difference_r_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module74)
	MR_init_entry1(set_bbbtree__superset_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__superset_2_0);
	MR_init_label2(set_bbbtree__superset_2_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'superset'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__superset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 5;
	}
	MR_np_call_localret_ent(set_bbbtree__difference_r_4_0,
		set_bbbtree__superset_2_0_i2);
MR_def_label(set_bbbtree__superset_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(set_bbbtree__superset_2_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(set_bbbtree__superset_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module75)
	MR_init_entry1(fn__set_bbbtree__fold_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_bbbtree__fold_3_0);
	MR_init_label1(fn__set_bbbtree__fold_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_bbbtree__fold_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		fn__set_bbbtree__fold_3_0_i2);
MR_def_label(fn__set_bbbtree__fold_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(set_bbbtree_module76)
	MR_init_entry1(set_bbbtree__fold_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold_4_0);
	MR_init_label1(set_bbbtree__fold_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold_4_0_i2);
MR_def_label(set_bbbtree__fold_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_1);

MR_BEGIN_MODULE(set_bbbtree_module77)
	MR_init_entry1(set_bbbtree__fold_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold_4_1);
	MR_init_label1(set_bbbtree__fold_4_1,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold_4_1_i2);
MR_def_label(set_bbbtree__fold_4_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(set_bbbtree_module78)
	MR_init_entry1(set_bbbtree__fold_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold_4_2);
	MR_init_label1(set_bbbtree__fold_4_2,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold_4_2_i2);
MR_def_label(set_bbbtree__fold_4_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_3);

MR_BEGIN_MODULE(set_bbbtree_module79)
	MR_init_entry1(set_bbbtree__fold_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold_4_3);
	MR_init_label1(set_bbbtree__fold_4_3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold_4_3_i2);
MR_def_label(set_bbbtree__fold_4_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_4);

MR_BEGIN_MODULE(set_bbbtree_module80)
	MR_init_entry1(set_bbbtree__fold_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold_4_4);
	MR_init_label1(set_bbbtree__fold_4_4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold_4_4_i2);
MR_def_label(set_bbbtree__fold_4_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_5);

MR_BEGIN_MODULE(set_bbbtree_module81)
	MR_init_entry1(set_bbbtree__fold_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold_4_5);
	MR_init_label1(set_bbbtree__fold_4_5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold_4_5_i2);
MR_def_label(set_bbbtree__fold_4_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(set_bbbtree_module82)
	MR_init_entry1(set_bbbtree__fold2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold2_6_0);
	MR_init_label1(set_bbbtree__fold2_6_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r2 = MR_r5;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold2_6_0_i2);
MR_def_label(set_bbbtree__fold2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_1);

MR_BEGIN_MODULE(set_bbbtree_module83)
	MR_init_entry1(set_bbbtree__fold2_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold2_6_1);
	MR_init_label1(set_bbbtree__fold2_6_1,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold2'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold2_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r2 = MR_r5;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold2_6_1_i2);
MR_def_label(set_bbbtree__fold2_6_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl2_6_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_2);

MR_BEGIN_MODULE(set_bbbtree_module84)
	MR_init_entry1(set_bbbtree__fold2_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold2_6_2);
	MR_init_label1(set_bbbtree__fold2_6_2,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold2'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold2_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r2 = MR_r5;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold2_6_2_i2);
MR_def_label(set_bbbtree__fold2_6_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl2_6_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_4);

MR_BEGIN_MODULE(set_bbbtree_module85)
	MR_init_entry1(set_bbbtree__fold2_6_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold2_6_3);
	MR_init_label1(set_bbbtree__fold2_6_3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold2'/6 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold2_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r2 = MR_r5;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold2_6_3_i2);
MR_def_label(set_bbbtree__fold2_6_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl2_6_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_5);

MR_BEGIN_MODULE(set_bbbtree_module86)
	MR_init_entry1(set_bbbtree__fold2_6_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold2_6_4);
	MR_init_label1(set_bbbtree__fold2_6_4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold2'/6 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold2_6_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r2 = MR_r5;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold2_6_4_i2);
MR_def_label(set_bbbtree__fold2_6_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl2_6_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_6);

MR_BEGIN_MODULE(set_bbbtree_module87)
	MR_init_entry1(set_bbbtree__fold2_6_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold2_6_5);
	MR_init_label1(set_bbbtree__fold2_6_5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold2'/6 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold2_6_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r2 = MR_r5;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold2_6_5_i2);
MR_def_label(set_bbbtree__fold2_6_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__foldl2_6_6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl3_8_0);

MR_BEGIN_MODULE(set_bbbtree_module88)
	MR_init_entry1(set_bbbtree__fold3_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold3_8_0);
	MR_init_label1(set_bbbtree__fold3_8_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold3'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold3_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r2 = MR_r6;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold3_8_0_i2);
MR_def_label(set_bbbtree__fold3_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(list__foldl3_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl3_8_1);

MR_BEGIN_MODULE(set_bbbtree_module89)
	MR_init_entry1(set_bbbtree__fold3_8_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold3_8_1);
	MR_init_label1(set_bbbtree__fold3_8_1,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold3'/8 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold3_8_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r2 = MR_r6;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold3_8_1_i2);
MR_def_label(set_bbbtree__fold3_8_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(list__foldl3_8_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl3_8_2);

MR_BEGIN_MODULE(set_bbbtree_module90)
	MR_init_entry1(set_bbbtree__fold3_8_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold3_8_2);
	MR_init_label1(set_bbbtree__fold3_8_2,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold3'/8 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold3_8_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r2 = MR_r6;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold3_8_2_i2);
MR_def_label(set_bbbtree__fold3_8_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(list__foldl3_8_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl3_8_3);

MR_BEGIN_MODULE(set_bbbtree_module91)
	MR_init_entry1(set_bbbtree__fold3_8_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold3_8_3);
	MR_init_label1(set_bbbtree__fold3_8_3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold3'/8 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold3_8_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r2 = MR_r6;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold3_8_3_i2);
MR_def_label(set_bbbtree__fold3_8_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(list__foldl3_8_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl3_8_4);

MR_BEGIN_MODULE(set_bbbtree_module92)
	MR_init_entry1(set_bbbtree__fold3_8_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold3_8_4);
	MR_init_label1(set_bbbtree__fold3_8_4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold3'/8 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold3_8_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r2 = MR_r6;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold3_8_4_i2);
MR_def_label(set_bbbtree__fold3_8_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(list__foldl3_8_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl3_8_5);

MR_BEGIN_MODULE(set_bbbtree_module93)
	MR_init_entry1(set_bbbtree__fold3_8_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold3_8_5);
	MR_init_label1(set_bbbtree__fold3_8_5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold3'/8 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold3_8_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r2 = MR_r6;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold3_8_5_i2);
MR_def_label(set_bbbtree__fold3_8_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(list__foldl3_8_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl4_10_0);

MR_BEGIN_MODULE(set_bbbtree_module94)
	MR_init_entry1(set_bbbtree__fold4_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold4_10_0);
	MR_init_label1(set_bbbtree__fold4_10_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold4'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold4_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r11;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_r2 = MR_r7;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold4_10_0_i2);
MR_def_label(set_bbbtree__fold4_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(list__foldl4_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl4_10_1);

MR_BEGIN_MODULE(set_bbbtree_module95)
	MR_init_entry1(set_bbbtree__fold4_10_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold4_10_1);
	MR_init_label1(set_bbbtree__fold4_10_1,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold4'/10 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold4_10_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r11;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_r2 = MR_r7;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold4_10_1_i2);
MR_def_label(set_bbbtree__fold4_10_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(list__foldl4_10_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl4_10_2);

MR_BEGIN_MODULE(set_bbbtree_module96)
	MR_init_entry1(set_bbbtree__fold4_10_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold4_10_2);
	MR_init_label1(set_bbbtree__fold4_10_2,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold4'/10 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold4_10_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r11;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_r2 = MR_r7;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold4_10_2_i2);
MR_def_label(set_bbbtree__fold4_10_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(list__foldl4_10_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl4_10_5);

MR_BEGIN_MODULE(set_bbbtree_module97)
	MR_init_entry1(set_bbbtree__fold4_10_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold4_10_3);
	MR_init_label1(set_bbbtree__fold4_10_3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold4'/10 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold4_10_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r11;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_r2 = MR_r7;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold4_10_3_i2);
MR_def_label(set_bbbtree__fold4_10_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(list__foldl4_10_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl4_10_6);

MR_BEGIN_MODULE(set_bbbtree_module98)
	MR_init_entry1(set_bbbtree__fold4_10_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold4_10_4);
	MR_init_label1(set_bbbtree__fold4_10_4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold4'/10 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold4_10_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r11;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_r2 = MR_r7;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold4_10_4_i2);
MR_def_label(set_bbbtree__fold4_10_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(list__foldl4_10_6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl4_10_7);

MR_BEGIN_MODULE(set_bbbtree_module99)
	MR_init_entry1(set_bbbtree__fold4_10_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold4_10_5);
	MR_init_label1(set_bbbtree__fold4_10_5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold4'/10 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold4_10_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r8;
	MR_sv(3) = MR_r9;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r11;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_r2 = MR_r7;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold4_10_5_i2);
MR_def_label(set_bbbtree__fold4_10_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(list__foldl4_10_7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl5_12_0);

MR_BEGIN_MODULE(set_bbbtree_module100)
	MR_init_entry1(set_bbbtree__fold5_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold5_12_0);
	MR_init_label1(set_bbbtree__fold5_12_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold5'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold5_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r7;
	MR_sv(2) = MR_r9;
	MR_sv(3) = MR_r10;
	MR_sv(4) = MR_r11;
	MR_sv(5) = MR_r12;
	MR_sv(6) = MR_r13;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_sv(12) = MR_r6;
	MR_r2 = MR_r8;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold5_12_0_i2);
MR_def_label(set_bbbtree__fold5_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_r11 = MR_sv(4);
	MR_r12 = MR_sv(5);
	MR_r13 = MR_sv(6);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(list__foldl5_12_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl5_12_1);

MR_BEGIN_MODULE(set_bbbtree_module101)
	MR_init_entry1(set_bbbtree__fold5_12_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold5_12_1);
	MR_init_label1(set_bbbtree__fold5_12_1,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold5'/12 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold5_12_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r7;
	MR_sv(2) = MR_r9;
	MR_sv(3) = MR_r10;
	MR_sv(4) = MR_r11;
	MR_sv(5) = MR_r12;
	MR_sv(6) = MR_r13;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_sv(12) = MR_r6;
	MR_r2 = MR_r8;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold5_12_1_i2);
MR_def_label(set_bbbtree__fold5_12_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_r11 = MR_sv(4);
	MR_r12 = MR_sv(5);
	MR_r13 = MR_sv(6);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(list__foldl5_12_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl5_12_2);

MR_BEGIN_MODULE(set_bbbtree_module102)
	MR_init_entry1(set_bbbtree__fold5_12_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold5_12_2);
	MR_init_label1(set_bbbtree__fold5_12_2,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold5'/12 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold5_12_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r7;
	MR_sv(2) = MR_r9;
	MR_sv(3) = MR_r10;
	MR_sv(4) = MR_r11;
	MR_sv(5) = MR_r12;
	MR_sv(6) = MR_r13;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_sv(12) = MR_r6;
	MR_r2 = MR_r8;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold5_12_2_i2);
MR_def_label(set_bbbtree__fold5_12_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_r11 = MR_sv(4);
	MR_r12 = MR_sv(5);
	MR_r13 = MR_sv(6);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(list__foldl5_12_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl5_12_3);

MR_BEGIN_MODULE(set_bbbtree_module103)
	MR_init_entry1(set_bbbtree__fold5_12_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold5_12_3);
	MR_init_label1(set_bbbtree__fold5_12_3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold5'/12 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold5_12_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r7;
	MR_sv(2) = MR_r9;
	MR_sv(3) = MR_r10;
	MR_sv(4) = MR_r11;
	MR_sv(5) = MR_r12;
	MR_sv(6) = MR_r13;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_sv(12) = MR_r6;
	MR_r2 = MR_r8;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold5_12_3_i2);
MR_def_label(set_bbbtree__fold5_12_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_r11 = MR_sv(4);
	MR_r12 = MR_sv(5);
	MR_r13 = MR_sv(6);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(list__foldl5_12_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl5_12_4);

MR_BEGIN_MODULE(set_bbbtree_module104)
	MR_init_entry1(set_bbbtree__fold5_12_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold5_12_4);
	MR_init_label1(set_bbbtree__fold5_12_4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold5'/12 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold5_12_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r7;
	MR_sv(2) = MR_r9;
	MR_sv(3) = MR_r10;
	MR_sv(4) = MR_r11;
	MR_sv(5) = MR_r12;
	MR_sv(6) = MR_r13;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_sv(12) = MR_r6;
	MR_r2 = MR_r8;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold5_12_4_i2);
MR_def_label(set_bbbtree__fold5_12_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_r11 = MR_sv(4);
	MR_r12 = MR_sv(5);
	MR_r13 = MR_sv(6);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(list__foldl5_12_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl5_12_5);

MR_BEGIN_MODULE(set_bbbtree_module105)
	MR_init_entry1(set_bbbtree__fold5_12_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold5_12_5);
	MR_init_label1(set_bbbtree__fold5_12_5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold5'/12 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold5_12_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r7;
	MR_sv(2) = MR_r9;
	MR_sv(3) = MR_r10;
	MR_sv(4) = MR_r11;
	MR_sv(5) = MR_r12;
	MR_sv(6) = MR_r13;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_sv(12) = MR_r6;
	MR_r2 = MR_r8;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold5_12_5_i2);
MR_def_label(set_bbbtree__fold5_12_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_r11 = MR_sv(4);
	MR_r12 = MR_sv(5);
	MR_r13 = MR_sv(6);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(list__foldl5_12_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl6_14_0);

MR_BEGIN_MODULE(set_bbbtree_module106)
	MR_init_entry1(set_bbbtree__fold6_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold6_14_0);
	MR_init_label1(set_bbbtree__fold6_14_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold6'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold6_14_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r8;
	MR_sv(2) = MR_r10;
	MR_sv(3) = MR_r11;
	MR_sv(4) = MR_r12;
	MR_sv(5) = MR_r13;
	MR_sv(6) = MR_r14;
	MR_sv(7) = MR_r15;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_sv(14) = MR_r7;
	MR_r2 = MR_r9;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold6_14_0_i2);
MR_def_label(set_bbbtree__fold6_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(2);
	MR_r11 = MR_sv(3);
	MR_r12 = MR_sv(4);
	MR_r13 = MR_sv(5);
	MR_r14 = MR_sv(6);
	MR_r15 = MR_sv(7);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(list__foldl6_14_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl6_14_1);

MR_BEGIN_MODULE(set_bbbtree_module107)
	MR_init_entry1(set_bbbtree__fold6_14_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold6_14_1);
	MR_init_label1(set_bbbtree__fold6_14_1,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold6'/14 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold6_14_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r8;
	MR_sv(2) = MR_r10;
	MR_sv(3) = MR_r11;
	MR_sv(4) = MR_r12;
	MR_sv(5) = MR_r13;
	MR_sv(6) = MR_r14;
	MR_sv(7) = MR_r15;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_sv(14) = MR_r7;
	MR_r2 = MR_r9;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold6_14_1_i2);
MR_def_label(set_bbbtree__fold6_14_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(2);
	MR_r11 = MR_sv(3);
	MR_r12 = MR_sv(4);
	MR_r13 = MR_sv(5);
	MR_r14 = MR_sv(6);
	MR_r15 = MR_sv(7);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(list__foldl6_14_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl6_14_2);

MR_BEGIN_MODULE(set_bbbtree_module108)
	MR_init_entry1(set_bbbtree__fold6_14_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold6_14_2);
	MR_init_label1(set_bbbtree__fold6_14_2,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold6'/14 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold6_14_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r8;
	MR_sv(2) = MR_r10;
	MR_sv(3) = MR_r11;
	MR_sv(4) = MR_r12;
	MR_sv(5) = MR_r13;
	MR_sv(6) = MR_r14;
	MR_sv(7) = MR_r15;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_sv(14) = MR_r7;
	MR_r2 = MR_r9;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold6_14_2_i2);
MR_def_label(set_bbbtree__fold6_14_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(2);
	MR_r11 = MR_sv(3);
	MR_r12 = MR_sv(4);
	MR_r13 = MR_sv(5);
	MR_r14 = MR_sv(6);
	MR_r15 = MR_sv(7);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(list__foldl6_14_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl6_14_5);

MR_BEGIN_MODULE(set_bbbtree_module109)
	MR_init_entry1(set_bbbtree__fold6_14_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold6_14_3);
	MR_init_label1(set_bbbtree__fold6_14_3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold6'/14 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold6_14_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r8;
	MR_sv(2) = MR_r10;
	MR_sv(3) = MR_r11;
	MR_sv(4) = MR_r12;
	MR_sv(5) = MR_r13;
	MR_sv(6) = MR_r14;
	MR_sv(7) = MR_r15;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_sv(14) = MR_r7;
	MR_r2 = MR_r9;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold6_14_3_i2);
MR_def_label(set_bbbtree__fold6_14_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(2);
	MR_r11 = MR_sv(3);
	MR_r12 = MR_sv(4);
	MR_r13 = MR_sv(5);
	MR_r14 = MR_sv(6);
	MR_r15 = MR_sv(7);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(list__foldl6_14_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl6_14_6);

MR_BEGIN_MODULE(set_bbbtree_module110)
	MR_init_entry1(set_bbbtree__fold6_14_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold6_14_4);
	MR_init_label1(set_bbbtree__fold6_14_4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold6'/14 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold6_14_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r8;
	MR_sv(2) = MR_r10;
	MR_sv(3) = MR_r11;
	MR_sv(4) = MR_r12;
	MR_sv(5) = MR_r13;
	MR_sv(6) = MR_r14;
	MR_sv(7) = MR_r15;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_sv(14) = MR_r7;
	MR_r2 = MR_r9;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold6_14_4_i2);
MR_def_label(set_bbbtree__fold6_14_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(2);
	MR_r11 = MR_sv(3);
	MR_r12 = MR_sv(4);
	MR_r13 = MR_sv(5);
	MR_r14 = MR_sv(6);
	MR_r15 = MR_sv(7);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(list__foldl6_14_6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl6_14_7);

MR_BEGIN_MODULE(set_bbbtree_module111)
	MR_init_entry1(set_bbbtree__fold6_14_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__fold6_14_5);
	MR_init_label1(set_bbbtree__fold6_14_5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold6'/14 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__fold6_14_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r8;
	MR_sv(2) = MR_r10;
	MR_sv(3) = MR_r11;
	MR_sv(4) = MR_r12;
	MR_sv(5) = MR_r13;
	MR_sv(6) = MR_r14;
	MR_sv(7) = MR_r15;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_sv(14) = MR_r7;
	MR_r2 = MR_r9;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__fold6_14_5_i2);
MR_def_label(set_bbbtree__fold6_14_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(2);
	MR_r11 = MR_sv(3);
	MR_r12 = MR_sv(4);
	MR_r13 = MR_sv(5);
	MR_r14 = MR_sv(6);
	MR_r15 = MR_sv(7);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(list__foldl6_14_7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(set_bbbtree_module112)
	MR_init_entry1(fn__set_bbbtree__map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_bbbtree__map_2_0);
	MR_init_label2(fn__set_bbbtree__map_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_bbbtree__map_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		fn__set_bbbtree__map_2_0_i2);
MR_def_label(fn__set_bbbtree__map_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__set_bbbtree__map_2_0_i3);
MR_def_label(fn__set_bbbtree__map_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 5;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(set_bbbtree__insert_list_r_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module113)
	MR_init_entry1(fn__set_bbbtree__filter_map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_bbbtree__filter_map_2_0);
	MR_init_label2(fn__set_bbbtree__filter_map_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_bbbtree__filter_map_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		fn__set_bbbtree__filter_map_2_0_i2);
MR_def_label(fn__set_bbbtree__filter_map_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,
		fn__set_bbbtree__filter_map_2_0_i3);
MR_def_label(fn__set_bbbtree__filter_map_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 5;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(set_bbbtree__insert_list_r_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_3_0);

MR_BEGIN_MODULE(set_bbbtree_module114)
	MR_init_entry1(set_bbbtree__filter_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__filter_3_0);
	MR_init_label2(set_bbbtree__filter_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__filter_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__filter_3_0_i2);
MR_def_label(set_bbbtree__filter_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		set_bbbtree__filter_3_0_i3);
MR_def_label(set_bbbtree__filter_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 5;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(set_bbbtree__insert_list_r_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_4_0);

MR_BEGIN_MODULE(set_bbbtree_module115)
	MR_init_entry1(set_bbbtree__filter_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_bbbtree__filter_4_0);
	MR_init_label4(set_bbbtree__filter_4_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_bbbtree__filter_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_bbbtree__to_sorted_list2_3_1,
		set_bbbtree__filter_4_0_i2);
MR_def_label(set_bbbtree__filter_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		set_bbbtree__filter_4_0_i3);
MR_def_label(set_bbbtree__filter_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 5;
	}
	MR_np_call_localret_ent(set_bbbtree__insert_list_r_4_0,
		set_bbbtree__filter_4_0_i4);
MR_def_label(set_bbbtree__filter_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 5;
	}
	MR_np_call_localret_ent(set_bbbtree__insert_list_r_4_0,
		set_bbbtree__filter_4_0_i5);
MR_def_label(set_bbbtree__filter_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module116)
	MR_init_entry1(__Unify___set_bbbtree__set_bbbtree_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___set_bbbtree__set_bbbtree_1_0);
	MR_init_label6(__Unify___set_bbbtree__set_bbbtree_1_0,40,16,5,7,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___set_bbbtree__set_bbbtree_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(__Unify___set_bbbtree__set_bbbtree_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___set_bbbtree__set_bbbtree_1_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(7) = MR_r1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___set_bbbtree__set_bbbtree_1_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(__Unify___set_bbbtree__set_bbbtree_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(__Unify___set_bbbtree__set_bbbtree_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___set_bbbtree__set_bbbtree_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 3);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___set_bbbtree__set_bbbtree_1_0_i7);
MR_def_label(__Unify___set_bbbtree__set_bbbtree_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_bbbtree__set_bbbtree_1_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___set_bbbtree__set_bbbtree_1_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_localcall_lab(__Unify___set_bbbtree__set_bbbtree_1_0,
		__Unify___set_bbbtree__set_bbbtree_1_0_i9);
MR_def_label(__Unify___set_bbbtree__set_bbbtree_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_bbbtree__set_bbbtree_1_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(__Unify___set_bbbtree__set_bbbtree_1_0_i40);
MR_def_label(__Unify___set_bbbtree__set_bbbtree_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module117)
	MR_init_entry1(__Compare___set_bbbtree__set_bbbtree_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___set_bbbtree__set_bbbtree_1_0);
	MR_init_label10(__Compare___set_bbbtree__set_bbbtree_1_0,74,42,7,5,9,11,16,17,19,23)
	MR_init_label1(__Compare___set_bbbtree__set_bbbtree_1_0,79)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___set_bbbtree__set_bbbtree_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(__Compare___set_bbbtree__set_bbbtree_1_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___set_bbbtree__set_bbbtree_1_0_i42);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___set_bbbtree__set_bbbtree_1_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___set_bbbtree__set_bbbtree_1_0_i7);
	}
MR_def_label(__Compare___set_bbbtree__set_bbbtree_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(8);
MR_def_label(__Compare___set_bbbtree__set_bbbtree_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(8);
MR_def_label(__Compare___set_bbbtree__set_bbbtree_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___set_bbbtree__set_bbbtree_1_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(8);
MR_def_label(__Compare___set_bbbtree__set_bbbtree_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(7) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(6) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(5) = MR_tfield(1, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_sv(3) = MR_tfield(1, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___set_bbbtree__set_bbbtree_1_0_i11);
MR_def_label(__Compare___set_bbbtree__set_bbbtree_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_bbbtree__set_bbbtree_1_0_i79);
	}
	if (((MR_Integer) MR_sv(7) >= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(__Compare___set_bbbtree__set_bbbtree_1_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___set_bbbtree__set_bbbtree_1_0_i19);
MR_def_label(__Compare___set_bbbtree__set_bbbtree_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(7) != MR_sv(1))) {
		MR_GOTO_LAB(__Compare___set_bbbtree__set_bbbtree_1_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___set_bbbtree__set_bbbtree_1_0_i19);
MR_def_label(__Compare___set_bbbtree__set_bbbtree_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___set_bbbtree__set_bbbtree_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_bbbtree__set_bbbtree_1_0_i79);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(__Compare___set_bbbtree__set_bbbtree_1_0,
		__Compare___set_bbbtree__set_bbbtree_1_0_i23);
MR_def_label(__Compare___set_bbbtree__set_bbbtree_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_bbbtree__set_bbbtree_1_0_i79);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(__Compare___set_bbbtree__set_bbbtree_1_0_i74);
MR_def_label(__Compare___set_bbbtree__set_bbbtree_1_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module118)
	MR_init_entry1(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0);
	MR_init_label10(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0,3,6,5,2,11,9,22,20,31,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__sorted_list_to_set_len2__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,3)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0_i2);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (((MR_Integer) MR_r2 - ((MR_Integer) MR_r2 / (MR_Integer) 2)) - (MR_Integer) 1);
	MR_r2 = ((MR_Integer) MR_r2 / (MR_Integer) 2);
	MR_np_localcall_lab(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0,
		f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0_i3);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0,
		f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0_i6);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 3) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("set_bbbtree.sorted_list_to_set_len2.1", 37);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0_i9);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0_i11);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0_i11);
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr3, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr3, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr3, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr4, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(1, MR_tempr4, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr4, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr4, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr5, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_tempr5, 1) = MR_r2;
	MR_tfield(1, MR_tempr5, 2) = MR_tempr3;
	MR_tfield(1, MR_tempr5, 3) = MR_tempr4;
	MR_r1 = MR_tfield(1, MR_tempr2, 1);
	MR_r2 = MR_tempr5;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("set_bbbtree.sorted_list_to_set_len2.2", 37);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0_i20);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0_i22);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr3, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_tempr3, 1) = MR_r2;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tempr3;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("set_bbbtree.sorted_list_to_set_len2.3", 37);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0_i29);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("set_bbbtree.sorted_list_to_set_len2.4", 37);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module119)
	MR_init_entry1(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0);
	MR_init_label3(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0,3,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__build_node__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0_i3);
	}
	MR_r4 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0_i2);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r2, 1);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (((MR_Integer) 1 + (MR_Integer) MR_r4) + (MR_Integer) 0);
	MR_tfield(1, MR_tempr1, 2) = MR_r2;
	MR_tfield(1, MR_tempr1, 3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (((MR_Integer) 1 + (MR_Integer) MR_r4) + (MR_Integer) MR_tfield(1, MR_tempr2, 1));
	MR_tfield(1, MR_tempr1, 2) = MR_r2;
	MR_tfield(1, MR_tempr1, 3) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module120)
	MR_init_entry1(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0);
	MR_init_label2(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__single_rot_r__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 2);
	MR_r2 = MR_tfield(1, MR_r2, 3);
	MR_np_call_localret_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0,
		f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0_i4);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0);
	}
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("set_bbbtree.single_rot_r", 24);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module121)
	MR_init_entry1(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0);
	MR_init_label4(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0,6,7,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__double_rot_r__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 3);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0_i5);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 2);
	MR_r3 = MR_tfield(1, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0,
		f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0_i6);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0,
		f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0_i7);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0);
	}
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("set_bbbtree.double_rot_r.2", 26);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("set_bbbtree.double_rot_r.1", 26);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module122)
	MR_init_entry1(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0);
	MR_init_label10(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,3,2,5,4,119,6,12,11,14,13)
	MR_init_label10(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,16,15,20,21,19,10,8,30,29,32)
	MR_init_label3(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,31,124,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__balance__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0_i3);
	}
	MR_r5 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0_i2);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(1, MR_r2, 1);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0_i5);
	}
	MR_r6 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0_i4);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_tfield(1, MR_r3, 1);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r5 + (MR_Integer) MR_r6);
	if (MR_INT_GE(MR_tempr1,2)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0_i6);
	}
	}
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = ((MR_Integer) MR_r4 * (MR_Integer) MR_r5);
	if (((MR_Integer) MR_r6 <= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0_i8);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_tfield(1, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0_i12);
	}
	MR_r4 = MR_tfield(1, MR_tempr1, 3);
	MR_r5 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0_i11);
	}
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_tfield(1, MR_r3, 3);
	MR_r5 = MR_tfield(1, MR_tempr1, 1);
	}
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0_i14);
	}
	MR_r4 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0_i13);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_tfield(1, MR_tempr1, 1);
	}
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0_i15);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 3);
	MR_r3 = MR_tfield(1, MR_r3, 2);
	}
	MR_np_call_localret_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0,
		f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0_i16);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0);
	}
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r3, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0_i19);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 3);
	MR_r3 = MR_tfield(1, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0,
		f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0_i20);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0,
		f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0_i21);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_0);
	}
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("set_bbbtree.double_rot_l.2", 26);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("set_bbbtree.balance.1", 21);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = ((MR_Integer) MR_r4 * (MR_Integer) MR_r6);
	if (((MR_Integer) MR_r5 <= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0_i119);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0_i28);
	}
	MR_r4 = MR_tfield(1, MR_r2, 2);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0_i30);
	}
	MR_r4 = MR_tfield(1, MR_r2, 3);
	MR_r5 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0_i29);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_tfield(1, MR_r2, 3);
	MR_r5 = MR_tfield(1, MR_tempr1, 1);
	}
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0_i32);
	}
	MR_r4 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0_i31);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_tfield(1, MR_tempr1, 1);
	}
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0_i124);
	}
	MR_np_tailcall_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_0);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("set_bbbtree.balance.2", 21);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module123)
	MR_init_entry1(fn__f_115_101_116_95_98_98_98_116_114_101_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_115_101_116_95_98_98_98_116_114_101_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_115_101_116_95_98_98_98_116_114_101_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(set_bbbtree_module124)
	MR_init_entry1(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	MR_init_label3(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl__ho5__[1, 2, 4, 5, 6]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i4);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(set_bbbtree_module125)
	MR_init_entry1(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0);
	MR_init_label5(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,25,3,6,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__filter_map__ho6__[1, 2, 4, 5, 6]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0_i6);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,
		f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0_i8);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0_i25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_bbbtree_module126)
	MR_init_entry1(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_0);
	MR_init_label3(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl__ho8__[1, 2, 3, 4, 5, 6, 7, 9, 10, 11]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r4 = (MR_Integer) 5;
	MR_np_call_localret_ent(set_bbbtree__union_r_4_0,
		f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_0_i4);
MR_def_label(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_115_101_116_95_98_98_98_116_114_101_101_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__set_bbbtree_maybe_bunch_0(void)
{
	set_bbbtree_module0();
	set_bbbtree_module1();
	set_bbbtree_module2();
	set_bbbtree_module3();
	set_bbbtree_module4();
	set_bbbtree_module5();
	set_bbbtree_module6();
	set_bbbtree_module7();
	set_bbbtree_module8();
	set_bbbtree_module9();
	set_bbbtree_module10();
	set_bbbtree_module11();
	set_bbbtree_module12();
	set_bbbtree_module13();
	set_bbbtree_module14();
	set_bbbtree_module15();
	set_bbbtree_module16();
	set_bbbtree_module17();
	set_bbbtree_module18();
	set_bbbtree_module19();
	set_bbbtree_module20();
	set_bbbtree_module21();
	set_bbbtree_module22();
	set_bbbtree_module23();
	set_bbbtree_module24();
	set_bbbtree_module25();
	set_bbbtree_module26();
	set_bbbtree_module27();
	set_bbbtree_module28();
	set_bbbtree_module29();
	set_bbbtree_module30();
	set_bbbtree_module31();
	set_bbbtree_module32();
	set_bbbtree_module33();
	set_bbbtree_module34();
	set_bbbtree_module35();
	set_bbbtree_module36();
	set_bbbtree_module37();
	set_bbbtree_module38();
	set_bbbtree_module39();
}

static void mercury__set_bbbtree_maybe_bunch_1(void)
{
	set_bbbtree_module40();
	set_bbbtree_module41();
	set_bbbtree_module42();
	set_bbbtree_module43();
	set_bbbtree_module44();
	set_bbbtree_module45();
	set_bbbtree_module46();
	set_bbbtree_module47();
	set_bbbtree_module48();
	set_bbbtree_module49();
	set_bbbtree_module50();
	set_bbbtree_module51();
	set_bbbtree_module52();
	set_bbbtree_module53();
	set_bbbtree_module54();
	set_bbbtree_module55();
	set_bbbtree_module56();
	set_bbbtree_module57();
	set_bbbtree_module58();
	set_bbbtree_module59();
	set_bbbtree_module60();
	set_bbbtree_module61();
	set_bbbtree_module62();
	set_bbbtree_module63();
	set_bbbtree_module64();
	set_bbbtree_module65();
	set_bbbtree_module66();
	set_bbbtree_module67();
	set_bbbtree_module68();
	set_bbbtree_module69();
	set_bbbtree_module70();
	set_bbbtree_module71();
	set_bbbtree_module72();
	set_bbbtree_module73();
	set_bbbtree_module74();
	set_bbbtree_module75();
	set_bbbtree_module76();
	set_bbbtree_module77();
	set_bbbtree_module78();
	set_bbbtree_module79();
}

static void mercury__set_bbbtree_maybe_bunch_2(void)
{
	set_bbbtree_module80();
	set_bbbtree_module81();
	set_bbbtree_module82();
	set_bbbtree_module83();
	set_bbbtree_module84();
	set_bbbtree_module85();
	set_bbbtree_module86();
	set_bbbtree_module87();
	set_bbbtree_module88();
	set_bbbtree_module89();
	set_bbbtree_module90();
	set_bbbtree_module91();
	set_bbbtree_module92();
	set_bbbtree_module93();
	set_bbbtree_module94();
	set_bbbtree_module95();
	set_bbbtree_module96();
	set_bbbtree_module97();
	set_bbbtree_module98();
	set_bbbtree_module99();
	set_bbbtree_module100();
	set_bbbtree_module101();
	set_bbbtree_module102();
	set_bbbtree_module103();
	set_bbbtree_module104();
	set_bbbtree_module105();
	set_bbbtree_module106();
	set_bbbtree_module107();
	set_bbbtree_module108();
	set_bbbtree_module109();
	set_bbbtree_module110();
	set_bbbtree_module111();
	set_bbbtree_module112();
	set_bbbtree_module113();
	set_bbbtree_module114();
	set_bbbtree_module115();
	set_bbbtree_module116();
	set_bbbtree_module117();
	set_bbbtree_module118();
	set_bbbtree_module119();
}

static void mercury__set_bbbtree_maybe_bunch_3(void)
{
	set_bbbtree_module120();
	set_bbbtree_module121();
	set_bbbtree_module122();
	set_bbbtree_module123();
	set_bbbtree_module124();
	set_bbbtree_module125();
	set_bbbtree_module126();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__set_bbbtree__init(void);
void mercury__set_bbbtree__init_type_tables(void);
void mercury__set_bbbtree__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__set_bbbtree__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__set_bbbtree__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__set_bbbtree__init_threadscope_string_table(void);
#endif

void mercury__set_bbbtree__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__set_bbbtree_maybe_bunch_0();
	mercury__set_bbbtree_maybe_bunch_1();
	mercury__set_bbbtree_maybe_bunch_2();
	mercury__set_bbbtree_maybe_bunch_3();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_set_bbbtree__type_ctor_info_set_bbbtree_1,
		set_bbbtree__set_bbbtree_1_0);
	mercury__set_bbbtree__init_debugger();
}

void mercury__set_bbbtree__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_set_bbbtree__type_ctor_info_set_bbbtree_1);
	}
}


void mercury__set_bbbtree__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__set_bbbtree__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__set_bbbtree);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__set_bbbtree__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__set_bbbtree__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
