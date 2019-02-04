/*
** Automatically generated from `rtree.m'
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
INIT mercury__rtree__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "io.int2"
#include "io.mh"

#line 28 "rtree.c"
#line 150 "io.int2"
#include "string.mh"

#line 32 "rtree.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 36 "rtree.c"
#line 30 "time.int2"
#include "time.mh"

#line 40 "rtree.c"
#line 33 "array.int2"
#include "array.mh"

#line 44 "rtree.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 48 "rtree.c"
#line 59 "array.opt"
#include "stm_builtin.mh"

#line 52 "rtree.c"
#line 61 "array.opt"
#include "store.mh"

#line 56 "rtree.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "rtree.c"
#line 156 "io.opt"
#include "dir.mh"

#line 64 "rtree.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 68 "rtree.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 72 "rtree.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 76 "rtree.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 80 "rtree.c"
#line 4 "char.opt"
#include "char.mh"

#line 84 "rtree.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 88 "rtree.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 92 "rtree.c"
#line 129 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 96 "rtree.c"
#line 3 "float.opt"
#include "float.mh"

#line 100 "rtree.c"
#line 3 "math.opt"
#include "math.mh"

#line 104 "rtree.c"
#line 4 "int.opt"
#include "int.mh"

#line 108 "rtree.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "rtree.c"
#line 113 "rtree.c"
#include "rtree.mh"

#line 116 "rtree.c"
#line 117 "rtree.c"
#ifndef RTREE_DECL_GUARD
#define RTREE_DECL_GUARD

#line 121 "rtree.c"
#line 122 "rtree.c"

#endif
#line 125 "rtree.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_rtree__region__arity1__rtree__interval__arity0__[],
	mercury_data_base_typeclass_info_rtree__region__arity1__rtree__box__arity0__[],
	mercury_data_base_typeclass_info_rtree__region__arity1__rtree__box3d__arity0__[];

extern const MR_TypeClassDeclStruct
	mercury_data_rtree__type_class_decl_region_1;

extern const MR_TypeCtorInfo_Struct
	mercury_data_rtree__type_ctor_info_box_0,
	mercury_data_rtree__type_ctor_info_box3d_0,
	mercury_data_rtree__type_ctor_info_delete_info_2,
	mercury_data_rtree__type_ctor_info_interval_0,
	mercury_data_rtree__type_ctor_info_min_of_four_result_0,
	mercury_data_rtree__type_ctor_info_min_of_three_result_0,
	mercury_data_rtree__type_ctor_info_min_of_two_result_0,
	mercury_data_rtree__type_ctor_info_orphan_2,
	mercury_data_rtree__type_ctor_info_orphans_2,
	mercury_data_rtree__type_ctor_info_rtree_2;

extern const MR_TypeCtorInfo_Struct
	mercury_data_rtree__type_ctor_info_rtree_2_2;
MR_decl_label1(rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_0, 1)
MR_decl_label1(rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_0, 1)
MR_decl_label1(rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_0, 1)
MR_decl_label1(rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_0, 2)
MR_decl_label10(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0, 110,4,3,8,9,10,11,12,13,14)
MR_decl_label10(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0, 15,16,19,22,23,20,28,58,29,34)
MR_decl_label6(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0, 36,38,7,42,44,41)
MR_decl_label10(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0, 4,5,6,7,8,9,35,10,14,17)
MR_decl_label10(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0, 18,16,20,21,3,66,27,28,26,30)
MR_decl_label1(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0, 31)
MR_decl_label10(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0, 4,5,6,7,8,9,35,10,14,17)
MR_decl_label10(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0, 18,16,20,21,3,66,27,28,26,30)
MR_decl_label1(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0, 31)
MR_decl_label10(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0, 38,4,8,9,10,7,12,15,16,14)
MR_decl_label2(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0, 18,2)
MR_decl_label10(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0, 38,4,8,9,10,7,12,15,16,14)
MR_decl_label2(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0, 18,2)
MR_decl_label10(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0, 2,3,4,5,6,7,8,11,13,16)
MR_decl_label7(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0, 18,15,21,23,20,25,27)
MR_decl_label1(rtree__box3d_contains_2_0, 1)
MR_decl_label6(rtree__box3d_intersects_2_0, 2,3,4,5,6,1)
MR_decl_label1(rtree__box_contains_2_0, 1)
MR_decl_label4(rtree__box_intersects_2_0, 2,3,4,1)
MR_decl_label10(rtree__delete_4_0, 4,6,3,9,17,20,15,14,12,32)
MR_decl_label2(rtree__delete_4_0, 2,1)
MR_decl_label10(rtree__delete_2_7_0, 6,10,14,3,22,21,28,32,25,40)
MR_decl_label2(rtree__delete_2_7_0, 2,1)
MR_decl_label2(rtree__fold_4_0, 3,4)
MR_decl_label2(rtree__fold_4_1, 3,4)
MR_decl_label2(rtree__fold_4_2, 3,4)
MR_decl_label9(rtree__fold_2_4_0, 4,5,6,3,9,10,8,13,12)
MR_decl_label9(rtree__fold_2_4_1, 4,5,6,3,9,10,8,13,12)
MR_decl_label10(rtree__fold_2_4_2, 4,6,8,3,13,15,12,20,36,19)
MR_decl_label1(rtree__fold_2_4_2, 1)
MR_decl_label2(rtree__fold_subtree_5_0, 16,3)
MR_decl_label2(rtree__fold_subtree_5_1, 16,3)
MR_decl_label2(rtree__fold_subtree_5_2, 24,3)
MR_decl_label3(rtree__insert_4_0, 3,24,10)
MR_decl_label10(rtree__insert_tree_and_split_child2_9_0, 4,5,6,7,8,9,34,10,14,17)
MR_decl_label10(rtree__insert_tree_and_split_child2_9_0, 18,16,20,21,3,65,26,27,25,29)
MR_decl_label1(rtree__insert_tree_and_split_child2_9_0, 30)
MR_decl_label10(rtree__insert_tree_and_split_child3_11_0, 4,5,6,7,8,9,34,10,14,17)
MR_decl_label10(rtree__insert_tree_and_split_child3_11_0, 18,16,20,21,3,65,26,27,25,29)
MR_decl_label1(rtree__insert_tree_and_split_child3_11_0, 30)
MR_decl_label1(rtree__interval_contains_2_0, 1)
MR_decl_label1(rtree__interval_intersects_2_0, 2)
MR_decl_label4(rtree__map_values_3_0, 26,5,4,7)
MR_decl_label5(rtree__map_values_3_1, 41,5,4,8,1)
MR_decl_label10(rtree__map_values_2_3_0, 4,5,6,7,3,10,11,12,9,15)
MR_decl_label2(rtree__map_values_2_3_0, 16,14)
MR_decl_label10(rtree__map_values_2_3_1, 4,6,8,10,3,14,16,18,13,22)
MR_decl_label4(rtree__map_values_2_3_1, 24,21,2,1)
MR_decl_label3(rtree__map_values_key_2_4_0, 17,3,6)
MR_decl_label4(rtree__map_values_key_2_4_1, 26,3,7,1)
MR_decl_label3(rtree__maybe_limit_4_0, 2,4,1)
MR_decl_label4(rtree__reinsert_deleted_subtrees_4_0, 19,3,4,5)
MR_decl_label7(rtree__search_first_6_0, 4,6,7,9,3,44,1)
MR_decl_label10(rtree__search_first_2_6_0, 375,5,7,9,11,14,18,16,13,27)
MR_decl_label10(rtree__search_first_2_6_0, 26,8,37,41,39,36,50,49,4,61)
MR_decl_label10(rtree__search_first_2_6_0, 65,69,67,63,78,77,60,88,92,91)
MR_decl_label10(rtree__search_first_2_6_0, 87,99,3,107,106,112,116,120,118,114)
MR_decl_label10(rtree__search_first_2_6_0, 129,128,110,139,143,142,137,150,109,158)
MR_decl_label5(rtree__search_first_2_6_0, 162,161,156,169,1)
MR_decl_label10(rtree__search_first_2_better_solution_three_11_0, 4,7,9,11,8,14,13,16,19,6)
MR_decl_label9(rtree__search_first_2_better_solution_three_11_0, 23,25,22,28,27,30,33,2,38)
MR_decl_label10(rtree__search_first_2_better_solution_two_9_0, 4,7,9,8,12,15,6,20,19,23)
MR_decl_label9(rtree__search_first_2_better_solution_two_9_0, 26,61,2,32,31,35,38,53,37)
MR_decl_label6(rtree__search_first_2_find_better_solution_one_8_0, 3,2,6,9,15,8)
MR_decl_label10(rtree__search_first_2_find_better_solution_three_12_0, 3,2,4,6,5,7,9,8,10,13)
MR_decl_label2(rtree__search_first_2_find_better_solution_three_12_0, 15,11)
MR_decl_label8(rtree__search_first_2_find_better_solution_two_10_0, 3,5,2,8,7,10,13,11)
MR_decl_label10(rtree__search_first_2_four_choices_13_0, 3,2,4,6,5,7,9,8,10,12)
MR_decl_label2(rtree__search_first_2_four_choices_13_0, 15,18)
MR_decl_label9(rtree__search_first_2_three_choices_11_0, 3,5,4,2,8,7,10,12,15)
MR_decl_label3(rtree__search_first_2_try_first_from_four_12_0, 4,6,2)
MR_decl_label5(rtree__search_first_2_try_first_from_three_10_0, 4,6,2,8,7)
MR_decl_label3(rtree__search_first_2_try_first_from_two_8_0, 4,6,2)
MR_decl_label2(rtree__search_first_2_two_choices_9_0, 3,2)
MR_decl_label10(rtree__search_general_2_5_0, 4,5,6,3,11,9,8,16,17,15)
MR_decl_label1(rtree__search_general_2_5_0, 19)
MR_decl_label4(rtree__search_general_fold_5_0, 3,7,5,4)
MR_decl_label4(rtree__search_general_fold_5_1, 3,7,5,4)
MR_decl_label9(rtree__search_general_fold_2_5_0, 4,5,6,3,9,10,8,13,12)
MR_decl_label9(rtree__search_general_fold_2_5_1, 4,5,6,3,9,10,8,13,12)
MR_decl_label3(rtree__search_general_fold_subtree_6_0, 4,6,2)
MR_decl_label3(rtree__search_general_fold_subtree_6_1, 4,6,2)
MR_decl_label2(rtree__search_general_subtree_6_0, 4,2)
MR_decl_label5(rtree__try_deletion2_10_0, 2,4,7,12,1)
MR_decl_label6(rtree__try_deletion3_12_0, 2,4,7,12,13,1)
MR_decl_label8(rtree__try_deletion4_14_0, 2,4,10,7,13,14,15,1)
MR_decl_label10(fn__rtree__box3d_bounding_region_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label1(fn__rtree__box3d_bounding_region_2_0, 12)
MR_decl_label10(fn__rtree__box3d_bounding_region_volume_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label1(fn__rtree__box3d_bounding_region_volume_2_0, 12)
MR_decl_label7(fn__rtree__box_bounding_region_2_0, 2,3,4,5,6,7,8)
MR_decl_label7(fn__rtree__box_bounding_region_area_2_0, 2,3,4,5,6,7,8)
MR_decl_label7(fn__rtree__choose_subtree_3_0, 2,3,4,5,6,13,7)
MR_decl_label10(fn__rtree__choose_subtree_4_0, 2,3,4,5,6,7,8,30,9,13)
MR_decl_label7(fn__rtree__choose_subtree_4_0, 16,34,17,14,22,37,23)
MR_decl_label10(fn__rtree__insert_tree_5_0, 83,4,3,8,10,12,14,7,19,21)
MR_decl_label9(fn__rtree__insert_tree_5_0, 22,23,24,25,26,27,30,32,18)
MR_decl_label3(fn__rtree__interval_bounding_region_2_0, 2,3,4)
MR_decl_label3(fn__rtree__interval_bounding_region_length_2_0, 2,3,4)
MR_decl_label10(fn__rtree__search_contains_2_0, 24,3,6,4,12,13,14,11,66,19)
MR_decl_label3(fn__rtree__search_contains_2_0, 20,18,22)
MR_decl_label5(fn__rtree__search_general_3_0, 13,3,6,8,4)
MR_decl_label10(fn__rtree__search_intersects_2_0, 24,3,6,4,12,13,14,11,66,19)
MR_decl_label3(fn__rtree__search_intersects_2_0, 20,18,22)
MR_decl_label2(__Unify___rtree__box_0_0, 4,1)
MR_decl_label2(__Unify___rtree__box3d_0_0, 4,1)
MR_decl_label3(__Unify___rtree__delete_info_2_0, 18,5,1)
MR_decl_label2(__Unify___rtree__interval_0_0, 4,1)
MR_decl_label3(__Unify___rtree__orphan_2_0, 4,8,1)
MR_decl_label5(__Unify___rtree__rtree_2_0, 5,8,22,6,1)
MR_decl_label10(__Unify___rtree__rtree_2_2_0, 147,7,9,11,13,15,17,19,5,23)
MR_decl_label10(__Unify___rtree__rtree_2_2_0, 29,31,33,35,37,72,27,42,44,46)
MR_decl_label1(__Unify___rtree__rtree_2_2_0, 1)
MR_decl_label10(__Compare___rtree__box_0_0, 3,2,6,7,9,14,15,17,22,23)
MR_decl_label4(__Compare___rtree__box_0_0, 25,28,29,35)
MR_decl_label10(__Compare___rtree__box3d_0_0, 3,2,6,7,9,14,15,17,22,23)
MR_decl_label10(__Compare___rtree__box3d_0_0, 25,30,31,33,38,39,41,44,45,53)
MR_decl_label9(__Compare___rtree__delete_info_2_0, 3,2,7,5,11,14,15,17,59)
MR_decl_label8(__Compare___rtree__interval_0_0, 3,2,6,7,9,12,13,17)
MR_decl_label2(__Compare___rtree__min_of_four_result_0_0, 2,3)
MR_decl_label2(__Compare___rtree__min_of_three_result_0_0, 2,3)
MR_decl_label2(__Compare___rtree__min_of_two_result_0_0, 2,3)
MR_decl_label4(__Compare___rtree__orphan_2_0, 3,2,5,21)
MR_decl_label9(__Compare___rtree__rtree_2_0, 36,37,5,11,14,9,20,21,23)
MR_decl_label10(__Compare___rtree__rtree_2_2_0, 223,3,2,9,13,17,21,25,29,33)
MR_decl_label10(__Compare___rtree__rtree_2_2_0, 7,44,5,48,49,46,54,55,58,62)
MR_decl_label10(__Compare___rtree__rtree_2_2_0, 66,70,74,52,84,130,85,131,86,88)
MR_decl_label3(__Compare___rtree__rtree_2_2_0, 92,96,238)
MR_def_extern_entry(rtree__intersects_2_0)
MR_def_extern_entry(rtree__contains_2_0)
MR_def_extern_entry(fn__rtree__size_1_0)
MR_def_extern_entry(fn__rtree__bounding_region_2_0)
MR_def_extern_entry(fn__rtree__bounding_region_size_2_0)
MR_def_extern_entry(fn__rtree__init_0_0)
MR_def_extern_entry(rtree__is_empty_1_0)
MR_decl_static(fn__rtree__choose_subtree_3_0)
MR_decl_static(fn__rtree__choose_subtree_4_0)
MR_def_extern_entry(rtree__insert_4_0)
MR_def_extern_entry(fn__rtree__insert_3_0)
MR_decl_static(rtree__delete_2_7_0)
MR_decl_static(rtree__try_deletion2_10_0)
MR_decl_static(rtree__try_deletion3_12_0)
MR_decl_static(rtree__try_deletion4_14_0)
MR_decl_static(fn__rtree__insert_tree_5_0)
MR_decl_static(rtree__insert_tree_and_split_child2_9_0)
MR_decl_static(rtree__insert_tree_and_split_child3_11_0)
MR_decl_static(rtree__reinsert_deleted_subtrees_4_0)
MR_def_extern_entry(rtree__delete_4_0)
MR_def_extern_entry(fn__rtree__search_intersects_2_0)
MR_def_extern_entry(fn__rtree__search_contains_2_0)
MR_def_extern_entry(rtree__search_general_2_5_0)
MR_def_extern_entry(rtree__search_general_subtree_6_0)
MR_def_extern_entry(fn__rtree__search_general_3_0)
MR_def_extern_entry(rtree__maybe_limit_4_0)
MR_def_extern_entry(rtree__search_first_2_6_0)
MR_decl_static(rtree__search_first_2_two_choices_9_0)
MR_decl_static(rtree__search_first_2_three_choices_11_0)
MR_decl_static(rtree__search_first_2_four_choices_13_0)
MR_decl_static(rtree__search_first_2_try_first_from_four_12_0)
MR_decl_static(rtree__search_first_2_try_first_from_three_10_0)
MR_decl_static(rtree__search_first_2_try_first_from_two_8_0)
MR_decl_static(rtree__search_first_2_find_better_solution_one_8_0)
MR_decl_static(rtree__search_first_2_find_better_solution_two_10_0)
MR_decl_static(rtree__search_first_2_better_solution_two_9_0)
MR_decl_static(rtree__search_first_2_find_better_solution_three_12_0)
MR_decl_static(rtree__search_first_2_better_solution_three_11_0)
MR_def_extern_entry(rtree__search_first_6_0)
MR_def_extern_entry(rtree__search_general_fold_2_5_0)
MR_def_extern_entry(rtree__search_general_fold_2_5_1)
MR_def_extern_entry(rtree__search_general_fold_subtree_6_0)
MR_def_extern_entry(rtree__search_general_fold_subtree_6_1)
MR_def_extern_entry(rtree__search_general_fold_5_0)
MR_def_extern_entry(rtree__search_general_fold_5_1)
MR_def_extern_entry(rtree__fold_2_4_0)
MR_def_extern_entry(rtree__fold_2_4_1)
MR_def_extern_entry(rtree__fold_2_4_2)
MR_def_extern_entry(rtree__fold_subtree_5_0)
MR_def_extern_entry(rtree__fold_subtree_5_1)
MR_def_extern_entry(rtree__fold_subtree_5_2)
MR_def_extern_entry(rtree__fold_4_0)
MR_def_extern_entry(rtree__fold_4_1)
MR_def_extern_entry(rtree__fold_4_2)
MR_def_extern_entry(rtree__map_values_2_3_0)
MR_def_extern_entry(rtree__map_values_2_3_1)
MR_def_extern_entry(rtree__map_values_key_2_4_0)
MR_def_extern_entry(rtree__map_values_key_2_4_1)
MR_def_extern_entry(rtree__map_values_3_0)
MR_def_extern_entry(rtree__map_values_3_1)
MR_def_extern_entry(rtree__box3d_intersects_2_0)
MR_def_extern_entry(rtree__box3d_contains_2_0)
MR_def_extern_entry(fn__rtree__box3d_volume_1_0)
MR_def_extern_entry(fn__rtree__box3d_bounding_region_2_0)
MR_def_extern_entry(fn__rtree__box3d_bounding_region_volume_2_0)
MR_def_extern_entry(rtree__box_intersects_2_0)
MR_def_extern_entry(rtree__box_contains_2_0)
MR_def_extern_entry(fn__rtree__box_area_1_0)
MR_def_extern_entry(fn__rtree__box_bounding_region_2_0)
MR_def_extern_entry(fn__rtree__box_bounding_region_area_2_0)
MR_def_extern_entry(rtree__interval_intersects_2_0)
MR_def_extern_entry(rtree__interval_contains_2_0)
MR_def_extern_entry(fn__rtree__interval_length_1_0)
MR_def_extern_entry(fn__rtree__interval_bounding_region_2_0)
MR_def_extern_entry(fn__rtree__interval_bounding_region_length_2_0)
MR_def_extern_entry(__Unify___rtree__box_0_0)
MR_def_extern_entry(__Compare___rtree__box_0_0)
MR_def_extern_entry(__Unify___rtree__box3d_0_0)
MR_def_extern_entry(__Compare___rtree__box3d_0_0)
MR_def_extern_entry(__Unify___rtree__delete_info_2_0)
MR_def_extern_entry(__Compare___rtree__delete_info_2_0)
MR_def_extern_entry(__Unify___rtree__interval_0_0)
MR_def_extern_entry(__Compare___rtree__interval_0_0)
MR_def_extern_entry(__Unify___rtree__min_of_four_result_0_0)
MR_def_extern_entry(__Compare___rtree__min_of_four_result_0_0)
MR_def_extern_entry(__Unify___rtree__min_of_three_result_0_0)
MR_def_extern_entry(__Compare___rtree__min_of_three_result_0_0)
MR_def_extern_entry(__Unify___rtree__min_of_two_result_0_0)
MR_def_extern_entry(__Compare___rtree__min_of_two_result_0_0)
MR_def_extern_entry(__Unify___rtree__orphan_2_0)
MR_def_extern_entry(__Compare___rtree__orphan_2_0)
MR_def_extern_entry(__Unify___rtree__orphans_2_0)
MR_def_extern_entry(__Compare___rtree__orphans_2_0)
MR_def_extern_entry(__Unify___rtree__rtree_2_0)
MR_def_extern_entry(__Compare___rtree__rtree_2_0)
MR_def_extern_entry(__Unify___rtree__rtree_2_2_0)
MR_def_extern_entry(__Compare___rtree__rtree_2_2_0)
MR_def_extern_entry(rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_0)
MR_def_extern_entry(rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_0)
MR_def_extern_entry(fn__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_0)
MR_def_extern_entry(fn__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_0)
MR_def_extern_entry(fn__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_0)
MR_def_extern_entry(rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_0)
MR_def_extern_entry(rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_0)
MR_def_extern_entry(fn__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_0)
MR_def_extern_entry(fn__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_0)
MR_def_extern_entry(fn__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_0)
MR_def_extern_entry(rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2_2_0)
MR_def_extern_entry(rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_0)
MR_def_extern_entry(fn__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1_1_0)
MR_def_extern_entry(fn__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2_2_0)
MR_def_extern_entry(fn__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2_2_0)
MR_decl_static(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0)
MR_decl_static(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0)
MR_decl_static(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0)
MR_decl_static(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0)
MR_decl_static(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0)
MR_decl_static(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0)
MR_decl_static(fn__f_114_116_114_101_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_tbmkword(0, 0)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

const MR_PseudoTypeInfo mercury_data_rtree__field_types_box_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury_data_rtree__du_functor_desc_box_0_0 = {
	"box",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_rtree__field_types_box_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_rtree__du_stag_ordered_box_0_0[] = {
	&mercury_data_rtree__du_functor_desc_box_0_0

};

const MR_DuPtagLayout mercury_data_rtree__du_ptag_ordered_box_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_rtree__du_stag_ordered_box_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_rtree__du_name_ordered_box_0[] = {
	&mercury_data_rtree__du_functor_desc_box_0_0
};

const MR_Integer mercury_data_rtree__functor_number_map_box_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_rtree__type_ctor_info_box_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___rtree__box_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___rtree__box_0_0)),
	"rtree",
	"box",
	{ (void *)mercury_data_rtree__du_name_ordered_box_0 },
	{ (void *)mercury_data_rtree__du_ptag_ordered_box_0 },
	1,
	4,
	mercury_data_rtree__functor_number_map_box_0
};

const MR_PseudoTypeInfo mercury_data_rtree__field_types_box3d_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury_data_rtree__du_functor_desc_box3d_0_0 = {
	"box3d",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_rtree__field_types_box3d_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_rtree__du_stag_ordered_box3d_0_0[] = {
	&mercury_data_rtree__du_functor_desc_box3d_0_0

};

const MR_DuPtagLayout mercury_data_rtree__du_ptag_ordered_box3d_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_rtree__du_stag_ordered_box3d_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_rtree__du_name_ordered_box3d_0[] = {
	&mercury_data_rtree__du_functor_desc_box3d_0_0
};

const MR_Integer mercury_data_rtree__functor_number_map_box3d_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_rtree__type_ctor_info_box3d_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___rtree__box3d_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___rtree__box3d_0_0)),
	"rtree",
	"box3d",
	{ (void *)mercury_data_rtree__du_name_ordered_box3d_0 },
	{ (void *)mercury_data_rtree__du_ptag_ordered_box3d_0 },
	1,
	4,
	mercury_data_rtree__functor_number_map_box3d_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_rtree__pti_orphan_2__pseudo_1__pseudo_2 = {
	&mercury_data_rtree__type_ctor_info_orphan_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_rtree__pti_orphan_2__pseudo_1__pseudo_2 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) &mercury_data_rtree__pti_orphan_2__pseudo_1__pseudo_2
}};

const MR_PseudoTypeInfo mercury_data_rtree__field_types_delete_info_2_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_rtree__pti_orphan_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury_data_rtree__du_functor_desc_delete_info_2_0 = {
	"deleting",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_rtree__field_types_delete_info_2_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_rtree__field_types_delete_info_2_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_rtree__pti_orphan_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury_data_rtree__du_functor_desc_delete_info_2_1 = {
	"finished",
	2,
	2,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_rtree__field_types_delete_info_2_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_rtree__du_stag_ordered_delete_info_2_0[] = {
	&mercury_data_rtree__du_functor_desc_delete_info_2_0

};

const MR_DuFunctorDescPtr mercury_data_rtree__du_stag_ordered_delete_info_2_1[] = {
	&mercury_data_rtree__du_functor_desc_delete_info_2_1

};

const MR_DuPtagLayout mercury_data_rtree__du_ptag_ordered_delete_info_2[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_rtree__du_stag_ordered_delete_info_2_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_rtree__du_stag_ordered_delete_info_2_1 }

};

const MR_DuFunctorDescPtr mercury_data_rtree__du_name_ordered_delete_info_2[] = {
	&mercury_data_rtree__du_functor_desc_delete_info_2_0,
	&mercury_data_rtree__du_functor_desc_delete_info_2_1
};

const MR_Integer mercury_data_rtree__functor_number_map_delete_info_2[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_rtree__type_ctor_info_delete_info_2 = {
	2,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___rtree__delete_info_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___rtree__delete_info_2_0)),
	"rtree",
	"delete_info",
	{ (void *)mercury_data_rtree__du_name_ordered_delete_info_2 },
	{ (void *)mercury_data_rtree__du_ptag_ordered_delete_info_2 },
	2,
	4,
	mercury_data_rtree__functor_number_map_delete_info_2
};

const MR_PseudoTypeInfo mercury_data_rtree__field_types_interval_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury_data_rtree__du_functor_desc_interval_0_0 = {
	"interval",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_rtree__field_types_interval_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_rtree__du_stag_ordered_interval_0_0[] = {
	&mercury_data_rtree__du_functor_desc_interval_0_0

};

const MR_DuPtagLayout mercury_data_rtree__du_ptag_ordered_interval_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_rtree__du_stag_ordered_interval_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_rtree__du_name_ordered_interval_0[] = {
	&mercury_data_rtree__du_functor_desc_interval_0_0
};

const MR_Integer mercury_data_rtree__functor_number_map_interval_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_rtree__type_ctor_info_interval_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___rtree__interval_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___rtree__interval_0_0)),
	"rtree",
	"interval",
	{ (void *)mercury_data_rtree__du_name_ordered_interval_0 },
	{ (void *)mercury_data_rtree__du_ptag_ordered_interval_0 },
	1,
	4,
	mercury_data_rtree__functor_number_map_interval_0
};

static const MR_EnumFunctorDesc mercury_data_rtree__enum_functor_desc_min_of_four_result_0_0 = {
	"min4_first",
	0
};

static const MR_EnumFunctorDesc mercury_data_rtree__enum_functor_desc_min_of_four_result_0_1 = {
	"min4_second",
	1
};

static const MR_EnumFunctorDesc mercury_data_rtree__enum_functor_desc_min_of_four_result_0_2 = {
	"min4_third",
	2
};

static const MR_EnumFunctorDesc mercury_data_rtree__enum_functor_desc_min_of_four_result_0_3 = {
	"min4_fourth",
	3
};

const MR_EnumFunctorDescPtr mercury_data_rtree__enum_value_ordered_min_of_four_result_0[] = {
	&mercury_data_rtree__enum_functor_desc_min_of_four_result_0_0,
	&mercury_data_rtree__enum_functor_desc_min_of_four_result_0_1,
	&mercury_data_rtree__enum_functor_desc_min_of_four_result_0_2,
	&mercury_data_rtree__enum_functor_desc_min_of_four_result_0_3
};

const MR_EnumFunctorDescPtr mercury_data_rtree__enum_name_ordered_min_of_four_result_0[] = {
	&mercury_data_rtree__enum_functor_desc_min_of_four_result_0_0,
	&mercury_data_rtree__enum_functor_desc_min_of_four_result_0_3,
	&mercury_data_rtree__enum_functor_desc_min_of_four_result_0_1,
	&mercury_data_rtree__enum_functor_desc_min_of_four_result_0_2
};

const MR_Integer mercury_data_rtree__functor_number_map_min_of_four_result_0[] = {
	0,
	2,
	3,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_rtree__type_ctor_info_min_of_four_result_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___rtree__min_of_four_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___rtree__min_of_four_result_0_0)),
	"rtree",
	"min_of_four_result",
	{ (void *)mercury_data_rtree__enum_name_ordered_min_of_four_result_0 },
	{ (void *)mercury_data_rtree__enum_value_ordered_min_of_four_result_0 },
	4,
	4,
	mercury_data_rtree__functor_number_map_min_of_four_result_0
};

static const MR_EnumFunctorDesc mercury_data_rtree__enum_functor_desc_min_of_three_result_0_0 = {
	"min3_first",
	0
};

static const MR_EnumFunctorDesc mercury_data_rtree__enum_functor_desc_min_of_three_result_0_1 = {
	"min3_second",
	1
};

static const MR_EnumFunctorDesc mercury_data_rtree__enum_functor_desc_min_of_three_result_0_2 = {
	"min3_third",
	2
};

const MR_EnumFunctorDescPtr mercury_data_rtree__enum_value_ordered_min_of_three_result_0[] = {
	&mercury_data_rtree__enum_functor_desc_min_of_three_result_0_0,
	&mercury_data_rtree__enum_functor_desc_min_of_three_result_0_1,
	&mercury_data_rtree__enum_functor_desc_min_of_three_result_0_2
};

const MR_EnumFunctorDescPtr mercury_data_rtree__enum_name_ordered_min_of_three_result_0[] = {
	&mercury_data_rtree__enum_functor_desc_min_of_three_result_0_0,
	&mercury_data_rtree__enum_functor_desc_min_of_three_result_0_1,
	&mercury_data_rtree__enum_functor_desc_min_of_three_result_0_2
};

const MR_Integer mercury_data_rtree__functor_number_map_min_of_three_result_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_rtree__type_ctor_info_min_of_three_result_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___rtree__min_of_three_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___rtree__min_of_three_result_0_0)),
	"rtree",
	"min_of_three_result",
	{ (void *)mercury_data_rtree__enum_name_ordered_min_of_three_result_0 },
	{ (void *)mercury_data_rtree__enum_value_ordered_min_of_three_result_0 },
	3,
	4,
	mercury_data_rtree__functor_number_map_min_of_three_result_0
};

static const MR_EnumFunctorDesc mercury_data_rtree__enum_functor_desc_min_of_two_result_0_0 = {
	"min2_first",
	0
};

static const MR_EnumFunctorDesc mercury_data_rtree__enum_functor_desc_min_of_two_result_0_1 = {
	"min2_second",
	1
};

const MR_EnumFunctorDescPtr mercury_data_rtree__enum_value_ordered_min_of_two_result_0[] = {
	&mercury_data_rtree__enum_functor_desc_min_of_two_result_0_0,
	&mercury_data_rtree__enum_functor_desc_min_of_two_result_0_1
};

const MR_EnumFunctorDescPtr mercury_data_rtree__enum_name_ordered_min_of_two_result_0[] = {
	&mercury_data_rtree__enum_functor_desc_min_of_two_result_0_0,
	&mercury_data_rtree__enum_functor_desc_min_of_two_result_0_1
};

const MR_Integer mercury_data_rtree__functor_number_map_min_of_two_result_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_rtree__type_ctor_info_min_of_two_result_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___rtree__min_of_two_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___rtree__min_of_two_result_0_0)),
	"rtree",
	"min_of_two_result",
	{ (void *)mercury_data_rtree__enum_name_ordered_min_of_two_result_0 },
	{ (void *)mercury_data_rtree__enum_value_ordered_min_of_two_result_0 },
	2,
	4,
	mercury_data_rtree__functor_number_map_min_of_two_result_0
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_rtree__pti_rtree_2_2__pseudo_1__pseudo_2 = {
	&mercury_data_rtree__type_ctor_info_rtree_2_2,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
}};

const MR_PseudoTypeInfo mercury_data_rtree__field_types_orphan_2_0[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_rtree__pti_rtree_2_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury_data_rtree__du_functor_desc_orphan_2_0 = {
	"orphan",
	2,
	3,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_rtree__field_types_orphan_2_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_rtree__du_stag_ordered_orphan_2_0[] = {
	&mercury_data_rtree__du_functor_desc_orphan_2_0

};

const MR_DuPtagLayout mercury_data_rtree__du_ptag_ordered_orphan_2[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_rtree__du_stag_ordered_orphan_2_0 }

};

const MR_DuFunctorDescPtr mercury_data_rtree__du_name_ordered_orphan_2[] = {
	&mercury_data_rtree__du_functor_desc_orphan_2_0
};

const MR_Integer mercury_data_rtree__functor_number_map_orphan_2[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_rtree__type_ctor_info_orphan_2 = {
	2,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___rtree__orphan_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___rtree__orphan_2_0)),
	"rtree",
	"orphan",
	{ (void *)mercury_data_rtree__du_name_ordered_orphan_2 },
	{ (void *)mercury_data_rtree__du_ptag_ordered_orphan_2 },
	1,
	4,
	mercury_data_rtree__functor_number_map_orphan_2
};

const MR_TypeCtorInfo_Struct mercury_data_rtree__type_ctor_info_orphans_2 = {
	2,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___rtree__orphans_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___rtree__orphans_2_0)),
	"rtree",
	"orphans",
	{ 0 },
	{ (void *)&mercury_data_list__pti_list_1__pseudo_rtree__pti_orphan_2__pseudo_1__pseudo_2 },
	-1,
	0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_rtree__du_functor_desc_rtree_2_0 = {
	"empty",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_rtree__field_types_rtree_2_1[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
};

static const MR_DuFunctorDesc mercury_data_rtree__du_functor_desc_rtree_2_1 = {
	"one",
	2,
	3,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_rtree__field_types_rtree_2_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_rtree__field_types_rtree_2_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_rtree__pti_rtree_2_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury_data_rtree__du_functor_desc_rtree_2_2 = {
	"rtree",
	1,
	1,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_rtree__field_types_rtree_2_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_rtree__du_stag_ordered_rtree_2_0[] = {
	&mercury_data_rtree__du_functor_desc_rtree_2_0

};

const MR_DuFunctorDescPtr mercury_data_rtree__du_stag_ordered_rtree_2_1[] = {
	&mercury_data_rtree__du_functor_desc_rtree_2_1

};

const MR_DuFunctorDescPtr mercury_data_rtree__du_stag_ordered_rtree_2_2[] = {
	&mercury_data_rtree__du_functor_desc_rtree_2_2

};

const MR_DuPtagLayout mercury_data_rtree__du_ptag_ordered_rtree_2[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_rtree__du_stag_ordered_rtree_2_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_rtree__du_stag_ordered_rtree_2_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_rtree__du_stag_ordered_rtree_2_2 }

};

const MR_DuFunctorDescPtr mercury_data_rtree__du_name_ordered_rtree_2[] = {
	&mercury_data_rtree__du_functor_desc_rtree_2_0,
	&mercury_data_rtree__du_functor_desc_rtree_2_1,
	&mercury_data_rtree__du_functor_desc_rtree_2_2
};

const MR_Integer mercury_data_rtree__functor_number_map_rtree_2[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_rtree__type_ctor_info_rtree_2 = {
	2,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___rtree__rtree_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___rtree__rtree_2_0)),
	"rtree",
	"rtree",
	{ (void *)mercury_data_rtree__du_name_ordered_rtree_2 },
	{ (void *)mercury_data_rtree__du_ptag_ordered_rtree_2 },
	3,
	4,
	mercury_data_rtree__functor_number_map_rtree_2
};

const MR_PseudoTypeInfo mercury_data_rtree__field_types_rtree_2_2_0[] = {
	(MR_PseudoTypeInfo) 2
};

static const MR_DuFunctorDesc mercury_data_rtree__du_functor_desc_rtree_2_2_0 = {
	"leaf",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_rtree__field_types_rtree_2_2_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_rtree__field_types_rtree_2_2_1[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_rtree__pti_rtree_2_2__pseudo_1__pseudo_2,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_rtree__pti_rtree_2_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury_data_rtree__du_functor_desc_rtree_2_2_1 = {
	"two",
	4,
	15,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_rtree__field_types_rtree_2_2_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_rtree__field_types_rtree_2_2_2[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_rtree__pti_rtree_2_2__pseudo_1__pseudo_2,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_rtree__pti_rtree_2_2__pseudo_1__pseudo_2,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_rtree__pti_rtree_2_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury_data_rtree__du_functor_desc_rtree_2_2_2 = {
	"three",
	6,
	63,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_rtree__field_types_rtree_2_2_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_rtree__field_types_rtree_2_2_3[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_rtree__pti_rtree_2_2__pseudo_1__pseudo_2,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_rtree__pti_rtree_2_2__pseudo_1__pseudo_2,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_rtree__pti_rtree_2_2__pseudo_1__pseudo_2,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_rtree__pti_rtree_2_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury_data_rtree__du_functor_desc_rtree_2_2_3 = {
	"four",
	8,
	255,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_rtree__field_types_rtree_2_2_3,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_rtree__du_stag_ordered_rtree_2_2_0[] = {
	&mercury_data_rtree__du_functor_desc_rtree_2_2_0

};

const MR_DuFunctorDescPtr mercury_data_rtree__du_stag_ordered_rtree_2_2_1[] = {
	&mercury_data_rtree__du_functor_desc_rtree_2_2_1

};

const MR_DuFunctorDescPtr mercury_data_rtree__du_stag_ordered_rtree_2_2_2[] = {
	&mercury_data_rtree__du_functor_desc_rtree_2_2_2

};

const MR_DuFunctorDescPtr mercury_data_rtree__du_stag_ordered_rtree_2_2_3[] = {
	&mercury_data_rtree__du_functor_desc_rtree_2_2_3

};

const MR_DuPtagLayout mercury_data_rtree__du_ptag_ordered_rtree_2_2[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_rtree__du_stag_ordered_rtree_2_2_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_rtree__du_stag_ordered_rtree_2_2_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_rtree__du_stag_ordered_rtree_2_2_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_rtree__du_stag_ordered_rtree_2_2_3 }

};

const MR_DuFunctorDescPtr mercury_data_rtree__du_name_ordered_rtree_2_2[] = {
	&mercury_data_rtree__du_functor_desc_rtree_2_2_3,
	&mercury_data_rtree__du_functor_desc_rtree_2_2_0,
	&mercury_data_rtree__du_functor_desc_rtree_2_2_2,
	&mercury_data_rtree__du_functor_desc_rtree_2_2_1
};

const MR_Integer mercury_data_rtree__functor_number_map_rtree_2_2[] = {
	1,
	3,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_rtree__type_ctor_info_rtree_2_2 = {
	2,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___rtree__rtree_2_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___rtree__rtree_2_2_0)),
	"rtree",
	"rtree_2",
	{ (void *)mercury_data_rtree__du_name_ordered_rtree_2_2 },
	{ (void *)mercury_data_rtree__du_ptag_ordered_rtree_2_2 },
	4,
	4,
	mercury_data_rtree__functor_number_map_rtree_2_2
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_rtree__region__arity1__rtree__interval__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 5,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_0))
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_rtree__region__arity1__rtree__box__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 5,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_0))
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_rtree__region__arity1__rtree__box3d__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 5,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2_2_0))
};

const MR_ConstString mercury_data_rtree__type_class_id_var_names_region_1[] = {
	"K",
};

const MR_TypeClassMethod mercury_data_rtree__type_class_id_method_ids_region_1[] = {
	{ "intersects", 2, MR_PREDICATE },
	{ "contains", 2, MR_PREDICATE },
	{ "size", 2, MR_FUNCTION },
	{ "bounding_region", 3, MR_FUNCTION },
	{ "bounding_region_size", 3, MR_FUNCTION },
};

static const MR_TypeClassId mercury_data_rtree__type_class_id_region_1 = {
	"rtree",
	"region",
	1,
	1,
	5,
	mercury_data_rtree__type_class_id_var_names_region_1,
	mercury_data_rtree__type_class_id_method_ids_region_1
};

const MR_TypeClassDeclStruct mercury_data_rtree__type_class_decl_region_1 = {
	&mercury_data_rtree__type_class_id_region_1,
	0,
	0,
	NULL
};



MR_declare_entry(mercury__do_call_class_method_2);

MR_BEGIN_MODULE(rtree_module0)
	MR_init_entry1(rtree__intersects_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__intersects_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'intersects'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__intersects_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__intersects_2_0));
	MR_np_tailcall_ent(do_call_class_method_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module1)
	MR_init_entry1(rtree__contains_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__contains_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'contains'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__contains_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__contains_2_0));
	MR_np_tailcall_ent(do_call_class_method_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_1);

MR_BEGIN_MODULE(rtree_module2)
	MR_init_entry1(fn__rtree__size_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__size_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'size'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__size_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__rtree__size_1_0));
	MR_np_tailcall_ent(do_call_class_method_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module3)
	MR_init_entry1(fn__rtree__bounding_region_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__bounding_region_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bounding_region'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__bounding_region_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__rtree__bounding_region_2_0));
	MR_np_tailcall_ent(do_call_class_method_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module4)
	MR_init_entry1(fn__rtree__bounding_region_size_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__bounding_region_size_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bounding_region_size'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__bounding_region_size_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__rtree__bounding_region_size_2_0));
	MR_np_tailcall_ent(do_call_class_method_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module5)
	MR_init_entry1(fn__rtree__init_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__init_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module6)
	MR_init_entry1(rtree__is_empty_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__is_empty_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__is_empty_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r3 == (MR_Integer) MR_tbmkword(0, 0));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module7)
	MR_init_entry1(fn__rtree__choose_subtree_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__choose_subtree_3_0);
	MR_init_label7(fn__rtree__choose_subtree_3_0,2,3,4,5,6,13,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'choose_subtree'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__rtree__choose_subtree_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__rtree__choose_subtree_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__fn__rtree__choose_subtree_3_0_i2);
MR_def_label(fn__rtree__choose_subtree_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__rtree__choose_subtree_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__fn__rtree__choose_subtree_3_0_i3);
MR_def_label(fn__rtree__choose_subtree_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 5;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__rtree__choose_subtree_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__rtree__choose_subtree_3_0_i4);
MR_def_label(fn__rtree__choose_subtree_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r2 = (MR_Integer) 5;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__rtree__choose_subtree_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__rtree__choose_subtree_3_0_i5);
MR_def_label(fn__rtree__choose_subtree_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_float_to_word((MR_word_to_float(MR_r1) - MR_word_to_float(MR_sv(2))));
	MR_r3 = MR_float_to_word((MR_word_to_float(MR_sv(1)) - MR_word_to_float(MR_sv(4))));
	if ((MR_word_to_float(MR_r3) >= MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(fn__rtree__choose_subtree_3_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
MR_def_label(fn__rtree__choose_subtree_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r3) <= MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(fn__rtree__choose_subtree_3_0_i7);
	}
MR_def_label(fn__rtree__choose_subtree_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
MR_def_label(fn__rtree__choose_subtree_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(4)) > MR_word_to_float(MR_sv(2)))) {
		MR_GOTO_LAB(fn__rtree__choose_subtree_3_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module8)
	MR_init_entry1(fn__rtree__choose_subtree_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__choose_subtree_4_0);
	MR_init_label10(fn__rtree__choose_subtree_4_0,2,3,4,5,6,7,8,30,9,13)
	MR_init_label7(fn__rtree__choose_subtree_4_0,16,34,17,14,22,37,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'choose_subtree'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__rtree__choose_subtree_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__rtree__choose_subtree_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__fn__rtree__choose_subtree_4_0_i2);
MR_def_label(fn__rtree__choose_subtree_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__rtree__choose_subtree_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__fn__rtree__choose_subtree_4_0_i3);
MR_def_label(fn__rtree__choose_subtree_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__rtree__choose_subtree_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__fn__rtree__choose_subtree_4_0_i4);
MR_def_label(fn__rtree__choose_subtree_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 5;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__rtree__choose_subtree_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__rtree__choose_subtree_4_0_i5);
MR_def_label(fn__rtree__choose_subtree_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 5;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__rtree__choose_subtree_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__rtree__choose_subtree_4_0_i6);
MR_def_label(fn__rtree__choose_subtree_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r2 = (MR_Integer) 5;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__rtree__choose_subtree_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__rtree__choose_subtree_4_0_i7);
MR_def_label(fn__rtree__choose_subtree_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_float_to_word((MR_word_to_float(MR_r1) - MR_word_to_float(MR_sv(2))));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_float_to_word((MR_word_to_float(MR_sv(1)) - MR_word_to_float(MR_sv(6))));
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_float_to_word((MR_word_to_float(MR_sv(3)) - MR_word_to_float(MR_sv(5))));
	MR_r4 = MR_tempr2;
	if ((MR_word_to_float(MR_tempr2) >= MR_word_to_float(MR_tempr1))) {
		MR_GOTO_LAB(fn__rtree__choose_subtree_4_0_i8);
	}
	MR_r1 = MR_tempr2;
	MR_r5 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r5;
	MR_r4 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__rtree__choose_subtree_4_0_i13);
	}
MR_def_label(fn__rtree__choose_subtree_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r4) <= MR_word_to_float(MR_r3))) {
		MR_GOTO_LAB(fn__rtree__choose_subtree_4_0_i9);
	}
MR_def_label(fn__rtree__choose_subtree_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r5 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r5;
	MR_r4 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__rtree__choose_subtree_4_0_i13);
MR_def_label(fn__rtree__choose_subtree_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(5)) > MR_word_to_float(MR_sv(6)))) {
		MR_GOTO_LAB(fn__rtree__choose_subtree_4_0_i30);
	}
	MR_r1 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	}
MR_def_label(fn__rtree__choose_subtree_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(fn__rtree__choose_subtree_4_0_i14);
	}
	if ((MR_word_to_float(MR_r1) >= MR_word_to_float(MR_r3))) {
		MR_GOTO_LAB(fn__rtree__choose_subtree_4_0_i16);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(8);
MR_def_label(fn__rtree__choose_subtree_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) <= MR_word_to_float(MR_r3))) {
		MR_GOTO_LAB(fn__rtree__choose_subtree_4_0_i17);
	}
MR_def_label(fn__rtree__choose_subtree_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(8);
MR_def_label(fn__rtree__choose_subtree_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(5)) > MR_word_to_float(MR_sv(2)))) {
		MR_GOTO_LAB(fn__rtree__choose_subtree_4_0_i37);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(8);
MR_def_label(fn__rtree__choose_subtree_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r2) >= MR_word_to_float(MR_r3))) {
		MR_GOTO_LAB(fn__rtree__choose_subtree_4_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(8);
MR_def_label(fn__rtree__choose_subtree_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r2) <= MR_word_to_float(MR_r3))) {
		MR_GOTO_LAB(fn__rtree__choose_subtree_4_0_i23);
	}
MR_def_label(fn__rtree__choose_subtree_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(8);
MR_def_label(fn__rtree__choose_subtree_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(5)) > MR_word_to_float(MR_sv(6)))) {
		MR_GOTO_LAB(fn__rtree__choose_subtree_4_0_i34);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module9)
	MR_init_entry1(rtree__insert_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__insert_4_0);
	MR_init_label3(rtree__insert_4_0,3,24,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__insert_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(rtree__insert_4_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r3;
	MR_tfield(1, MR_r1, 1) = MR_r4;
	MR_proceed();
MR_def_label(rtree__insert_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(rtree__insert_4_0_i24);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_tfield(0, MR_r2, 0) = MR_tfield(1, MR_tempr3, 1);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tfield(1, MR_tempr2, 2) = MR_r3;
	MR_tfield(1, MR_tempr2, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(rtree__insert_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(2, MR_r5, 0);
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,
		rtree__insert_4_0_i10);
MR_def_label(rtree__insert_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module10)
	MR_init_entry1(fn__rtree__insert_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__insert_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__insert_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rtree__insert_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(rtree_module11)
	MR_init_entry1(rtree__delete_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__delete_2_7_0);
	MR_init_label10(rtree__delete_2_7_0,6,10,14,3,22,21,28,32,25,40)
	MR_init_label2(rtree__delete_2_7_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(rtree__delete_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(rtree__delete_2_7_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r3;
	MR_r10 = MR_tfield(3, MR_tempr5, 7);
	MR_r9 = MR_tfield(3, MR_tempr5, 6);
	MR_r8 = MR_tfield(3, MR_tempr5, 5);
	MR_r7 = MR_tfield(3, MR_tempr5, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr3 = MR_tfield(3, MR_tempr5, 1);
	MR_tempr4 = MR_tfield(3, MR_tempr5, 0);
	MR_sv(2) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_tempr4;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = MR_r7;
	MR_sv(9) = MR_r8;
	MR_sv(10) = MR_r9;
	MR_sv(11) = MR_r10;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r1;
	MR_r3 = MR_tempr4;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr1;
	MR_r11 = MR_sv(2);
	MR_r12 = MR_sv(1);
	MR_r13 = MR_sv(3);
	}
	MR_np_call_localret_ent(rtree__try_deletion4_14_0,
		rtree__delete_2_7_0_i6);
MR_def_label(rtree__delete_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(rtree__delete_2_7_0_i2);
	}
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(4);
	MR_tempr2 = MR_sv(5);
	MR_tempr3 = MR_sv(6);
	MR_tempr4 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r1 = MR_sv(13);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_r11 = MR_sv(2);
	MR_r12 = MR_sv(1);
	MR_r13 = MR_sv(3);
	}
	MR_np_call_localret_ent(rtree__try_deletion4_14_0,
		rtree__delete_2_7_0_i10);
MR_def_label(rtree__delete_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(rtree__delete_2_7_0_i2);
	}
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_sv(4);
	MR_tempr2 = MR_sv(5);
	MR_tempr3 = MR_sv(6);
	MR_tempr4 = MR_sv(7);
	MR_tempr5 = MR_sv(8);
	MR_r7 = MR_tempr5;
	MR_tempr6 = MR_sv(9);
	MR_r8 = MR_tempr6;
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r1 = MR_sv(13);
	MR_r3 = MR_tempr5;
	MR_r4 = MR_tempr6;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r11 = MR_sv(2);
	MR_r12 = MR_sv(1);
	MR_r13 = MR_sv(3);
	}
	MR_np_call_localret_ent(rtree__try_deletion4_14_0,
		rtree__delete_2_7_0_i14);
MR_def_label(rtree__delete_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(rtree__delete_2_7_0_i2);
	}
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tempr1 = MR_sv(4);
	MR_tempr2 = MR_sv(5);
	MR_tempr3 = MR_sv(6);
	MR_tempr4 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r1 = MR_sv(13);
	MR_r3 = MR_r9;
	MR_tempr5 = MR_r4;
	MR_r4 = MR_r10;
	MR_tempr6 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr7 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr8 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_tempr9 = MR_r8;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr8;
	MR_r10 = MR_tempr9;
	MR_r11 = MR_tempr5;
	MR_r12 = MR_tempr6;
	MR_r13 = MR_tempr7;
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(rtree__try_deletion4_14_0);
	}
MR_def_label(rtree__delete_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(rtree__delete_2_7_0_i21);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_tfield(0, MR_r3, 0);
	MR_np_call_localret_ent(builtin__unify_2_0,
		rtree__delete_2_7_0_i22);
MR_def_label(rtree__delete_2_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__delete_2_7_0_i1);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(rtree__delete_2_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(rtree__delete_2_7_0_i25);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r3;
	MR_r8 = MR_tfield(2, MR_tempr5, 5);
	MR_r7 = MR_tfield(2, MR_tempr5, 4);
	MR_tempr1 = MR_tfield(2, MR_tempr5, 3);
	MR_tempr2 = MR_tfield(2, MR_tempr5, 2);
	MR_tempr3 = MR_tfield(2, MR_tempr5, 1);
	MR_tempr4 = MR_tfield(2, MR_tempr5, 0);
	MR_sv(2) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_tempr4;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = MR_r7;
	MR_sv(9) = MR_r8;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r1;
	MR_r3 = MR_tempr4;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr1;
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(1);
	MR_r11 = MR_sv(3);
	}
	MR_np_call_localret_ent(rtree__try_deletion3_12_0,
		rtree__delete_2_7_0_i28);
MR_def_label(rtree__delete_2_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(rtree__delete_2_7_0_i2);
	}
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(4);
	MR_tempr2 = MR_sv(5);
	MR_tempr3 = MR_sv(6);
	MR_tempr4 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	MR_r2 = MR_sv(12);
	MR_r1 = MR_sv(13);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(1);
	MR_r11 = MR_sv(3);
	}
	MR_np_call_localret_ent(rtree__try_deletion3_12_0,
		rtree__delete_2_7_0_i32);
MR_def_label(rtree__delete_2_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(rtree__delete_2_7_0_i2);
	}
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_sv(4);
	MR_tempr2 = MR_sv(5);
	MR_tempr3 = MR_sv(6);
	MR_tempr4 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	MR_r2 = MR_sv(12);
	MR_r1 = MR_sv(13);
	MR_r3 = MR_r7;
	MR_tempr5 = MR_r4;
	MR_r4 = MR_r8;
	MR_tempr6 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr7 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_r10 = MR_tempr6;
	MR_r11 = MR_tempr7;
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(rtree__try_deletion3_12_0);
	}
MR_def_label(rtree__delete_2_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr5, 3);
	MR_tempr2 = MR_tfield(1, MR_tempr5, 2);
	MR_tempr3 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr4 = MR_tfield(1, MR_tempr5, 0);
	MR_sv(2) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_tempr4;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_tempr1;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r1;
	MR_r3 = MR_tempr4;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(3);
	}
	MR_np_call_localret_ent(rtree__try_deletion2_10_0,
		rtree__delete_2_7_0_i40);
MR_def_label(rtree__delete_2_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(rtree__delete_2_7_0_i2);
	}
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_sv(4);
	MR_tempr2 = MR_sv(5);
	MR_tempr3 = MR_sv(6);
	MR_tempr4 = MR_sv(7);
	MR_r2 = MR_sv(12);
	MR_r1 = MR_sv(13);
	MR_r3 = MR_tempr3;
	MR_tempr5 = MR_r4;
	MR_r4 = MR_tempr4;
	MR_tempr6 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr7 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr5;
	MR_r8 = MR_tempr6;
	MR_r9 = MR_tempr7;
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(rtree__try_deletion2_10_0);
	}
MR_def_label(rtree__delete_2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(rtree__delete_2_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module12)
	MR_init_entry1(rtree__try_deletion2_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__try_deletion2_10_0);
	MR_init_label5(rtree__try_deletion2_10_0,2,4,7,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'try_deletion2'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(rtree__try_deletion2_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r7;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__try_deletion2_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__try_deletion2_10_0_i2);
MR_def_label(rtree__try_deletion2_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__try_deletion2_10_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_np_call_localret_ent(rtree__delete_2_7_0,
		rtree__try_deletion2_10_0_i4);
MR_def_label(rtree__try_deletion2_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__try_deletion2_10_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(rtree__try_deletion2_10_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(0, MR_r4, 0);
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r4, 0) = MR_tempr2;
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rtree__try_deletion2_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(3);
	MR_sv(2) = MR_r4;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_tfield(1, MR_tempr1, 2);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Integer) 4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__try_deletion2_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__try_deletion2_10_0_i12);
MR_def_label(rtree__try_deletion2_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(rtree__try_deletion2_10_0,1)
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


MR_BEGIN_MODULE(rtree_module13)
	MR_init_entry1(rtree__try_deletion3_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__try_deletion3_12_0);
	MR_init_label6(rtree__try_deletion3_12_0,2,4,7,12,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'try_deletion3'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(rtree__try_deletion3_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r9;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_r10;
	MR_sv(8) = MR_r11;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r1;
	MR_r1 = MR_r2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__try_deletion3_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__try_deletion3_12_0_i2);
MR_def_label(rtree__try_deletion3_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__try_deletion3_12_0_i1);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = ((MR_Integer) MR_sv(8) + (MR_Integer) 1);
	MR_np_call_localret_ent(rtree__delete_2_7_0,
		rtree__try_deletion3_12_0_i4);
MR_def_label(rtree__try_deletion3_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__try_deletion3_12_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(rtree__try_deletion3_12_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_sv(8) + (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 4);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 3) = MR_sv(5);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_tempr3;
	MR_r2 = (MR_Integer) 4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__try_deletion3_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__try_deletion3_12_0_i13);
MR_def_label(rtree__try_deletion3_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 6);
	MR_sv(1) = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tfield(2, MR_tempr1, 1) = MR_r3;
	MR_tfield(2, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 5) = MR_sv(5);
	MR_sv(2) = MR_r4;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_r2;
	MR_r4 = MR_tfield(2, MR_tempr1, 2);
	MR_r2 = (MR_Integer) 4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__try_deletion3_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__try_deletion3_12_0_i12);
MR_def_label(rtree__try_deletion3_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r2 = (MR_Integer) 4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__try_deletion3_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__try_deletion3_12_0_i13);
MR_def_label(rtree__try_deletion3_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(rtree__try_deletion3_12_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module14)
	MR_init_entry1(rtree__try_deletion4_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__try_deletion4_14_0);
	MR_init_label8(rtree__try_deletion4_14_0,2,4,10,7,13,14,15,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'try_deletion4'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(rtree__try_deletion4_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_r10;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r11;
	MR_sv(8) = MR_tempr2;
	MR_sv(9) = MR_r12;
	MR_sv(10) = MR_r13;
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_r2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__try_deletion4_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__try_deletion4_14_0_i2);
MR_def_label(rtree__try_deletion4_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__try_deletion4_14_0_i1);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = ((MR_Integer) MR_sv(10) + (MR_Integer) 1);
	MR_np_call_localret_ent(rtree__delete_2_7_0,
		rtree__try_deletion4_14_0_i4);
MR_def_label(rtree__try_deletion4_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__try_deletion4_14_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(rtree__try_deletion4_14_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_sv(10) + (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 6);
	MR_sv(1) = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_tfield(2, MR_tempr2, 2) = MR_tempr3;
	MR_tfield(2, MR_tempr2, 3) = MR_sv(5);
	MR_tfield(2, MR_tempr2, 4) = MR_sv(6);
	MR_tfield(2, MR_tempr2, 5) = MR_sv(7);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
	MR_r4 = MR_tempr3;
	MR_r2 = (MR_Integer) 4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__try_deletion4_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__try_deletion4_14_0_i10);
MR_def_label(rtree__try_deletion4_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__try_deletion4_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__try_deletion4_14_0_i15);
MR_def_label(rtree__try_deletion4_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 8);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = MR_r2;
	MR_tfield(3, MR_tempr1, 1) = MR_r3;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(7);
	MR_sv(2) = MR_r4;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_r2;
	MR_r4 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Integer) 4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__try_deletion4_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__try_deletion4_14_0_i13);
MR_def_label(rtree__try_deletion4_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r2 = (MR_Integer) 4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__try_deletion4_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__try_deletion4_14_0_i14);
MR_def_label(rtree__try_deletion4_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__try_deletion4_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__try_deletion4_14_0_i15);
MR_def_label(rtree__try_deletion4_14_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(rtree__try_deletion4_14_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__require__func_error_1_0);

MR_BEGIN_MODULE(rtree_module15)
	MR_init_entry1(fn__rtree__insert_tree_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__insert_tree_5_0);
	MR_init_label10(fn__rtree__insert_tree_5_0,83,4,3,8,10,12,14,7,19,21)
	MR_init_label9(fn__rtree__insert_tree_5_0,22,23,24,25,26,27,30,32,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_tree'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__rtree__insert_tree_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
MR_def_label(fn__rtree__insert_tree_5_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(fn__rtree__insert_tree_5_0_i3);
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(4) = MR_r7;
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,
		fn__rtree__insert_tree_5_0_i4);
MR_def_label(fn__rtree__insert_tree_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tfield(1, MR_tempr1, 2) = MR_r3;
	MR_tfield(1, MR_tempr1, 3) = MR_r4;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = (MR_Integer) 1;
	MR_r7 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(fn__rtree__insert_tree_5_0_i83);
	}
MR_def_label(fn__rtree__insert_tree_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(fn__rtree__insert_tree_5_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(10) = MR_tfield(2, MR_tempr1, 5);
	MR_sv(9) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(7) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 0);
	if ((MR_r6 != MR_r7)) {
		MR_GOTO_LAB(fn__rtree__insert_tree_5_0_i8);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 8);
	MR_tfield(3, MR_r1, 0) = MR_sv(5);
	MR_tfield(3, MR_r1, 1) = MR_sv(6);
	MR_tfield(3, MR_r1, 2) = MR_sv(7);
	MR_tfield(3, MR_r1, 3) = MR_sv(8);
	MR_tfield(3, MR_r1, 4) = MR_sv(9);
	MR_tfield(3, MR_r1, 5) = MR_sv(10);
	MR_tfield(3, MR_r1, 6) = MR_r4;
	MR_tfield(3, MR_r1, 7) = MR_r5;
	MR_decr_sp_and_return(14);
	}
MR_def_label(fn__rtree__insert_tree_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__rtree__choose_subtree_4_0,
		fn__rtree__insert_tree_5_0_i10);
MR_def_label(fn__rtree__insert_tree_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__rtree__insert_tree_5_0_i12);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(10);
	MR_r9 = MR_sv(1);
	MR_r10 = MR_sv(2);
	MR_r11 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r12 = MR_sv(4);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(rtree__insert_tree_and_split_child3_11_0);
MR_def_label(fn__rtree__insert_tree_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__rtree__insert_tree_5_0_i14);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(10);
	MR_r9 = MR_sv(1);
	MR_r10 = MR_sv(2);
	MR_r11 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r12 = MR_sv(4);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(rtree__insert_tree_and_split_child3_11_0);
MR_def_label(fn__rtree__insert_tree_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(1);
	MR_r10 = MR_sv(2);
	MR_r11 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r12 = MR_sv(4);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(rtree__insert_tree_and_split_child3_11_0);
MR_def_label(fn__rtree__insert_tree_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(fn__rtree__insert_tree_5_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(8) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	if ((MR_r6 != MR_r7)) {
		MR_GOTO_LAB(fn__rtree__insert_tree_5_0_i19);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 6);
	MR_tfield(2, MR_r1, 0) = MR_sv(5);
	MR_tfield(2, MR_r1, 1) = MR_sv(6);
	MR_tfield(2, MR_r1, 2) = MR_sv(7);
	MR_tfield(2, MR_r1, 3) = MR_sv(8);
	MR_tfield(2, MR_r1, 4) = MR_r4;
	MR_tfield(2, MR_r1, 5) = MR_r5;
	MR_decr_sp_and_return(14);
	}
MR_def_label(fn__rtree__insert_tree_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_r2;
	MR_r3 = MR_sv(5);
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__rtree__insert_tree_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__fn__rtree__insert_tree_5_0_i21);
MR_def_label(fn__rtree__insert_tree_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__rtree__insert_tree_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__fn__rtree__insert_tree_5_0_i22);
MR_def_label(fn__rtree__insert_tree_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__rtree__insert_tree_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__rtree__insert_tree_5_0_i23);
MR_def_label(fn__rtree__insert_tree_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__rtree__insert_tree_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__rtree__insert_tree_5_0_i24);
MR_def_label(fn__rtree__insert_tree_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r11 = MR_float_to_word((MR_word_to_float(MR_r1) - MR_word_to_float(MR_sv(10))));
	MR_r12 = MR_float_to_word((MR_word_to_float(MR_sv(13)) - MR_word_to_float(MR_sv(9))));
	if ((MR_word_to_float(MR_r12) >= MR_word_to_float(MR_r11))) {
		MR_GOTO_LAB(fn__rtree__insert_tree_5_0_i25);
	}
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r10 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r9 = (MR_Integer) 0;
	MR_r2 = MR_sv(11);
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(fn__rtree__insert_tree_5_0_i30);
MR_def_label(fn__rtree__insert_tree_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r12) <= MR_word_to_float(MR_r11))) {
		MR_GOTO_LAB(fn__rtree__insert_tree_5_0_i26);
	}
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r10 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r9 = (MR_Integer) 1;
	MR_r2 = MR_sv(11);
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(fn__rtree__insert_tree_5_0_i30);
MR_def_label(fn__rtree__insert_tree_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(9)) > MR_word_to_float(MR_sv(10)))) {
		MR_GOTO_LAB(fn__rtree__insert_tree_5_0_i27);
	}
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r10 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r9 = (MR_Integer) 0;
	MR_r2 = MR_sv(11);
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(fn__rtree__insert_tree_5_0_i30);
MR_def_label(fn__rtree__insert_tree_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r10 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r9 = (MR_Integer) 1;
	MR_r2 = MR_sv(11);
	MR_r1 = MR_sv(12);
MR_def_label(fn__rtree__insert_tree_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r9,0)) {
		MR_GOTO_LAB(fn__rtree__insert_tree_5_0_i32);
	}
	MR_r9 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(rtree__insert_tree_and_split_child2_9_0);
MR_def_label(fn__rtree__insert_tree_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r5;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_r6;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_r9 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(rtree__insert_tree_and_split_child2_9_0);
	}
MR_def_label(fn__rtree__insert_tree_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__rtree__insert_tree_5_0
	TypeClassInfo = MR_r2;
	Index = (MR_Integer) 1;
{
#line 132 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 2853 "rtree.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(rtree, rtree_2, 2);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_string_const("insert_tree: leaf unexpected", 28);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module16)
	MR_init_entry1(rtree__insert_tree_and_split_child2_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__insert_tree_and_split_child2_9_0);
	MR_init_label10(rtree__insert_tree_and_split_child2_9_0,4,5,6,7,8,9,34,10,14,17)
	MR_init_label10(rtree__insert_tree_and_split_child2_9_0,18,16,20,21,3,65,26,27,25,29)
	MR_init_label1(rtree__insert_tree_and_split_child2_9_0,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_tree_and_split_child2'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(rtree__insert_tree_and_split_child2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,3)) {
		MR_GOTO_LAB(rtree__insert_tree_and_split_child2_9_0_i3);
	}
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_r10;
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,
		rtree__insert_tree_and_split_child2_9_0_i4);
MR_def_label(rtree__insert_tree_and_split_child2_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__insert_tree_and_split_child2_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__rtree__insert_tree_and_split_child2_9_0_i5);
MR_def_label(rtree__insert_tree_and_split_child2_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(9);
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__insert_tree_and_split_child2_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__rtree__insert_tree_and_split_child2_9_0_i6);
MR_def_label(rtree__insert_tree_and_split_child2_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__insert_tree_and_split_child2_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__insert_tree_and_split_child2_9_0_i7);
MR_def_label(rtree__insert_tree_and_split_child2_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(9);
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__insert_tree_and_split_child2_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__insert_tree_and_split_child2_9_0_i8);
MR_def_label(rtree__insert_tree_and_split_child2_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_float_to_word((MR_word_to_float(MR_r1) - MR_word_to_float(MR_sv(14))));
	MR_r6 = MR_float_to_word((MR_word_to_float(MR_sv(15)) - MR_word_to_float(MR_sv(13))));
	if ((MR_word_to_float(MR_r6) >= MR_word_to_float(MR_r5))) {
		MR_GOTO_LAB(rtree__insert_tree_and_split_child2_9_0_i9);
	}
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_sv(11);
	MR_GOTO_LAB(rtree__insert_tree_and_split_child2_9_0_i14);
MR_def_label(rtree__insert_tree_and_split_child2_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r6) <= MR_word_to_float(MR_r5))) {
		MR_GOTO_LAB(rtree__insert_tree_and_split_child2_9_0_i10);
	}
MR_def_label(rtree__insert_tree_and_split_child2_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_sv(11);
	MR_GOTO_LAB(rtree__insert_tree_and_split_child2_9_0_i14);
MR_def_label(rtree__insert_tree_and_split_child2_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(13)) > MR_word_to_float(MR_sv(14)))) {
		MR_GOTO_LAB(rtree__insert_tree_and_split_child2_9_0_i34);
	}
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_sv(11);
MR_def_label(rtree__insert_tree_and_split_child2_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(rtree__insert_tree_and_split_child2_9_0_i16);
	}
	MR_sv(4) = MR_r3;
	MR_sv(11) = MR_r1;
	MR_r2 = (MR_Integer) 4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__insert_tree_and_split_child2_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__insert_tree_and_split_child2_9_0_i17);
MR_def_label(rtree__insert_tree_and_split_child2_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_np_call_localret_ent(fn__rtree__insert_tree_5_0,
		rtree__insert_tree_and_split_child2_9_0_i18);
MR_def_label(rtree__insert_tree_and_split_child2_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 6);
	MR_tfield(2, MR_r2, 0) = MR_sv(2);
	MR_tfield(2, MR_r2, 1) = MR_sv(3);
	MR_tfield(2, MR_r2, 2) = MR_sv(9);
	MR_tfield(2, MR_r2, 3) = MR_sv(10);
	MR_tfield(2, MR_r2, 4) = MR_sv(1);
	MR_tfield(2, MR_r2, 5) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(16);
MR_def_label(rtree__insert_tree_and_split_child2_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(11) = MR_r1;
	MR_r4 = MR_sv(9);
	MR_r2 = (MR_Integer) 4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__insert_tree_and_split_child2_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__insert_tree_and_split_child2_9_0_i20);
MR_def_label(rtree__insert_tree_and_split_child2_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__rtree__insert_tree_5_0,
		rtree__insert_tree_and_split_child2_9_0_i21);
MR_def_label(rtree__insert_tree_and_split_child2_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 6);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(16);
	}
MR_def_label(rtree__insert_tree_and_split_child2_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(rtree__insert_tree_and_split_child2_9_0_i65);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 6);
	MR_tfield(2, MR_r1, 0) = MR_r3;
	MR_tfield(2, MR_r1, 1) = MR_r4;
	MR_tfield(2, MR_r1, 2) = MR_r5;
	MR_tfield(2, MR_r1, 3) = MR_r6;
	MR_tfield(2, MR_r1, 4) = MR_r7;
	MR_tfield(2, MR_r1, 5) = MR_r8;
	MR_proceed();
MR_def_label(rtree__insert_tree_and_split_child2_9_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(rtree__insert_tree_and_split_child2_9_0_i25);
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r7;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_r10;
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_r2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__insert_tree_and_split_child2_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__insert_tree_and_split_child2_9_0_i26);
MR_def_label(rtree__insert_tree_and_split_child2_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__rtree__insert_tree_5_0,
		rtree__insert_tree_and_split_child2_9_0_i27);
MR_def_label(rtree__insert_tree_and_split_child2_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(16);
	}
MR_def_label(rtree__insert_tree_and_split_child2_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r7;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_r10;
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_r2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__insert_tree_and_split_child2_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__insert_tree_and_split_child2_9_0_i29);
MR_def_label(rtree__insert_tree_and_split_child2_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__rtree__insert_tree_5_0,
		rtree__insert_tree_and_split_child2_9_0_i30);
MR_def_label(rtree__insert_tree_and_split_child2_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module17)
	MR_init_entry1(rtree__insert_tree_and_split_child3_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__insert_tree_and_split_child3_11_0);
	MR_init_label10(rtree__insert_tree_and_split_child3_11_0,4,5,6,7,8,9,34,10,14,17)
	MR_init_label10(rtree__insert_tree_and_split_child3_11_0,18,16,20,21,3,65,26,27,25,29)
	MR_init_label1(rtree__insert_tree_and_split_child3_11_0,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_tree_and_split_child3'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(rtree__insert_tree_and_split_child3_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,3)) {
		MR_GOTO_LAB(rtree__insert_tree_and_split_child3_11_0_i3);
	}
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_r10;
	MR_sv(8) = MR_r11;
	MR_sv(9) = MR_r12;
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,
		rtree__insert_tree_and_split_child3_11_0_i4);
MR_def_label(rtree__insert_tree_and_split_child3_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r4;
	MR_r1 = MR_sv(13);
	MR_r3 = MR_sv(4);
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__insert_tree_and_split_child3_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__rtree__insert_tree_and_split_child3_11_0_i5);
MR_def_label(rtree__insert_tree_and_split_child3_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__insert_tree_and_split_child3_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__rtree__insert_tree_and_split_child3_11_0_i6);
MR_def_label(rtree__insert_tree_and_split_child3_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__insert_tree_and_split_child3_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__insert_tree_and_split_child3_11_0_i7);
MR_def_label(rtree__insert_tree_and_split_child3_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__insert_tree_and_split_child3_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__insert_tree_and_split_child3_11_0_i8);
MR_def_label(rtree__insert_tree_and_split_child3_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_float_to_word((MR_word_to_float(MR_r1) - MR_word_to_float(MR_sv(16))));
	MR_r6 = MR_float_to_word((MR_word_to_float(MR_sv(17)) - MR_word_to_float(MR_sv(15))));
	if ((MR_word_to_float(MR_r6) >= MR_word_to_float(MR_r5))) {
		MR_GOTO_LAB(rtree__insert_tree_and_split_child3_11_0_i9);
	}
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_sv(13);
	MR_GOTO_LAB(rtree__insert_tree_and_split_child3_11_0_i14);
MR_def_label(rtree__insert_tree_and_split_child3_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r6) <= MR_word_to_float(MR_r5))) {
		MR_GOTO_LAB(rtree__insert_tree_and_split_child3_11_0_i10);
	}
MR_def_label(rtree__insert_tree_and_split_child3_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_sv(13);
	MR_GOTO_LAB(rtree__insert_tree_and_split_child3_11_0_i14);
MR_def_label(rtree__insert_tree_and_split_child3_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(15)) > MR_word_to_float(MR_sv(16)))) {
		MR_GOTO_LAB(rtree__insert_tree_and_split_child3_11_0_i34);
	}
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_sv(13);
MR_def_label(rtree__insert_tree_and_split_child3_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(rtree__insert_tree_and_split_child3_11_0_i16);
	}
	MR_sv(6) = MR_r3;
	MR_sv(13) = MR_r1;
	MR_r2 = (MR_Integer) 4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__insert_tree_and_split_child3_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__insert_tree_and_split_child3_11_0_i17);
MR_def_label(rtree__insert_tree_and_split_child3_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_np_call_localret_ent(fn__rtree__insert_tree_5_0,
		rtree__insert_tree_and_split_child3_11_0_i18);
MR_def_label(rtree__insert_tree_and_split_child3_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 8);
	MR_tfield(3, MR_r2, 0) = MR_sv(2);
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_tfield(3, MR_r2, 2) = MR_sv(4);
	MR_tfield(3, MR_r2, 3) = MR_sv(5);
	MR_tfield(3, MR_r2, 4) = MR_sv(11);
	MR_tfield(3, MR_r2, 5) = MR_sv(12);
	MR_tfield(3, MR_r2, 6) = MR_sv(1);
	MR_tfield(3, MR_r2, 7) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(18);
MR_def_label(rtree__insert_tree_and_split_child3_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(13) = MR_r1;
	MR_r4 = MR_sv(11);
	MR_r2 = (MR_Integer) 4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__insert_tree_and_split_child3_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__insert_tree_and_split_child3_11_0_i20);
MR_def_label(rtree__insert_tree_and_split_child3_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__rtree__insert_tree_5_0,
		rtree__insert_tree_and_split_child3_11_0_i21);
MR_def_label(rtree__insert_tree_and_split_child3_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 8);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(18);
	}
MR_def_label(rtree__insert_tree_and_split_child3_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(rtree__insert_tree_and_split_child3_11_0_i65);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 8);
	MR_tfield(3, MR_r1, 0) = MR_r3;
	MR_tfield(3, MR_r1, 1) = MR_r4;
	MR_tfield(3, MR_r1, 2) = MR_r5;
	MR_tfield(3, MR_r1, 3) = MR_r6;
	MR_tfield(3, MR_r1, 4) = MR_r7;
	MR_tfield(3, MR_r1, 5) = MR_r8;
	MR_tfield(3, MR_r1, 6) = MR_r9;
	MR_tfield(3, MR_r1, 7) = MR_r10;
	MR_proceed();
MR_def_label(rtree__insert_tree_and_split_child3_11_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(rtree__insert_tree_and_split_child3_11_0_i25);
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r9;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_r10;
	MR_sv(8) = MR_r11;
	MR_sv(9) = MR_r12;
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r1;
	MR_r1 = MR_r2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__insert_tree_and_split_child3_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__insert_tree_and_split_child3_11_0_i26);
MR_def_label(rtree__insert_tree_and_split_child3_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__rtree__insert_tree_5_0,
		rtree__insert_tree_and_split_child3_11_0_i27);
MR_def_label(rtree__insert_tree_and_split_child3_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 6);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 5) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(18);
	}
MR_def_label(rtree__insert_tree_and_split_child3_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r9;
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_r10;
	MR_sv(8) = MR_r11;
	MR_sv(9) = MR_r12;
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r1;
	MR_r1 = MR_r2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__insert_tree_and_split_child3_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__insert_tree_and_split_child3_11_0_i29);
MR_def_label(rtree__insert_tree_and_split_child3_11_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__rtree__insert_tree_5_0,
		rtree__insert_tree_and_split_child3_11_0_i30);
MR_def_label(rtree__insert_tree_and_split_child3_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 6);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 5) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(18);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module18)
	MR_init_entry1(rtree__reinsert_deleted_subtrees_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__reinsert_deleted_subtrees_4_0);
	MR_init_label4(rtree__reinsert_deleted_subtrees_4_0,19,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reinsert_deleted_subtrees'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(rtree__reinsert_deleted_subtrees_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(rtree__reinsert_deleted_subtrees_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(rtree__reinsert_deleted_subtrees_4_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(6);
MR_def_label(rtree__reinsert_deleted_subtrees_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r5;
	MR_sv(2) = MR_tempr3;
	MR_tempr4 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_tempr1 = MR_tempr4;
	MR_r3 = MR_tempr3;
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr2, 1);
	MR_r6 = (MR_Integer) 1;
	MR_r7 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__rtree__insert_tree_5_0,
		rtree__reinsert_deleted_subtrees_4_0_i4);
MR_def_label(rtree__reinsert_deleted_subtrees_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(rtree__reinsert_deleted_subtrees_4_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = ((MR_Integer) MR_sv(1) + (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(rtree__reinsert_deleted_subtrees_4_0_i19);
	}
MR_def_label(rtree__reinsert_deleted_subtrees_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(rtree__reinsert_deleted_subtrees_4_0_i19);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(rtree_module19)
	MR_init_entry1(rtree__delete_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__delete_4_0);
	MR_init_label10(rtree__delete_4_0,4,6,3,9,17,20,15,14,12,32)
	MR_init_label2(rtree__delete_4_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__delete_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(rtree__delete_4_0_i3);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		rtree__delete_4_0_i4);
MR_def_label(rtree__delete_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__delete_4_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = (MR_Integer) 2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__delete_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__rtree__delete_4_0_i6);
MR_def_label(rtree__delete_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__delete_4_0_i1);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(rtree__delete_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(rtree__delete_4_0_i1);
	}
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(2, MR_r5, 0);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(rtree__delete_2_7_0,
		rtree__delete_4_0_i9);
MR_def_label(rtree__delete_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__delete_4_0_i1);
	}
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(rtree__delete_4_0_i12);
	}
	MR_r2 = MR_tfield(0, MR_r4, 0);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(rtree__delete_4_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	MR_r5 = MR_tfield(1, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(rtree__delete_4_0_i15);
	}
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(rtree__delete_4_0_i17);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rtree__delete_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(rtree__delete_4_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(rtree__delete_4_0_i20);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tempr2 = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rtree__delete_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("delete: unbalanced rtree", 24);
	MR_np_call_localret_ent(require__error_1_0,
		rtree__delete_4_0_i2);
MR_def_label(rtree__delete_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r5;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__reinsert_deleted_subtrees_4_0,
		rtree__delete_4_0_i32);
MR_def_label(rtree__delete_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("delete: expected delete info", 28);
	MR_np_call_localret_ent(require__error_1_0,
		rtree__delete_4_0_i2);
MR_def_label(rtree__delete_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(1, MR_r4, 1);
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__reinsert_deleted_subtrees_4_0,
		rtree__delete_4_0_i32);
MR_def_label(rtree__delete_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(rtree__delete_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(rtree__delete_4_0,1)
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


MR_BEGIN_MODULE(rtree_module20)
	MR_init_entry1(fn__rtree__search_intersects_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__search_intersects_2_0);
	MR_init_label10(fn__rtree__search_intersects_2_0,24,3,6,4,12,13,14,11,66,19)
	MR_init_label3(fn__rtree__search_intersects_2_0,20,18,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_intersects'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__search_intersects_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__rtree__search_intersects_2_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(fn__rtree__search_intersects_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(fn__rtree__search_intersects_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(fn__rtree__search_intersects_2_0_i4);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_r2;
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_r4;
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__rtree__search_intersects_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__rtree__search_intersects_2_0_i6);
MR_def_label(fn__rtree__search_intersects_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__rtree__search_intersects_2_0_i24);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(fn__rtree__search_intersects_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_tfield(2, MR_r3, 0);
	if (MR_PTAG_TESTR(MR_r6,3)) {
		MR_GOTO_LAB(fn__rtree__search_intersects_2_0_i11);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 7);
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 0);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		fn__rtree__search_intersects_2_0_i12);
MR_def_label(fn__rtree__search_intersects_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		fn__rtree__search_intersects_2_0_i13);
MR_def_label(fn__rtree__search_intersects_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		fn__rtree__search_intersects_2_0_i14);
MR_def_label(fn__rtree__search_intersects_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0);
	}
MR_def_label(fn__rtree__search_intersects_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,0)) {
		MR_GOTO_LAB(fn__rtree__search_intersects_2_0_i66);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tfield(0, MR_r6, 0);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__rtree__search_intersects_2_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(fn__rtree__search_intersects_2_0_i18);
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(3) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(2, MR_tempr1, 5);
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		fn__rtree__search_intersects_2_0_i19);
MR_def_label(fn__rtree__search_intersects_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		fn__rtree__search_intersects_2_0_i20);
MR_def_label(fn__rtree__search_intersects_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0);
	}
MR_def_label(fn__rtree__search_intersects_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 3);
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		fn__rtree__search_intersects_2_0_i22);
MR_def_label(fn__rtree__search_intersects_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module21)
	MR_init_entry1(fn__rtree__search_contains_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__search_contains_2_0);
	MR_init_label10(fn__rtree__search_contains_2_0,24,3,6,4,12,13,14,11,66,19)
	MR_init_label3(fn__rtree__search_contains_2_0,20,18,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_contains'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__search_contains_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__rtree__search_contains_2_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(fn__rtree__search_contains_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(fn__rtree__search_contains_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(fn__rtree__search_contains_2_0_i4);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_r2;
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_r4;
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__rtree__search_contains_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__rtree__search_contains_2_0_i6);
MR_def_label(fn__rtree__search_contains_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__rtree__search_contains_2_0_i24);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(fn__rtree__search_contains_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_tfield(2, MR_r3, 0);
	if (MR_PTAG_TESTR(MR_r6,3)) {
		MR_GOTO_LAB(fn__rtree__search_contains_2_0_i11);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 7);
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 0);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		fn__rtree__search_contains_2_0_i12);
MR_def_label(fn__rtree__search_contains_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		fn__rtree__search_contains_2_0_i13);
MR_def_label(fn__rtree__search_contains_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		fn__rtree__search_contains_2_0_i14);
MR_def_label(fn__rtree__search_contains_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0);
	}
MR_def_label(fn__rtree__search_contains_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,0)) {
		MR_GOTO_LAB(fn__rtree__search_contains_2_0_i66);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tfield(0, MR_r6, 0);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__rtree__search_contains_2_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(fn__rtree__search_contains_2_0_i18);
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(3) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(2, MR_tempr1, 5);
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		fn__rtree__search_contains_2_0_i19);
MR_def_label(fn__rtree__search_contains_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		fn__rtree__search_contains_2_0_i20);
MR_def_label(fn__rtree__search_contains_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0);
	}
MR_def_label(fn__rtree__search_contains_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 3);
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		fn__rtree__search_contains_2_0_i22);
MR_def_label(fn__rtree__search_contains_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(rtree_module22)
	MR_init_entry1(rtree__search_general_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__search_general_2_5_0);
	MR_init_label10(rtree__search_general_2_5_0,4,5,6,3,11,9,8,16,17,15)
	MR_init_label1(rtree__search_general_2_5_0,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_general_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__search_general_2_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(rtree__search_general_2_5_0_i3);
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 6);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 7);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_tfield(3, MR_r3, 0);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_sv(1);
	MR_tempr1 = MR_r6;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__search_general_subtree_6_0,
		rtree__search_general_2_5_0_i4);
MR_def_label(rtree__search_general_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__search_general_subtree_6_0,
		rtree__search_general_2_5_0_i5);
MR_def_label(rtree__search_general_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__search_general_subtree_6_0,
		rtree__search_general_2_5_0_i6);
MR_def_label(rtree__search_general_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(rtree__search_general_subtree_6_0);
	}
MR_def_label(rtree__search_general_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(rtree__search_general_2_5_0_i8);
	}
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_tfield(0, MR_r3, 0);
	MR_r1 = MR_r5;
	MR_r2 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__search_general_2_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__rtree__search_general_2_5_0_i11);
MR_def_label(rtree__search_general_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_general_2_5_0_i9);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(11);
MR_def_label(rtree__search_general_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(rtree__search_general_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(rtree__search_general_2_5_0_i15);
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(2, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(2, MR_tempr2, 5);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_tfield(2, MR_r3, 0);
	MR_r4 = MR_tfield(2, MR_tempr1, 1);
	MR_r5 = MR_sv(1);
	MR_tempr1 = MR_r6;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__search_general_subtree_6_0,
		rtree__search_general_2_5_0_i16);
MR_def_label(rtree__search_general_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__search_general_subtree_6_0,
		rtree__search_general_2_5_0_i17);
MR_def_label(rtree__search_general_2_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(rtree__search_general_subtree_6_0);
	}
MR_def_label(rtree__search_general_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_r4 = MR_tfield(1, MR_tempr1, 1);
	MR_r5 = MR_sv(1);
	MR_tempr1 = MR_r6;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__search_general_subtree_6_0,
		rtree__search_general_2_5_0_i19);
MR_def_label(rtree__search_general_2_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(rtree__search_general_subtree_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module23)
	MR_init_entry1(rtree__search_general_subtree_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__search_general_subtree_6_0);
	MR_init_label2(rtree__search_general_subtree_6_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_general_subtree'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__search_general_subtree_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__search_general_subtree_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__rtree__search_general_subtree_6_0_i4);
MR_def_label(rtree__search_general_subtree_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_general_subtree_6_0_i2);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(rtree__search_general_2_5_0);
MR_def_label(rtree__search_general_subtree_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module24)
	MR_init_entry1(fn__rtree__search_general_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__search_general_3_0);
	MR_init_label5(fn__rtree__search_general_3_0,13,3,6,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_general'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__search_general_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(fn__rtree__search_general_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__rtree__search_general_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(fn__rtree__search_general_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(fn__rtree__search_general_3_0_i4);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__rtree__search_general_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__rtree__search_general_3_0_i6);
MR_def_label(fn__rtree__search_general_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__rtree__search_general_3_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__rtree__search_general_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__rtree__search_general_3_0_i8);
MR_def_label(fn__rtree__search_general_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__rtree__search_general_3_0_i13);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(fn__rtree__search_general_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(2, MR_r5, 0);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(rtree__search_general_2_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(rtree_module25)
	MR_init_entry1(rtree__maybe_limit_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__maybe_limit_4_0);
	MR_init_label3(rtree__maybe_limit_4_0,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_limit'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__maybe_limit_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = MR_r3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__maybe_limit_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__rtree__maybe_limit_4_0_i2);
MR_def_label(rtree__maybe_limit_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__maybe_limit_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__maybe_limit_4_0_i4);
MR_def_label(rtree__maybe_limit_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__maybe_limit_4_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(rtree__maybe_limit_4_0,1)
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


MR_BEGIN_MODULE(rtree_module26)
	MR_init_entry1(rtree__search_first_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__search_first_2_6_0);
	MR_init_label10(rtree__search_first_2_6_0,375,5,7,9,11,14,18,16,13,27)
	MR_init_label10(rtree__search_first_2_6_0,26,8,37,41,39,36,50,49,4,61)
	MR_init_label10(rtree__search_first_2_6_0,65,69,67,63,78,77,60,88,92,91)
	MR_init_label10(rtree__search_first_2_6_0,87,99,3,107,106,112,116,120,118,114)
	MR_init_label10(rtree__search_first_2_6_0,129,128,110,139,143,142,137,150,109,158)
	MR_init_label5(rtree__search_first_2_6_0,162,161,156,169,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_first_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__search_first_2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
MR_def_label(rtree__search_first_2_6_0,375)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,3)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(10) = MR_tfield(3, MR_tempr1, 7);
	MR_sv(9) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(12) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(3, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__search_first_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__rtree__search_first_2_6_0_i5);
MR_def_label(rtree__search_first_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i4);
	}
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(14);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_6_0_i7);
MR_def_label(rtree__search_first_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__search_first_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__rtree__search_first_2_6_0_i9);
MR_def_label(rtree__search_first_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i8);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(14);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_6_0_i11);
MR_def_label(rtree__search_first_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i8);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i14);
MR_def_label(rtree__search_first_2_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i13);
	}
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i18);
MR_def_label(rtree__search_first_2_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i16);
	}
	MR_r1 = MR_sv(14);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(1);
	MR_r13 = MR_sv(2);
	MR_r14 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(rtree__search_first_2_four_choices_13_0);
	}
MR_def_label(rtree__search_first_2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r1 = MR_sv(14);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(1);
	MR_r11 = MR_sv(2);
	MR_r12 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(rtree__search_first_2_three_choices_11_0);
	}
MR_def_label(rtree__search_first_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i27);
MR_def_label(rtree__search_first_2_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i26);
	}
	MR_r1 = MR_sv(14);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(1);
	MR_r11 = MR_sv(2);
	MR_r12 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(rtree__search_first_2_three_choices_11_0);
	}
MR_def_label(rtree__search_first_2_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(rtree__search_first_2_two_choices_9_0);
MR_def_label(rtree__search_first_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i37);
MR_def_label(rtree__search_first_2_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i36);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i41);
MR_def_label(rtree__search_first_2_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i39);
	}
	MR_r1 = MR_sv(14);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(1);
	MR_r11 = MR_sv(2);
	MR_r12 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(rtree__search_first_2_three_choices_11_0);
	}
MR_def_label(rtree__search_first_2_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(14);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(rtree__search_first_2_two_choices_9_0);
	}
MR_def_label(rtree__search_first_2_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i50);
MR_def_label(rtree__search_first_2_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i49);
	}
	MR_r1 = MR_sv(14);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(rtree__search_first_2_two_choices_9_0);
	}
MR_def_label(rtree__search_first_2_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(rtree__search_first_2_6_0_i375);
MR_def_label(rtree__search_first_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i61);
MR_def_label(rtree__search_first_2_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i60);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i65);
MR_def_label(rtree__search_first_2_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i63);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i69);
MR_def_label(rtree__search_first_2_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i67);
	}
	MR_r1 = MR_sv(14);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(1);
	MR_r11 = MR_sv(2);
	MR_r12 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(rtree__search_first_2_three_choices_11_0);
	}
MR_def_label(rtree__search_first_2_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(14);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(rtree__search_first_2_two_choices_9_0);
	}
MR_def_label(rtree__search_first_2_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i78);
MR_def_label(rtree__search_first_2_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i77);
	}
	MR_r1 = MR_sv(14);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(rtree__search_first_2_two_choices_9_0);
	}
MR_def_label(rtree__search_first_2_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(rtree__search_first_2_6_0_i375);
MR_def_label(rtree__search_first_2_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i88);
MR_def_label(rtree__search_first_2_6_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i87);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i92);
MR_def_label(rtree__search_first_2_6_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i91);
	}
	MR_r1 = MR_sv(14);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(rtree__search_first_2_two_choices_9_0);
	}
MR_def_label(rtree__search_first_2_6_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(rtree__search_first_2_6_0_i375);
MR_def_label(rtree__search_first_2_6_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i99);
MR_def_label(rtree__search_first_2_6_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i1);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(rtree__search_first_2_6_0_i375);
MR_def_label(rtree__search_first_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i106);
	}
	MR_sv(1) = MR_tfield(0, MR_r4, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i107);
MR_def_label(rtree__search_first_2_6_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(15);
	}
MR_def_label(rtree__search_first_2_6_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i109);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r4;
	MR_sv(8) = MR_tfield(2, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 2);
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r6;
	MR_tempr3 = MR_r7;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(12) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_tempr4 = MR_r3;
	MR_sv(14) = MR_tempr4;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tfield(2, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i112);
MR_def_label(rtree__search_first_2_6_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i110);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i116);
MR_def_label(rtree__search_first_2_6_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i114);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i120);
MR_def_label(rtree__search_first_2_6_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i118);
	}
	MR_r1 = MR_sv(14);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(1);
	MR_r11 = MR_sv(2);
	MR_r12 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(rtree__search_first_2_three_choices_11_0);
	}
MR_def_label(rtree__search_first_2_6_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r1 = MR_sv(14);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(rtree__search_first_2_two_choices_9_0);
	}
MR_def_label(rtree__search_first_2_6_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i129);
MR_def_label(rtree__search_first_2_6_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i128);
	}
	MR_r1 = MR_sv(14);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(rtree__search_first_2_two_choices_9_0);
	}
MR_def_label(rtree__search_first_2_6_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(rtree__search_first_2_6_0_i375);
MR_def_label(rtree__search_first_2_6_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tempr3 = MR_sv(3);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_tempr4 = MR_sv(14);
	MR_r3 = MR_tempr4;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i139);
MR_def_label(rtree__search_first_2_6_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i137);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i143);
MR_def_label(rtree__search_first_2_6_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i142);
	}
	MR_r1 = MR_sv(14);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(rtree__search_first_2_two_choices_9_0);
	}
MR_def_label(rtree__search_first_2_6_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(rtree__search_first_2_6_0_i375);
MR_def_label(rtree__search_first_2_6_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tempr3 = MR_sv(3);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_tempr4 = MR_sv(14);
	MR_r3 = MR_tempr4;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i150);
MR_def_label(rtree__search_first_2_6_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i1);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(rtree__search_first_2_6_0_i375);
MR_def_label(rtree__search_first_2_6_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 2);
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r6;
	MR_tempr3 = MR_r7;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(12) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_tempr4 = MR_r3;
	MR_sv(14) = MR_tempr4;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i158);
MR_def_label(rtree__search_first_2_6_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i156);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i162);
MR_def_label(rtree__search_first_2_6_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i161);
	}
	MR_r1 = MR_sv(14);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(rtree__search_first_2_two_choices_9_0);
	}
MR_def_label(rtree__search_first_2_6_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(rtree__search_first_2_6_0_i375);
MR_def_label(rtree__search_first_2_6_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tempr3 = MR_sv(3);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_tempr4 = MR_sv(14);
	MR_r3 = MR_tempr4;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(rtree__maybe_limit_4_0,
		rtree__search_first_2_6_0_i169);
MR_def_label(rtree__search_first_2_6_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_6_0_i1);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(rtree__search_first_2_6_0_i375);
MR_def_label(rtree__search_first_2_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module27)
	MR_init_entry1(rtree__search_first_2_two_choices_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__search_first_2_two_choices_9_0);
	MR_init_label2(rtree__search_first_2_two_choices_9_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_first_2_two_choices'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(rtree__search_first_2_two_choices_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_r10;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_two_choices_9_0_i3);
MR_def_label(rtree__search_first_2_two_choices_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_two_choices_9_0_i2);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(rtree__search_first_2_try_first_from_two_8_0);
MR_def_label(rtree__search_first_2_two_choices_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(rtree__search_first_2_try_first_from_two_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module28)
	MR_init_entry1(rtree__search_first_2_three_choices_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__search_first_2_three_choices_11_0);
	MR_init_label9(rtree__search_first_2_three_choices_11_0,3,5,4,2,8,7,10,12,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_first_2_three_choices'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(rtree__search_first_2_three_choices_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_r10;
	MR_sv(8) = MR_r11;
	MR_sv(9) = MR_r12;
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_three_choices_11_0_i3);
MR_def_label(rtree__search_first_2_three_choices_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_three_choices_11_0_i2);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_three_choices_11_0_i5);
MR_def_label(rtree__search_first_2_three_choices_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_three_choices_11_0_i4);
	}
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = (MR_Integer) 0;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_GOTO_LAB(rtree__search_first_2_three_choices_11_0_i10);
MR_def_label(rtree__search_first_2_three_choices_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = (MR_Integer) 2;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_GOTO_LAB(rtree__search_first_2_three_choices_11_0_i10);
MR_def_label(rtree__search_first_2_three_choices_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_three_choices_11_0_i8);
MR_def_label(rtree__search_first_2_three_choices_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_three_choices_11_0_i7);
	}
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = (MR_Integer) 1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_GOTO_LAB(rtree__search_first_2_three_choices_11_0_i10);
MR_def_label(rtree__search_first_2_three_choices_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = (MR_Integer) 2;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
MR_def_label(rtree__search_first_2_three_choices_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r12,0)) {
		MR_GOTO_LAB(rtree__search_first_2_three_choices_11_0_i12);
	}
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(rtree__search_first_2_try_first_from_three_10_0);
MR_def_label(rtree__search_first_2_three_choices_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r12,1)) {
		MR_GOTO_LAB(rtree__search_first_2_three_choices_11_0_i15);
	}
	MR_r4 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(rtree__search_first_2_try_first_from_three_10_0);
	}
MR_def_label(rtree__search_first_2_three_choices_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_r6 = MR_r8;
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(rtree__search_first_2_try_first_from_three_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module29)
	MR_init_entry1(rtree__search_first_2_four_choices_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__search_first_2_four_choices_13_0);
	MR_init_label10(rtree__search_first_2_four_choices_13_0,3,2,4,6,5,7,9,8,10,12)
	MR_init_label2(rtree__search_first_2_four_choices_13_0,15,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_first_2_four_choices'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(rtree__search_first_2_four_choices_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_r10;
	MR_sv(8) = MR_r11;
	MR_sv(9) = MR_r12;
	MR_sv(10) = MR_r13;
	MR_sv(11) = MR_r14;
	MR_sv(12) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_four_choices_13_0_i3);
MR_def_label(rtree__search_first_2_four_choices_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_four_choices_13_0_i2);
	}
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(12);
	MR_sv(15) = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_GOTO_LAB(rtree__search_first_2_four_choices_13_0_i4);
MR_def_label(rtree__search_first_2_four_choices_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(12);
	MR_sv(15) = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
MR_def_label(rtree__search_first_2_four_choices_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(12) = MR_r1;
	MR_sv(16) = MR_r2;
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_four_choices_13_0_i6);
MR_def_label(rtree__search_first_2_four_choices_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_four_choices_13_0_i5);
	}
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(16);
	MR_GOTO_LAB(rtree__search_first_2_four_choices_13_0_i7);
MR_def_label(rtree__search_first_2_four_choices_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(12);
	MR_sv(15) = (MR_Integer) 2;
	MR_r2 = MR_sv(3);
MR_def_label(rtree__search_first_2_four_choices_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_four_choices_13_0_i9);
MR_def_label(rtree__search_first_2_four_choices_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_four_choices_13_0_i8);
	}
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
	MR_r14 = MR_sv(15);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(14);
	MR_GOTO_LAB(rtree__search_first_2_four_choices_13_0_i10);
MR_def_label(rtree__search_first_2_four_choices_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_r14 = (MR_Integer) 3;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(14);
MR_def_label(rtree__search_first_2_four_choices_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r14,0)) {
		MR_GOTO_LAB(rtree__search_first_2_four_choices_13_0_i12);
	}
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(rtree__search_first_2_try_first_from_four_12_0);
MR_def_label(rtree__search_first_2_four_choices_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r14,3)) {
		MR_GOTO_LAB(rtree__search_first_2_four_choices_13_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_sv(1);
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_tempr3 = MR_r7;
	MR_r7 = MR_r10;
	MR_tempr4 = MR_r8;
	MR_r8 = MR_tempr3;
	MR_tempr5 = MR_r9;
	MR_r9 = MR_tempr4;
	MR_r10 = MR_tempr5;
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(rtree__search_first_2_try_first_from_four_12_0);
	}
MR_def_label(rtree__search_first_2_four_choices_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r14,1)) {
		MR_GOTO_LAB(rtree__search_first_2_four_choices_13_0_i18);
	}
	MR_r4 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(rtree__search_first_2_try_first_from_four_12_0);
	}
MR_def_label(rtree__search_first_2_four_choices_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_r7 = MR_r9;
	MR_tempr3 = MR_r8;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(rtree__search_first_2_try_first_from_four_12_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module30)
	MR_init_entry1(rtree__search_first_2_try_first_from_four_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__search_first_2_try_first_from_four_12_0);
	MR_init_label3(rtree__search_first_2_try_first_from_four_12_0,4,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_first_2_try_first_from_four'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(rtree__search_first_2_try_first_from_four_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r9;
	MR_sv(6) = MR_r10;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r11;
	MR_sv(7) = MR_tempr1;
	MR_tempr2 = MR_r12;
	MR_sv(8) = MR_tempr2;
	MR_tempr3 = MR_r13;
	MR_sv(9) = MR_tempr3;
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_tempr4 = MR_r3;
	MR_sv(12) = MR_tempr4;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_r7;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	}
	MR_np_call_localret_ent(rtree__search_first_2_6_0,
		rtree__search_first_2_try_first_from_four_12_0_i4);
MR_def_label(rtree__search_first_2_try_first_from_four_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_try_first_from_four_12_0_i2);
	}
	MR_r1 = MR_sv(12);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_sv(5);
	MR_r11 = MR_sv(6);
	MR_r12 = MR_sv(7);
	MR_r13 = MR_sv(8);
	}
	MR_np_call_localret_ent(rtree__search_first_2_find_better_solution_three_12_0,
		rtree__search_first_2_try_first_from_four_12_0_i6);
MR_def_label(rtree__search_first_2_try_first_from_four_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rtree__search_first_2_try_first_from_four_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(5);
	MR_r10 = MR_sv(6);
	MR_r11 = MR_sv(7);
	MR_r12 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r7 = MR_r8;
	MR_r8 = MR_r9;
	MR_r9 = MR_r10;
	MR_r10 = MR_r11;
	MR_r11 = MR_r12;
	MR_r12 = MR_tempr1;
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(rtree__search_first_2_three_choices_11_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module31)
	MR_init_entry1(rtree__search_first_2_try_first_from_three_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__search_first_2_try_first_from_three_10_0);
	MR_init_label5(rtree__search_first_2_try_first_from_three_10_0,4,6,2,8,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_first_2_try_first_from_three'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(rtree__search_first_2_try_first_from_three_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r9;
	MR_sv(5) = MR_tempr1;
	MR_tempr2 = MR_r10;
	MR_sv(6) = MR_tempr2;
	MR_tempr3 = MR_r11;
	MR_sv(7) = MR_tempr3;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_tempr4 = MR_r3;
	MR_sv(10) = MR_tempr4;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_r6;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	}
	MR_np_call_localret_ent(rtree__search_first_2_6_0,
		rtree__search_first_2_try_first_from_three_10_0_i4);
MR_def_label(rtree__search_first_2_try_first_from_three_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_try_first_from_three_10_0_i2);
	}
	MR_r1 = MR_sv(10);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_sv(5);
	MR_r11 = MR_sv(6);
	}
	MR_np_call_localret_ent(rtree__search_first_2_find_better_solution_two_10_0,
		rtree__search_first_2_try_first_from_three_10_0_i6);
MR_def_label(rtree__search_first_2_try_first_from_three_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rtree__search_first_2_try_first_from_three_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_tempr3 = MR_sv(3);
	MR_tempr4 = MR_sv(4);
	MR_tempr5 = MR_sv(5);
	MR_tempr6 = MR_sv(6);
	MR_tempr7 = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_try_first_from_three_10_0_i8);
MR_def_label(rtree__search_first_2_try_first_from_three_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_try_first_from_three_10_0_i7);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(rtree__search_first_2_try_first_from_two_8_0);
MR_def_label(rtree__search_first_2_try_first_from_three_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(rtree__search_first_2_try_first_from_two_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module32)
	MR_init_entry1(rtree__search_first_2_try_first_from_two_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__search_first_2_try_first_from_two_8_0);
	MR_init_label3(rtree__search_first_2_try_first_from_two_8_0,4,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_first_2_try_first_from_two'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(rtree__search_first_2_try_first_from_two_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r7;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(4) = MR_tempr2;
	MR_tempr3 = MR_r9;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_tempr4 = MR_r3;
	MR_sv(8) = MR_tempr4;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	}
	MR_np_call_localret_ent(rtree__search_first_2_6_0,
		rtree__search_first_2_try_first_from_two_8_0_i4);
MR_def_label(rtree__search_first_2_try_first_from_two_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_try_first_from_two_8_0_i2);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	}
	MR_np_call_localret_ent(rtree__search_first_2_find_better_solution_one_8_0,
		rtree__search_first_2_try_first_from_two_8_0_i6);
MR_def_label(rtree__search_first_2_try_first_from_two_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rtree__search_first_2_try_first_from_two_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(4);
	MR_tempr2 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(rtree__search_first_2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module33)
	MR_init_entry1(rtree__search_first_2_find_better_solution_one_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__search_first_2_find_better_solution_one_8_0);
	MR_init_label6(rtree__search_first_2_find_better_solution_one_8_0,3,2,6,9,15,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_first_2_find_better_solution_one'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(rtree__search_first_2_find_better_solution_one_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_r8;
	MR_sv(5) = MR_r9;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r6;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_find_better_solution_one_8_0_i3);
MR_def_label(rtree__search_first_2_find_better_solution_one_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_find_better_solution_one_8_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(9);
MR_def_label(rtree__search_first_2_find_better_solution_one_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(2);
	MR_np_call_localret_ent(rtree__search_first_2_6_0,
		rtree__search_first_2_find_better_solution_one_8_0_i6);
MR_def_label(rtree__search_first_2_find_better_solution_one_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_find_better_solution_one_8_0_i15);
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_find_better_solution_one_8_0_i9);
MR_def_label(rtree__search_first_2_find_better_solution_one_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_find_better_solution_one_8_0_i8);
	}
MR_def_label(rtree__search_first_2_find_better_solution_one_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(9);
MR_def_label(rtree__search_first_2_find_better_solution_one_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module34)
	MR_init_entry1(rtree__search_first_2_find_better_solution_two_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__search_first_2_find_better_solution_two_10_0);
	MR_init_label8(rtree__search_first_2_find_better_solution_two_10_0,3,5,2,8,7,10,13,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_first_2_find_better_solution_two'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(rtree__search_first_2_find_better_solution_two_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
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
	MR_sv(7) = MR_r10;
	MR_sv(8) = MR_r11;
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_find_better_solution_two_10_0_i3);
MR_def_label(rtree__search_first_2_find_better_solution_two_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_find_better_solution_two_10_0_i2);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_find_better_solution_two_10_0_i5);
MR_def_label(rtree__search_first_2_find_better_solution_two_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_find_better_solution_two_10_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(rtree__search_first_2_find_better_solution_two_10_0_i10);
MR_def_label(rtree__search_first_2_find_better_solution_two_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_find_better_solution_two_10_0_i8);
MR_def_label(rtree__search_first_2_find_better_solution_two_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_find_better_solution_two_10_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(rtree__search_first_2_find_better_solution_two_10_0_i10);
MR_def_label(rtree__search_first_2_find_better_solution_two_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 2;
MR_def_label(rtree__search_first_2_find_better_solution_two_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(rtree__search_first_2_find_better_solution_two_10_0_i11);
	}
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(rtree__search_first_2_find_better_solution_two_10_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(rtree__search_first_2_better_solution_two_9_0);
	}
MR_def_label(rtree__search_first_2_find_better_solution_two_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(rtree__search_first_2_better_solution_two_9_0);
	}
MR_def_label(rtree__search_first_2_find_better_solution_two_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module35)
	MR_init_entry1(rtree__search_first_2_better_solution_two_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__search_first_2_better_solution_two_9_0);
	MR_init_label10(rtree__search_first_2_better_solution_two_9_0,4,7,9,8,12,15,6,20,19,23)
	MR_init_label9(rtree__search_first_2_better_solution_two_9_0,26,61,2,32,31,35,38,53,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_first_2_better_solution_two'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(rtree__search_first_2_better_solution_two_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r8;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r9;
	MR_sv(5) = MR_tempr1;
	MR_tempr2 = MR_r10;
	MR_sv(6) = MR_tempr2;
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_tempr3 = MR_r3;
	MR_sv(11) = MR_tempr3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_r7;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(2);
	}
	MR_np_call_localret_ent(rtree__search_first_2_6_0,
		rtree__search_first_2_better_solution_two_9_0_i4);
MR_def_label(rtree__search_first_2_better_solution_two_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_better_solution_two_9_0_i2);
	}
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_better_solution_two_9_0_i7);
MR_def_label(rtree__search_first_2_better_solution_two_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_better_solution_two_9_0_i6);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_better_solution_two_9_0_i9);
MR_def_label(rtree__search_first_2_better_solution_two_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_better_solution_two_9_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(12);
MR_def_label(rtree__search_first_2_better_solution_two_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(2);
	MR_np_call_localret_ent(rtree__search_first_2_6_0,
		rtree__search_first_2_better_solution_two_9_0_i12);
MR_def_label(rtree__search_first_2_better_solution_two_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_better_solution_two_9_0_i53);
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_better_solution_two_9_0_i15);
MR_def_label(rtree__search_first_2_better_solution_two_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_better_solution_two_9_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(12);
MR_def_label(rtree__search_first_2_better_solution_two_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_better_solution_two_9_0_i20);
MR_def_label(rtree__search_first_2_better_solution_two_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_better_solution_two_9_0_i19);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(12);
MR_def_label(rtree__search_first_2_better_solution_two_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(8);
	MR_np_call_localret_ent(rtree__search_first_2_6_0,
		rtree__search_first_2_better_solution_two_9_0_i23);
MR_def_label(rtree__search_first_2_better_solution_two_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_better_solution_two_9_0_i61);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_better_solution_two_9_0_i26);
MR_def_label(rtree__search_first_2_better_solution_two_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_better_solution_two_9_0_i53);
	}
MR_def_label(rtree__search_first_2_better_solution_two_9_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(12);
MR_def_label(rtree__search_first_2_better_solution_two_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_tempr3 = MR_sv(3);
	MR_tempr4 = MR_sv(4);
	MR_tempr5 = MR_sv(5);
	MR_tempr6 = MR_sv(6);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_better_solution_two_9_0_i32);
MR_def_label(rtree__search_first_2_better_solution_two_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_better_solution_two_9_0_i31);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(12);
MR_def_label(rtree__search_first_2_better_solution_two_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(2);
	MR_np_call_localret_ent(rtree__search_first_2_6_0,
		rtree__search_first_2_better_solution_two_9_0_i35);
MR_def_label(rtree__search_first_2_better_solution_two_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_better_solution_two_9_0_i53);
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_better_solution_two_9_0_i38);
MR_def_label(rtree__search_first_2_better_solution_two_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_better_solution_two_9_0_i37);
	}
MR_def_label(rtree__search_first_2_better_solution_two_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(12);
MR_def_label(rtree__search_first_2_better_solution_two_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module36)
	MR_init_entry1(rtree__search_first_2_find_better_solution_three_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__search_first_2_find_better_solution_three_12_0);
	MR_init_label10(rtree__search_first_2_find_better_solution_three_12_0,3,2,4,6,5,7,9,8,10,13)
	MR_init_label2(rtree__search_first_2_find_better_solution_three_12_0,15,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_first_2_find_better_solution_three'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(rtree__search_first_2_find_better_solution_three_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
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
	MR_sv(7) = MR_r10;
	MR_sv(8) = MR_r11;
	MR_sv(9) = MR_r12;
	MR_sv(10) = MR_r13;
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_find_better_solution_three_12_0_i3);
MR_def_label(rtree__search_first_2_find_better_solution_three_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_find_better_solution_three_12_0_i2);
	}
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(12);
	MR_sv(14) = (MR_Integer) 0;
	MR_r2 = MR_sv(2);
	MR_GOTO_LAB(rtree__search_first_2_find_better_solution_three_12_0_i4);
MR_def_label(rtree__search_first_2_find_better_solution_three_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(12);
	MR_sv(14) = (MR_Integer) 1;
	MR_r2 = MR_sv(3);
MR_def_label(rtree__search_first_2_find_better_solution_three_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(12) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_find_better_solution_three_12_0_i6);
MR_def_label(rtree__search_first_2_find_better_solution_three_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_find_better_solution_three_12_0_i5);
	}
	MR_r3 = MR_sv(5);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(15);
	MR_GOTO_LAB(rtree__search_first_2_find_better_solution_three_12_0_i7);
MR_def_label(rtree__search_first_2_find_better_solution_three_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_r1 = MR_sv(12);
	MR_sv(14) = (MR_Integer) 2;
	MR_r2 = MR_sv(4);
MR_def_label(rtree__search_first_2_find_better_solution_three_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_find_better_solution_three_12_0_i9);
MR_def_label(rtree__search_first_2_find_better_solution_three_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_find_better_solution_three_12_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(14);
	MR_GOTO_LAB(rtree__search_first_2_find_better_solution_three_12_0_i10);
MR_def_label(rtree__search_first_2_find_better_solution_three_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 3;
MR_def_label(rtree__search_first_2_find_better_solution_three_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(rtree__search_first_2_find_better_solution_three_12_0_i11);
	}
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(rtree__search_first_2_find_better_solution_three_12_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_sv(7);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(10);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(rtree__search_first_2_better_solution_three_11_0);
	}
MR_def_label(rtree__search_first_2_find_better_solution_three_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(rtree__search_first_2_find_better_solution_three_12_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(10);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(rtree__search_first_2_better_solution_three_11_0);
	}
MR_def_label(rtree__search_first_2_find_better_solution_three_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(10);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(rtree__search_first_2_better_solution_three_11_0);
	}
MR_def_label(rtree__search_first_2_find_better_solution_three_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module37)
	MR_init_entry1(rtree__search_first_2_better_solution_three_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__search_first_2_better_solution_three_11_0);
	MR_init_label10(rtree__search_first_2_better_solution_three_11_0,4,7,9,11,8,14,13,16,19,6)
	MR_init_label9(rtree__search_first_2_better_solution_three_11_0,23,25,22,28,27,30,33,2,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_first_2_better_solution_three'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(rtree__search_first_2_better_solution_three_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r9;
	MR_sv(6) = MR_r10;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r11;
	MR_sv(7) = MR_tempr1;
	MR_tempr2 = MR_r12;
	MR_sv(8) = MR_tempr2;
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_tempr3 = MR_r3;
	MR_sv(13) = MR_tempr3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_r8;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(2);
	}
	MR_np_call_localret_ent(rtree__search_first_2_6_0,
		rtree__search_first_2_better_solution_three_11_0_i4);
MR_def_label(rtree__search_first_2_better_solution_three_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_better_solution_three_11_0_i2);
	}
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_better_solution_three_11_0_i7);
MR_def_label(rtree__search_first_2_better_solution_three_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_better_solution_three_11_0_i6);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_better_solution_three_11_0_i9);
MR_def_label(rtree__search_first_2_better_solution_three_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_better_solution_three_11_0_i8);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_better_solution_three_11_0_i11);
MR_def_label(rtree__search_first_2_better_solution_three_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_better_solution_three_11_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(rtree__search_first_2_better_solution_three_11_0_i16);
MR_def_label(rtree__search_first_2_better_solution_three_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_better_solution_three_11_0_i14);
MR_def_label(rtree__search_first_2_better_solution_three_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_better_solution_three_11_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(rtree__search_first_2_better_solution_three_11_0_i16);
MR_def_label(rtree__search_first_2_better_solution_three_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 2;
MR_def_label(rtree__search_first_2_better_solution_three_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(rtree__search_first_2_better_solution_three_11_0_i38);
	}
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(rtree__search_first_2_better_solution_three_11_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(rtree__search_first_2_better_solution_two_9_0);
	}
MR_def_label(rtree__search_first_2_better_solution_three_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(rtree__search_first_2_better_solution_two_9_0);
	}
MR_def_label(rtree__search_first_2_better_solution_three_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_better_solution_three_11_0_i23);
MR_def_label(rtree__search_first_2_better_solution_three_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_better_solution_three_11_0_i22);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_better_solution_three_11_0_i25);
MR_def_label(rtree__search_first_2_better_solution_three_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_better_solution_three_11_0_i27);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(rtree__search_first_2_better_solution_three_11_0_i30);
MR_def_label(rtree__search_first_2_better_solution_three_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_2_better_solution_three_11_0_i28);
MR_def_label(rtree__search_first_2_better_solution_three_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_2_better_solution_three_11_0_i27);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(rtree__search_first_2_better_solution_three_11_0_i30);
MR_def_label(rtree__search_first_2_better_solution_three_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Integer) 2;
MR_def_label(rtree__search_first_2_better_solution_three_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(rtree__search_first_2_better_solution_three_11_0_i38);
	}
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(rtree__search_first_2_better_solution_three_11_0_i33);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(rtree__search_first_2_better_solution_two_9_0);
	}
MR_def_label(rtree__search_first_2_better_solution_three_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(rtree__search_first_2_better_solution_two_9_0);
	}
MR_def_label(rtree__search_first_2_better_solution_three_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r9 = MR_sv(5);
	MR_r10 = MR_sv(6);
	MR_r11 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r8 = MR_r9;
	MR_r9 = MR_r10;
	MR_r10 = MR_r11;
	MR_r11 = MR_tempr1;
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(rtree__search_first_2_find_better_solution_two_10_0);
	}
MR_def_label(rtree__search_first_2_better_solution_three_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module38)
	MR_init_entry1(rtree__search_first_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__search_first_6_0);
	MR_init_label7(rtree__search_first_6_0,4,6,7,9,3,44,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_first'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__search_first_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(rtree__search_first_6_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r4;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__search_first_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__rtree__search_first_6_0_i4);
MR_def_label(rtree__search_first_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_6_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_6_0_i6);
MR_def_label(rtree__search_first_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_6_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__search_first_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__rtree__search_first_6_0_i7);
MR_def_label(rtree__search_first_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_6_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		rtree__search_first_6_0_i9);
MR_def_label(rtree__search_first_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(rtree__search_first_6_0_i1);
	}
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(rtree__search_first_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(rtree__search_first_6_0_i44);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tfield(2, MR_r6, 0);
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_np_tailcall_ent(rtree__search_first_2_6_0);
	}
MR_def_label(rtree__search_first_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(rtree__search_first_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module39)
	MR_init_entry1(rtree__search_general_fold_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__search_general_fold_2_5_0);
	MR_init_label9(rtree__search_general_fold_2_5_0,4,5,6,3,9,10,8,13,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_general_fold_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__search_general_fold_2_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,3)) {
		MR_GOTO_LAB(rtree__search_general_fold_2_5_0_i3);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 6);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 7);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_tempr1 = MR_tempr2;
	MR_r4 = MR_tfield(3, MR_r4, 0);
	MR_r5 = MR_tfield(3, MR_tempr1, 1);
	MR_r6 = MR_sv(1);
	MR_tempr1 = MR_r7;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__search_general_fold_subtree_6_0,
		rtree__search_general_fold_2_5_0_i4);
MR_def_label(rtree__search_general_fold_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__search_general_fold_subtree_6_0,
		rtree__search_general_fold_2_5_0_i5);
MR_def_label(rtree__search_general_fold_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__search_general_fold_subtree_6_0,
		rtree__search_general_fold_2_5_0_i6);
MR_def_label(rtree__search_general_fold_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(rtree__search_general_fold_subtree_6_0);
	}
MR_def_label(rtree__search_general_fold_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(rtree__search_general_fold_2_5_0_i8);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(2, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(2, MR_tempr2, 5);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_tempr1 = MR_tempr2;
	MR_r4 = MR_tfield(2, MR_r4, 0);
	MR_r5 = MR_tfield(2, MR_tempr1, 1);
	MR_r6 = MR_sv(1);
	MR_tempr1 = MR_r7;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__search_general_fold_subtree_6_0,
		rtree__search_general_fold_2_5_0_i9);
MR_def_label(rtree__search_general_fold_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__search_general_fold_subtree_6_0,
		rtree__search_general_fold_2_5_0_i10);
MR_def_label(rtree__search_general_fold_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(rtree__search_general_fold_subtree_6_0);
	}
MR_def_label(rtree__search_general_fold_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(rtree__search_general_fold_2_5_0_i12);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_tempr1 = MR_tempr2;
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_r5 = MR_tfield(1, MR_tempr1, 1);
	MR_r6 = MR_sv(1);
	MR_tempr1 = MR_r7;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__search_general_fold_subtree_6_0,
		rtree__search_general_fold_2_5_0_i13);
MR_def_label(rtree__search_general_fold_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(rtree__search_general_fold_subtree_6_0);
	}
MR_def_label(rtree__search_general_fold_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("search_general_fold_2: unexpected leaf node", 43);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module40)
	MR_init_entry1(rtree__search_general_fold_2_5_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__search_general_fold_2_5_1);
	MR_init_label9(rtree__search_general_fold_2_5_1,4,5,6,3,9,10,8,13,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_general_fold_2'/5 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__search_general_fold_2_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,3)) {
		MR_GOTO_LAB(rtree__search_general_fold_2_5_1_i3);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 6);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 7);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_tempr1 = MR_tempr2;
	MR_r4 = MR_tfield(3, MR_r4, 0);
	MR_r5 = MR_tfield(3, MR_tempr1, 1);
	MR_r6 = MR_sv(1);
	MR_tempr1 = MR_r7;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__search_general_fold_subtree_6_1,
		rtree__search_general_fold_2_5_1_i4);
MR_def_label(rtree__search_general_fold_2_5_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__search_general_fold_subtree_6_1,
		rtree__search_general_fold_2_5_1_i5);
MR_def_label(rtree__search_general_fold_2_5_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__search_general_fold_subtree_6_1,
		rtree__search_general_fold_2_5_1_i6);
MR_def_label(rtree__search_general_fold_2_5_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(rtree__search_general_fold_subtree_6_1);
	}
MR_def_label(rtree__search_general_fold_2_5_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(rtree__search_general_fold_2_5_1_i8);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(2, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(2, MR_tempr2, 5);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_tempr1 = MR_tempr2;
	MR_r4 = MR_tfield(2, MR_r4, 0);
	MR_r5 = MR_tfield(2, MR_tempr1, 1);
	MR_r6 = MR_sv(1);
	MR_tempr1 = MR_r7;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__search_general_fold_subtree_6_1,
		rtree__search_general_fold_2_5_1_i9);
MR_def_label(rtree__search_general_fold_2_5_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__search_general_fold_subtree_6_1,
		rtree__search_general_fold_2_5_1_i10);
MR_def_label(rtree__search_general_fold_2_5_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(rtree__search_general_fold_subtree_6_1);
	}
MR_def_label(rtree__search_general_fold_2_5_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(rtree__search_general_fold_2_5_1_i12);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_tempr1 = MR_tempr2;
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_r5 = MR_tfield(1, MR_tempr1, 1);
	MR_r6 = MR_sv(1);
	MR_tempr1 = MR_r7;
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__search_general_fold_subtree_6_1,
		rtree__search_general_fold_2_5_1_i13);
MR_def_label(rtree__search_general_fold_2_5_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(rtree__search_general_fold_subtree_6_1);
	}
MR_def_label(rtree__search_general_fold_2_5_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("search_general_fold_2: unexpected leaf node", 43);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(rtree_module41)
	MR_init_entry1(rtree__search_general_fold_subtree_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__search_general_fold_subtree_6_0);
	MR_init_label3(rtree__search_general_fold_subtree_6_0,4,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_general_fold_subtree'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__search_general_fold_subtree_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__search_general_fold_subtree_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__rtree__search_general_fold_subtree_6_0_i4);
MR_def_label(rtree__search_general_fold_subtree_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_general_fold_subtree_6_0_i2);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(rtree__search_general_fold_subtree_6_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__search_general_fold_subtree_6_0));
	MR_np_tailcall_ent(do_call_closure_3);
MR_def_label(rtree__search_general_fold_subtree_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(rtree__search_general_fold_2_5_0);
MR_def_label(rtree__search_general_fold_subtree_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module42)
	MR_init_entry1(rtree__search_general_fold_subtree_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__search_general_fold_subtree_6_1);
	MR_init_label3(rtree__search_general_fold_subtree_6_1,4,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_general_fold_subtree'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__search_general_fold_subtree_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__search_general_fold_subtree_6_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__rtree__search_general_fold_subtree_6_1_i4);
MR_def_label(rtree__search_general_fold_subtree_6_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_general_fold_subtree_6_1_i2);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(rtree__search_general_fold_subtree_6_1_i6);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__search_general_fold_subtree_6_1));
	MR_np_tailcall_ent(do_call_closure_3);
MR_def_label(rtree__search_general_fold_subtree_6_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(rtree__search_general_fold_2_5_1);
MR_def_label(rtree__search_general_fold_subtree_6_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module43)
	MR_init_entry1(rtree__search_general_fold_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__search_general_fold_5_0);
	MR_init_label4(rtree__search_general_fold_5_0,3,7,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_general_fold'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__search_general_fold_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(rtree__search_general_fold_5_0_i3);
	}
	MR_r1 = MR_r7;
	MR_proceed();
MR_def_label(rtree__search_general_fold_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(rtree__search_general_fold_5_0_i4);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_r4;
	MR_r2 = MR_sv(3);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__search_general_fold_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__rtree__search_general_fold_5_0_i7);
MR_def_label(rtree__search_general_fold_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_general_fold_5_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__search_general_fold_5_0));
	MR_np_tailcall_ent(do_call_closure_3);
MR_def_label(rtree__search_general_fold_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(rtree__search_general_fold_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_tfield(2, MR_r6, 0);
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(rtree__search_general_fold_2_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module44)
	MR_init_entry1(rtree__search_general_fold_5_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__search_general_fold_5_1);
	MR_init_label4(rtree__search_general_fold_5_1,3,7,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_general_fold'/5 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__search_general_fold_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(rtree__search_general_fold_5_1_i3);
	}
	MR_r1 = MR_r7;
	MR_proceed();
MR_def_label(rtree__search_general_fold_5_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(rtree__search_general_fold_5_1_i4);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_r4;
	MR_r2 = MR_sv(3);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__search_general_fold_5_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__rtree__search_general_fold_5_1_i7);
MR_def_label(rtree__search_general_fold_5_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__search_general_fold_5_1_i5);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__search_general_fold_5_1));
	MR_np_tailcall_ent(do_call_closure_3);
MR_def_label(rtree__search_general_fold_5_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(rtree__search_general_fold_5_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_tfield(2, MR_r6, 0);
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(rtree__search_general_fold_2_5_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module45)
	MR_init_entry1(rtree__fold_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__fold_2_4_0);
	MR_init_label9(rtree__fold_2_4_0,4,5,6,3,9,10,8,13,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__fold_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,3)) {
		MR_GOTO_LAB(rtree__fold_2_4_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_sv(2) = MR_tfield(3, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr3, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr3, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr3, 5);
	MR_sv(6) = MR_tfield(3, MR_tempr3, 6);
	MR_sv(7) = MR_tfield(3, MR_tempr3, 7);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_tempr1 = MR_tempr3;
	MR_r5 = MR_tfield(3, MR_r5, 0);
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tfield(3, MR_tempr1, 1);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(rtree__fold_subtree_5_0,
		rtree__fold_2_4_0_i4);
MR_def_label(rtree__fold_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__fold_subtree_5_0,
		rtree__fold_2_4_0_i5);
MR_def_label(rtree__fold_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__fold_subtree_5_0,
		rtree__fold_2_4_0_i6);
MR_def_label(rtree__fold_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(rtree__fold_subtree_5_0);
	}
MR_def_label(rtree__fold_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(rtree__fold_2_4_0_i8);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_sv(2) = MR_tfield(2, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(2, MR_tempr3, 3);
	MR_sv(4) = MR_tfield(2, MR_tempr3, 4);
	MR_sv(5) = MR_tfield(2, MR_tempr3, 5);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_tempr1 = MR_tempr3;
	MR_r5 = MR_tfield(2, MR_r5, 0);
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tfield(2, MR_tempr1, 1);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(rtree__fold_subtree_5_0,
		rtree__fold_2_4_0_i9);
MR_def_label(rtree__fold_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__fold_subtree_5_0,
		rtree__fold_2_4_0_i10);
MR_def_label(rtree__fold_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(rtree__fold_subtree_5_0);
	}
MR_def_label(rtree__fold_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(rtree__fold_2_4_0_i12);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr3, 3);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_tempr1 = MR_tempr3;
	MR_r5 = MR_tfield(1, MR_r5, 0);
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tfield(1, MR_tempr1, 1);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(rtree__fold_subtree_5_0,
		rtree__fold_2_4_0_i13);
MR_def_label(rtree__fold_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(rtree__fold_subtree_5_0);
	}
MR_def_label(rtree__fold_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fold: leaf unexpected", 21);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module46)
	MR_init_entry1(rtree__fold_2_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__fold_2_4_1);
	MR_init_label9(rtree__fold_2_4_1,4,5,6,3,9,10,8,13,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_2'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__fold_2_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,3)) {
		MR_GOTO_LAB(rtree__fold_2_4_1_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_sv(2) = MR_tfield(3, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr3, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr3, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr3, 5);
	MR_sv(6) = MR_tfield(3, MR_tempr3, 6);
	MR_sv(7) = MR_tfield(3, MR_tempr3, 7);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_tempr1 = MR_tempr3;
	MR_r5 = MR_tfield(3, MR_r5, 0);
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tfield(3, MR_tempr1, 1);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(rtree__fold_subtree_5_1,
		rtree__fold_2_4_1_i4);
MR_def_label(rtree__fold_2_4_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__fold_subtree_5_1,
		rtree__fold_2_4_1_i5);
MR_def_label(rtree__fold_2_4_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__fold_subtree_5_1,
		rtree__fold_2_4_1_i6);
MR_def_label(rtree__fold_2_4_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(rtree__fold_subtree_5_1);
	}
MR_def_label(rtree__fold_2_4_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(rtree__fold_2_4_1_i8);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_sv(2) = MR_tfield(2, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(2, MR_tempr3, 3);
	MR_sv(4) = MR_tfield(2, MR_tempr3, 4);
	MR_sv(5) = MR_tfield(2, MR_tempr3, 5);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_tempr1 = MR_tempr3;
	MR_r5 = MR_tfield(2, MR_r5, 0);
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tfield(2, MR_tempr1, 1);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(rtree__fold_subtree_5_1,
		rtree__fold_2_4_1_i9);
MR_def_label(rtree__fold_2_4_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__fold_subtree_5_1,
		rtree__fold_2_4_1_i10);
MR_def_label(rtree__fold_2_4_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(rtree__fold_subtree_5_1);
	}
MR_def_label(rtree__fold_2_4_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(rtree__fold_2_4_1_i12);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr3, 3);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_tempr1 = MR_tempr3;
	MR_r5 = MR_tfield(1, MR_r5, 0);
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tfield(1, MR_tempr1, 1);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(rtree__fold_subtree_5_1,
		rtree__fold_2_4_1_i13);
MR_def_label(rtree__fold_2_4_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(rtree__fold_subtree_5_1);
	}
MR_def_label(rtree__fold_2_4_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fold: leaf unexpected", 21);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module47)
	MR_init_entry1(rtree__fold_2_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__fold_2_4_2);
	MR_init_label10(rtree__fold_2_4_2,4,6,8,3,13,15,12,20,36,19)
	MR_init_label1(rtree__fold_2_4_2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_2'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__fold_2_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r5,3)) {
		MR_GOTO_LAB(rtree__fold_2_4_2_i3);
	}
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_sv(2) = MR_tfield(3, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr3, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr3, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr3, 5);
	MR_sv(6) = MR_tfield(3, MR_tempr3, 6);
	MR_sv(7) = MR_tfield(3, MR_tempr3, 7);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_tempr1 = MR_tempr3;
	MR_r5 = MR_tfield(3, MR_r5, 0);
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tfield(3, MR_tempr1, 1);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(rtree__fold_subtree_5_2,
		rtree__fold_2_4_2_i4);
MR_def_label(rtree__fold_2_4_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__fold_2_4_2_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__fold_subtree_5_2,
		rtree__fold_2_4_2_i6);
MR_def_label(rtree__fold_2_4_2,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__fold_2_4_2_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__fold_subtree_5_2,
		rtree__fold_2_4_2_i8);
MR_def_label(rtree__fold_2_4_2,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__fold_2_4_2_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(rtree__fold_subtree_5_2);
	}
MR_def_label(rtree__fold_2_4_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(rtree__fold_2_4_2_i12);
	}
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_sv(2) = MR_tfield(2, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(2, MR_tempr3, 3);
	MR_sv(4) = MR_tfield(2, MR_tempr3, 4);
	MR_sv(5) = MR_tfield(2, MR_tempr3, 5);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_tempr1 = MR_tempr3;
	MR_r5 = MR_tfield(2, MR_r5, 0);
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tfield(2, MR_tempr1, 1);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(rtree__fold_subtree_5_2,
		rtree__fold_2_4_2_i13);
MR_def_label(rtree__fold_2_4_2,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__fold_2_4_2_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__fold_subtree_5_2,
		rtree__fold_2_4_2_i15);
MR_def_label(rtree__fold_2_4_2,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__fold_2_4_2_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(rtree__fold_subtree_5_2);
	}
MR_def_label(rtree__fold_2_4_2,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(rtree__fold_2_4_2_i19);
	}
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr3, 3);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_tempr1 = MR_tempr3;
	MR_r5 = MR_tfield(1, MR_r5, 0);
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tfield(1, MR_tempr1, 1);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(rtree__fold_subtree_5_2,
		rtree__fold_2_4_2_i20);
MR_def_label(rtree__fold_2_4_2,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__fold_2_4_2_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(rtree__fold_subtree_5_2);
	}
MR_def_label(rtree__fold_2_4_2,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(rtree__fold_2_4_2,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fold: leaf unexpected", 21);
	MR_np_call_localret_ent(require__error_1_0,
		rtree__fold_2_4_2_i36);
MR_def_label(rtree__fold_2_4_2,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module48)
	MR_init_entry1(rtree__fold_subtree_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__fold_subtree_5_0);
	MR_init_label2(rtree__fold_subtree_5_0,16,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_subtree'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__fold_subtree_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,3)) {
		MR_GOTO_LAB(rtree__fold_subtree_5_0_i3);
	}
MR_def_label(rtree__fold_subtree_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_np_tailcall_ent(rtree__fold_2_4_0);
MR_def_label(rtree__fold_subtree_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,0)) {
		MR_GOTO_LAB(rtree__fold_subtree_5_0_i16);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_tfield(0, MR_r6, 0);
	MR_r4 = MR_r7;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__fold_subtree_5_0));
	MR_np_tailcall_ent(do_call_closure_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module49)
	MR_init_entry1(rtree__fold_subtree_5_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__fold_subtree_5_1);
	MR_init_label2(rtree__fold_subtree_5_1,16,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_subtree'/5 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__fold_subtree_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,3)) {
		MR_GOTO_LAB(rtree__fold_subtree_5_1_i3);
	}
MR_def_label(rtree__fold_subtree_5_1,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_np_tailcall_ent(rtree__fold_2_4_1);
MR_def_label(rtree__fold_subtree_5_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,0)) {
		MR_GOTO_LAB(rtree__fold_subtree_5_1_i16);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_tfield(0, MR_r6, 0);
	MR_r4 = MR_r7;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__fold_subtree_5_1));
	MR_np_tailcall_ent(do_call_closure_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module50)
	MR_init_entry1(rtree__fold_subtree_5_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__fold_subtree_5_2);
	MR_init_label2(rtree__fold_subtree_5_2,24,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold_subtree'/5 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__fold_subtree_5_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,3)) {
		MR_GOTO_LAB(rtree__fold_subtree_5_2_i3);
	}
MR_def_label(rtree__fold_subtree_5_2,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_np_tailcall_ent(rtree__fold_2_4_2);
MR_def_label(rtree__fold_subtree_5_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,0)) {
		MR_GOTO_LAB(rtree__fold_subtree_5_2_i24);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_tfield(0, MR_r6, 0);
	MR_r4 = MR_r7;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__fold_subtree_5_2));
	MR_np_tailcall_ent(do_call_closure_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module51)
	MR_init_entry1(rtree__fold_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__fold_4_0);
	MR_init_label2(rtree__fold_4_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__fold_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(rtree__fold_4_0_i3);
	}
	MR_r1 = MR_r6;
	MR_proceed();
MR_def_label(rtree__fold_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(rtree__fold_4_0_i4);
	}
	MR_r1 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = MR_r6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__fold_4_0));
	MR_np_tailcall_ent(do_call_closure_3);
	}
MR_def_label(rtree__fold_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(2, MR_r5, 0);
	MR_np_tailcall_ent(rtree__fold_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module52)
	MR_init_entry1(rtree__fold_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__fold_4_1);
	MR_init_label2(rtree__fold_4_1,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__fold_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(rtree__fold_4_1_i3);
	}
	MR_r1 = MR_r6;
	MR_proceed();
MR_def_label(rtree__fold_4_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(rtree__fold_4_1_i4);
	}
	MR_r1 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = MR_r6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__fold_4_1));
	MR_np_tailcall_ent(do_call_closure_3);
	}
MR_def_label(rtree__fold_4_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(2, MR_r5, 0);
	MR_np_tailcall_ent(rtree__fold_2_4_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module53)
	MR_init_entry1(rtree__fold_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__fold_4_2);
	MR_init_label2(rtree__fold_4_2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__fold_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(rtree__fold_4_2_i3);
	}
	MR_r2 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(rtree__fold_4_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(rtree__fold_4_2_i4);
	}
	MR_r1 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = MR_r6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__fold_4_2));
	MR_np_tailcall_ent(do_call_closure_3);
	}
MR_def_label(rtree__fold_4_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(2, MR_r5, 0);
	MR_np_tailcall_ent(rtree__fold_2_4_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module54)
	MR_init_entry1(rtree__map_values_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__map_values_2_3_0);
	MR_init_label10(rtree__map_values_2_3_0,4,5,6,7,3,10,11,12,9,15)
	MR_init_label2(rtree__map_values_2_3_0,16,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_values_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__map_values_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,3)) {
		MR_GOTO_LAB(rtree__map_values_2_3_0_i3);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tfield(3, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 6);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 7);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_tempr1 = MR_tempr2;
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(rtree__map_values_key_2_4_0,
		rtree__map_values_2_3_0_i4);
MR_def_label(rtree__map_values_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__map_values_key_2_4_0,
		rtree__map_values_2_3_0_i5);
MR_def_label(rtree__map_values_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__map_values_key_2_4_0,
		rtree__map_values_2_3_0_i6);
MR_def_label(rtree__map_values_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	}
	MR_np_call_localret_ent(rtree__map_values_key_2_4_0,
		rtree__map_values_2_3_0_i7);
MR_def_label(rtree__map_values_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 8);
	MR_tfield(3, MR_r2, 0) = MR_sv(2);
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_tfield(3, MR_r2, 2) = MR_sv(3);
	MR_tfield(3, MR_r2, 3) = MR_sv(6);
	MR_tfield(3, MR_r2, 4) = MR_sv(5);
	MR_tfield(3, MR_r2, 5) = MR_sv(1);
	MR_tfield(3, MR_r2, 6) = MR_sv(7);
	MR_tfield(3, MR_r2, 7) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(12);
MR_def_label(rtree__map_values_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(rtree__map_values_2_3_0_i9);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tfield(2, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(2, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(2, MR_tempr2, 5);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_tempr1 = MR_tempr2;
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(rtree__map_values_key_2_4_0,
		rtree__map_values_2_3_0_i10);
MR_def_label(rtree__map_values_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__map_values_key_2_4_0,
		rtree__map_values_2_3_0_i11);
MR_def_label(rtree__map_values_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(rtree__map_values_key_2_4_0,
		rtree__map_values_2_3_0_i12);
MR_def_label(rtree__map_values_2_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 6);
	MR_tfield(2, MR_r2, 0) = MR_sv(2);
	MR_tfield(2, MR_r2, 1) = MR_sv(4);
	MR_tfield(2, MR_r2, 2) = MR_sv(3);
	MR_tfield(2, MR_r2, 3) = MR_sv(1);
	MR_tfield(2, MR_r2, 4) = MR_sv(5);
	MR_tfield(2, MR_r2, 5) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(12);
MR_def_label(rtree__map_values_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(rtree__map_values_2_3_0_i14);
	}
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_tempr1 = MR_tempr2;
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(rtree__map_values_key_2_4_0,
		rtree__map_values_2_3_0_i15);
MR_def_label(rtree__map_values_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(rtree__map_values_key_2_4_0,
		rtree__map_values_2_3_0_i16);
MR_def_label(rtree__map_values_2_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(rtree__map_values_2_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("map_values_2: unexpected leaf.", 30);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module55)
	MR_init_entry1(rtree__map_values_2_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__map_values_2_3_1);
	MR_init_label10(rtree__map_values_2_3_1,4,6,8,10,3,14,16,18,13,22)
	MR_init_label4(rtree__map_values_2_3_1,24,21,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_values_2'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__map_values_2_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r5,3)) {
		MR_GOTO_LAB(rtree__map_values_2_3_1_i3);
	}
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tfield(3, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 6);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 7);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_tempr1 = MR_tempr2;
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(rtree__map_values_key_2_4_1,
		rtree__map_values_2_3_1_i4);
MR_def_label(rtree__map_values_2_3_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__map_values_2_3_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__map_values_key_2_4_1,
		rtree__map_values_2_3_1_i6);
MR_def_label(rtree__map_values_2_3_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__map_values_2_3_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__map_values_key_2_4_1,
		rtree__map_values_2_3_1_i8);
MR_def_label(rtree__map_values_2_3_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__map_values_2_3_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	}
	MR_np_call_localret_ent(rtree__map_values_key_2_4_1,
		rtree__map_values_2_3_1_i10);
MR_def_label(rtree__map_values_2_3_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__map_values_2_3_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 8);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 7) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rtree__map_values_2_3_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(rtree__map_values_2_3_1_i13);
	}
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tfield(2, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(2, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(2, MR_tempr2, 5);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_tempr1 = MR_tempr2;
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(rtree__map_values_key_2_4_1,
		rtree__map_values_2_3_1_i14);
MR_def_label(rtree__map_values_2_3_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__map_values_2_3_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(rtree__map_values_key_2_4_1,
		rtree__map_values_2_3_1_i16);
MR_def_label(rtree__map_values_2_3_1,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__map_values_2_3_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(rtree__map_values_key_2_4_1,
		rtree__map_values_2_3_1_i18);
MR_def_label(rtree__map_values_2_3_1,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__map_values_2_3_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 6);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 5) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rtree__map_values_2_3_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(rtree__map_values_2_3_1_i21);
	}
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_tempr1 = MR_tempr2;
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(rtree__map_values_key_2_4_1,
		rtree__map_values_2_3_1_i22);
MR_def_label(rtree__map_values_2_3_1,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__map_values_2_3_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(rtree__map_values_key_2_4_1,
		rtree__map_values_2_3_1_i24);
MR_def_label(rtree__map_values_2_3_1,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__map_values_2_3_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 3) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(rtree__map_values_2_3_1,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("map_values_2: unexpected leaf.", 30);
	MR_np_call_localret_ent(require__error_1_0,
		rtree__map_values_2_3_1_i2);
MR_def_label(rtree__map_values_2_3_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(rtree__map_values_2_3_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(rtree_module56)
	MR_init_entry1(rtree__map_values_key_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__map_values_key_2_4_0);
	MR_init_label3(rtree__map_values_key_2_4_0,17,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_values_key_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__map_values_key_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,3)) {
		MR_GOTO_LAB(rtree__map_values_key_2_4_0_i3);
	}
MR_def_label(rtree__map_values_key_2_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(rtree__map_values_2_3_0);
MR_def_label(rtree__map_values_key_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,0)) {
		MR_GOTO_LAB(rtree__map_values_key_2_4_0_i17);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_tfield(0, MR_r6, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__map_values_key_2_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__rtree__map_values_key_2_4_0_i6);
MR_def_label(rtree__map_values_key_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module57)
	MR_init_entry1(rtree__map_values_key_2_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__map_values_key_2_4_1);
	MR_init_label4(rtree__map_values_key_2_4_1,26,3,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_values_key_2'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__map_values_key_2_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,3)) {
		MR_GOTO_LAB(rtree__map_values_key_2_4_1_i3);
	}
MR_def_label(rtree__map_values_key_2_4_1,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(rtree__map_values_2_3_1);
MR_def_label(rtree__map_values_key_2_4_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,0)) {
		MR_GOTO_LAB(rtree__map_values_key_2_4_1_i26);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_tfield(0, MR_r6, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__map_values_key_2_4_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__rtree__map_values_key_2_4_1_i7);
MR_def_label(rtree__map_values_key_2_4_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__map_values_key_2_4_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
	}
MR_def_label(rtree__map_values_key_2_4_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module58)
	MR_init_entry1(rtree__map_values_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__map_values_3_0);
	MR_init_label4(rtree__map_values_3_0,26,5,4,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_values'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__map_values_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(rtree__map_values_3_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(rtree__map_values_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(rtree__map_values_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_r4;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__map_values_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__rtree__map_values_3_0_i5);
MR_def_label(rtree__map_values_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(rtree__map_values_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(2, MR_r5, 0);
	MR_np_call_localret_ent(rtree__map_values_2_3_0,
		rtree__map_values_3_0_i7);
MR_def_label(rtree__map_values_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module59)
	MR_init_entry1(rtree__map_values_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__map_values_3_1);
	MR_init_label5(rtree__map_values_3_1,41,5,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_values'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__map_values_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(rtree__map_values_3_1_i41);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(rtree__map_values_3_1,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(rtree__map_values_3_1_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_r4;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(rtree__map_values_3_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__rtree__map_values_3_1_i5);
MR_def_label(rtree__map_values_3_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__map_values_3_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(rtree__map_values_3_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(2, MR_r5, 0);
	MR_np_call_localret_ent(rtree__map_values_2_3_1,
		rtree__map_values_3_1_i8);
MR_def_label(rtree__map_values_3_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(rtree__map_values_3_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(rtree__map_values_3_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module60)
	MR_init_entry1(rtree__box3d_intersects_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__box3d_intersects_2_0);
	MR_init_label6(rtree__box3d_intersects_2_0,2,3,4,5,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'box3d_intersects'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__box3d_intersects_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r2, 5);
	MR_r4 = MR_tfield(0, MR_r2, 4);
	MR_r5 = MR_tfield(0, MR_r2, 3);
	MR_r6 = MR_tfield(0, MR_r2, 2);
	MR_r7 = MR_tfield(0, MR_r2, 1);
	MR_r8 = MR_tfield(0, MR_r1, 5);
	MR_r9 = MR_tfield(0, MR_r1, 4);
	MR_r10 = MR_tfield(0, MR_r1, 3);
	MR_r11 = MR_tfield(0, MR_r1, 2);
	MR_r12 = MR_tfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r13 = MR_tempr1;
	if ((MR_word_to_float(MR_r12) > MR_word_to_float(MR_tempr1))) {
		MR_GOTO_LAB(rtree__box3d_intersects_2_0_i2);
	}
	MR_r2 = MR_tfield(0, MR_r1, 1);
	if ((MR_word_to_float(MR_r2) < MR_word_to_float(MR_tempr1))) {
		MR_GOTO_LAB(rtree__box3d_intersects_2_0_i1);
	}
	MR_r1 = MR_r11;
	MR_r2 = MR_r10;
	MR_r12 = MR_r3;
	MR_r3 = MR_r9;
	MR_r13 = MR_r4;
	MR_r4 = MR_r8;
	MR_r14 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r14;
	MR_r7 = MR_r13;
	MR_r8 = MR_r12;
	MR_GOTO_LAB(rtree__box3d_intersects_2_0_i3);
	}
MR_def_label(rtree__box3d_intersects_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r12) > MR_word_to_float(MR_r7))) {
		MR_GOTO_LAB(rtree__box3d_intersects_2_0_i1);
	}
	MR_r1 = MR_r11;
	MR_r2 = MR_r10;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r9;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_r8;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr1;
	}
MR_def_label(rtree__box3d_intersects_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) > MR_word_to_float(MR_r5))) {
		MR_GOTO_LAB(rtree__box3d_intersects_2_0_i4);
	}
	if ((MR_word_to_float(MR_r2) < MR_word_to_float(MR_r5))) {
		MR_GOTO_LAB(rtree__box3d_intersects_2_0_i1);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_GOTO_LAB(rtree__box3d_intersects_2_0_i5);
MR_def_label(rtree__box3d_intersects_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) > MR_word_to_float(MR_r6))) {
		MR_GOTO_LAB(rtree__box3d_intersects_2_0_i1);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
MR_def_label(rtree__box3d_intersects_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) > MR_word_to_float(MR_r3))) {
		MR_GOTO_LAB(rtree__box3d_intersects_2_0_i6);
	}
	MR_r1 = (MR_word_to_float(MR_r2) >= MR_word_to_float(MR_r3));
	MR_proceed();
MR_def_label(rtree__box3d_intersects_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_word_to_float(MR_r1) <= MR_word_to_float(MR_r4));
	MR_proceed();
MR_def_label(rtree__box3d_intersects_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module61)
	MR_init_entry1(rtree__box3d_contains_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__box3d_contains_2_0);
	MR_init_label1(rtree__box3d_contains_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'box3d_contains'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__box3d_contains_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_r2, 0);
	if ((MR_word_to_float(MR_tempr1) < MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(rtree__box3d_contains_2_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_tempr2 = MR_tfield(0, MR_r2, 1);
	if ((MR_word_to_float(MR_tempr1) > MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(rtree__box3d_contains_2_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	MR_tempr2 = MR_tfield(0, MR_r2, 2);
	if ((MR_word_to_float(MR_tempr1) < MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(rtree__box3d_contains_2_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 3);
	MR_tempr2 = MR_tfield(0, MR_r2, 3);
	if ((MR_word_to_float(MR_tempr1) > MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(rtree__box3d_contains_2_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 4);
	MR_tempr2 = MR_tfield(0, MR_r2, 4);
	if ((MR_word_to_float(MR_tempr1) < MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(rtree__box3d_contains_2_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 5);
	MR_r1 = MR_tfield(0, MR_r2, 5);
	MR_r1 = (MR_word_to_float(MR_tempr1) <= MR_word_to_float(MR_r1));
	MR_proceed();
	}
MR_def_label(rtree__box3d_contains_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module62)
	MR_init_entry1(fn__rtree__box3d_volume_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__box3d_volume_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'box3d_volume'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__box3d_volume_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((((MR_word_to_float(MR_tfield(0, MR_r1, 1)) - MR_word_to_float(MR_tfield(0, MR_r1, 0))) * (MR_word_to_float(MR_tfield(0, MR_r1, 3)) - MR_word_to_float(MR_tfield(0, MR_r1, 2)))) * (MR_word_to_float(MR_tfield(0, MR_r1, 5)) - MR_word_to_float(MR_tfield(0, MR_r1, 4)))));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module63)
	MR_init_entry1(fn__rtree__box3d_bounding_region_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__box3d_bounding_region_2_0);
	MR_init_label10(fn__rtree__box3d_bounding_region_2_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label1(fn__rtree__box3d_bounding_region_2_0,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'box3d_bounding_region'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__box3d_bounding_region_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r2, 5);
	MR_r4 = MR_tfield(0, MR_r2, 4);
	MR_r5 = MR_tfield(0, MR_r2, 3);
	MR_r6 = MR_tfield(0, MR_r2, 2);
	MR_r7 = MR_tfield(0, MR_r2, 1);
	MR_r8 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_r1, 5);
	MR_r9 = MR_tfield(0, MR_r1, 4);
	MR_r10 = MR_tfield(0, MR_r1, 3);
	MR_r11 = MR_tfield(0, MR_r1, 2);
	MR_r12 = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r13 = MR_tempr1;
	if ((MR_word_to_float(MR_tempr1) > MR_word_to_float(MR_r8))) {
		MR_GOTO_LAB(fn__rtree__box3d_bounding_region_2_0_i2);
	}
	MR_r1 = MR_r12;
	MR_r14 = MR_r2;
	MR_r2 = MR_r11;
	MR_r15 = MR_r3;
	MR_r3 = MR_r10;
	MR_r16 = MR_r4;
	MR_r4 = MR_r9;
	MR_r17 = MR_r5;
	MR_r5 = MR_r14;
	MR_r18 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r18;
	MR_r8 = MR_r17;
	MR_r9 = MR_r16;
	MR_r10 = MR_r15;
	MR_r11 = MR_tempr1;
	MR_GOTO_LAB(fn__rtree__box3d_bounding_region_2_0_i3);
	}
MR_def_label(fn__rtree__box3d_bounding_region_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r12;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r11;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_r10;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_r9;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_tempr5;
	MR_tempr6 = MR_r8;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr3;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr6;
	}
MR_def_label(fn__rtree__box3d_bounding_region_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) < MR_word_to_float(MR_r6))) {
		MR_GOTO_LAB(fn__rtree__box3d_bounding_region_2_0_i4);
	}
	MR_r12 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_r8 = MR_r10;
	MR_r9 = MR_r11;
	MR_r10 = MR_r12;
	MR_GOTO_LAB(fn__rtree__box3d_bounding_region_2_0_i5);
MR_def_label(fn__rtree__box3d_bounding_region_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_r8 = MR_r10;
	MR_r9 = MR_r11;
	MR_r10 = MR_tempr1;
	}
MR_def_label(fn__rtree__box3d_bounding_region_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) > MR_word_to_float(MR_r5))) {
		MR_GOTO_LAB(fn__rtree__box3d_bounding_region_2_0_i6);
	}
	MR_r11 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_r8 = MR_r10;
	MR_r9 = MR_r11;
	MR_GOTO_LAB(fn__rtree__box3d_bounding_region_2_0_i7);
MR_def_label(fn__rtree__box3d_bounding_region_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_r8 = MR_r10;
	MR_r9 = MR_tempr1;
	}
MR_def_label(fn__rtree__box3d_bounding_region_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) < MR_word_to_float(MR_r4))) {
		MR_GOTO_LAB(fn__rtree__box3d_bounding_region_2_0_i8);
	}
	MR_r10 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_r8 = MR_r10;
	MR_GOTO_LAB(fn__rtree__box3d_bounding_region_2_0_i9);
MR_def_label(fn__rtree__box3d_bounding_region_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_r8 = MR_tempr1;
	}
MR_def_label(fn__rtree__box3d_bounding_region_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) > MR_word_to_float(MR_r3))) {
		MR_GOTO_LAB(fn__rtree__box3d_bounding_region_2_0_i10);
	}
	MR_r9 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_GOTO_LAB(fn__rtree__box3d_bounding_region_2_0_i11);
MR_def_label(fn__rtree__box3d_bounding_region_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_tempr1;
	}
MR_def_label(fn__rtree__box3d_bounding_region_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) < MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(fn__rtree__box3d_bounding_region_2_0_i12);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_r3;
	MR_tfield(0, MR_r2, 1) = MR_r4;
	MR_tfield(0, MR_r2, 2) = MR_r5;
	MR_tfield(0, MR_r2, 3) = MR_r6;
	MR_tfield(0, MR_r2, 4) = MR_r7;
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__rtree__box3d_bounding_region_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r1, 0) = MR_r3;
	MR_tfield(0, MR_r1, 1) = MR_r4;
	MR_tfield(0, MR_r1, 2) = MR_r5;
	MR_tfield(0, MR_r1, 3) = MR_r6;
	MR_tfield(0, MR_r1, 4) = MR_r7;
	MR_tfield(0, MR_r1, 5) = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module64)
	MR_init_entry1(fn__rtree__box3d_bounding_region_volume_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__box3d_bounding_region_volume_2_0);
	MR_init_label10(fn__rtree__box3d_bounding_region_volume_2_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label1(fn__rtree__box3d_bounding_region_volume_2_0,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'box3d_bounding_region_volume'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__box3d_bounding_region_volume_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r2, 5);
	MR_r4 = MR_tfield(0, MR_r2, 4);
	MR_r5 = MR_tfield(0, MR_r2, 3);
	MR_r6 = MR_tfield(0, MR_r2, 2);
	MR_r7 = MR_tfield(0, MR_r2, 1);
	MR_r8 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_r1, 5);
	MR_r9 = MR_tfield(0, MR_r1, 4);
	MR_r10 = MR_tfield(0, MR_r1, 3);
	MR_r11 = MR_tfield(0, MR_r1, 2);
	MR_r12 = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r13 = MR_tempr1;
	if ((MR_word_to_float(MR_tempr1) > MR_word_to_float(MR_r8))) {
		MR_GOTO_LAB(fn__rtree__box3d_bounding_region_volume_2_0_i2);
	}
	MR_r1 = MR_r12;
	MR_r14 = MR_r2;
	MR_r2 = MR_r11;
	MR_r15 = MR_r3;
	MR_r3 = MR_r10;
	MR_r16 = MR_r4;
	MR_r4 = MR_r9;
	MR_r17 = MR_r5;
	MR_r5 = MR_r14;
	MR_r18 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r18;
	MR_r8 = MR_r17;
	MR_r9 = MR_r16;
	MR_r10 = MR_r15;
	MR_r11 = MR_tempr1;
	MR_GOTO_LAB(fn__rtree__box3d_bounding_region_volume_2_0_i3);
	}
MR_def_label(fn__rtree__box3d_bounding_region_volume_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r12;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r11;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_r10;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_r9;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_tempr5;
	MR_tempr6 = MR_r8;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr3;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr6;
	}
MR_def_label(fn__rtree__box3d_bounding_region_volume_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) < MR_word_to_float(MR_r6))) {
		MR_GOTO_LAB(fn__rtree__box3d_bounding_region_volume_2_0_i4);
	}
	MR_r12 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_r8 = MR_r10;
	MR_r9 = MR_r11;
	MR_r10 = MR_r12;
	MR_GOTO_LAB(fn__rtree__box3d_bounding_region_volume_2_0_i5);
MR_def_label(fn__rtree__box3d_bounding_region_volume_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_r8 = MR_r10;
	MR_r9 = MR_r11;
	MR_r10 = MR_tempr1;
	}
MR_def_label(fn__rtree__box3d_bounding_region_volume_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) > MR_word_to_float(MR_r5))) {
		MR_GOTO_LAB(fn__rtree__box3d_bounding_region_volume_2_0_i6);
	}
	MR_r11 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_r8 = MR_r10;
	MR_r9 = MR_r11;
	MR_GOTO_LAB(fn__rtree__box3d_bounding_region_volume_2_0_i7);
MR_def_label(fn__rtree__box3d_bounding_region_volume_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_r8 = MR_r10;
	MR_r9 = MR_tempr1;
	}
MR_def_label(fn__rtree__box3d_bounding_region_volume_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) < MR_word_to_float(MR_r4))) {
		MR_GOTO_LAB(fn__rtree__box3d_bounding_region_volume_2_0_i8);
	}
	MR_r10 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_r8 = MR_r10;
	MR_GOTO_LAB(fn__rtree__box3d_bounding_region_volume_2_0_i9);
MR_def_label(fn__rtree__box3d_bounding_region_volume_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_r8 = MR_tempr1;
	}
MR_def_label(fn__rtree__box3d_bounding_region_volume_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) > MR_word_to_float(MR_r3))) {
		MR_GOTO_LAB(fn__rtree__box3d_bounding_region_volume_2_0_i10);
	}
	MR_r9 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_r9;
	MR_GOTO_LAB(fn__rtree__box3d_bounding_region_volume_2_0_i11);
MR_def_label(fn__rtree__box3d_bounding_region_volume_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_r7 = MR_tempr1;
	}
MR_def_label(fn__rtree__box3d_bounding_region_volume_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) < MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(fn__rtree__box3d_bounding_region_volume_2_0_i12);
	}
	MR_r1 = MR_float_to_word((((MR_word_to_float(MR_r4) - MR_word_to_float(MR_r3)) * (MR_word_to_float(MR_r6) - MR_word_to_float(MR_r5))) * (MR_word_to_float(MR_r1) - MR_word_to_float(MR_r7))));
	MR_proceed();
MR_def_label(fn__rtree__box3d_bounding_region_volume_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((((MR_word_to_float(MR_r4) - MR_word_to_float(MR_r3)) * (MR_word_to_float(MR_r6) - MR_word_to_float(MR_r5))) * (MR_word_to_float(MR_r2) - MR_word_to_float(MR_r7))));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module65)
	MR_init_entry1(rtree__box_intersects_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__box_intersects_2_0);
	MR_init_label4(rtree__box_intersects_2_0,2,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'box_intersects'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__box_intersects_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r2, 3);
	MR_r4 = MR_tfield(0, MR_r2, 2);
	MR_r5 = MR_tfield(0, MR_r2, 1);
	MR_r6 = MR_tfield(0, MR_r1, 3);
	MR_r7 = MR_tfield(0, MR_r1, 2);
	MR_r8 = MR_tfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r9 = MR_tempr1;
	if ((MR_word_to_float(MR_r8) > MR_word_to_float(MR_tempr1))) {
		MR_GOTO_LAB(rtree__box_intersects_2_0_i2);
	}
	MR_r2 = MR_tfield(0, MR_r1, 1);
	if ((MR_word_to_float(MR_r2) < MR_word_to_float(MR_tempr1))) {
		MR_GOTO_LAB(rtree__box_intersects_2_0_i1);
	}
	MR_r1 = MR_r7;
	MR_r2 = MR_r6;
	MR_r5 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_GOTO_LAB(rtree__box_intersects_2_0_i3);
	}
MR_def_label(rtree__box_intersects_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r8) > MR_word_to_float(MR_r5))) {
		MR_GOTO_LAB(rtree__box_intersects_2_0_i1);
	}
	MR_r1 = MR_r7;
	MR_r2 = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	}
MR_def_label(rtree__box_intersects_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) > MR_word_to_float(MR_r3))) {
		MR_GOTO_LAB(rtree__box_intersects_2_0_i4);
	}
	MR_r1 = (MR_word_to_float(MR_r2) >= MR_word_to_float(MR_r3));
	MR_proceed();
MR_def_label(rtree__box_intersects_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_word_to_float(MR_r1) <= MR_word_to_float(MR_r4));
	MR_proceed();
MR_def_label(rtree__box_intersects_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module66)
	MR_init_entry1(rtree__box_contains_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__box_contains_2_0);
	MR_init_label1(rtree__box_contains_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'box_contains'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__box_contains_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_r2, 0);
	if ((MR_word_to_float(MR_tempr1) < MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(rtree__box_contains_2_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_tempr2 = MR_tfield(0, MR_r2, 1);
	if ((MR_word_to_float(MR_tempr1) > MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(rtree__box_contains_2_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	MR_tempr2 = MR_tfield(0, MR_r2, 2);
	if ((MR_word_to_float(MR_tempr1) < MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(rtree__box_contains_2_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_tfield(0, MR_r2, 3);
	MR_r1 = (MR_word_to_float(MR_tempr1) <= MR_word_to_float(MR_r1));
	MR_proceed();
	}
MR_def_label(rtree__box_contains_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module67)
	MR_init_entry1(fn__rtree__box_area_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__box_area_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'box_area'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__box_area_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word(((MR_word_to_float(MR_tfield(0, MR_r1, 1)) - MR_word_to_float(MR_tfield(0, MR_r1, 0))) * (MR_word_to_float(MR_tfield(0, MR_r1, 3)) - MR_word_to_float(MR_tfield(0, MR_r1, 2)))));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module68)
	MR_init_entry1(fn__rtree__box_bounding_region_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__box_bounding_region_2_0);
	MR_init_label7(fn__rtree__box_bounding_region_2_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'box_bounding_region'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__box_bounding_region_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r2, 3);
	MR_r4 = MR_tfield(0, MR_r2, 2);
	MR_r5 = MR_tfield(0, MR_r2, 1);
	MR_r6 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_r1, 3);
	MR_r7 = MR_tfield(0, MR_r1, 2);
	MR_r8 = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r9 = MR_tempr1;
	if ((MR_word_to_float(MR_tempr1) > MR_word_to_float(MR_r6))) {
		MR_GOTO_LAB(fn__rtree__box_bounding_region_2_0_i2);
	}
	MR_r1 = MR_r8;
	MR_r10 = MR_r2;
	MR_r2 = MR_r7;
	MR_r11 = MR_r3;
	MR_r3 = MR_r10;
	MR_r12 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r12;
	MR_r6 = MR_r11;
	MR_r7 = MR_tempr1;
	MR_GOTO_LAB(fn__rtree__box_bounding_region_2_0_i3);
	}
MR_def_label(fn__rtree__box_bounding_region_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r8;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r7;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr4;
	}
MR_def_label(fn__rtree__box_bounding_region_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) < MR_word_to_float(MR_r4))) {
		MR_GOTO_LAB(fn__rtree__box_bounding_region_2_0_i4);
	}
	MR_r8 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_GOTO_LAB(fn__rtree__box_bounding_region_2_0_i5);
MR_def_label(fn__rtree__box_bounding_region_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_tempr1;
	}
MR_def_label(fn__rtree__box_bounding_region_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) > MR_word_to_float(MR_r3))) {
		MR_GOTO_LAB(fn__rtree__box_bounding_region_2_0_i6);
	}
	MR_r7 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_GOTO_LAB(fn__rtree__box_bounding_region_2_0_i7);
MR_def_label(fn__rtree__box_bounding_region_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_tempr1;
	}
MR_def_label(fn__rtree__box_bounding_region_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) < MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(fn__rtree__box_bounding_region_2_0_i8);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_r3;
	MR_tfield(0, MR_r2, 1) = MR_r4;
	MR_tfield(0, MR_r2, 2) = MR_r5;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__rtree__box_bounding_region_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = MR_r3;
	MR_tfield(0, MR_r1, 1) = MR_r4;
	MR_tfield(0, MR_r1, 2) = MR_r5;
	MR_tfield(0, MR_r1, 3) = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module69)
	MR_init_entry1(fn__rtree__box_bounding_region_area_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__box_bounding_region_area_2_0);
	MR_init_label7(fn__rtree__box_bounding_region_area_2_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'box_bounding_region_area'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__box_bounding_region_area_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r2, 3);
	MR_r4 = MR_tfield(0, MR_r2, 2);
	MR_r5 = MR_tfield(0, MR_r2, 1);
	MR_r6 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_r1, 3);
	MR_r7 = MR_tfield(0, MR_r1, 2);
	MR_r8 = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r9 = MR_tempr1;
	if ((MR_word_to_float(MR_tempr1) > MR_word_to_float(MR_r6))) {
		MR_GOTO_LAB(fn__rtree__box_bounding_region_area_2_0_i2);
	}
	MR_r1 = MR_tempr1;
	MR_r10 = MR_r2;
	MR_r2 = MR_r8;
	MR_r11 = MR_r3;
	MR_r3 = MR_r7;
	MR_r12 = MR_r4;
	MR_r4 = MR_r10;
	MR_r6 = MR_r12;
	MR_r7 = MR_r11;
	MR_GOTO_LAB(fn__rtree__box_bounding_region_area_2_0_i3);
	}
MR_def_label(fn__rtree__box_bounding_region_area_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r8;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_r7;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr2;
	}
MR_def_label(fn__rtree__box_bounding_region_area_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r2) < MR_word_to_float(MR_r5))) {
		MR_GOTO_LAB(fn__rtree__box_bounding_region_area_2_0_i4);
	}
	MR_r8 = MR_r1;
	MR_r1 = MR_r3;
	MR_r9 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_r5 = MR_float_to_word((MR_word_to_float(MR_r9) - MR_word_to_float(MR_r8)));
	MR_GOTO_LAB(fn__rtree__box_bounding_region_area_2_0_i5);
MR_def_label(fn__rtree__box_bounding_region_area_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	MR_r5 = MR_float_to_word((MR_word_to_float(MR_r5) - MR_word_to_float(MR_tempr1)));
	}
MR_def_label(fn__rtree__box_bounding_region_area_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) > MR_word_to_float(MR_r3))) {
		MR_GOTO_LAB(fn__rtree__box_bounding_region_area_2_0_i6);
	}
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_GOTO_LAB(fn__rtree__box_bounding_region_area_2_0_i7);
MR_def_label(fn__rtree__box_bounding_region_area_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
MR_def_label(fn__rtree__box_bounding_region_area_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r2) < MR_word_to_float(MR_r3))) {
		MR_GOTO_LAB(fn__rtree__box_bounding_region_area_2_0_i8);
	}
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_r4) * (MR_word_to_float(MR_r2) - MR_word_to_float(MR_r1))));
	MR_proceed();
MR_def_label(fn__rtree__box_bounding_region_area_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_r4) * (MR_word_to_float(MR_r3) - MR_word_to_float(MR_r1))));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module70)
	MR_init_entry1(rtree__interval_intersects_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__interval_intersects_2_0);
	MR_init_label1(rtree__interval_intersects_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'interval_intersects'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__interval_intersects_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r2, 1);
	MR_r4 = MR_tfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if ((MR_word_to_float(MR_r4) > MR_word_to_float(MR_tempr1))) {
		MR_GOTO_LAB(rtree__interval_intersects_2_0_i2);
	}
	MR_r2 = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_word_to_float(MR_r2) >= MR_word_to_float(MR_tempr1));
	MR_proceed();
	}
MR_def_label(rtree__interval_intersects_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_word_to_float(MR_r4) <= MR_word_to_float(MR_r3));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module71)
	MR_init_entry1(rtree__interval_contains_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__interval_contains_2_0);
	MR_init_label1(rtree__interval_contains_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'interval_contains'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__interval_contains_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_r2, 0);
	if ((MR_word_to_float(MR_tempr1) < MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(rtree__interval_contains_2_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_word_to_float(MR_tempr1) <= MR_word_to_float(MR_r1));
	MR_proceed();
	}
MR_def_label(rtree__interval_contains_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module72)
	MR_init_entry1(fn__rtree__interval_length_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__interval_length_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'interval_length'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__interval_length_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_tfield(0, MR_r1, 0)) - MR_word_to_float(MR_tfield(0, MR_r1, 1))));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module73)
	MR_init_entry1(fn__rtree__interval_bounding_region_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__interval_bounding_region_2_0);
	MR_init_label3(fn__rtree__interval_bounding_region_2_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'interval_bounding_region'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__interval_bounding_region_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r2, 1);
	MR_r4 = MR_tfield(0, MR_r1, 1);
	MR_r5 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if ((MR_word_to_float(MR_r2) > MR_word_to_float(MR_r5))) {
		MR_GOTO_LAB(fn__rtree__interval_bounding_region_2_0_i2);
	}
	MR_r1 = MR_r4;
	MR_r5 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r5;
	MR_GOTO_LAB(fn__rtree__interval_bounding_region_2_0_i3);
MR_def_label(fn__rtree__interval_bounding_region_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r3;
	MR_r3 = MR_r5;
MR_def_label(fn__rtree__interval_bounding_region_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) < MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(fn__rtree__interval_bounding_region_2_0_i4);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r3;
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__rtree__interval_bounding_region_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r3;
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module74)
	MR_init_entry1(fn__rtree__interval_bounding_region_length_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__interval_bounding_region_length_2_0);
	MR_init_label3(fn__rtree__interval_bounding_region_length_2_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'interval_bounding_region_length'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__interval_bounding_region_length_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r2, 0);
	MR_r4 = MR_tfield(0, MR_r1, 0);
	MR_r5 = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_r1, 1);
	if ((MR_word_to_float(MR_r2) < MR_word_to_float(MR_r5))) {
		MR_GOTO_LAB(fn__rtree__interval_bounding_region_length_2_0_i2);
	}
	MR_r1 = MR_r4;
	MR_r5 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r5;
	MR_GOTO_LAB(fn__rtree__interval_bounding_region_length_2_0_i3);
MR_def_label(fn__rtree__interval_bounding_region_length_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r3;
	MR_r3 = MR_r5;
MR_def_label(fn__rtree__interval_bounding_region_length_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) > MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(fn__rtree__interval_bounding_region_length_2_0_i4);
	}
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_r3) - MR_word_to_float(MR_r1)));
	MR_proceed();
MR_def_label(fn__rtree__interval_bounding_region_length_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_r3) - MR_word_to_float(MR_r2)));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module75)
	MR_init_entry1(__Unify___rtree__box_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___rtree__box_0_0);
	MR_init_label2(__Unify___rtree__box_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___rtree__box_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___rtree__box_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Unify___rtree__box_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Unify___rtree__box_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Unify___rtree__box_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = (MR_word_to_float(MR_r1) == MR_word_to_float(MR_r2));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___rtree__box_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___rtree__box_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module76)
	MR_init_entry1(__Compare___rtree__box_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___rtree__box_0_0);
	MR_init_label10(__Compare___rtree__box_0_0,3,2,6,7,9,14,15,17,22,23)
	MR_init_label4(__Compare___rtree__box_0_0,25,28,29,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___rtree__box_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___rtree__box_0_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___rtree__box_0_0_i2);
MR_def_label(__Compare___rtree__box_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(6);
	MR_proceed();
MR_def_label(__Compare___rtree__box_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_word_to_float(MR_r5) >= MR_word_to_float(MR_r4))) {
		MR_GOTO_LAB(__Compare___rtree__box_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___rtree__box_0_0_i9);
	}
MR_def_label(__Compare___rtree__box_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r5) <= MR_word_to_float(MR_r4))) {
		MR_GOTO_LAB(__Compare___rtree__box_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
	MR_GOTO_LAB(__Compare___rtree__box_0_0_i9);
MR_def_label(__Compare___rtree__box_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
MR_def_label(__Compare___rtree__box_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__box_0_0_i35);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if ((MR_word_to_float(MR_r3) >= MR_word_to_float(MR_sv(4)))) {
		MR_GOTO_LAB(__Compare___rtree__box_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___rtree__box_0_0_i17);
MR_def_label(__Compare___rtree__box_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r3) <= MR_word_to_float(MR_sv(4)))) {
		MR_GOTO_LAB(__Compare___rtree__box_0_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
	MR_GOTO_LAB(__Compare___rtree__box_0_0_i17);
MR_def_label(__Compare___rtree__box_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
MR_def_label(__Compare___rtree__box_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__box_0_0_i35);
	}
	MR_r2 = MR_sv(2);
	if ((MR_word_to_float(MR_r2) >= MR_word_to_float(MR_sv(5)))) {
		MR_GOTO_LAB(__Compare___rtree__box_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___rtree__box_0_0_i25);
MR_def_label(__Compare___rtree__box_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r2) <= MR_word_to_float(MR_sv(5)))) {
		MR_GOTO_LAB(__Compare___rtree__box_0_0_i23);
	}
	MR_r1 = (MR_Integer) 2;
	MR_GOTO_LAB(__Compare___rtree__box_0_0_i25);
MR_def_label(__Compare___rtree__box_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
MR_def_label(__Compare___rtree__box_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__box_0_0_i35);
	}
	if ((MR_word_to_float(MR_sv(3)) >= MR_word_to_float(MR_sv(6)))) {
		MR_GOTO_LAB(__Compare___rtree__box_0_0_i28);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(6);
	MR_proceed();
MR_def_label(__Compare___rtree__box_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(3)) <= MR_word_to_float(MR_sv(6)))) {
		MR_GOTO_LAB(__Compare___rtree__box_0_0_i29);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(6);
	MR_proceed();
MR_def_label(__Compare___rtree__box_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
MR_def_label(__Compare___rtree__box_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module77)
	MR_init_entry1(__Unify___rtree__box3d_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___rtree__box3d_0_0);
	MR_init_label2(__Unify___rtree__box3d_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___rtree__box3d_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___rtree__box3d_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Unify___rtree__box3d_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Unify___rtree__box3d_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Unify___rtree__box3d_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Unify___rtree__box3d_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Unify___rtree__box3d_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	MR_r2 = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = (MR_word_to_float(MR_r1) == MR_word_to_float(MR_r2));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___rtree__box3d_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___rtree__box3d_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module78)
	MR_init_entry1(__Compare___rtree__box3d_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___rtree__box3d_0_0);
	MR_init_label10(__Compare___rtree__box3d_0_0,3,2,6,7,9,14,15,17,22,23)
	MR_init_label10(__Compare___rtree__box3d_0_0,25,30,31,33,38,39,41,44,45,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___rtree__box3d_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i2);
MR_def_label(__Compare___rtree__box3d_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(10);
	MR_proceed();
MR_def_label(__Compare___rtree__box3d_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_word_to_float(MR_r5) >= MR_word_to_float(MR_r4))) {
		MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i9);
	}
MR_def_label(__Compare___rtree__box3d_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r5) <= MR_word_to_float(MR_r4))) {
		MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
	MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i9);
MR_def_label(__Compare___rtree__box3d_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
MR_def_label(__Compare___rtree__box3d_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i53);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if ((MR_word_to_float(MR_r3) >= MR_word_to_float(MR_sv(6)))) {
		MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i17);
MR_def_label(__Compare___rtree__box3d_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r3) <= MR_word_to_float(MR_sv(6)))) {
		MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
	MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i17);
MR_def_label(__Compare___rtree__box3d_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
MR_def_label(__Compare___rtree__box3d_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i53);
	}
	MR_r2 = MR_sv(2);
	if ((MR_word_to_float(MR_r2) >= MR_word_to_float(MR_sv(7)))) {
		MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i25);
MR_def_label(__Compare___rtree__box3d_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r2) <= MR_word_to_float(MR_sv(7)))) {
		MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i23);
	}
	MR_r1 = (MR_Integer) 2;
	MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i25);
MR_def_label(__Compare___rtree__box3d_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
MR_def_label(__Compare___rtree__box3d_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i53);
	}
	if ((MR_word_to_float(MR_sv(3)) >= MR_word_to_float(MR_sv(8)))) {
		MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i33);
MR_def_label(__Compare___rtree__box3d_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(3)) <= MR_word_to_float(MR_sv(8)))) {
		MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i31);
	}
	MR_r1 = (MR_Integer) 2;
	MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i33);
MR_def_label(__Compare___rtree__box3d_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
MR_def_label(__Compare___rtree__box3d_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i53);
	}
	if ((MR_word_to_float(MR_sv(4)) >= MR_word_to_float(MR_sv(9)))) {
		MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i38);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i41);
MR_def_label(__Compare___rtree__box3d_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(4)) <= MR_word_to_float(MR_sv(9)))) {
		MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i39);
	}
	MR_r1 = (MR_Integer) 2;
	MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i41);
MR_def_label(__Compare___rtree__box3d_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
MR_def_label(__Compare___rtree__box3d_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i53);
	}
	if ((MR_word_to_float(MR_sv(5)) >= MR_word_to_float(MR_sv(10)))) {
		MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i44);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(10);
	MR_proceed();
MR_def_label(__Compare___rtree__box3d_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(5)) <= MR_word_to_float(MR_sv(10)))) {
		MR_GOTO_LAB(__Compare___rtree__box3d_0_0_i45);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(10);
	MR_proceed();
MR_def_label(__Compare___rtree__box3d_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
MR_def_label(__Compare___rtree__box3d_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(10);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(rtree_module79)
	MR_init_entry1(__Unify___rtree__delete_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___rtree__delete_info_2_0);
	MR_init_label3(__Unify___rtree__delete_info_2_0,18,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___rtree__delete_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___rtree__delete_info_2_0_i18);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___rtree__delete_info_2_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___rtree__delete_info_2_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(rtree, orphan, 2);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tfield(0, MR_r1, 2) = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___rtree__delete_info_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___rtree__delete_info_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___rtree__delete_info_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___rtree__delete_info_2_0_i1);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(rtree, orphan, 2);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tfield(0, MR_r1, 2) = MR_sv(4);
	MR_r2 = MR_tfield(1, MR_tempr3, 1);
	MR_r3 = MR_tfield(1, MR_tempr4, 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___rtree__delete_info_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(rtree_module80)
	MR_init_entry1(__Compare___rtree__delete_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___rtree__delete_info_2_0);
	MR_init_label9(__Compare___rtree__delete_info_2_0,3,2,7,5,11,14,15,17,59)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___rtree__delete_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___rtree__delete_info_2_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_GOTO_LAB(__Compare___rtree__delete_info_2_0_i2);
MR_def_label(__Compare___rtree__delete_info_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___rtree__delete_info_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___rtree__delete_info_2_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___rtree__delete_info_2_0_i7);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(rtree, orphan, 2);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tfield(0, MR_r1, 2) = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___rtree__delete_info_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___rtree__delete_info_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___rtree__delete_info_2_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___rtree__delete_info_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r4 = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_r5 = MR_tfield(1, MR_tempr2, 1);
	MR_r6 = MR_tfield(1, MR_tempr1, 0);
	MR_r7 = MR_tfield(1, MR_tempr2, 0);
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(__Compare___rtree__delete_info_2_0_i14);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 1;
	MR_sv(2) = MR_r4;
	MR_GOTO_LAB(__Compare___rtree__delete_info_2_0_i17);
	}
MR_def_label(__Compare___rtree__delete_info_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r6 != MR_r7)) {
		MR_GOTO_LAB(__Compare___rtree__delete_info_2_0_i15);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 0;
	MR_sv(2) = MR_r4;
	MR_GOTO_LAB(__Compare___rtree__delete_info_2_0_i17);
MR_def_label(__Compare___rtree__delete_info_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 2;
	MR_sv(2) = MR_r4;
MR_def_label(__Compare___rtree__delete_info_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__delete_info_2_0_i59);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(rtree, orphan, 2);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tfield(0, MR_r1, 2) = MR_sv(4);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
MR_def_label(__Compare___rtree__delete_info_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module81)
	MR_init_entry1(__Unify___rtree__interval_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___rtree__interval_0_0);
	MR_init_label2(__Unify___rtree__interval_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___rtree__interval_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___rtree__interval_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Unify___rtree__interval_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_word_to_float(MR_r1) == MR_word_to_float(MR_r2));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___rtree__interval_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___rtree__interval_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module82)
	MR_init_entry1(__Compare___rtree__interval_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___rtree__interval_0_0);
	MR_init_label8(__Compare___rtree__interval_0_0,3,2,6,7,9,12,13,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___rtree__interval_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___rtree__interval_0_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___rtree__interval_0_0_i2);
MR_def_label(__Compare___rtree__interval_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___rtree__interval_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_word_to_float(MR_r5) >= MR_word_to_float(MR_r4))) {
		MR_GOTO_LAB(__Compare___rtree__interval_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___rtree__interval_0_0_i9);
	}
MR_def_label(__Compare___rtree__interval_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r5) <= MR_word_to_float(MR_r4))) {
		MR_GOTO_LAB(__Compare___rtree__interval_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
	MR_GOTO_LAB(__Compare___rtree__interval_0_0_i9);
MR_def_label(__Compare___rtree__interval_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
MR_def_label(__Compare___rtree__interval_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__interval_0_0_i17);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if ((MR_word_to_float(MR_r3) >= MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Compare___rtree__interval_0_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___rtree__interval_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r3) <= MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Compare___rtree__interval_0_0_i13);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___rtree__interval_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
MR_def_label(__Compare___rtree__interval_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module83)
	MR_init_entry1(__Unify___rtree__min_of_four_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___rtree__min_of_four_result_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___rtree__min_of_four_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module84)
	MR_init_entry1(__Compare___rtree__min_of_four_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___rtree__min_of_four_result_0_0);
	MR_init_label2(__Compare___rtree__min_of_four_result_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___rtree__min_of_four_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___rtree__min_of_four_result_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___rtree__min_of_four_result_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___rtree__min_of_four_result_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___rtree__min_of_four_result_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module85)
	MR_init_entry1(__Unify___rtree__min_of_three_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___rtree__min_of_three_result_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___rtree__min_of_three_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module86)
	MR_init_entry1(__Compare___rtree__min_of_three_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___rtree__min_of_three_result_0_0);
	MR_init_label2(__Compare___rtree__min_of_three_result_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___rtree__min_of_three_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___rtree__min_of_three_result_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___rtree__min_of_three_result_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___rtree__min_of_three_result_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___rtree__min_of_three_result_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module87)
	MR_init_entry1(__Unify___rtree__min_of_two_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___rtree__min_of_two_result_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___rtree__min_of_two_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module88)
	MR_init_entry1(__Compare___rtree__min_of_two_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___rtree__min_of_two_result_0_0);
	MR_init_label2(__Compare___rtree__min_of_two_result_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___rtree__min_of_two_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___rtree__min_of_two_result_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___rtree__min_of_two_result_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___rtree__min_of_two_result_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___rtree__min_of_two_result_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module89)
	MR_init_entry1(__Unify___rtree__orphan_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___rtree__orphan_2_0);
	MR_init_label3(__Unify___rtree__orphan_2_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___rtree__orphan_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___rtree__orphan_2_0_i8);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___rtree__orphan_2_0_i4);
MR_def_label(__Unify___rtree__orphan_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rtree__orphan_2_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___rtree__rtree_2_2_0);
MR_def_label(__Unify___rtree__orphan_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___rtree__orphan_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module90)
	MR_init_entry1(__Compare___rtree__orphan_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___rtree__orphan_2_0);
	MR_init_label4(__Compare___rtree__orphan_2_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___rtree__orphan_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___rtree__orphan_2_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_GOTO_LAB(__Compare___rtree__orphan_2_0_i2);
MR_def_label(__Compare___rtree__orphan_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___rtree__orphan_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___rtree__orphan_2_0_i5);
MR_def_label(__Compare___rtree__orphan_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__orphan_2_0_i21);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___rtree__rtree_2_2_0);
MR_def_label(__Compare___rtree__orphan_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module91)
	MR_init_entry1(__Unify___rtree__orphans_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___rtree__orphans_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___rtree__orphans_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(rtree, orphan, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module92)
	MR_init_entry1(__Compare___rtree__orphans_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___rtree__orphans_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___rtree__orphans_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(rtree, orphan, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module93)
	MR_init_entry1(__Unify___rtree__rtree_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___rtree__rtree_2_0);
	MR_init_label5(__Unify___rtree__rtree_2_0,5,8,22,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___rtree__rtree_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_0_i22);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(5);
	MR_proceed();
	}
MR_def_label(__Unify___rtree__rtree_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___rtree__rtree_2_0_i8);
MR_def_label(__Unify___rtree__rtree_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___rtree__rtree_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___rtree__rtree_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(2, MR_sv(1), 0);
	MR_r4 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___rtree__rtree_2_2_0);
MR_def_label(__Unify___rtree__rtree_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module94)
	MR_init_entry1(__Compare___rtree__rtree_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___rtree__rtree_2_0);
	MR_init_label9(__Compare___rtree__rtree_2_0,36,37,5,11,14,9,20,21,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___rtree__rtree_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_0_i36);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_0_i37);
	}
MR_def_label(__Compare___rtree__rtree_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___rtree__rtree_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___rtree__rtree_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___rtree__rtree_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_0_i37);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___rtree__rtree_2_0_i14);
MR_def_label(__Compare___rtree__rtree_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_0_i23);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___rtree__rtree_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_0_i20);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___rtree__rtree_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___rtree__rtree_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(2, MR_sv(1), 0);
	MR_r4 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___rtree__rtree_2_2_0);
MR_def_label(__Compare___rtree__rtree_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module95)
	MR_init_entry1(__Unify___rtree__rtree_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___rtree__rtree_2_2_0);
	MR_init_label10(__Unify___rtree__rtree_2_2_0,147,7,9,11,13,15,17,19,5,23)
	MR_init_label10(__Unify___rtree__rtree_2_2_0,29,31,33,35,37,72,27,42,44,46)
	MR_init_label1(__Unify___rtree__rtree_2_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___rtree__rtree_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
MR_def_label(__Unify___rtree__rtree_2_2_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i72);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(15) = MR_r1;
	MR_sv(16) = MR_r2;
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,3)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(3, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr3, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr3, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr3, 5);
	MR_sv(6) = MR_tfield(3, MR_tempr3, 6);
	MR_sv(7) = MR_tfield(3, MR_tempr3, 7);
	MR_sv(8) = MR_tfield(3, MR_tempr4, 1);
	MR_sv(9) = MR_tfield(3, MR_tempr4, 2);
	MR_sv(10) = MR_tfield(3, MR_tempr4, 3);
	MR_sv(11) = MR_tfield(3, MR_tempr4, 4);
	MR_sv(12) = MR_tfield(3, MR_tempr4, 5);
	MR_sv(13) = MR_tfield(3, MR_tempr4, 6);
	MR_sv(14) = MR_tfield(3, MR_tempr4, 7);
	MR_r2 = MR_tfield(3, MR_tempr3, 0);
	MR_r3 = MR_tfield(3, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___rtree__rtree_2_2_0_i7);
MR_def_label(__Unify___rtree__rtree_2_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(8);
	MR_np_localcall_lab(__Unify___rtree__rtree_2_2_0,
		__Unify___rtree__rtree_2_2_0_i9);
MR_def_label(__Unify___rtree__rtree_2_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___rtree__rtree_2_2_0_i11);
MR_def_label(__Unify___rtree__rtree_2_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_np_localcall_lab(__Unify___rtree__rtree_2_2_0,
		__Unify___rtree__rtree_2_2_0_i13);
MR_def_label(__Unify___rtree__rtree_2_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___rtree__rtree_2_2_0_i15);
MR_def_label(__Unify___rtree__rtree_2_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(12);
	MR_np_localcall_lab(__Unify___rtree__rtree_2_2_0,
		__Unify___rtree__rtree_2_2_0_i17);
MR_def_label(__Unify___rtree__rtree_2_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___rtree__rtree_2_2_0_i19);
MR_def_label(__Unify___rtree__rtree_2_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(14);
	MR_succip_word = MR_sv(17);
	MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i147);
MR_def_label(__Unify___rtree__rtree_2_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i23);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i1);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___rtree__rtree_2_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i27);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(2, MR_tempr2, 3);
	MR_sv(9) = MR_tfield(2, MR_tempr2, 4);
	MR_sv(10) = MR_tfield(2, MR_tempr2, 5);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___rtree__rtree_2_2_0_i29);
MR_def_label(__Unify___rtree__rtree_2_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_np_localcall_lab(__Unify___rtree__rtree_2_2_0,
		__Unify___rtree__rtree_2_2_0_i31);
MR_def_label(__Unify___rtree__rtree_2_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___rtree__rtree_2_2_0_i33);
MR_def_label(__Unify___rtree__rtree_2_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_np_localcall_lab(__Unify___rtree__rtree_2_2_0,
		__Unify___rtree__rtree_2_2_0_i35);
MR_def_label(__Unify___rtree__rtree_2_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___rtree__rtree_2_2_0_i37);
MR_def_label(__Unify___rtree__rtree_2_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(10);
	MR_succip_word = MR_sv(17);
	MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i147);
MR_def_label(__Unify___rtree__rtree_2_2_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(17);
MR_def_label(__Unify___rtree__rtree_2_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i1);
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
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___rtree__rtree_2_2_0_i42);
MR_def_label(__Unify___rtree__rtree_2_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_localcall_lab(__Unify___rtree__rtree_2_2_0,
		__Unify___rtree__rtree_2_2_0_i44);
MR_def_label(__Unify___rtree__rtree_2_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___rtree__rtree_2_2_0_i46);
MR_def_label(__Unify___rtree__rtree_2_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i1);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(17);
	MR_GOTO_LAB(__Unify___rtree__rtree_2_2_0_i147);
MR_def_label(__Unify___rtree__rtree_2_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module96)
	MR_init_entry1(__Compare___rtree__rtree_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___rtree__rtree_2_2_0);
	MR_init_label10(__Compare___rtree__rtree_2_2_0,223,3,2,9,13,17,21,25,29,33)
	MR_init_label10(__Compare___rtree__rtree_2_2_0,7,44,5,48,49,46,54,55,58,62)
	MR_init_label10(__Compare___rtree__rtree_2_2_0,66,70,74,52,84,130,85,131,86,88)
	MR_init_label3(__Compare___rtree__rtree_2_2_0,92,96,238)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___rtree__rtree_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
MR_def_label(__Compare___rtree__rtree_2_2_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i2);
MR_def_label(__Compare___rtree__rtree_2_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(17);
MR_def_label(__Compare___rtree__rtree_2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(16) = MR_tfield(3, MR_tempr5, 1);
	MR_sv(15) = MR_tfield(3, MR_tempr5, 2);
	MR_sv(14) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(13) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(12) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(11) = MR_tfield(3, MR_tempr5, 6);
	MR_sv(10) = MR_tfield(3, MR_tempr5, 7);
	MR_tempr6 = MR_sv(2);
	MR_sv(7) = MR_tfield(3, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(3, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tfield(3, MR_tempr3, 0);
	MR_r3 = MR_tfield(3, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___rtree__rtree_2_2_0_i9);
MR_def_label(__Compare___rtree__rtree_2_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i238);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(16);
	MR_r4 = MR_sv(1);
	MR_np_localcall_lab(__Compare___rtree__rtree_2_2_0,
		__Compare___rtree__rtree_2_2_0_i13);
MR_def_label(__Compare___rtree__rtree_2_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i238);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___rtree__rtree_2_2_0_i17);
MR_def_label(__Compare___rtree__rtree_2_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i238);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(__Compare___rtree__rtree_2_2_0,
		__Compare___rtree__rtree_2_2_0_i21);
MR_def_label(__Compare___rtree__rtree_2_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i238);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___rtree__rtree_2_2_0_i25);
MR_def_label(__Compare___rtree__rtree_2_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i238);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(5);
	MR_np_localcall_lab(__Compare___rtree__rtree_2_2_0,
		__Compare___rtree__rtree_2_2_0_i29);
MR_def_label(__Compare___rtree__rtree_2_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i238);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___rtree__rtree_2_2_0_i33);
MR_def_label(__Compare___rtree__rtree_2_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i238);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(17);
	MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i223);
MR_def_label(__Compare___rtree__rtree_2_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i44);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(17);
MR_def_label(__Compare___rtree__rtree_2_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i130);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(17);
MR_def_label(__Compare___rtree__rtree_2_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i46);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i48);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(17);
MR_def_label(__Compare___rtree__rtree_2_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i49);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___rtree__rtree_2_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i131);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(17);
MR_def_label(__Compare___rtree__rtree_2_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i52);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i54);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(17);
MR_def_label(__Compare___rtree__rtree_2_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i55);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(17);
MR_def_label(__Compare___rtree__rtree_2_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i130);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(12) = MR_tfield(2, MR_tempr5, 1);
	MR_sv(11) = MR_tfield(2, MR_tempr5, 2);
	MR_sv(10) = MR_tfield(2, MR_tempr5, 3);
	MR_sv(7) = MR_tfield(2, MR_tempr5, 4);
	MR_sv(6) = MR_tfield(2, MR_tempr5, 5);
	MR_tempr6 = MR_sv(2);
	MR_sv(5) = MR_tfield(2, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(2, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(2, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(2, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tfield(2, MR_tempr3, 0);
	MR_r3 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___rtree__rtree_2_2_0_i58);
MR_def_label(__Compare___rtree__rtree_2_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i238);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(1);
	MR_np_localcall_lab(__Compare___rtree__rtree_2_2_0,
		__Compare___rtree__rtree_2_2_0_i62);
MR_def_label(__Compare___rtree__rtree_2_2_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i238);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___rtree__rtree_2_2_0_i66);
MR_def_label(__Compare___rtree__rtree_2_2_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i238);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(__Compare___rtree__rtree_2_2_0,
		__Compare___rtree__rtree_2_2_0_i70);
MR_def_label(__Compare___rtree__rtree_2_2_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i238);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___rtree__rtree_2_2_0_i74);
MR_def_label(__Compare___rtree__rtree_2_2_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i238);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(17);
	MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i223);
MR_def_label(__Compare___rtree__rtree_2_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i84);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(17);
MR_def_label(__Compare___rtree__rtree_2_2_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i85);
	}
MR_def_label(__Compare___rtree__rtree_2_2_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(17);
MR_def_label(__Compare___rtree__rtree_2_2_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i86);
	}
MR_def_label(__Compare___rtree__rtree_2_2_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(17);
MR_def_label(__Compare___rtree__rtree_2_2_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(6) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_sv(3) = MR_tfield(1, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___rtree__rtree_2_2_0_i88);
MR_def_label(__Compare___rtree__rtree_2_2_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i238);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_np_localcall_lab(__Compare___rtree__rtree_2_2_0,
		__Compare___rtree__rtree_2_2_0_i92);
MR_def_label(__Compare___rtree__rtree_2_2_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i238);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___rtree__rtree_2_2_0_i96);
MR_def_label(__Compare___rtree__rtree_2_2_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i238);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(17);
	MR_GOTO_LAB(__Compare___rtree__rtree_2_2_0_i223);
MR_def_label(__Compare___rtree__rtree_2_2_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module97)
	MR_init_entry1(rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_0);
	MR_init_label1(rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r2, 1);
	MR_r4 = MR_tfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if ((MR_word_to_float(MR_r4) > MR_word_to_float(MR_tempr1))) {
		MR_GOTO_LAB(rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_0_i2);
	}
	MR_r2 = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_word_to_float(MR_r2) >= MR_word_to_float(MR_tempr1));
	MR_proceed();
	}
MR_def_label(rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_word_to_float(MR_r4) <= MR_word_to_float(MR_r3));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module98)
	MR_init_entry1(rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_0);
	MR_init_label1(rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_r2, 0);
	if ((MR_word_to_float(MR_tempr1) < MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_r1 = (MR_word_to_float(MR_tempr1) <= MR_word_to_float(MR_r1));
	MR_proceed();
	}
MR_def_label(rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module99)
	MR_init_entry1(fn__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_tfield(0, MR_r1, 0)) - MR_word_to_float(MR_tfield(0, MR_r1, 1))));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module100)
	MR_init_entry1(fn__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__rtree__interval_bounding_region_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module101)
	MR_init_entry1(fn__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__rtree__interval_bounding_region_length_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module102)
	MR_init_entry1(rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rtree__box_intersects_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module103)
	MR_init_entry1(rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_0);
	MR_init_label1(rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_r2, 0);
	if ((MR_word_to_float(MR_tempr1) < MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_tempr2 = MR_tfield(0, MR_r2, 1);
	if ((MR_word_to_float(MR_tempr1) > MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	MR_tempr2 = MR_tfield(0, MR_r2, 2);
	if ((MR_word_to_float(MR_tempr1) < MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_tfield(0, MR_r2, 3);
	MR_r1 = (MR_word_to_float(MR_tempr1) <= MR_word_to_float(MR_r1));
	MR_proceed();
	}
MR_def_label(rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module104)
	MR_init_entry1(fn__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word(((MR_word_to_float(MR_tfield(0, MR_r1, 1)) - MR_word_to_float(MR_tfield(0, MR_r1, 0))) * (MR_word_to_float(MR_tfield(0, MR_r1, 3)) - MR_word_to_float(MR_tfield(0, MR_r1, 2)))));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module105)
	MR_init_entry1(fn__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__rtree__box_bounding_region_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module106)
	MR_init_entry1(fn__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__rtree__box_bounding_region_area_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module107)
	MR_init_entry1(rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(rtree__box3d_intersects_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module108)
	MR_init_entry1(rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_0);
	MR_init_label1(rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_r2, 0);
	if ((MR_word_to_float(MR_tempr1) < MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_tempr2 = MR_tfield(0, MR_r2, 1);
	if ((MR_word_to_float(MR_tempr1) > MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	MR_tempr2 = MR_tfield(0, MR_r2, 2);
	if ((MR_word_to_float(MR_tempr1) < MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 3);
	MR_tempr2 = MR_tfield(0, MR_r2, 3);
	if ((MR_word_to_float(MR_tempr1) > MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 4);
	MR_tempr2 = MR_tfield(0, MR_r2, 4);
	if ((MR_word_to_float(MR_tempr1) < MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 5);
	MR_r1 = MR_tfield(0, MR_r2, 5);
	MR_r1 = (MR_word_to_float(MR_tempr1) <= MR_word_to_float(MR_r1));
	MR_proceed();
	}
MR_def_label(rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module109)
	MR_init_entry1(fn__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_float_to_word((((MR_word_to_float(MR_tfield(0, MR_r1, 1)) - MR_word_to_float(MR_tfield(0, MR_r1, 0))) * (MR_word_to_float(MR_tfield(0, MR_r1, 3)) - MR_word_to_float(MR_tfield(0, MR_r1, 2)))) * (MR_word_to_float(MR_tfield(0, MR_r1, 5)) - MR_word_to_float(MR_tfield(0, MR_r1, 4)))));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module110)
	MR_init_entry1(fn__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__rtree__box3d_bounding_region_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module111)
	MR_init_entry1(fn__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__rtree__box3d_bounding_region_volume_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module112)
	MR_init_entry1(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0);
	MR_init_label10(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,110,4,3,8,9,10,11,12,13,14)
	MR_init_label10(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,15,16,19,22,23,20,28,58,29,34)
	MR_init_label6(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,36,38,7,42,44,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__insert_2__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i4);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tfield(1, MR_tempr1, 2) = MR_r3;
	MR_tfield(1, MR_tempr1, 3) = MR_r4;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i110);
	}
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(2, MR_r2, 0);
	MR_sv(4) = MR_tfield(2, MR_r2, 1);
	MR_sv(5) = MR_tfield(2, MR_r2, 2);
	MR_sv(6) = MR_tfield(2, MR_r2, 3);
	MR_sv(7) = MR_tfield(2, MR_r2, 4);
	MR_sv(8) = MR_tfield(2, MR_r2, 5);
	MR_sv(9) = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i8);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(5);
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i9);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(7);
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i10);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i11);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i12);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i13);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r10 = MR_float_to_word((MR_word_to_float(MR_r1) - MR_word_to_float(MR_sv(12))));
	MR_r11 = MR_float_to_word((MR_word_to_float(MR_sv(14)) - MR_word_to_float(MR_sv(11))));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_float_to_word((MR_word_to_float(MR_sv(13)) - MR_word_to_float(MR_sv(10))));
	MR_r12 = MR_tempr1;
	if ((MR_word_to_float(MR_tempr1) >= MR_word_to_float(MR_r11))) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i14);
	}
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r1 = MR_sv(9);
	MR_r14 = MR_r10;
	MR_r10 = MR_tempr1;
	MR_r12 = MR_r14;
	MR_r13 = (MR_Integer) 0;
	MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i19);
	}
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r12) <= MR_word_to_float(MR_r11))) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i15);
	}
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r1 = MR_sv(9);
	MR_r14 = MR_r10;
	MR_r10 = MR_r12;
	MR_r12 = MR_r14;
	MR_r13 = (MR_Integer) 1;
	MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i19);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(10)) > MR_word_to_float(MR_sv(11)))) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i16);
	}
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r1 = MR_sv(9);
	MR_r14 = MR_r10;
	MR_r10 = MR_r12;
	MR_r12 = MR_r14;
	MR_r13 = (MR_Integer) 0;
	MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i19);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r1 = MR_sv(9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r10;
	MR_r10 = MR_r12;
	MR_r12 = MR_tempr1;
	MR_r13 = (MR_Integer) 1;
	}
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r13,0)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i20);
	}
	if ((MR_word_to_float(MR_r10) >= MR_word_to_float(MR_r12))) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i22);
	}
	MR_r10 = (MR_Integer) 0;
	MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i34);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r10) <= MR_word_to_float(MR_r12))) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i23);
	}
	MR_r10 = (MR_Integer) 2;
	MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i34);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(10)) > MR_word_to_float(MR_sv(12)))) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i58);
	}
	MR_r10 = (MR_Integer) 0;
	MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i34);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r11) >= MR_word_to_float(MR_r12))) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i28);
	}
	MR_r10 = (MR_Integer) 1;
	MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i34);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r11) <= MR_word_to_float(MR_r12))) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i29);
	}
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r10 = (MR_Integer) 2;
	MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i34);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(10)) > MR_word_to_float(MR_sv(11)))) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i58);
	}
	MR_r10 = (MR_Integer) 1;
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r10,0)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i36);
	}
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r10,1)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i38);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_r5;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0);
	}
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r6;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_r7;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0);
	}
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i41);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_sv(5) = MR_tfield(1, MR_r2, 2);
	MR_sv(6) = MR_tfield(1, MR_r2, 3);
	MR_sv(9) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__rtree__choose_subtree_3_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i42);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0_i44);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("insert: leaf unexpected", 23);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module113)
	MR_init_entry1(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0);
	MR_init_label10(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,4,5,6,7,8,9,35,10,14,17)
	MR_init_label10(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,18,16,20,21,3,66,27,28,26,30)
	MR_init_label1(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__insert_and_split_child2__[1]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(9) = MR_r1;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0_i4);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0_i5);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(7);
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0_i6);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0_i7);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0_i8);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_float_to_word((MR_word_to_float(MR_r1) - MR_word_to_float(MR_sv(11))));
	MR_r6 = MR_float_to_word((MR_word_to_float(MR_sv(12)) - MR_word_to_float(MR_sv(10))));
	if ((MR_word_to_float(MR_r6) >= MR_word_to_float(MR_r5))) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0_i9);
	}
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0_i14);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r6) <= MR_word_to_float(MR_r5))) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0_i10);
	}
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0_i14);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(10)) > MR_word_to_float(MR_sv(11)))) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0_i35);
	}
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_sv(9);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0_i16);
	}
	MR_sv(4) = MR_r3;
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Integer) 4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0_i17);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0_i18);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 6);
	MR_tfield(2, MR_r2, 0) = MR_sv(2);
	MR_tfield(2, MR_r2, 1) = MR_sv(3);
	MR_tfield(2, MR_r2, 2) = MR_sv(7);
	MR_tfield(2, MR_r2, 3) = MR_sv(8);
	MR_tfield(2, MR_r2, 4) = MR_sv(1);
	MR_tfield(2, MR_r2, 5) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(13);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(9) = MR_r1;
	MR_r4 = MR_sv(7);
	MR_r2 = (MR_Integer) 4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0_i20);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0_i21);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 6);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0_i66);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r7;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 6);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_tfield(2, MR_r1, 1) = MR_r3;
	MR_tfield(2, MR_r1, 2) = MR_r4;
	MR_tfield(2, MR_r1, 3) = MR_r5;
	MR_tfield(2, MR_r1, 4) = MR_r6;
	MR_tfield(2, MR_r1, 5) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0_i26);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r7;
	MR_sv(9) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r2;
	MR_r2 = (MR_Integer) 4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0_i27);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0_i28);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r7;
	MR_sv(9) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r2;
	MR_r2 = (MR_Integer) 4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0_i30);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0_i31);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module114)
	MR_init_entry1(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0);
	MR_init_label10(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,4,5,6,7,8,9,35,10,14,17)
	MR_init_label10(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,18,16,20,21,3,66,27,28,26,30)
	MR_init_label1(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__insert_and_split_child3__[1]_0'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(11) = MR_r1;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0_i4);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(4);
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0_i5);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(1);
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0_i6);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0_i7);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0_i8);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_float_to_word((MR_word_to_float(MR_r1) - MR_word_to_float(MR_sv(13))));
	MR_r6 = MR_float_to_word((MR_word_to_float(MR_sv(14)) - MR_word_to_float(MR_sv(12))));
	if ((MR_word_to_float(MR_r6) >= MR_word_to_float(MR_r5))) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0_i9);
	}
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_sv(11);
	MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0_i14);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r6) <= MR_word_to_float(MR_r5))) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0_i10);
	}
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_sv(11);
	MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0_i14);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(12)) > MR_word_to_float(MR_sv(13)))) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0_i35);
	}
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_sv(11);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0_i16);
	}
	MR_sv(6) = MR_r3;
	MR_sv(11) = MR_r1;
	MR_r2 = (MR_Integer) 4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0_i17);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0_i18);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 8);
	MR_tfield(3, MR_r2, 0) = MR_sv(2);
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_tfield(3, MR_r2, 2) = MR_sv(4);
	MR_tfield(3, MR_r2, 3) = MR_sv(5);
	MR_tfield(3, MR_r2, 4) = MR_sv(9);
	MR_tfield(3, MR_r2, 5) = MR_sv(10);
	MR_tfield(3, MR_r2, 6) = MR_sv(1);
	MR_tfield(3, MR_r2, 7) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(15);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(11) = MR_r1;
	MR_r4 = MR_sv(9);
	MR_r2 = (MR_Integer) 4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0_i20);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0_i21);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 8);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0_i66);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r9;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 8);
	MR_tfield(3, MR_r1, 0) = MR_r2;
	MR_tfield(3, MR_r1, 1) = MR_r3;
	MR_tfield(3, MR_r1, 2) = MR_r4;
	MR_tfield(3, MR_r1, 3) = MR_r5;
	MR_tfield(3, MR_r1, 4) = MR_r6;
	MR_tfield(3, MR_r1, 5) = MR_r7;
	MR_tfield(3, MR_r1, 6) = MR_r8;
	MR_tfield(3, MR_r1, 7) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0_i26);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r9;
	MR_sv(11) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r2;
	MR_r2 = (MR_Integer) 4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0_i27);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0_i28);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 6);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 5) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r9;
	MR_sv(11) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r2;
	MR_r2 = (MR_Integer) 4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0_i30);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0_i31);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 6);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 5) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module115)
	MR_init_entry1(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0);
	MR_init_label10(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,2,3,4,5,6,7,8,11,13,16)
	MR_init_label7(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,18,15,21,23,20,25,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__split_4_node__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 0);
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_sv(4) = MR_tfield(3, MR_r2, 3);
	MR_sv(5) = MR_tfield(3, MR_r2, 4);
	MR_sv(6) = MR_tfield(3, MR_r2, 5);
	MR_sv(7) = MR_tfield(3, MR_r2, 6);
	MR_sv(8) = MR_tfield(3, MR_r2, 7);
	MR_sv(12) = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0_i2);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0_i3);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_float_to_word((MR_word_to_float(MR_sv(9)) + MR_word_to_float(MR_r1)));
	MR_r1 = MR_sv(12);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0_i4);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0_i5);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_float_to_word((MR_word_to_float(MR_sv(10)) + MR_word_to_float(MR_r1)));
	MR_r1 = MR_sv(12);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0_i6);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0_i7);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_float_to_word((MR_word_to_float(MR_sv(11)) + MR_word_to_float(MR_r1)));
	if ((MR_word_to_float(MR_sv(9)) > MR_word_to_float(MR_sv(10)))) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0_i8);
	}
	if ((MR_word_to_float(MR_sv(9)) > MR_word_to_float(MR_r5))) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0_i11);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0_i13);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_sv(10)) > MR_word_to_float(MR_r5))) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0_i11);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0_i13);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_sv(12);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0_i15);
	}
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(12) = MR_r1;
	MR_r2 = (MR_Integer) 4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0_i16);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(4);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(12);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r2 = (MR_Integer) 4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0_i18);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(8);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0_i20);
	}
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(12) = MR_r1;
	MR_r4 = MR_sv(5);
	MR_r2 = (MR_Integer) 4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0_i21);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(12);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r2 = (MR_Integer) 4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0_i23);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(8);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(12) = MR_r1;
	MR_r4 = MR_sv(7);
	MR_r2 = (MR_Integer) 4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0_i25);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(8);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(12);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r2 = (MR_Integer) 4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0_i27);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module116)
	MR_init_entry1(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0);
	MR_init_label10(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,38,4,8,9,10,7,12,15,16,14)
	MR_init_label2(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,18,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__search_intersects_subtree__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i4);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i2);
	}
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 7);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(3, MR_tempr1, 0);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i8);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i9);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i10);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i38);
	}
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i12);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tfield(0, MR_sv(1), 0);
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(9);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 2);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(2, MR_tempr1, 5);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr1, 1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i15);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i16);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i38);
	}
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 2);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i18);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i38);
	}
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module117)
	MR_init_entry1(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0);
	MR_init_label10(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,38,4,8,9,10,7,12,15,16,14)
	MR_init_label2(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,18,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__search_contains_subtree__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r2;
	MR_r2 = (MR_Integer) 2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i4);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i2);
	}
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 7);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(3, MR_tempr1, 0);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i8);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i9);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i10);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i38);
	}
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i12);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tfield(0, MR_sv(1), 0);
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(9);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 2);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(2, MR_tempr1, 5);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr1, 1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i15);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i16);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i38);
	}
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 2);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,
		f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i18);
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0_i38);
	}
MR_def_label(f_114_116_114_101_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(rtree_module118)
	MR_init_entry1(fn__f_114_116_114_101_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_114_116_114_101_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_114_116_114_101_101_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__rtree_maybe_bunch_0(void)
{
	rtree_module0();
	rtree_module1();
	rtree_module2();
	rtree_module3();
	rtree_module4();
	rtree_module5();
	rtree_module6();
	rtree_module7();
	rtree_module8();
	rtree_module9();
	rtree_module10();
	rtree_module11();
	rtree_module12();
	rtree_module13();
	rtree_module14();
	rtree_module15();
	rtree_module16();
	rtree_module17();
	rtree_module18();
	rtree_module19();
	rtree_module20();
	rtree_module21();
	rtree_module22();
	rtree_module23();
	rtree_module24();
	rtree_module25();
	rtree_module26();
	rtree_module27();
	rtree_module28();
	rtree_module29();
	rtree_module30();
	rtree_module31();
	rtree_module32();
	rtree_module33();
	rtree_module34();
	rtree_module35();
	rtree_module36();
	rtree_module37();
	rtree_module38();
	rtree_module39();
}

static void mercury__rtree_maybe_bunch_1(void)
{
	rtree_module40();
	rtree_module41();
	rtree_module42();
	rtree_module43();
	rtree_module44();
	rtree_module45();
	rtree_module46();
	rtree_module47();
	rtree_module48();
	rtree_module49();
	rtree_module50();
	rtree_module51();
	rtree_module52();
	rtree_module53();
	rtree_module54();
	rtree_module55();
	rtree_module56();
	rtree_module57();
	rtree_module58();
	rtree_module59();
	rtree_module60();
	rtree_module61();
	rtree_module62();
	rtree_module63();
	rtree_module64();
	rtree_module65();
	rtree_module66();
	rtree_module67();
	rtree_module68();
	rtree_module69();
	rtree_module70();
	rtree_module71();
	rtree_module72();
	rtree_module73();
	rtree_module74();
	rtree_module75();
	rtree_module76();
	rtree_module77();
	rtree_module78();
	rtree_module79();
}

static void mercury__rtree_maybe_bunch_2(void)
{
	rtree_module80();
	rtree_module81();
	rtree_module82();
	rtree_module83();
	rtree_module84();
	rtree_module85();
	rtree_module86();
	rtree_module87();
	rtree_module88();
	rtree_module89();
	rtree_module90();
	rtree_module91();
	rtree_module92();
	rtree_module93();
	rtree_module94();
	rtree_module95();
	rtree_module96();
	rtree_module97();
	rtree_module98();
	rtree_module99();
	rtree_module100();
	rtree_module101();
	rtree_module102();
	rtree_module103();
	rtree_module104();
	rtree_module105();
	rtree_module106();
	rtree_module107();
	rtree_module108();
	rtree_module109();
	rtree_module110();
	rtree_module111();
	rtree_module112();
	rtree_module113();
	rtree_module114();
	rtree_module115();
	rtree_module116();
	rtree_module117();
	rtree_module118();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__rtree__init(void);
void mercury__rtree__init_type_tables(void);
void mercury__rtree__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__rtree__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__rtree__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__rtree__init_threadscope_string_table(void);
#endif

void mercury__rtree__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__rtree_maybe_bunch_0();
	mercury__rtree_maybe_bunch_1();
	mercury__rtree_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_rtree__type_ctor_info_box_0,
		rtree__box_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_rtree__type_ctor_info_box3d_0,
		rtree__box3d_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_rtree__type_ctor_info_delete_info_2,
		rtree__delete_info_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_rtree__type_ctor_info_interval_0,
		rtree__interval_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_rtree__type_ctor_info_min_of_four_result_0,
		rtree__min_of_four_result_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_rtree__type_ctor_info_min_of_three_result_0,
		rtree__min_of_three_result_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_rtree__type_ctor_info_min_of_two_result_0,
		rtree__min_of_two_result_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_rtree__type_ctor_info_orphan_2,
		rtree__orphan_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_rtree__type_ctor_info_orphans_2,
		rtree__orphans_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_rtree__type_ctor_info_rtree_2,
		rtree__rtree_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_rtree__type_ctor_info_rtree_2_2,
		rtree__rtree_2_2_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_rtree__region__arity1__rtree__interval__arity0__, 5) =
			MR_ENTRY_AP(rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_rtree__region__arity1__rtree__interval__arity0__, 6) =
			MR_ENTRY_AP(rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_rtree__region__arity1__rtree__interval__arity0__, 7) =
			MR_ENTRY_AP(fn__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_rtree__region__arity1__rtree__interval__arity0__, 8) =
			MR_ENTRY_AP(fn__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_rtree__region__arity1__rtree__interval__arity0__, 9) =
			MR_ENTRY_AP(fn__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_rtree__region__arity1__rtree__box__arity0__, 5) =
			MR_ENTRY_AP(rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_rtree__region__arity1__rtree__box__arity0__, 6) =
			MR_ENTRY_AP(rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_rtree__region__arity1__rtree__box__arity0__, 7) =
			MR_ENTRY_AP(fn__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_rtree__region__arity1__rtree__box__arity0__, 8) =
			MR_ENTRY_AP(fn__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_rtree__region__arity1__rtree__box__arity0__, 9) =
			MR_ENTRY_AP(fn__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_rtree__region__arity1__rtree__box3d__arity0__, 5) =
			MR_ENTRY_AP(rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2_2_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_rtree__region__arity1__rtree__box3d__arity0__, 6) =
			MR_ENTRY_AP(rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_rtree__region__arity1__rtree__box3d__arity0__, 7) =
			MR_ENTRY_AP(fn__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1_1_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_rtree__region__arity1__rtree__box3d__arity0__, 8) =
			MR_ENTRY_AP(fn__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2_2_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_rtree__region__arity1__rtree__box3d__arity0__, 9) =
			MR_ENTRY_AP(fn__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2_2_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__rtree__init_debugger();
}

void mercury__rtree__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_rtree__type_ctor_info_box_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_rtree__type_ctor_info_box3d_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_rtree__type_ctor_info_delete_info_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_rtree__type_ctor_info_interval_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_rtree__type_ctor_info_min_of_four_result_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_rtree__type_ctor_info_min_of_three_result_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_rtree__type_ctor_info_min_of_two_result_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_rtree__type_ctor_info_orphan_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_rtree__type_ctor_info_orphans_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_rtree__type_ctor_info_rtree_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_rtree__type_ctor_info_rtree_2_2);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_rtree__type_class_decl_region_1);
	}
}


void mercury__rtree__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__rtree__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__rtree);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__rtree__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__rtree__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
