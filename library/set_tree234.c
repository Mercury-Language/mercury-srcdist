/*
** Automatically generated from `set_tree234.m'
** by the Mercury compiler,
** version rotd-2007-04-03, configured for i686-pc-linux-gnu.
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
INIT mercury__set_tree234__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 130 "io.int2"
#include "io.mh"

#line 27 "set_tree234.c"
#line 136 "io.int2"
#include "string.mh"

#line 31 "set_tree234.c"
#line 23 "bitmap.int2"
#include "bitmap.mh"

#line 35 "set_tree234.c"
#line 26 "time.int2"
#include "time.mh"

#line 39 "set_tree234.c"
#line 28 "array.int2"
#include "array.mh"

#line 43 "set_tree234.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 47 "set_tree234.c"
#line 103 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 51 "set_tree234.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 55 "set_tree234.c"
#line 131 "io.opt"
#include "dir.mh"

#line 59 "set_tree234.c"
#line 139 "io.opt"
#include "table_builtin.mh"

#line 63 "set_tree234.c"
#line 4 "char.opt"
#include "char.mh"

#line 67 "set_tree234.c"
#line 3 "float.opt"
#include "float.mh"

#line 71 "set_tree234.c"
#line 3 "math.opt"
#include "math.mh"

#line 75 "set_tree234.c"
#line 22 "store.opt"
#include "store.mh"

#line 79 "set_tree234.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 83 "set_tree234.c"
#line 4 "int.opt"
#include "int.mh"

#line 87 "set_tree234.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 91 "set_tree234.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 95 "set_tree234.c"
#line 96 "set_tree234.c"
#include "set_tree234.mh"

#line 99 "set_tree234.c"
#line 100 "set_tree234.c"
#ifndef SET_TREE234_DECL_GUARD
#define SET_TREE234_DECL_GUARD

#line 104 "set_tree234.c"
#line 105 "set_tree234.c"

#endif
#line 108 "set_tree234.c"


struct mercury_type_0 {
	MR_Word * f1;
	MR_Integer f2;
};
static const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Unsigned f1[2];
};
static const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
	MR_Integer f6;
};
static const struct mercury_type_2 mercury_common_2[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_set_tree234__type_ctor_info_set_tree234_1;
MR_decl_label1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0, 2)
MR_decl_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0, 4,5,7,10,2,11,12,14)
MR_decl_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0, 16,20,21,22,23,24,25,26)
MR_decl_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0, 27,28,30,32,34,33,35,17)
MR_decl_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0, 38,39,40,41,42,43,44,45)
MR_decl_label7(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0, 46,48,50,52,51,53,54)
MR_decl_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0, 4,5,7,10,11,12,14,17)
MR_decl_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0, 2,18,19,21,27,28,29,30)
MR_decl_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0, 31,32,33,34,35,37,39,41)
MR_decl_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0, 40,42,24,43,44,46,52,53)
MR_decl_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0, 54,55,56,57,58,59,60,62)
MR_decl_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0, 64,66,65,67,49,70,71,72)
MR_decl_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0, 73,74,75,76,77,78,80,82)
MR_decl_label4(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0, 84,83,85,86)
MR_decl_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0, 4,5,7,43,10,11,13,15)
MR_decl_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0, 17,16,18)
MR_decl_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0, 11,4,3)
MR_decl_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0, 4,5,6,7,9,10,11,12)
MR_decl_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0, 13,15,16,17,18,19,20,21)
MR_decl_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0, 23,24,25,27,30,33,10,12)
MR_decl_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0, 13,15,18,3,5,7,2,1)
MR_decl_label4(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0, 4,6,7,8)
MR_decl_label4(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0, 4,6,7,8)
MR_decl_label4(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0, 4,6,7,8)
MR_decl_label4(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0, 4,6,7,8)
MR_decl_label4(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0, 4,6,7,8)
MR_decl_label4(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0, 4,6,7,8)
MR_decl_label4(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0, 4,6,7,8)
MR_decl_label4(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0, 4,6,7,8)
MR_decl_label4(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0, 4,6,7,8)
MR_decl_label1(set_tree234__contains_2_0, 2)
MR_decl_label8(set_tree234__delete_2_4_0, 4,287,6,11,14,10,8,18)
MR_decl_label8(set_tree234__delete_2_4_0, 20,17,22,24,288,27,32,35)
MR_decl_label8(set_tree234__delete_2_4_0, 31,29,39,41,38,43,48,51)
MR_decl_label8(set_tree234__delete_2_4_0, 47,45,55,57,54,59,61,289)
MR_decl_label8(set_tree234__delete_2_4_0, 64,69,72,68,66,76,81,84)
MR_decl_label8(set_tree234__delete_2_4_0, 80,78,88,90,87,92,94,75)
MR_decl_label8(set_tree234__delete_2_4_0, 96,101,104,100,98,108,110,107)
MR_decl_label2(set_tree234__delete_2_4_0, 112,114)
MR_decl_label3(set_tree234__delete_list_3_0, 11,4,3)
MR_decl_label8(set_tree234__difference_2_3_0, 4,5,6,7,9,10,11,12)
MR_decl_label8(set_tree234__difference_2_3_0, 13,15,16,17,18,19,20,21)
MR_decl_label8(set_tree234__divide_2_6_0, 4,5,6,9,11,7,12,15)
MR_decl_label8(set_tree234__divide_2_6_0, 16,19,21,17,22,23,24,27)
MR_decl_label8(set_tree234__divide_2_6_0, 29,25,30,33,34,37,39,35)
MR_decl_label8(set_tree234__divide_2_6_0, 40,41,42,45,47,43,48,49)
MR_decl_label5(set_tree234__divide_2_6_0, 50,53,55,51,56)
MR_decl_label2(set_tree234__equal_2_0, 2,3)
MR_decl_label1(set_tree234__filter_map_3_0, 2)
MR_decl_label8(set_tree234__filter_map_func_4_0, 4,5,6,9,7,13,14,17)
MR_decl_label8(set_tree234__filter_map_func_4_0, 15,19,20,23,21,27,28,31)
MR_decl_label8(set_tree234__filter_map_func_4_0, 29,33,34,37,35,39,40,43)
MR_decl_label1(set_tree234__filter_map_func_4_0, 41)
MR_decl_label8(set_tree234__filter_map_pred_4_0, 4,5,6,9,7,13,14,17)
MR_decl_label8(set_tree234__filter_map_pred_4_0, 15,19,20,23,21,27,28,31)
MR_decl_label8(set_tree234__filter_map_pred_4_0, 29,33,34,37,35,39,40,43)
MR_decl_label1(set_tree234__filter_map_pred_4_0, 41)
MR_decl_label8(set_tree234__fold_4_0, 4,5,6,7,9,10,11,12)
MR_decl_label8(set_tree234__fold_4_0, 13,15,16,17,18,19,20,21)
MR_decl_label8(set_tree234__fold2_6_0, 4,5,6,7,9,10,11,12)
MR_decl_label8(set_tree234__fold2_6_0, 13,15,16,17,18,19,20,21)
MR_decl_label8(set_tree234__insert_3_0, 4,32,33,34,10,12,14,13)
MR_decl_label1(set_tree234__insert_3_0, 15)
MR_decl_label8(set_tree234__insert2_3_0, 4,6,7,2,8,10,14,15)
MR_decl_label8(set_tree234__insert2_3_0, 17,18,19,20,22,24,23,25)
MR_decl_label8(set_tree234__insert2_3_0, 11,28,29,31,32,33,34,36)
MR_decl_label3(set_tree234__insert2_3_0, 38,37,39)
MR_decl_label8(set_tree234__insert3_3_0, 4,6,7,8,10,11,2,12)
MR_decl_label8(set_tree234__insert3_3_0, 14,18,19,20,21,22,23,24)
MR_decl_label8(set_tree234__insert3_3_0, 25,27,29,28,30,15,31,33)
MR_decl_label8(set_tree234__insert3_3_0, 37,38,39,40,41,42,43,44)
MR_decl_label8(set_tree234__insert3_3_0, 46,48,47,49,34,52,53,54)
MR_decl_label8(set_tree234__insert3_3_0, 55,56,57,58,59,61,63,62)
MR_decl_label1(set_tree234__insert3_3_0, 64)
MR_decl_label3(set_tree234__insert_list_3_0, 11,4,3)
MR_decl_label8(set_tree234__intersect_2_4_0, 4,5,6,8,9,7,12,13)
MR_decl_label8(set_tree234__intersect_2_4_0, 15,16,14,17,18,20,21,19)
MR_decl_label8(set_tree234__intersect_2_4_0, 24,25,27,28,26,29,30,32)
MR_decl_label7(set_tree234__intersect_2_4_0, 33,31,34,35,37,38,36)
MR_decl_label8(set_tree234__is_member_3_0, 4,5,6,8,12,13,15,16)
MR_decl_label8(set_tree234__is_member_3_0, 18,20,24,25,27,29,31,32)
MR_decl_label4(set_tree234__is_member_3_0, 28,35,37,38)
MR_decl_label3(set_tree234__list_to_set_2_3_0, 11,4,3)
MR_decl_label1(set_tree234__map_3_0, 2)
MR_decl_label8(set_tree234__map_func_4_0, 4,5,6,7,9,10,11,12)
MR_decl_label8(set_tree234__map_func_4_0, 13,15,16,17,18,19,20,21)
MR_decl_label8(set_tree234__map_pred_4_0, 4,5,6,7,9,10,11,12)
MR_decl_label8(set_tree234__map_pred_4_0, 13,15,16,17,18,19,20,21)
MR_decl_label1(set_tree234__member_2_0, 2)
MR_decl_label8(set_tree234__power_union_2_3_0, 4,5,6,7,9,10,11,12)
MR_decl_label8(set_tree234__power_union_2_3_0, 13,15,16,17,18,19,20,21)
MR_decl_label8(set_tree234__remove_2_4_0, 68,73,76,72,70,80,85,88)
MR_decl_label8(set_tree234__remove_2_4_0, 84,82,92,95,91,97,100,79)
MR_decl_label8(set_tree234__remove_2_4_0, 102,107,110,106,104,114,117,113)
MR_decl_label8(set_tree234__remove_2_4_0, 119,122,27,28,33,36,32,30)
MR_decl_label8(set_tree234__remove_2_4_0, 40,43,39,45,50,53,49,47)
MR_decl_label8(set_tree234__remove_2_4_0, 57,60,56,62,65,4,5,10)
MR_decl_label8(set_tree234__remove_2_4_0, 13,9,7,17,20,16,22,25)
MR_decl_label2(set_tree234__remove_2_4_0, 26,1)
MR_decl_label8(set_tree234__remove_least_2_4_0, 29,31,34,37,39,40,41,19)
MR_decl_label8(set_tree234__remove_least_2_4_0, 20,22,25,26,4,108,7,10)
MR_decl_label6(set_tree234__remove_least_2_4_0, 13,15,16,17,2,1)
MR_decl_label4(set_tree234__remove_list_3_0, 18,3,4,1)
MR_decl_label1(set_tree234__singleton_set_2_1, 1)
MR_decl_label8(set_tree234__subset_2_0, 5,6,8,11,12,14,15,17)
MR_decl_label8(set_tree234__subset_2_0, 20,21,23,24,26,27,29,46)
MR_decl_label1(set_tree234__subset_2_0, 1)
MR_decl_label8(set_tree234__to_sorted_list_2_3_0, 4,5,6,8,9,10,12,13)
MR_decl_label2(set_tree234__to_sorted_list_2_3_0, 14,15)
MR_decl_label8(set_tree234__union_3_0, 4,5,6,7,9,10,11,12)
MR_decl_label8(set_tree234__union_3_0, 13,15,16,17,18,19,20,21)
MR_decl_label2(set_tree234__union_list_2_0, 4,3)
MR_decl_label8(fn__set_tree234__count_1_0, 4,23,6,7,24,9,10,11)
MR_decl_label5(fn__set_tree234__count_1_0, 25,13,14,15,16)
MR_decl_label1(fn__set_tree234__filter_map_2_0, 2)
MR_decl_label8(fn__set_tree234__fold_3_0, 4,5,6,7,9,10,11,12)
MR_decl_label8(fn__set_tree234__fold_3_0, 13,15,16,17,18,19,20,21)
MR_decl_label1(fn__set_tree234__intersect_list_1_0, 3)
MR_decl_label4(fn__set_tree234__intersect_list_2_2_0, 16,3,4,6)
MR_decl_label1(fn__set_tree234__map_2_0, 2)
MR_decl_label2(fn__set_tree234__power_intersect_1_0, 2,4)
MR_decl_label8(__Unify___set_tree234__set_tree234_1_0, 4,5,7,9,13,15,17,19)
MR_decl_label8(__Unify___set_tree234__set_tree234_1_0, 21,25,27,29,31,33,35,37)
MR_decl_label1(__Unify___set_tree234__set_tree234_1_0, 1)
MR_decl_label8(__Compare___set_tree234__set_tree234_1_0, 4,11,15,17,21,29,34,36)
MR_decl_label8(__Compare___set_tree234__set_tree234_1_0, 40,44,48,56,57,62,63,65)
MR_decl_label6(__Compare___set_tree234__set_tree234_1_0, 69,73,77,81,85,168)
MR_def_extern_entry(fn__set_tree234__init_0_0)
MR_def_extern_entry(set_tree234__singleton_set_2_0)
MR_def_extern_entry(set_tree234__singleton_set_2_1)
MR_def_extern_entry(fn__set_tree234__make_singleton_set_1_0)
MR_def_extern_entry(set_tree234__empty_1_0)
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
MR_def_extern_entry(set_tree234__map_pred_4_0)
MR_def_extern_entry(set_tree234__map_3_0)
MR_def_extern_entry(set_tree234__map_func_4_0)
MR_def_extern_entry(fn__set_tree234__map_2_0)
MR_def_extern_entry(set_tree234__filter_map_pred_4_0)
MR_def_extern_entry(set_tree234__filter_map_3_0)
MR_def_extern_entry(set_tree234__filter_map_func_4_0)
MR_def_extern_entry(fn__set_tree234__filter_map_2_0)
MR_def_extern_entry(set_tree234__fold_4_0)
MR_def_extern_entry(fn__set_tree234__fold_3_0)
MR_def_extern_entry(set_tree234__fold2_6_0)
MR_def_extern_entry(set_tree234__divide_2_6_0)
MR_def_extern_entry(set_tree234__divide_4_0)
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
	13,
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
2197,
"d1;c5;"
};


MR_BEGIN_MODULE(set_tree234_module0)
	MR_init_entry1(fn__set_tree234__init_0_0);
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
	MR_init_label1(set_tree234__singleton_set_2_1,1)
MR_BEGIN_CODE

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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(set_tree234__singleton_set_2_1_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(set_tree234__singleton_set_2_1_i1);
	}
	MR_r2 = MR_ctfield(1, MR_r2, 0);
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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(set_tree234_module5)
	MR_init_entry1(set_tree234__is_member_3_0);
	MR_init_label8(set_tree234__is_member_3_0,4,5,6,8,12,13,15,16)
	MR_init_label8(set_tree234__is_member_3_0,18,20,24,25,27,29,31,32)
	MR_init_label4(set_tree234__is_member_3_0,28,35,37,38)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__is_member_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__is_member_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i12) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i24));
MR_def_label(set_tree234__is_member_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(9);
MR_def_label(set_tree234__is_member_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 2);
	MR_sv(8) = MR_r1;
	MR_tempr1 = MR_tempr3;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__is_member_3_0_i6);
MR_def_label(set_tree234__is_member_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(set_tree234__is_member_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i38);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__is_member_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i12) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i24));
MR_def_label(set_tree234__is_member_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(2, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr3, 4);
	MR_sv(4) = MR_ctfield(2, MR_tempr3, 2);
	MR_sv(5) = MR_ctfield(2, MR_tempr3, 3);
	MR_sv(8) = MR_r1;
	MR_tempr1 = MR_tempr3;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_ctfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__is_member_3_0_i13);
MR_def_label(set_tree234__is_member_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(set_tree234__is_member_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i16);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__is_member_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i12) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i24));
MR_def_label(set_tree234__is_member_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__is_member_3_0_i18);
MR_def_label(set_tree234__is_member_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(set_tree234__is_member_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i38);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__is_member_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i12) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i24));
MR_def_label(set_tree234__is_member_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr3, 6);
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 0);
	MR_sv(5) = MR_ctfield(3, MR_tempr3, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr3, 4);
	MR_sv(7) = MR_ctfield(3, MR_tempr3, 5);
	MR_sv(8) = MR_r1;
	MR_tempr1 = MR_tempr3;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__is_member_3_0_i25);
MR_def_label(set_tree234__is_member_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i27);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(set_tree234__is_member_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i28);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__is_member_3_0_i29);
MR_def_label(set_tree234__is_member_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i31);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(set_tree234__is_member_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i32);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__is_member_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i12) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i24));
MR_def_label(set_tree234__is_member_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__is_member_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i12) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i24));
MR_def_label(set_tree234__is_member_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__is_member_3_0_i35);
MR_def_label(set_tree234__is_member_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i37);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(set_tree234__is_member_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__is_member_3_0_i38);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__is_member_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i12) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i24));
MR_def_label(set_tree234__is_member_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__is_member_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i12) MR_AND
		MR_LABEL_AP(set_tree234__is_member_3_0_i24));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module6)
	MR_init_entry1(fn__set_tree234__is_member_2_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module7)
	MR_init_entry1(set_tree234__member_2_0);
	MR_init_label1(set_tree234__member_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__member_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
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


MR_BEGIN_MODULE(set_tree234_module8)
	MR_init_entry1(set_tree234__member_2_1);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module9)
	MR_init_entry1(set_tree234__contains_2_0);
	MR_init_label1(set_tree234__contains_2_0,2)
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module10)
	MR_init_entry1(set_tree234__insert2_3_0);
	MR_init_label8(set_tree234__insert2_3_0,4,6,7,2,8,10,14,15)
	MR_init_label8(set_tree234__insert2_3_0,17,18,19,20,22,24,23,25)
	MR_init_label8(set_tree234__insert2_3_0,11,28,29,31,32,33,34,36)
	MR_init_label3(set_tree234__insert2_3_0,38,37,39)
MR_BEGIN_CODE

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
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert2_3_0_i4);
MR_def_label(set_tree234__insert2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(8);
MR_def_label(set_tree234__insert2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i7);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(1);
	MR_tfield(2, MR_r1, 1) = MR_sv(3);
	MR_tfield(2, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(set_tree234__insert2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(3);
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
	MR_sv(3) = MR_tempr1;
	MR_sv(7) = MR_r1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert2_3_0_i8);
MR_def_label(set_tree234__insert2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i10);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_tfield(1, MR_r1, 2) = MR_sv(4);
	MR_decr_sp_and_return(8);
MR_def_label(set_tree234__insert2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i11);
	}
	MR_r2 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__insert2_3_0_i14) MR_AND
		MR_LABEL_AP(set_tree234__insert2_3_0_i15) MR_AND
		MR_LABEL_AP(set_tree234__insert2_3_0_i17) MR_AND
		MR_LABEL_AP(set_tree234__insert2_3_0_i19));
MR_def_label(set_tree234__insert2_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_tfield(1, MR_r1, 2) = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
MR_def_label(set_tree234__insert2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(set_tree234__insert2_3_0,
		set_tree234__insert2_3_0_i18);
MR_def_label(set_tree234__insert2_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__insert3_3_0,
		set_tree234__insert2_3_0_i18);
MR_def_label(set_tree234__insert2_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(set_tree234__insert2_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(3, MR_tempr3, 3);
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_sv(6) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(3, MR_tempr3, 5);
	MR_tfield(1, MR_tempr2, 2) = MR_ctfield(3, MR_tempr3, 6);
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 1);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert2_3_0_i20);
MR_def_label(set_tree234__insert2_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i22);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(2);
	MR_tfield(2, MR_r1, 1) = MR_sv(3);
	MR_tfield(2, MR_r1, 2) = MR_sv(5);
	MR_tfield(2, MR_r1, 3) = MR_sv(6);
	MR_tfield(2, MR_r1, 4) = MR_sv(4);
	MR_decr_sp_and_return(8);
MR_def_label(set_tree234__insert2_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i23);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_localcall_lab(set_tree234__insert2_3_0,
		set_tree234__insert2_3_0_i24);
MR_def_label(set_tree234__insert2_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(set_tree234__insert2_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_localcall_lab(set_tree234__insert2_3_0,
		set_tree234__insert2_3_0_i25);
MR_def_label(set_tree234__insert2_3_0,25)
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
	MR_decr_sp_and_return(8);
	}
MR_def_label(set_tree234__insert2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__insert2_3_0_i28) MR_AND
		MR_LABEL_AP(set_tree234__insert2_3_0_i29) MR_AND
		MR_LABEL_AP(set_tree234__insert2_3_0_i31) MR_AND
		MR_LABEL_AP(set_tree234__insert2_3_0_i33));
MR_def_label(set_tree234__insert2_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_tfield(1, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(set_tree234__insert2_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(set_tree234__insert2_3_0,
		set_tree234__insert2_3_0_i32);
MR_def_label(set_tree234__insert2_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set_tree234__insert3_3_0,
		set_tree234__insert2_3_0_i32);
MR_def_label(set_tree234__insert2_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(set_tree234__insert2_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_sv(5) = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(3, MR_tempr3, 3);
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_sv(6) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(3, MR_tempr3, 5);
	MR_tfield(1, MR_tempr2, 2) = MR_ctfield(3, MR_tempr3, 6);
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 1);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert2_3_0_i34);
MR_def_label(set_tree234__insert2_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i36);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(3);
	MR_tfield(2, MR_r1, 1) = MR_sv(4);
	MR_tfield(2, MR_r1, 2) = MR_sv(2);
	MR_tfield(2, MR_r1, 3) = MR_sv(5);
	MR_tfield(2, MR_r1, 4) = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(set_tree234__insert2_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert2_3_0_i37);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_localcall_lab(set_tree234__insert2_3_0,
		set_tree234__insert2_3_0_i38);
MR_def_label(set_tree234__insert2_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 3) = MR_r1;
	MR_tfield(2, MR_tempr1, 4) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(set_tree234__insert2_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_localcall_lab(set_tree234__insert2_3_0,
		set_tree234__insert2_3_0_i39);
MR_def_label(set_tree234__insert2_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module11)
	MR_init_entry1(set_tree234__insert3_3_0);
	MR_init_label8(set_tree234__insert3_3_0,4,6,7,8,10,11,2,12)
	MR_init_label8(set_tree234__insert3_3_0,14,18,19,20,21,22,23,24)
	MR_init_label8(set_tree234__insert3_3_0,25,27,29,28,30,15,31,33)
	MR_init_label8(set_tree234__insert3_3_0,37,38,39,40,41,42,43,44)
	MR_init_label8(set_tree234__insert3_3_0,46,48,47,49,34,52,53,54)
	MR_init_label8(set_tree234__insert3_3_0,55,56,57,58,59,61,63,62)
	MR_init_label1(set_tree234__insert3_3_0,64)
MR_BEGIN_CODE

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
	MR_sv(7) = MR_ctfield(2, MR_tempr2, 4);
	MR_sv(6) = MR_ctfield(2, MR_tempr2, 3);
	MR_sv(5) = MR_ctfield(2, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(2, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(2, MR_tempr2, 0);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr1;
	MR_sv(9) = MR_r1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert3_3_0_i4);
MR_def_label(set_tree234__insert3_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i7);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(1);
	MR_tfield(3, MR_r1, 1) = MR_sv(3);
	MR_tfield(3, MR_r1, 2) = MR_sv(4);
	MR_tfield(3, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert3_3_0_i8);
MR_def_label(set_tree234__insert3_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i10);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i11);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(3);
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_tfield(3, MR_r1, 2) = MR_sv(4);
	MR_tfield(3, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(3);
	MR_tfield(3, MR_r1, 1) = MR_sv(4);
	MR_tfield(3, MR_r1, 2) = MR_sv(1);
	MR_tfield(3, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(9) = MR_r1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert3_3_0_i12);
MR_def_label(set_tree234__insert3_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i14);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i15);
	}
	MR_r2 = MR_sv(5);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__insert3_3_0_i18) MR_AND
		MR_LABEL_AP(set_tree234__insert3_3_0_i19) MR_AND
		MR_LABEL_AP(set_tree234__insert3_3_0_i21) MR_AND
		MR_LABEL_AP(set_tree234__insert3_3_0_i23));
MR_def_label(set_tree234__insert3_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(3);
	MR_tfield(2, MR_r1, 1) = MR_sv(4);
	MR_tfield(2, MR_r1, 2) = MR_tempr1;
	MR_tfield(2, MR_r1, 3) = MR_sv(6);
	MR_tfield(2, MR_r1, 4) = MR_sv(7);
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__insert3_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(set_tree234__insert2_3_0,
		set_tree234__insert3_3_0_i20);
MR_def_label(set_tree234__insert3_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(7);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__insert3_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_localcall_lab(set_tree234__insert3_3_0,
		set_tree234__insert3_3_0_i22);
MR_def_label(set_tree234__insert3_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(7);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__insert3_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_102_111_117_114_95_95_91_49_93_95_48_4_0,
		set_tree234__insert3_3_0_i24);
MR_def_label(set_tree234__insert3_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert3_3_0_i25);
MR_def_label(set_tree234__insert3_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i27);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(2);
	MR_tfield(3, MR_r1, 1) = MR_sv(3);
	MR_tfield(3, MR_r1, 2) = MR_sv(4);
	MR_tfield(3, MR_r1, 3) = MR_sv(5);
	MR_tfield(3, MR_r1, 4) = MR_sv(8);
	MR_tfield(3, MR_r1, 5) = MR_sv(6);
	MR_tfield(3, MR_r1, 6) = MR_sv(7);
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i28);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(set_tree234__insert2_3_0,
		set_tree234__insert3_3_0_i29);
MR_def_label(set_tree234__insert3_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(7);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__insert3_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(set_tree234__insert2_3_0,
		set_tree234__insert3_3_0_i30);
MR_def_label(set_tree234__insert3_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tfield(3, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(7);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__insert3_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert3_3_0_i31);
MR_def_label(set_tree234__insert3_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i33);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i34);
	}
	MR_r2 = MR_sv(6);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__insert3_3_0_i37) MR_AND
		MR_LABEL_AP(set_tree234__insert3_3_0_i38) MR_AND
		MR_LABEL_AP(set_tree234__insert3_3_0_i40) MR_AND
		MR_LABEL_AP(set_tree234__insert3_3_0_i42));
MR_def_label(set_tree234__insert3_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(3);
	MR_tfield(2, MR_r1, 1) = MR_sv(4);
	MR_tfield(2, MR_r1, 2) = MR_sv(5);
	MR_tfield(2, MR_r1, 3) = MR_tempr1;
	MR_tfield(2, MR_r1, 4) = MR_sv(7);
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__insert3_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(set_tree234__insert2_3_0,
		set_tree234__insert3_3_0_i39);
MR_def_label(set_tree234__insert3_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_r1;
	MR_tfield(2, MR_tempr1, 4) = MR_sv(7);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__insert3_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_localcall_lab(set_tree234__insert3_3_0,
		set_tree234__insert3_3_0_i41);
MR_def_label(set_tree234__insert3_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_r1;
	MR_tfield(2, MR_tempr1, 4) = MR_sv(7);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__insert3_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_102_111_117_114_95_95_91_49_93_95_48_4_0,
		set_tree234__insert3_3_0_i43);
MR_def_label(set_tree234__insert3_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert3_3_0_i44);
MR_def_label(set_tree234__insert3_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i46);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(3);
	MR_tfield(3, MR_r1, 1) = MR_sv(2);
	MR_tfield(3, MR_r1, 2) = MR_sv(4);
	MR_tfield(3, MR_r1, 3) = MR_sv(5);
	MR_tfield(3, MR_r1, 4) = MR_sv(6);
	MR_tfield(3, MR_r1, 5) = MR_sv(8);
	MR_tfield(3, MR_r1, 6) = MR_sv(7);
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i47);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(set_tree234__insert2_3_0,
		set_tree234__insert3_3_0_i48);
MR_def_label(set_tree234__insert3_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tfield(3, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(7);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__insert3_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(set_tree234__insert2_3_0,
		set_tree234__insert3_3_0_i49);
MR_def_label(set_tree234__insert3_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_tfield(3, MR_tempr1, 6) = MR_sv(7);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__insert3_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__insert3_3_0_i52) MR_AND
		MR_LABEL_AP(set_tree234__insert3_3_0_i53) MR_AND
		MR_LABEL_AP(set_tree234__insert3_3_0_i55) MR_AND
		MR_LABEL_AP(set_tree234__insert3_3_0_i57));
MR_def_label(set_tree234__insert3_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(3);
	MR_tfield(2, MR_r1, 1) = MR_sv(4);
	MR_tfield(2, MR_r1, 2) = MR_sv(5);
	MR_tfield(2, MR_r1, 3) = MR_sv(6);
	MR_tfield(2, MR_r1, 4) = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__insert3_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(set_tree234__insert2_3_0,
		set_tree234__insert3_3_0_i54);
MR_def_label(set_tree234__insert3_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__insert3_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_localcall_lab(set_tree234__insert3_3_0,
		set_tree234__insert3_3_0_i56);
MR_def_label(set_tree234__insert3_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__insert3_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_102_111_117_114_95_95_91_49_93_95_48_4_0,
		set_tree234__insert3_3_0_i58);
MR_def_label(set_tree234__insert3_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert3_3_0_i59);
MR_def_label(set_tree234__insert3_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i61);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(3);
	MR_tfield(3, MR_r1, 1) = MR_sv(4);
	MR_tfield(3, MR_r1, 2) = MR_sv(2);
	MR_tfield(3, MR_r1, 3) = MR_sv(5);
	MR_tfield(3, MR_r1, 4) = MR_sv(6);
	MR_tfield(3, MR_r1, 5) = MR_sv(7);
	MR_tfield(3, MR_r1, 6) = MR_sv(8);
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__insert3_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert3_3_0_i62);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(set_tree234__insert2_3_0,
		set_tree234__insert3_3_0_i63);
MR_def_label(set_tree234__insert3_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_tfield(3, MR_tempr1, 6) = MR_sv(8);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(set_tree234__insert3_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(set_tree234__insert2_3_0,
		set_tree234__insert3_3_0_i64);
MR_def_label(set_tree234__insert3_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module12)
	MR_init_entry1(set_tree234__insert_3_0);
	MR_init_label8(set_tree234__insert_3_0,4,32,33,34,10,12,14,13)
	MR_init_label1(set_tree234__insert_3_0,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__insert_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(set_tree234__insert_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__insert_3_0_i32) MR_AND
		MR_LABEL_AP(set_tree234__insert_3_0_i33) MR_AND
		MR_LABEL_AP(set_tree234__insert_3_0_i34));
MR_def_label(set_tree234__insert_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(set_tree234__insert_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__insert2_3_0);
MR_def_label(set_tree234__insert_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(set_tree234__insert3_3_0);
MR_def_label(set_tree234__insert_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(9) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(10) = MR_r1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__insert_3_0_i10);
MR_def_label(set_tree234__insert_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__insert_3_0_i12);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(11);
MR_def_label(set_tree234__insert_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__insert_3_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 2) = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(10);
	}
	MR_np_call_localret_ent(set_tree234__insert2_3_0,
		set_tree234__insert_3_0_i14);
MR_def_label(set_tree234__insert_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(set_tree234__insert_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 2) = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(10);
	}
	MR_np_call_localret_ent(set_tree234__insert2_3_0,
		set_tree234__insert_3_0_i15);
MR_def_label(set_tree234__insert_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module13)
	MR_init_entry1(set_tree234__list_to_set_2_3_0);
	MR_init_label3(set_tree234__list_to_set_2_3_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__list_to_set_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(set_tree234__list_to_set_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(set_tree234__list_to_set_2_3_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__list_to_set_2_3_0_i4);
MR_def_label(set_tree234__list_to_set_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(set_tree234__list_to_set_2_3_0_i11);
MR_def_label(set_tree234__list_to_set_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module14)
	MR_init_entry1(fn__set_tree234__list_to_set_1_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module15)
	MR_init_entry1(fn__set_tree234__sorted_list_to_set_1_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module16)
	MR_init_entry1(set_tree234__to_sorted_list_2_3_0);
	MR_init_label8(set_tree234__to_sorted_list_2_3_0,4,5,6,8,9,10,12,13)
	MR_init_label2(set_tree234__to_sorted_list_2_3_0,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__to_sorted_list_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__to_sorted_list_2_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__to_sorted_list_2_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__to_sorted_list_2_3_0_i8) MR_AND
		MR_LABEL_AP(set_tree234__to_sorted_list_2_3_0_i12));
MR_def_label(set_tree234__to_sorted_list_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(8);
MR_def_label(set_tree234__to_sorted_list_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 2);
	}
	MR_np_localcall_lab(set_tree234__to_sorted_list_2_3_0,
		set_tree234__to_sorted_list_2_3_0_i6);
MR_def_label(set_tree234__to_sorted_list_2_3_0,6)
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
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__to_sorted_list_2_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__to_sorted_list_2_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__to_sorted_list_2_3_0_i8) MR_AND
		MR_LABEL_AP(set_tree234__to_sorted_list_2_3_0_i12));
	}
MR_def_label(set_tree234__to_sorted_list_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_ctfield(2, MR_r2, 4);
	}
	MR_np_localcall_lab(set_tree234__to_sorted_list_2_3_0,
		set_tree234__to_sorted_list_2_3_0_i9);
MR_def_label(set_tree234__to_sorted_list_2_3_0,9)
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
		set_tree234__to_sorted_list_2_3_0_i10);
MR_def_label(set_tree234__to_sorted_list_2_3_0,10)
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
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__to_sorted_list_2_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__to_sorted_list_2_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__to_sorted_list_2_3_0_i8) MR_AND
		MR_LABEL_AP(set_tree234__to_sorted_list_2_3_0_i12));
	}
MR_def_label(set_tree234__to_sorted_list_2_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_ctfield(3, MR_r2, 6);
	}
	MR_np_localcall_lab(set_tree234__to_sorted_list_2_3_0,
		set_tree234__to_sorted_list_2_3_0_i13);
MR_def_label(set_tree234__to_sorted_list_2_3_0,13)
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
		set_tree234__to_sorted_list_2_3_0_i14);
MR_def_label(set_tree234__to_sorted_list_2_3_0,14)
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
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__to_sorted_list_2_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__to_sorted_list_2_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__to_sorted_list_2_3_0_i8) MR_AND
		MR_LABEL_AP(set_tree234__to_sorted_list_2_3_0_i12));
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module17)
	MR_init_entry1(fn__set_tree234__to_sorted_list_1_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(set_tree234_module18)
	MR_init_entry1(set_tree234__equal_2_0);
	MR_init_label2(set_tree234__equal_2_0,2,3)
MR_BEGIN_CODE

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
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(set_tree234__to_sorted_list_2_3_0,
		set_tree234__equal_2_0_i3);
MR_def_label(set_tree234__equal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module19)
	MR_init_entry1(set_tree234__subset_2_0);
	MR_init_label8(set_tree234__subset_2_0,5,6,8,11,12,14,15,17)
	MR_init_label8(set_tree234__subset_2_0,20,21,23,24,26,27,29,46)
	MR_init_label1(set_tree234__subset_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__subset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__subset_2_0_i46) MR_AND
		MR_LABEL_AP(set_tree234__subset_2_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__subset_2_0_i11) MR_AND
		MR_LABEL_AP(set_tree234__subset_2_0_i20));
MR_def_label(set_tree234__subset_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	}
	MR_np_localcall_lab(set_tree234__subset_2_0,
		set_tree234__subset_2_0_i6);
MR_def_label(set_tree234__subset_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__subset_2_0_i8);
MR_def_label(set_tree234__subset_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__subset_2_0_i46) MR_AND
		MR_LABEL_AP(set_tree234__subset_2_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__subset_2_0_i11) MR_AND
		MR_LABEL_AP(set_tree234__subset_2_0_i20));
MR_def_label(set_tree234__subset_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_r2 = MR_ctfield(2, MR_r2, 2);
	}
	MR_np_localcall_lab(set_tree234__subset_2_0,
		set_tree234__subset_2_0_i12);
MR_def_label(set_tree234__subset_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__subset_2_0_i14);
MR_def_label(set_tree234__subset_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_localcall_lab(set_tree234__subset_2_0,
		set_tree234__subset_2_0_i15);
MR_def_label(set_tree234__subset_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__subset_2_0_i17);
MR_def_label(set_tree234__subset_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__subset_2_0_i46) MR_AND
		MR_LABEL_AP(set_tree234__subset_2_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__subset_2_0_i11) MR_AND
		MR_LABEL_AP(set_tree234__subset_2_0_i20));
MR_def_label(set_tree234__subset_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_r2 = MR_ctfield(3, MR_r2, 3);
	}
	MR_np_localcall_lab(set_tree234__subset_2_0,
		set_tree234__subset_2_0_i21);
MR_def_label(set_tree234__subset_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__subset_2_0_i23);
MR_def_label(set_tree234__subset_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_localcall_lab(set_tree234__subset_2_0,
		set_tree234__subset_2_0_i24);
MR_def_label(set_tree234__subset_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__subset_2_0_i26);
MR_def_label(set_tree234__subset_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_localcall_lab(set_tree234__subset_2_0,
		set_tree234__subset_2_0_i27);
MR_def_label(set_tree234__subset_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__subset_2_0_i29);
MR_def_label(set_tree234__subset_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__subset_2_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__subset_2_0_i46) MR_AND
		MR_LABEL_AP(set_tree234__subset_2_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__subset_2_0_i11) MR_AND
		MR_LABEL_AP(set_tree234__subset_2_0_i20));
MR_def_label(set_tree234__subset_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(set_tree234__subset_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module20)
	MR_init_entry1(set_tree234__superset_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__superset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(set_tree234__subset_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module21)
	MR_init_entry1(fn__set_tree234__insert_2_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module22)
	MR_init_entry1(set_tree234__insert_list_3_0);
	MR_init_label3(set_tree234__insert_list_3_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__insert_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(set_tree234__insert_list_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(set_tree234__insert_list_3_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__insert_list_3_0_i4);
MR_def_label(set_tree234__insert_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(set_tree234__insert_list_3_0_i11);
MR_def_label(set_tree234__insert_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module23)
	MR_init_entry1(fn__set_tree234__insert_list_2_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(set_tree234_module24)
	MR_init_entry1(set_tree234__remove_least_2_4_0);
	MR_init_label8(set_tree234__remove_least_2_4_0,29,31,34,37,39,40,41,19)
	MR_init_label8(set_tree234__remove_least_2_4_0,20,22,25,26,4,108,7,10)
	MR_init_label6(set_tree234__remove_least_2_4_0,13,15,16,17,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__remove_least_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i4);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i19);
	}
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(6) = MR_ctfield(3, MR_tempr2, 5);
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 4);
	MR_r5 = MR_ctfield(3, MR_tempr2, 3);
	MR_r6 = MR_ctfield(3, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 6);
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i29);
	}
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
MR_def_label(set_tree234__remove_least_2_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r6;
	MR_r2 = MR_r5;
	MR_np_localcall_lab(set_tree234__remove_least_2_4_0,
		set_tree234__remove_least_2_4_0_i31);
MR_def_label(set_tree234__remove_least_2_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i1);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i34);
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
MR_def_label(set_tree234__remove_least_2_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__remove_least_2_4_0_i37) MR_AND
		MR_LABEL_AP(set_tree234__remove_least_2_4_0_i39) MR_AND
		MR_LABEL_AP(set_tree234__remove_least_2_4_0_i40) MR_AND
		MR_LABEL_AP(set_tree234__remove_least_2_4_0_i41));
MR_def_label(set_tree234__remove_least_2_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unbalanced 234 tree", 19);
	MR_np_call_localret_ent(require__error_1_0,
		set_tree234__remove_least_2_4_0_i2);
MR_def_label(set_tree234__remove_least_2_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tempr3 = MR_r4;
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(1, MR_tempr3, 0);
	MR_tfield(2, MR_tempr1, 2) = MR_r3;
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(1, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 4) = MR_ctfield(1, MR_tempr3, 2);
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
MR_def_label(set_tree234__remove_least_2_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr4 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(2, MR_tempr4, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(2, MR_tempr4, 3);
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(2, MR_tempr4, 4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tfield(1, MR_tempr2, 2) = MR_ctfield(2, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 7);
	MR_r3 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = MR_ctfield(2, MR_tempr4, 0);
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
MR_def_label(set_tree234__remove_least_2_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr4 = MR_r4;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_tempr4, 1);
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(3, MR_tempr4, 2);
	MR_tfield(2, MR_tempr1, 2) = MR_ctfield(3, MR_tempr4, 4);
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(3, MR_tempr4, 5);
	MR_tfield(2, MR_tempr1, 4) = MR_ctfield(3, MR_tempr4, 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tfield(1, MR_tempr2, 2) = MR_ctfield(3, MR_tempr4, 3);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 7);
	MR_r3 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = MR_ctfield(3, MR_tempr4, 0);
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
MR_def_label(set_tree234__remove_least_2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(4) = MR_ctfield(2, MR_tempr2, 3);
	MR_r5 = MR_ctfield(2, MR_tempr2, 2);
	MR_r6 = MR_ctfield(2, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr2, 4);
	MR_sv(1) = MR_ctfield(2, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i20);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_r2 = MR_r6;
	MR_r4 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(set_tree234__remove_least_2_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r6;
	MR_r2 = MR_r5;
	MR_np_localcall_lab(set_tree234__remove_least_2_4_0,
		set_tree234__remove_least_2_4_0_i22);
MR_def_label(set_tree234__remove_least_2_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i1);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i25);
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
MR_def_label(set_tree234__remove_least_2_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0,
		set_tree234__remove_least_2_4_0_i26);
MR_def_label(set_tree234__remove_least_2_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(set_tree234__remove_least_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r3 = MR_ctfield(1, MR_tempr1, 2);
	MR_r5 = MR_ctfield(1, MR_tempr1, 1);
	MR_r6 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(set_tree234__remove_least_2_4_0_i108);
	}
	MR_r2 = MR_r6;
	MR_r4 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_tree234__remove_least_2_4_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r3;
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
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(set_tree234__remove_least_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__remove_least_2_4_0_i13) MR_AND
		MR_LABEL_AP(set_tree234__remove_least_2_4_0_i15) MR_AND
		MR_LABEL_AP(set_tree234__remove_least_2_4_0_i16) MR_AND
		MR_LABEL_AP(set_tree234__remove_least_2_4_0_i17));
MR_def_label(set_tree234__remove_least_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unbalanced 234 tree", 19);
	MR_np_call_localret_ent(require__error_1_0,
		set_tree234__remove_least_2_4_0_i2);
MR_def_label(set_tree234__remove_least_2_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tempr2 = MR_r4;
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(2, MR_tempr1, 2) = MR_r3;
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(1, MR_tempr2, 1);
	MR_tfield(2, MR_tempr1, 4) = MR_ctfield(1, MR_tempr2, 2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(set_tree234__remove_least_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr4 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(2, MR_tempr4, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(2, MR_tempr4, 3);
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(2, MR_tempr4, 4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tfield(1, MR_tempr2, 2) = MR_ctfield(2, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_ctfield(2, MR_tempr4, 0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(set_tree234__remove_least_2_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr4 = MR_r4;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_tempr4, 1);
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(3, MR_tempr4, 2);
	MR_tfield(2, MR_tempr1, 2) = MR_ctfield(3, MR_tempr4, 4);
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(3, MR_tempr4, 5);
	MR_tfield(2, MR_tempr1, 4) = MR_ctfield(3, MR_tempr4, 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tfield(1, MR_tempr2, 2) = MR_ctfield(3, MR_tempr4, 3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_ctfield(3, MR_tempr4, 0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	}
MR_def_label(set_tree234__remove_least_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(set_tree234__remove_least_2_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module25)
	MR_init_entry1(set_tree234__delete_2_4_0);
	MR_init_label8(set_tree234__delete_2_4_0,4,287,6,11,14,10,8,18)
	MR_init_label8(set_tree234__delete_2_4_0,20,17,22,24,288,27,32,35)
	MR_init_label8(set_tree234__delete_2_4_0,31,29,39,41,38,43,48,51)
	MR_init_label8(set_tree234__delete_2_4_0,47,45,55,57,54,59,61,289)
	MR_init_label8(set_tree234__delete_2_4_0,64,69,72,68,66,76,81,84)
	MR_init_label8(set_tree234__delete_2_4_0,80,78,88,90,87,92,94,75)
	MR_init_label8(set_tree234__delete_2_4_0,96,101,104,100,98,108,110,107)
	MR_init_label2(set_tree234__delete_2_4_0,112,114)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__delete_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(set_tree234__delete_2_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__delete_2_4_0_i287) MR_AND
		MR_LABEL_AP(set_tree234__delete_2_4_0_i288) MR_AND
		MR_LABEL_AP(set_tree234__delete_2_4_0_i289));
MR_def_label(set_tree234__delete_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(set_tree234__delete_2_4_0,287)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(9) = MR_r1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__delete_2_4_0_i6);
MR_def_label(set_tree234__delete_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i8);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__delete_2_4_0_i11);
MR_def_label(set_tree234__delete_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i10);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i14);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_tfield(1, MR_r1, 2) = MR_r3;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__delete_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0);
MR_def_label(set_tree234__delete_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__delete_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i17);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(set_tree234__delete_2_4_0,
		set_tree234__delete_2_4_0_i18);
MR_def_label(set_tree234__delete_2_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i20);
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
MR_def_label(set_tree234__delete_2_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0);
MR_def_label(set_tree234__delete_2_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(set_tree234__delete_2_4_0,
		set_tree234__delete_2_4_0_i22);
MR_def_label(set_tree234__delete_2_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i24);
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
MR_def_label(set_tree234__delete_2_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0);
MR_def_label(set_tree234__delete_2_4_0,288)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(9) = MR_r1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__delete_2_4_0_i27);
MR_def_label(set_tree234__delete_2_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i29);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__delete_2_4_0_i32);
MR_def_label(set_tree234__delete_2_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i31);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i35);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_tfield(2, MR_r1, 1) = MR_sv(2);
	MR_tfield(2, MR_r1, 2) = MR_sv(5);
	MR_tfield(2, MR_r1, 3) = MR_r3;
	MR_tfield(2, MR_r1, 4) = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__delete_2_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0);
MR_def_label(set_tree234__delete_2_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(5);
	MR_tfield(1, MR_r1, 2) = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__delete_2_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i38);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_localcall_lab(set_tree234__delete_2_4_0,
		set_tree234__delete_2_4_0_i39);
MR_def_label(set_tree234__delete_2_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i41);
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
MR_def_label(set_tree234__delete_2_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0);
MR_def_label(set_tree234__delete_2_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__delete_2_4_0_i43);
MR_def_label(set_tree234__delete_2_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i45);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__delete_2_4_0_i48);
MR_def_label(set_tree234__delete_2_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i47);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i51);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(4);
	MR_tfield(2, MR_r1, 1) = MR_r2;
	MR_tfield(2, MR_r1, 2) = MR_sv(5);
	MR_tfield(2, MR_r1, 3) = MR_sv(6);
	MR_tfield(2, MR_r1, 4) = MR_r3;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__delete_2_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r5 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0);
MR_def_label(set_tree234__delete_2_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = MR_sv(5);
	MR_tfield(1, MR_r1, 2) = MR_sv(6);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__delete_2_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i54);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_localcall_lab(set_tree234__delete_2_4_0,
		set_tree234__delete_2_4_0_i55);
MR_def_label(set_tree234__delete_2_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i57);
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
MR_def_label(set_tree234__delete_2_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0);
MR_def_label(set_tree234__delete_2_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(set_tree234__delete_2_4_0,
		set_tree234__delete_2_4_0_i59);
MR_def_label(set_tree234__delete_2_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i61);
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
MR_def_label(set_tree234__delete_2_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0);
MR_def_label(set_tree234__delete_2_4_0,289)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(9) = MR_r1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__delete_2_4_0_i64);
MR_def_label(set_tree234__delete_2_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i66);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__delete_2_4_0_i69);
MR_def_label(set_tree234__delete_2_4_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i68);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i72);
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
MR_def_label(set_tree234__delete_2_4_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r6 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0);
MR_def_label(set_tree234__delete_2_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(4);
	MR_tfield(2, MR_r1, 1) = MR_sv(2);
	MR_tfield(2, MR_r1, 2) = MR_sv(5);
	MR_tfield(2, MR_r1, 3) = MR_sv(6);
	MR_tfield(2, MR_r1, 4) = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__delete_2_4_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i75);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__delete_2_4_0_i76);
MR_def_label(set_tree234__delete_2_4_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i78);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__delete_2_4_0_i81);
MR_def_label(set_tree234__delete_2_4_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i80);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i84);
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
MR_def_label(set_tree234__delete_2_4_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r5 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0);
MR_def_label(set_tree234__delete_2_4_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(7);
	MR_tfield(2, MR_r1, 1) = MR_sv(2);
	MR_tfield(2, MR_r1, 2) = MR_sv(5);
	MR_tfield(2, MR_r1, 3) = MR_sv(8);
	MR_tfield(2, MR_r1, 4) = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__delete_2_4_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i87);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_localcall_lab(set_tree234__delete_2_4_0,
		set_tree234__delete_2_4_0_i88);
MR_def_label(set_tree234__delete_2_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i90);
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
MR_def_label(set_tree234__delete_2_4_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0);
MR_def_label(set_tree234__delete_2_4_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_localcall_lab(set_tree234__delete_2_4_0,
		set_tree234__delete_2_4_0_i92);
MR_def_label(set_tree234__delete_2_4_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i94);
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
MR_def_label(set_tree234__delete_2_4_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0);
MR_def_label(set_tree234__delete_2_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__delete_2_4_0_i96);
MR_def_label(set_tree234__delete_2_4_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i98);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__delete_2_4_0_i101);
MR_def_label(set_tree234__delete_2_4_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i100);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i104);
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
MR_def_label(set_tree234__delete_2_4_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r7 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0);
MR_def_label(set_tree234__delete_2_4_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(4);
	MR_tfield(2, MR_r1, 1) = MR_sv(7);
	MR_tfield(2, MR_r1, 2) = MR_sv(5);
	MR_tfield(2, MR_r1, 3) = MR_sv(6);
	MR_tfield(2, MR_r1, 4) = MR_sv(8);
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__delete_2_4_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i107);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_localcall_lab(set_tree234__delete_2_4_0,
		set_tree234__delete_2_4_0_i108);
MR_def_label(set_tree234__delete_2_4_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i110);
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
MR_def_label(set_tree234__delete_2_4_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0);
MR_def_label(set_tree234__delete_2_4_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(set_tree234__delete_2_4_0,
		set_tree234__delete_2_4_0_i112);
MR_def_label(set_tree234__delete_2_4_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(set_tree234__delete_2_4_0_i114);
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
MR_def_label(set_tree234__delete_2_4_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module26)
	MR_init_entry1(set_tree234__delete_3_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module27)
	MR_init_entry1(fn__set_tree234__delete_2_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module28)
	MR_init_entry1(set_tree234__delete_list_3_0);
	MR_init_label3(set_tree234__delete_list_3_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__delete_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(set_tree234__delete_list_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(set_tree234__delete_list_3_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(set_tree234__delete_2_4_0,
		set_tree234__delete_list_3_0_i4);
MR_def_label(set_tree234__delete_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(set_tree234__delete_list_3_0_i11);
MR_def_label(set_tree234__delete_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module29)
	MR_init_entry1(fn__set_tree234__delete_list_2_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module30)
	MR_init_entry1(set_tree234__remove_2_4_0);
	MR_init_label8(set_tree234__remove_2_4_0,68,73,76,72,70,80,85,88)
	MR_init_label8(set_tree234__remove_2_4_0,84,82,92,95,91,97,100,79)
	MR_init_label8(set_tree234__remove_2_4_0,102,107,110,106,104,114,117,113)
	MR_init_label8(set_tree234__remove_2_4_0,119,122,27,28,33,36,32,30)
	MR_init_label8(set_tree234__remove_2_4_0,40,43,39,45,50,53,49,47)
	MR_init_label8(set_tree234__remove_2_4_0,57,60,56,62,65,4,5,10)
	MR_init_label8(set_tree234__remove_2_4_0,13,9,7,17,20,16,22,25)
	MR_init_label2(set_tree234__remove_2_4_0,26,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__remove_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_PTAG_TEST(MR_r3,1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i4);
	}
	if (MR_PTAG_TEST(MR_r3,2)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i27);
	}
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i1);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(9) = MR_r1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__remove_2_4_0_i68);
MR_def_label(set_tree234__remove_2_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i70);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__remove_2_4_0_i73);
MR_def_label(set_tree234__remove_2_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i72);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i76);
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
MR_def_label(set_tree234__remove_2_4_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r6 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r7 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0,
		set_tree234__remove_2_4_0_i26);
MR_def_label(set_tree234__remove_2_4_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_tree234__remove_2_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i79);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__remove_2_4_0_i80);
MR_def_label(set_tree234__remove_2_4_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i82);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__remove_2_4_0_i85);
MR_def_label(set_tree234__remove_2_4_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i84);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i88);
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
MR_def_label(set_tree234__remove_2_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r5 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0,
		set_tree234__remove_2_4_0_i26);
MR_def_label(set_tree234__remove_2_4_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_tree234__remove_2_4_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i91);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_localcall_lab(set_tree234__remove_2_4_0,
		set_tree234__remove_2_4_0_i92);
MR_def_label(set_tree234__remove_2_4_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i1);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i95);
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
MR_def_label(set_tree234__remove_2_4_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0,
		set_tree234__remove_2_4_0_i26);
MR_def_label(set_tree234__remove_2_4_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_localcall_lab(set_tree234__remove_2_4_0,
		set_tree234__remove_2_4_0_i97);
MR_def_label(set_tree234__remove_2_4_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i1);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i100);
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
MR_def_label(set_tree234__remove_2_4_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0,
		set_tree234__remove_2_4_0_i26);
MR_def_label(set_tree234__remove_2_4_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__remove_2_4_0_i102);
MR_def_label(set_tree234__remove_2_4_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i104);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__remove_2_4_0_i107);
MR_def_label(set_tree234__remove_2_4_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i106);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i110);
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
MR_def_label(set_tree234__remove_2_4_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r7 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0,
		set_tree234__remove_2_4_0_i26);
MR_def_label(set_tree234__remove_2_4_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(8);
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_tree234__remove_2_4_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i113);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_localcall_lab(set_tree234__remove_2_4_0,
		set_tree234__remove_2_4_0_i114);
MR_def_label(set_tree234__remove_2_4_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i1);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i117);
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
MR_def_label(set_tree234__remove_2_4_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r7 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0,
		set_tree234__remove_2_4_0_i26);
MR_def_label(set_tree234__remove_2_4_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(set_tree234__remove_2_4_0,
		set_tree234__remove_2_4_0_i119);
MR_def_label(set_tree234__remove_2_4_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i1);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i122);
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
MR_def_label(set_tree234__remove_2_4_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0,
		set_tree234__remove_2_4_0_i26);
MR_def_label(set_tree234__remove_2_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(9) = MR_r1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__remove_2_4_0_i28);
MR_def_label(set_tree234__remove_2_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i30);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__remove_2_4_0_i33);
MR_def_label(set_tree234__remove_2_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i32);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i36);
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
MR_def_label(set_tree234__remove_2_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0,
		set_tree234__remove_2_4_0_i26);
MR_def_label(set_tree234__remove_2_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_tree234__remove_2_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i39);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_localcall_lab(set_tree234__remove_2_4_0,
		set_tree234__remove_2_4_0_i40);
MR_def_label(set_tree234__remove_2_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i1);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i43);
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
MR_def_label(set_tree234__remove_2_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0,
		set_tree234__remove_2_4_0_i26);
MR_def_label(set_tree234__remove_2_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__remove_2_4_0_i45);
MR_def_label(set_tree234__remove_2_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i47);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__remove_2_4_0_i50);
MR_def_label(set_tree234__remove_2_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i49);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i53);
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
MR_def_label(set_tree234__remove_2_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r5 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0,
		set_tree234__remove_2_4_0_i26);
MR_def_label(set_tree234__remove_2_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(set_tree234__remove_2_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i56);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_localcall_lab(set_tree234__remove_2_4_0,
		set_tree234__remove_2_4_0_i57);
MR_def_label(set_tree234__remove_2_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i1);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i60);
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
MR_def_label(set_tree234__remove_2_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0,
		set_tree234__remove_2_4_0_i26);
MR_def_label(set_tree234__remove_2_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(set_tree234__remove_2_4_0,
		set_tree234__remove_2_4_0_i62);
MR_def_label(set_tree234__remove_2_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i1);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i65);
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
MR_def_label(set_tree234__remove_2_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0,
		set_tree234__remove_2_4_0_i26);
MR_def_label(set_tree234__remove_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(9) = MR_r1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		set_tree234__remove_2_4_0_i5);
MR_def_label(set_tree234__remove_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i7);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(set_tree234__remove_least_2_4_0,
		set_tree234__remove_2_4_0_i10);
MR_def_label(set_tree234__remove_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i9);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i13);
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
MR_def_label(set_tree234__remove_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0,
		set_tree234__remove_2_4_0_i26);
MR_def_label(set_tree234__remove_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(set_tree234__remove_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i16);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(set_tree234__remove_2_4_0,
		set_tree234__remove_2_4_0_i17);
MR_def_label(set_tree234__remove_2_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i1);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i20);
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
MR_def_label(set_tree234__remove_2_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0,
		set_tree234__remove_2_4_0_i26);
MR_def_label(set_tree234__remove_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(set_tree234__remove_2_4_0,
		set_tree234__remove_2_4_0_i22);
MR_def_label(set_tree234__remove_2_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i1);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(set_tree234__remove_2_4_0_i25);
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
MR_def_label(set_tree234__remove_2_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0,
		set_tree234__remove_2_4_0_i26);
MR_def_label(set_tree234__remove_2_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
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


MR_BEGIN_MODULE(set_tree234_module31)
	MR_init_entry1(set_tree234__remove_3_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module32)
	MR_init_entry1(set_tree234__remove_list_3_0);
	MR_init_label4(set_tree234__remove_list_3_0,18,3,4,1)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_ctfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(set_tree234__remove_2_4_0,
		set_tree234__remove_list_3_0_i4);
MR_def_label(set_tree234__remove_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__remove_list_3_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(set_tree234__remove_list_3_0_i18);
MR_def_label(set_tree234__remove_list_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module33)
	MR_init_entry1(set_tree234__remove_least_3_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module34)
	MR_init_entry1(set_tree234__union_3_0);
	MR_init_label8(set_tree234__union_3_0,4,5,6,7,9,10,11,12)
	MR_init_label8(set_tree234__union_3_0,13,15,16,17,18,19,20,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__union_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__union_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__union_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__union_3_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__union_3_0_i15));
MR_def_label(set_tree234__union_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(8);
MR_def_label(set_tree234__union_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	}
	MR_np_localcall_lab(set_tree234__union_3_0,
		set_tree234__union_3_0_i6);
MR_def_label(set_tree234__union_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__union_3_0_i7);
MR_def_label(set_tree234__union_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__union_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__union_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__union_3_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__union_3_0_i15));
MR_def_label(set_tree234__union_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_ctfield(2, MR_r2, 2);
	}
	MR_np_localcall_lab(set_tree234__union_3_0,
		set_tree234__union_3_0_i10);
MR_def_label(set_tree234__union_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__union_3_0_i11);
MR_def_label(set_tree234__union_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(set_tree234__union_3_0,
		set_tree234__union_3_0_i12);
MR_def_label(set_tree234__union_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__union_3_0_i13);
MR_def_label(set_tree234__union_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__union_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__union_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__union_3_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__union_3_0_i15));
MR_def_label(set_tree234__union_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_ctfield(3, MR_r2, 3);
	}
	MR_np_localcall_lab(set_tree234__union_3_0,
		set_tree234__union_3_0_i16);
MR_def_label(set_tree234__union_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__union_3_0_i17);
MR_def_label(set_tree234__union_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_localcall_lab(set_tree234__union_3_0,
		set_tree234__union_3_0_i18);
MR_def_label(set_tree234__union_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__union_3_0_i19);
MR_def_label(set_tree234__union_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_np_localcall_lab(set_tree234__union_3_0,
		set_tree234__union_3_0_i20);
MR_def_label(set_tree234__union_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__union_3_0_i21);
MR_def_label(set_tree234__union_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__union_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__union_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__union_3_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__union_3_0_i15));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module35)
	MR_init_entry1(fn__set_tree234__union_2_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module36)
	MR_init_entry1(set_tree234__union_list_2_0);
	MR_init_label2(set_tree234__union_list_2_0,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__union_list_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(set_tree234__union_list_2_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(set_tree234__union_list_2_0,
		set_tree234__union_list_2_0_i4);
MR_def_label(set_tree234__union_list_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(set_tree234__union_3_0);
MR_def_label(set_tree234__union_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module37)
	MR_init_entry1(fn__set_tree234__union_list_1_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module38)
	MR_init_entry1(set_tree234__power_union_2_3_0);
	MR_init_label8(set_tree234__power_union_2_3_0,4,5,6,7,9,10,11,12)
	MR_init_label8(set_tree234__power_union_2_3_0,13,15,16,17,18,19,20,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__power_union_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__power_union_2_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__power_union_2_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__power_union_2_3_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__power_union_2_3_0_i15));
MR_def_label(set_tree234__power_union_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(8);
MR_def_label(set_tree234__power_union_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	}
	MR_np_localcall_lab(set_tree234__power_union_2_3_0,
		set_tree234__power_union_2_3_0_i6);
MR_def_label(set_tree234__power_union_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set_tree234__union_3_0,
		set_tree234__power_union_2_3_0_i7);
MR_def_label(set_tree234__power_union_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__power_union_2_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__power_union_2_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__power_union_2_3_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__power_union_2_3_0_i15));
MR_def_label(set_tree234__power_union_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_ctfield(2, MR_r2, 2);
	}
	MR_np_localcall_lab(set_tree234__power_union_2_3_0,
		set_tree234__power_union_2_3_0_i10);
MR_def_label(set_tree234__power_union_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set_tree234__union_3_0,
		set_tree234__power_union_2_3_0_i11);
MR_def_label(set_tree234__power_union_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(set_tree234__power_union_2_3_0,
		set_tree234__power_union_2_3_0_i12);
MR_def_label(set_tree234__power_union_2_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__union_3_0,
		set_tree234__power_union_2_3_0_i13);
MR_def_label(set_tree234__power_union_2_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__power_union_2_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__power_union_2_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__power_union_2_3_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__power_union_2_3_0_i15));
MR_def_label(set_tree234__power_union_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_ctfield(3, MR_r2, 3);
	}
	MR_np_localcall_lab(set_tree234__power_union_2_3_0,
		set_tree234__power_union_2_3_0_i16);
MR_def_label(set_tree234__power_union_2_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set_tree234__union_3_0,
		set_tree234__power_union_2_3_0_i17);
MR_def_label(set_tree234__power_union_2_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_localcall_lab(set_tree234__power_union_2_3_0,
		set_tree234__power_union_2_3_0_i18);
MR_def_label(set_tree234__power_union_2_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__union_3_0,
		set_tree234__power_union_2_3_0_i19);
MR_def_label(set_tree234__power_union_2_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_np_localcall_lab(set_tree234__power_union_2_3_0,
		set_tree234__power_union_2_3_0_i20);
MR_def_label(set_tree234__power_union_2_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(set_tree234__union_3_0,
		set_tree234__power_union_2_3_0_i21);
MR_def_label(set_tree234__power_union_2_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__power_union_2_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__power_union_2_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__power_union_2_3_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__power_union_2_3_0_i15));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module39)
	MR_init_entry1(set_tree234__power_union_2_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module40)
	MR_init_entry1(fn__set_tree234__power_union_1_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module41)
	MR_init_entry1(set_tree234__intersect_2_4_0);
	MR_init_label8(set_tree234__intersect_2_4_0,4,5,6,8,9,7,12,13)
	MR_init_label8(set_tree234__intersect_2_4_0,15,16,14,17,18,20,21,19)
	MR_init_label8(set_tree234__intersect_2_4_0,24,25,27,28,26,29,30,32)
	MR_init_label7(set_tree234__intersect_2_4_0,33,31,34,35,37,38,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__intersect_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i12) MR_AND
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i24));
MR_def_label(set_tree234__intersect_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__intersect_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(9) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	}
	MR_np_localcall_lab(set_tree234__intersect_2_4_0,
		set_tree234__intersect_2_4_0_i6);
MR_def_label(set_tree234__intersect_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__intersect_2_4_0_i8);
MR_def_label(set_tree234__intersect_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__intersect_2_4_0_i7);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__intersect_2_4_0_i9);
MR_def_label(set_tree234__intersect_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i12) MR_AND
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i24));
MR_def_label(set_tree234__intersect_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r1 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i12) MR_AND
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i24));
MR_def_label(set_tree234__intersect_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(9) = MR_r1;
	MR_r2 = MR_ctfield(2, MR_r2, 2);
	}
	MR_np_localcall_lab(set_tree234__intersect_2_4_0,
		set_tree234__intersect_2_4_0_i13);
MR_def_label(set_tree234__intersect_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__intersect_2_4_0_i15);
MR_def_label(set_tree234__intersect_2_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__intersect_2_4_0_i14);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__intersect_2_4_0_i16);
MR_def_label(set_tree234__intersect_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(set_tree234__intersect_2_4_0_i17);
MR_def_label(set_tree234__intersect_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r1 = MR_sv(9);
MR_def_label(set_tree234__intersect_2_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(9) = MR_r1;
	MR_np_localcall_lab(set_tree234__intersect_2_4_0,
		set_tree234__intersect_2_4_0_i18);
MR_def_label(set_tree234__intersect_2_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__intersect_2_4_0_i20);
MR_def_label(set_tree234__intersect_2_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__intersect_2_4_0_i19);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__intersect_2_4_0_i21);
MR_def_label(set_tree234__intersect_2_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i12) MR_AND
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i24));
MR_def_label(set_tree234__intersect_2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i12) MR_AND
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i24));
MR_def_label(set_tree234__intersect_2_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(9) = MR_r1;
	MR_r2 = MR_ctfield(3, MR_r2, 3);
	}
	MR_np_localcall_lab(set_tree234__intersect_2_4_0,
		set_tree234__intersect_2_4_0_i25);
MR_def_label(set_tree234__intersect_2_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__intersect_2_4_0_i27);
MR_def_label(set_tree234__intersect_2_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__intersect_2_4_0_i26);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__intersect_2_4_0_i28);
MR_def_label(set_tree234__intersect_2_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(set_tree234__intersect_2_4_0_i29);
MR_def_label(set_tree234__intersect_2_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(8);
	MR_r1 = MR_sv(9);
MR_def_label(set_tree234__intersect_2_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(9) = MR_r1;
	MR_np_localcall_lab(set_tree234__intersect_2_4_0,
		set_tree234__intersect_2_4_0_i30);
MR_def_label(set_tree234__intersect_2_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__intersect_2_4_0_i32);
MR_def_label(set_tree234__intersect_2_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__intersect_2_4_0_i31);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__intersect_2_4_0_i33);
MR_def_label(set_tree234__intersect_2_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(set_tree234__intersect_2_4_0_i34);
MR_def_label(set_tree234__intersect_2_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(9);
MR_def_label(set_tree234__intersect_2_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(9) = MR_r1;
	MR_np_localcall_lab(set_tree234__intersect_2_4_0,
		set_tree234__intersect_2_4_0_i35);
MR_def_label(set_tree234__intersect_2_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		set_tree234__intersect_2_4_0_i37);
MR_def_label(set_tree234__intersect_2_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(set_tree234__intersect_2_4_0_i36);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__intersect_2_4_0_i38);
MR_def_label(set_tree234__intersect_2_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i12) MR_AND
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i24));
MR_def_label(set_tree234__intersect_2_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i12) MR_AND
		MR_LABEL_AP(set_tree234__intersect_2_4_0_i24));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module42)
	MR_init_entry1(set_tree234__intersect_3_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module43)
	MR_init_entry1(fn__set_tree234__intersect_2_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module44)
	MR_init_entry1(fn__set_tree234__intersect_list_2_2_0);
	MR_init_label4(fn__set_tree234__intersect_list_2_2_0,16,3,4,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__intersect_list_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__set_tree234__intersect_list_2_2_0,16)
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
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
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
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__set_tree234__intersect_list_2_2_0_i16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module45)
	MR_init_entry1(fn__set_tree234__intersect_list_1_0);
	MR_init_label1(fn__set_tree234__intersect_list_1_0,3)
MR_BEGIN_CODE

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
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	MR_np_tailcall_ent(fn__set_tree234__intersect_list_2_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module46)
	MR_init_entry1(fn__set_tree234__power_intersect_1_0);
	MR_init_label2(fn__set_tree234__power_intersect_1_0,2,4)
MR_BEGIN_CODE

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
		fn__set_tree234__power_intersect_1_0_i2);
MR_def_label(fn__set_tree234__power_intersect_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__set_tree234__power_intersect_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
MR_def_label(fn__set_tree234__power_intersect_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__set_tree234__intersect_list_2_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module47)
	MR_init_entry1(set_tree234__difference_2_3_0);
	MR_init_label8(set_tree234__difference_2_3_0,4,5,6,7,9,10,11,12)
	MR_init_label8(set_tree234__difference_2_3_0,13,15,16,17,18,19,20,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__difference_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__difference_2_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__difference_2_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__difference_2_3_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__difference_2_3_0_i15));
MR_def_label(set_tree234__difference_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(8);
MR_def_label(set_tree234__difference_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	}
	MR_np_localcall_lab(set_tree234__difference_2_3_0,
		set_tree234__difference_2_3_0_i6);
MR_def_label(set_tree234__difference_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set_tree234__delete_2_4_0,
		set_tree234__difference_2_3_0_i7);
MR_def_label(set_tree234__difference_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__difference_2_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__difference_2_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__difference_2_3_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__difference_2_3_0_i15));
MR_def_label(set_tree234__difference_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_ctfield(2, MR_r2, 2);
	}
	MR_np_localcall_lab(set_tree234__difference_2_3_0,
		set_tree234__difference_2_3_0_i10);
MR_def_label(set_tree234__difference_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set_tree234__delete_2_4_0,
		set_tree234__difference_2_3_0_i11);
MR_def_label(set_tree234__difference_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(set_tree234__difference_2_3_0,
		set_tree234__difference_2_3_0_i12);
MR_def_label(set_tree234__difference_2_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__delete_2_4_0,
		set_tree234__difference_2_3_0_i13);
MR_def_label(set_tree234__difference_2_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__difference_2_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__difference_2_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__difference_2_3_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__difference_2_3_0_i15));
MR_def_label(set_tree234__difference_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_ctfield(3, MR_r2, 3);
	}
	MR_np_localcall_lab(set_tree234__difference_2_3_0,
		set_tree234__difference_2_3_0_i16);
MR_def_label(set_tree234__difference_2_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set_tree234__delete_2_4_0,
		set_tree234__difference_2_3_0_i17);
MR_def_label(set_tree234__difference_2_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_localcall_lab(set_tree234__difference_2_3_0,
		set_tree234__difference_2_3_0_i18);
MR_def_label(set_tree234__difference_2_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__delete_2_4_0,
		set_tree234__difference_2_3_0_i19);
MR_def_label(set_tree234__difference_2_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_np_localcall_lab(set_tree234__difference_2_3_0,
		set_tree234__difference_2_3_0_i20);
MR_def_label(set_tree234__difference_2_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(set_tree234__delete_2_4_0,
		set_tree234__difference_2_3_0_i21);
MR_def_label(set_tree234__difference_2_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(set_tree234__difference_2_3_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__difference_2_3_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__difference_2_3_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__difference_2_3_0_i15));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module48)
	MR_init_entry1(set_tree234__difference_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__difference_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(set_tree234__difference_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module49)
	MR_init_entry1(fn__set_tree234__difference_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__difference_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(set_tree234__difference_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module50)
	MR_init_entry1(fn__set_tree234__count_1_0);
	MR_init_label8(fn__set_tree234__count_1_0,4,23,6,7,24,9,10,11)
	MR_init_label5(fn__set_tree234__count_1_0,25,13,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__count_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__set_tree234__count_1_0_i4) MR_AND
		MR_LABEL_AP(fn__set_tree234__count_1_0_i23) MR_AND
		MR_LABEL_AP(fn__set_tree234__count_1_0_i24) MR_AND
		MR_LABEL_AP(fn__set_tree234__count_1_0_i25));
MR_def_label(fn__set_tree234__count_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__set_tree234__count_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r2, 2);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(fn__set_tree234__count_1_0,
		fn__set_tree234__count_1_0_i6);
MR_def_label(fn__set_tree234__count_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_localcall_lab(fn__set_tree234__count_1_0,
		fn__set_tree234__count_1_0_i7);
MR_def_label(fn__set_tree234__count_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) 1 + (MR_Integer) MR_sv(1)) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(5);
MR_def_label(fn__set_tree234__count_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_ctfield(2, MR_r2, 2);
	}
	MR_np_localcall_lab(fn__set_tree234__count_1_0,
		fn__set_tree234__count_1_0_i9);
MR_def_label(fn__set_tree234__count_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_localcall_lab(fn__set_tree234__count_1_0,
		fn__set_tree234__count_1_0_i10);
MR_def_label(fn__set_tree234__count_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_localcall_lab(fn__set_tree234__count_1_0,
		fn__set_tree234__count_1_0_i11);
MR_def_label(fn__set_tree234__count_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((((MR_Integer) 2 + (MR_Integer) MR_sv(1)) + (MR_Integer) MR_sv(2)) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(5);
MR_def_label(fn__set_tree234__count_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_ctfield(3, MR_r2, 3);
	}
	MR_np_localcall_lab(fn__set_tree234__count_1_0,
		fn__set_tree234__count_1_0_i13);
MR_def_label(fn__set_tree234__count_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_localcall_lab(fn__set_tree234__count_1_0,
		fn__set_tree234__count_1_0_i14);
MR_def_label(fn__set_tree234__count_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_localcall_lab(fn__set_tree234__count_1_0,
		fn__set_tree234__count_1_0_i15);
MR_def_label(fn__set_tree234__count_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_localcall_lab(fn__set_tree234__count_1_0,
		fn__set_tree234__count_1_0_i16);
MR_def_label(fn__set_tree234__count_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((((MR_Integer) 3 + (MR_Integer) MR_sv(1)) + (MR_Integer) MR_sv(2)) + (MR_Integer) MR_sv(3)) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(set_tree234_module51)
	MR_init_entry1(set_tree234__map_pred_4_0);
	MR_init_label8(set_tree234__map_pred_4_0,4,5,6,7,9,10,11,12)
	MR_init_label8(set_tree234__map_pred_4_0,13,15,16,17,18,19,20,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__map_pred_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__map_pred_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__map_pred_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__map_pred_4_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__map_pred_4_0_i15));
MR_def_label(set_tree234__map_pred_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__map_pred_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_ctfield(1, MR_r4, 1);
	}
	MR_np_localcall_lab(set_tree234__map_pred_4_0,
		set_tree234__map_pred_4_0_i6);
MR_def_label(set_tree234__map_pred_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__map_pred_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__map_pred_4_0_i7);
MR_def_label(set_tree234__map_pred_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__map_pred_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__map_pred_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__map_pred_4_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__map_pred_4_0_i15));
	}
MR_def_label(set_tree234__map_pred_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_ctfield(2, MR_r4, 2);
	}
	MR_np_localcall_lab(set_tree234__map_pred_4_0,
		set_tree234__map_pred_4_0_i10);
MR_def_label(set_tree234__map_pred_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__map_pred_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__map_pred_4_0_i11);
MR_def_label(set_tree234__map_pred_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(set_tree234__map_pred_4_0,
		set_tree234__map_pred_4_0_i12);
MR_def_label(set_tree234__map_pred_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__map_pred_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__map_pred_4_0_i13);
MR_def_label(set_tree234__map_pred_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__map_pred_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__map_pred_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__map_pred_4_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__map_pred_4_0_i15));
	}
MR_def_label(set_tree234__map_pred_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_ctfield(3, MR_r4, 3);
	}
	MR_np_localcall_lab(set_tree234__map_pred_4_0,
		set_tree234__map_pred_4_0_i16);
MR_def_label(set_tree234__map_pred_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
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
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	}
	MR_np_localcall_lab(set_tree234__map_pred_4_0,
		set_tree234__map_pred_4_0_i18);
MR_def_label(set_tree234__map_pred_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__map_pred_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__map_pred_4_0_i19);
MR_def_label(set_tree234__map_pred_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	}
	MR_np_localcall_lab(set_tree234__map_pred_4_0,
		set_tree234__map_pred_4_0_i20);
MR_def_label(set_tree234__map_pred_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__map_pred_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__map_pred_4_0_i21);
MR_def_label(set_tree234__map_pred_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__map_pred_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__map_pred_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__map_pred_4_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__map_pred_4_0_i15));
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module52)
	MR_init_entry1(set_tree234__map_3_0);
	MR_init_label1(set_tree234__map_3_0,2)
MR_BEGIN_CODE

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
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(set_tree234__list_to_set_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module53)
	MR_init_entry1(set_tree234__map_func_4_0);
	MR_init_label8(set_tree234__map_func_4_0,4,5,6,7,9,10,11,12)
	MR_init_label8(set_tree234__map_func_4_0,13,15,16,17,18,19,20,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__map_func_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__map_func_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__map_func_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__map_func_4_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__map_func_4_0_i15));
MR_def_label(set_tree234__map_func_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__map_func_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_ctfield(1, MR_r4, 1);
	}
	MR_np_localcall_lab(set_tree234__map_func_4_0,
		set_tree234__map_func_4_0_i6);
MR_def_label(set_tree234__map_func_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__map_func_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__map_func_4_0_i7);
MR_def_label(set_tree234__map_func_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__map_func_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__map_func_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__map_func_4_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__map_func_4_0_i15));
	}
MR_def_label(set_tree234__map_func_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_ctfield(2, MR_r4, 2);
	}
	MR_np_localcall_lab(set_tree234__map_func_4_0,
		set_tree234__map_func_4_0_i10);
MR_def_label(set_tree234__map_func_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__map_func_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__map_func_4_0_i11);
MR_def_label(set_tree234__map_func_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	}
	MR_np_localcall_lab(set_tree234__map_func_4_0,
		set_tree234__map_func_4_0_i12);
MR_def_label(set_tree234__map_func_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__map_func_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__map_func_4_0_i13);
MR_def_label(set_tree234__map_func_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__map_func_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__map_func_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__map_func_4_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__map_func_4_0_i15));
	}
MR_def_label(set_tree234__map_func_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_ctfield(3, MR_r4, 3);
	}
	MR_np_localcall_lab(set_tree234__map_func_4_0,
		set_tree234__map_func_4_0_i16);
MR_def_label(set_tree234__map_func_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
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
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	}
	MR_np_localcall_lab(set_tree234__map_func_4_0,
		set_tree234__map_func_4_0_i18);
MR_def_label(set_tree234__map_func_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__map_func_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__map_func_4_0_i19);
MR_def_label(set_tree234__map_func_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	}
	MR_np_localcall_lab(set_tree234__map_func_4_0,
		set_tree234__map_func_4_0_i20);
MR_def_label(set_tree234__map_func_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__map_func_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__map_func_4_0_i21);
MR_def_label(set_tree234__map_func_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__map_func_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__map_func_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__map_func_4_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__map_func_4_0_i15));
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module54)
	MR_init_entry1(fn__set_tree234__map_2_0);
	MR_init_label1(fn__set_tree234__map_2_0,2)
MR_BEGIN_CODE

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
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(set_tree234__list_to_set_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module55)
	MR_init_entry1(set_tree234__filter_map_pred_4_0);
	MR_init_label8(set_tree234__filter_map_pred_4_0,4,5,6,9,7,13,14,17)
	MR_init_label8(set_tree234__filter_map_pred_4_0,15,19,20,23,21,27,28,31)
	MR_init_label8(set_tree234__filter_map_pred_4_0,29,33,34,37,35,39,40,43)
	MR_init_label1(set_tree234__filter_map_pred_4_0,41)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__filter_map_pred_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i13) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i27));
MR_def_label(set_tree234__filter_map_pred_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__filter_map_pred_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_ctfield(1, MR_r4, 1);
	}
	MR_np_localcall_lab(set_tree234__filter_map_pred_4_0,
		set_tree234__filter_map_pred_4_0_i6);
MR_def_label(set_tree234__filter_map_pred_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__filter_map_pred_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__filter_map_pred_4_0_i9);
MR_def_label(set_tree234__filter_map_pred_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i13) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i27));
	}
MR_def_label(set_tree234__filter_map_pred_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i13) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i27));
MR_def_label(set_tree234__filter_map_pred_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_ctfield(2, MR_r4, 2);
	}
	MR_np_localcall_lab(set_tree234__filter_map_pred_4_0,
		set_tree234__filter_map_pred_4_0_i14);
MR_def_label(set_tree234__filter_map_pred_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__filter_map_pred_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__filter_map_pred_4_0_i17);
MR_def_label(set_tree234__filter_map_pred_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i19);
	}
MR_def_label(set_tree234__filter_map_pred_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
MR_def_label(set_tree234__filter_map_pred_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_np_localcall_lab(set_tree234__filter_map_pred_4_0,
		set_tree234__filter_map_pred_4_0_i20);
MR_def_label(set_tree234__filter_map_pred_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__filter_map_pred_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__filter_map_pred_4_0_i23);
MR_def_label(set_tree234__filter_map_pred_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i13) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i27));
	}
MR_def_label(set_tree234__filter_map_pred_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i13) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i27));
MR_def_label(set_tree234__filter_map_pred_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_ctfield(3, MR_r4, 3);
	}
	MR_np_localcall_lab(set_tree234__filter_map_pred_4_0,
		set_tree234__filter_map_pred_4_0_i28);
MR_def_label(set_tree234__filter_map_pred_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
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
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i33);
	}
MR_def_label(set_tree234__filter_map_pred_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
MR_def_label(set_tree234__filter_map_pred_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_np_localcall_lab(set_tree234__filter_map_pred_4_0,
		set_tree234__filter_map_pred_4_0_i34);
MR_def_label(set_tree234__filter_map_pred_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__filter_map_pred_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__filter_map_pred_4_0_i37);
MR_def_label(set_tree234__filter_map_pred_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i35);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i39);
	}
MR_def_label(set_tree234__filter_map_pred_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
MR_def_label(set_tree234__filter_map_pred_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_np_localcall_lab(set_tree234__filter_map_pred_4_0,
		set_tree234__filter_map_pred_4_0_i40);
MR_def_label(set_tree234__filter_map_pred_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__filter_map_pred_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__filter_map_pred_4_0_i43);
MR_def_label(set_tree234__filter_map_pred_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__filter_map_pred_4_0_i41);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i13) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i27));
	}
MR_def_label(set_tree234__filter_map_pred_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i13) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_pred_4_0_i27));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module56)
	MR_init_entry1(set_tree234__filter_map_3_0);
	MR_init_label1(set_tree234__filter_map_3_0,2)
MR_BEGIN_CODE

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
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(set_tree234__list_to_set_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module57)
	MR_init_entry1(set_tree234__filter_map_func_4_0);
	MR_init_label8(set_tree234__filter_map_func_4_0,4,5,6,9,7,13,14,17)
	MR_init_label8(set_tree234__filter_map_func_4_0,15,19,20,23,21,27,28,31)
	MR_init_label8(set_tree234__filter_map_func_4_0,29,33,34,37,35,39,40,43)
	MR_init_label1(set_tree234__filter_map_func_4_0,41)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__filter_map_func_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i13) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i27));
MR_def_label(set_tree234__filter_map_func_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__filter_map_func_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_ctfield(1, MR_r4, 1);
	}
	MR_np_localcall_lab(set_tree234__filter_map_func_4_0,
		set_tree234__filter_map_func_4_0_i6);
MR_def_label(set_tree234__filter_map_func_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__filter_map_func_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__filter_map_func_4_0_i9);
MR_def_label(set_tree234__filter_map_func_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i13) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i27));
	}
MR_def_label(set_tree234__filter_map_func_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i13) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i27));
MR_def_label(set_tree234__filter_map_func_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_ctfield(2, MR_r4, 2);
	}
	MR_np_localcall_lab(set_tree234__filter_map_func_4_0,
		set_tree234__filter_map_func_4_0_i14);
MR_def_label(set_tree234__filter_map_func_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__filter_map_func_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__filter_map_func_4_0_i17);
MR_def_label(set_tree234__filter_map_func_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i19);
	}
MR_def_label(set_tree234__filter_map_func_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
MR_def_label(set_tree234__filter_map_func_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_np_localcall_lab(set_tree234__filter_map_func_4_0,
		set_tree234__filter_map_func_4_0_i20);
MR_def_label(set_tree234__filter_map_func_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__filter_map_func_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__filter_map_func_4_0_i23);
MR_def_label(set_tree234__filter_map_func_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i13) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i27));
	}
MR_def_label(set_tree234__filter_map_func_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i13) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i27));
MR_def_label(set_tree234__filter_map_func_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_ctfield(3, MR_r4, 3);
	}
	MR_np_localcall_lab(set_tree234__filter_map_func_4_0,
		set_tree234__filter_map_func_4_0_i28);
MR_def_label(set_tree234__filter_map_func_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
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
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i33);
	}
MR_def_label(set_tree234__filter_map_func_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
MR_def_label(set_tree234__filter_map_func_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_np_localcall_lab(set_tree234__filter_map_func_4_0,
		set_tree234__filter_map_func_4_0_i34);
MR_def_label(set_tree234__filter_map_func_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__filter_map_func_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__filter_map_func_4_0_i37);
MR_def_label(set_tree234__filter_map_func_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i35);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i39);
	}
MR_def_label(set_tree234__filter_map_func_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
MR_def_label(set_tree234__filter_map_func_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_np_localcall_lab(set_tree234__filter_map_func_4_0,
		set_tree234__filter_map_func_4_0_i40);
MR_def_label(set_tree234__filter_map_func_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__filter_map_func_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__filter_map_func_4_0_i43);
MR_def_label(set_tree234__filter_map_func_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__filter_map_func_4_0_i41);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i13) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i27));
	}
MR_def_label(set_tree234__filter_map_func_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i13) MR_AND
		MR_LABEL_AP(set_tree234__filter_map_func_4_0_i27));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module58)
	MR_init_entry1(fn__set_tree234__filter_map_2_0);
	MR_init_label1(fn__set_tree234__filter_map_2_0,2)
MR_BEGIN_CODE

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
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(set_tree234__list_to_set_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(set_tree234_module59)
	MR_init_entry1(set_tree234__fold_4_0);
	MR_init_label8(set_tree234__fold_4_0,4,5,6,7,9,10,11,12)
	MR_init_label8(set_tree234__fold_4_0,13,15,16,17,18,19,20,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__fold_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__fold_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__fold_4_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__fold_4_0_i15));
MR_def_label(set_tree234__fold_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(10);
MR_def_label(set_tree234__fold_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_ctfield(1, MR_r4, 1);
	}
	MR_np_localcall_lab(set_tree234__fold_4_0,
		set_tree234__fold_4_0_i6);
MR_def_label(set_tree234__fold_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__set_tree234__fold_4_0_i7);
MR_def_label(set_tree234__fold_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__fold_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__fold_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__fold_4_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__fold_4_0_i15));
MR_def_label(set_tree234__fold_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_ctfield(2, MR_r4, 2);
	}
	MR_np_localcall_lab(set_tree234__fold_4_0,
		set_tree234__fold_4_0_i10);
MR_def_label(set_tree234__fold_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__set_tree234__fold_4_0_i11);
MR_def_label(set_tree234__fold_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_localcall_lab(set_tree234__fold_4_0,
		set_tree234__fold_4_0_i12);
MR_def_label(set_tree234__fold_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__set_tree234__fold_4_0_i13);
MR_def_label(set_tree234__fold_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__fold_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__fold_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__fold_4_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__fold_4_0_i15));
MR_def_label(set_tree234__fold_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_ctfield(3, MR_r4, 3);
	}
	MR_np_localcall_lab(set_tree234__fold_4_0,
		set_tree234__fold_4_0_i16);
MR_def_label(set_tree234__fold_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__set_tree234__fold_4_0_i17);
MR_def_label(set_tree234__fold_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_localcall_lab(set_tree234__fold_4_0,
		set_tree234__fold_4_0_i18);
MR_def_label(set_tree234__fold_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__set_tree234__fold_4_0_i19);
MR_def_label(set_tree234__fold_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_np_localcall_lab(set_tree234__fold_4_0,
		set_tree234__fold_4_0_i20);
MR_def_label(set_tree234__fold_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__set_tree234__fold_4_0_i21);
MR_def_label(set_tree234__fold_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(set_tree234__fold_4_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__fold_4_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__fold_4_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__fold_4_0_i15));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module60)
	MR_init_entry1(fn__set_tree234__fold_3_0);
	MR_init_label8(fn__set_tree234__fold_3_0,4,5,6,7,9,10,11,12)
	MR_init_label8(fn__set_tree234__fold_3_0,13,15,16,17,18,19,20,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__set_tree234__fold_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(fn__set_tree234__fold_3_0_i4) MR_AND
		MR_LABEL_AP(fn__set_tree234__fold_3_0_i5) MR_AND
		MR_LABEL_AP(fn__set_tree234__fold_3_0_i9) MR_AND
		MR_LABEL_AP(fn__set_tree234__fold_3_0_i15));
MR_def_label(fn__set_tree234__fold_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(10);
MR_def_label(fn__set_tree234__fold_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_ctfield(1, MR_r4, 1);
	}
	MR_np_localcall_lab(fn__set_tree234__fold_3_0,
		fn__set_tree234__fold_3_0_i6);
MR_def_label(fn__set_tree234__fold_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__set_tree234__fold_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__set_tree234__fold_3_0_i7);
MR_def_label(fn__set_tree234__fold_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(fn__set_tree234__fold_3_0_i4) MR_AND
		MR_LABEL_AP(fn__set_tree234__fold_3_0_i5) MR_AND
		MR_LABEL_AP(fn__set_tree234__fold_3_0_i9) MR_AND
		MR_LABEL_AP(fn__set_tree234__fold_3_0_i15));
MR_def_label(fn__set_tree234__fold_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_ctfield(2, MR_r4, 2);
	}
	MR_np_localcall_lab(fn__set_tree234__fold_3_0,
		fn__set_tree234__fold_3_0_i10);
MR_def_label(fn__set_tree234__fold_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__set_tree234__fold_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__set_tree234__fold_3_0_i11);
MR_def_label(fn__set_tree234__fold_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_localcall_lab(fn__set_tree234__fold_3_0,
		fn__set_tree234__fold_3_0_i12);
MR_def_label(fn__set_tree234__fold_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__set_tree234__fold_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__set_tree234__fold_3_0_i13);
MR_def_label(fn__set_tree234__fold_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(fn__set_tree234__fold_3_0_i4) MR_AND
		MR_LABEL_AP(fn__set_tree234__fold_3_0_i5) MR_AND
		MR_LABEL_AP(fn__set_tree234__fold_3_0_i9) MR_AND
		MR_LABEL_AP(fn__set_tree234__fold_3_0_i15));
MR_def_label(fn__set_tree234__fold_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r4 = MR_ctfield(3, MR_r4, 3);
	}
	MR_np_localcall_lab(fn__set_tree234__fold_3_0,
		fn__set_tree234__fold_3_0_i16);
MR_def_label(fn__set_tree234__fold_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__set_tree234__fold_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__set_tree234__fold_3_0_i17);
MR_def_label(fn__set_tree234__fold_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_localcall_lab(fn__set_tree234__fold_3_0,
		fn__set_tree234__fold_3_0_i18);
MR_def_label(fn__set_tree234__fold_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__set_tree234__fold_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__set_tree234__fold_3_0_i19);
MR_def_label(fn__set_tree234__fold_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_np_localcall_lab(fn__set_tree234__fold_3_0,
		fn__set_tree234__fold_3_0_i20);
MR_def_label(fn__set_tree234__fold_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__set_tree234__fold_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__set_tree234__fold_3_0_i21);
MR_def_label(fn__set_tree234__fold_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(fn__set_tree234__fold_3_0_i4) MR_AND
		MR_LABEL_AP(fn__set_tree234__fold_3_0_i5) MR_AND
		MR_LABEL_AP(fn__set_tree234__fold_3_0_i9) MR_AND
		MR_LABEL_AP(fn__set_tree234__fold_3_0_i15));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(set_tree234_module61)
	MR_init_entry1(set_tree234__fold2_6_0);
	MR_init_label8(set_tree234__fold2_6_0,4,5,6,7,9,10,11,12)
	MR_init_label8(set_tree234__fold2_6_0,13,15,16,17,18,19,20,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__fold2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(set_tree234__fold2_6_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__fold2_6_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__fold2_6_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__fold2_6_0_i15));
MR_def_label(set_tree234__fold2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(11);
MR_def_label(set_tree234__fold2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r5 = MR_ctfield(1, MR_r5, 1);
	}
	MR_np_localcall_lab(set_tree234__fold2_6_0,
		set_tree234__fold2_6_0_i6);
MR_def_label(set_tree234__fold2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__set_tree234__fold2_6_0_i7);
MR_def_label(set_tree234__fold2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(11);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(set_tree234__fold2_6_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__fold2_6_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__fold2_6_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__fold2_6_0_i15));
MR_def_label(set_tree234__fold2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r5 = MR_ctfield(2, MR_r5, 2);
	}
	MR_np_localcall_lab(set_tree234__fold2_6_0,
		set_tree234__fold2_6_0_i10);
MR_def_label(set_tree234__fold2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__set_tree234__fold2_6_0_i11);
MR_def_label(set_tree234__fold2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_np_localcall_lab(set_tree234__fold2_6_0,
		set_tree234__fold2_6_0_i12);
MR_def_label(set_tree234__fold2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__set_tree234__fold2_6_0_i13);
MR_def_label(set_tree234__fold2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(set_tree234__fold2_6_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__fold2_6_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__fold2_6_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__fold2_6_0_i15));
MR_def_label(set_tree234__fold2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r5 = MR_ctfield(3, MR_r5, 3);
	}
	MR_np_localcall_lab(set_tree234__fold2_6_0,
		set_tree234__fold2_6_0_i16);
MR_def_label(set_tree234__fold2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__set_tree234__fold2_6_0_i17);
MR_def_label(set_tree234__fold2_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_np_localcall_lab(set_tree234__fold2_6_0,
		set_tree234__fold2_6_0_i18);
MR_def_label(set_tree234__fold2_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__set_tree234__fold2_6_0_i19);
MR_def_label(set_tree234__fold2_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	MR_np_localcall_lab(set_tree234__fold2_6_0,
		set_tree234__fold2_6_0_i20);
MR_def_label(set_tree234__fold2_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__fold2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__set_tree234__fold2_6_0_i21);
MR_def_label(set_tree234__fold2_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(11);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(set_tree234__fold2_6_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__fold2_6_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__fold2_6_0_i9) MR_AND
		MR_LABEL_AP(set_tree234__fold2_6_0_i15));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module62)
	MR_init_entry1(set_tree234__divide_2_6_0);
	MR_init_label8(set_tree234__divide_2_6_0,4,5,6,9,11,7,12,15)
	MR_init_label8(set_tree234__divide_2_6_0,16,19,21,17,22,23,24,27)
	MR_init_label8(set_tree234__divide_2_6_0,29,25,30,33,34,37,39,35)
	MR_init_label8(set_tree234__divide_2_6_0,40,41,42,45,47,43,48,49)
	MR_init_label5(set_tree234__divide_2_6_0,50,53,55,51,56)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__set_tree234__divide_2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(set_tree234__divide_2_6_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__divide_2_6_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__divide_2_6_0_i15) MR_AND
		MR_LABEL_AP(set_tree234__divide_2_6_0_i33));
MR_def_label(set_tree234__divide_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(11);
MR_def_label(set_tree234__divide_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(10) = MR_r1;
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	}
	MR_np_localcall_lab(set_tree234__divide_2_6_0,
		set_tree234__divide_2_6_0_i6);
MR_def_label(set_tree234__divide_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__divide_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__divide_2_6_0_i9);
MR_def_label(set_tree234__divide_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__divide_2_6_0_i7);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i11);
MR_def_label(set_tree234__divide_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(5);
	MR_r1 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(set_tree234__divide_2_6_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__divide_2_6_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__divide_2_6_0_i15) MR_AND
		MR_LABEL_AP(set_tree234__divide_2_6_0_i33));
MR_def_label(set_tree234__divide_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(10);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i12);
MR_def_label(set_tree234__divide_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(set_tree234__divide_2_6_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__divide_2_6_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__divide_2_6_0_i15) MR_AND
		MR_LABEL_AP(set_tree234__divide_2_6_0_i33));
MR_def_label(set_tree234__divide_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(10) = MR_r1;
	MR_r3 = MR_ctfield(2, MR_r3, 2);
	}
	MR_np_localcall_lab(set_tree234__divide_2_6_0,
		set_tree234__divide_2_6_0_i16);
MR_def_label(set_tree234__divide_2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__divide_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__divide_2_6_0_i19);
MR_def_label(set_tree234__divide_2_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__divide_2_6_0_i17);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i21);
MR_def_label(set_tree234__divide_2_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(7);
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(set_tree234__divide_2_6_0_i23);
MR_def_label(set_tree234__divide_2_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r1 = MR_sv(10);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i22);
MR_def_label(set_tree234__divide_2_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(10);
MR_def_label(set_tree234__divide_2_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(10) = MR_r1;
	MR_np_localcall_lab(set_tree234__divide_2_6_0,
		set_tree234__divide_2_6_0_i24);
MR_def_label(set_tree234__divide_2_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__divide_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__divide_2_6_0_i27);
MR_def_label(set_tree234__divide_2_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__divide_2_6_0_i25);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i29);
MR_def_label(set_tree234__divide_2_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(set_tree234__divide_2_6_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__divide_2_6_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__divide_2_6_0_i15) MR_AND
		MR_LABEL_AP(set_tree234__divide_2_6_0_i33));
MR_def_label(set_tree234__divide_2_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(10);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i30);
MR_def_label(set_tree234__divide_2_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(set_tree234__divide_2_6_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__divide_2_6_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__divide_2_6_0_i15) MR_AND
		MR_LABEL_AP(set_tree234__divide_2_6_0_i33));
MR_def_label(set_tree234__divide_2_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(10) = MR_r1;
	MR_r3 = MR_ctfield(3, MR_r3, 3);
	}
	MR_np_localcall_lab(set_tree234__divide_2_6_0,
		set_tree234__divide_2_6_0_i34);
MR_def_label(set_tree234__divide_2_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__divide_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__divide_2_6_0_i37);
MR_def_label(set_tree234__divide_2_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__divide_2_6_0_i35);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i39);
MR_def_label(set_tree234__divide_2_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(9);
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(set_tree234__divide_2_6_0_i41);
MR_def_label(set_tree234__divide_2_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r1 = MR_sv(10);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i40);
MR_def_label(set_tree234__divide_2_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(10);
MR_def_label(set_tree234__divide_2_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(10) = MR_r1;
	MR_np_localcall_lab(set_tree234__divide_2_6_0,
		set_tree234__divide_2_6_0_i42);
MR_def_label(set_tree234__divide_2_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__divide_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__divide_2_6_0_i45);
MR_def_label(set_tree234__divide_2_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__divide_2_6_0_i43);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i47);
MR_def_label(set_tree234__divide_2_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(5);
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(set_tree234__divide_2_6_0_i49);
MR_def_label(set_tree234__divide_2_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(10);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i48);
MR_def_label(set_tree234__divide_2_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(10);
MR_def_label(set_tree234__divide_2_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(10) = MR_r1;
	MR_np_localcall_lab(set_tree234__divide_2_6_0,
		set_tree234__divide_2_6_0_i50);
MR_def_label(set_tree234__divide_2_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(set_tree234__divide_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__set_tree234__divide_2_6_0_i53);
MR_def_label(set_tree234__divide_2_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(set_tree234__divide_2_6_0_i51);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i55);
MR_def_label(set_tree234__divide_2_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(3);
	MR_r1 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(set_tree234__divide_2_6_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__divide_2_6_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__divide_2_6_0_i15) MR_AND
		MR_LABEL_AP(set_tree234__divide_2_6_0_i33));
MR_def_label(set_tree234__divide_2_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(10);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		set_tree234__divide_2_6_0_i56);
MR_def_label(set_tree234__divide_2_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(set_tree234__divide_2_6_0_i4) MR_AND
		MR_LABEL_AP(set_tree234__divide_2_6_0_i5) MR_AND
		MR_LABEL_AP(set_tree234__divide_2_6_0_i15) MR_AND
		MR_LABEL_AP(set_tree234__divide_2_6_0_i33));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module63)
	MR_init_entry1(set_tree234__divide_4_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module64)
	MR_init_entry1(set_tree234__divide_by_set_4_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(set_tree234_module65)
	MR_init_entry1(__Unify___set_tree234__set_tree234_1_0);
	MR_init_label8(__Unify___set_tree234__set_tree234_1_0,4,5,7,9,13,15,17,19)
	MR_init_label8(__Unify___set_tree234__set_tree234_1_0,21,25,27,29,31,33,35,37)
	MR_init_label1(__Unify___set_tree234__set_tree234_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___set_tree234__set_tree234_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Unify___set_tree234__set_tree234_1_0_i4) MR_AND
		MR_LABEL_AP(__Unify___set_tree234__set_tree234_1_0_i5) MR_AND
		MR_LABEL_AP(__Unify___set_tree234__set_tree234_1_0_i13) MR_AND
		MR_LABEL_AP(__Unify___set_tree234__set_tree234_1_0_i25));
MR_def_label(__Unify___set_tree234__set_tree234_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r3 == MR_r2);
	MR_decr_sp_and_return(14);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(13) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___set_tree234__set_tree234_1_0_i7);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(__Unify___set_tree234__set_tree234_1_0,
		__Unify___set_tree234__set_tree234_1_0_i9);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(14);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Unify___set_tree234__set_tree234_1_0_i4) MR_AND
		MR_LABEL_AP(__Unify___set_tree234__set_tree234_1_0_i5) MR_AND
		MR_LABEL_AP(__Unify___set_tree234__set_tree234_1_0_i13) MR_AND
		MR_LABEL_AP(__Unify___set_tree234__set_tree234_1_0_i25));
MR_def_label(__Unify___set_tree234__set_tree234_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 4);
	MR_tempr2 = MR_r3;
	MR_sv(5) = MR_ctfield(2, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(2, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(2, MR_tempr2, 3);
	MR_sv(8) = MR_ctfield(2, MR_tempr2, 4);
	MR_sv(13) = MR_r1;
	MR_r2 = MR_ctfield(2, MR_r2, 0);
	MR_r3 = MR_ctfield(2, MR_r3, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___set_tree234__set_tree234_1_0_i15);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___set_tree234__set_tree234_1_0_i17);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_localcall_lab(__Unify___set_tree234__set_tree234_1_0,
		__Unify___set_tree234__set_tree234_1_0_i19);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_localcall_lab(__Unify___set_tree234__set_tree234_1_0,
		__Unify___set_tree234__set_tree234_1_0_i21);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(14);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Unify___set_tree234__set_tree234_1_0_i4) MR_AND
		MR_LABEL_AP(__Unify___set_tree234__set_tree234_1_0_i5) MR_AND
		MR_LABEL_AP(__Unify___set_tree234__set_tree234_1_0_i13) MR_AND
		MR_LABEL_AP(__Unify___set_tree234__set_tree234_1_0_i25));
MR_def_label(__Unify___set_tree234__set_tree234_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 6);
	MR_tempr2 = MR_r3;
	MR_sv(7) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(8) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(9) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(10) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(11) = MR_ctfield(3, MR_tempr2, 5);
	MR_sv(12) = MR_ctfield(3, MR_tempr2, 6);
	MR_sv(13) = MR_r1;
	MR_r2 = MR_ctfield(3, MR_r2, 0);
	MR_r3 = MR_ctfield(3, MR_r3, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___set_tree234__set_tree234_1_0_i27);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___set_tree234__set_tree234_1_0_i29);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___set_tree234__set_tree234_1_0_i31);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_np_localcall_lab(__Unify___set_tree234__set_tree234_1_0,
		__Unify___set_tree234__set_tree234_1_0_i33);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_np_localcall_lab(__Unify___set_tree234__set_tree234_1_0,
		__Unify___set_tree234__set_tree234_1_0_i35);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_localcall_lab(__Unify___set_tree234__set_tree234_1_0,
		__Unify___set_tree234__set_tree234_1_0_i37);
MR_def_label(__Unify___set_tree234__set_tree234_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___set_tree234__set_tree234_1_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(12);
	MR_succip_word = MR_sv(14);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Unify___set_tree234__set_tree234_1_0_i4) MR_AND
		MR_LABEL_AP(__Unify___set_tree234__set_tree234_1_0_i5) MR_AND
		MR_LABEL_AP(__Unify___set_tree234__set_tree234_1_0_i13) MR_AND
		MR_LABEL_AP(__Unify___set_tree234__set_tree234_1_0_i25));
MR_def_label(__Unify___set_tree234__set_tree234_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module66)
	MR_init_entry1(__Compare___set_tree234__set_tree234_1_0);
	MR_init_label8(__Compare___set_tree234__set_tree234_1_0,4,11,15,17,21,29,34,36)
	MR_init_label8(__Compare___set_tree234__set_tree234_1_0,40,44,48,56,57,62,63,65)
	MR_init_label6(__Compare___set_tree234__set_tree234_1_0,69,73,77,81,85,168)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___set_tree234__set_tree234_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i4) MR_AND
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i11) MR_AND
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i29) MR_AND
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i57));
MR_def_label(__Compare___set_tree234__set_tree234_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r3),0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i56);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(14);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i62) MR_AND
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i15) MR_AND
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i56) MR_AND
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i56));
MR_def_label(__Compare___set_tree234__set_tree234_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 2);
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r3 = MR_ctfield(1, MR_r3, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___set_tree234__set_tree234_1_0_i17);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i168);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_localcall_lab(__Compare___set_tree234__set_tree234_1_0,
		__Compare___set_tree234__set_tree234_1_0_i21);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i168);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(14);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i4) MR_AND
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i11) MR_AND
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i29) MR_AND
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i57));
MR_def_label(__Compare___set_tree234__set_tree234_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i62) MR_AND
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i62) MR_AND
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i34) MR_AND
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i56));
MR_def_label(__Compare___set_tree234__set_tree234_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(9) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 4);
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_ctfield(2, MR_tempr2, 4);
	MR_sv(3) = MR_ctfield(2, MR_tempr2, 3);
	MR_sv(2) = MR_ctfield(2, MR_tempr2, 2);
	MR_sv(1) = MR_ctfield(2, MR_tempr2, 1);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_ctfield(2, MR_r2, 0);
	MR_r3 = MR_ctfield(2, MR_r3, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___set_tree234__set_tree234_1_0_i36);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i168);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___set_tree234__set_tree234_1_0_i40);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i168);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(__Compare___set_tree234__set_tree234_1_0,
		__Compare___set_tree234__set_tree234_1_0_i44);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i168);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(__Compare___set_tree234__set_tree234_1_0,
		__Compare___set_tree234__set_tree234_1_0_i48);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i168);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(14);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i4) MR_AND
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i11) MR_AND
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i29) MR_AND
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i57));
MR_def_label(__Compare___set_tree234__set_tree234_1_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(14);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_r3),3)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i63);
	}
MR_def_label(__Compare___set_tree234__set_tree234_1_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(14);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(13) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(12) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(11) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(10) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(9) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 6);
	MR_tempr2 = MR_r3;
	MR_sv(6) = MR_ctfield(3, MR_tempr2, 6);
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 5);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_ctfield(3, MR_r2, 0);
	MR_r3 = MR_ctfield(3, MR_r3, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___set_tree234__set_tree234_1_0_i65);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i168);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___set_tree234__set_tree234_1_0_i69);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i168);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___set_tree234__set_tree234_1_0_i73);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i168);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(__Compare___set_tree234__set_tree234_1_0,
		__Compare___set_tree234__set_tree234_1_0_i77);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i168);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(__Compare___set_tree234__set_tree234_1_0,
		__Compare___set_tree234__set_tree234_1_0_i81);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i168);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(5);
	MR_np_localcall_lab(__Compare___set_tree234__set_tree234_1_0,
		__Compare___set_tree234__set_tree234_1_0_i85);
MR_def_label(__Compare___set_tree234__set_tree234_1_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___set_tree234__set_tree234_1_0_i168);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(14);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i4) MR_AND
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i11) MR_AND
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i29) MR_AND
		MR_LABEL_AP(__Compare___set_tree234__set_tree234_1_0_i57));
MR_def_label(__Compare___set_tree234__set_tree234_1_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module67)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module68)
	MR_init_entry1(fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module69)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module70)
	MR_init_entry1(fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module71)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module72)
	MR_init_entry1(fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module73)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module74)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module75)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_init_label1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,2)
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module76)
	MR_init_entry1(fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(set_tree234_module77)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0);
	MR_init_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,23,24,25,27,30,33,10,12)
	MR_init_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,13,15,18,3,5,7,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred set_tree234.UnusedArgs__pred__all_members__[1]_0/2-0", 6,
		MR_ENTRY(MR_do_fail));
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i3);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i10);
	}
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i2);
	}
	MR_fv(6) = MR_ctfield(3, MR_r1, 6);
	MR_fv(5) = MR_ctfield(3, MR_r1, 5);
	MR_fv(4) = MR_ctfield(3, MR_r1, 4);
	MR_fv(3) = MR_ctfield(3, MR_r1, 3);
	MR_fv(2) = MR_ctfield(3, MR_r1, 2);
	MR_fv(1) = MR_ctfield(3, MR_r1, 1);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i23);
	MR_r1 = MR_ctfield(3, MR_r1, 0);
	MR_succeed();
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i24);
	MR_r1 = MR_fv(1);
	MR_succeed();
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i25);
	MR_r1 = MR_fv(2);
	MR_succeed();
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i27);
	MR_r1 = MR_fv(3);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i1);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i30);
	MR_r1 = MR_fv(4);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i1);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i33);
	MR_r1 = MR_fv(5);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i1);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(6);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_localtailcall(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(4) = MR_ctfield(2, MR_r1, 4);
	MR_fv(3) = MR_ctfield(2, MR_r1, 3);
	MR_fv(2) = MR_ctfield(2, MR_r1, 2);
	MR_fv(1) = MR_ctfield(2, MR_r1, 1);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i12);
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_succeed();
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i13);
	MR_r1 = MR_fv(1);
	MR_succeed();
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i15);
	MR_r1 = MR_fv(2);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i1);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i18);
	MR_r1 = MR_fv(3);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i1);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(4);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_localtailcall(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(2) = MR_ctfield(1, MR_r1, 2);
	MR_fv(1) = MR_ctfield(1, MR_r1, 1);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i5);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_succeed();
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i7);
	MR_r1 = MR_fv(1);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0_i1);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(2);
	MR_maxfr_word = (MR_Word) MR_prevfr_slot(MR_curfr);
	MR_succip_word = (MR_Word) MR_succip_slot(MR_curfr);
	MR_curfr_word = (MR_Word) MR_succfr_slot(MR_curfr);
	MR_np_localtailcall(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_95_109_101_109_98_101_114_115_95_95_91_49_93_95_48_2_0,2)
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


MR_BEGIN_MODULE(set_tree234_module78)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_102_111_117_114_95_95_91_49_93_95_48_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_102_111_117_114_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(3, MR_r1, 3);
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(3, MR_r1, 4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_r1, 2);
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(3, MR_r1, 5);
	MR_tfield(1, MR_tempr2, 2) = MR_ctfield(3, MR_r1, 6);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module79)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0);
	MR_init_label4(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0,4,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0_i4) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0_i6) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0_i7) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0_i8));
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unbalanced 234 tree", 19);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(2, MR_tempr1, 2) = MR_r2;
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(1, MR_tempr2, 1);
	MR_tfield(2, MR_tempr1, 4) = MR_ctfield(1, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr3 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(2, MR_tempr3, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(2, MR_tempr3, 3);
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(2, MR_tempr3, 4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tfield(1, MR_tempr2, 2) = MR_ctfield(2, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_ctfield(2, MR_tempr3, 0);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_tfield(1, MR_r1, 2) = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_48_95_95_91_49_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr3 = MR_r3;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(2, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 4);
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(3, MR_tempr3, 5);
	MR_tfield(2, MR_tempr1, 4) = MR_ctfield(3, MR_tempr3, 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tfield(1, MR_tempr2, 2) = MR_ctfield(3, MR_tempr3, 3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_ctfield(3, MR_tempr3, 0);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_tfield(1, MR_r1, 2) = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module80)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0);
	MR_init_label4(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0,4,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0_i4) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0_i6) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0_i7) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0_i8));
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unbalanced 234 tree", 19);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr2 = MR_r2;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = MR_ctfield(1, MR_tempr2, 1);
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(1, MR_tempr2, 2);
	MR_tfield(2, MR_tempr1, 4) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr3 = MR_r2;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(2, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(2, MR_tempr3, 2);
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(2, MR_tempr3, 3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(2, MR_tempr3, 4);
	MR_tfield(1, MR_tempr2, 2) = MR_r3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_ctfield(2, MR_tempr3, 1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_tfield(1, MR_r1, 2) = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_50_110_111_100_101_95_116_49_95_95_91_49_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr3 = MR_r2;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_tempr3, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(3, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 3);
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(3, MR_tempr3, 4);
	MR_tfield(2, MR_tempr1, 4) = MR_ctfield(3, MR_tempr3, 5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(3, MR_tempr3, 6);
	MR_tfield(1, MR_tempr2, 2) = MR_r3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_tfield(1, MR_r1, 2) = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module81)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0);
	MR_init_label4(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0,4,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0_i4) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0_i6) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0_i7) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0_i8));
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unbalanced 234 tree", 19);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r4;
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(2, MR_tempr1, 2) = MR_r3;
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(1, MR_tempr2, 1);
	MR_tfield(2, MR_tempr1, 4) = MR_ctfield(1, MR_tempr2, 2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_tfield(1, MR_r1, 2) = MR_r5;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr3 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(2, MR_tempr3, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(2, MR_tempr3, 3);
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(2, MR_tempr3, 4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tfield(1, MR_tempr2, 2) = MR_ctfield(2, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_ctfield(2, MR_tempr3, 0);
	MR_tfield(2, MR_r1, 1) = MR_r2;
	MR_tfield(2, MR_r1, 2) = MR_tempr2;
	MR_tfield(2, MR_r1, 3) = MR_tempr1;
	MR_tfield(2, MR_r1, 4) = MR_r5;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_48_95_95_91_49_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr3 = MR_r4;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(2, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 4);
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(3, MR_tempr3, 5);
	MR_tfield(2, MR_tempr1, 4) = MR_ctfield(3, MR_tempr3, 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tfield(1, MR_tempr2, 2) = MR_ctfield(3, MR_tempr3, 3);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_ctfield(3, MR_tempr3, 0);
	MR_tfield(2, MR_r1, 1) = MR_r2;
	MR_tfield(2, MR_r1, 2) = MR_tempr2;
	MR_tfield(2, MR_r1, 3) = MR_tempr1;
	MR_tfield(2, MR_r1, 4) = MR_r5;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module82)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0);
	MR_init_label4(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0,4,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0_i4) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0_i6) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0_i7) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0_i8));
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unbalanced 234 tree", 19);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr2 = MR_r3;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = MR_ctfield(1, MR_tempr2, 1);
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(1, MR_tempr2, 2);
	MR_tfield(2, MR_tempr1, 4) = MR_r4;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_tfield(1, MR_r1, 2) = MR_r5;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr3 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(2, MR_tempr3, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(2, MR_tempr3, 2);
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(2, MR_tempr3, 3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(2, MR_tempr3, 4);
	MR_tfield(1, MR_tempr2, 2) = MR_r4;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_ctfield(2, MR_tempr3, 1);
	MR_tfield(2, MR_r1, 1) = MR_r2;
	MR_tfield(2, MR_r1, 2) = MR_tempr1;
	MR_tfield(2, MR_r1, 3) = MR_tempr2;
	MR_tfield(2, MR_r1, 4) = MR_r5;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_49_95_95_91_49_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr3 = MR_r3;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_tempr3, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(3, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 3);
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(3, MR_tempr3, 4);
	MR_tfield(2, MR_tempr1, 4) = MR_ctfield(3, MR_tempr3, 5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(3, MR_tempr3, 6);
	MR_tfield(1, MR_tempr2, 2) = MR_r4;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(2, MR_r1, 1) = MR_r2;
	MR_tfield(2, MR_r1, 2) = MR_tempr1;
	MR_tfield(2, MR_r1, 3) = MR_tempr2;
	MR_tfield(2, MR_r1, 4) = MR_r5;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module83)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0);
	MR_init_label4(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0,4,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0_i4) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0_i6) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0_i7) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0_i8));
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unbalanced 234 tree", 19);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr3 = MR_r4;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_tempr3, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_tfield(2, MR_tempr1, 2) = MR_ctfield(1, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(1, MR_tempr3, 2);
	MR_tfield(2, MR_tempr1, 4) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tfield(1, MR_tempr2, 2) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr4 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(2, MR_tempr4, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(2, MR_tempr4, 2);
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(2, MR_tempr4, 3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(2, MR_tempr4, 4);
	MR_tfield(1, MR_tempr2, 2) = MR_r5;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 5);
	MR_r2 = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = MR_r1;
	MR_tfield(2, MR_tempr3, 1) = MR_ctfield(2, MR_tempr4, 1);
	MR_tfield(2, MR_tempr3, 2) = MR_r3;
	MR_tfield(2, MR_tempr3, 3) = MR_tempr1;
	MR_tfield(2, MR_tempr3, 4) = MR_tempr2;
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_51_110_111_100_101_95_116_50_95_95_91_49_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr4 = MR_r4;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_tempr4, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(3, MR_tempr4, 1);
	MR_tfield(2, MR_tempr1, 2) = MR_ctfield(3, MR_tempr4, 3);
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(3, MR_tempr4, 4);
	MR_tfield(2, MR_tempr1, 4) = MR_ctfield(3, MR_tempr4, 5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(3, MR_tempr4, 6);
	MR_tfield(1, MR_tempr2, 2) = MR_r5;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 5);
	MR_r2 = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = MR_r1;
	MR_tfield(2, MR_tempr3, 1) = MR_ctfield(3, MR_tempr4, 2);
	MR_tfield(2, MR_tempr3, 2) = MR_r3;
	MR_tfield(2, MR_tempr3, 3) = MR_tempr1;
	MR_tfield(2, MR_tempr3, 4) = MR_tempr2;
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module84)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0);
	MR_init_label4(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0,4,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0_i4) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0_i6) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0_i7) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0_i8));
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unbalanced 234 tree", 19);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r5;
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(2, MR_tempr1, 2) = MR_r4;
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(1, MR_tempr2, 1);
	MR_tfield(2, MR_tempr1, 4) = MR_ctfield(1, MR_tempr2, 2);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_tfield(2, MR_r1, 1) = MR_r3;
	MR_tfield(2, MR_r1, 2) = MR_tempr1;
	MR_tfield(2, MR_r1, 3) = MR_r6;
	MR_tfield(2, MR_r1, 4) = MR_r7;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr3 = MR_r5;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(2, MR_tempr3, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(2, MR_tempr3, 3);
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(2, MR_tempr3, 4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_r4;
	MR_tfield(1, MR_tempr2, 2) = MR_ctfield(2, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_ctfield(2, MR_tempr3, 0);
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_tfield(3, MR_r1, 2) = MR_r3;
	MR_tfield(3, MR_r1, 3) = MR_tempr2;
	MR_tfield(3, MR_r1, 4) = MR_tempr1;
	MR_tfield(3, MR_r1, 5) = MR_r6;
	MR_tfield(3, MR_r1, 6) = MR_r7;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_48_95_95_91_49_93_95_48_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr3 = MR_r5;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(3, MR_tempr3, 2);
	MR_tfield(2, MR_tempr1, 2) = MR_ctfield(3, MR_tempr3, 4);
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(3, MR_tempr3, 5);
	MR_tfield(2, MR_tempr1, 4) = MR_ctfield(3, MR_tempr3, 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_r4;
	MR_tfield(1, MR_tempr2, 2) = MR_ctfield(3, MR_tempr3, 3);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_ctfield(3, MR_tempr3, 0);
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_tfield(3, MR_r1, 2) = MR_r3;
	MR_tfield(3, MR_r1, 3) = MR_tempr2;
	MR_tfield(3, MR_r1, 4) = MR_tempr1;
	MR_tfield(3, MR_r1, 5) = MR_r6;
	MR_tfield(3, MR_r1, 6) = MR_r7;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module85)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0);
	MR_init_label4(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0,4,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r6),
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0_i4) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0_i6) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0_i7) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0_i8));
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unbalanced 234 tree", 19);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tempr3 = MR_r6;
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(1, MR_tempr3, 0);
	MR_tfield(2, MR_tempr1, 2) = MR_r5;
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(1, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 4) = MR_ctfield(1, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 5);
	MR_r2 = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tfield(2, MR_tempr2, 1) = MR_r3;
	MR_tfield(2, MR_tempr2, 2) = MR_r4;
	MR_tfield(2, MR_tempr2, 3) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 4) = MR_r7;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr4 = MR_r6;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(2, MR_tempr4, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(2, MR_tempr4, 3);
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(2, MR_tempr4, 4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_r5;
	MR_tfield(1, MR_tempr2, 2) = MR_ctfield(2, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 7);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = MR_r1;
	MR_tfield(3, MR_tempr3, 1) = MR_ctfield(2, MR_tempr4, 0);
	MR_tfield(3, MR_tempr3, 2) = MR_r3;
	MR_tfield(3, MR_tempr3, 3) = MR_r4;
	MR_tfield(3, MR_tempr3, 4) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 5) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 6) = MR_r7;
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_49_95_95_91_49_93_95_48_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr4 = MR_r6;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_tempr4, 1);
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(3, MR_tempr4, 2);
	MR_tfield(2, MR_tempr1, 2) = MR_ctfield(3, MR_tempr4, 4);
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(3, MR_tempr4, 5);
	MR_tfield(2, MR_tempr1, 4) = MR_ctfield(3, MR_tempr4, 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_r5;
	MR_tfield(1, MR_tempr2, 2) = MR_ctfield(3, MR_tempr4, 3);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 7);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = MR_r1;
	MR_tfield(3, MR_tempr3, 1) = MR_ctfield(3, MR_tempr4, 0);
	MR_tfield(3, MR_tempr3, 2) = MR_r3;
	MR_tfield(3, MR_tempr3, 3) = MR_r4;
	MR_tfield(3, MR_tempr3, 4) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 5) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 6) = MR_r7;
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module86)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0);
	MR_init_label4(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0,4,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r7),
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0_i4) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0_i6) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0_i7) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0_i8));
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unbalanced 234 tree", 19);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_r3;
	MR_tempr3 = MR_r7;
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(1, MR_tempr3, 0);
	MR_tfield(2, MR_tempr1, 2) = MR_r6;
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(1, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 4) = MR_ctfield(1, MR_tempr3, 2);
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
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr4 = MR_r7;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(2, MR_tempr4, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(2, MR_tempr4, 3);
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(2, MR_tempr4, 4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_r6;
	MR_tfield(1, MR_tempr2, 2) = MR_ctfield(2, MR_tempr4, 2);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr3, 0) = MR_r1;
	MR_tfield(3, MR_tempr3, 1) = MR_r2;
	MR_tfield(3, MR_tempr3, 2) = MR_ctfield(2, MR_tempr4, 0);
	MR_tfield(3, MR_tempr3, 3) = MR_r4;
	MR_tfield(3, MR_tempr3, 4) = MR_r5;
	MR_tfield(3, MR_tempr3, 5) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 6) = MR_tempr1;
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_50_95_95_91_49_93_95_48_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr4 = MR_r7;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_tempr4, 1);
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(3, MR_tempr4, 2);
	MR_tfield(2, MR_tempr1, 2) = MR_ctfield(3, MR_tempr4, 4);
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(3, MR_tempr4, 5);
	MR_tfield(2, MR_tempr1, 4) = MR_ctfield(3, MR_tempr4, 6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_r6;
	MR_tfield(1, MR_tempr2, 2) = MR_ctfield(3, MR_tempr4, 3);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr3, 0) = MR_r1;
	MR_tfield(3, MR_tempr3, 1) = MR_r2;
	MR_tfield(3, MR_tempr3, 2) = MR_ctfield(3, MR_tempr4, 0);
	MR_tfield(3, MR_tempr3, 3) = MR_r4;
	MR_tfield(3, MR_tempr3, 4) = MR_r5;
	MR_tfield(3, MR_tempr3, 5) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 6) = MR_tempr1;
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module87)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0);
	MR_init_label4(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0,4,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r6),
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0_i4) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0_i6) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0_i7) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0_i8));
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unbalanced 234 tree", 19);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr3 = MR_r6;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_tempr3, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_r3;
	MR_tfield(2, MR_tempr1, 2) = MR_ctfield(1, MR_tempr3, 1);
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(1, MR_tempr3, 2);
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
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tempr4 = MR_r6;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(2, MR_tempr4, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(2, MR_tempr4, 2);
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(2, MR_tempr4, 3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(2, MR_tempr4, 4);
	MR_tfield(1, MR_tempr2, 2) = MR_r7;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr3, 0) = MR_r1;
	MR_tfield(3, MR_tempr3, 1) = MR_r2;
	MR_tfield(3, MR_tempr3, 2) = MR_ctfield(2, MR_tempr4, 1);
	MR_tfield(3, MR_tempr3, 3) = MR_r4;
	MR_tfield(3, MR_tempr3, 4) = MR_r5;
	MR_tfield(3, MR_tempr3, 5) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 6) = MR_tempr2;
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_120_95_52_110_111_100_101_95_116_51_95_95_91_49_93_95_48_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tempr4 = MR_r6;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_tempr4, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(3, MR_tempr4, 1);
	MR_tfield(2, MR_tempr1, 2) = MR_ctfield(3, MR_tempr4, 3);
	MR_tfield(2, MR_tempr1, 3) = MR_ctfield(3, MR_tempr4, 4);
	MR_tfield(2, MR_tempr1, 4) = MR_ctfield(3, MR_tempr4, 5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(3, MR_tempr4, 6);
	MR_tfield(1, MR_tempr2, 2) = MR_r7;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr3, 0) = MR_r1;
	MR_tfield(3, MR_tempr3, 1) = MR_r2;
	MR_tfield(3, MR_tempr3, 2) = MR_ctfield(3, MR_tempr4, 2);
	MR_tfield(3, MR_tempr3, 3) = MR_r4;
	MR_tfield(3, MR_tempr3, 4) = MR_r5;
	MR_tfield(3, MR_tempr3, 5) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 6) = MR_tempr2;
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module88)
	MR_init_entry1(fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module89)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0);
	MR_init_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,4,5,7,10,11,12,14,17)
	MR_init_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,2,18,19,21,27,28,29,30)
	MR_init_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,31,32,33,34,35,37,39,41)
	MR_init_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,40,42,24,43,44,46,52,53)
	MR_init_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,54,55,56,57,58,59,60,62)
	MR_init_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,64,66,65,67,49,70,71,72)
	MR_init_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,73,74,75,76,77,78,80,82)
	MR_init_label4(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,84,83,85,86)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i2);
	}
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i7);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(2))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 2;
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i86);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i10);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(1);
	MR_tfield(3, MR_r1, 1) = MR_sv(2);
	MR_tfield(3, MR_r1, 2) = MR_sv(3);
	MR_tfield(3, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i11);
	}
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i14);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i12);
	}
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i14);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i86);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i17);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(2);
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_tfield(3, MR_r1, 2) = MR_sv(3);
	MR_tfield(3, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(2);
	MR_tfield(3, MR_r1, 1) = MR_sv(3);
	MR_tfield(3, MR_r1, 2) = MR_sv(1);
	MR_tfield(3, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i21);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(2))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i19);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i21);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 2;
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i86);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i24);
	}
	MR_r2 = MR_sv(4);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i27) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i28) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i30) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i32));
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(2);
	MR_tfield(2, MR_r1, 1) = MR_sv(3);
	MR_tfield(2, MR_r1, 2) = MR_tempr1;
	MR_tfield(2, MR_r1, 3) = MR_sv(5);
	MR_tfield(2, MR_r1, 4) = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i29);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i31);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_102_111_117_114_95_95_91_49_93_95_48_4_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i33);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i34);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i37);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_r1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i35);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i37);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Integer) 2;
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i39);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(1);
	MR_tfield(3, MR_r1, 1) = MR_sv(2);
	MR_tfield(3, MR_r1, 2) = MR_sv(3);
	MR_tfield(3, MR_r1, 3) = MR_r2;
	MR_tfield(3, MR_r1, 4) = MR_sv(4);
	MR_tfield(3, MR_r1, 5) = MR_sv(5);
	MR_tfield(3, MR_r1, 6) = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i40);
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i41);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i42);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tfield(3, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i43);
	}
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i46);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i44);
	}
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i46);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i86);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i49);
	}
	MR_r2 = MR_sv(5);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i52) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i53) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i55) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i57));
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(2);
	MR_tfield(2, MR_r1, 1) = MR_sv(3);
	MR_tfield(2, MR_r1, 2) = MR_sv(4);
	MR_tfield(2, MR_r1, 3) = MR_tempr1;
	MR_tfield(2, MR_r1, 4) = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i54);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 3) = MR_r1;
	MR_tfield(2, MR_tempr1, 4) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i56);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 3) = MR_r1;
	MR_tfield(2, MR_tempr1, 4) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_102_111_117_114_95_95_91_49_93_95_48_4_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i58);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i59);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r4;
	MR_sv(5) = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i62);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_r1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i60);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r4;
	MR_sv(5) = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i62);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(5) = MR_r3;
	MR_r3 = (MR_Integer) 2;
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i64);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(2);
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_tfield(3, MR_r1, 2) = MR_sv(3);
	MR_tfield(3, MR_r1, 3) = MR_sv(4);
	MR_tfield(3, MR_r1, 4) = MR_r2;
	MR_tfield(3, MR_r1, 5) = MR_sv(5);
	MR_tfield(3, MR_r1, 6) = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i65);
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i66);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tfield(3, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i67);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_tfield(3, MR_tempr1, 6) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i70) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i71) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i73) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i75));
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(2);
	MR_tfield(2, MR_r1, 1) = MR_sv(3);
	MR_tfield(2, MR_r1, 2) = MR_sv(4);
	MR_tfield(2, MR_r1, 3) = MR_sv(5);
	MR_tfield(2, MR_r1, 4) = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i72);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i74);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_102_111_117_114_95_95_91_49_93_95_48_4_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i76);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i77);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r4;
	MR_sv(6) = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i80);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_r1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i78);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r4;
	MR_sv(6) = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i80);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(6) = MR_r3;
	MR_r3 = (MR_Integer) 2;
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i82);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_r1, 0) = MR_sv(2);
	MR_tfield(3, MR_r1, 1) = MR_sv(3);
	MR_tfield(3, MR_r1, 2) = MR_sv(1);
	MR_tfield(3, MR_r1, 3) = MR_sv(4);
	MR_tfield(3, MR_r1, 4) = MR_sv(5);
	MR_tfield(3, MR_r1, 5) = MR_r2;
	MR_tfield(3, MR_r1, 6) = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i83);
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i84);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_tfield(3, MR_tempr1, 6) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i85);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module90)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0);
	MR_init_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,4,5,7,10,2,11,12,14)
	MR_init_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,16,20,21,22,23,24,25,26)
	MR_init_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,27,28,30,32,34,33,35,17)
	MR_init_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,38,39,40,41,42,43,44,45)
	MR_init_label7(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,46,48,50,52,51,53,54)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 2);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i2);
	}
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i7);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(2))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 2;
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i54);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i10);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(1);
	MR_tfield(2, MR_r1, 1) = MR_sv(2);
	MR_tfield(2, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(2);
	MR_tfield(2, MR_r1, 1) = MR_sv(1);
	MR_tfield(2, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_r1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i11);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i14);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(2))) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i14);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_r2 = (MR_Integer) 2;
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i17);
	}
	MR_r2 = MR_sv(3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i20) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i21) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i23) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i25));
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i22);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i24);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_102_111_117_114_95_95_91_49_93_95_48_4_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i26);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i27);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i30);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_r1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i28);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i30);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Integer) 2;
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i32);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(1);
	MR_tfield(2, MR_r1, 1) = MR_sv(2);
	MR_tfield(2, MR_r1, 2) = MR_r2;
	MR_tfield(2, MR_r1, 3) = MR_sv(4);
	MR_tfield(2, MR_r1, 4) = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i33);
	}
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i34);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i35);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,35)
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
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i38) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i39) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i41) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i43));
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_tfield(1, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i40);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i42);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_102_111_117_114_95_95_91_49_93_95_48_4_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i44);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i45);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i48);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_r1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i46);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i48);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Integer) 2;
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i50);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r1, 0) = MR_sv(2);
	MR_tfield(2, MR_r1, 1) = MR_sv(1);
	MR_tfield(2, MR_r1, 2) = MR_sv(3);
	MR_tfield(2, MR_r1, 3) = MR_r2;
	MR_tfield(2, MR_r1, 4) = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i51);
	}
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i52);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 3) = MR_r1;
	MR_tfield(2, MR_tempr1, 4) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0_i53);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module91)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_init_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,4,5,6,7,9,10,11,12)
	MR_init_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,13,15,16,17,18,19,20,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i4) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i5) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i9) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i15));
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(8);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	}
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i6);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i7);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i4) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i5) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i9) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i15));
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_ctfield(2, MR_r2, 2);
	}
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i10);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i11);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i12);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i13);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i4) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i5) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i9) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i15));
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_ctfield(3, MR_r2, 3);
	}
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i16);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i17);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i18);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i19);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_np_localcall_lab(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i20);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i21);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i4) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i5) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i9) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i15));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module92)
	MR_init_entry1(fn__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(set_tree234_module93)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_init_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i4);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i11);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(set_tree234_module94)
	MR_init_entry1(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_init_label8(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,4,5,7,43,10,11,13,15)
	MR_init_label3(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,17,16,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i4) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i5) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i7) MR_AND
		MR_LABEL_AP(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i43));
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_51_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = MR_ctfield(3, MR_tempr1, 6);
	MR_r6 = MR_ctfield(3, MR_tempr1, 5);
	MR_r7 = MR_ctfield(3, MR_tempr1, 4);
	MR_r8 = MR_ctfield(3, MR_tempr1, 3);
	MR_r9 = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_r10 = MR_ctfield(3, MR_tempr1, 0);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i10);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r10;
	MR_r4 = MR_r9;
	MR_r11 = MR_r8;
	MR_r8 = MR_r5;
	MR_r5 = MR_r11;
	MR_r12 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = MR_r12;
	MR_r9 = (MR_Integer) 1;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i13);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r4)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i11);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r10;
	MR_r4 = MR_r9;
	MR_r11 = MR_r8;
	MR_r8 = MR_r5;
	MR_r5 = MR_r11;
	MR_r12 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = MR_r12;
	MR_r9 = (MR_Integer) 0;
	MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i13);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r10;
	MR_r4 = MR_r9;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r8;
	MR_r8 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = MR_tempr2;
	MR_r9 = (MR_Integer) 2;
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r9,0)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i15);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r9,1)) {
		MR_GOTO_LAB(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_r5;
	MR_tfield(1, MR_tempr1, 2) = MR_r6;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_sv(2) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r4;
	MR_tfield(1, MR_tempr2, 1) = MR_r7;
	MR_tfield(1, MR_tempr2, 2) = MR_r8;
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i17);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_sv(2) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_r5;
	MR_tfield(1, MR_tempr1, 2) = MR_r6;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r4;
	MR_tfield(1, MR_tempr2, 1) = MR_r7;
	MR_tfield(1, MR_tempr2, 2) = MR_r8;
	}
	MR_np_call_localret_ent(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_105_110_115_101_114_116_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_3_0,
		f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i18);
MR_def_label(f_115_101_116_95_116_114_101_101_50_51_52_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,18)
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
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__set_tree234__init(void);
void mercury__set_tree234__init_type_tables(void);
void mercury__set_tree234__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__set_tree234__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__set_tree234__init_complexity_procs(void);
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

void mercury__set_tree234__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__set_tree234__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
