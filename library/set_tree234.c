/*
** Automatically generated from `set_tree234.m'
** by the Mercury compiler,
** version rotd-2011-08-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__set_tree234__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "io.int2"
#include "io.mh"

#line 28 "set_tree234.c"
#line 150 "io.int2"
#include "string.mh"

#line 32 "set_tree234.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 36 "set_tree234.c"
#line 30 "time.int2"
#include "time.mh"

#line 40 "set_tree234.c"
#line 33 "array.int2"
#include "array.mh"

#line 44 "set_tree234.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 48 "set_tree234.c"
#line 59 "array.opt"
#include "stm_builtin.mh"

#line 52 "set_tree234.c"
#line 61 "array.opt"
#include "store.mh"

#line 56 "set_tree234.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "set_tree234.c"
#line 156 "io.opt"
#include "dir.mh"

#line 64 "set_tree234.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 68 "set_tree234.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 72 "set_tree234.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "set_tree234.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "set_tree234.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 84 "set_tree234.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 88 "set_tree234.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "set_tree234.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 96 "set_tree234.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 100 "set_tree234.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 104 "set_tree234.c"
#line 4 "int.opt"
#include "int.mh"

#line 108 "set_tree234.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "set_tree234.c"
#line 113 "set_tree234.c"
#include "set_tree234.mh"

#line 116 "set_tree234.c"
#line 117 "set_tree234.c"
#ifndef SET_TREE234_DECL_GUARD
#define SET_TREE234_DECL_GUARD

#line 121 "set_tree234.c"
#line 122 "set_tree234.c"

#endif
#line 125 "set_tree234.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Unsigned f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
	MR_Integer f6;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_set_tree234__type_ctor_info_set_tree234_1;
MR_decl_label1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0, 2)
MR_decl_label10(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0, 4,5,7,9,2,13,14,16,20,24)
MR_decl_label10(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0, 25,26,28,31,30,33,35,23,38,37)
MR_decl_label10(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0, 40,18,42,45,49,50,51,53,56,55)
MR_decl_label7(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0, 58,60,48,63,62,65,67)
MR_decl_label10(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0, 4,5,7,9,12,13,15,17,2,21)
MR_decl_label10(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0, 22,24,28,32,33,34,36,39,38,41)
MR_decl_label10(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0, 43,31,46,45,48,26,51,52,54,58)
MR_decl_label10(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0, 62,63,64,66,69,68,71,73,61,76)
MR_decl_label10(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0, 75,78,56,82,86,87,88,90,93,92)
MR_decl_label7(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0, 95,97,85,100,99,102,104)
MR_decl_label10(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0, 3,6,7,9,14,11,16,19,5,21)
MR_decl_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0, 10,3,4)
MR_decl_label10(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0, 34,3,5,6,7,8,9,10,4,13)
MR_decl_label6(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0, 14,15,16,12,18,19)
MR_decl_label10(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0, 4,5,6,8,11,14,2,19,20,22)
MR_decl_label6(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0, 25,17,30,32,28,1)
MR_decl_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0, 3,7,11)
MR_decl_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0, 3,7,11)
MR_decl_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0, 3,7,11)
MR_decl_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0, 3,7,11)
MR_decl_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0, 3,7,11)
MR_decl_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0, 3,7,11)
MR_decl_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0, 3,7,11)
MR_decl_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0, 3,7,11)
MR_decl_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0, 3,7,11)
MR_decl_label1(set_tree234__contains_2_0, 2)
MR_decl_label10(set_tree234__delete_2_4_0, 389,5,8,11,13,10,19,22,18,16)
MR_decl_label10(set_tree234__delete_2_4_0, 27,29,7,35,38,34,32,43,46,48)
MR_decl_label10(set_tree234__delete_2_4_0, 45,54,57,53,51,62,64,4,68,71)
MR_decl_label10(set_tree234__delete_2_4_0, 73,70,79,82,78,76,87,90,92,89)
MR_decl_label10(set_tree234__delete_2_4_0, 98,101,97,95,106,108,67,111,114,116)
MR_decl_label7(set_tree234__delete_2_4_0, 113,122,125,121,119,129,131)
MR_decl_label3(set_tree234__delete_list_3_0, 10,3,4)
MR_decl_label10(set_tree234__difference_2_3_0, 34,3,5,6,7,8,9,10,4,13)
MR_decl_label6(set_tree234__difference_2_3_0, 14,15,16,12,18,19)
MR_decl_label10(set_tree234__divide_2_6_0, 94,3,5,8,10,6,11,12,13,16)
MR_decl_label10(set_tree234__divide_2_6_0, 18,14,19,20,21,24,26,22,27,4)
MR_decl_label10(set_tree234__divide_2_6_0, 31,34,36,32,37,38,39,42,44,40)
MR_decl_label7(set_tree234__divide_2_6_0, 45,30,48,51,53,49,54)
MR_decl_label2(set_tree234__equal_2_0, 2,3)
MR_decl_label1(set_tree234__filter_map_3_0, 2)
MR_decl_label10(set_tree234__filter_map_func_4_0, 88,3,5,8,6,11,12,15,13,18)
MR_decl_label10(set_tree234__filter_map_func_4_0, 19,22,20,4,28,31,29,34,35,38)
MR_decl_label5(set_tree234__filter_map_func_4_0, 36,27,43,46,44)
MR_decl_label10(set_tree234__filter_map_pred_4_0, 88,3,5,8,6,11,12,15,13,18)
MR_decl_label10(set_tree234__filter_map_pred_4_0, 19,22,20,4,28,31,29,34,35,38)
MR_decl_label5(set_tree234__filter_map_pred_4_0, 36,27,43,46,44)
MR_decl_label10(set_tree234__fold_4_0, 34,3,5,6,7,8,9,10,4,13)
MR_decl_label6(set_tree234__fold_4_0, 14,15,16,12,18,19)
MR_decl_label10(set_tree234__fold_4_3, 100,3,5,7,9,11,13,15,4,20)
MR_decl_label7(set_tree234__fold_4_3, 22,24,26,19,30,32,1)
MR_decl_label10(set_tree234__fold2_6_0, 34,3,5,6,7,8,9,10,4,13)
MR_decl_label6(set_tree234__fold2_6_0, 14,15,16,12,18,19)
MR_decl_label10(set_tree234__fold2_6_3, 100,3,5,7,9,11,13,15,4,20)
MR_decl_label7(set_tree234__fold2_6_3, 22,24,26,19,30,32,1)
MR_decl_label10(set_tree234__fold3_8_0, 34,3,5,6,7,8,9,10,4,13)
MR_decl_label6(set_tree234__fold3_8_0, 14,15,16,12,18,19)
MR_decl_label10(set_tree234__fold3_8_3, 100,3,5,7,9,11,13,15,4,20)
MR_decl_label7(set_tree234__fold3_8_3, 22,24,26,19,30,32,1)
MR_decl_label10(set_tree234__fold4_10_0, 34,3,5,6,7,8,9,10,4,13)
MR_decl_label6(set_tree234__fold4_10_0, 14,15,16,12,18,19)
MR_decl_label10(set_tree234__fold4_10_3, 100,3,5,7,9,11,13,15,4,20)
MR_decl_label7(set_tree234__fold4_10_3, 22,24,26,19,30,32,1)
MR_decl_label10(set_tree234__fold5_12_0, 34,3,5,6,7,8,9,10,4,13)
MR_decl_label6(set_tree234__fold5_12_0, 14,15,16,12,18,19)
MR_decl_label10(set_tree234__fold5_12_3, 100,3,5,7,9,11,13,15,4,20)
MR_decl_label7(set_tree234__fold5_12_3, 22,24,26,19,30,32,1)
MR_decl_label10(set_tree234__fold6_14_0, 34,3,5,6,7,8,9,10,4,13)
MR_decl_label6(set_tree234__fold6_14_0, 14,15,16,12,18,19)
MR_decl_label10(set_tree234__fold6_14_3, 100,3,5,7,9,11,13,15,4,20)
MR_decl_label7(set_tree234__fold6_14_3, 22,24,26,19,30,32,1)
MR_decl_label8(set_tree234__insert_3_0, 3,6,11,8,13,16,5,61)
MR_decl_label10(set_tree234__insert2_3_0, 4,6,8,2,10,14,20,23,22,25)
MR_decl_label10(set_tree234__insert2_3_0, 27,17,29,32,12,34,37,43,46,45)
MR_decl_label6(set_tree234__insert2_3_0, 48,50,40,53,52,55)
MR_decl_label10(set_tree234__insert3_3_0, 4,6,8,9,11,13,2,15,19,23)
MR_decl_label10(set_tree234__insert3_3_0, 24,27,26,29,31,22,34,33,36,17)
MR_decl_label10(set_tree234__insert3_3_0, 38,39,43,47,48,51,50,53,55,46)
MR_decl_label10(set_tree234__insert3_3_0, 58,57,60,41,62,64,68,69,72,71)
MR_decl_label6(set_tree234__insert3_3_0, 74,76,67,79,78,81)
MR_decl_label3(set_tree234__insert_list_3_0, 10,3,4)
MR_decl_label10(set_tree234__intersect_2_4_0, 76,3,5,7,8,6,9,10,12,13)
MR_decl_label10(set_tree234__intersect_2_4_0, 11,14,15,17,18,16,4,22,24,25)
MR_decl_label10(set_tree234__intersect_2_4_0, 23,26,27,29,30,28,21,33,35,36)
MR_decl_label1(set_tree234__intersect_2_4_0, 34)
MR_decl_label10(set_tree234__is_member_3_0, 115,3,5,8,10,12,7,14,15,17)
MR_decl_label10(set_tree234__is_member_3_0, 4,22,24,26,27,29,21,33,35,37)
MR_decl_label3(set_tree234__list_to_set_2_3_0, 10,3,4)
MR_decl_label1(set_tree234__map_3_0, 2)
MR_decl_label10(set_tree234__map_func_4_0, 40,3,5,6,8,9,11,12,4,16)
MR_decl_label6(set_tree234__map_func_4_0, 17,19,20,15,23,24)
MR_decl_label10(set_tree234__map_pred_4_0, 40,3,5,6,8,9,11,12,4,16)
MR_decl_label6(set_tree234__map_pred_4_0, 17,19,20,15,23,24)
MR_decl_label1(set_tree234__member_2_0, 2)
MR_decl_label1(set_tree234__non_empty_1_0, 2)
MR_decl_label10(set_tree234__power_union_2_3_0, 34,3,5,6,7,8,9,10,4,13)
MR_decl_label6(set_tree234__power_union_2_3_0, 14,15,16,12,18,19)
MR_decl_label10(set_tree234__remove_2_4_0, 4,7,10,13,9,19,22,18,16,27)
MR_decl_label10(set_tree234__remove_2_4_0, 30,6,36,39,35,33,44,47,50,46)
MR_decl_label10(set_tree234__remove_2_4_0, 56,59,55,53,64,67,3,71,74,77)
MR_decl_label10(set_tree234__remove_2_4_0, 73,83,86,82,80,91,94,97,93,103)
MR_decl_label10(set_tree234__remove_2_4_0, 106,102,100,111,114,70,118,121,124,120)
MR_decl_label8(set_tree234__remove_2_4_0, 130,133,129,127,137,140,142,1)
MR_decl_label10(set_tree234__remove_least_2_4_0, 4,7,10,13,17,21,3,27,30,33)
MR_decl_label10(set_tree234__remove_least_2_4_0, 35,26,150,40,43,46,50,54,2,149)
MR_decl_label1(set_tree234__remove_least_2_4_0, 1)
MR_decl_label4(set_tree234__remove_list_3_0, 18,3,4,1)
MR_decl_label1(set_tree234__singleton_set_2_1, 1)
MR_decl_label10(set_tree234__subset_2_0, 93,5,7,8,10,11,13,4,17,19)
MR_decl_label7(set_tree234__subset_2_0, 20,22,44,16,25,27,1)
MR_decl_label10(set_tree234__to_sorted_list_2_3_0, 34,3,5,7,9,4,13,15,12,18)
MR_decl_label10(set_tree234__union_3_0, 34,3,5,6,7,8,9,10,4,13)
MR_decl_label6(set_tree234__union_3_0, 14,15,16,12,18,19)
MR_decl_label2(set_tree234__union_list_2_0, 16,4)
MR_decl_label10(fn__set_tree234__count_1_0, 30,5,6,7,8,4,10,11,12,9)
MR_decl_label2(fn__set_tree234__count_1_0, 13,14)
MR_decl_label1(fn__set_tree234__filter_map_2_0, 2)
MR_decl_label10(fn__set_tree234__fold_3_0, 34,3,5,6,7,8,9,10,4,13)
MR_decl_label6(fn__set_tree234__fold_3_0, 14,15,16,12,18,19)
MR_decl_label1(fn__set_tree234__intersect_list_1_0, 3)
MR_decl_label4(fn__set_tree234__intersect_list_2_2_0, 22,3,4,6)
MR_decl_label1(fn__set_tree234__map_2_0, 2)
MR_decl_label2(fn__set_tree234__power_intersect_1_0, 3,5)
MR_decl_label10(__Unify___set_tree234__set_tree234_1_0, 122,5,8,10,12,14,16,18,6,24)
MR_decl_label8(__Unify___set_tree234__set_tree234_1_0, 26,28,30,60,22,35,37,1)
MR_decl_label10(__Compare___set_tree234__set_tree234_1_0, 218,118,7,8,5,12,15,19,23,27)
MR_decl_label10(__Compare___set_tree234__set_tree234_1_0, 31,35,13,10,48,49,52,56,60,64)
MR_decl_label9(__Compare___set_tree234__set_tree234_1_0, 46,111,73,74,113,75,77,81,232)
MR_def_extern_entry(fn__set_tree234__init_0_0)
MR_def_extern_entry(set_tree234__singleton_set_2_0)
MR_def_extern_entry(set_tree234__singleton_set_2_1)
MR_def_extern_entry(fn__set_tree234__make_singleton_set_1_0)
MR_def_extern_entry(set_tree234__empty_1_0)
MR_def_extern_entry(set_tree234__is_empty_1_0)
MR_def_extern_entry(set_tree234__non_empty_1_0)
MR_def_extern_entry(set_tree234__is_member_3_0)
MR_def_extern_entry(fn__set_tree234__is_member_2_0)
MR_def_extern_entry(set_tree234__member_2_0)
MR_def_extern_entry(set_tree234__member_2_1)
MR_def_extern_entry(set_tree234__contains_2_0)
MR_decl_static(set_tree234__insert2_3_0)
MR_decl_static(set_tree234__insert3_3_0)
MR_def_extern_entry(set_tree234__insert_3_0)
MR_def_extern_entry(set_tree234__list_to_set_2_3_0)
MR_def_extern_entry(fn__set_tree234__list_to_set_1_0)
MR_def_extern_entry(fn__set_tree234__from_list_1_0)
MR_def_extern_entry(fn__set_tree234__sorted_list_to_set_1_0)
MR_def_extern_entry(set_tree234__to_sorted_list_2_3_0)
MR_def_extern_entry(fn__set_tree234__to_sorted_list_1_0)
MR_def_extern_entry(set_tree234__equal_2_0)
MR_def_extern_entry(set_tree234__subset_2_0)
MR_def_extern_entry(set_tree234__superset_2_0)
MR_def_extern_entry(fn__set_tree234__insert_2_0)
MR_def_extern_entry(set_tree234__insert_list_3_0)
MR_def_extern_entry(fn__set_tree234__insert_list_2_0)
MR_def_extern_entry(set_tree234__remove_least_2_4_0)
MR_def_extern_entry(set_tree234__delete_2_4_0)
MR_def_extern_entry(set_tree234__delete_3_0)
MR_def_extern_entry(fn__set_tree234__delete_2_0)
MR_def_extern_entry(set_tree234__delete_list_3_0)
MR_def_extern_entry(fn__set_tree234__delete_list_2_0)
MR_def_extern_entry(set_tree234__remove_2_4_0)
MR_def_extern_entry(set_tree234__remove_3_0)
MR_def_extern_entry(set_tree234__remove_list_3_0)
MR_def_extern_entry(set_tree234__remove_least_3_0)
MR_def_extern_entry(set_tree234__union_3_0)
MR_def_extern_entry(fn__set_tree234__union_2_0)
MR_def_extern_entry(set_tree234__union_list_2_0)
MR_def_extern_entry(fn__set_tree234__union_list_1_0)
MR_def_extern_entry(set_tree234__power_union_2_3_0)
MR_def_extern_entry(set_tree234__power_union_2_0)
MR_def_extern_entry(fn__set_tree234__power_union_1_0)
MR_def_extern_entry(set_tree234__intersect_2_4_0)
MR_def_extern_entry(set_tree234__intersect_3_0)
MR_def_extern_entry(fn__set_tree234__intersect_2_0)
MR_def_extern_entry(fn__set_tree234__intersect_list_2_2_0)
MR_def_extern_entry(fn__set_tree234__intersect_list_1_0)
MR_def_extern_entry(fn__set_tree234__power_intersect_1_0)
MR_def_extern_entry(set_tree234__difference_2_3_0)
MR_def_extern_entry(set_tree234__difference_3_0)
MR_def_extern_entry(fn__set_tree234__difference_2_0)
MR_def_extern_entry(fn__set_tree234__count_1_0)
MR_def_extern_entry(set_tree234__map_func_4_0)
MR_def_extern_entry(fn__set_tree234__map_2_0)
MR_def_extern_entry(set_tree234__map_pred_4_0)
MR_def_extern_entry(set_tree234__map_3_0)
MR_def_extern_entry(set_tree234__filter_map_pred_4_0)
MR_def_extern_entry(set_tree234__filter_map_3_0)
MR_def_extern_entry(set_tree234__filter_map_func_4_0)
MR_def_extern_entry(fn__set_tree234__filter_map_2_0)
MR_def_extern_entry(fn__set_tree234__fold_3_0)
MR_def_extern_entry(set_tree234__fold_4_0)
MR_def_extern_entry(set_tree234__fold_4_1)
MR_def_extern_entry(set_tree234__fold_4_2)
MR_def_extern_entry(set_tree234__fold_4_3)
MR_def_extern_entry(set_tree234__fold_4_4)
MR_def_extern_entry(set_tree234__fold_4_5)
MR_def_extern_entry(set_tree234__fold2_6_0)
MR_def_extern_entry(set_tree234__fold2_6_1)
MR_def_extern_entry(set_tree234__fold2_6_2)
MR_def_extern_entry(set_tree234__fold2_6_3)
MR_def_extern_entry(set_tree234__fold2_6_4)
MR_def_extern_entry(set_tree234__fold2_6_5)
MR_def_extern_entry(set_tree234__fold3_8_0)
MR_def_extern_entry(set_tree234__fold3_8_1)
MR_def_extern_entry(set_tree234__fold3_8_2)
MR_def_extern_entry(set_tree234__fold3_8_3)
MR_def_extern_entry(set_tree234__fold3_8_4)
MR_def_extern_entry(set_tree234__fold3_8_5)
MR_def_extern_entry(set_tree234__fold4_10_0)
MR_def_extern_entry(set_tree234__fold4_10_1)
MR_def_extern_entry(set_tree234__fold4_10_2)
MR_def_extern_entry(set_tree234__fold4_10_3)
MR_def_extern_entry(set_tree234__fold4_10_4)
MR_def_extern_entry(set_tree234__fold4_10_5)
MR_def_extern_entry(set_tree234__fold5_12_0)
MR_def_extern_entry(set_tree234__fold5_12_1)
MR_def_extern_entry(set_tree234__fold5_12_2)
MR_def_extern_entry(set_tree234__fold5_12_3)
MR_def_extern_entry(set_tree234__fold5_12_4)
MR_def_extern_entry(set_tree234__fold5_12_5)
MR_def_extern_entry(set_tree234__fold6_14_0)
MR_def_extern_entry(set_tree234__fold6_14_1)
MR_def_extern_entry(set_tree234__fold6_14_2)
MR_def_extern_entry(set_tree234__fold6_14_3)
MR_def_extern_entry(set_tree234__fold6_14_4)
MR_def_extern_entry(set_tree234__fold6_14_5)
MR_def_extern_entry(set_tree234__divide_2_6_0)
MR_def_extern_entry(set_tree234__divide_4_0)
MR_def_extern_entry(set_tree234__filter_3_0)
MR_def_extern_entry(set_tree234__filter_4_0)
MR_def_extern_entry(set_tree234__divide_by_set_4_0)
MR_def_extern_entry(__Unify___set_tree234__set_tree234_1_0)
MR_def_extern_entry(__Compare___set_tree234__set_tree234_1_0)
MR_def_extern_entry(f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0)
MR_def_extern_entry(fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0)
MR_def_extern_entry(f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0)
MR_def_extern_entry(fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0)
MR_def_extern_entry(f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0)
MR_def_extern_entry(fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0)
MR_def_extern_entry(f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0)
MR_def_extern_entry(f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0)
MR_def_extern_entry(f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0)
MR_def_extern_entry(fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0)
MR_decl_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0)
MR_decl_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_102_111_117_114_95_95_91_49_93_95_48_4_0)
MR_decl_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0)
MR_decl_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0)
MR_decl_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0)
MR_decl_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0)
MR_decl_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0)
MR_decl_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0)
MR_decl_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0)
MR_decl_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0)
MR_decl_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0)
MR_decl_static(fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0)
MR_decl_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0)
MR_def_extern_entry(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0)
MR_def_extern_entry(fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0)
MR_def_extern_entry(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0)
MR_def_extern_entry(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_CTOR1_ADDR(set_tree234, set_tree234),
1
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
1,
17
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__set_tree234__divide_by_set_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__set_tree234__divide_by_set_4_0_1,
MR_COMMON(1,0),
3,
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(0,0),
1
},
};

static const MR_DuFunctorDesc mercury_data_set_tree234__du_functor_desc_set_tree234_1_0 = {
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

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_set_tree234__pti_set_tree234_1__pseudo_1 = {
	&mercury_data_set_tree234__type_ctor_info_set_tree234_1,
{	(MR_PseudoTypeInfo) 1
}};

const MR_PseudoTypeInfo mercury_data_set_tree234__field_types_set_tree234_1_1[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_set_tree234__pti_set_tree234_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_set_tree234__pti_set_tree234_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_set_tree234__du_functor_desc_set_tree234_1_1 = {
	"two",
	3,
	7,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_set_tree234__field_types_set_tree234_1_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_set_tree234__field_types_set_tree234_1_2[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_set_tree234__pti_set_tree234_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_set_tree234__pti_set_tree234_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_set_tree234__pti_set_tree234_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_set_tree234__du_functor_desc_set_tree234_1_2 = {
	"three",
	5,
	31,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_set_tree234__field_types_set_tree234_1_2,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_set_tree234__field_types_set_tree234_1_3[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_set_tree234__pti_set_tree234_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_set_tree234__pti_set_tree234_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_set_tree234__pti_set_tree234_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_set_tree234__pti_set_tree234_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_set_tree234__du_functor_desc_set_tree234_1_3 = {
	"four",
	7,
	127,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_set_tree234__field_types_set_tree234_1_3,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_set_tree234__du_stag_ordered_set_tree234_1_0[] = {
	&mercury_data_set_tree234__du_functor_desc_set_tree234_1_0

};

const MR_DuFunctorDescPtr mercury_data_set_tree234__du_stag_ordered_set_tree234_1_1[] = {
	&mercury_data_set_tree234__du_functor_desc_set_tree234_1_1

};

const MR_DuFunctorDescPtr mercury_data_set_tree234__du_stag_ordered_set_tree234_1_2[] = {
	&mercury_data_set_tree234__du_functor_desc_set_tree234_1_2

};

const MR_DuFunctorDescPtr mercury_data_set_tree234__du_stag_ordered_set_tree234_1_3[] = {
	&mercury_data_set_tree234__du_functor_desc_set_tree234_1_3

};

const MR_DuPtagLayout mercury_data_set_tree234__du_ptag_ordered_set_tree234_1[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_set_tree234__du_stag_ordered_set_tree234_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_set_tree234__du_stag_ordered_set_tree234_1_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_set_tree234__du_stag_ordered_set_tree234_1_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_set_tree234__du_stag_ordered_set_tree234_1_3 }

};

const MR_DuFunctorDescPtr mercury_data_set_tree234__du_name_ordered_set_tree234_1[] = {
	&mercury_data_set_tree234__du_functor_desc_set_tree234_1_0,
	&mercury_data_set_tree234__du_functor_desc_set_tree234_1_3,
	&mercury_data_set_tree234__du_functor_desc_set_tree234_1_2,
	&mercury_data_set_tree234__du_functor_desc_set_tree234_1_1
};

const MR_Integer mercury_data_set_tree234__functor_number_map_set_tree234_1[] = {
	0,
	3,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_set_tree234__type_ctor_info_set_tree234_1 = {
	1,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___set_tree234__set_tree234_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___set_tree234__set_tree234_1_0)),
	"set_tree234",
	"set_tree234",
	{ (void *)mercury_data_set_tree234__du_name_ordered_set_tree234_1 },
	{ (void *)mercury_data_set_tree234__du_ptag_ordered_set_tree234_1 },
	4,
	4,
	mercury_data_set_tree234__functor_number_map_set_tree234_1
};


static const MR_UserClosureId
mercury_data__closure_layout__set_tree234__divide_by_set_4_0_1 = {
{
MR_PREDICATE,
"set_tree234",
"set_tree234",
"contains",
2,
0
},
"set_tree234",
"set_tree234.m",
2412,
"6"
};



MR_BEGIN_MODULE(set_tree234_module0)
	MR_init_entry1(fn__set_tree234__init_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_tree234__init_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module1)
	MR_init_entry1(set_tree234__singleton_set_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__singleton_set_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'singleton_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__singleton_set_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module2)
	MR_init_entry1(set_tree234__singleton_set_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__singleton_set_2_1);
	MR_init_label1(set_tree234__singleton_set_2_1,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'singleton_set'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__singleton_set_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(set_tree234__singleton_set_2_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(set_tree234__singleton_set_2_1_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(set_tree234__singleton_set_2_1_i1);
	}
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_tree234__singleton_set_2_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module3)
	MR_init_entry1(fn__set_tree234__make_singleton_set_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_tree234__make_singleton_set_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_singleton_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__make_singleton_set_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module4)
	MR_init_entry1(set_tree234__empty_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__empty_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__empty_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module5)
	MR_init_entry1(set_tree234__is_empty_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__is_empty_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__is_empty_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module6)
	MR_init_entry1(set_tree234__non_empty_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__non_empty_1_0);
	MR_init_label1(set_tree234__non_empty_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'non_empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__non_empty_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,3)) {
		MR_GOTO_LAB(set_tree234__non_empty_1_0_i2);
	}
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(set_tree234__non_empty_1_0_i2);
	}
	MR_r1 = (MR_tag(MR_r2) == MR_mktag((MR_Integer) 1));
	MR_proceed();
MR_def_label(set_tree234__non_empty_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(set_tree234_module7)
	MR_init_entry1(set_tree234__is_member_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__is_member_3_0);
	MR_init_label10(set_tree234__is_member_3_0,115,3,5,8,10,12,7,14,15,17)
	MR_init_label10(set_tree234__is_member_3_0,4,22,24,26,27,29,21,33,35,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_member'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__is_member_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(set_tree234__is_member_3_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(9);
MR_def_label(set_tree234__is_member_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_sv(3) = MR_tfield(3, MR_r2, 6);
	MR_sv(4) = MR_tfield(3, MR_r2, 0);
	MR_sv(5) = MR_tfield(3, MR_r2, 3);
	MR_sv(6) = MR_tfield(3, MR_r2, 4);
	MR_sv(7) = MR_tfield(3, MR_r2, 5);
	MR_sv(8) = MR_r1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__is_member_3_0_i5);
MR_def_label(set_tree234__is_member_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i7);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__is_member_3_0_i8);
MR_def_label(set_tree234__is_member_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i10);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(set_tree234__is_member_3_0_i115);
MR_def_label(set_tree234__is_member_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(set_tree234__is_member_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(set_tree234__is_member_3_0_i115);
MR_def_label(set_tree234__is_member_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(set_tree234__is_member_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__is_member_3_0_i15);
MR_def_label(set_tree234__is_member_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i17);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(set_tree234__is_member_3_0_i115);
MR_def_label(set_tree234__is_member_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i37);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(set_tree234__is_member_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tfield(2, MR_r2, 1);
	MR_sv(3) = MR_tfield(2, MR_r2, 4);
	MR_sv(4) = MR_tfield(2, MR_r2, 2);
	MR_sv(5) = MR_tfield(2, MR_r2, 3);
	MR_sv(8) = MR_r1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__is_member_3_0_i22);
MR_def_label(set_tree234__is_member_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i24);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(set_tree234__is_member_3_0_i115);
MR_def_label(set_tree234__is_member_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i26);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(set_tree234__is_member_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__is_member_3_0_i27);
MR_def_label(set_tree234__is_member_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i29);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(set_tree234__is_member_3_0_i115);
MR_def_label(set_tree234__is_member_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i37);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(set_tree234__is_member_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_tfield(1, MR_r2, 2);
	MR_sv(8) = MR_r1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__is_member_3_0_i33);
MR_def_label(set_tree234__is_member_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i35);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(set_tree234__is_member_3_0_i115);
MR_def_label(set_tree234__is_member_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i37);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(set_tree234__is_member_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(set_tree234__is_member_3_0_i115);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module8)
	MR_init_entry1(fn__set_tree234__is_member_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_tree234__is_member_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_member'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__is_member_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__is_member_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module9)
	MR_init_entry1(set_tree234__member_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__member_2_0);
	MR_init_label1(set_tree234__member_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'member'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__member_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__member_2_0_i2);
MR_def_label(set_tree234__member_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module10)
	MR_init_entry1(set_tree234__member_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__member_2_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'member'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__member_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module11)
	MR_init_entry1(set_tree234__contains_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__contains_2_0);
	MR_init_label1(set_tree234__contains_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'contains'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__contains_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__contains_2_0_i2);
MR_def_label(set_tree234__contains_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) MR_r1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module12)
	MR_init_entry1(set_tree234__insert2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__insert2_3_0);
	MR_init_label10(set_tree234__insert2_3_0,4,6,8,2,10,14,20,23,22,25)
	MR_init_label10(set_tree234__insert2_3_0,27,17,29,32,12,34,37,43,46,45)
	MR_init_label6(set_tree234__insert2_3_0,48,50,40,53,52,55)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(set_tree234__insert2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert2_3_0_i4);
MR_def_label(set_tree234__insert2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(1);
	MR_tfield(2, MR_r1, 1) = MR_sv(2);
	MR_tfield(2, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(set_tree234__insert2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i8);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(8);
MR_def_label(set_tree234__insert2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(2);
	MR_tfield(2, MR_r1, 1) = MR_sv(1);
	MR_tfield(2, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(set_tree234__insert2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(7) = MR_r1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert2_3_0_i10);
MR_def_label(set_tree234__insert2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i12);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i14);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_tfield(1, MR_r1, 2) = MR_sv(4);
	MR_decr_sp_and_return(8);
MR_def_label(set_tree234__insert2_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),3)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tempr3 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(3, MR_tempr3, 3);
	MR_tfield(1, MR_tempr1, 2) = MR_tfield(3, MR_tempr3, 4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_sv(6) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(3, MR_tempr3, 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(3, MR_tempr3, 5);
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(3, MR_tempr3, 6);
	MR_sv(3) = MR_tfield(3, MR_sv(3), 1);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert2_3_0_i20);
MR_def_label(set_tree234__insert2_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i22);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_localcall_lab(set_tree234__insert2_3_0,
		set_tree234__insert2_3_0_i23);
MR_def_label(set_tree234__insert2_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r2, 0) = MR_sv(3);
	MR_tfield(2, MR_r2, 1) = MR_sv(2);
	MR_tfield(2, MR_r2, 2) = MR_r1;
	MR_tfield(2, MR_r2, 3) = MR_sv(6);
	MR_tfield(2, MR_r2, 4) = MR_sv(4);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(set_tree234__insert2_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i25);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(3);
	MR_tfield(2, MR_r1, 1) = MR_sv(2);
	MR_tfield(2, MR_r1, 2) = MR_sv(5);
	MR_tfield(2, MR_r1, 3) = MR_sv(6);
	MR_tfield(2, MR_r1, 4) = MR_sv(4);
	MR_decr_sp_and_return(8);
MR_def_label(set_tree234__insert2_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_localcall_lab(set_tree234__insert2_3_0,
		set_tree234__insert2_3_0_i27);
MR_def_label(set_tree234__insert2_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_r1;
	MR_tfield(2, MR_tempr1, 4) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(set_tree234__insert2_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i29);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set_tree234__insert3_3_0,
		set_tree234__insert2_3_0_i32);
MR_def_label(set_tree234__insert2_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(set_tree234__insert2_3_0,
		set_tree234__insert2_3_0_i32);
MR_def_label(set_tree234__insert2_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(set_tree234__insert2_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i34);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_tfield(1, MR_r1, 2) = MR_sv(4);
	MR_decr_sp_and_return(8);
MR_def_label(set_tree234__insert2_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i37);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_tfield(1, MR_r1, 2) = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(set_tree234__insert2_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),3)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i40);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tempr3 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(3, MR_tempr3, 3);
	MR_tfield(1, MR_tempr1, 2) = MR_tfield(3, MR_tempr3, 4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_sv(6) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(3, MR_tempr3, 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(3, MR_tempr3, 5);
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(3, MR_tempr3, 6);
	MR_sv(4) = MR_tfield(3, MR_sv(4), 1);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert2_3_0_i43);
MR_def_label(set_tree234__insert2_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i45);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_localcall_lab(set_tree234__insert2_3_0,
		set_tree234__insert2_3_0_i46);
MR_def_label(set_tree234__insert2_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r2, 0) = MR_sv(2);
	MR_tfield(2, MR_r2, 1) = MR_sv(4);
	MR_tfield(2, MR_r2, 2) = MR_sv(3);
	MR_tfield(2, MR_r2, 3) = MR_r1;
	MR_tfield(2, MR_r2, 4) = MR_sv(6);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(set_tree234__insert2_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i48);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(2);
	MR_tfield(2, MR_r1, 1) = MR_sv(4);
	MR_tfield(2, MR_r1, 2) = MR_sv(3);
	MR_tfield(2, MR_r1, 3) = MR_sv(5);
	MR_tfield(2, MR_r1, 4) = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(set_tree234__insert2_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_localcall_lab(set_tree234__insert2_3_0,
		set_tree234__insert2_3_0_i50);
MR_def_label(set_tree234__insert2_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(set_tree234__insert2_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),2)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i52);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set_tree234__insert3_3_0,
		set_tree234__insert2_3_0_i53);
MR_def_label(set_tree234__insert2_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(set_tree234__insert2_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(set_tree234__insert2_3_0,
		set_tree234__insert2_3_0_i55);
MR_def_label(set_tree234__insert2_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module13)
	MR_init_entry1(set_tree234__insert3_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__insert3_3_0);
	MR_init_label10(set_tree234__insert3_3_0,4,6,8,9,11,13,2,15,19,23)
	MR_init_label10(set_tree234__insert3_3_0,24,27,26,29,31,22,34,33,36,17)
	MR_init_label10(set_tree234__insert3_3_0,38,39,43,47,48,51,50,53,55,46)
	MR_init_label10(set_tree234__insert3_3_0,58,57,60,41,62,64,68,69,72,71)
	MR_init_label6(set_tree234__insert3_3_0,74,76,67,79,78,81)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert3'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(set_tree234__insert3_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_tfield(2, MR_tempr2, 4);
	MR_sv(7) = MR_tfield(2, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(3) = MR_tfield(2, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(2, MR_tempr2, 0);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_sv(9) = MR_r1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert3_3_0_i4);
MR_def_label(set_tree234__insert3_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(1);
	MR_tfield(3, MR_r1, 1) = MR_sv(2);
	MR_tfield(3, MR_r1, 2) = MR_sv(3);
	MR_tfield(3, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i8);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert3_3_0_i9);
MR_def_label(set_tree234__insert3_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i11);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(2);
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_tfield(3, MR_r1, 2) = MR_sv(3);
	MR_tfield(3, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i13);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(2);
	MR_tfield(3, MR_r1, 1) = MR_sv(3);
	MR_tfield(3, MR_r1, 2) = MR_sv(1);
	MR_tfield(3, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(9) = MR_r1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert3_3_0_i15);
MR_def_label(set_tree234__insert3_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i17);
	}
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i19);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(2);
	MR_tfield(2, MR_r1, 1) = MR_sv(3);
	MR_tfield(2, MR_r1, 2) = MR_r2;
	MR_tfield(2, MR_r1, 3) = MR_sv(7);
	MR_tfield(2, MR_r1, 4) = MR_sv(4);
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),3)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i22);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_102_111_117_114_95_95_91_49_93_95_48_4_0,
		set_tree234__insert3_3_0_i23);
MR_def_label(set_tree234__insert3_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert3_3_0_i24);
MR_def_label(set_tree234__insert3_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i26);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(set_tree234__insert2_3_0,
		set_tree234__insert3_3_0_i27);
MR_def_label(set_tree234__insert3_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r2, 0) = MR_sv(6);
	MR_tfield(3, MR_r2, 1) = MR_sv(2);
	MR_tfield(3, MR_r2, 2) = MR_sv(3);
	MR_tfield(3, MR_r2, 3) = MR_r1;
	MR_tfield(3, MR_r2, 4) = MR_sv(8);
	MR_tfield(3, MR_r2, 5) = MR_sv(7);
	MR_tfield(3, MR_r2, 6) = MR_sv(4);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i29);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(6);
	MR_tfield(3, MR_r1, 1) = MR_sv(2);
	MR_tfield(3, MR_r1, 2) = MR_sv(3);
	MR_tfield(3, MR_r1, 3) = MR_sv(5);
	MR_tfield(3, MR_r1, 4) = MR_sv(8);
	MR_tfield(3, MR_r1, 5) = MR_sv(7);
	MR_tfield(3, MR_r1, 6) = MR_sv(4);
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(set_tree234__insert2_3_0,
		set_tree234__insert3_3_0_i31);
MR_def_label(set_tree234__insert3_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tfield(3, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__insert3_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),2)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i33);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_localcall_lab(set_tree234__insert3_3_0,
		set_tree234__insert3_3_0_i34);
MR_def_label(set_tree234__insert3_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r2, 0) = MR_sv(2);
	MR_tfield(2, MR_r2, 1) = MR_sv(3);
	MR_tfield(2, MR_r2, 2) = MR_r1;
	MR_tfield(2, MR_r2, 3) = MR_sv(7);
	MR_tfield(2, MR_r2, 4) = MR_sv(4);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(set_tree234__insert2_3_0,
		set_tree234__insert3_3_0_i36);
MR_def_label(set_tree234__insert3_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__insert3_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i38);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert3_3_0_i39);
MR_def_label(set_tree234__insert3_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i41);
	}
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i43);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(2);
	MR_tfield(2, MR_r1, 1) = MR_sv(3);
	MR_tfield(2, MR_r1, 2) = MR_sv(5);
	MR_tfield(2, MR_r1, 3) = MR_r2;
	MR_tfield(2, MR_r1, 4) = MR_sv(4);
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),3)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i46);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_102_111_117_114_95_95_91_49_93_95_48_4_0,
		set_tree234__insert3_3_0_i47);
MR_def_label(set_tree234__insert3_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert3_3_0_i48);
MR_def_label(set_tree234__insert3_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i50);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(set_tree234__insert2_3_0,
		set_tree234__insert3_3_0_i51);
MR_def_label(set_tree234__insert3_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r2, 0) = MR_sv(2);
	MR_tfield(3, MR_r2, 1) = MR_sv(6);
	MR_tfield(3, MR_r2, 2) = MR_sv(3);
	MR_tfield(3, MR_r2, 3) = MR_sv(5);
	MR_tfield(3, MR_r2, 4) = MR_r1;
	MR_tfield(3, MR_r2, 5) = MR_sv(8);
	MR_tfield(3, MR_r2, 6) = MR_sv(4);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i53);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(2);
	MR_tfield(3, MR_r1, 1) = MR_sv(6);
	MR_tfield(3, MR_r1, 2) = MR_sv(3);
	MR_tfield(3, MR_r1, 3) = MR_sv(5);
	MR_tfield(3, MR_r1, 4) = MR_sv(7);
	MR_tfield(3, MR_r1, 5) = MR_sv(8);
	MR_tfield(3, MR_r1, 6) = MR_sv(4);
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(set_tree234__insert2_3_0,
		set_tree234__insert3_3_0_i55);
MR_def_label(set_tree234__insert3_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_tfield(3, MR_tempr1, 6) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__insert3_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),2)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i57);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_localcall_lab(set_tree234__insert3_3_0,
		set_tree234__insert3_3_0_i58);
MR_def_label(set_tree234__insert3_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r2, 0) = MR_sv(2);
	MR_tfield(2, MR_r2, 1) = MR_sv(3);
	MR_tfield(2, MR_r2, 2) = MR_sv(5);
	MR_tfield(2, MR_r2, 3) = MR_r1;
	MR_tfield(2, MR_r2, 4) = MR_sv(4);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(set_tree234__insert2_3_0,
		set_tree234__insert3_3_0_i60);
MR_def_label(set_tree234__insert3_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_r1;
	MR_tfield(2, MR_tempr1, 4) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__insert3_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i62);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i64);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(2);
	MR_tfield(2, MR_r1, 1) = MR_sv(3);
	MR_tfield(2, MR_r1, 2) = MR_sv(5);
	MR_tfield(2, MR_r1, 3) = MR_sv(7);
	MR_tfield(2, MR_r1, 4) = MR_r2;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),3)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i67);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_102_111_117_114_95_95_91_49_93_95_48_4_0,
		set_tree234__insert3_3_0_i68);
MR_def_label(set_tree234__insert3_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert3_3_0_i69);
MR_def_label(set_tree234__insert3_3_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i71);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set_tree234__insert2_3_0,
		set_tree234__insert3_3_0_i72);
MR_def_label(set_tree234__insert3_3_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r2, 0) = MR_sv(2);
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_tfield(3, MR_r2, 2) = MR_sv(6);
	MR_tfield(3, MR_r2, 3) = MR_sv(5);
	MR_tfield(3, MR_r2, 4) = MR_sv(7);
	MR_tfield(3, MR_r2, 5) = MR_r1;
	MR_tfield(3, MR_r2, 6) = MR_sv(8);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i74);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(2);
	MR_tfield(3, MR_r1, 1) = MR_sv(3);
	MR_tfield(3, MR_r1, 2) = MR_sv(6);
	MR_tfield(3, MR_r1, 3) = MR_sv(5);
	MR_tfield(3, MR_r1, 4) = MR_sv(7);
	MR_tfield(3, MR_r1, 5) = MR_sv(4);
	MR_tfield(3, MR_r1, 6) = MR_sv(8);
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(set_tree234__insert2_3_0,
		set_tree234__insert3_3_0_i76);
MR_def_label(set_tree234__insert3_3_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__insert3_3_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),2)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i78);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(set_tree234__insert3_3_0,
		set_tree234__insert3_3_0_i79);
MR_def_label(set_tree234__insert3_3_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r2, 0) = MR_sv(2);
	MR_tfield(2, MR_r2, 1) = MR_sv(3);
	MR_tfield(2, MR_r2, 2) = MR_sv(5);
	MR_tfield(2, MR_r2, 3) = MR_sv(7);
	MR_tfield(2, MR_r2, 4) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set_tree234__insert2_3_0,
		set_tree234__insert3_3_0_i81);
MR_def_label(set_tree234__insert3_3_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module14)
	MR_init_entry1(set_tree234__insert_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__insert_3_0);
	MR_init_label8(set_tree234__insert_3_0,3,6,11,8,13,16,5,61)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__insert_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(set_tree234__insert_3_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(set_tree234__insert_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(set_tree234__insert_3_0_i5);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(10) = MR_r1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert_3_0_i6);
MR_def_label(set_tree234__insert_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert_3_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 2) = MR_sv(8);
	MR_tempr3 = MR_sv(9);
	MR_sv(9) = MR_tempr2;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(set_tree234__insert2_3_0,
		set_tree234__insert_3_0_i11);
MR_def_label(set_tree234__insert_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tfield(1, MR_r2, 2) = MR_sv(9);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(11);
MR_def_label(set_tree234__insert_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert_3_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(11);
MR_def_label(set_tree234__insert_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 2) = MR_sv(8);
	MR_tempr3 = MR_sv(9);
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(set_tree234__insert2_3_0,
		set_tree234__insert_3_0_i16);
MR_def_label(set_tree234__insert_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(set_tree234__insert_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(set_tree234__insert_3_0_i61);
	}
	MR_np_tailcall_ent(set_tree234__insert3_3_0);
MR_def_label(set_tree234__insert_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__insert2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module15)
	MR_init_entry1(set_tree234__list_to_set_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__list_to_set_2_3_0);
	MR_init_label3(set_tree234__list_to_set_2_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_to_set_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__list_to_set_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(set_tree234__list_to_set_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_tree234__list_to_set_2_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(set_tree234__list_to_set_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__list_to_set_2_3_0_i4);
MR_def_label(set_tree234__list_to_set_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(set_tree234__list_to_set_2_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module16)
	MR_init_entry1(fn__set_tree234__list_to_set_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_tree234__list_to_set_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_to_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__list_to_set_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(set_tree234__list_to_set_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module17)
	MR_init_entry1(fn__set_tree234__from_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_tree234__from_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__from_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(set_tree234__list_to_set_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module18)
	MR_init_entry1(fn__set_tree234__sorted_list_to_set_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_tree234__sorted_list_to_set_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sorted_list_to_set'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__sorted_list_to_set_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(set_tree234__list_to_set_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module19)
	MR_init_entry1(set_tree234__to_sorted_list_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__to_sorted_list_2_3_0);
	MR_init_label10(set_tree234__to_sorted_list_2_3_0,34,3,5,7,9,4,13,15,12,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_sorted_list_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__to_sorted_list_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(set_tree234__to_sorted_list_2_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_tree234__to_sorted_list_2_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(8);
MR_def_label(set_tree234__to_sorted_list_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(set_tree234__to_sorted_list_2_3_0_i4);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 0);
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_sv(4) = MR_tfield(3, MR_r2, 3);
	MR_sv(5) = MR_tfield(3, MR_r2, 4);
	MR_sv(6) = MR_tfield(3, MR_r2, 5);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tfield(3, MR_r2, 6);
	MR_np_localcall_lab(set_tree234__to_sorted_list_2_3_0,
		set_tree234__to_sorted_list_2_3_0_i5);
MR_def_label(set_tree234__to_sorted_list_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	}
	MR_np_localcall_lab(set_tree234__to_sorted_list_2_3_0,
		set_tree234__to_sorted_list_2_3_0_i7);
MR_def_label(set_tree234__to_sorted_list_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	}
	MR_np_localcall_lab(set_tree234__to_sorted_list_2_3_0,
		set_tree234__to_sorted_list_2_3_0_i9);
MR_def_label(set_tree234__to_sorted_list_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(set_tree234__to_sorted_list_2_3_0_i34);
	}
MR_def_label(set_tree234__to_sorted_list_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(set_tree234__to_sorted_list_2_3_0_i12);
	}
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_sv(2) = MR_tfield(2, MR_r2, 1);
	MR_sv(3) = MR_tfield(2, MR_r2, 2);
	MR_sv(4) = MR_tfield(2, MR_r2, 3);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tfield(2, MR_r2, 4);
	MR_np_localcall_lab(set_tree234__to_sorted_list_2_3_0,
		set_tree234__to_sorted_list_2_3_0_i13);
MR_def_label(set_tree234__to_sorted_list_2_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	}
	MR_np_localcall_lab(set_tree234__to_sorted_list_2_3_0,
		set_tree234__to_sorted_list_2_3_0_i15);
MR_def_label(set_tree234__to_sorted_list_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(set_tree234__to_sorted_list_2_3_0_i34);
	}
MR_def_label(set_tree234__to_sorted_list_2_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 2);
	MR_np_localcall_lab(set_tree234__to_sorted_list_2_3_0,
		set_tree234__to_sorted_list_2_3_0_i18);
MR_def_label(set_tree234__to_sorted_list_2_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(set_tree234__to_sorted_list_2_3_0_i34);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module20)
	MR_init_entry1(fn__set_tree234__to_sorted_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_tree234__to_sorted_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_sorted_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__to_sorted_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(set_tree234__to_sorted_list_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(set_tree234_module21)
	MR_init_entry1(set_tree234__equal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__equal_2_0);
	MR_init_label2(set_tree234__equal_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'equal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__equal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_tree234__to_sorted_list_2_3_0,
		set_tree234__equal_2_0_i2);
MR_def_label(set_tree234__equal_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(set_tree234__to_sorted_list_2_3_0,
		set_tree234__equal_2_0_i3);
MR_def_label(set_tree234__equal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module22)
	MR_init_entry1(set_tree234__subset_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__subset_2_0);
	MR_init_label10(set_tree234__subset_2_0,93,5,7,8,10,11,13,4,17,19)
	MR_init_label7(set_tree234__subset_2_0,20,22,44,16,25,27,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'subset'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__subset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(set_tree234__subset_2_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i44);
	}
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i4);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 0);
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
	MR_sv(4) = MR_tfield(3, MR_r2, 2);
	MR_sv(5) = MR_tfield(3, MR_r2, 4);
	MR_sv(6) = MR_tfield(3, MR_r2, 5);
	MR_sv(7) = MR_tfield(3, MR_r2, 6);
	MR_sv(8) = MR_r1;
	MR_r2 = MR_tfield(3, MR_r2, 3);
	MR_np_localcall_lab(set_tree234__subset_2_0,
		set_tree234__subset_2_0_i5);
MR_def_label(set_tree234__subset_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__subset_2_0_i7);
MR_def_label(set_tree234__subset_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_localcall_lab(set_tree234__subset_2_0,
		set_tree234__subset_2_0_i8);
MR_def_label(set_tree234__subset_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__subset_2_0_i10);
MR_def_label(set_tree234__subset_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_localcall_lab(set_tree234__subset_2_0,
		set_tree234__subset_2_0_i11);
MR_def_label(set_tree234__subset_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__subset_2_0_i13);
MR_def_label(set_tree234__subset_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(set_tree234__subset_2_0_i93);
MR_def_label(set_tree234__subset_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i16);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_r2, 0);
	MR_sv(3) = MR_tfield(2, MR_r2, 1);
	MR_sv(4) = MR_tfield(2, MR_r2, 3);
	MR_sv(5) = MR_tfield(2, MR_r2, 4);
	MR_sv(8) = MR_r1;
	MR_r2 = MR_tfield(2, MR_r2, 2);
	MR_np_localcall_lab(set_tree234__subset_2_0,
		set_tree234__subset_2_0_i17);
MR_def_label(set_tree234__subset_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__subset_2_0_i19);
MR_def_label(set_tree234__subset_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_localcall_lab(set_tree234__subset_2_0,
		set_tree234__subset_2_0_i20);
MR_def_label(set_tree234__subset_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__subset_2_0_i22);
MR_def_label(set_tree234__subset_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(set_tree234__subset_2_0_i93);
MR_def_label(set_tree234__subset_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(set_tree234__subset_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 2);
	MR_sv(8) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(set_tree234__subset_2_0,
		set_tree234__subset_2_0_i25);
MR_def_label(set_tree234__subset_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__subset_2_0_i27);
MR_def_label(set_tree234__subset_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(set_tree234__subset_2_0_i93);
MR_def_label(set_tree234__subset_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module23)
	MR_init_entry1(set_tree234__superset_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__superset_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'superset'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__superset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(set_tree234__subset_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module24)
	MR_init_entry1(fn__set_tree234__insert_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_tree234__insert_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__insert_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__insert_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module25)
	MR_init_entry1(set_tree234__insert_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__insert_list_3_0);
	MR_init_label3(set_tree234__insert_list_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__insert_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(set_tree234__insert_list_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_tree234__insert_list_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(set_tree234__insert_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__insert_list_3_0_i4);
MR_def_label(set_tree234__insert_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(set_tree234__insert_list_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module26)
	MR_init_entry1(fn__set_tree234__insert_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_tree234__insert_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__insert_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__insert_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(set_tree234_module27)
	MR_init_entry1(set_tree234__remove_least_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__remove_least_2_4_0);
	MR_init_label10(set_tree234__remove_least_2_4_0,4,7,10,13,17,21,3,27,30,33)
	MR_init_label10(set_tree234__remove_least_2_4_0,35,26,150,40,43,46,50,54,2,149)
	MR_init_label1(set_tree234__remove_least_2_4_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_least_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__remove_least_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_tfield(3, MR_r2, 5);
	MR_sv(5) = MR_tfield(3, MR_r2, 1);
	MR_sv(4) = MR_tfield(3, MR_r2, 4);
	MR_r5 = MR_tfield(3, MR_r2, 3);
	MR_r6 = MR_tfield(3, MR_r2, 0);
	MR_sv(2) = MR_tfield(3, MR_r2, 6);
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(2);
	MR_r2 = MR_r6;
	MR_r4 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_decr_sp(7);
	MR_proceed();
	}
MR_def_label(set_tree234__remove_least_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r6;
	MR_r2 = MR_r5;
	MR_np_localcall_lab(set_tree234__remove_least_2_4_0,
		set_tree234__remove_least_2_4_0_i7);
MR_def_label(set_tree234__remove_least_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i1);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r3;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(set_tree234__remove_least_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),3)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_sv(4);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(3, MR_tempr4, 1);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(3, MR_tempr4, 2);
	MR_tfield(2, MR_tempr1, 2) = MR_tfield(3, MR_tempr4, 4);
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(3, MR_tempr4, 5);
	MR_tfield(2, MR_tempr1, 4) = MR_tfield(3, MR_tempr4, 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(3, MR_tempr4, 3);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 7);
	MR_r3 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = MR_tfield(3, MR_tempr4, 0);
	MR_tfield(3, MR_tempr3, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr3, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 4) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 5) = MR_sv(6);
	MR_tfield(3, MR_tempr3, 6) = MR_sv(2);
	MR_r4 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(set_tree234__remove_least_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),2)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(2, MR_tempr4, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(2, MR_tempr4, 3);
	MR_tfield(1, MR_tempr1, 2) = MR_tfield(2, MR_tempr4, 4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(2, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 7);
	MR_r3 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = MR_tfield(2, MR_tempr4, 0);
	MR_tfield(3, MR_tempr3, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr3, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 4) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 5) = MR_sv(6);
	MR_tfield(3, MR_tempr3, 6) = MR_sv(2);
	MR_r4 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(set_tree234__remove_least_2_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),1)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(2, MR_tempr1, 2) = MR_r3;
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(1, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 4) = MR_tfield(1, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 5);
	MR_r3 = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(2, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr2, 4) = MR_sv(2);
	MR_r4 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(set_tree234__remove_least_2_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unbalanced 234 tree", 19);
	MR_np_call_localret_ent(require__error_1_0,
		set_tree234__remove_least_2_4_0_i2);
MR_def_label(set_tree234__remove_least_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i26);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_tfield(2, MR_r2, 3);
	MR_r5 = MR_tfield(2, MR_r2, 2);
	MR_r6 = MR_tfield(2, MR_r2, 0);
	MR_sv(2) = MR_tfield(2, MR_r2, 4);
	MR_sv(1) = MR_tfield(2, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_r2 = MR_r6;
	MR_r4 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_decr_sp(7);
	MR_proceed();
	}
MR_def_label(set_tree234__remove_least_2_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r6;
	MR_r2 = MR_r5;
	MR_np_localcall_lab(set_tree234__remove_least_2_4_0,
		set_tree234__remove_least_2_4_0_i30);
MR_def_label(set_tree234__remove_least_2_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i1);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i33);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 2) = MR_r3;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(set_tree234__remove_least_2_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0,
		set_tree234__remove_least_2_4_0_i35);
MR_def_label(set_tree234__remove_least_2_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r4 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(set_tree234__remove_least_2_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i149);
	}
	MR_r3 = MR_tfield(1, MR_r2, 2);
	MR_r5 = MR_tfield(1, MR_r2, 1);
	MR_r6 = MR_tfield(1, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i150);
	}
	MR_r2 = MR_r6;
	MR_r4 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(set_tree234__remove_least_2_4_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r3;
	MR_r2 = MR_r5;
	MR_np_localcall_lab(set_tree234__remove_least_2_4_0,
		set_tree234__remove_least_2_4_0_i40);
MR_def_label(set_tree234__remove_least_2_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i1);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i43);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(set_tree234__remove_least_2_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i46);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_sv(2);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(3, MR_tempr4, 1);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(3, MR_tempr4, 2);
	MR_tfield(2, MR_tempr1, 2) = MR_tfield(3, MR_tempr4, 4);
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(3, MR_tempr4, 5);
	MR_tfield(2, MR_tempr1, 4) = MR_tfield(3, MR_tempr4, 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(3, MR_tempr4, 3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tfield(3, MR_tempr4, 0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(set_tree234__remove_least_2_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i50);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(2, MR_tempr4, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(2, MR_tempr4, 3);
	MR_tfield(1, MR_tempr1, 2) = MR_tfield(2, MR_tempr4, 4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(2, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tfield(2, MR_tempr4, 0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(set_tree234__remove_least_2_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i54);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(2, MR_tempr1, 2) = MR_r3;
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(1, MR_tempr2, 1);
	MR_tfield(2, MR_tempr1, 4) = MR_tfield(1, MR_tempr2, 2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(set_tree234__remove_least_2_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unbalanced 234 tree", 19);
	MR_np_call_localret_ent(require__error_1_0,
		set_tree234__remove_least_2_4_0_i2);
MR_def_label(set_tree234__remove_least_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(set_tree234__remove_least_2_4_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(set_tree234__remove_least_2_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module28)
	MR_init_entry1(set_tree234__delete_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__delete_2_4_0);
	MR_init_label10(set_tree234__delete_2_4_0,389,5,8,11,13,10,19,22,18,16)
	MR_init_label10(set_tree234__delete_2_4_0,27,29,7,35,38,34,32,43,46,48)
	MR_init_label10(set_tree234__delete_2_4_0,45,54,57,53,51,62,64,4,68,71)
	MR_init_label10(set_tree234__delete_2_4_0,73,70,79,82,78,76,87,90,92,89)
	MR_init_label10(set_tree234__delete_2_4_0,98,101,97,95,106,108,67,111,114,116)
	MR_init_label7(set_tree234__delete_2_4_0,113,122,125,121,119,129,131)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__delete_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i389);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(set_tree234__delete_2_4_0,389)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i4);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(9) = MR_r1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__delete_2_4_0_i5);
MR_def_label(set_tree234__delete_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i7);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__delete_2_4_0_i8);
MR_def_label(set_tree234__delete_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i10);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_localcall_lab(set_tree234__delete_2_4_0,
		set_tree234__delete_2_4_0_i11);
MR_def_label(set_tree234__delete_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__delete_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0);
	}
MR_def_label(set_tree234__delete_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i16);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__delete_2_4_0_i19);
MR_def_label(set_tree234__delete_2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i18);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i22);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_r2;
	MR_tfield(3, MR_r1, 1) = MR_sv(7);
	MR_tfield(3, MR_r1, 2) = MR_sv(2);
	MR_tfield(3, MR_r1, 3) = MR_sv(5);
	MR_tfield(3, MR_r1, 4) = MR_r3;
	MR_tfield(3, MR_r1, 5) = MR_sv(8);
	MR_tfield(3, MR_r1, 6) = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__delete_2_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0);
	}
MR_def_label(set_tree234__delete_2_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(7);
	MR_tfield(2, MR_r1, 1) = MR_sv(2);
	MR_tfield(2, MR_r1, 2) = MR_sv(5);
	MR_tfield(2, MR_r1, 3) = MR_sv(8);
	MR_tfield(2, MR_r1, 4) = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__delete_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_localcall_lab(set_tree234__delete_2_4_0,
		set_tree234__delete_2_4_0_i27);
MR_def_label(set_tree234__delete_2_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tfield(3, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__delete_2_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0);
	}
MR_def_label(set_tree234__delete_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i32);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__delete_2_4_0_i35);
MR_def_label(set_tree234__delete_2_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i34);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i38);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(4);
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_tfield(3, MR_r1, 2) = MR_sv(2);
	MR_tfield(3, MR_r1, 3) = MR_sv(5);
	MR_tfield(3, MR_r1, 4) = MR_sv(6);
	MR_tfield(3, MR_r1, 5) = MR_r3;
	MR_tfield(3, MR_r1, 6) = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__delete_2_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0);
	}
MR_def_label(set_tree234__delete_2_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(4);
	MR_tfield(2, MR_r1, 1) = MR_sv(2);
	MR_tfield(2, MR_r1, 2) = MR_sv(5);
	MR_tfield(2, MR_r1, 3) = MR_sv(6);
	MR_tfield(2, MR_r1, 4) = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__delete_2_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__delete_2_4_0_i43);
MR_def_label(set_tree234__delete_2_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i45);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_localcall_lab(set_tree234__delete_2_4_0,
		set_tree234__delete_2_4_0_i46);
MR_def_label(set_tree234__delete_2_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i48);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_tfield(3, MR_tempr1, 6) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__delete_2_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0);
	}
MR_def_label(set_tree234__delete_2_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i51);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__delete_2_4_0_i54);
MR_def_label(set_tree234__delete_2_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i53);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i57);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(4);
	MR_tfield(3, MR_r1, 1) = MR_sv(7);
	MR_tfield(3, MR_r1, 2) = MR_r2;
	MR_tfield(3, MR_r1, 3) = MR_sv(5);
	MR_tfield(3, MR_r1, 4) = MR_sv(6);
	MR_tfield(3, MR_r1, 5) = MR_sv(8);
	MR_tfield(3, MR_r1, 6) = MR_r3;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__delete_2_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0);
	}
MR_def_label(set_tree234__delete_2_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(4);
	MR_tfield(2, MR_r1, 1) = MR_sv(7);
	MR_tfield(2, MR_r1, 2) = MR_sv(5);
	MR_tfield(2, MR_r1, 3) = MR_sv(6);
	MR_tfield(2, MR_r1, 4) = MR_sv(8);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__delete_2_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(set_tree234__delete_2_4_0,
		set_tree234__delete_2_4_0_i62);
MR_def_label(set_tree234__delete_2_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i64);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__delete_2_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0);
	}
MR_def_label(set_tree234__delete_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i67);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(9) = MR_r1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__delete_2_4_0_i68);
MR_def_label(set_tree234__delete_2_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i70);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_localcall_lab(set_tree234__delete_2_4_0,
		set_tree234__delete_2_4_0_i71);
MR_def_label(set_tree234__delete_2_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i73);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__delete_2_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0);
	}
MR_def_label(set_tree234__delete_2_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i76);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__delete_2_4_0_i79);
MR_def_label(set_tree234__delete_2_4_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i78);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i82);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_tfield(2, MR_r1, 1) = MR_sv(2);
	MR_tfield(2, MR_r1, 2) = MR_sv(5);
	MR_tfield(2, MR_r1, 3) = MR_r3;
	MR_tfield(2, MR_r1, 4) = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__delete_2_4_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0);
	}
MR_def_label(set_tree234__delete_2_4_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(5);
	MR_tfield(1, MR_r1, 2) = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__delete_2_4_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__delete_2_4_0_i87);
MR_def_label(set_tree234__delete_2_4_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i89);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_localcall_lab(set_tree234__delete_2_4_0,
		set_tree234__delete_2_4_0_i90);
MR_def_label(set_tree234__delete_2_4_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i92);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_r1;
	MR_tfield(2, MR_tempr1, 4) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__delete_2_4_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0);
	}
MR_def_label(set_tree234__delete_2_4_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i95);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__delete_2_4_0_i98);
MR_def_label(set_tree234__delete_2_4_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i97);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i101);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(4);
	MR_tfield(2, MR_r1, 1) = MR_r2;
	MR_tfield(2, MR_r1, 2) = MR_sv(5);
	MR_tfield(2, MR_r1, 3) = MR_sv(6);
	MR_tfield(2, MR_r1, 4) = MR_r3;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__delete_2_4_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0);
	}
MR_def_label(set_tree234__delete_2_4_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = MR_sv(5);
	MR_tfield(1, MR_r1, 2) = MR_sv(6);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__delete_2_4_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(set_tree234__delete_2_4_0,
		set_tree234__delete_2_4_0_i106);
MR_def_label(set_tree234__delete_2_4_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i108);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__delete_2_4_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0);
	}
MR_def_label(set_tree234__delete_2_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(9) = MR_r1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__delete_2_4_0_i111);
MR_def_label(set_tree234__delete_2_4_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i113);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(set_tree234__delete_2_4_0,
		set_tree234__delete_2_4_0_i114);
MR_def_label(set_tree234__delete_2_4_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i116);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__delete_2_4_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0);
	}
MR_def_label(set_tree234__delete_2_4_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i119);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__delete_2_4_0_i122);
MR_def_label(set_tree234__delete_2_4_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i121);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i125);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_tfield(1, MR_r1, 2) = MR_r3;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__delete_2_4_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0);
MR_def_label(set_tree234__delete_2_4_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__delete_2_4_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(set_tree234__delete_2_4_0,
		set_tree234__delete_2_4_0_i129);
MR_def_label(set_tree234__delete_2_4_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i131);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__delete_2_4_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module29)
	MR_init_entry1(set_tree234__delete_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__delete_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__delete_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__delete_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module30)
	MR_init_entry1(fn__set_tree234__delete_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_tree234__delete_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__delete_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__delete_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module31)
	MR_init_entry1(set_tree234__delete_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__delete_list_3_0);
	MR_init_label3(set_tree234__delete_list_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__delete_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(set_tree234__delete_list_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_tree234__delete_list_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(set_tree234__delete_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(set_tree234__delete_2_4_0,
		set_tree234__delete_list_3_0_i4);
MR_def_label(set_tree234__delete_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(set_tree234__delete_list_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module32)
	MR_init_entry1(fn__set_tree234__delete_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_tree234__delete_list_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__delete_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__delete_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module33)
	MR_init_entry1(set_tree234__remove_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__remove_2_4_0);
	MR_init_label10(set_tree234__remove_2_4_0,4,7,10,13,9,19,22,18,16,27)
	MR_init_label10(set_tree234__remove_2_4_0,30,6,36,39,35,33,44,47,50,46)
	MR_init_label10(set_tree234__remove_2_4_0,56,59,55,53,64,67,3,71,74,77)
	MR_init_label10(set_tree234__remove_2_4_0,73,83,86,82,80,91,94,97,93,103)
	MR_init_label10(set_tree234__remove_2_4_0,106,102,100,111,114,70,118,121,124,120)
	MR_init_label8(set_tree234__remove_2_4_0,130,133,129,127,137,140,142,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__remove_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(9) = MR_r1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__remove_2_4_0_i4);
MR_def_label(set_tree234__remove_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i6);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__remove_2_4_0_i7);
MR_def_label(set_tree234__remove_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i9);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_localcall_lab(set_tree234__remove_2_4_0,
		set_tree234__remove_2_4_0_i10);
MR_def_label(set_tree234__remove_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i1);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_tree234__remove_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0,
		set_tree234__remove_2_4_0_i142);
MR_def_label(set_tree234__remove_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i16);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__remove_2_4_0_i19);
MR_def_label(set_tree234__remove_2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i18);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_r2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_r3;
	MR_tfield(3, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_tree234__remove_2_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0,
		set_tree234__remove_2_4_0_i142);
MR_def_label(set_tree234__remove_2_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r2, 0) = MR_sv(7);
	MR_tfield(2, MR_r2, 1) = MR_sv(2);
	MR_tfield(2, MR_r2, 2) = MR_sv(5);
	MR_tfield(2, MR_r2, 3) = MR_sv(8);
	MR_tfield(2, MR_r2, 4) = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(set_tree234__remove_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_localcall_lab(set_tree234__remove_2_4_0,
		set_tree234__remove_2_4_0_i27);
MR_def_label(set_tree234__remove_2_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i1);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_r2;
	MR_tfield(3, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_tree234__remove_2_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0,
		set_tree234__remove_2_4_0_i142);
MR_def_label(set_tree234__remove_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i33);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__remove_2_4_0_i36);
MR_def_label(set_tree234__remove_2_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i35);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i39);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 5) = MR_r3;
	MR_tfield(3, MR_tempr1, 6) = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_tree234__remove_2_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0,
		set_tree234__remove_2_4_0_i142);
MR_def_label(set_tree234__remove_2_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r2, 0) = MR_sv(4);
	MR_tfield(2, MR_r2, 1) = MR_sv(2);
	MR_tfield(2, MR_r2, 2) = MR_sv(5);
	MR_tfield(2, MR_r2, 3) = MR_sv(6);
	MR_tfield(2, MR_r2, 4) = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(set_tree234__remove_2_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__remove_2_4_0_i44);
MR_def_label(set_tree234__remove_2_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i46);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_localcall_lab(set_tree234__remove_2_4_0,
		set_tree234__remove_2_4_0_i47);
MR_def_label(set_tree234__remove_2_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i1);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i50);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 5) = MR_r2;
	MR_tfield(3, MR_tempr1, 6) = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_tree234__remove_2_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0,
		set_tree234__remove_2_4_0_i142);
MR_def_label(set_tree234__remove_2_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i53);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__remove_2_4_0_i56);
MR_def_label(set_tree234__remove_2_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i55);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i59);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 6) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_tree234__remove_2_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0,
		set_tree234__remove_2_4_0_i142);
MR_def_label(set_tree234__remove_2_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r2, 0) = MR_sv(4);
	MR_tfield(2, MR_r2, 1) = MR_sv(7);
	MR_tfield(2, MR_r2, 2) = MR_sv(5);
	MR_tfield(2, MR_r2, 3) = MR_sv(6);
	MR_tfield(2, MR_r2, 4) = MR_sv(8);
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(set_tree234__remove_2_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(set_tree234__remove_2_4_0,
		set_tree234__remove_2_4_0_i64);
MR_def_label(set_tree234__remove_2_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i1);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i67);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 6) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_tree234__remove_2_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0,
		set_tree234__remove_2_4_0_i142);
MR_def_label(set_tree234__remove_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i70);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(9) = MR_r1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__remove_2_4_0_i71);
MR_def_label(set_tree234__remove_2_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i73);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_localcall_lab(set_tree234__remove_2_4_0,
		set_tree234__remove_2_4_0_i74);
MR_def_label(set_tree234__remove_2_4_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i1);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i77);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_r2;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_tree234__remove_2_4_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0,
		set_tree234__remove_2_4_0_i142);
MR_def_label(set_tree234__remove_2_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i80);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__remove_2_4_0_i83);
MR_def_label(set_tree234__remove_2_4_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i82);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i86);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_r3;
	MR_tfield(2, MR_tempr1, 4) = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_tree234__remove_2_4_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0,
		set_tree234__remove_2_4_0_i142);
MR_def_label(set_tree234__remove_2_4_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_sv(5);
	MR_tfield(1, MR_r2, 2) = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(set_tree234__remove_2_4_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__remove_2_4_0_i91);
MR_def_label(set_tree234__remove_2_4_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i93);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_localcall_lab(set_tree234__remove_2_4_0,
		set_tree234__remove_2_4_0_i94);
MR_def_label(set_tree234__remove_2_4_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i1);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i97);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_r2;
	MR_tfield(2, MR_tempr1, 4) = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_tree234__remove_2_4_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0,
		set_tree234__remove_2_4_0_i142);
MR_def_label(set_tree234__remove_2_4_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i100);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__remove_2_4_0_i103);
MR_def_label(set_tree234__remove_2_4_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i102);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i106);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 4) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_tree234__remove_2_4_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0,
		set_tree234__remove_2_4_0_i142);
MR_def_label(set_tree234__remove_2_4_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_sv(5);
	MR_tfield(1, MR_r2, 2) = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(set_tree234__remove_2_4_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(set_tree234__remove_2_4_0,
		set_tree234__remove_2_4_0_i111);
MR_def_label(set_tree234__remove_2_4_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i1);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i114);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 4) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_tree234__remove_2_4_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0,
		set_tree234__remove_2_4_0_i142);
MR_def_label(set_tree234__remove_2_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i1);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(9) = MR_r1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__remove_2_4_0_i118);
MR_def_label(set_tree234__remove_2_4_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i120);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(set_tree234__remove_2_4_0,
		set_tree234__remove_2_4_0_i121);
MR_def_label(set_tree234__remove_2_4_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i1);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i124);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_tree234__remove_2_4_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0,
		set_tree234__remove_2_4_0_i142);
MR_def_label(set_tree234__remove_2_4_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i127);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__remove_2_4_0_i130);
MR_def_label(set_tree234__remove_2_4_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i129);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i133);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_tree234__remove_2_4_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0,
		set_tree234__remove_2_4_0_i142);
MR_def_label(set_tree234__remove_2_4_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(set_tree234__remove_2_4_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(set_tree234__remove_2_4_0,
		set_tree234__remove_2_4_0_i137);
MR_def_label(set_tree234__remove_2_4_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i1);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i140);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_tree234__remove_2_4_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0,
		set_tree234__remove_2_4_0_i142);
MR_def_label(set_tree234__remove_2_4_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_tree234__remove_2_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module34)
	MR_init_entry1(set_tree234__remove_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__remove_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__remove_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__remove_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module35)
	MR_init_entry1(set_tree234__remove_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__remove_list_3_0);
	MR_init_label4(set_tree234__remove_list_3_0,18,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__remove_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(set_tree234__remove_list_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_tree234__remove_list_3_0_i3);
	}
	MR_r2 = MR_r3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(set_tree234__remove_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(set_tree234__remove_2_4_0,
		set_tree234__remove_list_3_0_i4);
MR_def_label(set_tree234__remove_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_list_3_0_i1);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(set_tree234__remove_list_3_0_i18);
	}
MR_def_label(set_tree234__remove_list_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module36)
	MR_init_entry1(set_tree234__remove_least_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__remove_least_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_least'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__remove_least_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__remove_least_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module37)
	MR_init_entry1(set_tree234__union_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__union_3_0);
	MR_init_label10(set_tree234__union_3_0,34,3,5,6,7,8,9,10,4,13)
	MR_init_label6(set_tree234__union_3_0,14,15,16,12,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'union'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__union_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(set_tree234__union_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_tree234__union_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(8);
MR_def_label(set_tree234__union_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(set_tree234__union_3_0_i4);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 0);
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_sv(4) = MR_tfield(3, MR_r2, 4);
	MR_sv(5) = MR_tfield(3, MR_r2, 5);
	MR_sv(6) = MR_tfield(3, MR_r2, 6);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tfield(3, MR_r2, 3);
	MR_np_localcall_lab(set_tree234__union_3_0,
		set_tree234__union_3_0_i5);
MR_def_label(set_tree234__union_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__union_3_0_i6);
MR_def_label(set_tree234__union_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(set_tree234__union_3_0,
		set_tree234__union_3_0_i7);
MR_def_label(set_tree234__union_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__union_3_0_i8);
MR_def_label(set_tree234__union_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(set_tree234__union_3_0,
		set_tree234__union_3_0_i9);
MR_def_label(set_tree234__union_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__union_3_0_i10);
MR_def_label(set_tree234__union_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(set_tree234__union_3_0_i34);
	}
MR_def_label(set_tree234__union_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(set_tree234__union_3_0_i12);
	}
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_sv(2) = MR_tfield(2, MR_r2, 1);
	MR_sv(3) = MR_tfield(2, MR_r2, 3);
	MR_sv(4) = MR_tfield(2, MR_r2, 4);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tfield(2, MR_r2, 2);
	MR_np_localcall_lab(set_tree234__union_3_0,
		set_tree234__union_3_0_i13);
MR_def_label(set_tree234__union_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__union_3_0_i14);
MR_def_label(set_tree234__union_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(set_tree234__union_3_0,
		set_tree234__union_3_0_i15);
MR_def_label(set_tree234__union_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__union_3_0_i16);
MR_def_label(set_tree234__union_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(set_tree234__union_3_0_i34);
	}
MR_def_label(set_tree234__union_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 2);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(set_tree234__union_3_0,
		set_tree234__union_3_0_i18);
MR_def_label(set_tree234__union_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__union_3_0_i19);
MR_def_label(set_tree234__union_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(set_tree234__union_3_0_i34);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module38)
	MR_init_entry1(fn__set_tree234__union_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_tree234__union_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'union'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__union_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__union_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module39)
	MR_init_entry1(set_tree234__union_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__union_list_2_0);
	MR_init_label2(set_tree234__union_list_2_0,16,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'union_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__union_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_tree234__union_list_2_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(set_tree234__union_list_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(set_tree234__union_list_2_0,
		set_tree234__union_list_2_0_i4);
MR_def_label(set_tree234__union_list_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(set_tree234__union_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module40)
	MR_init_entry1(fn__set_tree234__union_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_tree234__union_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'union_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__union_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__union_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module41)
	MR_init_entry1(set_tree234__power_union_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__power_union_2_3_0);
	MR_init_label10(set_tree234__power_union_2_3_0,34,3,5,6,7,8,9,10,4,13)
	MR_init_label6(set_tree234__power_union_2_3_0,14,15,16,12,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'power_union_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__power_union_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(set_tree234__power_union_2_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_tree234__power_union_2_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(8);
MR_def_label(set_tree234__power_union_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(set_tree234__power_union_2_3_0_i4);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 0);
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_sv(4) = MR_tfield(3, MR_r2, 4);
	MR_sv(5) = MR_tfield(3, MR_r2, 5);
	MR_sv(6) = MR_tfield(3, MR_r2, 6);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tfield(3, MR_r2, 3);
	MR_np_localcall_lab(set_tree234__power_union_2_3_0,
		set_tree234__power_union_2_3_0_i5);
MR_def_label(set_tree234__power_union_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__union_3_0,
		set_tree234__power_union_2_3_0_i6);
MR_def_label(set_tree234__power_union_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(set_tree234__power_union_2_3_0,
		set_tree234__power_union_2_3_0_i7);
MR_def_label(set_tree234__power_union_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__union_3_0,
		set_tree234__power_union_2_3_0_i8);
MR_def_label(set_tree234__power_union_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(set_tree234__power_union_2_3_0,
		set_tree234__power_union_2_3_0_i9);
MR_def_label(set_tree234__power_union_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__union_3_0,
		set_tree234__power_union_2_3_0_i10);
MR_def_label(set_tree234__power_union_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(set_tree234__power_union_2_3_0_i34);
	}
MR_def_label(set_tree234__power_union_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(set_tree234__power_union_2_3_0_i12);
	}
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_sv(2) = MR_tfield(2, MR_r2, 1);
	MR_sv(3) = MR_tfield(2, MR_r2, 3);
	MR_sv(4) = MR_tfield(2, MR_r2, 4);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tfield(2, MR_r2, 2);
	MR_np_localcall_lab(set_tree234__power_union_2_3_0,
		set_tree234__power_union_2_3_0_i13);
MR_def_label(set_tree234__power_union_2_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__union_3_0,
		set_tree234__power_union_2_3_0_i14);
MR_def_label(set_tree234__power_union_2_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(set_tree234__power_union_2_3_0,
		set_tree234__power_union_2_3_0_i15);
MR_def_label(set_tree234__power_union_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__union_3_0,
		set_tree234__power_union_2_3_0_i16);
MR_def_label(set_tree234__power_union_2_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(set_tree234__power_union_2_3_0_i34);
	}
MR_def_label(set_tree234__power_union_2_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 2);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(set_tree234__power_union_2_3_0,
		set_tree234__power_union_2_3_0_i18);
MR_def_label(set_tree234__power_union_2_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__union_3_0,
		set_tree234__power_union_2_3_0_i19);
MR_def_label(set_tree234__power_union_2_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(set_tree234__power_union_2_3_0_i34);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module42)
	MR_init_entry1(set_tree234__power_union_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__power_union_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'power_union'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__power_union_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(set_tree234__power_union_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module43)
	MR_init_entry1(fn__set_tree234__power_union_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_tree234__power_union_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'power_union'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__power_union_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(set_tree234__power_union_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module44)
	MR_init_entry1(set_tree234__intersect_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__intersect_2_4_0);
	MR_init_label10(set_tree234__intersect_2_4_0,76,3,5,7,8,6,9,10,12,13)
	MR_init_label10(set_tree234__intersect_2_4_0,11,14,15,17,18,16,4,22,24,25)
	MR_init_label10(set_tree234__intersect_2_4_0,23,26,27,29,30,28,21,33,35,36)
	MR_init_label1(set_tree234__intersect_2_4_0,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'intersect_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__intersect_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(set_tree234__intersect_2_4_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_tree234__intersect_2_4_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__intersect_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(set_tree234__intersect_2_4_0_i4);
	}
	MR_sv(1) = MR_r3;
	MR_sv(8) = MR_tfield(3, MR_r2, 0);
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_sv(4) = MR_tfield(3, MR_r2, 4);
	MR_sv(5) = MR_tfield(3, MR_r2, 5);
	MR_sv(6) = MR_tfield(3, MR_r2, 6);
	MR_sv(9) = MR_r1;
	MR_r2 = MR_tfield(3, MR_r2, 3);
	MR_np_localcall_lab(set_tree234__intersect_2_4_0,
		set_tree234__intersect_2_4_0_i5);
MR_def_label(set_tree234__intersect_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__intersect_2_4_0_i7);
MR_def_label(set_tree234__intersect_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__intersect_2_4_0_i6);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__intersect_2_4_0_i8);
MR_def_label(set_tree234__intersect_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(set_tree234__intersect_2_4_0_i9);
MR_def_label(set_tree234__intersect_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r1 = MR_sv(9);
MR_def_label(set_tree234__intersect_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(9) = MR_r1;
	MR_np_localcall_lab(set_tree234__intersect_2_4_0,
		set_tree234__intersect_2_4_0_i10);
MR_def_label(set_tree234__intersect_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__intersect_2_4_0_i12);
MR_def_label(set_tree234__intersect_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__intersect_2_4_0_i11);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__intersect_2_4_0_i13);
MR_def_label(set_tree234__intersect_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(set_tree234__intersect_2_4_0_i14);
MR_def_label(set_tree234__intersect_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(8);
	MR_r1 = MR_sv(9);
MR_def_label(set_tree234__intersect_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(9) = MR_r1;
	MR_np_localcall_lab(set_tree234__intersect_2_4_0,
		set_tree234__intersect_2_4_0_i15);
MR_def_label(set_tree234__intersect_2_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__intersect_2_4_0_i17);
MR_def_label(set_tree234__intersect_2_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__intersect_2_4_0_i16);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__intersect_2_4_0_i18);
MR_def_label(set_tree234__intersect_2_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__intersect_2_4_0_i76);
MR_def_label(set_tree234__intersect_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_r1 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__intersect_2_4_0_i76);
MR_def_label(set_tree234__intersect_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(set_tree234__intersect_2_4_0_i21);
	}
	MR_sv(1) = MR_r3;
	MR_sv(8) = MR_tfield(2, MR_r2, 0);
	MR_sv(2) = MR_tfield(2, MR_r2, 1);
	MR_sv(3) = MR_tfield(2, MR_r2, 3);
	MR_sv(4) = MR_tfield(2, MR_r2, 4);
	MR_sv(9) = MR_r1;
	MR_r2 = MR_tfield(2, MR_r2, 2);
	MR_np_localcall_lab(set_tree234__intersect_2_4_0,
		set_tree234__intersect_2_4_0_i22);
MR_def_label(set_tree234__intersect_2_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__intersect_2_4_0_i24);
MR_def_label(set_tree234__intersect_2_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__intersect_2_4_0_i23);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__intersect_2_4_0_i25);
MR_def_label(set_tree234__intersect_2_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(set_tree234__intersect_2_4_0_i26);
MR_def_label(set_tree234__intersect_2_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r1 = MR_sv(9);
MR_def_label(set_tree234__intersect_2_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(9) = MR_r1;
	MR_np_localcall_lab(set_tree234__intersect_2_4_0,
		set_tree234__intersect_2_4_0_i27);
MR_def_label(set_tree234__intersect_2_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__intersect_2_4_0_i29);
MR_def_label(set_tree234__intersect_2_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__intersect_2_4_0_i28);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__intersect_2_4_0_i30);
MR_def_label(set_tree234__intersect_2_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__intersect_2_4_0_i76);
MR_def_label(set_tree234__intersect_2_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_r1 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__intersect_2_4_0_i76);
MR_def_label(set_tree234__intersect_2_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(8) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 2);
	MR_sv(9) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(set_tree234__intersect_2_4_0,
		set_tree234__intersect_2_4_0_i33);
MR_def_label(set_tree234__intersect_2_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__intersect_2_4_0_i35);
MR_def_label(set_tree234__intersect_2_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__intersect_2_4_0_i34);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__intersect_2_4_0_i36);
MR_def_label(set_tree234__intersect_2_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__intersect_2_4_0_i76);
MR_def_label(set_tree234__intersect_2_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__intersect_2_4_0_i76);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module45)
	MR_init_entry1(set_tree234__intersect_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__intersect_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'intersect'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__intersect_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(set_tree234__intersect_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module46)
	MR_init_entry1(fn__set_tree234__intersect_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_tree234__intersect_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'intersect'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__intersect_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(set_tree234__intersect_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module47)
	MR_init_entry1(fn__set_tree234__intersect_list_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_tree234__intersect_list_2_2_0);
	MR_init_label4(fn__set_tree234__intersect_list_2_2_0,22,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'intersect_list_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__intersect_list_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__set_tree234__intersect_list_2_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__set_tree234__intersect_list_2_2_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__set_tree234__intersect_list_2_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__set_tree234__intersect_list_2_2_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__set_tree234__intersect_list_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r3 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_tree234__intersect_2_4_0,
		fn__set_tree234__intersect_list_2_2_0_i6);
MR_def_label(fn__set_tree234__intersect_list_2_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__set_tree234__intersect_list_2_2_0_i22);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module48)
	MR_init_entry1(fn__set_tree234__intersect_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_tree234__intersect_list_1_0);
	MR_init_label1(fn__set_tree234__intersect_list_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'intersect_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__intersect_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__set_tree234__intersect_list_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__set_tree234__intersect_list_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_np_tailcall_ent(fn__set_tree234__intersect_list_2_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module49)
	MR_init_entry1(fn__set_tree234__power_intersect_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_tree234__power_intersect_1_0);
	MR_init_label2(fn__set_tree234__power_intersect_1_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'power_intersect'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__power_intersect_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(set_tree234, set_tree234);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(set_tree234__to_sorted_list_2_3_0,
		fn__set_tree234__power_intersect_1_0_i3);
MR_def_label(fn__set_tree234__power_intersect_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__set_tree234__power_intersect_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
MR_def_label(fn__set_tree234__power_intersect_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__set_tree234__intersect_list_2_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module50)
	MR_init_entry1(set_tree234__difference_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__difference_2_3_0);
	MR_init_label10(set_tree234__difference_2_3_0,34,3,5,6,7,8,9,10,4,13)
	MR_init_label6(set_tree234__difference_2_3_0,14,15,16,12,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'difference_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__difference_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(set_tree234__difference_2_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(set_tree234__difference_2_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(8);
MR_def_label(set_tree234__difference_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(set_tree234__difference_2_3_0_i4);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 0);
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_sv(4) = MR_tfield(3, MR_r2, 4);
	MR_sv(5) = MR_tfield(3, MR_r2, 5);
	MR_sv(6) = MR_tfield(3, MR_r2, 6);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tfield(3, MR_r2, 3);
	MR_np_localcall_lab(set_tree234__difference_2_3_0,
		set_tree234__difference_2_3_0_i5);
MR_def_label(set_tree234__difference_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__delete_2_4_0,
		set_tree234__difference_2_3_0_i6);
MR_def_label(set_tree234__difference_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(set_tree234__difference_2_3_0,
		set_tree234__difference_2_3_0_i7);
MR_def_label(set_tree234__difference_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__delete_2_4_0,
		set_tree234__difference_2_3_0_i8);
MR_def_label(set_tree234__difference_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(set_tree234__difference_2_3_0,
		set_tree234__difference_2_3_0_i9);
MR_def_label(set_tree234__difference_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__delete_2_4_0,
		set_tree234__difference_2_3_0_i10);
MR_def_label(set_tree234__difference_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(set_tree234__difference_2_3_0_i34);
	}
MR_def_label(set_tree234__difference_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(set_tree234__difference_2_3_0_i12);
	}
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_sv(2) = MR_tfield(2, MR_r2, 1);
	MR_sv(3) = MR_tfield(2, MR_r2, 3);
	MR_sv(4) = MR_tfield(2, MR_r2, 4);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tfield(2, MR_r2, 2);
	MR_np_localcall_lab(set_tree234__difference_2_3_0,
		set_tree234__difference_2_3_0_i13);
MR_def_label(set_tree234__difference_2_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__delete_2_4_0,
		set_tree234__difference_2_3_0_i14);
MR_def_label(set_tree234__difference_2_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(set_tree234__difference_2_3_0,
		set_tree234__difference_2_3_0_i15);
MR_def_label(set_tree234__difference_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__delete_2_4_0,
		set_tree234__difference_2_3_0_i16);
MR_def_label(set_tree234__difference_2_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(set_tree234__difference_2_3_0_i34);
	}
MR_def_label(set_tree234__difference_2_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 2);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(set_tree234__difference_2_3_0,
		set_tree234__difference_2_3_0_i18);
MR_def_label(set_tree234__difference_2_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__delete_2_4_0,
		set_tree234__difference_2_3_0_i19);
MR_def_label(set_tree234__difference_2_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(set_tree234__difference_2_3_0_i34);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module51)
	MR_init_entry1(set_tree234__difference_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__difference_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'difference'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__difference_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(set_tree234__difference_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module52)
	MR_init_entry1(fn__set_tree234__difference_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_tree234__difference_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'difference'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__difference_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(set_tree234__difference_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module53)
	MR_init_entry1(fn__set_tree234__count_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_tree234__count_1_0);
	MR_init_label10(fn__set_tree234__count_1_0,30,5,6,7,8,4,10,11,12,9)
	MR_init_label2(fn__set_tree234__count_1_0,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'count'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__count_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__set_tree234__count_1_0_i30);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__set_tree234__count_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(fn__set_tree234__count_1_0_i4);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 4);
	MR_sv(2) = MR_tfield(3, MR_r2, 5);
	MR_sv(3) = MR_tfield(3, MR_r2, 6);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(3, MR_r2, 3);
	MR_np_localcall_lab(fn__set_tree234__count_1_0,
		fn__set_tree234__count_1_0_i5);
MR_def_label(fn__set_tree234__count_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__set_tree234__count_1_0,
		fn__set_tree234__count_1_0_i6);
MR_def_label(fn__set_tree234__count_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__set_tree234__count_1_0,
		fn__set_tree234__count_1_0_i7);
MR_def_label(fn__set_tree234__count_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__set_tree234__count_1_0,
		fn__set_tree234__count_1_0_i8);
MR_def_label(fn__set_tree234__count_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((((MR_Integer) 3 + (MR_Integer) MR_sv(1)) + (MR_Integer) MR_sv(2)) + (MR_Integer) MR_sv(3)) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(5);
MR_def_label(fn__set_tree234__count_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__set_tree234__count_1_0_i9);
	}
	MR_sv(1) = MR_tfield(2, MR_r2, 3);
	MR_sv(2) = MR_tfield(2, MR_r2, 4);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(2, MR_r2, 2);
	MR_np_localcall_lab(fn__set_tree234__count_1_0,
		fn__set_tree234__count_1_0_i10);
MR_def_label(fn__set_tree234__count_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__set_tree234__count_1_0,
		fn__set_tree234__count_1_0_i11);
MR_def_label(fn__set_tree234__count_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__set_tree234__count_1_0,
		fn__set_tree234__count_1_0_i12);
MR_def_label(fn__set_tree234__count_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((((MR_Integer) 2 + (MR_Integer) MR_sv(1)) + (MR_Integer) MR_sv(2)) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(5);
MR_def_label(fn__set_tree234__count_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 2);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(fn__set_tree234__count_1_0,
		fn__set_tree234__count_1_0_i13);
MR_def_label(fn__set_tree234__count_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__set_tree234__count_1_0,
		fn__set_tree234__count_1_0_i14);
MR_def_label(fn__set_tree234__count_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) 1 + (MR_Integer) MR_sv(1)) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(set_tree234_module54)
	MR_init_entry1(set_tree234__map_func_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__map_func_4_0);
	MR_init_label10(set_tree234__map_func_4_0,40,3,5,6,8,9,11,12,4,16)
	MR_init_label6(set_tree234__map_func_4_0,17,19,20,15,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_func'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__map_func_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(set_tree234__map_func_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(set_tree234__map_func_4_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__map_func_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,3)) {
		MR_GOTO_LAB(set_tree234__map_func_4_0_i4);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_tfield(3, MR_r4, 3);
	}
	MR_np_localcall_lab(set_tree234__map_func_4_0,
		set_tree234__map_func_4_0_i5);
MR_def_label(set_tree234__map_func_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__map_func_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__map_func_4_0_i6);
MR_def_label(set_tree234__map_func_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(set_tree234__map_func_4_0,
		set_tree234__map_func_4_0_i8);
MR_def_label(set_tree234__map_func_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__map_func_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__map_func_4_0_i9);
MR_def_label(set_tree234__map_func_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	}
	MR_np_localcall_lab(set_tree234__map_func_4_0,
		set_tree234__map_func_4_0_i11);
MR_def_label(set_tree234__map_func_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__map_func_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__map_func_4_0_i12);
MR_def_label(set_tree234__map_func_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__map_func_4_0_i40);
	}
MR_def_label(set_tree234__map_func_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(set_tree234__map_func_4_0_i15);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_tfield(2, MR_r4, 2);
	}
	MR_np_localcall_lab(set_tree234__map_func_4_0,
		set_tree234__map_func_4_0_i16);
MR_def_label(set_tree234__map_func_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__map_func_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__map_func_4_0_i17);
MR_def_label(set_tree234__map_func_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_localcall_lab(set_tree234__map_func_4_0,
		set_tree234__map_func_4_0_i19);
MR_def_label(set_tree234__map_func_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__map_func_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__map_func_4_0_i20);
MR_def_label(set_tree234__map_func_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__map_func_4_0_i40);
	}
MR_def_label(set_tree234__map_func_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_tfield(1, MR_r4, 1);
	}
	MR_np_localcall_lab(set_tree234__map_func_4_0,
		set_tree234__map_func_4_0_i23);
MR_def_label(set_tree234__map_func_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__map_func_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__map_func_4_0_i24);
MR_def_label(set_tree234__map_func_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__map_func_4_0_i40);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module55)
	MR_init_entry1(fn__set_tree234__map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_tree234__map_2_0);
	MR_init_label1(fn__set_tree234__map_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__map_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_tree234__map_func_4_0,
		fn__set_tree234__map_2_0_i2);
MR_def_label(fn__set_tree234__map_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(set_tree234__list_to_set_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module56)
	MR_init_entry1(set_tree234__map_pred_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__map_pred_4_0);
	MR_init_label10(set_tree234__map_pred_4_0,40,3,5,6,8,9,11,12,4,16)
	MR_init_label6(set_tree234__map_pred_4_0,17,19,20,15,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_pred'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__map_pred_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(set_tree234__map_pred_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(set_tree234__map_pred_4_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__map_pred_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,3)) {
		MR_GOTO_LAB(set_tree234__map_pred_4_0_i4);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_tfield(3, MR_r4, 3);
	}
	MR_np_localcall_lab(set_tree234__map_pred_4_0,
		set_tree234__map_pred_4_0_i5);
MR_def_label(set_tree234__map_pred_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__map_pred_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__map_pred_4_0_i6);
MR_def_label(set_tree234__map_pred_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(set_tree234__map_pred_4_0,
		set_tree234__map_pred_4_0_i8);
MR_def_label(set_tree234__map_pred_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__map_pred_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__map_pred_4_0_i9);
MR_def_label(set_tree234__map_pred_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	}
	MR_np_localcall_lab(set_tree234__map_pred_4_0,
		set_tree234__map_pred_4_0_i11);
MR_def_label(set_tree234__map_pred_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__map_pred_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__map_pred_4_0_i12);
MR_def_label(set_tree234__map_pred_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__map_pred_4_0_i40);
	}
MR_def_label(set_tree234__map_pred_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(set_tree234__map_pred_4_0_i15);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_tfield(2, MR_r4, 2);
	}
	MR_np_localcall_lab(set_tree234__map_pred_4_0,
		set_tree234__map_pred_4_0_i16);
MR_def_label(set_tree234__map_pred_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__map_pred_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__map_pred_4_0_i17);
MR_def_label(set_tree234__map_pred_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_localcall_lab(set_tree234__map_pred_4_0,
		set_tree234__map_pred_4_0_i19);
MR_def_label(set_tree234__map_pred_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__map_pred_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__map_pred_4_0_i20);
MR_def_label(set_tree234__map_pred_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__map_pred_4_0_i40);
	}
MR_def_label(set_tree234__map_pred_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_tfield(1, MR_r4, 1);
	}
	MR_np_localcall_lab(set_tree234__map_pred_4_0,
		set_tree234__map_pred_4_0_i23);
MR_def_label(set_tree234__map_pred_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__map_pred_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__map_pred_4_0_i24);
MR_def_label(set_tree234__map_pred_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__map_pred_4_0_i40);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module57)
	MR_init_entry1(set_tree234__map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__map_3_0);
	MR_init_label1(set_tree234__map_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_tree234__map_pred_4_0,
		set_tree234__map_3_0_i2);
MR_def_label(set_tree234__map_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(set_tree234__list_to_set_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module58)
	MR_init_entry1(set_tree234__filter_map_pred_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__filter_map_pred_4_0);
	MR_init_label10(set_tree234__filter_map_pred_4_0,88,3,5,8,6,11,12,15,13,18)
	MR_init_label10(set_tree234__filter_map_pred_4_0,19,22,20,4,28,31,29,34,35,38)
	MR_init_label5(set_tree234__filter_map_pred_4_0,36,27,43,46,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_map_pred'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__filter_map_pred_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(set_tree234__filter_map_pred_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__filter_map_pred_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,3)) {
		MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i4);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_tfield(3, MR_r4, 3);
	}
	MR_np_localcall_lab(set_tree234__filter_map_pred_4_0,
		set_tree234__filter_map_pred_4_0_i5);
MR_def_label(set_tree234__filter_map_pred_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__filter_map_pred_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__filter_map_pred_4_0_i8);
MR_def_label(set_tree234__filter_map_pred_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i11);
	}
MR_def_label(set_tree234__filter_map_pred_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
MR_def_label(set_tree234__filter_map_pred_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_np_localcall_lab(set_tree234__filter_map_pred_4_0,
		set_tree234__filter_map_pred_4_0_i12);
MR_def_label(set_tree234__filter_map_pred_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__filter_map_pred_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__filter_map_pred_4_0_i15);
MR_def_label(set_tree234__filter_map_pred_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i18);
	}
MR_def_label(set_tree234__filter_map_pred_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
MR_def_label(set_tree234__filter_map_pred_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_np_localcall_lab(set_tree234__filter_map_pred_4_0,
		set_tree234__filter_map_pred_4_0_i19);
MR_def_label(set_tree234__filter_map_pred_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__filter_map_pred_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__filter_map_pred_4_0_i22);
MR_def_label(set_tree234__filter_map_pred_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i88);
	}
MR_def_label(set_tree234__filter_map_pred_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i88);
MR_def_label(set_tree234__filter_map_pred_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i27);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_tfield(2, MR_r4, 2);
	}
	MR_np_localcall_lab(set_tree234__filter_map_pred_4_0,
		set_tree234__filter_map_pred_4_0_i28);
MR_def_label(set_tree234__filter_map_pred_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__filter_map_pred_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__filter_map_pred_4_0_i31);
MR_def_label(set_tree234__filter_map_pred_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i34);
	}
MR_def_label(set_tree234__filter_map_pred_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
MR_def_label(set_tree234__filter_map_pred_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_np_localcall_lab(set_tree234__filter_map_pred_4_0,
		set_tree234__filter_map_pred_4_0_i35);
MR_def_label(set_tree234__filter_map_pred_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__filter_map_pred_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__filter_map_pred_4_0_i38);
MR_def_label(set_tree234__filter_map_pred_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i36);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i88);
	}
MR_def_label(set_tree234__filter_map_pred_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i88);
MR_def_label(set_tree234__filter_map_pred_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_tfield(1, MR_r4, 1);
	}
	MR_np_localcall_lab(set_tree234__filter_map_pred_4_0,
		set_tree234__filter_map_pred_4_0_i43);
MR_def_label(set_tree234__filter_map_pred_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__filter_map_pred_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__filter_map_pred_4_0_i46);
MR_def_label(set_tree234__filter_map_pred_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i44);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i88);
	}
MR_def_label(set_tree234__filter_map_pred_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i88);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module59)
	MR_init_entry1(set_tree234__filter_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__filter_map_3_0);
	MR_init_label1(set_tree234__filter_map_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__filter_map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_tree234__filter_map_pred_4_0,
		set_tree234__filter_map_3_0_i2);
MR_def_label(set_tree234__filter_map_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(set_tree234__list_to_set_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module60)
	MR_init_entry1(set_tree234__filter_map_func_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__filter_map_func_4_0);
	MR_init_label10(set_tree234__filter_map_func_4_0,88,3,5,8,6,11,12,15,13,18)
	MR_init_label10(set_tree234__filter_map_func_4_0,19,22,20,4,28,31,29,34,35,38)
	MR_init_label5(set_tree234__filter_map_func_4_0,36,27,43,46,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_map_func'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__filter_map_func_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(set_tree234__filter_map_func_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__filter_map_func_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,3)) {
		MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i4);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_tfield(3, MR_r4, 3);
	}
	MR_np_localcall_lab(set_tree234__filter_map_func_4_0,
		set_tree234__filter_map_func_4_0_i5);
MR_def_label(set_tree234__filter_map_func_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__filter_map_func_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__filter_map_func_4_0_i8);
MR_def_label(set_tree234__filter_map_func_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i11);
	}
MR_def_label(set_tree234__filter_map_func_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
MR_def_label(set_tree234__filter_map_func_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_np_localcall_lab(set_tree234__filter_map_func_4_0,
		set_tree234__filter_map_func_4_0_i12);
MR_def_label(set_tree234__filter_map_func_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__filter_map_func_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__filter_map_func_4_0_i15);
MR_def_label(set_tree234__filter_map_func_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i18);
	}
MR_def_label(set_tree234__filter_map_func_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
MR_def_label(set_tree234__filter_map_func_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_np_localcall_lab(set_tree234__filter_map_func_4_0,
		set_tree234__filter_map_func_4_0_i19);
MR_def_label(set_tree234__filter_map_func_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__filter_map_func_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__filter_map_func_4_0_i22);
MR_def_label(set_tree234__filter_map_func_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i88);
	}
MR_def_label(set_tree234__filter_map_func_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i88);
MR_def_label(set_tree234__filter_map_func_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i27);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_tfield(2, MR_r4, 2);
	}
	MR_np_localcall_lab(set_tree234__filter_map_func_4_0,
		set_tree234__filter_map_func_4_0_i28);
MR_def_label(set_tree234__filter_map_func_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__filter_map_func_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__filter_map_func_4_0_i31);
MR_def_label(set_tree234__filter_map_func_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i34);
	}
MR_def_label(set_tree234__filter_map_func_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
MR_def_label(set_tree234__filter_map_func_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_np_localcall_lab(set_tree234__filter_map_func_4_0,
		set_tree234__filter_map_func_4_0_i35);
MR_def_label(set_tree234__filter_map_func_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__filter_map_func_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__filter_map_func_4_0_i38);
MR_def_label(set_tree234__filter_map_func_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i36);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i88);
	}
MR_def_label(set_tree234__filter_map_func_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i88);
MR_def_label(set_tree234__filter_map_func_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(7) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_tfield(1, MR_r4, 1);
	}
	MR_np_localcall_lab(set_tree234__filter_map_func_4_0,
		set_tree234__filter_map_func_4_0_i43);
MR_def_label(set_tree234__filter_map_func_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__filter_map_func_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__filter_map_func_4_0_i46);
MR_def_label(set_tree234__filter_map_func_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i44);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i88);
	}
MR_def_label(set_tree234__filter_map_func_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i88);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module61)
	MR_init_entry1(fn__set_tree234__filter_map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_tree234__filter_map_2_0);
	MR_init_label1(fn__set_tree234__filter_map_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__filter_map_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_tree234__filter_map_func_4_0,
		fn__set_tree234__filter_map_2_0_i2);
MR_def_label(fn__set_tree234__filter_map_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(set_tree234__list_to_set_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(set_tree234_module62)
	MR_init_entry1(fn__set_tree234__fold_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__set_tree234__fold_3_0);
	MR_init_label10(fn__set_tree234__fold_3_0,34,3,5,6,7,8,9,10,4,13)
	MR_init_label6(fn__set_tree234__fold_3_0,14,15,16,12,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__fold_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(fn__set_tree234__fold_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__set_tree234__fold_3_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(10);
MR_def_label(fn__set_tree234__fold_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,3)) {
		MR_GOTO_LAB(fn__set_tree234__fold_3_0_i4);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_tfield(3, MR_r4, 3);
	}
	MR_np_localcall_lab(fn__set_tree234__fold_3_0,
		fn__set_tree234__fold_3_0_i5);
MR_def_label(fn__set_tree234__fold_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__set_tree234__fold_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__set_tree234__fold_3_0_i6);
MR_def_label(fn__set_tree234__fold_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__set_tree234__fold_3_0,
		fn__set_tree234__fold_3_0_i7);
MR_def_label(fn__set_tree234__fold_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__set_tree234__fold_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__set_tree234__fold_3_0_i8);
MR_def_label(fn__set_tree234__fold_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__set_tree234__fold_3_0,
		fn__set_tree234__fold_3_0_i9);
MR_def_label(fn__set_tree234__fold_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__set_tree234__fold_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__set_tree234__fold_3_0_i10);
MR_def_label(fn__set_tree234__fold_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(fn__set_tree234__fold_3_0_i34);
	}
MR_def_label(fn__set_tree234__fold_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(fn__set_tree234__fold_3_0_i12);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_tfield(2, MR_r4, 2);
	}
	MR_np_localcall_lab(fn__set_tree234__fold_3_0,
		fn__set_tree234__fold_3_0_i13);
MR_def_label(fn__set_tree234__fold_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__set_tree234__fold_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__set_tree234__fold_3_0_i14);
MR_def_label(fn__set_tree234__fold_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__set_tree234__fold_3_0,
		fn__set_tree234__fold_3_0_i15);
MR_def_label(fn__set_tree234__fold_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__set_tree234__fold_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__set_tree234__fold_3_0_i16);
MR_def_label(fn__set_tree234__fold_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(fn__set_tree234__fold_3_0_i34);
	}
MR_def_label(fn__set_tree234__fold_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_tfield(1, MR_r4, 1);
	}
	MR_np_localcall_lab(fn__set_tree234__fold_3_0,
		fn__set_tree234__fold_3_0_i18);
MR_def_label(fn__set_tree234__fold_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__set_tree234__fold_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__set_tree234__fold_3_0_i19);
MR_def_label(fn__set_tree234__fold_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(fn__set_tree234__fold_3_0_i34);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module63)
	MR_init_entry1(set_tree234__fold_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold_4_0);
	MR_init_label10(set_tree234__fold_4_0,34,3,5,6,7,8,9,10,4,13)
	MR_init_label6(set_tree234__fold_4_0,14,15,16,12,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(set_tree234__fold_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(set_tree234__fold_4_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__fold_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,3)) {
		MR_GOTO_LAB(set_tree234__fold_4_0_i4);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_tfield(3, MR_r4, 3);
	}
	MR_np_localcall_lab(set_tree234__fold_4_0,
		set_tree234__fold_4_0_i5);
MR_def_label(set_tree234__fold_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__set_tree234__fold_4_0_i6);
MR_def_label(set_tree234__fold_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(set_tree234__fold_4_0,
		set_tree234__fold_4_0_i7);
MR_def_label(set_tree234__fold_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__set_tree234__fold_4_0_i8);
MR_def_label(set_tree234__fold_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(set_tree234__fold_4_0,
		set_tree234__fold_4_0_i9);
MR_def_label(set_tree234__fold_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__set_tree234__fold_4_0_i10);
MR_def_label(set_tree234__fold_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__fold_4_0_i34);
	}
MR_def_label(set_tree234__fold_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(set_tree234__fold_4_0_i12);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_tfield(2, MR_r4, 2);
	}
	MR_np_localcall_lab(set_tree234__fold_4_0,
		set_tree234__fold_4_0_i13);
MR_def_label(set_tree234__fold_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__set_tree234__fold_4_0_i14);
MR_def_label(set_tree234__fold_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(set_tree234__fold_4_0,
		set_tree234__fold_4_0_i15);
MR_def_label(set_tree234__fold_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__set_tree234__fold_4_0_i16);
MR_def_label(set_tree234__fold_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__fold_4_0_i34);
	}
MR_def_label(set_tree234__fold_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_tfield(1, MR_r4, 1);
	}
	MR_np_localcall_lab(set_tree234__fold_4_0,
		set_tree234__fold_4_0_i18);
MR_def_label(set_tree234__fold_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__set_tree234__fold_4_0_i19);
MR_def_label(set_tree234__fold_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__fold_4_0_i34);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module64)
	MR_init_entry1(set_tree234__fold_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold_4_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module65)
	MR_init_entry1(set_tree234__fold_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold_4_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module66)
	MR_init_entry1(set_tree234__fold_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold_4_3);
	MR_init_label10(set_tree234__fold_4_3,100,3,5,7,9,11,13,15,4,20)
	MR_init_label7(set_tree234__fold_4_3,22,24,26,19,30,32,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(set_tree234__fold_4_3,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(set_tree234__fold_4_3_i3);
	}
	MR_r2 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__fold_4_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,3)) {
		MR_GOTO_LAB(set_tree234__fold_4_3_i4);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_tfield(3, MR_r4, 3);
	}
	MR_np_localcall_lab(set_tree234__fold_4_3,
		set_tree234__fold_4_3_i5);
MR_def_label(set_tree234__fold_4_3,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold_4_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold_4_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__set_tree234__fold_4_3_i7);
MR_def_label(set_tree234__fold_4_3,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold_4_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(set_tree234__fold_4_3,
		set_tree234__fold_4_3_i9);
MR_def_label(set_tree234__fold_4_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold_4_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold_4_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__set_tree234__fold_4_3_i11);
MR_def_label(set_tree234__fold_4_3,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold_4_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(set_tree234__fold_4_3,
		set_tree234__fold_4_3_i13);
MR_def_label(set_tree234__fold_4_3,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold_4_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold_4_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__set_tree234__fold_4_3_i15);
MR_def_label(set_tree234__fold_4_3,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold_4_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__fold_4_3_i100);
	}
MR_def_label(set_tree234__fold_4_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(set_tree234__fold_4_3_i19);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_tfield(2, MR_r4, 2);
	}
	MR_np_localcall_lab(set_tree234__fold_4_3,
		set_tree234__fold_4_3_i20);
MR_def_label(set_tree234__fold_4_3,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold_4_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold_4_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__set_tree234__fold_4_3_i22);
MR_def_label(set_tree234__fold_4_3,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold_4_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(set_tree234__fold_4_3,
		set_tree234__fold_4_3_i24);
MR_def_label(set_tree234__fold_4_3,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold_4_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold_4_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__set_tree234__fold_4_3_i26);
MR_def_label(set_tree234__fold_4_3,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold_4_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__fold_4_3_i100);
	}
MR_def_label(set_tree234__fold_4_3,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_tfield(1, MR_r4, 1);
	}
	MR_np_localcall_lab(set_tree234__fold_4_3,
		set_tree234__fold_4_3_i30);
MR_def_label(set_tree234__fold_4_3,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold_4_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold_4_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__set_tree234__fold_4_3_i32);
MR_def_label(set_tree234__fold_4_3,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold_4_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(set_tree234__fold_4_3_i100);
	}
MR_def_label(set_tree234__fold_4_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module67)
	MR_init_entry1(set_tree234__fold_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold_4_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold_4_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module68)
	MR_init_entry1(set_tree234__fold_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold_4_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold_4_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(set_tree234_module69)
	MR_init_entry1(set_tree234__fold2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold2_6_0);
	MR_init_label10(set_tree234__fold2_6_0,34,3,5,6,7,8,9,10,4,13)
	MR_init_label6(set_tree234__fold2_6_0,14,15,16,12,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(set_tree234__fold2_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(set_tree234__fold2_6_0_i3);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(11);
MR_def_label(set_tree234__fold2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,3)) {
		MR_GOTO_LAB(set_tree234__fold2_6_0_i4);
	}
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r5 = MR_tfield(3, MR_r5, 3);
	}
	MR_np_localcall_lab(set_tree234__fold2_6_0,
		set_tree234__fold2_6_0_i5);
MR_def_label(set_tree234__fold2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__set_tree234__fold2_6_0_i6);
MR_def_label(set_tree234__fold2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_localcall_lab(set_tree234__fold2_6_0,
		set_tree234__fold2_6_0_i7);
MR_def_label(set_tree234__fold2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__set_tree234__fold2_6_0_i8);
MR_def_label(set_tree234__fold2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_localcall_lab(set_tree234__fold2_6_0,
		set_tree234__fold2_6_0_i9);
MR_def_label(set_tree234__fold2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__set_tree234__fold2_6_0_i10);
MR_def_label(set_tree234__fold2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(set_tree234__fold2_6_0_i34);
	}
MR_def_label(set_tree234__fold2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(set_tree234__fold2_6_0_i12);
	}
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r5 = MR_tfield(2, MR_r5, 2);
	}
	MR_np_localcall_lab(set_tree234__fold2_6_0,
		set_tree234__fold2_6_0_i13);
MR_def_label(set_tree234__fold2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__set_tree234__fold2_6_0_i14);
MR_def_label(set_tree234__fold2_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_localcall_lab(set_tree234__fold2_6_0,
		set_tree234__fold2_6_0_i15);
MR_def_label(set_tree234__fold2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__set_tree234__fold2_6_0_i16);
MR_def_label(set_tree234__fold2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(set_tree234__fold2_6_0_i34);
	}
MR_def_label(set_tree234__fold2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r5 = MR_tfield(1, MR_r5, 1);
	}
	MR_np_localcall_lab(set_tree234__fold2_6_0,
		set_tree234__fold2_6_0_i18);
MR_def_label(set_tree234__fold2_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__set_tree234__fold2_6_0_i19);
MR_def_label(set_tree234__fold2_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(set_tree234__fold2_6_0_i34);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module70)
	MR_init_entry1(set_tree234__fold2_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold2_6_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold2'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold2_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module71)
	MR_init_entry1(set_tree234__fold2_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold2_6_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold2'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold2_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module72)
	MR_init_entry1(set_tree234__fold2_6_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold2_6_3);
	MR_init_label10(set_tree234__fold2_6_3,100,3,5,7,9,11,13,15,4,20)
	MR_init_label7(set_tree234__fold2_6_3,22,24,26,19,30,32,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold2'/6 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold2_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(set_tree234__fold2_6_3,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(set_tree234__fold2_6_3_i3);
	}
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(11);
MR_def_label(set_tree234__fold2_6_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,3)) {
		MR_GOTO_LAB(set_tree234__fold2_6_3_i4);
	}
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r5 = MR_tfield(3, MR_r5, 3);
	}
	MR_np_localcall_lab(set_tree234__fold2_6_3,
		set_tree234__fold2_6_3_i5);
MR_def_label(set_tree234__fold2_6_3,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold2_6_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold2_6_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__set_tree234__fold2_6_3_i7);
MR_def_label(set_tree234__fold2_6_3,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold2_6_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_localcall_lab(set_tree234__fold2_6_3,
		set_tree234__fold2_6_3_i9);
MR_def_label(set_tree234__fold2_6_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold2_6_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold2_6_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__set_tree234__fold2_6_3_i11);
MR_def_label(set_tree234__fold2_6_3,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold2_6_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_localcall_lab(set_tree234__fold2_6_3,
		set_tree234__fold2_6_3_i13);
MR_def_label(set_tree234__fold2_6_3,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold2_6_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold2_6_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__set_tree234__fold2_6_3_i15);
MR_def_label(set_tree234__fold2_6_3,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold2_6_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(set_tree234__fold2_6_3_i100);
	}
MR_def_label(set_tree234__fold2_6_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(set_tree234__fold2_6_3_i19);
	}
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r5 = MR_tfield(2, MR_r5, 2);
	}
	MR_np_localcall_lab(set_tree234__fold2_6_3,
		set_tree234__fold2_6_3_i20);
MR_def_label(set_tree234__fold2_6_3,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold2_6_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold2_6_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__set_tree234__fold2_6_3_i22);
MR_def_label(set_tree234__fold2_6_3,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold2_6_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_localcall_lab(set_tree234__fold2_6_3,
		set_tree234__fold2_6_3_i24);
MR_def_label(set_tree234__fold2_6_3,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold2_6_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold2_6_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__set_tree234__fold2_6_3_i26);
MR_def_label(set_tree234__fold2_6_3,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold2_6_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(set_tree234__fold2_6_3_i100);
	}
MR_def_label(set_tree234__fold2_6_3,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r5 = MR_tfield(1, MR_r5, 1);
	}
	MR_np_localcall_lab(set_tree234__fold2_6_3,
		set_tree234__fold2_6_3_i30);
MR_def_label(set_tree234__fold2_6_3,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold2_6_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold2_6_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__set_tree234__fold2_6_3_i32);
MR_def_label(set_tree234__fold2_6_3,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold2_6_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(set_tree234__fold2_6_3_i100);
	}
MR_def_label(set_tree234__fold2_6_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module73)
	MR_init_entry1(set_tree234__fold2_6_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold2_6_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold2'/6 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold2_6_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold2_6_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module74)
	MR_init_entry1(set_tree234__fold2_6_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold2_6_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold2'/6 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold2_6_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold2_6_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_4);

MR_BEGIN_MODULE(set_tree234_module75)
	MR_init_entry1(set_tree234__fold3_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold3_8_0);
	MR_init_label10(set_tree234__fold3_8_0,34,3,5,6,7,8,9,10,4,13)
	MR_init_label6(set_tree234__fold3_8_0,14,15,16,12,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold3'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold3_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(set_tree234__fold3_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(set_tree234__fold3_8_0_i3);
	}
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_decr_sp_and_return(12);
MR_def_label(set_tree234__fold3_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,3)) {
		MR_GOTO_LAB(set_tree234__fold3_8_0_i4);
	}
	MR_sv(1) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_r6 = MR_tfield(3, MR_r6, 3);
	}
	MR_np_localcall_lab(set_tree234__fold3_8_0,
		set_tree234__fold3_8_0_i5);
MR_def_label(set_tree234__fold3_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold3_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__set_tree234__fold3_8_0_i6);
MR_def_label(set_tree234__fold3_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	}
	MR_np_localcall_lab(set_tree234__fold3_8_0,
		set_tree234__fold3_8_0_i7);
MR_def_label(set_tree234__fold3_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold3_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__set_tree234__fold3_8_0_i8);
MR_def_label(set_tree234__fold3_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	}
	MR_np_localcall_lab(set_tree234__fold3_8_0,
		set_tree234__fold3_8_0_i9);
MR_def_label(set_tree234__fold3_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold3_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__set_tree234__fold3_8_0_i10);
MR_def_label(set_tree234__fold3_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(set_tree234__fold3_8_0_i34);
	}
MR_def_label(set_tree234__fold3_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(set_tree234__fold3_8_0_i12);
	}
	MR_sv(1) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_r6 = MR_tfield(2, MR_r6, 2);
	}
	MR_np_localcall_lab(set_tree234__fold3_8_0,
		set_tree234__fold3_8_0_i13);
MR_def_label(set_tree234__fold3_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold3_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__set_tree234__fold3_8_0_i14);
MR_def_label(set_tree234__fold3_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	}
	MR_np_localcall_lab(set_tree234__fold3_8_0,
		set_tree234__fold3_8_0_i15);
MR_def_label(set_tree234__fold3_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold3_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__set_tree234__fold3_8_0_i16);
MR_def_label(set_tree234__fold3_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(set_tree234__fold3_8_0_i34);
	}
MR_def_label(set_tree234__fold3_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_r6 = MR_tfield(1, MR_r6, 1);
	}
	MR_np_localcall_lab(set_tree234__fold3_8_0,
		set_tree234__fold3_8_0_i18);
MR_def_label(set_tree234__fold3_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold3_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__set_tree234__fold3_8_0_i19);
MR_def_label(set_tree234__fold3_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(set_tree234__fold3_8_0_i34);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module76)
	MR_init_entry1(set_tree234__fold3_8_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold3_8_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold3'/8 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold3_8_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold3_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module77)
	MR_init_entry1(set_tree234__fold3_8_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold3_8_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold3'/8 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold3_8_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold3_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module78)
	MR_init_entry1(set_tree234__fold3_8_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold3_8_3);
	MR_init_label10(set_tree234__fold3_8_3,100,3,5,7,9,11,13,15,4,20)
	MR_init_label7(set_tree234__fold3_8_3,22,24,26,19,30,32,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold3'/8 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold3_8_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(set_tree234__fold3_8_3,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(set_tree234__fold3_8_3_i3);
	}
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(12);
MR_def_label(set_tree234__fold3_8_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,3)) {
		MR_GOTO_LAB(set_tree234__fold3_8_3_i4);
	}
	MR_sv(1) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_r6 = MR_tfield(3, MR_r6, 3);
	}
	MR_np_localcall_lab(set_tree234__fold3_8_3,
		set_tree234__fold3_8_3_i5);
MR_def_label(set_tree234__fold3_8_3,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold3_8_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold3_8_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__set_tree234__fold3_8_3_i7);
MR_def_label(set_tree234__fold3_8_3,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold3_8_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	}
	MR_np_localcall_lab(set_tree234__fold3_8_3,
		set_tree234__fold3_8_3_i9);
MR_def_label(set_tree234__fold3_8_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold3_8_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold3_8_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__set_tree234__fold3_8_3_i11);
MR_def_label(set_tree234__fold3_8_3,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold3_8_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	}
	MR_np_localcall_lab(set_tree234__fold3_8_3,
		set_tree234__fold3_8_3_i13);
MR_def_label(set_tree234__fold3_8_3,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold3_8_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold3_8_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__set_tree234__fold3_8_3_i15);
MR_def_label(set_tree234__fold3_8_3,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold3_8_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(set_tree234__fold3_8_3_i100);
	}
MR_def_label(set_tree234__fold3_8_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(set_tree234__fold3_8_3_i19);
	}
	MR_sv(1) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_r6 = MR_tfield(2, MR_r6, 2);
	}
	MR_np_localcall_lab(set_tree234__fold3_8_3,
		set_tree234__fold3_8_3_i20);
MR_def_label(set_tree234__fold3_8_3,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold3_8_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold3_8_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__set_tree234__fold3_8_3_i22);
MR_def_label(set_tree234__fold3_8_3,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold3_8_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	}
	MR_np_localcall_lab(set_tree234__fold3_8_3,
		set_tree234__fold3_8_3_i24);
MR_def_label(set_tree234__fold3_8_3,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold3_8_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold3_8_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__set_tree234__fold3_8_3_i26);
MR_def_label(set_tree234__fold3_8_3,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold3_8_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(set_tree234__fold3_8_3_i100);
	}
MR_def_label(set_tree234__fold3_8_3,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_r6 = MR_tfield(1, MR_r6, 1);
	}
	MR_np_localcall_lab(set_tree234__fold3_8_3,
		set_tree234__fold3_8_3_i30);
MR_def_label(set_tree234__fold3_8_3,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold3_8_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold3_8_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__set_tree234__fold3_8_3_i32);
MR_def_label(set_tree234__fold3_8_3,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold3_8_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(set_tree234__fold3_8_3_i100);
	}
MR_def_label(set_tree234__fold3_8_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module79)
	MR_init_entry1(set_tree234__fold3_8_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold3_8_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold3'/8 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold3_8_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold3_8_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module80)
	MR_init_entry1(set_tree234__fold3_8_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold3_8_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold3'/8 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold3_8_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold3_8_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_5);

MR_BEGIN_MODULE(set_tree234_module81)
	MR_init_entry1(set_tree234__fold4_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold4_10_0);
	MR_init_label10(set_tree234__fold4_10_0,34,3,5,6,7,8,9,10,4,13)
	MR_init_label6(set_tree234__fold4_10_0,14,15,16,12,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold4'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold4_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(set_tree234__fold4_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(set_tree234__fold4_10_0_i3);
	}
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_decr_sp_and_return(13);
MR_def_label(set_tree234__fold4_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,3)) {
		MR_GOTO_LAB(set_tree234__fold4_10_0_i4);
	}
	MR_sv(1) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_r7 = MR_tfield(3, MR_r7, 3);
	}
	MR_np_localcall_lab(set_tree234__fold4_10_0,
		set_tree234__fold4_10_0_i5);
MR_def_label(set_tree234__fold4_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold4_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__set_tree234__fold4_10_0_i6);
MR_def_label(set_tree234__fold4_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_r11 = MR_tempr4;
	}
	MR_np_localcall_lab(set_tree234__fold4_10_0,
		set_tree234__fold4_10_0_i7);
MR_def_label(set_tree234__fold4_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold4_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__set_tree234__fold4_10_0_i8);
MR_def_label(set_tree234__fold4_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_r11 = MR_tempr4;
	}
	MR_np_localcall_lab(set_tree234__fold4_10_0,
		set_tree234__fold4_10_0_i9);
MR_def_label(set_tree234__fold4_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold4_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__set_tree234__fold4_10_0_i10);
MR_def_label(set_tree234__fold4_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_r11 = MR_tempr4;
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(set_tree234__fold4_10_0_i34);
	}
MR_def_label(set_tree234__fold4_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,2)) {
		MR_GOTO_LAB(set_tree234__fold4_10_0_i12);
	}
	MR_sv(1) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_r7 = MR_tfield(2, MR_r7, 2);
	}
	MR_np_localcall_lab(set_tree234__fold4_10_0,
		set_tree234__fold4_10_0_i13);
MR_def_label(set_tree234__fold4_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold4_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__set_tree234__fold4_10_0_i14);
MR_def_label(set_tree234__fold4_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_r11 = MR_tempr4;
	}
	MR_np_localcall_lab(set_tree234__fold4_10_0,
		set_tree234__fold4_10_0_i15);
MR_def_label(set_tree234__fold4_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold4_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__set_tree234__fold4_10_0_i16);
MR_def_label(set_tree234__fold4_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_r11 = MR_tempr4;
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(set_tree234__fold4_10_0_i34);
	}
MR_def_label(set_tree234__fold4_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_r7 = MR_tfield(1, MR_r7, 1);
	}
	MR_np_localcall_lab(set_tree234__fold4_10_0,
		set_tree234__fold4_10_0_i18);
MR_def_label(set_tree234__fold4_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold4_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__set_tree234__fold4_10_0_i19);
MR_def_label(set_tree234__fold4_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_r11 = MR_tempr4;
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(set_tree234__fold4_10_0_i34);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module82)
	MR_init_entry1(set_tree234__fold4_10_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold4_10_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold4'/10 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold4_10_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold4_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module83)
	MR_init_entry1(set_tree234__fold4_10_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold4_10_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold4'/10 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold4_10_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold4_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module84)
	MR_init_entry1(set_tree234__fold4_10_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold4_10_3);
	MR_init_label10(set_tree234__fold4_10_3,100,3,5,7,9,11,13,15,4,20)
	MR_init_label7(set_tree234__fold4_10_3,22,24,26,19,30,32,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold4'/10 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold4_10_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(set_tree234__fold4_10_3,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(set_tree234__fold4_10_3_i3);
	}
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(13);
MR_def_label(set_tree234__fold4_10_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,3)) {
		MR_GOTO_LAB(set_tree234__fold4_10_3_i4);
	}
	MR_sv(1) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_r7 = MR_tfield(3, MR_r7, 3);
	}
	MR_np_localcall_lab(set_tree234__fold4_10_3,
		set_tree234__fold4_10_3_i5);
MR_def_label(set_tree234__fold4_10_3,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold4_10_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold4_10_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__set_tree234__fold4_10_3_i7);
MR_def_label(set_tree234__fold4_10_3,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold4_10_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_r11 = MR_tempr4;
	}
	MR_np_localcall_lab(set_tree234__fold4_10_3,
		set_tree234__fold4_10_3_i9);
MR_def_label(set_tree234__fold4_10_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold4_10_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold4_10_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__set_tree234__fold4_10_3_i11);
MR_def_label(set_tree234__fold4_10_3,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold4_10_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_r11 = MR_tempr4;
	}
	MR_np_localcall_lab(set_tree234__fold4_10_3,
		set_tree234__fold4_10_3_i13);
MR_def_label(set_tree234__fold4_10_3,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold4_10_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold4_10_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__set_tree234__fold4_10_3_i15);
MR_def_label(set_tree234__fold4_10_3,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold4_10_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_r11 = MR_tempr4;
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(set_tree234__fold4_10_3_i100);
	}
MR_def_label(set_tree234__fold4_10_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,2)) {
		MR_GOTO_LAB(set_tree234__fold4_10_3_i19);
	}
	MR_sv(1) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_r7 = MR_tfield(2, MR_r7, 2);
	}
	MR_np_localcall_lab(set_tree234__fold4_10_3,
		set_tree234__fold4_10_3_i20);
MR_def_label(set_tree234__fold4_10_3,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold4_10_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold4_10_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__set_tree234__fold4_10_3_i22);
MR_def_label(set_tree234__fold4_10_3,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold4_10_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_r11 = MR_tempr4;
	}
	MR_np_localcall_lab(set_tree234__fold4_10_3,
		set_tree234__fold4_10_3_i24);
MR_def_label(set_tree234__fold4_10_3,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold4_10_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold4_10_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__set_tree234__fold4_10_3_i26);
MR_def_label(set_tree234__fold4_10_3,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold4_10_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_r11 = MR_tempr4;
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(set_tree234__fold4_10_3_i100);
	}
MR_def_label(set_tree234__fold4_10_3,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_r7 = MR_tfield(1, MR_r7, 1);
	}
	MR_np_localcall_lab(set_tree234__fold4_10_3,
		set_tree234__fold4_10_3_i30);
MR_def_label(set_tree234__fold4_10_3,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold4_10_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold4_10_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__set_tree234__fold4_10_3_i32);
MR_def_label(set_tree234__fold4_10_3,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold4_10_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_r11 = MR_tempr4;
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(set_tree234__fold4_10_3_i100);
	}
MR_def_label(set_tree234__fold4_10_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module85)
	MR_init_entry1(set_tree234__fold4_10_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold4_10_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold4'/10 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold4_10_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold4_10_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module86)
	MR_init_entry1(set_tree234__fold4_10_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold4_10_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold4'/10 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold4_10_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold4_10_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_compact);

MR_BEGIN_MODULE(set_tree234_module87)
	MR_init_entry1(set_tree234__fold5_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold5_12_0);
	MR_init_label10(set_tree234__fold5_12_0,34,3,5,6,7,8,9,10,4,13)
	MR_init_label6(set_tree234__fold5_12_0,14,15,16,12,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold5'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold5_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
MR_def_label(set_tree234__fold5_12_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(set_tree234__fold5_12_0_i3);
	}
	MR_r1 = MR_r9;
	MR_r2 = MR_r10;
	MR_r3 = MR_r11;
	MR_r4 = MR_r12;
	MR_r5 = MR_r13;
	MR_decr_sp_and_return(14);
MR_def_label(set_tree234__fold5_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r8,3)) {
		MR_GOTO_LAB(set_tree234__fold5_12_0_i4);
	}
	MR_sv(2) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_r8 = MR_tfield(3, MR_r8, 3);
	}
	MR_np_localcall_lab(set_tree234__fold5_12_0,
		set_tree234__fold5_12_0_i5);
MR_def_label(set_tree234__fold5_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_r2;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold5_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold5_12_0_i6);
MR_def_label(set_tree234__fold5_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_r12 = MR_tempr4;
	MR_r13 = MR_tempr5;
	}
	MR_np_localcall_lab(set_tree234__fold5_12_0,
		set_tree234__fold5_12_0_i7);
MR_def_label(set_tree234__fold5_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_r2;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold5_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold5_12_0_i8);
MR_def_label(set_tree234__fold5_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_r12 = MR_tempr4;
	MR_r13 = MR_tempr5;
	}
	MR_np_localcall_lab(set_tree234__fold5_12_0,
		set_tree234__fold5_12_0_i9);
MR_def_label(set_tree234__fold5_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_r2;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold5_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold5_12_0_i10);
MR_def_label(set_tree234__fold5_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_r12 = MR_tempr4;
	MR_r13 = MR_tempr5;
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(set_tree234__fold5_12_0_i34);
	}
MR_def_label(set_tree234__fold5_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r8,2)) {
		MR_GOTO_LAB(set_tree234__fold5_12_0_i12);
	}
	MR_sv(2) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(1) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_r8 = MR_tfield(2, MR_r8, 2);
	}
	MR_np_localcall_lab(set_tree234__fold5_12_0,
		set_tree234__fold5_12_0_i13);
MR_def_label(set_tree234__fold5_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_r2;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold5_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold5_12_0_i14);
MR_def_label(set_tree234__fold5_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_r12 = MR_tempr4;
	MR_r13 = MR_tempr5;
	}
	MR_np_localcall_lab(set_tree234__fold5_12_0,
		set_tree234__fold5_12_0_i15);
MR_def_label(set_tree234__fold5_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_r2;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold5_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold5_12_0_i16);
MR_def_label(set_tree234__fold5_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_r12 = MR_tempr4;
	MR_r13 = MR_tempr5;
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(set_tree234__fold5_12_0_i34);
	}
MR_def_label(set_tree234__fold5_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_r8 = MR_tfield(1, MR_r8, 1);
	}
	MR_np_localcall_lab(set_tree234__fold5_12_0,
		set_tree234__fold5_12_0_i18);
MR_def_label(set_tree234__fold5_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_r2;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold5_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold5_12_0_i19);
MR_def_label(set_tree234__fold5_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_r12 = MR_tempr4;
	MR_r13 = MR_tempr5;
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(set_tree234__fold5_12_0_i34);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module88)
	MR_init_entry1(set_tree234__fold5_12_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold5_12_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold5'/12 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold5_12_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold5_12_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module89)
	MR_init_entry1(set_tree234__fold5_12_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold5_12_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold5'/12 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold5_12_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold5_12_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module90)
	MR_init_entry1(set_tree234__fold5_12_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold5_12_3);
	MR_init_label10(set_tree234__fold5_12_3,100,3,5,7,9,11,13,15,4,20)
	MR_init_label7(set_tree234__fold5_12_3,22,24,26,19,30,32,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold5'/12 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold5_12_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
MR_def_label(set_tree234__fold5_12_3,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(set_tree234__fold5_12_3_i3);
	}
	MR_r2 = MR_r9;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(14);
MR_def_label(set_tree234__fold5_12_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r8,3)) {
		MR_GOTO_LAB(set_tree234__fold5_12_3_i4);
	}
	MR_sv(2) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_r8 = MR_tfield(3, MR_r8, 3);
	}
	MR_np_localcall_lab(set_tree234__fold5_12_3,
		set_tree234__fold5_12_3_i5);
MR_def_label(set_tree234__fold5_12_3,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold5_12_3_i1);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_r2;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold5_12_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold5_12_3_i7);
MR_def_label(set_tree234__fold5_12_3,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold5_12_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_r12 = MR_tempr4;
	MR_r13 = MR_tempr5;
	}
	MR_np_localcall_lab(set_tree234__fold5_12_3,
		set_tree234__fold5_12_3_i9);
MR_def_label(set_tree234__fold5_12_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold5_12_3_i1);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_r2;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold5_12_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold5_12_3_i11);
MR_def_label(set_tree234__fold5_12_3,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold5_12_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_r12 = MR_tempr4;
	MR_r13 = MR_tempr5;
	}
	MR_np_localcall_lab(set_tree234__fold5_12_3,
		set_tree234__fold5_12_3_i13);
MR_def_label(set_tree234__fold5_12_3,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold5_12_3_i1);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_r2;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold5_12_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold5_12_3_i15);
MR_def_label(set_tree234__fold5_12_3,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold5_12_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_r12 = MR_tempr4;
	MR_r13 = MR_tempr5;
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(set_tree234__fold5_12_3_i100);
	}
MR_def_label(set_tree234__fold5_12_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r8,2)) {
		MR_GOTO_LAB(set_tree234__fold5_12_3_i19);
	}
	MR_sv(2) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(1) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_r8 = MR_tfield(2, MR_r8, 2);
	}
	MR_np_localcall_lab(set_tree234__fold5_12_3,
		set_tree234__fold5_12_3_i20);
MR_def_label(set_tree234__fold5_12_3,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold5_12_3_i1);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_r2;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold5_12_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold5_12_3_i22);
MR_def_label(set_tree234__fold5_12_3,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold5_12_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_r12 = MR_tempr4;
	MR_r13 = MR_tempr5;
	}
	MR_np_localcall_lab(set_tree234__fold5_12_3,
		set_tree234__fold5_12_3_i24);
MR_def_label(set_tree234__fold5_12_3,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold5_12_3_i1);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_r2;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold5_12_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold5_12_3_i26);
MR_def_label(set_tree234__fold5_12_3,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold5_12_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_r12 = MR_tempr4;
	MR_r13 = MR_tempr5;
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(set_tree234__fold5_12_3_i100);
	}
MR_def_label(set_tree234__fold5_12_3,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_r8 = MR_tfield(1, MR_r8, 1);
	}
	MR_np_localcall_lab(set_tree234__fold5_12_3,
		set_tree234__fold5_12_3_i30);
MR_def_label(set_tree234__fold5_12_3,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold5_12_3_i1);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_r2;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold5_12_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold5_12_3_i32);
MR_def_label(set_tree234__fold5_12_3,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold5_12_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_r12 = MR_tempr4;
	MR_r13 = MR_tempr5;
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(set_tree234__fold5_12_3_i100);
	}
MR_def_label(set_tree234__fold5_12_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module91)
	MR_init_entry1(set_tree234__fold5_12_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold5_12_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold5'/12 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold5_12_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold5_12_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module92)
	MR_init_entry1(set_tree234__fold5_12_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold5_12_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold5'/12 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold5_12_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold5_12_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module93)
	MR_init_entry1(set_tree234__fold6_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold6_14_0);
	MR_init_label10(set_tree234__fold6_14_0,34,3,5,6,7,8,9,10,4,13)
	MR_init_label6(set_tree234__fold6_14_0,14,15,16,12,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold6'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold6_14_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
MR_def_label(set_tree234__fold6_14_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(set_tree234__fold6_14_0_i3);
	}
	MR_r1 = MR_r10;
	MR_r2 = MR_r11;
	MR_r3 = MR_r12;
	MR_r4 = MR_r13;
	MR_r5 = MR_r14;
	MR_r6 = MR_r15;
	MR_decr_sp_and_return(15);
MR_def_label(set_tree234__fold6_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r9,3)) {
		MR_GOTO_LAB(set_tree234__fold6_14_0_i4);
	}
	MR_sv(1) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_sv(14) = MR_r7;
	MR_r9 = MR_tfield(3, MR_r9, 3);
	}
	MR_np_localcall_lab(set_tree234__fold6_14_0,
		set_tree234__fold6_14_0_i5);
MR_def_label(set_tree234__fold6_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_r2;
	MR_tempr5 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_r2 = (MR_Integer) 7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold6_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold6_14_0_i6);
MR_def_label(set_tree234__fold6_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_tempr6 = MR_r6;
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(5);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_r14 = MR_tempr5;
	MR_r15 = MR_tempr6;
	}
	MR_np_localcall_lab(set_tree234__fold6_14_0,
		set_tree234__fold6_14_0_i7);
MR_def_label(set_tree234__fold6_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_r2;
	MR_tempr5 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_r2 = (MR_Integer) 7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold6_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold6_14_0_i8);
MR_def_label(set_tree234__fold6_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_tempr6 = MR_r6;
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_r14 = MR_tempr5;
	MR_r15 = MR_tempr6;
	}
	MR_np_localcall_lab(set_tree234__fold6_14_0,
		set_tree234__fold6_14_0_i9);
MR_def_label(set_tree234__fold6_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_r2;
	MR_tempr5 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_r2 = (MR_Integer) 7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold6_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold6_14_0_i10);
MR_def_label(set_tree234__fold6_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_tempr6 = MR_r6;
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_r14 = MR_tempr5;
	MR_r15 = MR_tempr6;
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(set_tree234__fold6_14_0_i34);
	}
MR_def_label(set_tree234__fold6_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r9,2)) {
		MR_GOTO_LAB(set_tree234__fold6_14_0_i12);
	}
	MR_sv(1) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_sv(14) = MR_r7;
	MR_r9 = MR_tfield(2, MR_r9, 2);
	}
	MR_np_localcall_lab(set_tree234__fold6_14_0,
		set_tree234__fold6_14_0_i13);
MR_def_label(set_tree234__fold6_14_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_r2;
	MR_tempr5 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_r2 = (MR_Integer) 7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold6_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold6_14_0_i14);
MR_def_label(set_tree234__fold6_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_tempr6 = MR_r6;
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_r14 = MR_tempr5;
	MR_r15 = MR_tempr6;
	}
	MR_np_localcall_lab(set_tree234__fold6_14_0,
		set_tree234__fold6_14_0_i15);
MR_def_label(set_tree234__fold6_14_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_r2;
	MR_tempr5 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_r2 = (MR_Integer) 7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold6_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold6_14_0_i16);
MR_def_label(set_tree234__fold6_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_tempr6 = MR_r6;
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(5);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_r14 = MR_tempr5;
	MR_r15 = MR_tempr6;
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(set_tree234__fold6_14_0_i34);
	}
MR_def_label(set_tree234__fold6_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_sv(14) = MR_r7;
	MR_r9 = MR_tfield(1, MR_r9, 1);
	}
	MR_np_localcall_lab(set_tree234__fold6_14_0,
		set_tree234__fold6_14_0_i18);
MR_def_label(set_tree234__fold6_14_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_r2;
	MR_tempr5 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_r2 = (MR_Integer) 7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold6_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold6_14_0_i19);
MR_def_label(set_tree234__fold6_14_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_tempr6 = MR_r6;
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_r14 = MR_tempr5;
	MR_r15 = MR_tempr6;
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(set_tree234__fold6_14_0_i34);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module94)
	MR_init_entry1(set_tree234__fold6_14_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold6_14_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold6'/14 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold6_14_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold6_14_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module95)
	MR_init_entry1(set_tree234__fold6_14_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold6_14_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold6'/14 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold6_14_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold6_14_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module96)
	MR_init_entry1(set_tree234__fold6_14_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold6_14_3);
	MR_init_label10(set_tree234__fold6_14_3,100,3,5,7,9,11,13,15,4,20)
	MR_init_label7(set_tree234__fold6_14_3,22,24,26,19,30,32,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold6'/14 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold6_14_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
MR_def_label(set_tree234__fold6_14_3,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(set_tree234__fold6_14_3_i3);
	}
	MR_r2 = MR_r10;
	MR_r3 = MR_r11;
	MR_r4 = MR_r12;
	MR_r5 = MR_r13;
	MR_r6 = MR_r14;
	MR_r7 = MR_r15;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(15);
MR_def_label(set_tree234__fold6_14_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r9,3)) {
		MR_GOTO_LAB(set_tree234__fold6_14_3_i4);
	}
	MR_sv(1) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_sv(14) = MR_r7;
	MR_r9 = MR_tfield(3, MR_r9, 3);
	}
	MR_np_localcall_lab(set_tree234__fold6_14_3,
		set_tree234__fold6_14_3_i5);
MR_def_label(set_tree234__fold6_14_3,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold6_14_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_r2;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_r2 = (MR_Integer) 7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold6_14_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold6_14_3_i7);
MR_def_label(set_tree234__fold6_14_3,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold6_14_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(13);
	MR_tempr6 = MR_r7;
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(5);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_r14 = MR_tempr5;
	MR_r15 = MR_tempr6;
	}
	MR_np_localcall_lab(set_tree234__fold6_14_3,
		set_tree234__fold6_14_3_i9);
MR_def_label(set_tree234__fold6_14_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold6_14_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_r2;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_r2 = (MR_Integer) 7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold6_14_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold6_14_3_i11);
MR_def_label(set_tree234__fold6_14_3,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold6_14_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(13);
	MR_tempr6 = MR_r7;
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_r14 = MR_tempr5;
	MR_r15 = MR_tempr6;
	}
	MR_np_localcall_lab(set_tree234__fold6_14_3,
		set_tree234__fold6_14_3_i13);
MR_def_label(set_tree234__fold6_14_3,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold6_14_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_r2;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_r2 = (MR_Integer) 7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold6_14_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold6_14_3_i15);
MR_def_label(set_tree234__fold6_14_3,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold6_14_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(13);
	MR_tempr6 = MR_r7;
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_r14 = MR_tempr5;
	MR_r15 = MR_tempr6;
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(set_tree234__fold6_14_3_i100);
	}
MR_def_label(set_tree234__fold6_14_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r9,2)) {
		MR_GOTO_LAB(set_tree234__fold6_14_3_i19);
	}
	MR_sv(1) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_sv(14) = MR_r7;
	MR_r9 = MR_tfield(2, MR_r9, 2);
	}
	MR_np_localcall_lab(set_tree234__fold6_14_3,
		set_tree234__fold6_14_3_i20);
MR_def_label(set_tree234__fold6_14_3,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold6_14_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_r2;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_r2 = (MR_Integer) 7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold6_14_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold6_14_3_i22);
MR_def_label(set_tree234__fold6_14_3,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold6_14_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(13);
	MR_tempr6 = MR_r7;
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_r14 = MR_tempr5;
	MR_r15 = MR_tempr6;
	}
	MR_np_localcall_lab(set_tree234__fold6_14_3,
		set_tree234__fold6_14_3_i24);
MR_def_label(set_tree234__fold6_14_3,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold6_14_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_r2;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_r2 = (MR_Integer) 7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold6_14_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold6_14_3_i26);
MR_def_label(set_tree234__fold6_14_3,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold6_14_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(13);
	MR_tempr6 = MR_r7;
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(5);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_r14 = MR_tempr5;
	MR_r15 = MR_tempr6;
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(set_tree234__fold6_14_3_i100);
	}
MR_def_label(set_tree234__fold6_14_3,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r9;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_sv(14) = MR_r7;
	MR_r9 = MR_tfield(1, MR_r9, 1);
	}
	MR_np_localcall_lab(set_tree234__fold6_14_3,
		set_tree234__fold6_14_3_i30);
MR_def_label(set_tree234__fold6_14_3,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold6_14_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_r2;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr3;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr5;
	MR_r2 = (MR_Integer) 7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold6_14_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__set_tree234__fold6_14_3_i32);
MR_def_label(set_tree234__fold6_14_3,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__fold6_14_3_i1);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(11);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(12);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(13);
	MR_tempr6 = MR_r7;
	MR_r7 = MR_sv(14);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_r14 = MR_tempr5;
	MR_r15 = MR_tempr6;
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(set_tree234__fold6_14_3_i100);
	}
MR_def_label(set_tree234__fold6_14_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module97)
	MR_init_entry1(set_tree234__fold6_14_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold6_14_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold6'/14 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold6_14_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold6_14_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module98)
	MR_init_entry1(set_tree234__fold6_14_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__fold6_14_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fold6'/14 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold6_14_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__fold6_14_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module99)
	MR_init_entry1(set_tree234__divide_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__divide_2_6_0);
	MR_init_label10(set_tree234__divide_2_6_0,94,3,5,8,10,6,11,12,13,16)
	MR_init_label10(set_tree234__divide_2_6_0,18,14,19,20,21,24,26,22,27,4)
	MR_init_label10(set_tree234__divide_2_6_0,31,34,36,32,37,38,39,42,44,40)
	MR_init_label7(set_tree234__divide_2_6_0,45,30,48,51,53,49,54)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'divide_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__divide_2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(set_tree234__divide_2_6_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(set_tree234__divide_2_6_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(11);
MR_def_label(set_tree234__divide_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(set_tree234__divide_2_6_0_i4);
	}
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(10) = MR_r1;
	MR_r3 = MR_tfield(3, MR_r3, 3);
	}
	MR_np_localcall_lab(set_tree234__divide_2_6_0,
		set_tree234__divide_2_6_0_i5);
MR_def_label(set_tree234__divide_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__divide_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__divide_2_6_0_i8);
MR_def_label(set_tree234__divide_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__divide_2_6_0_i6);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i10);
MR_def_label(set_tree234__divide_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(9);
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(set_tree234__divide_2_6_0_i12);
MR_def_label(set_tree234__divide_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r1 = MR_sv(10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i11);
MR_def_label(set_tree234__divide_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(10);
MR_def_label(set_tree234__divide_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(10) = MR_r1;
	MR_np_localcall_lab(set_tree234__divide_2_6_0,
		set_tree234__divide_2_6_0_i13);
MR_def_label(set_tree234__divide_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__divide_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__divide_2_6_0_i16);
MR_def_label(set_tree234__divide_2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__divide_2_6_0_i14);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i18);
MR_def_label(set_tree234__divide_2_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(7);
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(set_tree234__divide_2_6_0_i20);
MR_def_label(set_tree234__divide_2_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r1 = MR_sv(10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i19);
MR_def_label(set_tree234__divide_2_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(10);
MR_def_label(set_tree234__divide_2_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(10) = MR_r1;
	MR_np_localcall_lab(set_tree234__divide_2_6_0,
		set_tree234__divide_2_6_0_i21);
MR_def_label(set_tree234__divide_2_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__divide_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__divide_2_6_0_i24);
MR_def_label(set_tree234__divide_2_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__divide_2_6_0_i22);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i26);
MR_def_label(set_tree234__divide_2_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(5);
	MR_r1 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(set_tree234__divide_2_6_0_i94);
MR_def_label(set_tree234__divide_2_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i27);
MR_def_label(set_tree234__divide_2_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(set_tree234__divide_2_6_0_i94);
MR_def_label(set_tree234__divide_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(set_tree234__divide_2_6_0_i30);
	}
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(7) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(10) = MR_r1;
	MR_r3 = MR_tfield(2, MR_r3, 2);
	}
	MR_np_localcall_lab(set_tree234__divide_2_6_0,
		set_tree234__divide_2_6_0_i31);
MR_def_label(set_tree234__divide_2_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__divide_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__divide_2_6_0_i34);
MR_def_label(set_tree234__divide_2_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__divide_2_6_0_i32);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i36);
MR_def_label(set_tree234__divide_2_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(3);
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(set_tree234__divide_2_6_0_i38);
MR_def_label(set_tree234__divide_2_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i37);
MR_def_label(set_tree234__divide_2_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(10);
MR_def_label(set_tree234__divide_2_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(10) = MR_r1;
	MR_np_localcall_lab(set_tree234__divide_2_6_0,
		set_tree234__divide_2_6_0_i39);
MR_def_label(set_tree234__divide_2_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__divide_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__divide_2_6_0_i42);
MR_def_label(set_tree234__divide_2_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__divide_2_6_0_i40);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i44);
MR_def_label(set_tree234__divide_2_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(6);
	MR_r1 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(set_tree234__divide_2_6_0_i94);
MR_def_label(set_tree234__divide_2_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i45);
MR_def_label(set_tree234__divide_2_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(set_tree234__divide_2_6_0_i94);
MR_def_label(set_tree234__divide_2_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(10) = MR_r1;
	MR_r3 = MR_tfield(1, MR_r3, 1);
	}
	MR_np_localcall_lab(set_tree234__divide_2_6_0,
		set_tree234__divide_2_6_0_i48);
MR_def_label(set_tree234__divide_2_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__divide_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__divide_2_6_0_i51);
MR_def_label(set_tree234__divide_2_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__divide_2_6_0_i49);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i53);
MR_def_label(set_tree234__divide_2_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(7);
	MR_r1 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(set_tree234__divide_2_6_0_i94);
MR_def_label(set_tree234__divide_2_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r1 = MR_sv(10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i54);
MR_def_label(set_tree234__divide_2_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(set_tree234__divide_2_6_0_i94);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module100)
	MR_init_entry1(set_tree234__divide_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__divide_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'divide'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__divide_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(set_tree234__divide_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module101)
	MR_init_entry1(set_tree234__filter_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__filter_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__filter_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(set_tree234__divide_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module102)
	MR_init_entry1(set_tree234__filter_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__filter_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__filter_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(set_tree234__divide_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module103)
	MR_init_entry1(set_tree234__divide_by_set_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__set_tree234__divide_by_set_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'divide_by_set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__divide_by_set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(set_tree234__contains_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(set_tree234__divide_2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(set_tree234_module104)
	MR_init_entry1(__Unify___set_tree234__set_tree234_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___set_tree234__set_tree234_1_0);
	MR_init_label10(__Unify___set_tree234__set_tree234_1_0,122,5,8,10,12,14,16,18,6,24)
	MR_init_label8(__Unify___set_tree234__set_tree234_1_0,26,28,30,60,22,35,37,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___set_tree234__set_tree234_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
MR_def_label(__Unify___set_tree234__set_tree234_1_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i60);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(13) = MR_r1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp_and_return(14);
	}
MR_def_label(__Unify___set_tree234__set_tree234_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(9) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(11) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(12) = MR_tfield(3, MR_tempr2, 6);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tfield(3, MR_tempr1, 0);
	MR_r3 = MR_tfield(3, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___set_tree234__set_tree234_1_0_i8);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___set_tree234__set_tree234_1_0_i10);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___set_tree234__set_tree234_1_0_i12);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_np_localcall_lab(__Unify___set_tree234__set_tree234_1_0,
		__Unify___set_tree234__set_tree234_1_0_i14);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_np_localcall_lab(__Unify___set_tree234__set_tree234_1_0,
		__Unify___set_tree234__set_tree234_1_0_i16);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_localcall_lab(__Unify___set_tree234__set_tree234_1_0,
		__Unify___set_tree234__set_tree234_1_0_i18);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(12);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i122);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i22);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(2, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(2, MR_tempr2, 4);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___set_tree234__set_tree234_1_0_i24);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___set_tree234__set_tree234_1_0_i26);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_localcall_lab(__Unify___set_tree234__set_tree234_1_0,
		__Unify___set_tree234__set_tree234_1_0_i28);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_localcall_lab(__Unify___set_tree234__set_tree234_1_0,
		__Unify___set_tree234__set_tree234_1_0_i30);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i122);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(14);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 2);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___set_tree234__set_tree234_1_0_i35);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(__Unify___set_tree234__set_tree234_1_0,
		__Unify___set_tree234__set_tree234_1_0_i37);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i122);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module105)
	MR_init_entry1(__Compare___set_tree234__set_tree234_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___set_tree234__set_tree234_1_0);
	MR_init_label10(__Compare___set_tree234__set_tree234_1_0,218,118,7,8,5,12,15,19,23,27)
	MR_init_label10(__Compare___set_tree234__set_tree234_1_0,31,35,13,10,48,49,52,56,60,64)
	MR_init_label9(__Compare___set_tree234__set_tree234_1_0,46,111,73,74,113,75,77,81,232)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___set_tree234__set_tree234_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
MR_def_label(__Compare___set_tree234__set_tree234_1_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i118);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i7);
	}
MR_def_label(__Compare___set_tree234__set_tree234_1_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(14);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(14);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i113);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(14);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i10);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i12);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(14);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(9) = MR_tfield(3, MR_tempr5, 1);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 2);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(13) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(12) = MR_tfield(3, MR_tempr5, 6);
	MR_tempr6 = MR_sv(2);
	MR_sv(11) = MR_tfield(3, MR_tempr6, 6);
	MR_sv(10) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(3, MR_tempr3, 0);
	MR_r3 = MR_tfield(3, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___set_tree234__set_tree234_1_0_i15);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i232);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___set_tree234__set_tree234_1_0_i19);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i232);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___set_tree234__set_tree234_1_0_i23);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i232);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(__Compare___set_tree234__set_tree234_1_0,
		__Compare___set_tree234__set_tree234_1_0_i27);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i232);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(__Compare___set_tree234__set_tree234_1_0,
		__Compare___set_tree234__set_tree234_1_0_i31);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i232);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(10);
	MR_np_localcall_lab(__Compare___set_tree234__set_tree234_1_0,
		__Compare___set_tree234__set_tree234_1_0_i35);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i232);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(11);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i218);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i111);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(14);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i46);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i48);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(14);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i49);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(14);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i111);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(13) = MR_tfield(2, MR_tempr5, 1);
	MR_sv(12) = MR_tfield(2, MR_tempr5, 2);
	MR_sv(11) = MR_tfield(2, MR_tempr5, 3);
	MR_sv(10) = MR_tfield(2, MR_tempr5, 4);
	MR_tempr6 = MR_sv(2);
	MR_sv(3) = MR_tfield(2, MR_tempr6, 4);
	MR_sv(4) = MR_tfield(2, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(2, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(2, MR_tempr3, 0);
	MR_r3 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___set_tree234__set_tree234_1_0_i52);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i232);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___set_tree234__set_tree234_1_0_i56);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i232);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(__Compare___set_tree234__set_tree234_1_0,
		__Compare___set_tree234__set_tree234_1_0_i60);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i232);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(__Compare___set_tree234__set_tree234_1_0,
		__Compare___set_tree234__set_tree234_1_0_i64);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i232);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i218);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i73);
	}
MR_def_label(__Compare___set_tree234__set_tree234_1_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(14);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i74);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(14);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i75);
	}
MR_def_label(__Compare___set_tree234__set_tree234_1_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(14);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(3) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___set_tree234__set_tree234_1_0_i77);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i232);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_localcall_lab(__Compare___set_tree234__set_tree234_1_0,
		__Compare___set_tree234__set_tree234_1_0_i81);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i232);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i218);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module106)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__difference__[T = var(V_2)]_0_1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(set_tree234__difference_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module107)
	MR_init_entry1(fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__difference__[T = var(V_2)]_0_1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(set_tree234__difference_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module108)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__intersect__[T = var(V_2)]_0_1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(set_tree234__intersect_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module109)
	MR_init_entry1(fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__intersect__[T = var(V_2)]_0_1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(set_tree234__intersect_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module110)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__union__[T = var(V_2)]_0_1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module111)
	MR_init_entry1(fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__union__[T = var(V_2)]_0_1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module112)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__insert_list__[T = var(V_2)]_0_1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module113)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__insert__[T = var(V_2)]_0_1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module114)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_init_label1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred__contains__[T = var(V_2)]_0_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0_i2);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 1 == (MR_Integer) MR_r1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module115)
	MR_init_entry1(fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__sorted_list_to_set__[T = var(V_2)]_0_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(set_tree234__list_to_set_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(set_tree234_module116)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0);
	MR_init_label10(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,4,5,6,8,11,14,2,19,20,22)
	MR_init_label6(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,25,17,30,32,28,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__all_members__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred set_tree234.UnusedArgs__pred__all_members__[1]_0/2-0", 6,
		MR_ENTRY(MR_do_fail));
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i2);
	}
	MR_fv(6) = MR_tfield(3, MR_r1, 6);
	MR_fv(5) = MR_tfield(3, MR_r1, 5);
	MR_fv(4) = MR_tfield(3, MR_r1, 4);
	MR_fv(3) = MR_tfield(3, MR_r1, 3);
	MR_fv(2) = MR_tfield(3, MR_r1, 2);
	MR_fv(1) = MR_tfield(3, MR_r1, 1);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i4);
	MR_r1 = MR_tfield(3, MR_r1, 0);
	MR_succeed();
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i5);
	MR_r1 = MR_fv(1);
	MR_succeed();
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i6);
	MR_r1 = MR_fv(2);
	MR_succeed();
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i8);
	MR_r1 = MR_fv(3);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i1);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i11);
	MR_r1 = MR_fv(4);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i1);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i14);
	MR_r1 = MR_fv(5);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i1);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(6);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_localtailcall(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i17);
	}
	MR_fv(4) = MR_tfield(2, MR_r1, 4);
	MR_fv(3) = MR_tfield(2, MR_r1, 3);
	MR_fv(2) = MR_tfield(2, MR_r1, 2);
	MR_fv(1) = MR_tfield(2, MR_r1, 1);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i19);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_succeed();
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i20);
	MR_r1 = MR_fv(1);
	MR_succeed();
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i22);
	MR_r1 = MR_fv(2);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i1);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i25);
	MR_r1 = MR_fv(3);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i1);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(4);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_localtailcall(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i28);
	}
	MR_fv(2) = MR_tfield(1, MR_r1, 2);
	MR_fv(1) = MR_tfield(1, MR_r1, 1);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i30);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_succeed();
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i32);
	MR_r1 = MR_fv(1);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i1);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(2);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_localtailcall(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_fail));
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module117)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_102_111_117_114_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_102_111_117_114_95_95_91_49_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__split_four__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_102_111_117_114_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_tfield(3, MR_r1, 0);
	MR_tfield(1, MR_r2, 1) = MR_tfield(3, MR_r1, 3);
	MR_tfield(1, MR_r2, 2) = MR_tfield(3, MR_r1, 4);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r1, 2);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(3, MR_r1, 5);
	MR_tfield(1, MR_tempr1, 2) = MR_tfield(3, MR_r1, 6);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module118)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0);
	MR_init_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0,3,7,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__fix_2node_t0__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr3 = MR_r3;
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(3, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(3, MR_tempr3, 2);
	MR_tfield(2, MR_tempr1, 2) = MR_tfield(3, MR_tempr3, 4);
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(3, MR_tempr3, 5);
	MR_tfield(2, MR_tempr1, 4) = MR_tfield(3, MR_tempr3, 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(3, MR_tempr3, 3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_tfield(3, MR_tempr3, 0);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_tfield(1, MR_r1, 2) = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr3 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(2, MR_tempr3, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(2, MR_tempr3, 3);
	MR_tfield(1, MR_tempr1, 2) = MR_tfield(2, MR_tempr3, 4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(2, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_tfield(2, MR_tempr3, 0);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_tfield(1, MR_r1, 2) = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(2, MR_tempr1, 2) = MR_r2;
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(1, MR_tempr2, 1);
	MR_tfield(2, MR_tempr1, 4) = MR_tfield(1, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unbalanced 234 tree", 19);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module119)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0);
	MR_init_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0,3,7,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__fix_2node_t1__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(3, MR_r2, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(3, MR_r2, 1);
	MR_tfield(2, MR_tempr1, 2) = MR_tfield(3, MR_r2, 3);
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(3, MR_r2, 4);
	MR_tfield(2, MR_tempr1, 4) = MR_tfield(3, MR_r2, 5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(3, MR_r2, 6);
	MR_tfield(1, MR_tempr2, 2) = MR_r3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_tfield(3, MR_r2, 2);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_tfield(1, MR_r1, 2) = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(2, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(2, MR_r2, 2);
	MR_tfield(1, MR_tempr1, 2) = MR_tfield(2, MR_r2, 3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(2, MR_r2, 4);
	MR_tfield(1, MR_tempr2, 2) = MR_r3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_tfield(2, MR_r2, 1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_tfield(1, MR_r1, 2) = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = MR_tfield(1, MR_r2, 1);
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(1, MR_r2, 2);
	MR_tfield(2, MR_tempr1, 4) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unbalanced 234 tree", 19);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module120)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0);
	MR_init_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0,3,7,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__fix_3node_t0__[1]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,3)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr3 = MR_r4;
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(3, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(3, MR_tempr3, 2);
	MR_tfield(2, MR_tempr1, 2) = MR_tfield(3, MR_tempr3, 4);
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(3, MR_tempr3, 5);
	MR_tfield(2, MR_tempr1, 4) = MR_tfield(3, MR_tempr3, 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(3, MR_tempr3, 3);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_tfield(3, MR_tempr3, 0);
	MR_tfield(2, MR_r1, 1) = MR_r2;
	MR_tfield(2, MR_r1, 2) = MR_tempr2;
	MR_tfield(2, MR_r1, 3) = MR_tempr1;
	MR_tfield(2, MR_r1, 4) = MR_r5;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr3 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(2, MR_tempr3, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(2, MR_tempr3, 3);
	MR_tfield(1, MR_tempr1, 2) = MR_tfield(2, MR_tempr3, 4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(2, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_tfield(2, MR_tempr3, 0);
	MR_tfield(2, MR_r1, 1) = MR_r2;
	MR_tfield(2, MR_r1, 2) = MR_tempr2;
	MR_tfield(2, MR_r1, 3) = MR_tempr1;
	MR_tfield(2, MR_r1, 4) = MR_r5;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r4;
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(2, MR_tempr1, 2) = MR_r3;
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(1, MR_tempr2, 1);
	MR_tfield(2, MR_tempr1, 4) = MR_tfield(1, MR_tempr2, 2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_tfield(1, MR_r1, 2) = MR_r5;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unbalanced 234 tree", 19);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module121)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0);
	MR_init_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0,3,7,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__fix_3node_t1__[1]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr3 = MR_r3;
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(3, MR_tempr3, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(3, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 2) = MR_tfield(3, MR_tempr3, 3);
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(3, MR_tempr3, 4);
	MR_tfield(2, MR_tempr1, 4) = MR_tfield(3, MR_tempr3, 5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(3, MR_tempr3, 6);
	MR_tfield(1, MR_tempr2, 2) = MR_r4;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_tfield(3, MR_tempr3, 2);
	MR_tfield(2, MR_r1, 1) = MR_r2;
	MR_tfield(2, MR_r1, 2) = MR_tempr1;
	MR_tfield(2, MR_r1, 3) = MR_tempr2;
	MR_tfield(2, MR_r1, 4) = MR_r5;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr3 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(2, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(2, MR_tempr3, 2);
	MR_tfield(1, MR_tempr1, 2) = MR_tfield(2, MR_tempr3, 3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(2, MR_tempr3, 4);
	MR_tfield(1, MR_tempr2, 2) = MR_r4;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_tfield(2, MR_tempr3, 1);
	MR_tfield(2, MR_r1, 1) = MR_r2;
	MR_tfield(2, MR_r1, 2) = MR_tempr1;
	MR_tfield(2, MR_r1, 3) = MR_tempr2;
	MR_tfield(2, MR_r1, 4) = MR_r5;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr2 = MR_r3;
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = MR_tfield(1, MR_tempr2, 1);
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(1, MR_tempr2, 2);
	MR_tfield(2, MR_tempr1, 4) = MR_r4;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_tfield(1, MR_r1, 2) = MR_r5;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unbalanced 234 tree", 19);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module122)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0);
	MR_init_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0,3,7,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__fix_3node_t2__[1]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,3)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr3 = MR_r4;
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(3, MR_tempr3, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(3, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 2) = MR_tfield(3, MR_tempr3, 3);
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(3, MR_tempr3, 4);
	MR_tfield(2, MR_tempr1, 4) = MR_tfield(3, MR_tempr3, 5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(3, MR_tempr3, 6);
	MR_tfield(1, MR_tempr2, 2) = MR_r5;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tfield(2, MR_r2, 1) = MR_tfield(3, MR_tempr3, 2);
	MR_tfield(2, MR_r2, 2) = MR_r3;
	MR_tfield(2, MR_r2, 3) = MR_tempr1;
	MR_tfield(2, MR_r2, 4) = MR_tempr2;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr3 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(2, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(2, MR_tempr3, 2);
	MR_tfield(1, MR_tempr1, 2) = MR_tfield(2, MR_tempr3, 3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(2, MR_tempr3, 4);
	MR_tfield(1, MR_tempr2, 2) = MR_r5;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tfield(2, MR_r2, 1) = MR_tfield(2, MR_tempr3, 1);
	MR_tfield(2, MR_r2, 2) = MR_r3;
	MR_tfield(2, MR_r2, 3) = MR_tempr1;
	MR_tfield(2, MR_r2, 4) = MR_tempr2;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr2 = MR_r4;
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_tfield(2, MR_tempr1, 2) = MR_tfield(1, MR_tempr2, 1);
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(1, MR_tempr2, 2);
	MR_tfield(2, MR_tempr1, 4) = MR_r5;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_r3;
	MR_tfield(1, MR_r2, 2) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unbalanced 234 tree", 19);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module123)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0);
	MR_init_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0,3,7,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__fix_4node_t0__[1]_0'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,3)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr3 = MR_r5;
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(3, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(3, MR_tempr3, 2);
	MR_tfield(2, MR_tempr1, 2) = MR_tfield(3, MR_tempr3, 4);
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(3, MR_tempr3, 5);
	MR_tfield(2, MR_tempr1, 4) = MR_tfield(3, MR_tempr3, 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_r4;
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(3, MR_tempr3, 3);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_tfield(3, MR_tempr3, 0);
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_tfield(3, MR_r1, 2) = MR_r3;
	MR_tfield(3, MR_r1, 3) = MR_tempr2;
	MR_tfield(3, MR_r1, 4) = MR_tempr1;
	MR_tfield(3, MR_r1, 5) = MR_r6;
	MR_tfield(3, MR_r1, 6) = MR_r7;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr3 = MR_r5;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(2, MR_tempr3, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(2, MR_tempr3, 3);
	MR_tfield(1, MR_tempr1, 2) = MR_tfield(2, MR_tempr3, 4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_r4;
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(2, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_tfield(2, MR_tempr3, 0);
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_tfield(3, MR_r1, 2) = MR_r3;
	MR_tfield(3, MR_r1, 3) = MR_tempr2;
	MR_tfield(3, MR_r1, 4) = MR_tempr1;
	MR_tfield(3, MR_r1, 5) = MR_r6;
	MR_tfield(3, MR_r1, 6) = MR_r7;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r5;
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(2, MR_tempr1, 2) = MR_r4;
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(1, MR_tempr2, 1);
	MR_tfield(2, MR_tempr1, 4) = MR_tfield(1, MR_tempr2, 2);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_tfield(2, MR_r1, 1) = MR_r3;
	MR_tfield(2, MR_r1, 2) = MR_tempr1;
	MR_tfield(2, MR_r1, 3) = MR_r6;
	MR_tfield(2, MR_r1, 4) = MR_r7;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unbalanced 234 tree", 19);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module124)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0);
	MR_init_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0,3,7,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__fix_4node_t1__[1]_0'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,3)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr3 = MR_r6;
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(3, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(3, MR_tempr3, 2);
	MR_tfield(2, MR_tempr1, 2) = MR_tfield(3, MR_tempr3, 4);
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(3, MR_tempr3, 5);
	MR_tfield(2, MR_tempr1, 4) = MR_tfield(3, MR_tempr3, 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_r5;
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(3, MR_tempr3, 3);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r2, 0) = MR_r1;
	MR_tfield(3, MR_r2, 1) = MR_tfield(3, MR_tempr3, 0);
	MR_tfield(3, MR_r2, 2) = MR_r3;
	MR_tfield(3, MR_r2, 3) = MR_r4;
	MR_tfield(3, MR_r2, 4) = MR_tempr2;
	MR_tfield(3, MR_r2, 5) = MR_tempr1;
	MR_tfield(3, MR_r2, 6) = MR_r7;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr3 = MR_r6;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(2, MR_tempr3, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(2, MR_tempr3, 3);
	MR_tfield(1, MR_tempr1, 2) = MR_tfield(2, MR_tempr3, 4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_r5;
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(2, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r2, 0) = MR_r1;
	MR_tfield(3, MR_r2, 1) = MR_tfield(2, MR_tempr3, 0);
	MR_tfield(3, MR_r2, 2) = MR_r3;
	MR_tfield(3, MR_r2, 3) = MR_r4;
	MR_tfield(3, MR_r2, 4) = MR_tempr2;
	MR_tfield(3, MR_r2, 5) = MR_tempr1;
	MR_tfield(3, MR_r2, 6) = MR_r7;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tempr2 = MR_r6;
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(2, MR_tempr1, 2) = MR_r5;
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(1, MR_tempr2, 1);
	MR_tfield(2, MR_tempr1, 4) = MR_tfield(1, MR_tempr2, 2);
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tfield(2, MR_r2, 1) = MR_r3;
	MR_tfield(2, MR_r2, 2) = MR_r4;
	MR_tfield(2, MR_r2, 3) = MR_tempr1;
	MR_tfield(2, MR_r2, 4) = MR_r7;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unbalanced 234 tree", 19);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module125)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0);
	MR_init_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0,3,7,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__fix_4node_t2__[1]_0'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,3)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr4 = MR_r7;
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(3, MR_tempr4, 1);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(3, MR_tempr4, 2);
	MR_tfield(2, MR_tempr1, 2) = MR_tfield(3, MR_tempr4, 4);
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(3, MR_tempr4, 5);
	MR_tfield(2, MR_tempr1, 4) = MR_tfield(3, MR_tempr4, 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_r6;
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(3, MR_tempr4, 3);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr3, 0) = MR_r1;
	MR_tfield(3, MR_tempr3, 1) = MR_r2;
	MR_tfield(3, MR_tempr3, 2) = MR_tfield(3, MR_tempr4, 0);
	MR_tfield(3, MR_tempr3, 3) = MR_r4;
	MR_tfield(3, MR_tempr3, 4) = MR_r5;
	MR_tfield(3, MR_tempr3, 5) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 6) = MR_tempr1;
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,2)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr4 = MR_r7;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(2, MR_tempr4, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(2, MR_tempr4, 3);
	MR_tfield(1, MR_tempr1, 2) = MR_tfield(2, MR_tempr4, 4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_r6;
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(2, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr3, 0) = MR_r1;
	MR_tfield(3, MR_tempr3, 1) = MR_r2;
	MR_tfield(3, MR_tempr3, 2) = MR_tfield(2, MR_tempr4, 0);
	MR_tfield(3, MR_tempr3, 3) = MR_r4;
	MR_tfield(3, MR_tempr3, 4) = MR_r5;
	MR_tfield(3, MR_tempr3, 5) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 6) = MR_tempr1;
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_tempr3 = MR_r7;
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(2, MR_tempr1, 2) = MR_r6;
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(1, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 4) = MR_tfield(1, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tfield(2, MR_tempr2, 1) = MR_r2;
	MR_tfield(2, MR_tempr2, 2) = MR_r4;
	MR_tfield(2, MR_tempr2, 3) = MR_r5;
	MR_tfield(2, MR_tempr2, 4) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unbalanced 234 tree", 19);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module126)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0);
	MR_init_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0,3,7,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__fix_4node_t3__[1]_0'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,3)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr4 = MR_r6;
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(3, MR_tempr4, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(3, MR_tempr4, 1);
	MR_tfield(2, MR_tempr1, 2) = MR_tfield(3, MR_tempr4, 3);
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(3, MR_tempr4, 4);
	MR_tfield(2, MR_tempr1, 4) = MR_tfield(3, MR_tempr4, 5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(3, MR_tempr4, 6);
	MR_tfield(1, MR_tempr2, 2) = MR_r7;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr3, 0) = MR_r1;
	MR_tfield(3, MR_tempr3, 1) = MR_r2;
	MR_tfield(3, MR_tempr3, 2) = MR_tfield(3, MR_tempr4, 2);
	MR_tfield(3, MR_tempr3, 3) = MR_r4;
	MR_tfield(3, MR_tempr3, 4) = MR_r5;
	MR_tfield(3, MR_tempr3, 5) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 6) = MR_tempr2;
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr4 = MR_r6;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(2, MR_tempr4, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(2, MR_tempr4, 2);
	MR_tfield(1, MR_tempr1, 2) = MR_tfield(2, MR_tempr4, 3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(2, MR_tempr4, 4);
	MR_tfield(1, MR_tempr2, 2) = MR_r7;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr3, 0) = MR_r1;
	MR_tfield(3, MR_tempr3, 1) = MR_r2;
	MR_tfield(3, MR_tempr3, 2) = MR_tfield(2, MR_tempr4, 1);
	MR_tfield(3, MR_tempr3, 3) = MR_r4;
	MR_tfield(3, MR_tempr3, 4) = MR_r5;
	MR_tfield(3, MR_tempr3, 5) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 6) = MR_tempr2;
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr3 = MR_r6;
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_r3;
	MR_tfield(2, MR_tempr1, 2) = MR_tfield(1, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 3) = MR_tfield(1, MR_tempr3, 2);
	MR_tfield(2, MR_tempr1, 4) = MR_r7;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tfield(2, MR_tempr2, 1) = MR_r2;
	MR_tfield(2, MR_tempr2, 2) = MR_r4;
	MR_tfield(2, MR_tempr2, 3) = MR_r5;
	MR_tfield(2, MR_tempr2, 4) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unbalanced 234 tree", 19);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module127)
	MR_init_entry1(fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module128)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0);
	MR_init_label10(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,4,5,7,9,12,13,15,17,2,21)
	MR_init_label10(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,22,24,28,32,33,34,36,39,38,41)
	MR_init_label10(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,43,31,46,45,48,26,51,52,54,58)
	MR_init_label10(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,62,63,64,66,69,68,71,73,61,76)
	MR_init_label10(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,75,78,56,82,86,87,88,90,93,92)
	MR_init_label7(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,95,97,85,100,99,102,104)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__TypeSpecOf__pred__insert3__[T = var(V_2)]_0_1__[1, 2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(2, MR_r2, 4);
	MR_sv(6) = MR_tfield(2, MR_r2, 3);
	MR_sv(4) = MR_tfield(2, MR_r2, 2);
	MR_sv(2) = MR_tfield(2, MR_r2, 1);
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i2);
	}
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i4);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(1))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i5);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 2;
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i9);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(5);
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_tfield(3, MR_r1, 2) = MR_sv(2);
	MR_tfield(3, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i104);
	}
	if (((MR_Integer) MR_sv(5) >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i12);
	}
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i15);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) != MR_sv(2))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i13);
	}
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i15);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i17);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(1);
	MR_tfield(3, MR_r1, 1) = MR_sv(5);
	MR_tfield(3, MR_r1, 2) = MR_sv(2);
	MR_tfield(3, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i104);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(1);
	MR_tfield(3, MR_r1, 1) = MR_sv(2);
	MR_tfield(3, MR_r1, 2) = MR_sv(5);
	MR_tfield(3, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i21);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i24);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(1))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i22);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i24);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 2;
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i26);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i28);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(1);
	MR_tfield(2, MR_r1, 1) = MR_sv(2);
	MR_tfield(2, MR_r1, 2) = MR_r2;
	MR_tfield(2, MR_r1, 3) = MR_sv(6);
	MR_tfield(2, MR_r1, 4) = MR_sv(3);
	MR_decr_sp_and_return(7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),3)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i31);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_102_111_117_114_95_95_91_49_93_95_48_4_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i32);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(5) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i33);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i36);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) != MR_r1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i34);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i36);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Integer) 2;
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i38);
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i39);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r2, 0) = MR_sv(5);
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	MR_tfield(3, MR_r2, 3) = MR_r1;
	MR_tfield(3, MR_r2, 4) = MR_sv(4);
	MR_tfield(3, MR_r2, 5) = MR_sv(6);
	MR_tfield(3, MR_r2, 6) = MR_sv(3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i41);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(5);
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_tfield(3, MR_r1, 2) = MR_sv(2);
	MR_tfield(3, MR_r1, 3) = MR_r2;
	MR_tfield(3, MR_r1, 4) = MR_sv(4);
	MR_tfield(3, MR_r1, 5) = MR_sv(6);
	MR_tfield(3, MR_r1, 6) = MR_sv(3);
	MR_decr_sp_and_return(7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i43);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tfield(3, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),2)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i45);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i46);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	MR_tfield(2, MR_r2, 1) = MR_sv(2);
	MR_tfield(2, MR_r2, 2) = MR_r1;
	MR_tfield(2, MR_r2, 3) = MR_sv(6);
	MR_tfield(2, MR_r2, 4) = MR_sv(3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i48);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i104);
	}
	if (((MR_Integer) MR_sv(5) >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i51);
	}
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i54);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) != MR_sv(2))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i52);
	}
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i54);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i56);
	}
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i58);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(1);
	MR_tfield(2, MR_r1, 1) = MR_sv(2);
	MR_tfield(2, MR_r1, 2) = MR_sv(4);
	MR_tfield(2, MR_r1, 3) = MR_r2;
	MR_tfield(2, MR_r1, 4) = MR_sv(3);
	MR_decr_sp_and_return(7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),3)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i61);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_102_111_117_114_95_95_91_49_93_95_48_4_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i62);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(5) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i63);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i66);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) != MR_r1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i64);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i66);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r3;
	MR_r3 = (MR_Integer) 2;
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i68);
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i69);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r2, 0) = MR_sv(1);
	MR_tfield(3, MR_r2, 1) = MR_sv(5);
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	MR_tfield(3, MR_r2, 3) = MR_sv(4);
	MR_tfield(3, MR_r2, 4) = MR_r1;
	MR_tfield(3, MR_r2, 5) = MR_sv(6);
	MR_tfield(3, MR_r2, 6) = MR_sv(3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i71);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(1);
	MR_tfield(3, MR_r1, 1) = MR_sv(5);
	MR_tfield(3, MR_r1, 2) = MR_sv(2);
	MR_tfield(3, MR_r1, 3) = MR_sv(4);
	MR_tfield(3, MR_r1, 4) = MR_r2;
	MR_tfield(3, MR_r1, 5) = MR_sv(6);
	MR_tfield(3, MR_r1, 6) = MR_sv(3);
	MR_decr_sp_and_return(7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i73);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_tfield(3, MR_tempr1, 6) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),2)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i75);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i76);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	MR_tfield(2, MR_r2, 1) = MR_sv(2);
	MR_tfield(2, MR_r2, 2) = MR_sv(4);
	MR_tfield(2, MR_r2, 3) = MR_r1;
	MR_tfield(2, MR_r2, 4) = MR_sv(3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i78);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 3) = MR_r1;
	MR_tfield(2, MR_tempr1, 4) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i104);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i82);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(1);
	MR_tfield(2, MR_r1, 1) = MR_sv(2);
	MR_tfield(2, MR_r1, 2) = MR_sv(4);
	MR_tfield(2, MR_r1, 3) = MR_sv(6);
	MR_tfield(2, MR_r1, 4) = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),3)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i85);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_102_111_117_114_95_95_91_49_93_95_48_4_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i86);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(5) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i87);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_r4;
	MR_sv(3) = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i90);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) != MR_r1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i88);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_r4;
	MR_sv(3) = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i90);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r3 = (MR_Integer) 2;
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i92);
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i93);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r2, 0) = MR_sv(1);
	MR_tfield(3, MR_r2, 1) = MR_sv(2);
	MR_tfield(3, MR_r2, 2) = MR_sv(5);
	MR_tfield(3, MR_r2, 3) = MR_sv(4);
	MR_tfield(3, MR_r2, 4) = MR_sv(6);
	MR_tfield(3, MR_r2, 5) = MR_r1;
	MR_tfield(3, MR_r2, 6) = MR_sv(3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i95);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(1);
	MR_tfield(3, MR_r1, 1) = MR_sv(2);
	MR_tfield(3, MR_r1, 2) = MR_sv(5);
	MR_tfield(3, MR_r1, 3) = MR_sv(4);
	MR_tfield(3, MR_r1, 4) = MR_sv(6);
	MR_tfield(3, MR_r1, 5) = MR_r2;
	MR_tfield(3, MR_r1, 6) = MR_sv(3);
	MR_decr_sp_and_return(7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i97);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i99);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i100);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	MR_tfield(2, MR_r2, 1) = MR_sv(2);
	MR_tfield(2, MR_r2, 2) = MR_sv(4);
	MR_tfield(2, MR_r2, 3) = MR_sv(6);
	MR_tfield(2, MR_r2, 4) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i102);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module129)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0);
	MR_init_label10(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,4,5,7,9,2,13,14,16,20,24)
	MR_init_label10(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,25,26,28,31,30,33,35,23,38,37)
	MR_init_label10(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,40,18,42,45,49,50,51,53,56,55)
	MR_init_label7(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,58,60,48,63,62,65,67)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__TypeSpecOf__pred__insert2__[T = var(V_2)]_0_1__[1, 2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(1, MR_r2, 2);
	MR_r3 = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i2);
	}
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i4);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(1))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i5);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 2;
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i9);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(3);
	MR_tfield(2, MR_r1, 1) = MR_sv(1);
	MR_tfield(2, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i67);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(1);
	MR_tfield(2, MR_r1, 1) = MR_sv(3);
	MR_tfield(2, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i13);
	}
	MR_sv(3) = MR_r1;
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i16);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(1))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i14);
	}
	MR_sv(3) = MR_r1;
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i16);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i18);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i20);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i23);
	}
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_102_111_117_114_95_95_91_49_93_95_48_4_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i24);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i25);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i28);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_r1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i26);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i28);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Integer) 2;
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i30);
	}
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i31);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r2, 0) = MR_sv(3);
	MR_tfield(2, MR_r2, 1) = MR_sv(1);
	MR_tfield(2, MR_r2, 2) = MR_r1;
	MR_tfield(2, MR_r2, 3) = MR_sv(4);
	MR_tfield(2, MR_r2, 4) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i33);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(3);
	MR_tfield(2, MR_r1, 1) = MR_sv(1);
	MR_tfield(2, MR_r1, 2) = MR_r2;
	MR_tfield(2, MR_r1, 3) = MR_sv(4);
	MR_tfield(2, MR_r1, 4) = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i35);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 3) = MR_r1;
	MR_tfield(2, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i37);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i38);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tfield(1, MR_r2, 2) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i40);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i42);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_tfield(1, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i45);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_tfield(1, MR_r1, 2) = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i48);
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_102_111_117_114_95_95_91_49_93_95_48_4_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i49);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i50);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i53);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_r1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i51);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i53);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Integer) 2;
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i55);
	}
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i56);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	MR_tfield(2, MR_r2, 1) = MR_sv(3);
	MR_tfield(2, MR_r2, 2) = MR_sv(2);
	MR_tfield(2, MR_r2, 3) = MR_r1;
	MR_tfield(2, MR_r2, 4) = MR_sv(4);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i58);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(1);
	MR_tfield(2, MR_r1, 1) = MR_sv(3);
	MR_tfield(2, MR_r1, 2) = MR_sv(2);
	MR_tfield(2, MR_r1, 3) = MR_r2;
	MR_tfield(2, MR_r1, 4) = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i60);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i62);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i63);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_tfield(1, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i65);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module130)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_init_label10(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,34,3,5,6,7,8,9,10,4,13)
	MR_init_label6(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,14,15,16,12,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__TypeSpecOf__pred_or_func__union__[T = var(V_2)]_0_1__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(8);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i4);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 0);
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_sv(4) = MR_tfield(3, MR_r2, 4);
	MR_sv(5) = MR_tfield(3, MR_r2, 5);
	MR_sv(6) = MR_tfield(3, MR_r2, 6);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tfield(3, MR_r2, 3);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i5);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i6);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i8);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i9);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i10);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i34);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i12);
	}
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_sv(2) = MR_tfield(2, MR_r2, 1);
	MR_sv(3) = MR_tfield(2, MR_r2, 3);
	MR_sv(4) = MR_tfield(2, MR_r2, 4);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tfield(2, MR_r2, 2);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i13);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i14);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i15);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i16);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i34);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 2);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i18);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i19);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i34);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module131)
	MR_init_entry1(fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__TypeSpecOf__pred_or_func__union__[T = var(V_2)]_0_1__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module132)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_init_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__TypeSpecOf__pred_or_func__insert_list__[T = var(V_2)]_0_1__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i4);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module133)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_init_label10(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,3,6,7,9,14,11,16,19,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__TypeSpecOf__pred_or_func__insert__[T = var(V_2)]_0_1__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i5);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tfield(3, MR_tempr1, 6);
	MR_r6 = MR_tfield(3, MR_tempr1, 5);
	MR_r7 = MR_tfield(3, MR_tempr1, 4);
	MR_r8 = MR_tfield(3, MR_tempr1, 3);
	MR_r9 = MR_tfield(3, MR_tempr1, 2);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_r10 = MR_tfield(3, MR_tempr1, 0);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i6);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r10;
	MR_r4 = MR_r9;
	MR_r11 = MR_r5;
	MR_r5 = MR_r8;
	MR_r12 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r12;
	MR_r8 = MR_r11;
	MR_r9 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i9);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r4)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i7);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r10;
	MR_r4 = MR_r9;
	MR_r11 = MR_r5;
	MR_r5 = MR_r8;
	MR_r12 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r12;
	MR_r8 = MR_r11;
	MR_r9 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i9);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r10;
	MR_r4 = MR_r9;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r8;
	MR_tempr2 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr1;
	MR_r9 = (MR_Integer) 2;
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r9,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i11);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_r3;
	MR_tfield(1, MR_r2, 1) = MR_r5;
	MR_tfield(1, MR_r2, 2) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_sv(2) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r4;
	MR_tfield(1, MR_tempr1, 1) = MR_r7;
	MR_tfield(1, MR_tempr1, 2) = MR_r8;
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i14);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tfield(1, MR_r2, 2) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r9,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i16);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_sv(2) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_r5;
	MR_tfield(1, MR_tempr1, 2) = MR_r6;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_r4;
	MR_tfield(1, MR_r2, 1) = MR_r7;
	MR_tfield(1, MR_r2, 2) = MR_r8;
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i19);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i21);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__set_tree234_maybe_bunch_0(void)
{
	set_tree234_module0();
	set_tree234_module1();
	set_tree234_module2();
	set_tree234_module3();
	set_tree234_module4();
	set_tree234_module5();
	set_tree234_module6();
	set_tree234_module7();
	set_tree234_module8();
	set_tree234_module9();
	set_tree234_module10();
	set_tree234_module11();
	set_tree234_module12();
	set_tree234_module13();
	set_tree234_module14();
	set_tree234_module15();
	set_tree234_module16();
	set_tree234_module17();
	set_tree234_module18();
	set_tree234_module19();
	set_tree234_module20();
	set_tree234_module21();
	set_tree234_module22();
	set_tree234_module23();
	set_tree234_module24();
	set_tree234_module25();
	set_tree234_module26();
	set_tree234_module27();
	set_tree234_module28();
	set_tree234_module29();
	set_tree234_module30();
	set_tree234_module31();
	set_tree234_module32();
	set_tree234_module33();
	set_tree234_module34();
	set_tree234_module35();
	set_tree234_module36();
	set_tree234_module37();
	set_tree234_module38();
	set_tree234_module39();
}

static void mercury__set_tree234_maybe_bunch_1(void)
{
	set_tree234_module40();
	set_tree234_module41();
	set_tree234_module42();
	set_tree234_module43();
	set_tree234_module44();
	set_tree234_module45();
	set_tree234_module46();
	set_tree234_module47();
	set_tree234_module48();
	set_tree234_module49();
	set_tree234_module50();
	set_tree234_module51();
	set_tree234_module52();
	set_tree234_module53();
	set_tree234_module54();
	set_tree234_module55();
	set_tree234_module56();
	set_tree234_module57();
	set_tree234_module58();
	set_tree234_module59();
	set_tree234_module60();
	set_tree234_module61();
	set_tree234_module62();
	set_tree234_module63();
	set_tree234_module64();
	set_tree234_module65();
	set_tree234_module66();
	set_tree234_module67();
	set_tree234_module68();
	set_tree234_module69();
	set_tree234_module70();
	set_tree234_module71();
	set_tree234_module72();
	set_tree234_module73();
	set_tree234_module74();
	set_tree234_module75();
	set_tree234_module76();
	set_tree234_module77();
	set_tree234_module78();
	set_tree234_module79();
}

static void mercury__set_tree234_maybe_bunch_2(void)
{
	set_tree234_module80();
	set_tree234_module81();
	set_tree234_module82();
	set_tree234_module83();
	set_tree234_module84();
	set_tree234_module85();
	set_tree234_module86();
	set_tree234_module87();
	set_tree234_module88();
	set_tree234_module89();
	set_tree234_module90();
	set_tree234_module91();
	set_tree234_module92();
	set_tree234_module93();
	set_tree234_module94();
	set_tree234_module95();
	set_tree234_module96();
	set_tree234_module97();
	set_tree234_module98();
	set_tree234_module99();
	set_tree234_module100();
	set_tree234_module101();
	set_tree234_module102();
	set_tree234_module103();
	set_tree234_module104();
	set_tree234_module105();
	set_tree234_module106();
	set_tree234_module107();
	set_tree234_module108();
	set_tree234_module109();
	set_tree234_module110();
	set_tree234_module111();
	set_tree234_module112();
	set_tree234_module113();
	set_tree234_module114();
	set_tree234_module115();
	set_tree234_module116();
	set_tree234_module117();
	set_tree234_module118();
	set_tree234_module119();
}

static void mercury__set_tree234_maybe_bunch_3(void)
{
	set_tree234_module120();
	set_tree234_module121();
	set_tree234_module122();
	set_tree234_module123();
	set_tree234_module124();
	set_tree234_module125();
	set_tree234_module126();
	set_tree234_module127();
	set_tree234_module128();
	set_tree234_module129();
	set_tree234_module130();
	set_tree234_module131();
	set_tree234_module132();
	set_tree234_module133();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__set_tree234__init(void);
void mercury__set_tree234__init_type_tables(void);
void mercury__set_tree234__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__set_tree234__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__set_tree234__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__set_tree234__init_threadscope_string_table(void);
#endif

void mercury__set_tree234__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__set_tree234_maybe_bunch_0();
	mercury__set_tree234_maybe_bunch_1();
	mercury__set_tree234_maybe_bunch_2();
	mercury__set_tree234_maybe_bunch_3();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_set_tree234__type_ctor_info_set_tree234_1,
		set_tree234__set_tree234_1_0);
	mercury__set_tree234__init_debugger();
}

void mercury__set_tree234__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_set_tree234__type_ctor_info_set_tree234_1);
	}
}


void mercury__set_tree234__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__set_tree234__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__set_tree234);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__set_tree234__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__set_tree234__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
