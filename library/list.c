/*
** Automatically generated from `list.m'
** by the Mercury compiler,
** version rotd-2011-10-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__list__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "list.c"
#include "list.mh"

#line 28 "list.c"
#line 140 "io.int2"
#include "io.mh"

#line 32 "list.c"
#line 150 "io.int2"
#include "time.mh"

#line 36 "list.c"
#line 151 "io.int2"
#include "string.mh"

#line 40 "list.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 44 "list.c"
#line 33 "array.int2"
#include "array.mh"

#line 48 "list.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 52 "list.c"
#line 56 "array.opt"
#include "stm_builtin.mh"

#line 56 "list.c"
#line 58 "array.opt"
#include "store.mh"

#line 60 "list.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 64 "list.c"
#line 157 "io.opt"
#include "dir.mh"

#line 68 "list.c"
#line 171 "io.opt"
#include "table_builtin.mh"

#line 72 "list.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 76 "list.c"
#line 3 "float.opt"
#include "float.mh"

#line 80 "list.c"
#line 3 "math.opt"
#include "math.mh"

#line 84 "list.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 88 "list.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "list.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 96 "list.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 100 "list.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 104 "list.c"
#line 4 "int.opt"
#include "int.mh"

#line 108 "list.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 112 "list.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 116 "list.c"
#line 117 "list.c"
#ifndef LIST_DECL_GUARD
#define LIST_DECL_GUARD

#line 121 "list.c"
#line 122 "list.c"

#endif
#line 125 "list.c"

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
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_list__type_ctor_info_list_1;
MR_decl_label5(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0, 4,6,7,3,2)
MR_decl_label1(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0, 2)
MR_decl_label5(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0, 4,6,7,3,2)
MR_decl_label1(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0, 2)
MR_decl_label1(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0, 2)
MR_decl_label2(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0, 3,1)
MR_decl_label10(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0, 5,3,65,10,11,13,14,15,8,17)
MR_decl_label10(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0, 5,3,72,8,9,11,14,13,16,19)
MR_decl_label4(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0, 23,3,5,7)
MR_decl_label1(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0, 3)
MR_decl_label2(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_3_0, 4,2)
MR_decl_label5(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0, 25,3,6,8,4)
MR_decl_label3(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0, 10,3,4)
MR_decl_label2(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0, 13,4)
MR_decl_label10(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0, 89,10,12,15,6,20,22,24,90,1)
MR_decl_label7(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0, 5,3,48,9,10,8,12)
MR_decl_label7(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0, 5,3,48,9,10,8,12)
MR_decl_label9(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0, 5,3,58,8,11,10,14,13,16)
MR_decl_label2(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_3_0, 5,2)
MR_decl_label3(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_97_115_116_95_100_101_116_95_50_95_95_91_49_93_95_48_4_0, 5,6,2)
MR_decl_label3(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_50_95_95_91_49_93_95_48_3_0, 20,6,19)
MR_decl_label4(list__all_false_2_0, 19,6,2,1)
MR_decl_label1(list__all_same_1_0, 2)
MR_decl_label4(list__all_same_2_2_0, 17,4,2,1)
MR_decl_label4(list__all_true_2_0, 17,4,2,1)
MR_decl_label3(list__append_3_0, 5,6,2)
MR_decl_label4(list__append_3_2, 25,3,7,1)
MR_decl_label4(list__append_3_3, 23,3,5,1)
MR_decl_label2(list__append_3_4, 2,4)
MR_decl_label7(list__chunk_2_5_0, 35,5,6,3,8,12,13)
MR_decl_label2(list__condense_2_0, 16,4)
MR_decl_label7(list__delete_3_0, 31,5,7,4,10,3,1)
MR_decl_label3(list__delete_3_1, 4,3,6)
MR_decl_label2(list__delete_3_2, 3,4)
MR_decl_label2(list__delete_3_3, 2,5)
MR_decl_label5(list__delete_all_3_0, 25,3,6,4,9)
MR_decl_label3(list__delete_elems_3_0, 10,3,4)
MR_decl_label4(list__delete_first_3_0, 5,3,7,1)
MR_decl_label2(list__det_drop_3_0, 4,2)
MR_decl_label2(list__det_index0_3_0, 3,2)
MR_decl_label2(list__det_index1_3_0, 3,2)
MR_decl_label1(list__det_last_2_0, 3)
MR_decl_label3(list__det_replace_nth_4_0, 4,3,2)
MR_decl_label2(list__det_split_list_4_0, 3,2)
MR_decl_label2(list__drop_3_0, 2,1)
MR_decl_label5(list__filter_3_0, 25,3,6,8,4)
MR_decl_label5(list__filter_4_0, 30,6,8,4,10)
MR_decl_label5(list__filter_map_3_0, 25,3,6,8,4)
MR_decl_label5(list__filter_map_4_0, 30,6,8,4,10)
MR_decl_label5(list__filter_map_foldl_5_0, 25,3,6,8,4)
MR_decl_label4(list__find_first_map_3_0, 19,5,9,1)
MR_decl_label4(list__find_first_map2_4_0, 19,5,9,1)
MR_decl_label4(list__find_first_map3_5_0, 19,5,9,1)
MR_decl_label4(list__find_first_match_3_0, 20,5,3,1)
MR_decl_label4(list__find_index_of_match_4_0, 20,5,3,1)
MR_decl_label3(list__foldl_4_0, 10,3,4)
MR_decl_label4(list__foldl_4_3, 18,3,4,1)
MR_decl_label3(list__foldl_4_6, 12,3,11)
MR_decl_label3(list__foldl2_6_0, 10,3,4)
MR_decl_label4(list__foldl2_6_4, 18,3,4,1)
MR_decl_label3(list__foldl2_6_7, 12,3,11)
MR_decl_label4(list__foldl2_corresponding_7_0, 28,3,9,8)
MR_decl_label7(list__foldl2_corresponding_7_3, 32,5,3,9,18,8,1)
MR_decl_label5(list__foldl2_corresponding_7_6, 25,24,8,7,23)
MR_decl_label4(list__foldl2_corresponding3_8_0, 61,47,3,17)
MR_decl_label10(list__foldl2_corresponding3_8_2, 69,7,5,10,3,17,42,16,14,23)
MR_decl_label1(list__foldl2_corresponding3_8_2, 1)
MR_decl_label3(list__foldl3_8_0, 10,3,4)
MR_decl_label4(list__foldl3_8_3, 18,3,4,1)
MR_decl_label3(list__foldl3_8_6, 12,3,11)
MR_decl_label4(list__foldl3_corresponding_9_0, 28,3,9,8)
MR_decl_label7(list__foldl3_corresponding_9_3, 32,5,3,9,18,8,1)
MR_decl_label4(list__foldl3_corresponding3_10_0, 61,47,3,17)
MR_decl_label10(list__foldl3_corresponding3_10_2, 69,7,5,10,3,17,42,16,14,23)
MR_decl_label1(list__foldl3_corresponding3_10_2, 1)
MR_decl_label3(list__foldl4_10_0, 10,3,4)
MR_decl_label4(list__foldl4_10_5, 18,3,4,1)
MR_decl_label3(list__foldl4_10_8, 12,3,11)
MR_decl_label4(list__foldl4_corresponding3_12_0, 61,47,3,17)
MR_decl_label10(list__foldl4_corresponding3_12_2, 69,7,5,10,3,17,42,16,14,23)
MR_decl_label1(list__foldl4_corresponding3_12_2, 1)
MR_decl_label3(list__foldl5_12_0, 10,3,4)
MR_decl_label4(list__foldl5_12_3, 18,3,4,1)
MR_decl_label3(list__foldl5_12_6, 12,3,11)
MR_decl_label3(list__foldl6_14_0, 10,3,4)
MR_decl_label4(list__foldl6_14_5, 18,3,4,1)
MR_decl_label3(list__foldl6_14_8, 12,3,11)
MR_decl_label4(list__foldl_corresponding_5_0, 28,3,9,8)
MR_decl_label7(list__foldl_corresponding_5_3, 32,5,3,9,18,8,1)
MR_decl_label5(list__foldl_corresponding_5_6, 25,24,8,7,23)
MR_decl_label4(list__foldl_corresponding3_6_0, 61,47,3,17)
MR_decl_label10(list__foldl_corresponding3_6_3, 69,7,5,10,3,17,42,16,14,23)
MR_decl_label1(list__foldl_corresponding3_6_3, 1)
MR_decl_label2(list__foldr_4_0, 13,4)
MR_decl_label3(list__foldr_4_3, 22,4,1)
MR_decl_label3(list__foldr_4_6, 12,3,11)
MR_decl_label10(list__hosort_5_0, 89,10,12,15,6,20,22,24,90,1)
MR_decl_label2(list__index0_3_0, 3,1)
MR_decl_label2(list__index0_det_3_0, 3,2)
MR_decl_label4(list__index0_of_first_occurrence_2_4_0, 20,5,3,1)
MR_decl_label2(list__index1_det_3_0, 3,2)
MR_decl_label2(list__index1_of_first_occurrence_3_0, 2,1)
MR_decl_label2(list__last_2_0, 4,1)
MR_decl_label1(list__last_det_2_0, 3)
MR_decl_label2(list__length_2_3_0, 4,2)
MR_decl_label3(list__map_3_0, 17,4,5)
MR_decl_label4(list__map_3_2, 32,4,6,1)
MR_decl_label3(list__map_3_3, 16,3,4)
MR_decl_label4(list__map_3_5, 24,3,6,1)
MR_decl_label3(list__map2_4_0, 18,4,5)
MR_decl_label4(list__map2_4_2, 33,4,6,1)
MR_decl_label3(list__map2_4_3, 17,3,4)
MR_decl_label4(list__map2_4_5, 34,3,8,1)
MR_decl_label3(list__map2_foldl_6_0, 18,4,5)
MR_decl_label4(list__map2_foldl_6_3, 33,4,6,1)
MR_decl_label3(list__map2_foldl_6_6, 17,3,4)
MR_decl_label3(list__map2_foldl2_8_0, 18,4,5)
MR_decl_label4(list__map2_foldl2_8_4, 33,4,6,1)
MR_decl_label3(list__map2_foldl2_8_5, 17,3,4)
MR_decl_label3(list__map2_foldl3_10_0, 18,4,5)
MR_decl_label4(list__map2_foldl3_10_4, 33,4,6,1)
MR_decl_label3(list__map2_foldl3_10_5, 17,3,4)
MR_decl_label3(list__map2_foldl4_12_0, 18,4,5)
MR_decl_label4(list__map2_foldl4_12_4, 33,4,6,1)
MR_decl_label3(list__map2_foldl4_12_5, 17,3,4)
MR_decl_label3(list__map3_5_0, 19,4,5)
MR_decl_label4(list__map3_5_2, 34,4,6,1)
MR_decl_label3(list__map3_5_3, 18,3,4)
MR_decl_label4(list__map3_5_5, 44,3,10,1)
MR_decl_label3(list__map3_foldl_7_0, 19,4,5)
MR_decl_label4(list__map3_foldl_7_3, 34,4,6,1)
MR_decl_label3(list__map3_foldl_7_6, 18,3,4)
MR_decl_label3(list__map3_foldl2_9_0, 19,4,5)
MR_decl_label4(list__map3_foldl2_9_4, 34,4,6,1)
MR_decl_label3(list__map3_foldl2_9_5, 18,3,4)
MR_decl_label3(list__map4_6_0, 20,4,5)
MR_decl_label4(list__map4_6_2, 35,4,6,1)
MR_decl_label3(list__map4_6_3, 19,3,4)
MR_decl_label4(list__map4_6_5, 54,3,12,1)
MR_decl_label3(list__map4_foldl_8_0, 20,4,5)
MR_decl_label4(list__map4_foldl_8_3, 35,4,6,1)
MR_decl_label3(list__map4_foldl_8_6, 19,3,4)
MR_decl_label3(list__map5_7_0, 21,4,5)
MR_decl_label4(list__map5_7_2, 36,4,6,1)
MR_decl_label3(list__map5_7_3, 20,3,4)
MR_decl_label4(list__map5_7_5, 64,3,14,1)
MR_decl_label3(list__map6_8_0, 22,4,5)
MR_decl_label4(list__map6_8_2, 37,4,6,1)
MR_decl_label3(list__map6_8_3, 21,3,4)
MR_decl_label4(list__map6_8_5, 74,3,16,1)
MR_decl_label3(list__map7_9_0, 23,4,5)
MR_decl_label4(list__map7_9_2, 38,4,6,1)
MR_decl_label3(list__map7_9_3, 22,3,4)
MR_decl_label4(list__map7_9_5, 84,3,18,1)
MR_decl_label3(list__map8_10_0, 24,4,5)
MR_decl_label4(list__map8_10_2, 39,4,6,1)
MR_decl_label3(list__map8_10_3, 23,3,4)
MR_decl_label4(list__map8_10_5, 94,3,20,1)
MR_decl_label4(list__map_corresponding_4_0, 3,9,10,8)
MR_decl_label7(list__map_corresponding_4_1, 52,51,9,11,8,2,1)
MR_decl_label4(list__map_corresponding3_foldl_7_0, 48,3,17,18)
MR_decl_label10(list__map_corresponding3_foldl_7_3, 89,88,10,87,17,19,16,14,24,2)
MR_decl_label1(list__map_corresponding3_foldl_7_3, 1)
MR_decl_label4(list__map_corresponding_foldl_6_0, 3,9,10,8)
MR_decl_label7(list__map_corresponding_foldl_6_3, 52,51,9,11,8,2,1)
MR_decl_label4(list__map_corresponding_foldl2_8_0, 3,9,10,8)
MR_decl_label7(list__map_corresponding_foldl2_8_3, 52,51,9,11,8,2,1)
MR_decl_label4(list__map_corresponding_foldl3_10_0, 3,9,10,8)
MR_decl_label7(list__map_corresponding_foldl3_10_3, 52,51,9,11,8,2,1)
MR_decl_label3(list__map_foldl_5_0, 17,4,5)
MR_decl_label4(list__map_foldl_5_3, 32,4,6,1)
MR_decl_label4(list__map_foldl_5_6, 28,3,6,1)
MR_decl_label3(list__map_foldl_5_7, 16,3,4)
MR_decl_label3(list__map_foldl2_7_0, 17,4,5)
MR_decl_label4(list__map_foldl2_7_3, 32,4,6,1)
MR_decl_label4(list__map_foldl2_7_6, 28,3,6,1)
MR_decl_label3(list__map_foldl2_7_10, 16,3,4)
MR_decl_label3(list__map_foldl3_9_0, 17,4,5)
MR_decl_label4(list__map_foldl3_9_4, 32,4,6,1)
MR_decl_label3(list__map_foldl3_9_5, 16,3,4)
MR_decl_label3(list__map_foldl4_11_0, 17,4,5)
MR_decl_label4(list__map_foldl4_11_4, 32,4,6,1)
MR_decl_label3(list__map_foldl4_11_5, 16,3,4)
MR_decl_label3(list__map_foldl5_13_0, 17,4,5)
MR_decl_label4(list__map_foldl5_13_4, 32,4,6,1)
MR_decl_label3(list__map_foldl5_13_5, 16,3,4)
MR_decl_label3(list__map_foldl6_15_0, 17,4,5)
MR_decl_label4(list__map_foldl6_15_4, 32,4,6,1)
MR_decl_label3(list__map_foldl6_15_5, 16,3,4)
MR_decl_label4(list__member_2_0, 19,6,3,1)
MR_decl_label2(list__member_2_1, 5,3)
MR_decl_label1(list__member_3_0, 1)
MR_decl_label5(list__member_index0_3_0, 19,5,4,3,1)
MR_decl_label3(list__member_index0_3_1, 4,3,6)
MR_decl_label2(list__member_index0_3_2, 3,4)
MR_decl_label7(list__merge_3_0, 5,3,48,9,10,8,12)
MR_decl_label7(list__merge_4_0, 5,3,48,9,10,8,12)
MR_decl_label9(list__merge_and_remove_dups_3_0, 5,3,58,8,11,10,14,13,16)
MR_decl_label9(list__merge_and_remove_dups_4_0, 5,3,58,8,11,10,14,13,16)
MR_decl_label1(list__merge_sort_2_0, 2)
MR_decl_label5(list__merge_sort_2_3_0, 4,6,7,3,2)
MR_decl_label5(list__merge_sort_and_remove_dups_2_3_0, 4,6,7,3,2)
MR_decl_label5(list__negated_filter_3_0, 25,3,6,4,9)
MR_decl_label2(list__nth_member_lookup_3_0, 4,2)
MR_decl_label1(list__nth_member_search_3_0, 1)
MR_decl_label4(list__nth_member_search_2_4_0, 20,5,3,1)
MR_decl_label3(list__perm_2_0, 15,3,14)
MR_decl_label1(list__remove_adjacent_dups_2_0, 3)
MR_decl_label1(list__remove_adjacent_dups_3_0, 3)
MR_decl_label5(list__remove_adjacent_dups_2_3_0, 26,3,7,5,10)
MR_decl_label5(list__remove_adjacent_dups_2_4_0, 24,3,6,5,8)
MR_decl_label6(list__remove_dups_2_3_0, 24,3,5,4,7,8)
MR_decl_label5(list__remove_suffix_3_0, 2,3,4,6,1)
MR_decl_label8(list__replace_4_0, 37,6,8,10,5,12,4,1)
MR_decl_label3(list__replace_4_1, 4,3,7)
MR_decl_label5(list__replace_all_4_0, 30,6,8,4,10)
MR_decl_label4(list__replace_first_4_0, 5,3,8,1)
MR_decl_label1(list__replace_nth_4_0, 1)
MR_decl_label3(list__replace_nth_2_4_0, 3,6,1)
MR_decl_label2(list__same_length_2_0, 3,1)
MR_decl_label4(list__series_2_5_0, 15,4,7,2)
MR_decl_label1(list__sort_2_0, 2)
MR_decl_label5(list__sort_3_0, 2,3,6,8,5)
MR_decl_label1(list__sort_and_remove_dups_2_0, 2)
MR_decl_label2(list__sort_and_remove_dups_3_0, 2,4)
MR_decl_label3(list__split_last_3_0, 24,5,1)
MR_decl_label3(list__split_last_det_3_0, 26,6,3)
MR_decl_label3(list__split_list_4_0, 38,5,1)
MR_decl_label2(list__split_upto_4_0, 4,2)
MR_decl_label5(list__sublist_2_0, 28,7,17,5,1)
MR_decl_label1(list__successive_integers_4_0, 2)
MR_decl_label3(list__take_3_0, 4,2,1)
MR_decl_label2(list__take_upto_3_0, 4,2)
MR_decl_label4(list__takewhile_4_0, 28,6,8,4)
MR_decl_label2(list__zip_3_0, 13,4)
MR_decl_label1(fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0, 2)
MR_decl_label1(fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0, 2)
MR_decl_label1(fn__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_1_0, 3)
MR_decl_label1(fn__list__det_head_1_0, 3)
MR_decl_label2(fn__list__det_index0_2_0, 3,2)
MR_decl_label2(fn__list__det_index0_of_first_occurrence_2_0, 3,2)
MR_decl_label2(fn__list__det_index1_2_0, 3,2)
MR_decl_label2(fn__list__det_index1_of_first_occurrence_2_0, 3,2)
MR_decl_label1(fn__list__det_last_1_0, 3)
MR_decl_label1(fn__list__det_tail_1_0, 3)
MR_decl_label1(fn__list__duplicate_2_3_0, 2)
MR_decl_label6(fn__list__filter_map_corresponding_3_0, 45,3,12,14,10,9)
MR_decl_label6(fn__list__filter_map_corresponding3_4_0, 65,8,10,6,2,14)
MR_decl_label1(fn__list__head_1_0, 1)
MR_decl_label2(fn__list__index0_det_2_0, 3,2)
MR_decl_label2(fn__list__index1_det_2_0, 3,2)
MR_decl_label3(fn__list__inst_preserving_append_2_0, 5,6,2)
MR_decl_label1(fn__list__list_to_doc_1_0, 3)
MR_decl_label6(fn__list__list_to_doc_2_1_0, 42,46,7,6,10,12)
MR_decl_label3(fn__list__map_2_0, 17,4,5)
MR_decl_label4(fn__list__map_corresponding_3_0, 3,10,11,9)
MR_decl_label4(fn__list__map_corresponding3_4_0, 6,7,2,9)
MR_decl_label1(fn__list__remove_adjacent_dups_1_0, 3)
MR_decl_label1(fn__list__series_3_0, 2)
MR_decl_label1(fn__list__sort_1_0, 2)
MR_decl_label5(fn__list__sort_2_0, 2,3,6,8,5)
MR_decl_label1(fn__list__sort_and_remove_dups_1_0, 2)
MR_decl_label1(fn__list__tail_1_0, 1)
MR_decl_label2(fn__list__take_upto_2_0, 4,2)
MR_decl_label2(fn__list__zip_2_0, 13,4)
MR_decl_label5(__Unify___list__list_1_0, 30,14,5,7,1)
MR_decl_label7(__Compare___list__list_1_0, 40,24,7,5,9,11,45)
MR_def_extern_entry(list__is_empty_1_0)
MR_def_extern_entry(list__is_not_empty_1_0)
MR_def_extern_entry(list__cons_3_0)
MR_def_extern_entry(fn__list__cons_2_0)
MR_def_extern_entry(list__append_3_0)
MR_def_extern_entry(list__append_3_1)
MR_def_extern_entry(list__append_3_2)
MR_def_extern_entry(list__append_3_3)
MR_def_extern_entry(list__append_3_4)
MR_def_extern_entry(fn__list__append_2_0)
MR_def_extern_entry(fn__f_108_105_115_116_95_95_43_43_2_0)
MR_def_extern_entry(list__length_2_3_0)
MR_def_extern_entry(list__length_2_0)
MR_def_extern_entry(list__split_list_4_0)
MR_def_extern_entry(list__remove_suffix_3_0)
MR_def_extern_entry(list__merge_3_0)
MR_def_extern_entry(fn__list__merge_2_0)
MR_def_extern_entry(list__merge_and_remove_dups_3_0)
MR_def_extern_entry(fn__list__merge_and_remove_dups_2_0)
MR_def_extern_entry(list__remove_adjacent_dups_2_3_0)
MR_def_extern_entry(list__remove_adjacent_dups_2_0)
MR_def_extern_entry(fn__list__remove_adjacent_dups_1_0)
MR_def_extern_entry(list__remove_dups_2_3_0)
MR_def_extern_entry(list__remove_dups_2_0)
MR_def_extern_entry(fn__list__remove_dups_1_0)
MR_def_extern_entry(list__member_2_0)
MR_def_extern_entry(list__member_2_1)
MR_def_extern_entry(list__member_3_0)
MR_def_extern_entry(list__member_index0_3_0)
MR_def_extern_entry(list__member_index0_3_1)
MR_def_extern_entry(list__member_index0_3_2)
MR_def_extern_entry(list__contains_2_0)
MR_def_extern_entry(fn__list__length_1_0)
MR_def_extern_entry(list__same_length_2_0)
MR_def_extern_entry(list__det_split_list_4_0)
MR_def_extern_entry(list__split_upto_4_0)
MR_def_extern_entry(list__take_3_0)
MR_def_extern_entry(list__take_upto_3_0)
MR_def_extern_entry(fn__list__take_upto_2_0)
MR_def_extern_entry(list__drop_3_0)
MR_def_extern_entry(list__det_drop_3_0)
MR_def_extern_entry(list__delete_3_0)
MR_def_extern_entry(list__delete_3_1)
MR_def_extern_entry(list__delete_3_2)
MR_def_extern_entry(list__delete_3_3)
MR_def_extern_entry(list__insert_3_0)
MR_def_extern_entry(list__insert_3_1)
MR_def_extern_entry(list__insert_3_2)
MR_def_extern_entry(list__insert_3_3)
MR_def_extern_entry(list__delete_all_3_0)
MR_def_extern_entry(list__delete_all_3_1)
MR_def_extern_entry(fn__list__delete_all_2_0)
MR_def_extern_entry(list__delete_first_3_0)
MR_def_extern_entry(list__delete_elems_3_0)
MR_def_extern_entry(fn__list__delete_elems_2_0)
MR_def_extern_entry(list__replace_4_0)
MR_def_extern_entry(list__replace_4_1)
MR_def_extern_entry(list__replace_first_4_0)
MR_def_extern_entry(list__replace_all_4_0)
MR_def_extern_entry(fn__list__replace_all_3_0)
MR_def_extern_entry(list__replace_nth_4_0)
MR_def_extern_entry(list__replace_nth_2_4_0)
MR_def_extern_entry(list__det_replace_nth_4_0)
MR_def_extern_entry(fn__list__det_replace_nth_3_0)
MR_def_extern_entry(list__replace_nth_det_4_0)
MR_def_extern_entry(fn__list__replace_nth_det_3_0)
MR_def_extern_entry(list__merge_sort_and_remove_dups_2_3_0)
MR_def_extern_entry(list__sort_and_remove_dups_2_0)
MR_def_extern_entry(fn__list__sort_and_remove_dups_1_0)
MR_def_extern_entry(list__merge_sort_2_3_0)
MR_def_extern_entry(list__merge_sort_2_0)
MR_def_extern_entry(list__sort_2_0)
MR_def_extern_entry(fn__list__sort_1_0)
MR_def_extern_entry(list__reverse_2_0)
MR_def_extern_entry(list__reverse_2_1)
MR_def_extern_entry(fn__list__reverse_1_0)
MR_def_extern_entry(list__perm_2_0)
MR_def_extern_entry(list__nth_member_search_2_4_0)
MR_def_extern_entry(list__nth_member_search_3_0)
MR_def_extern_entry(list__nth_member_lookup_3_0)
MR_def_extern_entry(list__index0_3_0)
MR_def_extern_entry(list__index1_3_0)
MR_def_extern_entry(list__det_index0_3_0)
MR_def_extern_entry(list__det_index1_3_0)
MR_def_extern_entry(list__index0_det_3_0)
MR_def_extern_entry(list__index1_det_3_0)
MR_def_extern_entry(fn__list__index0_det_2_0)
MR_def_extern_entry(fn__list__index1_det_2_0)
MR_def_extern_entry(fn__list__det_index0_2_0)
MR_def_extern_entry(fn__list__det_index1_2_0)
MR_def_extern_entry(list__index0_of_first_occurrence_2_4_0)
MR_def_extern_entry(list__index0_of_first_occurrence_3_0)
MR_def_extern_entry(list__index1_of_first_occurrence_3_0)
MR_def_extern_entry(fn__list__det_index0_of_first_occurrence_2_0)
MR_def_extern_entry(fn__list__det_index1_of_first_occurrence_2_0)
MR_def_extern_entry(list__zip_3_0)
MR_def_extern_entry(fn__list__zip_2_0)
MR_def_extern_entry(fn__list__duplicate_2_3_0)
MR_def_extern_entry(list__duplicate_3_0)
MR_def_extern_entry(fn__list__duplicate_2_0)
MR_def_extern_entry(list__condense_2_0)
MR_def_extern_entry(fn__list__condense_1_0)
MR_def_extern_entry(list__chunk_2_5_0)
MR_def_extern_entry(list__chunk_3_0)
MR_def_extern_entry(fn__list__chunk_2_0)
MR_def_extern_entry(list__sublist_2_0)
MR_def_extern_entry(list__all_same_2_2_0)
MR_def_extern_entry(list__all_same_1_0)
MR_def_extern_entry(list__last_2_0)
MR_def_extern_entry(list__det_last_2_0)
MR_def_extern_entry(fn__list__det_last_1_0)
MR_def_extern_entry(list__last_det_2_0)
MR_def_extern_entry(list__split_last_3_0)
MR_def_extern_entry(list__split_last_det_3_0)
MR_def_extern_entry(list__det_split_last_3_0)
MR_def_extern_entry(list__map_3_0)
MR_def_extern_entry(list__map_3_1)
MR_def_extern_entry(list__map_3_2)
MR_def_extern_entry(list__map_3_3)
MR_def_extern_entry(list__map_3_4)
MR_def_extern_entry(list__map_3_5)
MR_def_extern_entry(fn__list__map_2_0)
MR_def_extern_entry(list__map2_4_0)
MR_def_extern_entry(list__map2_4_1)
MR_def_extern_entry(list__map2_4_2)
MR_def_extern_entry(list__map2_4_3)
MR_def_extern_entry(list__map2_4_4)
MR_def_extern_entry(list__map2_4_5)
MR_def_extern_entry(list__map3_5_0)
MR_def_extern_entry(list__map3_5_1)
MR_def_extern_entry(list__map3_5_2)
MR_def_extern_entry(list__map3_5_3)
MR_def_extern_entry(list__map3_5_4)
MR_def_extern_entry(list__map3_5_5)
MR_def_extern_entry(list__map4_6_0)
MR_def_extern_entry(list__map4_6_1)
MR_def_extern_entry(list__map4_6_2)
MR_def_extern_entry(list__map4_6_3)
MR_def_extern_entry(list__map4_6_4)
MR_def_extern_entry(list__map4_6_5)
MR_def_extern_entry(list__map5_7_0)
MR_def_extern_entry(list__map5_7_1)
MR_def_extern_entry(list__map5_7_2)
MR_def_extern_entry(list__map5_7_3)
MR_def_extern_entry(list__map5_7_4)
MR_def_extern_entry(list__map5_7_5)
MR_def_extern_entry(list__map6_8_0)
MR_def_extern_entry(list__map6_8_1)
MR_def_extern_entry(list__map6_8_2)
MR_def_extern_entry(list__map6_8_3)
MR_def_extern_entry(list__map6_8_4)
MR_def_extern_entry(list__map6_8_5)
MR_def_extern_entry(list__map7_9_0)
MR_def_extern_entry(list__map7_9_1)
MR_def_extern_entry(list__map7_9_2)
MR_def_extern_entry(list__map7_9_3)
MR_def_extern_entry(list__map7_9_4)
MR_def_extern_entry(list__map7_9_5)
MR_def_extern_entry(list__map8_10_0)
MR_def_extern_entry(list__map8_10_1)
MR_def_extern_entry(list__map8_10_2)
MR_def_extern_entry(list__map8_10_3)
MR_def_extern_entry(list__map8_10_4)
MR_def_extern_entry(list__map8_10_5)
MR_def_extern_entry(fn__list__map_corresponding_3_0)
MR_def_extern_entry(list__map_corresponding_4_0)
MR_def_extern_entry(list__map_corresponding_4_1)
MR_def_extern_entry(fn__list__map_corresponding3_4_0)
MR_def_extern_entry(fn__list__filter_map_corresponding_3_0)
MR_def_extern_entry(fn__list__filter_map_corresponding3_4_0)
MR_def_extern_entry(list__map_corresponding_foldl_6_0)
MR_def_extern_entry(list__map_corresponding_foldl_6_1)
MR_def_extern_entry(list__map_corresponding_foldl_6_2)
MR_def_extern_entry(list__map_corresponding_foldl_6_3)
MR_def_extern_entry(list__map_corresponding_foldl_6_4)
MR_def_extern_entry(list__map_corresponding_foldl_6_5)
MR_def_extern_entry(list__map_corresponding_foldl2_8_0)
MR_def_extern_entry(list__map_corresponding_foldl2_8_1)
MR_def_extern_entry(list__map_corresponding_foldl2_8_2)
MR_def_extern_entry(list__map_corresponding_foldl2_8_3)
MR_def_extern_entry(list__map_corresponding_foldl2_8_4)
MR_def_extern_entry(list__map_corresponding_foldl2_8_5)
MR_def_extern_entry(list__map_corresponding_foldl3_10_0)
MR_def_extern_entry(list__map_corresponding_foldl3_10_1)
MR_def_extern_entry(list__map_corresponding_foldl3_10_2)
MR_def_extern_entry(list__map_corresponding_foldl3_10_3)
MR_def_extern_entry(list__map_corresponding_foldl3_10_4)
MR_def_extern_entry(list__map_corresponding_foldl3_10_5)
MR_def_extern_entry(list__map_corresponding3_foldl_7_0)
MR_def_extern_entry(list__map_corresponding3_foldl_7_1)
MR_def_extern_entry(list__map_corresponding3_foldl_7_2)
MR_def_extern_entry(list__map_corresponding3_foldl_7_3)
MR_def_extern_entry(list__map_corresponding3_foldl_7_4)
MR_def_extern_entry(list__map_corresponding3_foldl_7_5)
MR_def_extern_entry(list__foldl_4_0)
MR_def_extern_entry(list__foldl_4_1)
MR_def_extern_entry(list__foldl_4_2)
MR_def_extern_entry(list__foldl_4_3)
MR_def_extern_entry(list__foldl_4_4)
MR_def_extern_entry(list__foldl_4_5)
MR_def_extern_entry(list__foldl_4_6)
MR_def_extern_entry(list__foldl_4_7)
MR_def_extern_entry(list__foldl_4_8)
MR_def_extern_entry(list__foldl_4_9)
MR_def_extern_entry(list__foldl_4_10)
MR_def_extern_entry(fn__list__foldl_3_0)
MR_def_extern_entry(list__foldr_4_0)
MR_def_extern_entry(list__foldr_4_1)
MR_def_extern_entry(list__foldr_4_2)
MR_def_extern_entry(list__foldr_4_3)
MR_def_extern_entry(list__foldr_4_4)
MR_def_extern_entry(list__foldr_4_5)
MR_def_extern_entry(list__foldr_4_6)
MR_def_extern_entry(list__foldr_4_7)
MR_def_extern_entry(list__foldr_4_8)
MR_def_extern_entry(list__foldr_4_9)
MR_def_extern_entry(list__foldr_4_10)
MR_def_extern_entry(fn__list__foldr_3_0)
MR_def_extern_entry(list__foldl2_6_0)
MR_def_extern_entry(list__foldl2_6_1)
MR_def_extern_entry(list__foldl2_6_2)
MR_def_extern_entry(list__foldl2_6_3)
MR_def_extern_entry(list__foldl2_6_4)
MR_def_extern_entry(list__foldl2_6_5)
MR_def_extern_entry(list__foldl2_6_6)
MR_def_extern_entry(list__foldl2_6_7)
MR_def_extern_entry(list__foldl2_6_8)
MR_def_extern_entry(list__foldl2_6_9)
MR_def_extern_entry(list__foldl2_6_10)
MR_def_extern_entry(list__foldl2_6_11)
MR_def_extern_entry(list__foldl2_6_12)
MR_def_extern_entry(list__foldl3_8_0)
MR_def_extern_entry(list__foldl3_8_1)
MR_def_extern_entry(list__foldl3_8_2)
MR_def_extern_entry(list__foldl3_8_3)
MR_def_extern_entry(list__foldl3_8_4)
MR_def_extern_entry(list__foldl3_8_5)
MR_def_extern_entry(list__foldl3_8_6)
MR_def_extern_entry(list__foldl3_8_7)
MR_def_extern_entry(list__foldl3_8_8)
MR_def_extern_entry(list__foldl3_8_9)
MR_def_extern_entry(list__foldl4_10_0)
MR_def_extern_entry(list__foldl4_10_1)
MR_def_extern_entry(list__foldl4_10_2)
MR_def_extern_entry(list__foldl4_10_3)
MR_def_extern_entry(list__foldl4_10_4)
MR_def_extern_entry(list__foldl4_10_5)
MR_def_extern_entry(list__foldl4_10_6)
MR_def_extern_entry(list__foldl4_10_7)
MR_def_extern_entry(list__foldl4_10_8)
MR_def_extern_entry(list__foldl4_10_9)
MR_def_extern_entry(list__foldl5_12_0)
MR_def_extern_entry(list__foldl5_12_1)
MR_def_extern_entry(list__foldl5_12_2)
MR_def_extern_entry(list__foldl5_12_3)
MR_def_extern_entry(list__foldl5_12_4)
MR_def_extern_entry(list__foldl5_12_5)
MR_def_extern_entry(list__foldl5_12_6)
MR_def_extern_entry(list__foldl5_12_7)
MR_def_extern_entry(list__foldl5_12_8)
MR_def_extern_entry(list__foldl5_12_9)
MR_def_extern_entry(list__foldl6_14_0)
MR_def_extern_entry(list__foldl6_14_1)
MR_def_extern_entry(list__foldl6_14_2)
MR_def_extern_entry(list__foldl6_14_3)
MR_def_extern_entry(list__foldl6_14_4)
MR_def_extern_entry(list__foldl6_14_5)
MR_def_extern_entry(list__foldl6_14_6)
MR_def_extern_entry(list__foldl6_14_7)
MR_def_extern_entry(list__foldl6_14_8)
MR_def_extern_entry(list__foldl_corresponding_5_0)
MR_def_extern_entry(list__foldl_corresponding_5_1)
MR_def_extern_entry(list__foldl_corresponding_5_2)
MR_def_extern_entry(list__foldl_corresponding_5_3)
MR_def_extern_entry(list__foldl_corresponding_5_4)
MR_def_extern_entry(list__foldl_corresponding_5_5)
MR_def_extern_entry(list__foldl_corresponding_5_6)
MR_def_extern_entry(list__foldl_corresponding_5_7)
MR_def_extern_entry(list__foldl_corresponding_5_8)
MR_def_extern_entry(list__foldl_corresponding_5_9)
MR_def_extern_entry(list__foldl2_corresponding_7_0)
MR_def_extern_entry(list__foldl2_corresponding_7_1)
MR_def_extern_entry(list__foldl2_corresponding_7_2)
MR_def_extern_entry(list__foldl2_corresponding_7_3)
MR_def_extern_entry(list__foldl2_corresponding_7_4)
MR_def_extern_entry(list__foldl2_corresponding_7_5)
MR_def_extern_entry(list__foldl2_corresponding_7_6)
MR_def_extern_entry(list__foldl2_corresponding_7_7)
MR_def_extern_entry(list__foldl2_corresponding_7_8)
MR_def_extern_entry(list__foldl2_corresponding_7_9)
MR_def_extern_entry(list__foldl3_corresponding_9_0)
MR_def_extern_entry(list__foldl3_corresponding_9_1)
MR_def_extern_entry(list__foldl3_corresponding_9_2)
MR_def_extern_entry(list__foldl3_corresponding_9_3)
MR_def_extern_entry(list__foldl3_corresponding_9_4)
MR_def_extern_entry(list__foldl3_corresponding_9_5)
MR_def_extern_entry(list__foldl_corresponding3_6_0)
MR_def_extern_entry(list__foldl_corresponding3_6_1)
MR_def_extern_entry(list__foldl_corresponding3_6_2)
MR_def_extern_entry(list__foldl_corresponding3_6_3)
MR_def_extern_entry(list__foldl_corresponding3_6_4)
MR_def_extern_entry(list__foldl_corresponding3_6_5)
MR_def_extern_entry(list__foldl2_corresponding3_8_0)
MR_def_extern_entry(list__foldl2_corresponding3_8_1)
MR_def_extern_entry(list__foldl2_corresponding3_8_2)
MR_def_extern_entry(list__foldl3_corresponding3_10_0)
MR_def_extern_entry(list__foldl3_corresponding3_10_1)
MR_def_extern_entry(list__foldl3_corresponding3_10_2)
MR_def_extern_entry(list__foldl4_corresponding3_12_0)
MR_def_extern_entry(list__foldl4_corresponding3_12_1)
MR_def_extern_entry(list__foldl4_corresponding3_12_2)
MR_def_extern_entry(list__map_foldl_5_0)
MR_def_extern_entry(list__map_foldl_5_1)
MR_def_extern_entry(list__map_foldl_5_2)
MR_def_extern_entry(list__map_foldl_5_3)
MR_def_extern_entry(list__map_foldl_5_4)
MR_def_extern_entry(list__map_foldl_5_5)
MR_def_extern_entry(list__map_foldl_5_6)
MR_def_extern_entry(list__map_foldl_5_7)
MR_def_extern_entry(list__map_foldl_5_8)
MR_def_extern_entry(list__map_foldl_5_9)
MR_def_extern_entry(list__map_foldl_5_10)
MR_def_extern_entry(list__map_foldl_5_11)
MR_def_extern_entry(list__map_foldl2_7_0)
MR_def_extern_entry(list__map_foldl2_7_1)
MR_def_extern_entry(list__map_foldl2_7_2)
MR_def_extern_entry(list__map_foldl2_7_3)
MR_def_extern_entry(list__map_foldl2_7_4)
MR_def_extern_entry(list__map_foldl2_7_5)
MR_def_extern_entry(list__map_foldl2_7_6)
MR_def_extern_entry(list__map_foldl2_7_7)
MR_def_extern_entry(list__map_foldl2_7_8)
MR_def_extern_entry(list__map_foldl2_7_9)
MR_def_extern_entry(list__map_foldl2_7_10)
MR_def_extern_entry(list__map_foldl3_9_0)
MR_def_extern_entry(list__map_foldl3_9_1)
MR_def_extern_entry(list__map_foldl3_9_2)
MR_def_extern_entry(list__map_foldl3_9_3)
MR_def_extern_entry(list__map_foldl3_9_4)
MR_def_extern_entry(list__map_foldl3_9_5)
MR_def_extern_entry(list__map_foldl4_11_0)
MR_def_extern_entry(list__map_foldl4_11_1)
MR_def_extern_entry(list__map_foldl4_11_2)
MR_def_extern_entry(list__map_foldl4_11_3)
MR_def_extern_entry(list__map_foldl4_11_4)
MR_def_extern_entry(list__map_foldl4_11_5)
MR_def_extern_entry(list__map_foldl5_13_0)
MR_def_extern_entry(list__map_foldl5_13_1)
MR_def_extern_entry(list__map_foldl5_13_2)
MR_def_extern_entry(list__map_foldl5_13_3)
MR_def_extern_entry(list__map_foldl5_13_4)
MR_def_extern_entry(list__map_foldl5_13_5)
MR_def_extern_entry(list__map_foldl6_15_0)
MR_def_extern_entry(list__map_foldl6_15_1)
MR_def_extern_entry(list__map_foldl6_15_2)
MR_def_extern_entry(list__map_foldl6_15_3)
MR_def_extern_entry(list__map_foldl6_15_4)
MR_def_extern_entry(list__map_foldl6_15_5)
MR_def_extern_entry(list__map2_foldl_6_0)
MR_def_extern_entry(list__map2_foldl_6_1)
MR_def_extern_entry(list__map2_foldl_6_2)
MR_def_extern_entry(list__map2_foldl_6_3)
MR_def_extern_entry(list__map2_foldl_6_4)
MR_def_extern_entry(list__map2_foldl_6_5)
MR_def_extern_entry(list__map2_foldl_6_6)
MR_def_extern_entry(list__map2_foldl_6_7)
MR_def_extern_entry(list__map2_foldl_6_8)
MR_def_extern_entry(list__map2_foldl_6_9)
MR_def_extern_entry(list__map2_foldl2_8_0)
MR_def_extern_entry(list__map2_foldl2_8_1)
MR_def_extern_entry(list__map2_foldl2_8_2)
MR_def_extern_entry(list__map2_foldl2_8_3)
MR_def_extern_entry(list__map2_foldl2_8_4)
MR_def_extern_entry(list__map2_foldl2_8_5)
MR_def_extern_entry(list__map2_foldl3_10_0)
MR_def_extern_entry(list__map2_foldl3_10_1)
MR_def_extern_entry(list__map2_foldl3_10_2)
MR_def_extern_entry(list__map2_foldl3_10_3)
MR_def_extern_entry(list__map2_foldl3_10_4)
MR_def_extern_entry(list__map2_foldl3_10_5)
MR_def_extern_entry(list__map2_foldl4_12_0)
MR_def_extern_entry(list__map2_foldl4_12_1)
MR_def_extern_entry(list__map2_foldl4_12_2)
MR_def_extern_entry(list__map2_foldl4_12_3)
MR_def_extern_entry(list__map2_foldl4_12_4)
MR_def_extern_entry(list__map2_foldl4_12_5)
MR_def_extern_entry(list__map3_foldl_7_0)
MR_def_extern_entry(list__map3_foldl_7_1)
MR_def_extern_entry(list__map3_foldl_7_2)
MR_def_extern_entry(list__map3_foldl_7_3)
MR_def_extern_entry(list__map3_foldl_7_4)
MR_def_extern_entry(list__map3_foldl_7_5)
MR_def_extern_entry(list__map3_foldl_7_6)
MR_def_extern_entry(list__map3_foldl_7_7)
MR_def_extern_entry(list__map3_foldl_7_8)
MR_def_extern_entry(list__map3_foldl_7_9)
MR_def_extern_entry(list__map3_foldl2_9_0)
MR_def_extern_entry(list__map3_foldl2_9_1)
MR_def_extern_entry(list__map3_foldl2_9_2)
MR_def_extern_entry(list__map3_foldl2_9_3)
MR_def_extern_entry(list__map3_foldl2_9_4)
MR_def_extern_entry(list__map3_foldl2_9_5)
MR_def_extern_entry(list__map4_foldl_8_0)
MR_def_extern_entry(list__map4_foldl_8_1)
MR_def_extern_entry(list__map4_foldl_8_2)
MR_def_extern_entry(list__map4_foldl_8_3)
MR_def_extern_entry(list__map4_foldl_8_4)
MR_def_extern_entry(list__map4_foldl_8_5)
MR_def_extern_entry(list__map4_foldl_8_6)
MR_def_extern_entry(list__map4_foldl_8_7)
MR_def_extern_entry(list__map4_foldl_8_8)
MR_def_extern_entry(list__map4_foldl_8_9)
MR_def_extern_entry(list__filter_map_foldl_5_0)
MR_def_extern_entry(list__all_true_2_0)
MR_def_extern_entry(list__all_false_2_0)
MR_def_extern_entry(list__find_first_match_3_0)
MR_def_extern_entry(list__filter_3_0)
MR_def_extern_entry(fn__list__filter_2_0)
MR_def_extern_entry(list__negated_filter_3_0)
MR_def_extern_entry(fn__list__negated_filter_2_0)
MR_def_extern_entry(list__filter_4_0)
MR_def_extern_entry(list__filter_map_3_0)
MR_def_extern_entry(fn__list__filter_map_2_0)
MR_def_extern_entry(list__filter_map_4_0)
MR_def_extern_entry(list__find_first_map_3_0)
MR_def_extern_entry(list__find_first_map2_4_0)
MR_def_extern_entry(list__find_first_map3_5_0)
MR_def_extern_entry(list__find_index_of_match_4_0)
MR_def_extern_entry(list__takewhile_4_0)
MR_def_extern_entry(list__merge_4_0)
MR_def_extern_entry(list__hosort_5_0)
MR_def_extern_entry(list__sort_3_0)
MR_def_extern_entry(fn__list__sort_2_0)
MR_def_extern_entry(list__remove_adjacent_dups_2_4_0)
MR_def_extern_entry(list__remove_adjacent_dups_3_0)
MR_def_extern_entry(list__sort_and_remove_dups_3_0)
MR_def_extern_entry(fn__list__merge_3_0)
MR_def_extern_entry(list__merge_and_remove_dups_4_0)
MR_def_extern_entry(fn__list__merge_and_remove_dups_3_0)
MR_def_extern_entry(list__series_2_5_0)
MR_def_extern_entry(fn__list__series_3_0)
MR_def_extern_entry(list__successive_integers_4_0)
MR_def_extern_entry(fn__f_108_105_115_116_95_95_46_46_2_0)
MR_def_extern_entry(fn__list__head_1_0)
MR_def_extern_entry(fn__list__tail_1_0)
MR_def_extern_entry(fn__list__det_head_1_0)
MR_def_extern_entry(fn__list__det_tail_1_0)
MR_decl_static(fn__list__list_to_doc_2_1_0)
MR_def_extern_entry(fn__list__list_to_doc_1_0)
MR_def_extern_entry(fn__list__inst_preserving_append_2_0)
MR_decl_static(fn__list__empty_list_0_0)
MR_def_extern_entry(__Unify___list__list_1_0)
MR_def_extern_entry(__Compare___list__list_1_0)
MR_def_extern_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0)
MR_def_extern_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0)
MR_def_extern_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0)
MR_def_extern_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0)
MR_def_extern_entry(fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0)
MR_def_extern_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0)
MR_def_extern_entry(fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0)
MR_def_extern_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0)
MR_def_extern_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0)
MR_def_extern_entry(fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0)
MR_def_extern_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0)
MR_def_extern_entry(fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0)
MR_def_extern_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0)
MR_def_extern_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0)
MR_decl_static(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_3_0)
MR_decl_static(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_50_95_95_91_49_93_95_48_3_0)
MR_decl_static(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_3_0)
MR_decl_static(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_97_115_116_95_100_101_116_95_50_95_95_91_49_93_95_48_4_0)
MR_decl_static(fn__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_109_112_116_121_95_108_105_115_116_95_95_91_49_93_95_48_0_0)
MR_decl_static(fn__f_108_105_115_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_def_extern_entry(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0)
MR_def_extern_entry(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0)
MR_def_extern_entry(fn__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_1_0)
MR_def_extern_entry(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0)
MR_def_extern_entry(fn__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0)
MR_def_extern_entry(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0)
MR_def_extern_entry(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0)
MR_decl_static(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0)
MR_decl_static(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0)
MR_decl_static(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0)
MR_decl_static(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
MR_decl_static(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
MR_decl_static(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0)
MR_decl_static(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0)

static const struct mercury_type_0 mercury_common_0[5] =
{
{
MR_string_const("", 0)
},
{
MR_string_const(", ", 2)
},
{
MR_string_const("[", 1)
},
{
MR_string_const("]", 1)
},
{
MR_string_const(" ", 1)
},
};

static const struct mercury_type_1 mercury_common_1[7] =
{
{
{
MR_tbmkword(0, 0),
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
MR_TAG_COMMON(3,2,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,3,0),
MR_TAG_COMMON(1,1,2)
}
},
{
{
MR_TAG_COMMON(3,2,0),
MR_TAG_COMMON(1,1,3)
}
},
{
{
MR_TAG_COMMON(1,0,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,3),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_2 mercury_common_2[4] =
{
{
4,
MR_tbmkword(0, 0)
},
{
4,
MR_tbmkword(0, 1)
},
{
4,
MR_TAG_COMMON(1,0,4)
},
{
4,
MR_tbmkword(0, 2)
},
};

static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_TAG_COMMON(1,1,1)
},
{
MR_TAG_COMMON(1,1,4)
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
MR_LIST_CTOR_ADDR,
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
mercury_data__closure_layout__fn__list__list_to_doc_2_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pretty_printer__type_ctor_info_doc_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__list__list_to_doc_2_1_0_1,
MR_COMMON(5,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_COMMON(4,0),
MR_CTOR0_ADDR(pretty_printer, doc)
}
},
};

static const MR_DuFunctorDesc mercury_data_list__du_functor_desc_list_1_0 = {
	"[]",
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

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) 1
}};

const MR_PseudoTypeInfo mercury_data_list__field_types_list_1_1[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_list__du_functor_desc_list_1_1 = {
	"[|]",
	2,
	3,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_list__field_types_list_1_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_list__du_stag_ordered_list_1_0[] = {
	&mercury_data_list__du_functor_desc_list_1_0

};

const MR_DuFunctorDescPtr mercury_data_list__du_stag_ordered_list_1_1[] = {
	&mercury_data_list__du_functor_desc_list_1_1

};

const MR_DuPtagLayout mercury_data_list__du_ptag_ordered_list_1[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_list__du_stag_ordered_list_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_list__du_stag_ordered_list_1_1 }

};

const MR_DuFunctorDescPtr mercury_data_list__du_name_ordered_list_1[] = {
	&mercury_data_list__du_functor_desc_list_1_0,
	&mercury_data_list__du_functor_desc_list_1_1
};

const MR_Integer mercury_data_list__functor_number_map_list_1[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1 = {
	1,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___list__list_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___list__list_1_0)),
	"list",
	"list",
	{ (void *)mercury_data_list__du_name_ordered_list_1 },
	{ (void *)mercury_data_list__du_ptag_ordered_list_1 },
	2,
	4,
	mercury_data_list__functor_number_map_list_1
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__list__list_to_doc_2_1_0_1 = {
{
MR_FUNCTION,
"list",
"list",
"list_to_doc_2",
2,
0
},
"list",
"list.m",
3049,
"29"
};



MR_BEGIN_MODULE(list_module0)
	MR_init_entry1(list__is_empty_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__is_empty_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__is_empty_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module1)
	MR_init_entry1(list__is_not_empty_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__is_not_empty_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_not_empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__is_not_empty_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r2 != (MR_Integer) MR_tbmkword(0, 0));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module2)
	MR_init_entry1(list__cons_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__cons_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cons'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__cons_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module3)
	MR_init_entry1(fn__list__cons_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__cons_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cons'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__cons_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module4)
	MR_init_entry1(list__append_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__append_3_0);
	MR_init_label3(list__append_3_0,5,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'append'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__append_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(list__append_3_0_i2);
	}
	MR_r4 = (MR_Word) MR_sp;
MR_def_label(list__append_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0))
		continue;
	MR_r1 = MR_r3;
	break;
	} /* end while */
MR_def_label(list__append_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r4))
		continue;
	MR_proceed();
	break;
	} /* end while */
MR_def_label(list__append_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module5)
	MR_init_entry1(list__append_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__append_3_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'append'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__append_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__append_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(list_module6)
	MR_init_entry1(list__append_3_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__append_3_2);
	MR_init_label4(list__append_3_2,25,3,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'append'/3 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__append_3_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(list__append_3_2,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(list__append_3_2_i3);
	}
	MR_r2 = MR_r4;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(list__append_3_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(list__append_3_2_i1);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		list__append_3_2_i7);
MR_def_label(list__append_3_2,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__append_3_2_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(list__append_3_2_i25);
MR_def_label(list__append_3_2,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module7)
	MR_init_entry1(list__append_3_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__append_3_3);
	MR_init_label4(list__append_3_3,23,3,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'append'/3 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__append_3_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(list__append_3_3,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(list__append_3_3_i3);
	}
	MR_r2 = MR_r3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(list__append_3_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(list__append_3_3_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_tfield(1, MR_r3, 1);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(builtin__unify_2_0,
		list__append_3_3_i5);
MR_def_label(list__append_3_3,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__append_3_3_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(list__append_3_3_i23);
MR_def_label(list__append_3_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(list_module8)
	MR_init_entry1(list__append_3_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__append_3_4);
	MR_init_label2(list__append_3_4,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'append'/3 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__append_3_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.append/3-4", 2,
		MR_LABEL_AP(list__append_3_4_i2));
	MR_fv(1) = MR_r2;
	MR_fv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_succeed();
MR_def_label(list__append_3_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	if (MR_LTAGS_TEST(MR_fv(1),0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_fv(1);
	MR_fv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_fv(2);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_localcall_lab(list__append_3_4,
		list__append_3_4_i4);
MR_def_label(list__append_3_4,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module9)
	MR_init_entry1(fn__list__append_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__append_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'append'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__append_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__append_3_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module10)
	MR_init_entry1(fn__f_108_105_115_116_95_95_43_43_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_108_105_115_116_95_95_43_43_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '++'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_108_105_115_116_95_95_43_43_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__append_3_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module11)
	MR_init_entry1(list__length_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__length_2_3_0);
	MR_init_label2(list__length_2_3_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'length_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__length_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(list__length_2_3_0_i2);
	}
MR_def_label(list__length_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0))
		continue;
	break;
	} /* end while */
MR_def_label(list__length_2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module12)
	MR_init_entry1(list__length_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__length_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'length'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__length_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 0;
	MR_np_tailcall_ent(list__length_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module13)
	MR_init_entry1(list__split_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__split_list_4_0);
	MR_init_label3(list__split_list_4_0,38,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'split_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__split_list_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(list__split_list_4_0_i38);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__split_list_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(list__split_list_4_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(list__split_list_4_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r3, 0);
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_np_localcall_lab(list__split_list_4_0,
		list__split_list_4_0_i5);
MR_def_label(list__split_list_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__split_list_4_0_i1);
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
MR_def_label(list__split_list_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module14)
	MR_init_entry1(list__remove_suffix_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__remove_suffix_3_0);
	MR_init_label5(list__remove_suffix_3_0,2,3,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_suffix'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__remove_suffix_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		list__remove_suffix_3_0_i2);
MR_def_label(list__remove_suffix_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		list__remove_suffix_3_0_i3);
MR_def_label(list__remove_suffix_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = ((MR_Integer) MR_sv(3) - (MR_Integer) MR_tempr1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__split_list_4_0,
		list__remove_suffix_3_0_i4);
MR_def_label(list__remove_suffix_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__remove_suffix_3_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		list__remove_suffix_3_0_i6);
MR_def_label(list__remove_suffix_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__remove_suffix_3_0_i1);
	}
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__remove_suffix_3_0,1)
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

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(list_module15)
	MR_init_entry1(list__merge_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__merge_3_0);
	MR_init_label7(list__merge_3_0,5,3,48,9,10,8,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__merge_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(list__merge_3_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(list__merge_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__merge_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(list__merge_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(list__merge_3_0_i48);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(list__merge_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		list__merge_3_0_i9);
MR_def_label(list__merge_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(list__merge_3_0_i8);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(list__merge_3_0,
		list__merge_3_0_i10);
MR_def_label(list__merge_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(list__merge_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(list__merge_3_0,
		list__merge_3_0_i12);
MR_def_label(list__merge_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module16)
	MR_init_entry1(fn__list__merge_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__merge_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__merge_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__merge_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module17)
	MR_init_entry1(list__merge_and_remove_dups_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__merge_and_remove_dups_3_0);
	MR_init_label9(list__merge_and_remove_dups_3_0,5,3,58,8,11,10,14,13,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_and_remove_dups'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__merge_and_remove_dups_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(list__merge_and_remove_dups_3_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(list__merge_and_remove_dups_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__merge_and_remove_dups_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(list__merge_and_remove_dups_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(list__merge_and_remove_dups_3_0_i58);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(list__merge_and_remove_dups_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tfield(1, MR_r2, 1);
	MR_sv(7) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		list__merge_and_remove_dups_3_0_i8);
MR_def_label(list__merge_and_remove_dups_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(list__merge_and_remove_dups_3_0_i10);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(list__merge_and_remove_dups_3_0,
		list__merge_and_remove_dups_3_0_i11);
MR_def_label(list__merge_and_remove_dups_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(list__merge_and_remove_dups_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(list__merge_and_remove_dups_3_0_i13);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(list__merge_and_remove_dups_3_0,
		list__merge_and_remove_dups_3_0_i14);
MR_def_label(list__merge_and_remove_dups_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(list__merge_and_remove_dups_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(list__merge_and_remove_dups_3_0,
		list__merge_and_remove_dups_3_0_i16);
MR_def_label(list__merge_and_remove_dups_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module18)
	MR_init_entry1(fn__list__merge_and_remove_dups_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__merge_and_remove_dups_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_and_remove_dups'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__merge_and_remove_dups_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__merge_and_remove_dups_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module19)
	MR_init_entry1(list__remove_adjacent_dups_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__remove_adjacent_dups_2_3_0);
	MR_init_label5(list__remove_adjacent_dups_2_3_0,26,3,7,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_adjacent_dups_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__remove_adjacent_dups_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(list__remove_adjacent_dups_2_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(list__remove_adjacent_dups_2_3_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r3;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(list__remove_adjacent_dups_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		list__remove_adjacent_dups_2_3_0_i7);
MR_def_label(list__remove_adjacent_dups_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__remove_adjacent_dups_2_3_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(list__remove_adjacent_dups_2_3_0_i26);
MR_def_label(list__remove_adjacent_dups_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(list__remove_adjacent_dups_2_3_0,
		list__remove_adjacent_dups_2_3_0_i10);
MR_def_label(list__remove_adjacent_dups_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module20)
	MR_init_entry1(list__remove_adjacent_dups_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__remove_adjacent_dups_2_0);
	MR_init_label1(list__remove_adjacent_dups_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_adjacent_dups'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__remove_adjacent_dups_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(list__remove_adjacent_dups_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__remove_adjacent_dups_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_np_tailcall_ent(list__remove_adjacent_dups_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module21)
	MR_init_entry1(fn__list__remove_adjacent_dups_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__remove_adjacent_dups_1_0);
	MR_init_label1(fn__list__remove_adjacent_dups_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_adjacent_dups'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__remove_adjacent_dups_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__list__remove_adjacent_dups_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__list__remove_adjacent_dups_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_np_tailcall_ent(list__remove_adjacent_dups_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set_tree234__is_member_3_0);
MR_decl_entry(set_tree234__insert_3_0);

MR_BEGIN_MODULE(list_module22)
	MR_init_entry1(list__remove_dups_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__remove_dups_2_3_0);
	MR_init_label6(list__remove_dups_2_3_0,24,3,5,4,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_dups_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__remove_dups_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(list__remove_dups_2_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(list__remove_dups_2_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(list__remove_dups_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__is_member_3_0,
		list__remove_dups_2_3_0_i5);
MR_def_label(list__remove_dups_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(list__remove_dups_2_3_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(list__remove_dups_2_3_0_i24);
MR_def_label(list__remove_dups_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		list__remove_dups_2_3_0_i7);
MR_def_label(list__remove_dups_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(list__remove_dups_2_3_0,
		list__remove_dups_2_3_0_i8);
MR_def_label(list__remove_dups_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module23)
	MR_init_entry1(list__remove_dups_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__remove_dups_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_dups'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__remove_dups_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(list__remove_dups_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module24)
	MR_init_entry1(fn__list__remove_dups_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__remove_dups_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_dups'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__remove_dups_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(list__remove_dups_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module25)
	MR_init_entry1(list__member_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__member_2_0);
	MR_init_label4(list__member_2_0,19,6,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'member'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__member_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(list__member_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(list__member_2_0_i1);
	}
	MR_sv(3) = MR_tfield(1, MR_r3, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(builtin__unify_2_0,
		list__member_2_0_i6);
MR_def_label(list__member_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(list__member_2_0_i3);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(list__member_2_0_i19);
MR_def_label(list__member_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(list__member_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module26)
	MR_init_entry1(list__member_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__member_2_1);
	MR_init_label2(list__member_2_1,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'member'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__member_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe_no_redoip("pred list.member/2-1", 2);
MR_def_label(list__member_2_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_fv(2) = MR_tfield(1, MR_r2, 1);
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(list__member_2_1_i3);
	MR_fv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_succeed();
MR_def_label(list__member_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
	MR_GOTO_LAB(list__member_2_1_i5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(list_module27)
	MR_init_entry1(list__member_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__member_3_0);
	MR_init_label1(list__member_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'member'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__member_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.member/3-0", 0,
		MR_ENTRY(MR_do_fail));
	MR_np_call_localret_ent(list__append_3_4,
		list__member_3_0_i1);
MR_def_label(list__member_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module28)
	MR_init_entry1(list__member_index0_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__member_index0_3_0);
	MR_init_label5(list__member_index0_3_0,19,5,4,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'member_index0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__member_index0_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(list__member_index0_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(list__member_index0_3_0_i1);
	}
	MR_sv(4) = MR_tfield(1, MR_r3, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(builtin__unify_2_0,
		list__member_index0_3_0_i5);
MR_def_label(list__member_index0_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__member_index0_3_0_i4);
	}
	if (MR_INT_EQ(MR_sv(2),0)) {
		MR_GOTO_LAB(list__member_index0_3_0_i3);
	}
MR_def_label(list__member_index0_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(list__member_index0_3_0_i19);
MR_def_label(list__member_index0_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(list__member_index0_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module29)
	MR_init_entry1(list__member_index0_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__member_index0_3_1);
	MR_init_label3(list__member_index0_3_1,4,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'member_index0'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__member_index0_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_mkframe("pred list.member_index0/3-1", 3,
		MR_LABEL_AP(list__member_index0_3_1_i3));
	MR_fv(3) = MR_tfield(1, MR_r3, 1);
	MR_fv(1) = MR_r2;
	MR_fv(2) = MR_r1;
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(builtin__unify_2_0,
		list__member_index0_3_1_i4);
MR_def_label(list__member_index0_3_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__member_index0_3_1_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_succeed();
MR_def_label(list__member_index0_3_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(2);
	MR_r2 = MR_fv(1);
	MR_r3 = MR_fv(3);
	MR_np_localcall_lab(list__member_index0_3_1,
		list__member_index0_3_1_i6);
MR_def_label(list__member_index0_3_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module30)
	MR_init_entry1(list__member_index0_3_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__member_index0_3_2);
	MR_init_label2(list__member_index0_3_2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'member_index0'/3 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__member_index0_3_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_mkframe("pred list.member_index0/3-2", 2,
		MR_LABEL_AP(list__member_index0_3_2_i3));
	MR_fv(2) = MR_tfield(1, MR_r2, 1);
	MR_fv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = (MR_Integer) 0;
	MR_succeed();
MR_def_label(list__member_index0_3_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
	MR_np_localcall_lab(list__member_index0_3_2,
		list__member_index0_3_2_i4);
MR_def_label(list__member_index0_3_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module31)
	MR_init_entry1(list__contains_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__contains_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'contains'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__contains_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__member_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module32)
	MR_init_entry1(fn__list__length_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__length_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'length'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__length_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 0;
	MR_np_tailcall_ent(list__length_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module33)
	MR_init_entry1(list__same_length_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__same_length_2_0);
	MR_init_label2(list__same_length_2_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'same_length'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__same_length_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(list__same_length_2_0_i3);
	}
	MR_r1 = ((MR_Integer) MR_r4 == (MR_Integer) MR_tbmkword(0, 0));
	MR_proceed();
MR_def_label(list__same_length_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(list__same_length_2_0_i1);
	}
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_r4 = MR_tfield(1, MR_r4, 1);
	MR_np_localtailcall(list__same_length_2_0);
MR_def_label(list__same_length_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(list_module34)
	MR_init_entry1(list__det_split_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__det_split_list_4_0);
	MR_init_label2(list__det_split_list_4_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_split_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__det_split_list_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(list__split_list_4_0,
		list__det_split_list_4_0_i3);
MR_def_label(list__det_split_list_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__det_split_list_4_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(1);
MR_def_label(list__det_split_list_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.det_split_list: index out of range", 39);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module35)
	MR_init_entry1(list__split_upto_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__split_upto_4_0);
	MR_init_label2(list__split_upto_4_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'split_upto'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__split_upto_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(list__split_upto_4_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(list__split_upto_4_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r3, 0);
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_np_localcall_lab(list__split_upto_4_0,
		list__split_upto_4_0_i4);
MR_def_label(list__split_upto_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(list__split_upto_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module36)
	MR_init_entry1(list__take_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__take_3_0);
	MR_init_label3(list__take_3_0,4,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'take'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__take_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(list__take_3_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(list__take_3_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r3, 0);
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_np_localcall_lab(list__take_3_0,
		list__take_3_0_i4);
MR_def_label(list__take_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__take_3_0_i1);
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
MR_def_label(list__take_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__take_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module37)
	MR_init_entry1(list__take_upto_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__take_upto_3_0);
	MR_init_label2(list__take_upto_3_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'take_upto'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__take_upto_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(list__take_3_0,
		list__take_upto_3_0_i4);
MR_def_label(list__take_upto_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__take_upto_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(list__take_upto_3_0,2)
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


MR_BEGIN_MODULE(list_module38)
	MR_init_entry1(fn__list__take_upto_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__take_upto_2_0);
	MR_init_label2(fn__list__take_upto_2_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'take_upto'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__take_upto_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(list__take_3_0,
		fn__list__take_upto_2_0_i4);
MR_def_label(fn__list__take_upto_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__list__take_upto_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__list__take_upto_2_0,2)
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


MR_BEGIN_MODULE(list_module39)
	MR_init_entry1(list__drop_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__drop_3_0);
	MR_init_label2(list__drop_3_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'drop'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__drop_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(list__drop_3_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(list__drop_3_0_i1);
	}
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_np_localtailcall(list__drop_3_0);
MR_def_label(list__drop_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__drop_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module40)
	MR_init_entry1(list__det_drop_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__det_drop_3_0);
	MR_init_label2(list__det_drop_3_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_drop'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__det_drop_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(list__det_drop_3_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(list__det_drop_3_0_i4);
	}
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_np_localtailcall(list__det_drop_3_0);
MR_def_label(list__det_drop_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.det_drop: not enough elements", 34);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(list__det_drop_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module41)
	MR_init_entry1(list__delete_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__delete_3_0);
	MR_init_label7(list__delete_3_0,31,5,7,4,10,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__delete_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(list__delete_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(list__delete_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		list__delete_3_0_i5);
MR_def_label(list__delete_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__delete_3_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		list__delete_3_0_i7);
MR_def_label(list__delete_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(list__delete_3_0_i3);
	}
MR_def_label(list__delete_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(list__delete_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		list__delete_3_0_i10);
MR_def_label(list__delete_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__delete_3_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(list__delete_3_0_i31);
MR_def_label(list__delete_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(list__delete_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module42)
	MR_init_entry1(list__delete_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__delete_3_1);
	MR_init_label3(list__delete_3_1,4,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__delete_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_mkframe("pred list.delete/3-1", 4,
		MR_LABEL_AP(list__delete_3_1_i3));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_fv(3) = MR_tfield(1, MR_r2, 1);
	MR_tempr2 = MR_r3;
	MR_fv(1) = MR_tempr2;
	MR_fv(2) = MR_r1;
	MR_fv(4) = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		list__delete_3_1_i4);
MR_def_label(list__delete_3_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__delete_3_1_i3);
	}
	MR_r1 = MR_fv(3);
	MR_succeed();
MR_def_label(list__delete_3_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(2);
	MR_r2 = MR_fv(3);
	MR_r3 = MR_fv(1);
	MR_np_localcall_lab(list__delete_3_1,
		list__delete_3_1_i6);
MR_def_label(list__delete_3_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_fv(4);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module43)
	MR_init_entry1(list__delete_3_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__delete_3_2);
	MR_init_label2(list__delete_3_2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__delete_3_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_mkframe("pred list.delete/3-2", 3,
		MR_LABEL_AP(list__delete_3_2_i3));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_tempr2 = MR_tfield(1, MR_r2, 1);
	MR_fv(1) = MR_r1;
	MR_fv(2) = MR_tempr2;
	MR_fv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_succeed();
	}
MR_def_label(list__delete_3_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
	MR_np_localcall_lab(list__delete_3_2,
		list__delete_3_2_i4);
MR_def_label(list__delete_3_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module44)
	MR_init_entry1(list__delete_3_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__delete_3_3);
	MR_init_label2(list__delete_3_3,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete'/3 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__delete_3_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.delete/3-3", 3,
		MR_LABEL_AP(list__delete_3_3_i2));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_fv(2) = MR_r2;
	MR_fv(1) = MR_tempr2;
	MR_fv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
MR_def_label(list__delete_3_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	if (MR_LTAGS_TEST(MR_fv(1),0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_fv(2);
	MR_tempr2 = MR_fv(1);
	MR_fv(2) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_fv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_localcall_lab(list__delete_3_3,
		list__delete_3_3_i5);
MR_def_label(list__delete_3_3,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_fv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module45)
	MR_init_entry1(list__insert_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__insert_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__insert_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__delete_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module46)
	MR_init_entry1(list__insert_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__insert_3_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__insert_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__delete_3_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module47)
	MR_init_entry1(list__insert_3_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__insert_3_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert'/3 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__insert_3_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__delete_3_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module48)
	MR_init_entry1(list__insert_3_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__insert_3_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert'/3 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__insert_3_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__delete_3_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module49)
	MR_init_entry1(list__delete_all_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__delete_all_3_0);
	MR_init_label5(list__delete_all_3_0,25,3,6,4,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_all'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__delete_all_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(list__delete_all_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(list__delete_all_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(list__delete_all_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		list__delete_all_3_0_i6);
MR_def_label(list__delete_all_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__delete_all_3_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(list__delete_all_3_0_i25);
MR_def_label(list__delete_all_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	}
	MR_np_localcall_lab(list__delete_all_3_0,
		list__delete_all_3_0_i9);
MR_def_label(list__delete_all_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module50)
	MR_init_entry1(list__delete_all_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__delete_all_3_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_all'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__delete_all_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__delete_all_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module51)
	MR_init_entry1(fn__list__delete_all_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__delete_all_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_all'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__delete_all_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__delete_all_3_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module52)
	MR_init_entry1(list__delete_first_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__delete_first_3_0);
	MR_init_label4(list__delete_first_3_0,5,3,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_first'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__delete_first_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(list__delete_first_3_0_i1);
	}
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		list__delete_first_3_0_i5);
MR_def_label(list__delete_first_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__delete_first_3_0_i3);
	}
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__delete_first_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(list__delete_first_3_0,
		list__delete_first_3_0_i7);
MR_def_label(list__delete_first_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__delete_first_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(list__delete_first_3_0,1)
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


MR_BEGIN_MODULE(list_module53)
	MR_init_entry1(list__delete_elems_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__delete_elems_3_0);
	MR_init_label3(list__delete_elems_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_elems'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__delete_elems_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(list__delete_elems_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(list__delete_elems_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(list__delete_elems_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r3, 1);
	MR_sv(2) = MR_r1;
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(list__delete_all_3_1,
		list__delete_elems_3_0_i4);
MR_def_label(list__delete_elems_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(list__delete_elems_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module54)
	MR_init_entry1(fn__list__delete_elems_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__delete_elems_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_elems'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__delete_elems_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__delete_elems_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module55)
	MR_init_entry1(list__replace_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__replace_4_0);
	MR_init_label8(list__replace_4_0,37,6,8,10,5,12,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__replace_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(list__replace_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(list__replace_4_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(list__replace_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r5;
	MR_sv(7) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		list__replace_4_0_i6);
MR_def_label(list__replace_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__replace_4_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(builtin__unify_2_0,
		list__replace_4_0_i8);
MR_def_label(list__replace_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__replace_4_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		list__replace_4_0_i10);
MR_def_label(list__replace_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(list__replace_4_0_i4);
	}
MR_def_label(list__replace_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(builtin__unify_2_0,
		list__replace_4_0_i12);
MR_def_label(list__replace_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__replace_4_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(list__replace_4_0_i37);
MR_def_label(list__replace_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(list__replace_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module56)
	MR_init_entry1(list__replace_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__replace_4_1);
	MR_init_label3(list__replace_4_1,4,3,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__replace_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_mkframe("pred list.replace/4-1", 5,
		MR_LABEL_AP(list__replace_4_1_i3));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_fv(4) = MR_tfield(1, MR_r2, 1);
	MR_tempr2 = MR_r3;
	MR_fv(1) = MR_tempr2;
	MR_fv(2) = MR_r4;
	MR_fv(3) = MR_r1;
	MR_fv(5) = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		list__replace_4_1_i4);
MR_def_label(list__replace_4_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__replace_4_1_i3);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_fv(2);
	MR_tfield(1, MR_r1, 1) = MR_fv(4);
	MR_succeed();
MR_def_label(list__replace_4_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = MR_fv(3);
	MR_r2 = MR_fv(4);
	MR_r3 = MR_fv(1);
	MR_r4 = MR_fv(2);
	MR_np_localcall_lab(list__replace_4_1,
		list__replace_4_1_i7);
MR_def_label(list__replace_4_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_fv(5);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module57)
	MR_init_entry1(list__replace_first_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__replace_first_4_0);
	MR_init_label4(list__replace_first_4_0,5,3,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_first'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__replace_first_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(list__replace_first_4_0_i1);
	}
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		list__replace_first_4_0_i5);
MR_def_label(list__replace_first_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__replace_first_4_0_i3);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__replace_first_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(list__replace_first_4_0,
		list__replace_first_4_0_i8);
MR_def_label(list__replace_first_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__replace_first_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(list__replace_first_4_0,1)
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


MR_BEGIN_MODULE(list_module58)
	MR_init_entry1(list__replace_all_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__replace_all_4_0);
	MR_init_label5(list__replace_all_4_0,30,6,8,4,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_all'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__replace_all_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(list__replace_all_4_0_i30);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__replace_all_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		list__replace_all_4_0_i6);
MR_def_label(list__replace_all_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__replace_all_4_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(list__replace_all_4_0,
		list__replace_all_4_0_i8);
MR_def_label(list__replace_all_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(list__replace_all_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	}
	MR_np_localcall_lab(list__replace_all_4_0,
		list__replace_all_4_0_i10);
MR_def_label(list__replace_all_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module59)
	MR_init_entry1(fn__list__replace_all_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__replace_all_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_all'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__replace_all_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__replace_all_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module60)
	MR_init_entry1(list__replace_nth_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__replace_nth_4_0);
	MR_init_label1(list__replace_nth_4_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_nth'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__replace_nth_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r3,0)) {
		MR_GOTO_LAB(list__replace_nth_4_0_i1);
	}
	MR_np_tailcall_ent(list__replace_nth_2_4_0);
MR_def_label(list__replace_nth_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module61)
	MR_init_entry1(list__replace_nth_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__replace_nth_2_4_0);
	MR_init_label3(list__replace_nth_2_4_0,3,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_nth_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__replace_nth_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(list__replace_nth_2_4_0_i1);
	}
	MR_r5 = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(list__replace_nth_2_4_0_i3);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r4;
	MR_tfield(1, MR_r2, 1) = MR_r5;
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__replace_nth_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	if (MR_INT_LE(MR_tempr1,0)) {
		MR_GOTO_LAB(list__replace_nth_2_4_0_i1);
	}
	MR_r2 = MR_r5;
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(list__replace_nth_2_4_0,
		list__replace_nth_2_4_0_i6);
MR_def_label(list__replace_nth_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__replace_nth_2_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(list__replace_nth_2_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module62)
	MR_init_entry1(list__det_replace_nth_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__det_replace_nth_4_0);
	MR_init_label3(list__det_replace_nth_4_0,4,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_replace_nth'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__det_replace_nth_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r3,0)) {
		MR_GOTO_LAB(list__det_replace_nth_4_0_i2);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(list__replace_nth_2_4_0,
		list__det_replace_nth_4_0_i4);
MR_def_label(list__det_replace_nth_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__det_replace_nth_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(list__det_replace_nth_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.det_replace_nth: Can\'t replace element whose index position is past the end of the list", 92);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(list__det_replace_nth_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.det_replace_nth: Can\'t replace element whose index position is less than 1.", 80);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module63)
	MR_init_entry1(fn__list__det_replace_nth_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__det_replace_nth_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_replace_nth'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__det_replace_nth_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__det_replace_nth_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module64)
	MR_init_entry1(list__replace_nth_det_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__replace_nth_det_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_nth_det'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__replace_nth_det_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__det_replace_nth_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module65)
	MR_init_entry1(fn__list__replace_nth_det_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__replace_nth_det_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_nth_det'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__replace_nth_det_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__det_replace_nth_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module66)
	MR_init_entry1(list__merge_sort_and_remove_dups_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__merge_sort_and_remove_dups_2_3_0);
	MR_init_label5(list__merge_sort_and_remove_dups_2_3_0,4,6,7,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_sort_and_remove_dups_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__merge_sort_and_remove_dups_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,1)) {
		MR_GOTO_LAB(list__merge_sort_and_remove_dups_2_3_0_i2);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(1) = ((MR_Integer) MR_r2 / (MR_Integer) 2);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__split_list_4_0,
		list__merge_sort_and_remove_dups_2_3_0_i4);
MR_def_label(list__merge_sort_and_remove_dups_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__merge_sort_and_remove_dups_2_3_0_i3);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(list__merge_sort_and_remove_dups_2_3_0,
		list__merge_sort_and_remove_dups_2_3_0_i6);
MR_def_label(list__merge_sort_and_remove_dups_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_sv(1));
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(list__merge_sort_and_remove_dups_2_3_0,
		list__merge_sort_and_remove_dups_2_3_0_i7);
MR_def_label(list__merge_sort_and_remove_dups_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__merge_and_remove_dups_3_0);
	}
MR_def_label(list__merge_sort_and_remove_dups_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.merge_sort_and_remove_dups_2", 33);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(list__merge_sort_and_remove_dups_2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module67)
	MR_init_entry1(list__sort_and_remove_dups_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__sort_and_remove_dups_2_0);
	MR_init_label1(list__sort_and_remove_dups_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sort_and_remove_dups'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__sort_and_remove_dups_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		list__sort_and_remove_dups_2_0_i2);
MR_def_label(list__sort_and_remove_dups_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__merge_sort_and_remove_dups_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module68)
	MR_init_entry1(fn__list__sort_and_remove_dups_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__sort_and_remove_dups_1_0);
	MR_init_label1(fn__list__sort_and_remove_dups_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sort_and_remove_dups'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__sort_and_remove_dups_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__list__sort_and_remove_dups_1_0_i2);
MR_def_label(fn__list__sort_and_remove_dups_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__merge_sort_and_remove_dups_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module69)
	MR_init_entry1(list__merge_sort_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__merge_sort_2_3_0);
	MR_init_label5(list__merge_sort_2_3_0,4,6,7,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_sort_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__merge_sort_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,1)) {
		MR_GOTO_LAB(list__merge_sort_2_3_0_i2);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(1) = ((MR_Integer) MR_r2 / (MR_Integer) 2);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__split_list_4_0,
		list__merge_sort_2_3_0_i4);
MR_def_label(list__merge_sort_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__merge_sort_2_3_0_i3);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(list__merge_sort_2_3_0,
		list__merge_sort_2_3_0_i6);
MR_def_label(list__merge_sort_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_sv(1));
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(list__merge_sort_2_3_0,
		list__merge_sort_2_3_0_i7);
MR_def_label(list__merge_sort_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__merge_3_0);
	}
MR_def_label(list__merge_sort_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.merge_sort_2", 17);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(list__merge_sort_2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module70)
	MR_init_entry1(list__merge_sort_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__merge_sort_2_0);
	MR_init_label1(list__merge_sort_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_sort'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__merge_sort_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		list__merge_sort_2_0_i2);
MR_def_label(list__merge_sort_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__merge_sort_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module71)
	MR_init_entry1(list__sort_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__sort_2_0);
	MR_init_label1(list__sort_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sort'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__sort_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		list__sort_2_0_i2);
MR_def_label(list__sort_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__merge_sort_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module72)
	MR_init_entry1(fn__list__sort_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__sort_1_0);
	MR_init_label1(fn__list__sort_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sort'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__sort_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__list__sort_1_0_i2);
MR_def_label(fn__list__sort_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__merge_sort_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module73)
	MR_init_entry1(list__reverse_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__reverse_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reverse'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__reverse_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module74)
	MR_init_entry1(list__reverse_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__reverse_2_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reverse'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__reverse_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module75)
	MR_init_entry1(fn__list__reverse_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__reverse_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reverse'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__reverse_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module76)
	MR_init_entry1(list__perm_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__perm_2_0);
	MR_init_label3(list__perm_2_0,15,3,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'perm'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__perm_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(list__perm_2_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__perm_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.perm/2-0", 2,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_tfield(1, MR_r2, 0);
	MR_fv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(list__perm_2_0,
		list__perm_2_0_i3);
MR_def_label(list__perm_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(2);
	MR_r2 = MR_fv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__delete_3_3,
		list__perm_2_0_i14);
MR_def_label(list__perm_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module77)
	MR_init_entry1(list__nth_member_search_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__nth_member_search_2_4_0);
	MR_init_label4(list__nth_member_search_2_4_0,20,5,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nth_member_search_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__nth_member_search_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(list__nth_member_search_2_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(list__nth_member_search_2_4_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(builtin__unify_2_0,
		list__nth_member_search_2_4_0_i5);
MR_def_label(list__nth_member_search_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__nth_member_search_2_4_0_i3);
	}
	MR_r2 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(list__nth_member_search_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r4 = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(list__nth_member_search_2_4_0_i20);
MR_def_label(list__nth_member_search_2_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module78)
	MR_init_entry1(list__nth_member_search_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__nth_member_search_3_0);
	MR_init_label1(list__nth_member_search_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nth_member_search'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__nth_member_search_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(list__nth_member_search_3_0_i1);
	}
	MR_r4 = (MR_Integer) 1;
	MR_np_tailcall_ent(list__nth_member_search_2_4_0);
MR_def_label(list__nth_member_search_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module79)
	MR_init_entry1(list__nth_member_lookup_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__nth_member_lookup_3_0);
	MR_init_label2(list__nth_member_lookup_3_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nth_member_lookup'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__nth_member_lookup_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(list__nth_member_lookup_3_0_i2);
	}
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__nth_member_search_2_4_0,
		list__nth_member_lookup_3_0_i4);
MR_def_label(list__nth_member_lookup_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__nth_member_lookup_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(list__nth_member_lookup_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.nth_member_lookup/3: element not found in list", 51);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module80)
	MR_init_entry1(list__index0_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__index0_3_0);
	MR_init_label2(list__index0_3_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'index0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__index0_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(list__index0_3_0_i1);
	}
	MR_r4 = MR_tfield(1, MR_r2, 1);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(list__index0_3_0_i3);
	}
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__index0_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r4;
	MR_r3 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	MR_np_localtailcall(list__index0_3_0);
MR_def_label(list__index0_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module81)
	MR_init_entry1(list__index1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__index1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'index1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__index1_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	MR_np_tailcall_ent(list__index0_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module82)
	MR_init_entry1(list__det_index0_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__det_index0_3_0);
	MR_init_label2(list__det_index0_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_index0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__det_index0_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(list__index0_3_0,
		list__det_index0_3_0_i3);
MR_def_label(list__det_index0_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__det_index0_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(list__det_index0_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.det_index0: index out of range", 35);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module83)
	MR_init_entry1(list__det_index1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__det_index1_3_0);
	MR_init_label2(list__det_index1_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_index1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__det_index1_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	MR_np_call_localret_ent(list__index0_3_0,
		list__det_index1_3_0_i3);
MR_def_label(list__det_index1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__det_index1_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(list__det_index1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.det_index0: index out of range", 35);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module84)
	MR_init_entry1(list__index0_det_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__index0_det_3_0);
	MR_init_label2(list__index0_det_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'index0_det'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__index0_det_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(list__index0_3_0,
		list__index0_det_3_0_i3);
MR_def_label(list__index0_det_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__index0_det_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(list__index0_det_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.det_index0: index out of range", 35);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module85)
	MR_init_entry1(list__index1_det_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__index1_det_3_0);
	MR_init_label2(list__index1_det_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'index1_det'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__index1_det_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	MR_np_call_localret_ent(list__index0_3_0,
		list__index1_det_3_0_i3);
MR_def_label(list__index1_det_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__index1_det_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(list__index1_det_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.det_index0: index out of range", 35);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module86)
	MR_init_entry1(fn__list__index0_det_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__index0_det_2_0);
	MR_init_label2(fn__list__index0_det_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'index0_det'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__index0_det_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(list__index0_3_0,
		fn__list__index0_det_2_0_i3);
MR_def_label(fn__list__index0_det_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__list__index0_det_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__list__index0_det_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.det_index0: index out of range", 35);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module87)
	MR_init_entry1(fn__list__index1_det_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__index1_det_2_0);
	MR_init_label2(fn__list__index1_det_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'index1_det'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__index1_det_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	MR_np_call_localret_ent(list__index0_3_0,
		fn__list__index1_det_2_0_i3);
MR_def_label(fn__list__index1_det_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__list__index1_det_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__list__index1_det_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.det_index0: index out of range", 35);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module88)
	MR_init_entry1(fn__list__det_index0_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__det_index0_2_0);
	MR_init_label2(fn__list__det_index0_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_index0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__det_index0_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(list__index0_3_0,
		fn__list__det_index0_2_0_i3);
MR_def_label(fn__list__det_index0_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__list__det_index0_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__list__det_index0_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.det_index0: index out of range", 35);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module89)
	MR_init_entry1(fn__list__det_index1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__det_index1_2_0);
	MR_init_label2(fn__list__det_index1_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_index1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__det_index1_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	MR_np_call_localret_ent(list__index0_3_0,
		fn__list__det_index1_2_0_i3);
MR_def_label(fn__list__det_index1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__list__det_index1_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__list__det_index1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.det_index0: index out of range", 35);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module90)
	MR_init_entry1(list__index0_of_first_occurrence_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__index0_of_first_occurrence_2_4_0);
	MR_init_label4(list__index0_of_first_occurrence_2_4_0,20,5,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'index0_of_first_occurrence_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__index0_of_first_occurrence_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(list__index0_of_first_occurrence_2_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(list__index0_of_first_occurrence_2_4_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		list__index0_of_first_occurrence_2_4_0_i5);
MR_def_label(list__index0_of_first_occurrence_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__index0_of_first_occurrence_2_4_0_i3);
	}
	MR_r2 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(list__index0_of_first_occurrence_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r4 = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(list__index0_of_first_occurrence_2_4_0_i20);
MR_def_label(list__index0_of_first_occurrence_2_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module91)
	MR_init_entry1(list__index0_of_first_occurrence_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__index0_of_first_occurrence_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'index0_of_first_occurrence'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__index0_of_first_occurrence_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 0;
	MR_np_tailcall_ent(list__index0_of_first_occurrence_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module92)
	MR_init_entry1(list__index1_of_first_occurrence_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__index1_of_first_occurrence_3_0);
	MR_init_label2(list__index1_of_first_occurrence_3_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'index1_of_first_occurrence'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__index1_of_first_occurrence_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__index0_of_first_occurrence_2_4_0,
		list__index1_of_first_occurrence_3_0_i2);
MR_def_label(list__index1_of_first_occurrence_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__index1_of_first_occurrence_3_0_i1);
	}
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__index1_of_first_occurrence_3_0,1)
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


MR_BEGIN_MODULE(list_module93)
	MR_init_entry1(fn__list__det_index0_of_first_occurrence_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__det_index0_of_first_occurrence_2_0);
	MR_init_label2(fn__list__det_index0_of_first_occurrence_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_index0_of_first_occurrence'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__det_index0_of_first_occurrence_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__index0_of_first_occurrence_2_4_0,
		fn__list__det_index0_of_first_occurrence_2_0_i3);
MR_def_label(fn__list__det_index0_of_first_occurrence_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__list__det_index0_of_first_occurrence_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__list__det_index0_of_first_occurrence_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.det_index0_of_first_occurrence: item not found", 51);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module94)
	MR_init_entry1(fn__list__det_index1_of_first_occurrence_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__det_index1_of_first_occurrence_2_0);
	MR_init_label2(fn__list__det_index1_of_first_occurrence_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_index1_of_first_occurrence'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__det_index1_of_first_occurrence_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__index0_of_first_occurrence_2_4_0,
		fn__list__det_index1_of_first_occurrence_2_0_i3);
MR_def_label(fn__list__det_index1_of_first_occurrence_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__list__det_index1_of_first_occurrence_2_0_i2);
	}
	MR_r1 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_decr_sp_and_return(1);
MR_def_label(fn__list__det_index1_of_first_occurrence_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.det_index1_of_first_occurrence: item not found", 51);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module95)
	MR_init_entry1(list__zip_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__zip_3_0);
	MR_init_label2(list__zip_3_0,13,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'zip'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__zip_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(list__zip_3_0_i13);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(list__zip_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_50_95_95_91_49_93_95_48_3_0,
		list__zip_3_0_i4);
MR_def_label(list__zip_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module96)
	MR_init_entry1(fn__list__zip_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__zip_2_0);
	MR_init_label2(fn__list__zip_2_0,13,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'zip'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__zip_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__list__zip_2_0_i13);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(fn__list__zip_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_50_95_95_91_49_93_95_48_3_0,
		fn__list__zip_2_0_i4);
MR_def_label(fn__list__zip_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module97)
	MR_init_entry1(fn__list__duplicate_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__duplicate_2_3_0);
	MR_init_label1(fn__list__duplicate_2_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'duplicate_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__duplicate_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(fn__list__duplicate_2_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_np_localtailcall(fn__list__duplicate_2_3_0);
	}
MR_def_label(fn__list__duplicate_2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module98)
	MR_init_entry1(list__duplicate_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__duplicate_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'duplicate'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__duplicate_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(fn__list__duplicate_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module99)
	MR_init_entry1(fn__list__duplicate_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__duplicate_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'duplicate'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__duplicate_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(fn__list__duplicate_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module100)
	MR_init_entry1(list__condense_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__condense_2_0);
	MR_init_label2(list__condense_2_0,16,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'condense'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__condense_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(list__condense_2_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__condense_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(list__condense_2_0,
		list__condense_2_0_i4);
MR_def_label(list__condense_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__append_3_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module101)
	MR_init_entry1(fn__list__condense_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__condense_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'condense'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__condense_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__condense_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module102)
	MR_init_entry1(list__chunk_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__chunk_2_5_0);
	MR_init_label7(list__chunk_2_5_0,35,5,6,3,8,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'chunk_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__chunk_2_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(list__chunk_2_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(list__chunk_2_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(list__chunk_2_5_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(list__chunk_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_3_0,
		list__chunk_2_5_0_i6);
MR_def_label(list__chunk_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(list__chunk_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_tfield(1, MR_r2, 1);
	MR_r7 = MR_tfield(1, MR_r2, 0);
	if (MR_INT_LE(MR_r5,1)) {
		MR_GOTO_LAB(list__chunk_2_5_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r7;
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_r2 = MR_r6;
	MR_r4 = MR_tempr1;
	MR_r5 = ((MR_Integer) MR_r5 - (MR_Integer) 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(list__chunk_2_5_0_i35);
	}
MR_def_label(list__chunk_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r7;
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r6;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_3_0,
		list__chunk_2_5_0_i12);
MR_def_label(list__chunk_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_r3;
	}
	MR_np_localcall_lab(list__chunk_2_5_0,
		list__chunk_2_5_0_i13);
MR_def_label(list__chunk_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module103)
	MR_init_entry1(list__chunk_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__chunk_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'chunk'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__chunk_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_r3;
	MR_np_tailcall_ent(list__chunk_2_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module104)
	MR_init_entry1(fn__list__chunk_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__chunk_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'chunk'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__chunk_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_r3;
	MR_np_tailcall_ent(list__chunk_2_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module105)
	MR_init_entry1(list__sublist_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__sublist_2_0);
	MR_init_label5(list__sublist_2_0,28,7,17,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sublist'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__sublist_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(list__sublist_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(list__sublist_2_0_i17);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(list__sublist_2_0_i1);
	}
	MR_sv(3) = MR_tfield(1, MR_r3, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(builtin__unify_2_0,
		list__sublist_2_0_i7);
MR_def_label(list__sublist_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__sublist_2_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(list__sublist_2_0_i28);
MR_def_label(list__sublist_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(list__sublist_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(list__sublist_2_0_i28);
MR_def_label(list__sublist_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module106)
	MR_init_entry1(list__all_same_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__all_same_2_2_0);
	MR_init_label4(list__all_same_2_2_0,17,4,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'all_same_2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__all_same_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(list__all_same_2_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(list__all_same_2_2_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r3, 1);
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(builtin__unify_2_0,
		list__all_same_2_2_0_i4);
MR_def_label(list__all_same_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__all_same_2_2_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(list__all_same_2_2_0_i17);
MR_def_label(list__all_same_2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(list__all_same_2_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module107)
	MR_init_entry1(list__all_same_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__all_same_1_0);
	MR_init_label1(list__all_same_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'all_same'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__all_same_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(list__all_same_1_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_np_tailcall_ent(list__all_same_2_2_0);
	}
MR_def_label(list__all_same_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module108)
	MR_init_entry1(list__last_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__last_2_0);
	MR_init_label2(list__last_2_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'last'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__last_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(list__last_2_0_i1);
	}
	MR_r3 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(list__last_2_0_i4);
	}
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__last_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_localtailcall(list__last_2_0);
MR_def_label(list__last_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module109)
	MR_init_entry1(list__det_last_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__det_last_2_0);
	MR_init_label1(list__det_last_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_last'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__det_last_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(list__det_last_2_0_i3);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_tailcall_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_3_0);
MR_def_label(list__det_last_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.det_last: empty list", 25);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module110)
	MR_init_entry1(fn__list__det_last_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__det_last_1_0);
	MR_init_label1(fn__list__det_last_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_last'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__det_last_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__list__det_last_1_0_i3);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_tailcall_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_3_0);
MR_def_label(fn__list__det_last_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.det_last: empty list", 25);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module111)
	MR_init_entry1(list__last_det_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__last_det_2_0);
	MR_init_label1(list__last_det_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'last_det'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__last_det_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(list__last_det_2_0_i3);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_tailcall_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_3_0);
MR_def_label(list__last_det_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.det_last: empty list", 25);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module112)
	MR_init_entry1(list__split_last_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__split_last_3_0);
	MR_init_label3(list__split_last_3_0,24,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'split_last'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__split_last_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(list__split_last_3_0_i1);
	}
	MR_r4 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(list__split_last_3_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(list__split_last_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_97_115_116_95_100_101_116_95_50_95_95_91_49_93_95_48_4_0,
		list__split_last_3_0_i5);
MR_def_label(list__split_last_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(list__split_last_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module113)
	MR_init_entry1(list__split_last_det_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__split_last_det_3_0);
	MR_init_label3(list__split_last_det_3_0,26,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'split_last_det'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__split_last_det_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(list__split_last_det_3_0_i3);
	}
	MR_r3 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(list__split_last_det_3_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_proceed();
MR_def_label(list__split_last_det_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_97_115_116_95_100_101_116_95_50_95_95_91_49_93_95_48_4_0,
		list__split_last_det_3_0_i6);
MR_def_label(list__split_last_det_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(list__split_last_det_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.split_last_det: empty list", 31);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module114)
	MR_init_entry1(list__det_split_last_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__det_split_last_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_split_last'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__det_split_last_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__split_last_det_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(list_module115)
	MR_init_entry1(list__map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_3_0);
	MR_init_label3(list__map_3_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(list__map_3_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__map_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map_3_0_i4);
MR_def_label(list__map_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_localcall_lab(list__map_3_0,
		list__map_3_0_i5);
MR_def_label(list__map_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module116)
	MR_init_entry1(list__map_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_3_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module117)
	MR_init_entry1(list__map_3_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_3_2);
	MR_init_label4(list__map_3_2,32,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map'/3 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_3_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(list__map_3_2_i32);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map_3_2,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_3_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map_3_2_i4);
MR_def_label(list__map_3_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_3_2_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_localcall_lab(list__map_3_2,
		list__map_3_2_i6);
MR_def_label(list__map_3_2,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_3_2_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
MR_def_label(list__map_3_2,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module118)
	MR_init_entry1(list__map_3_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_3_3);
	MR_init_label3(list__map_3_3,16,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map'/3 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_3_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(list__map_3_3_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__map_3_3,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.map/3-3", 5,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(4) = MR_r1;
	MR_fv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_3_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map_3_3_i3);
MR_def_label(list__map_3_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_r1 = MR_fv(4);
	MR_r2 = MR_fv(5);
	MR_r3 = MR_fv(1);
	MR_r4 = MR_fv(2);
	MR_np_localcall_lab(list__map_3_3,
		list__map_3_3_i4);
MR_def_label(list__map_3_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_fv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module119)
	MR_init_entry1(list__map_3_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_3_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map'/3 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_3_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_3_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(list_module120)
	MR_init_entry1(list__map_3_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_3_5);
	MR_init_label4(list__map_3_5,24,3,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map'/3 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_3_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(list__map_3_5,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(list__map_3_5_i3);
	}
	MR_r1 = ((MR_Integer) MR_r5 == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(6);
MR_def_label(list__map_3_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(list__map_3_5_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r5;
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tfield(1, MR_tempr3, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_3_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__map_3_5_i6);
MR_def_label(list__map_3_5,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_3_5_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(list__map_3_5_i24);
MR_def_label(list__map_3_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module121)
	MR_init_entry1(fn__list__map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__map_2_0);
	MR_init_label3(fn__list__map_2_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__map_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__list__map_2_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__list__map_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__list__map_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__list__map_2_0_i4);
MR_def_label(fn__list__map_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_localcall_lab(fn__list__map_2_0,
		fn__list__map_2_0_i5);
MR_def_label(fn__list__map_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module122)
	MR_init_entry1(list__map2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_4_0);
	MR_init_label3(list__map2_4_0,18,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(list__map2_4_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__map2_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
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
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map2_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map2_4_0_i4);
MR_def_label(list__map2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(list__map2_4_0,
		list__map2_4_0_i5);
MR_def_label(list__map2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module123)
	MR_init_entry1(list__map2_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_4_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module124)
	MR_init_entry1(list__map2_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_4_2);
	MR_init_label4(list__map2_4_2,33,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(list__map2_4_2_i33);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map2_4_2,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
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
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map2_4_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map2_4_2_i4);
MR_def_label(list__map2_4_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map2_4_2_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(list__map2_4_2,
		list__map2_4_2_i6);
MR_def_label(list__map2_4_2,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map2_4_2_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(list__map2_4_2,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module125)
	MR_init_entry1(list__map2_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_4_3);
	MR_init_label3(list__map2_4_3,17,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(list__map2_4_3_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__map2_4_3,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.map2/4-3", 7,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(5) = MR_r1;
	MR_fv(6) = MR_r2;
	MR_fv(7) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map2_4_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map2_4_3_i3);
MR_def_label(list__map2_4_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_r1 = MR_fv(5);
	MR_r2 = MR_fv(6);
	MR_r3 = MR_fv(7);
	MR_r4 = MR_fv(1);
	MR_r5 = MR_fv(2);
	MR_np_localcall_lab(list__map2_4_3,
		list__map2_4_3_i4);
MR_def_label(list__map2_4_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_fv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module126)
	MR_init_entry1(list__map2_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_4_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map2_4_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(list_module127)
	MR_init_entry1(list__map2_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_4_5);
	MR_init_label4(list__map2_4_5,34,3,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(list__map2_4_5,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(list__map2_4_5_i3);
	}
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__map2_4_5_i1);
	}
	MR_r1 = ((MR_Integer) MR_r7 == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(8);
MR_def_label(list__map2_4_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r6,0,0)) {
		MR_GOTO_LAB(list__map2_4_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map2_4_5_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r6;
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r7;
	MR_sv(4) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tfield(1, MR_tempr3, 0);
	MR_r4 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map2_4_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__list__map2_4_5_i8);
MR_def_label(list__map2_4_5,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map2_4_5_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(list__map2_4_5_i34);
MR_def_label(list__map2_4_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module128)
	MR_init_entry1(list__map3_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map3_5_0);
	MR_init_label3(list__map3_5_0,19,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map3'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map3_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__map3_5_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__map3_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map3_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map3_5_0_i4);
MR_def_label(list__map3_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_localcall_lab(list__map3_5_0,
		list__map3_5_0_i5);
MR_def_label(list__map3_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module129)
	MR_init_entry1(list__map3_5_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map3_5_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map3'/5 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map3_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map3_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module130)
	MR_init_entry1(list__map3_5_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map3_5_2);
	MR_init_label4(list__map3_5_2,34,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map3'/5 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map3_5_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__map3_5_2_i34);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map3_5_2,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map3_5_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map3_5_2_i4);
MR_def_label(list__map3_5_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map3_5_2_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_localcall_lab(list__map3_5_2,
		list__map3_5_2_i6);
MR_def_label(list__map3_5_2,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map3_5_2_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_r4;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(list__map3_5_2,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module131)
	MR_init_entry1(list__map3_5_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map3_5_3);
	MR_init_label3(list__map3_5_3,18,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map3'/5 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map3_5_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__map3_5_3_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__map3_5_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.map3/5-3", 9,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(6) = MR_r1;
	MR_fv(7) = MR_r2;
	MR_fv(8) = MR_r3;
	MR_fv(9) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map3_5_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map3_5_3_i3);
MR_def_label(list__map3_5_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_fv(5) = MR_r3;
	MR_r1 = MR_fv(6);
	MR_r2 = MR_fv(7);
	MR_r3 = MR_fv(8);
	MR_r4 = MR_fv(9);
	MR_r5 = MR_fv(1);
	MR_r6 = MR_fv(2);
	MR_np_localcall_lab(list__map3_5_3,
		list__map3_5_3_i4);
MR_def_label(list__map3_5_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_fv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_fv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module132)
	MR_init_entry1(list__map3_5_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map3_5_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map3'/5 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map3_5_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map3_5_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_4);

MR_BEGIN_MODULE(list_module133)
	MR_init_entry1(list__map3_5_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map3_5_5);
	MR_init_label4(list__map3_5_5,44,3,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map3'/5 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map3_5_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(list__map3_5_5,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__map3_5_5_i3);
	}
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map3_5_5_i1);
	}
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map3_5_5_i1);
	}
	MR_r1 = ((MR_Integer) MR_r9 == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(10);
MR_def_label(list__map3_5_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map3_5_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map3_5_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map3_5_5_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r7;
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r8;
	MR_sv(4) = MR_tfield(1, MR_tempr4, 1);
	MR_tempr5 = MR_r9;
	MR_sv(5) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tfield(1, MR_tempr3, 0);
	MR_r4 = MR_tfield(1, MR_tempr4, 0);
	MR_r5 = MR_tfield(1, MR_tempr5, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map3_5_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__list__map3_5_5_i10);
MR_def_label(list__map3_5_5,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map3_5_5_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_sv(5);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(list__map3_5_5_i44);
MR_def_label(list__map3_5_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module134)
	MR_init_entry1(list__map4_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map4_6_0);
	MR_init_label3(list__map4_6_0,20,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map4'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map4_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map4_6_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__map4_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map4_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map4_6_0_i4);
MR_def_label(list__map4_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_tempr4 = MR_sv(4);
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_localcall_lab(list__map4_6_0,
		list__map4_6_0_i5);
MR_def_label(list__map4_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr4, 1) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module135)
	MR_init_entry1(list__map4_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map4_6_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map4'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map4_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map4_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module136)
	MR_init_entry1(list__map4_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map4_6_2);
	MR_init_label4(list__map4_6_2,35,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map4'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map4_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map4_6_2_i35);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map4_6_2,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map4_6_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map4_6_2_i4);
MR_def_label(list__map4_6_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map4_6_2_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_tempr4 = MR_sv(4);
	MR_sv(4) = MR_r5;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_localcall_lab(list__map4_6_2,
		list__map4_6_2_i6);
MR_def_label(list__map4_6_2,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map4_6_2_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr4, 1) = MR_r5;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(list__map4_6_2,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module137)
	MR_init_entry1(list__map4_6_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map4_6_3);
	MR_init_label3(list__map4_6_3,19,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map4'/6 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map4_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map4_6_3_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__map4_6_3,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.map4/6-3", 11,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(7) = MR_r1;
	MR_fv(8) = MR_r2;
	MR_fv(9) = MR_r3;
	MR_fv(10) = MR_r4;
	MR_fv(11) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map4_6_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map4_6_3_i3);
MR_def_label(list__map4_6_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_fv(5) = MR_r3;
	MR_fv(6) = MR_r4;
	MR_r1 = MR_fv(7);
	MR_r2 = MR_fv(8);
	MR_r3 = MR_fv(9);
	MR_r4 = MR_fv(10);
	MR_r5 = MR_fv(11);
	MR_r6 = MR_fv(1);
	MR_r7 = MR_fv(2);
	MR_np_localcall_lab(list__map4_6_3,
		list__map4_6_3_i4);
MR_def_label(list__map4_6_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_fv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_fv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_fv(6);
	MR_tfield(1, MR_tempr4, 1) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module138)
	MR_init_entry1(list__map4_6_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map4_6_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map4'/6 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map4_6_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map4_6_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_5);

MR_BEGIN_MODULE(list_module139)
	MR_init_entry1(list__map4_6_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map4_6_5);
	MR_init_label4(list__map4_6_5,54,3,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map4'/6 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map4_6_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(list__map4_6_5,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map4_6_5_i3);
	}
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map4_6_5_i1);
	}
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map4_6_5_i1);
	}
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(list__map4_6_5_i1);
	}
	MR_r1 = ((MR_Integer) MR_r11 == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(12);
MR_def_label(list__map4_6_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map4_6_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map4_6_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r10,0,0)) {
		MR_GOTO_LAB(list__map4_6_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r11,0,0)) {
		MR_GOTO_LAB(list__map4_6_5_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r8;
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r9;
	MR_sv(4) = MR_tfield(1, MR_tempr4, 1);
	MR_tempr5 = MR_r10;
	MR_sv(5) = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_r11;
	MR_sv(6) = MR_tfield(1, MR_tempr6, 1);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tfield(1, MR_tempr3, 0);
	MR_r4 = MR_tfield(1, MR_tempr4, 0);
	MR_r5 = MR_tfield(1, MR_tempr5, 0);
	MR_r6 = MR_tfield(1, MR_tempr6, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map4_6_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__list__map4_6_5_i12);
MR_def_label(list__map4_6_5,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map4_6_5_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_r10 = MR_sv(5);
	MR_r11 = MR_sv(6);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(list__map4_6_5_i54);
MR_def_label(list__map4_6_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module140)
	MR_init_entry1(list__map5_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map5_7_0);
	MR_init_label3(list__map5_7_0,21,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map5'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map5_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map5_7_0_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__map5_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map5_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map5_7_0_i4);
MR_def_label(list__map5_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_tempr4 = MR_sv(4);
	MR_sv(4) = MR_r4;
	MR_tempr5 = MR_sv(5);
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tempr5;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	}
	MR_np_localcall_lab(list__map5_7_0,
		list__map5_7_0_i5);
MR_def_label(list__map5_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr4, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr5, 1) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_tempr5;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module141)
	MR_init_entry1(list__map5_7_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map5_7_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map5'/7 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map5_7_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map5_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module142)
	MR_init_entry1(list__map5_7_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map5_7_2);
	MR_init_label4(list__map5_7_2,36,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map5'/7 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map5_7_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map5_7_2_i36);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map5_7_2,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map5_7_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map5_7_2_i4);
MR_def_label(list__map5_7_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map5_7_2_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_tempr4 = MR_sv(4);
	MR_sv(4) = MR_r5;
	MR_tempr5 = MR_sv(5);
	MR_sv(5) = MR_r6;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tempr5;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	}
	MR_np_localcall_lab(list__map5_7_2,
		list__map5_7_2_i6);
MR_def_label(list__map5_7_2,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map5_7_2_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr4, 1) = MR_r5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr5, 1) = MR_r6;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_tempr5;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(list__map5_7_2,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module143)
	MR_init_entry1(list__map5_7_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map5_7_3);
	MR_init_label3(list__map5_7_3,20,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map5'/7 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map5_7_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map5_7_3_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__map5_7_3,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.map5/7-3", 13,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(8) = MR_r1;
	MR_fv(9) = MR_r2;
	MR_fv(10) = MR_r3;
	MR_fv(11) = MR_r4;
	MR_fv(12) = MR_r5;
	MR_fv(13) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map5_7_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map5_7_3_i3);
MR_def_label(list__map5_7_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_fv(5) = MR_r3;
	MR_fv(6) = MR_r4;
	MR_fv(7) = MR_r5;
	MR_r1 = MR_fv(8);
	MR_r2 = MR_fv(9);
	MR_r3 = MR_fv(10);
	MR_r4 = MR_fv(11);
	MR_r5 = MR_fv(12);
	MR_r6 = MR_fv(13);
	MR_r7 = MR_fv(1);
	MR_r8 = MR_fv(2);
	MR_np_localcall_lab(list__map5_7_3,
		list__map5_7_3_i4);
MR_def_label(list__map5_7_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_fv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_fv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_fv(6);
	MR_tfield(1, MR_tempr4, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_fv(7);
	MR_tfield(1, MR_tempr5, 1) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_tempr5;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module144)
	MR_init_entry1(list__map5_7_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map5_7_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map5'/7 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map5_7_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map5_7_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_compact);

MR_BEGIN_MODULE(list_module145)
	MR_init_entry1(list__map5_7_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map5_7_5);
	MR_init_label4(list__map5_7_5,64,3,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map5'/7 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map5_7_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
MR_def_label(list__map5_7_5,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map5_7_5_i3);
	}
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map5_7_5_i1);
	}
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(list__map5_7_5_i1);
	}
	if (MR_LTAGS_TESTR(MR_r11,0,0)) {
		MR_GOTO_LAB(list__map5_7_5_i1);
	}
	if (MR_LTAGS_TESTR(MR_r12,0,0)) {
		MR_GOTO_LAB(list__map5_7_5_i1);
	}
	MR_r1 = ((MR_Integer) MR_r13 == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(14);
MR_def_label(list__map5_7_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map5_7_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r10,0,0)) {
		MR_GOTO_LAB(list__map5_7_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r11,0,0)) {
		MR_GOTO_LAB(list__map5_7_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r12,0,0)) {
		MR_GOTO_LAB(list__map5_7_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r13,0,0)) {
		MR_GOTO_LAB(list__map5_7_5_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_r7;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r9;
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r10;
	MR_sv(4) = MR_tfield(1, MR_tempr4, 1);
	MR_tempr5 = MR_r11;
	MR_sv(5) = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_r12;
	MR_sv(6) = MR_tfield(1, MR_tempr6, 1);
	MR_tempr7 = MR_r13;
	MR_sv(7) = MR_tfield(1, MR_tempr7, 1);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_tfield(1, MR_tempr3, 0);
	MR_r5 = MR_tfield(1, MR_tempr4, 0);
	MR_r6 = MR_tfield(1, MR_tempr5, 0);
	MR_r7 = MR_tfield(1, MR_tempr6, 0);
	MR_r8 = MR_tfield(1, MR_tempr7, 0);
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map5_7_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__list__map5_7_5_i14);
MR_def_label(list__map5_7_5,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map5_7_5_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(3);
	MR_r10 = MR_sv(4);
	MR_r11 = MR_sv(5);
	MR_r12 = MR_sv(6);
	MR_r13 = MR_sv(7);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(list__map5_7_5_i64);
MR_def_label(list__map5_7_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module146)
	MR_init_entry1(list__map6_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map6_8_0);
	MR_init_label3(list__map6_8_0,22,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map6'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map6_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map6_8_0_i22);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__map6_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r8;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r9;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map6_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map6_8_0_i4);
MR_def_label(list__map6_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_tempr4 = MR_sv(4);
	MR_sv(4) = MR_r4;
	MR_tempr5 = MR_sv(5);
	MR_sv(5) = MR_r5;
	MR_tempr6 = MR_sv(6);
	MR_sv(6) = MR_r6;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tempr5;
	MR_r4 = MR_tempr6;
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	}
	MR_np_localcall_lab(list__map6_8_0,
		list__map6_8_0_i5);
MR_def_label(list__map6_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr4, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr5, 1) = MR_r5;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr6, 1) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_tempr5;
	MR_r6 = MR_tempr6;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module147)
	MR_init_entry1(list__map6_8_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map6_8_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map6'/8 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map6_8_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map6_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module148)
	MR_init_entry1(list__map6_8_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map6_8_2);
	MR_init_label4(list__map6_8_2,37,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map6'/8 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map6_8_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map6_8_2_i37);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map6_8_2,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r8;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r9;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map6_8_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map6_8_2_i4);
MR_def_label(list__map6_8_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map6_8_2_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_tempr4 = MR_sv(4);
	MR_sv(4) = MR_r5;
	MR_tempr5 = MR_sv(5);
	MR_sv(5) = MR_r6;
	MR_tempr6 = MR_sv(6);
	MR_sv(6) = MR_r7;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tempr5;
	MR_r4 = MR_tempr6;
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	}
	MR_np_localcall_lab(list__map6_8_2,
		list__map6_8_2_i6);
MR_def_label(list__map6_8_2,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map6_8_2_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr4, 1) = MR_r5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr5, 1) = MR_r6;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr6, 1) = MR_r7;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_tempr5;
	MR_r7 = MR_tempr6;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
	}
MR_def_label(list__map6_8_2,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module149)
	MR_init_entry1(list__map6_8_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map6_8_3);
	MR_init_label3(list__map6_8_3,21,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map6'/8 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map6_8_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map6_8_3_i21);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__map6_8_3,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.map6/8-3", 15,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r8;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r9;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(9) = MR_r1;
	MR_fv(10) = MR_r2;
	MR_fv(11) = MR_r3;
	MR_fv(12) = MR_r4;
	MR_fv(13) = MR_r5;
	MR_fv(14) = MR_r6;
	MR_fv(15) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map6_8_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map6_8_3_i3);
MR_def_label(list__map6_8_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_fv(5) = MR_r3;
	MR_fv(6) = MR_r4;
	MR_fv(7) = MR_r5;
	MR_fv(8) = MR_r6;
	MR_r1 = MR_fv(9);
	MR_r2 = MR_fv(10);
	MR_r3 = MR_fv(11);
	MR_r4 = MR_fv(12);
	MR_r5 = MR_fv(13);
	MR_r6 = MR_fv(14);
	MR_r7 = MR_fv(15);
	MR_r8 = MR_fv(1);
	MR_r9 = MR_fv(2);
	MR_np_localcall_lab(list__map6_8_3,
		list__map6_8_3_i4);
MR_def_label(list__map6_8_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_fv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_fv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_fv(6);
	MR_tfield(1, MR_tempr4, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_fv(7);
	MR_tfield(1, MR_tempr5, 1) = MR_r5;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_fv(8);
	MR_tfield(1, MR_tempr6, 1) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_tempr5;
	MR_r6 = MR_tempr6;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module150)
	MR_init_entry1(list__map6_8_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map6_8_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map6'/8 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map6_8_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map6_8_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module151)
	MR_init_entry1(list__map6_8_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map6_8_5);
	MR_init_label4(list__map6_8_5,74,3,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map6'/8 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map6_8_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
MR_def_label(list__map6_8_5,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map6_8_5_i3);
	}
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(list__map6_8_5_i1);
	}
	if (MR_LTAGS_TESTR(MR_r11,0,0)) {
		MR_GOTO_LAB(list__map6_8_5_i1);
	}
	if (MR_LTAGS_TESTR(MR_r12,0,0)) {
		MR_GOTO_LAB(list__map6_8_5_i1);
	}
	if (MR_LTAGS_TESTR(MR_r13,0,0)) {
		MR_GOTO_LAB(list__map6_8_5_i1);
	}
	if (MR_LTAGS_TESTR(MR_r14,0,0)) {
		MR_GOTO_LAB(list__map6_8_5_i1);
	}
	MR_r1 = ((MR_Integer) MR_r15 == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(16);
MR_def_label(list__map6_8_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r10,0,0)) {
		MR_GOTO_LAB(list__map6_8_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r11,0,0)) {
		MR_GOTO_LAB(list__map6_8_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r12,0,0)) {
		MR_GOTO_LAB(list__map6_8_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r13,0,0)) {
		MR_GOTO_LAB(list__map6_8_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r14,0,0)) {
		MR_GOTO_LAB(list__map6_8_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r15,0,0)) {
		MR_GOTO_LAB(list__map6_8_5_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = MR_r8;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r9;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r10;
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r11;
	MR_sv(4) = MR_tfield(1, MR_tempr4, 1);
	MR_tempr5 = MR_r12;
	MR_sv(5) = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_r13;
	MR_sv(6) = MR_tfield(1, MR_tempr6, 1);
	MR_tempr7 = MR_r14;
	MR_sv(7) = MR_tfield(1, MR_tempr7, 1);
	MR_tempr8 = MR_r15;
	MR_sv(8) = MR_tfield(1, MR_tempr8, 1);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	MR_sv(12) = MR_r4;
	MR_sv(13) = MR_r5;
	MR_sv(14) = MR_r6;
	MR_sv(15) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_tfield(1, MR_tempr3, 0);
	MR_r5 = MR_tfield(1, MR_tempr4, 0);
	MR_r6 = MR_tfield(1, MR_tempr5, 0);
	MR_r7 = MR_tfield(1, MR_tempr6, 0);
	MR_r8 = MR_tfield(1, MR_tempr7, 0);
	MR_r9 = MR_tfield(1, MR_tempr8, 0);
	MR_r2 = (MR_Integer) 7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map6_8_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__list__map6_8_5_i16);
MR_def_label(list__map6_8_5,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map6_8_5_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(14);
	MR_r7 = MR_sv(15);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(3);
	MR_r11 = MR_sv(4);
	MR_r12 = MR_sv(5);
	MR_r13 = MR_sv(6);
	MR_r14 = MR_sv(7);
	MR_r15 = MR_sv(8);
	MR_succip_word = MR_sv(16);
	MR_GOTO_LAB(list__map6_8_5_i74);
MR_def_label(list__map6_8_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module152)
	MR_init_entry1(list__map7_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map7_9_0);
	MR_init_label3(list__map7_9_0,23,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map7'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map7_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(list__map7_9_0_i23);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__map7_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r9;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r10;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_sv(10) = MR_r8;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map7_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map7_9_0_i4);
MR_def_label(list__map7_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_tempr4 = MR_sv(4);
	MR_sv(4) = MR_r4;
	MR_tempr5 = MR_sv(5);
	MR_sv(5) = MR_r5;
	MR_tempr6 = MR_sv(6);
	MR_sv(6) = MR_r6;
	MR_tempr7 = MR_sv(7);
	MR_sv(7) = MR_r7;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tempr5;
	MR_r4 = MR_tempr6;
	MR_r5 = MR_tempr7;
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(10);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	}
	MR_np_localcall_lab(list__map7_9_0,
		list__map7_9_0_i5);
MR_def_label(list__map7_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr4, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr5, 1) = MR_r5;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr6, 1) = MR_r6;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr7, 1) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_tempr5;
	MR_r6 = MR_tempr6;
	MR_r7 = MR_tempr7;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module153)
	MR_init_entry1(list__map7_9_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map7_9_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map7'/9 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map7_9_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map7_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module154)
	MR_init_entry1(list__map7_9_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map7_9_2);
	MR_init_label4(list__map7_9_2,38,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map7'/9 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map7_9_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(list__map7_9_2_i38);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map7_9_2,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r9;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r10;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_sv(10) = MR_r8;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map7_9_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map7_9_2_i4);
MR_def_label(list__map7_9_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map7_9_2_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_tempr4 = MR_sv(4);
	MR_sv(4) = MR_r5;
	MR_tempr5 = MR_sv(5);
	MR_sv(5) = MR_r6;
	MR_tempr6 = MR_sv(6);
	MR_sv(6) = MR_r7;
	MR_tempr7 = MR_sv(7);
	MR_sv(7) = MR_r8;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tempr5;
	MR_r4 = MR_tempr6;
	MR_r5 = MR_tempr7;
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(10);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	}
	MR_np_localcall_lab(list__map7_9_2,
		list__map7_9_2_i6);
MR_def_label(list__map7_9_2,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map7_9_2_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr4, 1) = MR_r5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr5, 1) = MR_r6;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr6, 1) = MR_r7;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr7, 1) = MR_r8;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_tempr5;
	MR_r7 = MR_tempr6;
	MR_r8 = MR_tempr7;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(11);
	}
MR_def_label(list__map7_9_2,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module155)
	MR_init_entry1(list__map7_9_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map7_9_3);
	MR_init_label3(list__map7_9_3,22,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map7'/9 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map7_9_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(list__map7_9_3_i22);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__map7_9_3,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.map7/9-3", 17,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r9;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r10;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(10) = MR_r1;
	MR_fv(11) = MR_r2;
	MR_fv(12) = MR_r3;
	MR_fv(13) = MR_r4;
	MR_fv(14) = MR_r5;
	MR_fv(15) = MR_r6;
	MR_fv(16) = MR_r7;
	MR_fv(17) = MR_r8;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map7_9_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map7_9_3_i3);
MR_def_label(list__map7_9_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_fv(5) = MR_r3;
	MR_fv(6) = MR_r4;
	MR_fv(7) = MR_r5;
	MR_fv(8) = MR_r6;
	MR_fv(9) = MR_r7;
	MR_r1 = MR_fv(10);
	MR_r2 = MR_fv(11);
	MR_r3 = MR_fv(12);
	MR_r4 = MR_fv(13);
	MR_r5 = MR_fv(14);
	MR_r6 = MR_fv(15);
	MR_r7 = MR_fv(16);
	MR_r8 = MR_fv(17);
	MR_r9 = MR_fv(1);
	MR_r10 = MR_fv(2);
	MR_np_localcall_lab(list__map7_9_3,
		list__map7_9_3_i4);
MR_def_label(list__map7_9_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_fv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_fv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_fv(6);
	MR_tfield(1, MR_tempr4, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_fv(7);
	MR_tfield(1, MR_tempr5, 1) = MR_r5;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_fv(8);
	MR_tfield(1, MR_tempr6, 1) = MR_r6;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_fv(9);
	MR_tfield(1, MR_tempr7, 1) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_tempr5;
	MR_r6 = MR_tempr6;
	MR_r7 = MR_tempr7;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module156)
	MR_init_entry1(list__map7_9_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map7_9_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map7'/9 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map7_9_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map7_9_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module157)
	MR_init_entry1(list__map7_9_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map7_9_5);
	MR_init_label4(list__map7_9_5,84,3,18,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map7'/9 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map7_9_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
MR_def_label(list__map7_9_5,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(list__map7_9_5_i3);
	}
	if (MR_LTAGS_TESTR(MR_r11,0,0)) {
		MR_GOTO_LAB(list__map7_9_5_i1);
	}
	if (MR_LTAGS_TESTR(MR_r12,0,0)) {
		MR_GOTO_LAB(list__map7_9_5_i1);
	}
	if (MR_LTAGS_TESTR(MR_r13,0,0)) {
		MR_GOTO_LAB(list__map7_9_5_i1);
	}
	if (MR_LTAGS_TESTR(MR_r14,0,0)) {
		MR_GOTO_LAB(list__map7_9_5_i1);
	}
	if (MR_LTAGS_TESTR(MR_r15,0,0)) {
		MR_GOTO_LAB(list__map7_9_5_i1);
	}
	if (MR_LTAGS_TESTR(MR_r16,0,0)) {
		MR_GOTO_LAB(list__map7_9_5_i1);
	}
	MR_r1 = ((MR_Integer) MR_r17 == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(18);
MR_def_label(list__map7_9_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r11,0,0)) {
		MR_GOTO_LAB(list__map7_9_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r12,0,0)) {
		MR_GOTO_LAB(list__map7_9_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r13,0,0)) {
		MR_GOTO_LAB(list__map7_9_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r14,0,0)) {
		MR_GOTO_LAB(list__map7_9_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r15,0,0)) {
		MR_GOTO_LAB(list__map7_9_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r16,0,0)) {
		MR_GOTO_LAB(list__map7_9_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r17,0,0)) {
		MR_GOTO_LAB(list__map7_9_5_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tempr1 = MR_r9;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r10;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r11;
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r12;
	MR_sv(4) = MR_tfield(1, MR_tempr4, 1);
	MR_tempr5 = MR_r13;
	MR_sv(5) = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_r14;
	MR_sv(6) = MR_tfield(1, MR_tempr6, 1);
	MR_tempr7 = MR_r15;
	MR_sv(7) = MR_tfield(1, MR_tempr7, 1);
	MR_tempr8 = MR_r16;
	MR_sv(8) = MR_tfield(1, MR_tempr8, 1);
	MR_tempr9 = MR_r17;
	MR_sv(9) = MR_tfield(1, MR_tempr9, 1);
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_sv(15) = MR_r6;
	MR_sv(16) = MR_r7;
	MR_sv(17) = MR_r8;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_tfield(1, MR_tempr3, 0);
	MR_r5 = MR_tfield(1, MR_tempr4, 0);
	MR_r6 = MR_tfield(1, MR_tempr5, 0);
	MR_r7 = MR_tfield(1, MR_tempr6, 0);
	MR_r8 = MR_tfield(1, MR_tempr7, 0);
	MR_r9 = MR_tfield(1, MR_tempr8, 0);
	MR_r10 = MR_tfield(1, MR_tempr9, 0);
	MR_r2 = (MR_Integer) 8;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map7_9_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__list__map7_9_5_i18);
MR_def_label(list__map7_9_5,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map7_9_5_i1);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(15);
	MR_r7 = MR_sv(16);
	MR_r8 = MR_sv(17);
	MR_r9 = MR_sv(1);
	MR_r10 = MR_sv(2);
	MR_r11 = MR_sv(3);
	MR_r12 = MR_sv(4);
	MR_r13 = MR_sv(5);
	MR_r14 = MR_sv(6);
	MR_r15 = MR_sv(7);
	MR_r16 = MR_sv(8);
	MR_r17 = MR_sv(9);
	MR_succip_word = MR_sv(18);
	MR_GOTO_LAB(list__map7_9_5_i84);
MR_def_label(list__map7_9_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module158)
	MR_init_entry1(list__map8_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map8_10_0);
	MR_init_label3(list__map8_10_0,24,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map8'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map8_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r11,0,0)) {
		MR_GOTO_LAB(list__map8_10_0_i24);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__map8_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r10;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r11;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_sv(10) = MR_r8;
	MR_sv(11) = MR_r9;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map8_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map8_10_0_i4);
MR_def_label(list__map8_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_tempr4 = MR_sv(4);
	MR_sv(4) = MR_r4;
	MR_tempr5 = MR_sv(5);
	MR_sv(5) = MR_r5;
	MR_tempr6 = MR_sv(6);
	MR_sv(6) = MR_r6;
	MR_tempr7 = MR_sv(7);
	MR_sv(7) = MR_r7;
	MR_tempr8 = MR_sv(8);
	MR_sv(8) = MR_r8;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tempr5;
	MR_r4 = MR_tempr6;
	MR_r5 = MR_tempr7;
	MR_r6 = MR_tempr8;
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(10);
	MR_r9 = MR_sv(11);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	}
	MR_np_localcall_lab(list__map8_10_0,
		list__map8_10_0_i5);
MR_def_label(list__map8_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr4, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr5, 1) = MR_r5;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr6, 1) = MR_r6;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr7, 1) = MR_r7;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr8, 1) = MR_r8;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_tempr5;
	MR_r6 = MR_tempr6;
	MR_r7 = MR_tempr7;
	MR_r8 = MR_tempr8;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module159)
	MR_init_entry1(list__map8_10_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map8_10_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map8'/10 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map8_10_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map8_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module160)
	MR_init_entry1(list__map8_10_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map8_10_2);
	MR_init_label4(list__map8_10_2,39,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map8'/10 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map8_10_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r11,0,0)) {
		MR_GOTO_LAB(list__map8_10_2_i39);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map8_10_2,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r10;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r11;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_sv(10) = MR_r8;
	MR_sv(11) = MR_r9;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map8_10_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map8_10_2_i4);
MR_def_label(list__map8_10_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map8_10_2_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_tempr4 = MR_sv(4);
	MR_sv(4) = MR_r5;
	MR_tempr5 = MR_sv(5);
	MR_sv(5) = MR_r6;
	MR_tempr6 = MR_sv(6);
	MR_sv(6) = MR_r7;
	MR_tempr7 = MR_sv(7);
	MR_sv(7) = MR_r8;
	MR_tempr8 = MR_sv(8);
	MR_sv(8) = MR_r9;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tempr5;
	MR_r4 = MR_tempr6;
	MR_r5 = MR_tempr7;
	MR_r6 = MR_tempr8;
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(10);
	MR_r9 = MR_sv(11);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	}
	MR_np_localcall_lab(list__map8_10_2,
		list__map8_10_2_i6);
MR_def_label(list__map8_10_2,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map8_10_2_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr4, 1) = MR_r5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr5, 1) = MR_r6;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr6, 1) = MR_r7;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr7, 1) = MR_r8;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr8, 1) = MR_r9;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_tempr5;
	MR_r7 = MR_tempr6;
	MR_r8 = MR_tempr7;
	MR_r9 = MR_tempr8;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(12);
	}
MR_def_label(list__map8_10_2,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module161)
	MR_init_entry1(list__map8_10_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map8_10_3);
	MR_init_label3(list__map8_10_3,23,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map8'/10 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map8_10_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r11,0,0)) {
		MR_GOTO_LAB(list__map8_10_3_i23);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__map8_10_3,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.map8/10-3", 19,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r10;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r11;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(11) = MR_r1;
	MR_fv(12) = MR_r2;
	MR_fv(13) = MR_r3;
	MR_fv(14) = MR_r4;
	MR_fv(15) = MR_r5;
	MR_fv(16) = MR_r6;
	MR_fv(17) = MR_r7;
	MR_fv(18) = MR_r8;
	MR_fv(19) = MR_r9;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map8_10_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__map8_10_3_i3);
MR_def_label(list__map8_10_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_fv(5) = MR_r3;
	MR_fv(6) = MR_r4;
	MR_fv(7) = MR_r5;
	MR_fv(8) = MR_r6;
	MR_fv(9) = MR_r7;
	MR_fv(10) = MR_r8;
	MR_r1 = MR_fv(11);
	MR_r2 = MR_fv(12);
	MR_r3 = MR_fv(13);
	MR_r4 = MR_fv(14);
	MR_r5 = MR_fv(15);
	MR_r6 = MR_fv(16);
	MR_r7 = MR_fv(17);
	MR_r8 = MR_fv(18);
	MR_r9 = MR_fv(19);
	MR_r10 = MR_fv(1);
	MR_r11 = MR_fv(2);
	MR_np_localcall_lab(list__map8_10_3,
		list__map8_10_3_i4);
MR_def_label(list__map8_10_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_fv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_fv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_fv(6);
	MR_tfield(1, MR_tempr4, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_fv(7);
	MR_tfield(1, MR_tempr5, 1) = MR_r5;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_fv(8);
	MR_tfield(1, MR_tempr6, 1) = MR_r6;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_fv(9);
	MR_tfield(1, MR_tempr7, 1) = MR_r7;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_fv(10);
	MR_tfield(1, MR_tempr8, 1) = MR_r8;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_tempr5;
	MR_r6 = MR_tempr6;
	MR_r7 = MR_tempr7;
	MR_r8 = MR_tempr8;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module162)
	MR_init_entry1(list__map8_10_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map8_10_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map8'/10 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map8_10_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map8_10_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module163)
	MR_init_entry1(list__map8_10_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map8_10_5);
	MR_init_label4(list__map8_10_5,94,3,20,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map8'/10 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map8_10_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
MR_def_label(list__map8_10_5,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r11,0,0)) {
		MR_GOTO_LAB(list__map8_10_5_i3);
	}
	if (MR_LTAGS_TESTR(MR_r12,0,0)) {
		MR_GOTO_LAB(list__map8_10_5_i1);
	}
	if (MR_LTAGS_TESTR(MR_r13,0,0)) {
		MR_GOTO_LAB(list__map8_10_5_i1);
	}
	if (MR_LTAGS_TESTR(MR_r14,0,0)) {
		MR_GOTO_LAB(list__map8_10_5_i1);
	}
	if (MR_LTAGS_TESTR(MR_r15,0,0)) {
		MR_GOTO_LAB(list__map8_10_5_i1);
	}
	if (MR_LTAGS_TESTR(MR_r16,0,0)) {
		MR_GOTO_LAB(list__map8_10_5_i1);
	}
	if (MR_LTAGS_TESTR(MR_r17,0,0)) {
		MR_GOTO_LAB(list__map8_10_5_i1);
	}
	if (MR_LTAGS_TESTR(MR_r18,0,0)) {
		MR_GOTO_LAB(list__map8_10_5_i1);
	}
	MR_r1 = ((MR_Integer) MR_r19 == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(20);
MR_def_label(list__map8_10_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r12,0,0)) {
		MR_GOTO_LAB(list__map8_10_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r13,0,0)) {
		MR_GOTO_LAB(list__map8_10_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r14,0,0)) {
		MR_GOTO_LAB(list__map8_10_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r15,0,0)) {
		MR_GOTO_LAB(list__map8_10_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r16,0,0)) {
		MR_GOTO_LAB(list__map8_10_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r17,0,0)) {
		MR_GOTO_LAB(list__map8_10_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r18,0,0)) {
		MR_GOTO_LAB(list__map8_10_5_i1);
	}
	if (MR_LTAGS_TEST(MR_r19,0,0)) {
		MR_GOTO_LAB(list__map8_10_5_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tempr1 = MR_r10;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r11;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r12;
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r13;
	MR_sv(4) = MR_tfield(1, MR_tempr4, 1);
	MR_tempr5 = MR_r14;
	MR_sv(5) = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_r15;
	MR_sv(6) = MR_tfield(1, MR_tempr6, 1);
	MR_tempr7 = MR_r16;
	MR_sv(7) = MR_tfield(1, MR_tempr7, 1);
	MR_tempr8 = MR_r17;
	MR_sv(8) = MR_tfield(1, MR_tempr8, 1);
	MR_tempr9 = MR_r18;
	MR_sv(9) = MR_tfield(1, MR_tempr9, 1);
	MR_tempr10 = MR_r19;
	MR_sv(10) = MR_tfield(1, MR_tempr10, 1);
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_sv(14) = MR_r4;
	MR_sv(15) = MR_r5;
	MR_sv(16) = MR_r6;
	MR_sv(17) = MR_r7;
	MR_sv(18) = MR_r8;
	MR_sv(19) = MR_r9;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_tfield(1, MR_tempr3, 0);
	MR_r5 = MR_tfield(1, MR_tempr4, 0);
	MR_r6 = MR_tfield(1, MR_tempr5, 0);
	MR_r7 = MR_tfield(1, MR_tempr6, 0);
	MR_r8 = MR_tfield(1, MR_tempr7, 0);
	MR_r9 = MR_tfield(1, MR_tempr8, 0);
	MR_r10 = MR_tfield(1, MR_tempr9, 0);
	MR_r11 = MR_tfield(1, MR_tempr10, 0);
	MR_r2 = (MR_Integer) 9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map8_10_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__list__map8_10_5_i20);
MR_def_label(list__map8_10_5,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map8_10_5_i1);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(15);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(17);
	MR_r8 = MR_sv(18);
	MR_r9 = MR_sv(19);
	MR_r10 = MR_sv(1);
	MR_r11 = MR_sv(2);
	MR_r12 = MR_sv(3);
	MR_r13 = MR_sv(4);
	MR_r14 = MR_sv(5);
	MR_r15 = MR_sv(6);
	MR_r16 = MR_sv(7);
	MR_r17 = MR_sv(8);
	MR_r18 = MR_sv(9);
	MR_r19 = MR_sv(10);
	MR_succip_word = MR_sv(20);
	MR_GOTO_LAB(list__map8_10_5_i94);
MR_def_label(list__map8_10_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(20);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__require__func_error_1_0);

MR_BEGIN_MODULE(list_module164)
	MR_init_entry1(fn__list__map_corresponding_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__map_corresponding_3_0);
	MR_init_label4(fn__list__map_corresponding_3_0,3,10,11,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__map_corresponding_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(fn__list__map_corresponding_3_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(fn__list__map_corresponding_3_0_i9);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__list__map_corresponding_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r6,0,0)) {
		MR_GOTO_LAB(fn__list__map_corresponding_3_0_i9);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_tempr3 = MR_r5;
	MR_sv(6) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__list__map_corresponding_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__list__map_corresponding_3_0_i10);
MR_def_label(fn__list__map_corresponding_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(1);
	}
	MR_np_localcall_lab(fn__list__map_corresponding_3_0,
		fn__list__map_corresponding_3_0_i11);
MR_def_label(fn__list__map_corresponding_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__list__map_corresponding_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r1, 1) = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("list.map_corresponding/3: mismatched list arguments", 51);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module165)
	MR_init_entry1(list__map_corresponding_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding_4_0);
	MR_init_label4(list__map_corresponding_4_0,3,9,10,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_4_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__map_corresponding_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r6,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_4_0_i8);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_tempr3 = MR_r5;
	MR_sv(6) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_corresponding_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__map_corresponding_4_0_i9);
MR_def_label(list__map_corresponding_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(1);
	}
	MR_np_localcall_lab(list__map_corresponding_4_0,
		list__map_corresponding_4_0_i10);
MR_def_label(list__map_corresponding_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(list__map_corresponding_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.map_corresponding/4: mismatched list arguments.", 52);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module166)
	MR_init_entry1(list__map_corresponding_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding_4_1);
	MR_init_label7(list__map_corresponding_4_1,52,51,9,11,8,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_4_1_i51);
	}
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_4_1_i52);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map_corresponding_4_1,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("list.map_corresponding/4: mismatched list arguments.", 52);
	MR_np_call_localret_ent(require__error_1_0,
		list__map_corresponding_4_1_i2);
MR_def_label(list__map_corresponding_4_1,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r6,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_4_1_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_tempr3 = MR_r5;
	MR_sv(6) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_corresponding_4_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__map_corresponding_4_1_i9);
MR_def_label(list__map_corresponding_4_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_corresponding_4_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(1);
	}
	MR_np_localcall_lab(list__map_corresponding_4_1,
		list__map_corresponding_4_1_i11);
MR_def_label(list__map_corresponding_4_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_corresponding_4_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(list__map_corresponding_4_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.map_corresponding/4: mismatched list arguments.", 52);
	MR_np_call_localret_ent(require__error_1_0,
		list__map_corresponding_4_1_i2);
MR_def_label(list__map_corresponding_4_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(list__map_corresponding_4_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module167)
	MR_init_entry1(fn__list__map_corresponding3_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__map_corresponding3_4_0);
	MR_init_label4(fn__list__map_corresponding3_4_0,6,7,2,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding3'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__map_corresponding3_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r6,0,0)) {
		MR_GOTO_LAB(fn__list__map_corresponding3_4_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r7,0,0)) {
		MR_GOTO_LAB(fn__list__map_corresponding3_4_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r8,0,0)) {
		MR_GOTO_LAB(fn__list__map_corresponding3_4_0_i2);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r7;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r8;
	MR_sv(3) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tfield(1, MR_tempr3, 0);
	MR_r4 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__list__map_corresponding3_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__fn__list__map_corresponding3_4_0_i6);
MR_def_label(fn__list__map_corresponding3_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	}
	MR_np_localcall_lab(fn__list__map_corresponding3_4_0,
		fn__list__map_corresponding3_4_0_i7);
MR_def_label(fn__list__map_corresponding3_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(fn__list__map_corresponding3_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(fn__list__map_corresponding3_4_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(fn__list__map_corresponding3_4_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(fn__list__map_corresponding3_4_0_i9);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__list__map_corresponding3_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r1, 1) = MR_r4;
	MR_r2 = (MR_Word) MR_string_const("list.map_corresponding3: mismatched list arguments", 50);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module168)
	MR_init_entry1(fn__list__filter_map_corresponding_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__filter_map_corresponding_3_0);
	MR_init_label6(fn__list__filter_map_corresponding_3_0,45,3,12,14,10,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_map_corresponding'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__filter_map_corresponding_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(fn__list__filter_map_corresponding_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(fn__list__filter_map_corresponding_3_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(fn__list__filter_map_corresponding_3_0_i9);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(fn__list__filter_map_corresponding_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r6,0,0)) {
		MR_GOTO_LAB(fn__list__filter_map_corresponding_3_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r6;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r4;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__list__filter_map_corresponding_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__list__filter_map_corresponding_3_0_i12);
MR_def_label(fn__list__filter_map_corresponding_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__list__filter_map_corresponding_3_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(1);
	}
	MR_np_localcall_lab(fn__list__filter_map_corresponding_3_0,
		fn__list__filter_map_corresponding_3_0_i14);
MR_def_label(fn__list__filter_map_corresponding_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__list__filter_map_corresponding_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(fn__list__filter_map_corresponding_3_0_i45);
MR_def_label(fn__list__filter_map_corresponding_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r1, 1) = MR_r3;
	MR_r2 = (MR_Word) MR_string_const("list.filter_map_corresponding/3: mismatched list arguments", 58);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module169)
	MR_init_entry1(fn__list__filter_map_corresponding3_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__filter_map_corresponding3_4_0);
	MR_init_label6(fn__list__filter_map_corresponding3_4_0,65,8,10,6,2,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_map_corresponding3'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__filter_map_corresponding3_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(fn__list__filter_map_corresponding3_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r6,0,0)) {
		MR_GOTO_LAB(fn__list__filter_map_corresponding3_4_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r7,0,0)) {
		MR_GOTO_LAB(fn__list__filter_map_corresponding3_4_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r8,0,0)) {
		MR_GOTO_LAB(fn__list__filter_map_corresponding3_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r8;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r7;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r6;
	MR_sv(1) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r5;
	MR_sv(4) = MR_tempr4;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__list__filter_map_corresponding3_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__fn__list__filter_map_corresponding3_4_0_i8);
MR_def_label(fn__list__filter_map_corresponding3_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__list__filter_map_corresponding3_4_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	}
	MR_np_localcall_lab(fn__list__filter_map_corresponding3_4_0,
		fn__list__filter_map_corresponding3_4_0_i10);
MR_def_label(fn__list__filter_map_corresponding3_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(fn__list__filter_map_corresponding3_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(fn__list__filter_map_corresponding3_4_0_i65);
MR_def_label(fn__list__filter_map_corresponding3_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(fn__list__filter_map_corresponding3_4_0_i14);
	}
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(fn__list__filter_map_corresponding3_4_0_i14);
	}
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(fn__list__filter_map_corresponding3_4_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(fn__list__filter_map_corresponding3_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r1, 1) = MR_r4;
	MR_r2 = (MR_Word) MR_string_const("list.filter_map_corresponding3: mismatched list arguments", 57);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module170)
	MR_init_entry1(list__map_corresponding_foldl_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding_foldl_6_0);
	MR_init_label4(list__map_corresponding_foldl_6_0,3,9,10,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding_foldl_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_foldl_6_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_foldl_6_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r8;
	MR_proceed();
MR_def_label(list__map_corresponding_foldl_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_foldl_6_0_i8);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_tempr3 = MR_r6;
	MR_sv(7) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r8;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_corresponding_foldl_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__list__map_corresponding_foldl_6_0_i9);
MR_def_label(list__map_corresponding_foldl_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr2;
	}
	MR_np_localcall_lab(list__map_corresponding_foldl_6_0,
		list__map_corresponding_foldl_6_0_i10);
MR_def_label(list__map_corresponding_foldl_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(list__map_corresponding_foldl_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.map_corresponding_foldl: mismatched list arguments", 55);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module171)
	MR_init_entry1(list__map_corresponding_foldl_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding_foldl_6_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding_foldl_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_corresponding_foldl_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module172)
	MR_init_entry1(list__map_corresponding_foldl_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding_foldl_6_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding_foldl_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_corresponding_foldl_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module173)
	MR_init_entry1(list__map_corresponding_foldl_6_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding_foldl_6_3);
	MR_init_label7(list__map_corresponding_foldl_6_3,52,51,9,11,8,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl'/6 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding_foldl_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_foldl_6_3_i51);
	}
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_foldl_6_3_i52);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r8;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map_corresponding_foldl_6_3,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("list.map_corresponding_foldl: mismatched list arguments", 55);
	MR_np_call_localret_ent(require__error_1_0,
		list__map_corresponding_foldl_6_3_i2);
MR_def_label(list__map_corresponding_foldl_6_3,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_foldl_6_3_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_tempr3 = MR_r6;
	MR_sv(7) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r8;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_corresponding_foldl_6_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__list__map_corresponding_foldl_6_3_i9);
MR_def_label(list__map_corresponding_foldl_6_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_corresponding_foldl_6_3_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr2;
	}
	MR_np_localcall_lab(list__map_corresponding_foldl_6_3,
		list__map_corresponding_foldl_6_3_i11);
MR_def_label(list__map_corresponding_foldl_6_3,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_corresponding_foldl_6_3_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(list__map_corresponding_foldl_6_3,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.map_corresponding_foldl: mismatched list arguments", 55);
	MR_np_call_localret_ent(require__error_1_0,
		list__map_corresponding_foldl_6_3_i2);
MR_def_label(list__map_corresponding_foldl_6_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(list__map_corresponding_foldl_6_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module174)
	MR_init_entry1(list__map_corresponding_foldl_6_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding_foldl_6_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl'/6 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding_foldl_6_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_corresponding_foldl_6_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module175)
	MR_init_entry1(list__map_corresponding_foldl_6_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding_foldl_6_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl'/6 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding_foldl_6_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_corresponding_foldl_6_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module176)
	MR_init_entry1(list__map_corresponding_foldl2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding_foldl2_8_0);
	MR_init_label4(list__map_corresponding_foldl2_8_0,3,9,10,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding_foldl2_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_foldl2_8_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_foldl2_8_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r9;
	MR_r3 = MR_r10;
	MR_proceed();
MR_def_label(list__map_corresponding_foldl2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_foldl2_8_0_i8);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_tempr3 = MR_r7;
	MR_sv(8) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_corresponding_foldl2_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__list__map_corresponding_foldl2_8_0_i9);
MR_def_label(list__map_corresponding_foldl2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	}
	MR_np_localcall_lab(list__map_corresponding_foldl2_8_0,
		list__map_corresponding_foldl2_8_0_i10);
MR_def_label(list__map_corresponding_foldl2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(list__map_corresponding_foldl2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.map_corresponding_foldl2: mismatched list arguments", 56);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module177)
	MR_init_entry1(list__map_corresponding_foldl2_8_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding_foldl2_8_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl2'/8 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding_foldl2_8_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_corresponding_foldl2_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module178)
	MR_init_entry1(list__map_corresponding_foldl2_8_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding_foldl2_8_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl2'/8 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding_foldl2_8_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_corresponding_foldl2_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module179)
	MR_init_entry1(list__map_corresponding_foldl2_8_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding_foldl2_8_3);
	MR_init_label7(list__map_corresponding_foldl2_8_3,52,51,9,11,8,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl2'/8 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding_foldl2_8_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_foldl2_8_3_i51);
	}
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_foldl2_8_3_i52);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map_corresponding_foldl2_8_3,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("list.map_corresponding_foldl2: mismatched list arguments", 56);
	MR_np_call_localret_ent(require__error_1_0,
		list__map_corresponding_foldl2_8_3_i2);
MR_def_label(list__map_corresponding_foldl2_8_3,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_foldl2_8_3_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_tempr3 = MR_r7;
	MR_sv(8) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_corresponding_foldl2_8_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__list__map_corresponding_foldl2_8_3_i9);
MR_def_label(list__map_corresponding_foldl2_8_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_corresponding_foldl2_8_3_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	}
	MR_np_localcall_lab(list__map_corresponding_foldl2_8_3,
		list__map_corresponding_foldl2_8_3_i11);
MR_def_label(list__map_corresponding_foldl2_8_3,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_corresponding_foldl2_8_3_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(list__map_corresponding_foldl2_8_3,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.map_corresponding_foldl2: mismatched list arguments", 56);
	MR_np_call_localret_ent(require__error_1_0,
		list__map_corresponding_foldl2_8_3_i2);
MR_def_label(list__map_corresponding_foldl2_8_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(list__map_corresponding_foldl2_8_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module180)
	MR_init_entry1(list__map_corresponding_foldl2_8_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding_foldl2_8_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl2'/8 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding_foldl2_8_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_corresponding_foldl2_8_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module181)
	MR_init_entry1(list__map_corresponding_foldl2_8_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding_foldl2_8_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl2'/8 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding_foldl2_8_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_corresponding_foldl2_8_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module182)
	MR_init_entry1(list__map_corresponding_foldl3_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding_foldl3_10_0);
	MR_init_label4(list__map_corresponding_foldl3_10_0,3,9,10,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl3'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding_foldl3_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_foldl3_10_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_foldl3_10_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r10;
	MR_r3 = MR_r11;
	MR_r4 = MR_r12;
	MR_proceed();
MR_def_label(list__map_corresponding_foldl3_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_foldl3_10_0_i8);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r7;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r9;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_tempr3 = MR_r8;
	MR_sv(9) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	MR_r6 = MR_r12;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_corresponding_foldl3_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__list__map_corresponding_foldl3_10_0_i9);
MR_def_label(list__map_corresponding_foldl3_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(1);
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_r12 = MR_tempr4;
	}
	MR_np_localcall_lab(list__map_corresponding_foldl3_10_0,
		list__map_corresponding_foldl3_10_0_i10);
MR_def_label(list__map_corresponding_foldl3_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(list__map_corresponding_foldl3_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.map_corresponding_foldl2: mismatched list arguments", 56);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module183)
	MR_init_entry1(list__map_corresponding_foldl3_10_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding_foldl3_10_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl3'/10 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding_foldl3_10_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_corresponding_foldl3_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module184)
	MR_init_entry1(list__map_corresponding_foldl3_10_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding_foldl3_10_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl3'/10 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding_foldl3_10_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_corresponding_foldl3_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module185)
	MR_init_entry1(list__map_corresponding_foldl3_10_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding_foldl3_10_3);
	MR_init_label7(list__map_corresponding_foldl3_10_3,52,51,9,11,8,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl3'/10 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding_foldl3_10_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_foldl3_10_3_i51);
	}
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_foldl3_10_3_i52);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map_corresponding_foldl3_10_3,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("list.map_corresponding_foldl2: mismatched list arguments", 56);
	MR_np_call_localret_ent(require__error_1_0,
		list__map_corresponding_foldl3_10_3_i2);
MR_def_label(list__map_corresponding_foldl3_10_3,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map_corresponding_foldl3_10_3_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r7;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r9;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_tempr3 = MR_r8;
	MR_sv(9) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	MR_r6 = MR_r12;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_corresponding_foldl3_10_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__list__map_corresponding_foldl3_10_3_i9);
MR_def_label(list__map_corresponding_foldl3_10_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_corresponding_foldl3_10_3_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(1);
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_r12 = MR_tempr4;
	}
	MR_np_localcall_lab(list__map_corresponding_foldl3_10_3,
		list__map_corresponding_foldl3_10_3_i11);
MR_def_label(list__map_corresponding_foldl3_10_3,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_corresponding_foldl3_10_3_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
	}
MR_def_label(list__map_corresponding_foldl3_10_3,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.map_corresponding_foldl2: mismatched list arguments", 56);
	MR_np_call_localret_ent(require__error_1_0,
		list__map_corresponding_foldl3_10_3_i2);
MR_def_label(list__map_corresponding_foldl3_10_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(list__map_corresponding_foldl3_10_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module186)
	MR_init_entry1(list__map_corresponding_foldl3_10_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding_foldl3_10_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl3'/10 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding_foldl3_10_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_corresponding_foldl3_10_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module187)
	MR_init_entry1(list__map_corresponding_foldl3_10_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding_foldl3_10_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding_foldl3'/10 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding_foldl3_10_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_corresponding_foldl3_10_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module188)
	MR_init_entry1(list__map_corresponding3_foldl_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding3_foldl_7_0);
	MR_init_label4(list__map_corresponding3_foldl_7_0,48,3,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding3_foldl'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding3_foldl_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map_corresponding3_foldl_7_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map_corresponding3_foldl_7_0_i48);
	}
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map_corresponding3_foldl_7_0_i48);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r10;
	MR_proceed();
MR_def_label(list__map_corresponding3_foldl_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.map_corresponding3_foldl: mismatched list arguments", 56);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(list__map_corresponding3_foldl_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map_corresponding3_foldl_7_0_i48);
	}
	if (MR_LTAGS_TEST(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map_corresponding3_foldl_7_0_i48);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r9;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_tempr3 = MR_r7;
	MR_sv(8) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r8;
	MR_sv(9) = MR_tfield(1, MR_tempr4, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	MR_r5 = MR_r10;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_corresponding3_foldl_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__list__map_corresponding3_foldl_7_0_i17);
MR_def_label(list__map_corresponding3_foldl_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_tempr2;
	}
	MR_np_localcall_lab(list__map_corresponding3_foldl_7_0,
		list__map_corresponding3_foldl_7_0_i18);
MR_def_label(list__map_corresponding3_foldl_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module189)
	MR_init_entry1(list__map_corresponding3_foldl_7_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding3_foldl_7_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding3_foldl'/7 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding3_foldl_7_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_corresponding3_foldl_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module190)
	MR_init_entry1(list__map_corresponding3_foldl_7_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding3_foldl_7_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding3_foldl'/7 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding3_foldl_7_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_corresponding3_foldl_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module191)
	MR_init_entry1(list__map_corresponding3_foldl_7_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding3_foldl_7_3);
	MR_init_label10(list__map_corresponding3_foldl_7_3,89,88,10,87,17,19,16,14,24,2)
	MR_init_label1(list__map_corresponding3_foldl_7_3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding3_foldl'/7 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding3_foldl_7_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map_corresponding3_foldl_7_3_i87);
	}
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map_corresponding3_foldl_7_3_i88);
	}
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map_corresponding3_foldl_7_3_i89);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r10;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map_corresponding3_foldl_7_3,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("list.map_corresponding3_foldl: mismatched list arguments", 56);
	MR_np_call_localret_ent(require__error_1_0,
		list__map_corresponding3_foldl_7_3_i2);
MR_def_label(list__map_corresponding3_foldl_7_3,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map_corresponding3_foldl_7_3_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("list.map_corresponding3_foldl: mismatched list arguments", 56);
	MR_np_call_localret_ent(require__error_1_0,
		list__map_corresponding3_foldl_7_3_i2);
MR_def_label(list__map_corresponding3_foldl_7_3,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.map_corresponding3_foldl: mismatched list arguments", 56);
	MR_np_call_localret_ent(require__error_1_0,
		list__map_corresponding3_foldl_7_3_i2);
MR_def_label(list__map_corresponding3_foldl_7_3,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map_corresponding3_foldl_7_3_i14);
	}
	if (MR_LTAGS_TEST(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map_corresponding3_foldl_7_3_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r9;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_tempr3 = MR_r7;
	MR_sv(8) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r8;
	MR_sv(9) = MR_tfield(1, MR_tempr4, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	MR_r5 = MR_r10;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_corresponding3_foldl_7_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__list__map_corresponding3_foldl_7_3_i17);
MR_def_label(list__map_corresponding3_foldl_7_3,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_corresponding3_foldl_7_3_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_tempr2;
	}
	MR_np_localcall_lab(list__map_corresponding3_foldl_7_3,
		list__map_corresponding3_foldl_7_3_i19);
MR_def_label(list__map_corresponding3_foldl_7_3,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_corresponding3_foldl_7_3_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
	}
MR_def_label(list__map_corresponding3_foldl_7_3,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.map_corresponding3_foldl: mismatched list arguments", 56);
	MR_np_call_localret_ent(require__error_1_0,
		list__map_corresponding3_foldl_7_3_i2);
MR_def_label(list__map_corresponding3_foldl_7_3,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map_corresponding3_foldl_7_3_i24);
	}
	MR_r1 = (MR_Word) MR_string_const("list.map_corresponding3_foldl: mismatched list arguments", 56);
	MR_np_call_localret_ent(require__error_1_0,
		list__map_corresponding3_foldl_7_3_i2);
MR_def_label(list__map_corresponding3_foldl_7_3,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.map_corresponding3_foldl: mismatched list arguments", 56);
	MR_np_call_localret_ent(require__error_1_0,
		list__map_corresponding3_foldl_7_3_i2);
MR_def_label(list__map_corresponding3_foldl_7_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(list__map_corresponding3_foldl_7_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module192)
	MR_init_entry1(list__map_corresponding3_foldl_7_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding3_foldl_7_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding3_foldl'/7 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding3_foldl_7_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_corresponding3_foldl_7_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module193)
	MR_init_entry1(list__map_corresponding3_foldl_7_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_corresponding3_foldl_7_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_corresponding3_foldl'/7 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_corresponding3_foldl_7_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_corresponding3_foldl_7_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module194)
	MR_init_entry1(list__foldl_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_4_0);
	MR_init_label3(list__foldl_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(list__foldl_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(list__foldl_4_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(5);
MR_def_label(list__foldl_4_0,3)
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
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__foldl_4_0_i4);
MR_def_label(list__foldl_4_0,4)
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
	MR_GOTO_LAB(list__foldl_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module195)
	MR_init_entry1(list__foldl_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_4_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module196)
	MR_init_entry1(list__foldl_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_4_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module197)
	MR_init_entry1(list__foldl_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_4_3);
	MR_init_label4(list__foldl_4_3,18,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(list__foldl_4_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(list__foldl_4_3_i3);
	}
	MR_r2 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(list__foldl_4_3,3)
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
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl_4_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__foldl_4_3_i4);
MR_def_label(list__foldl_4_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__foldl_4_3_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(list__foldl_4_3_i18);
	}
MR_def_label(list__foldl_4_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module198)
	MR_init_entry1(list__foldl_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_4_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl_4_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module199)
	MR_init_entry1(list__foldl_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_4_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl_4_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module200)
	MR_init_entry1(list__foldl_4_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_4_6);
	MR_init_label3(list__foldl_4_6,12,3,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_4_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(list__foldl_4_6_i12);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(list__foldl_4_6,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.foldl/4-6", 4,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r5;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl_4_6));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__foldl_4_6_i3);
MR_def_label(list__foldl_4_6,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(3);
	MR_r2 = MR_fv(4);
	MR_r3 = MR_fv(1);
	MR_r4 = MR_fv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_localcall_lab(list__foldl_4_6,
		list__foldl_4_6_i11);
MR_def_label(list__foldl_4_6,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module201)
	MR_init_entry1(list__foldl_4_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_4_7);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_4_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl_4_6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module202)
	MR_init_entry1(list__foldl_4_8);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_4_8);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 8 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_4_8);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl_4_6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module203)
	MR_init_entry1(list__foldl_4_9);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_4_9);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 9 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_4_9);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module204)
	MR_init_entry1(list__foldl_4_10);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_4_10);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 10 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_4_10);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module205)
	MR_init_entry1(fn__list__foldl_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__foldl_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__foldl_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_tailcall_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module206)
	MR_init_entry1(list__foldr_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldr_4_0);
	MR_init_label2(list__foldr_4_0,13,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldr_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(list__foldr_4_0_i13);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(list__foldr_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r4, 0);
	MR_r4 = MR_tfield(1, MR_r4, 1);
	MR_np_localcall_lab(list__foldr_4_0,
		list__foldr_4_0_i4);
MR_def_label(list__foldr_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldr_4_0));
	MR_np_tailcall_ent(do_call_closure_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module207)
	MR_init_entry1(list__foldr_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldr_4_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldr_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldr_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module208)
	MR_init_entry1(list__foldr_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldr_4_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldr_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldr_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module209)
	MR_init_entry1(list__foldr_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldr_4_3);
	MR_init_label3(list__foldr_4_3,22,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldr_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(list__foldr_4_3_i22);
	}
	MR_r2 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__foldr_4_3,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r4, 0);
	MR_r4 = MR_tfield(1, MR_r4, 1);
	MR_np_localcall_lab(list__foldr_4_3,
		list__foldr_4_3_i4);
MR_def_label(list__foldr_4_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__foldr_4_3_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldr_4_3));
	MR_np_tailcall_ent(do_call_closure_2);
	}
MR_def_label(list__foldr_4_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module210)
	MR_init_entry1(list__foldr_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldr_4_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldr_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldr_4_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module211)
	MR_init_entry1(list__foldr_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldr_4_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldr_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldr_4_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module212)
	MR_init_entry1(list__foldr_4_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldr_4_6);
	MR_init_label3(list__foldr_4_6,12,3,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldr_4_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(list__foldr_4_6_i12);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(list__foldr_4_6,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.foldr/4-6", 2,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r3;
	MR_fv(2) = MR_tfield(1, MR_r4, 0);
	MR_r4 = MR_tfield(1, MR_r4, 1);
	MR_np_localcall_lab(list__foldr_4_6,
		list__foldr_4_6_i3);
MR_def_label(list__foldr_4_6,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(1);
	MR_r2 = MR_fv(2);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldr_4_6));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__foldr_4_6_i11);
MR_def_label(list__foldr_4_6,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module213)
	MR_init_entry1(list__foldr_4_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldr_4_7);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldr_4_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldr_4_6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module214)
	MR_init_entry1(list__foldr_4_8);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldr_4_8);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 8 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldr_4_8);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldr_4_6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module215)
	MR_init_entry1(list__foldr_4_9);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldr_4_9);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 9 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldr_4_9);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldr_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module216)
	MR_init_entry1(list__foldr_4_10);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldr_4_10);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 10 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldr_4_10);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldr_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module217)
	MR_init_entry1(fn__list__foldr_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__foldr_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__foldr_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_tailcall_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module218)
	MR_init_entry1(list__foldl2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_6_0);
	MR_init_label3(list__foldl2_6_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(list__foldl2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(list__foldl2_6_0_i3);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(6);
MR_def_label(list__foldl2_6_0,3)
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
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__list__foldl2_6_0_i4);
MR_def_label(list__foldl2_6_0,4)
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
	MR_GOTO_LAB(list__foldl2_6_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module219)
	MR_init_entry1(list__foldl2_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_6_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module220)
	MR_init_entry1(list__foldl2_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_6_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module221)
	MR_init_entry1(list__foldl2_6_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_6_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module222)
	MR_init_entry1(list__foldl2_6_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_6_4);
	MR_init_label4(list__foldl2_6_4,18,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_6_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(list__foldl2_6_4,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(list__foldl2_6_4_i3);
	}
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(list__foldl2_6_4,3)
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
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl2_6_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__list__foldl2_6_4_i4);
MR_def_label(list__foldl2_6_4,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__foldl2_6_4_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(list__foldl2_6_4_i18);
	}
MR_def_label(list__foldl2_6_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module223)
	MR_init_entry1(list__foldl2_6_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_6_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_6_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl2_6_4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module224)
	MR_init_entry1(list__foldl2_6_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_6_6);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_6_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl2_6_4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module225)
	MR_init_entry1(list__foldl2_6_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_6_7);
	MR_init_label3(list__foldl2_6_7,12,3,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_6_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(list__foldl2_6_7_i12);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_proceed();
MR_def_label(list__foldl2_6_7,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.foldl2/6-7", 5,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_fv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl2_6_7));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__list__foldl2_6_7_i3);
MR_def_label(list__foldl2_6_7,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_fv(4);
	MR_r3 = MR_fv(5);
	MR_r4 = MR_fv(1);
	MR_r5 = MR_fv(2);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_localcall_lab(list__foldl2_6_7,
		list__foldl2_6_7_i11);
MR_def_label(list__foldl2_6_7,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module226)
	MR_init_entry1(list__foldl2_6_8);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_6_8);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 8 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_6_8);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl2_6_7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module227)
	MR_init_entry1(list__foldl2_6_9);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_6_9);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 9 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_6_9);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module228)
	MR_init_entry1(list__foldl2_6_10);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_6_10);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 10 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_6_10);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module229)
	MR_init_entry1(list__foldl2_6_11);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_6_11);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 11 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_6_11);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module230)
	MR_init_entry1(list__foldl2_6_12);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_6_12);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 12 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_6_12);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module231)
	MR_init_entry1(list__foldl3_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl3_8_0);
	MR_init_label3(list__foldl3_8_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl3_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(list__foldl3_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__foldl3_8_0_i3);
	}
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_decr_sp_and_return(7);
MR_def_label(list__foldl3_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_r5 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl3_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__list__foldl3_8_0_i4);
MR_def_label(list__foldl3_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(list__foldl3_8_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module232)
	MR_init_entry1(list__foldl3_8_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl3_8_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3'/8 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl3_8_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl3_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module233)
	MR_init_entry1(list__foldl3_8_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl3_8_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3'/8 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl3_8_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl3_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module234)
	MR_init_entry1(list__foldl3_8_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl3_8_3);
	MR_init_label4(list__foldl3_8_3,18,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3'/8 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl3_8_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(list__foldl3_8_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__foldl3_8_3_i3);
	}
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(list__foldl3_8_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_r5 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl3_8_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__list__foldl3_8_3_i4);
MR_def_label(list__foldl3_8_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__foldl3_8_3_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(list__foldl3_8_3_i18);
	}
MR_def_label(list__foldl3_8_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module235)
	MR_init_entry1(list__foldl3_8_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl3_8_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3'/8 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl3_8_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl3_8_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module236)
	MR_init_entry1(list__foldl3_8_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl3_8_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3'/8 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl3_8_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl3_8_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module237)
	MR_init_entry1(list__foldl3_8_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl3_8_6);
	MR_init_label3(list__foldl3_8_6,12,3,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3'/8 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl3_8_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__foldl3_8_6_i12);
	}
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_proceed();
MR_def_label(list__foldl3_8_6,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.foldl3/8-6", 6,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_fv(5) = MR_r3;
	MR_fv(6) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_r5 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl3_8_6));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__list__foldl3_8_6_i3);
MR_def_label(list__foldl3_8_6,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_fv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_fv(5);
	MR_r4 = MR_fv(6);
	MR_r5 = MR_fv(1);
	MR_r6 = MR_fv(2);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	}
	MR_np_localcall_lab(list__foldl3_8_6,
		list__foldl3_8_6_i11);
MR_def_label(list__foldl3_8_6,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module238)
	MR_init_entry1(list__foldl3_8_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl3_8_7);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3'/8 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl3_8_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl3_8_6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module239)
	MR_init_entry1(list__foldl3_8_8);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl3_8_8);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3'/8 mode 8 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl3_8_8);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl3_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module240)
	MR_init_entry1(list__foldl3_8_9);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl3_8_9);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3'/8 mode 9 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl3_8_9);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl3_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module241)
	MR_init_entry1(list__foldl4_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl4_10_0);
	MR_init_label3(list__foldl4_10_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl4'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl4_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(list__foldl4_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__foldl4_10_0_i3);
	}
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_decr_sp_and_return(8);
MR_def_label(list__foldl4_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	MR_r6 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl4_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__list__foldl4_10_0_i4);
MR_def_label(list__foldl4_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_r11 = MR_tempr4;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(list__foldl4_10_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module242)
	MR_init_entry1(list__foldl4_10_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl4_10_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl4'/10 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl4_10_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl4_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module243)
	MR_init_entry1(list__foldl4_10_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl4_10_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl4'/10 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl4_10_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl4_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module244)
	MR_init_entry1(list__foldl4_10_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl4_10_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl4'/10 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl4_10_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl4_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module245)
	MR_init_entry1(list__foldl4_10_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl4_10_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl4'/10 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl4_10_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl4_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module246)
	MR_init_entry1(list__foldl4_10_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl4_10_5);
	MR_init_label4(list__foldl4_10_5,18,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl4'/10 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl4_10_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(list__foldl4_10_5,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__foldl4_10_5_i3);
	}
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(list__foldl4_10_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	MR_r6 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl4_10_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__list__foldl4_10_5_i4);
MR_def_label(list__foldl4_10_5,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__foldl4_10_5_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_r11 = MR_tempr4;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(list__foldl4_10_5_i18);
	}
MR_def_label(list__foldl4_10_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module247)
	MR_init_entry1(list__foldl4_10_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl4_10_6);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl4'/10 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl4_10_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl4_10_5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module248)
	MR_init_entry1(list__foldl4_10_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl4_10_7);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl4'/10 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl4_10_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl4_10_5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module249)
	MR_init_entry1(list__foldl4_10_8);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl4_10_8);
	MR_init_label3(list__foldl4_10_8,12,3,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl4'/10 mode 8 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl4_10_8);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__foldl4_10_8_i12);
	}
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_proceed();
MR_def_label(list__foldl4_10_8,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.foldl4/10-8", 7,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_fv(5) = MR_r3;
	MR_fv(6) = MR_r4;
	MR_fv(7) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	MR_r6 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl4_10_8));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__list__foldl4_10_8_i3);
MR_def_label(list__foldl4_10_8,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_fv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_fv(5);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_fv(6);
	MR_r5 = MR_fv(7);
	MR_r6 = MR_fv(1);
	MR_r7 = MR_fv(2);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_r11 = MR_tempr4;
	}
	MR_np_localcall_lab(list__foldl4_10_8,
		list__foldl4_10_8_i11);
MR_def_label(list__foldl4_10_8,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module250)
	MR_init_entry1(list__foldl4_10_9);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl4_10_9);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl4'/10 mode 9 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl4_10_9);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl4_10_8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module251)
	MR_init_entry1(list__foldl5_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl5_12_0);
	MR_init_label3(list__foldl5_12_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl5'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl5_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(list__foldl5_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__foldl5_12_0_i3);
	}
	MR_r1 = MR_r9;
	MR_r2 = MR_r10;
	MR_r3 = MR_r11;
	MR_r4 = MR_r12;
	MR_r5 = MR_r13;
	MR_decr_sp_and_return(9);
MR_def_label(list__foldl5_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	MR_r6 = MR_r11;
	MR_r7 = MR_r12;
	MR_r8 = MR_r13;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl5_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__list__foldl5_12_0_i4);
MR_def_label(list__foldl5_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_r12 = MR_tempr4;
	MR_r13 = MR_tempr5;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(list__foldl5_12_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module252)
	MR_init_entry1(list__foldl5_12_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl5_12_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl5'/12 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl5_12_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl5_12_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module253)
	MR_init_entry1(list__foldl5_12_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl5_12_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl5'/12 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl5_12_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl5_12_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module254)
	MR_init_entry1(list__foldl5_12_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl5_12_3);
	MR_init_label4(list__foldl5_12_3,18,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl5'/12 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl5_12_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(list__foldl5_12_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__foldl5_12_3_i3);
	}
	MR_r2 = MR_r9;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(list__foldl5_12_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	MR_r6 = MR_r11;
	MR_r7 = MR_r12;
	MR_r8 = MR_r13;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl5_12_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__list__foldl5_12_3_i4);
MR_def_label(list__foldl5_12_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__foldl5_12_3_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(2);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_r12 = MR_tempr4;
	MR_r13 = MR_tempr5;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(list__foldl5_12_3_i18);
	}
MR_def_label(list__foldl5_12_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module255)
	MR_init_entry1(list__foldl5_12_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl5_12_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl5'/12 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl5_12_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl5_12_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module256)
	MR_init_entry1(list__foldl5_12_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl5_12_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl5'/12 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl5_12_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl5_12_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module257)
	MR_init_entry1(list__foldl5_12_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl5_12_6);
	MR_init_label3(list__foldl5_12_6,12,3,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl5'/12 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl5_12_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__foldl5_12_6_i12);
	}
	MR_r1 = MR_r9;
	MR_r2 = MR_r10;
	MR_r3 = MR_r11;
	MR_r4 = MR_r12;
	MR_r5 = MR_r13;
	MR_proceed();
MR_def_label(list__foldl5_12_6,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.foldl5/12-6", 8,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_fv(5) = MR_r3;
	MR_fv(6) = MR_r4;
	MR_fv(7) = MR_r5;
	MR_fv(8) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	MR_r6 = MR_r11;
	MR_r7 = MR_r12;
	MR_r8 = MR_r13;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl5_12_6));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__list__foldl5_12_6_i3);
MR_def_label(list__foldl5_12_6,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_fv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_fv(5);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_fv(6);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_fv(7);
	MR_r6 = MR_fv(8);
	MR_r7 = MR_fv(1);
	MR_r8 = MR_fv(2);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_r12 = MR_tempr4;
	MR_r13 = MR_tempr5;
	}
	MR_np_localcall_lab(list__foldl5_12_6,
		list__foldl5_12_6_i11);
MR_def_label(list__foldl5_12_6,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module258)
	MR_init_entry1(list__foldl5_12_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl5_12_7);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl5'/12 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl5_12_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl5_12_6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module259)
	MR_init_entry1(list__foldl5_12_8);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl5_12_8);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl5'/12 mode 8 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl5_12_8);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl5_12_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module260)
	MR_init_entry1(list__foldl5_12_9);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl5_12_9);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl5'/12 mode 9 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl5_12_9);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl5_12_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module261)
	MR_init_entry1(list__foldl6_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl6_14_0);
	MR_init_label3(list__foldl6_14_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl6'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl6_14_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(list__foldl6_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__foldl6_14_0_i3);
	}
	MR_r1 = MR_r10;
	MR_r2 = MR_r11;
	MR_r3 = MR_r12;
	MR_r4 = MR_r13;
	MR_r5 = MR_r14;
	MR_r6 = MR_r15;
	MR_decr_sp_and_return(10);
MR_def_label(list__foldl6_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r8;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r9;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	MR_r6 = MR_r12;
	MR_r7 = MR_r13;
	MR_r8 = MR_r14;
	MR_r9 = MR_r15;
	MR_r2 = (MR_Integer) 7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl6_14_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__list__foldl6_14_0_i4);
MR_def_label(list__foldl6_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_tempr6 = MR_r6;
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_r14 = MR_tempr5;
	MR_r15 = MR_tempr6;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(list__foldl6_14_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module262)
	MR_init_entry1(list__foldl6_14_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl6_14_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl6'/14 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl6_14_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl6_14_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module263)
	MR_init_entry1(list__foldl6_14_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl6_14_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl6'/14 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl6_14_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl6_14_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module264)
	MR_init_entry1(list__foldl6_14_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl6_14_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl6'/14 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl6_14_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl6_14_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module265)
	MR_init_entry1(list__foldl6_14_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl6_14_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl6'/14 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl6_14_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl6_14_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module266)
	MR_init_entry1(list__foldl6_14_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl6_14_5);
	MR_init_label4(list__foldl6_14_5,18,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl6'/14 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl6_14_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(list__foldl6_14_5,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__foldl6_14_5_i3);
	}
	MR_r2 = MR_r10;
	MR_r3 = MR_r11;
	MR_r4 = MR_r12;
	MR_r5 = MR_r13;
	MR_r6 = MR_r14;
	MR_r7 = MR_r15;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(list__foldl6_14_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r8;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r9;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	MR_r6 = MR_r12;
	MR_r7 = MR_r13;
	MR_r8 = MR_r14;
	MR_r9 = MR_r15;
	MR_r2 = (MR_Integer) 7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl6_14_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__list__foldl6_14_5_i4);
MR_def_label(list__foldl6_14_5,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__foldl6_14_5_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(8);
	MR_tempr6 = MR_r7;
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_r14 = MR_tempr5;
	MR_r15 = MR_tempr6;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(list__foldl6_14_5_i18);
	}
MR_def_label(list__foldl6_14_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module267)
	MR_init_entry1(list__foldl6_14_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl6_14_6);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl6'/14 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl6_14_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl6_14_5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module268)
	MR_init_entry1(list__foldl6_14_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl6_14_7);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl6'/14 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl6_14_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl6_14_5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module269)
	MR_init_entry1(list__foldl6_14_8);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl6_14_8);
	MR_init_label3(list__foldl6_14_8,12,3,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl6'/14 mode 8 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl6_14_8);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__foldl6_14_8_i12);
	}
	MR_r1 = MR_r10;
	MR_r2 = MR_r11;
	MR_r3 = MR_r12;
	MR_r4 = MR_r13;
	MR_r5 = MR_r14;
	MR_r6 = MR_r15;
	MR_proceed();
MR_def_label(list__foldl6_14_8,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.foldl6/14-8", 9,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r8;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r9;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_fv(5) = MR_r3;
	MR_fv(6) = MR_r4;
	MR_fv(7) = MR_r5;
	MR_fv(8) = MR_r6;
	MR_fv(9) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	MR_r6 = MR_r12;
	MR_r7 = MR_r13;
	MR_r8 = MR_r14;
	MR_r9 = MR_r15;
	MR_r2 = (MR_Integer) 7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl6_14_8));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__list__foldl6_14_8_i3);
MR_def_label(list__foldl6_14_8,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_fv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_fv(5);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_fv(6);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_fv(7);
	MR_tempr6 = MR_r6;
	MR_r6 = MR_fv(8);
	MR_r7 = MR_fv(9);
	MR_r8 = MR_fv(1);
	MR_r9 = MR_fv(2);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_r14 = MR_tempr5;
	MR_r15 = MR_tempr6;
	}
	MR_np_localcall_lab(list__foldl6_14_8,
		list__foldl6_14_8_i11);
MR_def_label(list__foldl6_14_8,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module270)
	MR_init_entry1(list__foldl_corresponding_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_corresponding_5_0);
	MR_init_label4(list__foldl_corresponding_5_0,28,3,9,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_corresponding'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_corresponding_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(list__foldl_corresponding_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(list__foldl_corresponding_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__foldl_corresponding_5_0_i8);
	}
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(7);
MR_def_label(list__foldl_corresponding_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r6,0,0)) {
		MR_GOTO_LAB(list__foldl_corresponding_5_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_tempr3 = MR_r5;
	MR_sv(6) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl_corresponding_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__list__foldl_corresponding_5_0_i9);
MR_def_label(list__foldl_corresponding_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(list__foldl_corresponding_5_0_i28);
	}
MR_def_label(list__foldl_corresponding_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl_corresponding/5: mismatched list arguments", 53);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module271)
	MR_init_entry1(list__foldl_corresponding_5_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_corresponding_5_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_corresponding'/5 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_corresponding_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl_corresponding_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module272)
	MR_init_entry1(list__foldl_corresponding_5_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_corresponding_5_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_corresponding'/5 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_corresponding_5_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl_corresponding_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module273)
	MR_init_entry1(list__foldl_corresponding_5_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_corresponding_5_3);
	MR_init_label7(list__foldl_corresponding_5_3,32,5,3,9,18,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_corresponding'/5 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_corresponding_5_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(list__foldl_corresponding_5_3,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(list__foldl_corresponding_5_3_i3);
	}
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__foldl_corresponding_5_3_i5);
	}
	MR_r2 = MR_r7;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(list__foldl_corresponding_5_3,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl_corresponding/5: mismatched list arguments", 53);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl_corresponding_5_3_i18);
MR_def_label(list__foldl_corresponding_5_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r6,0,0)) {
		MR_GOTO_LAB(list__foldl_corresponding_5_3_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_tempr3 = MR_r5;
	MR_sv(6) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl_corresponding_5_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__list__foldl_corresponding_5_3_i9);
MR_def_label(list__foldl_corresponding_5_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__foldl_corresponding_5_3_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(list__foldl_corresponding_5_3_i32);
	}
MR_def_label(list__foldl_corresponding_5_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(list__foldl_corresponding_5_3,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl_corresponding/5: mismatched list arguments", 53);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl_corresponding_5_3_i18);
MR_def_label(list__foldl_corresponding_5_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module274)
	MR_init_entry1(list__foldl_corresponding_5_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_corresponding_5_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_corresponding'/5 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_corresponding_5_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl_corresponding_5_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module275)
	MR_init_entry1(list__foldl_corresponding_5_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_corresponding_5_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_corresponding'/5 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_corresponding_5_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl_corresponding_5_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module276)
	MR_init_entry1(list__foldl_corresponding_5_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_corresponding_5_6);
	MR_init_label5(list__foldl_corresponding_5_6,25,24,8,7,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_corresponding'/5 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_corresponding_5_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(list__foldl_corresponding_5_6_i24);
	}
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__foldl_corresponding_5_6_i25);
	}
	MR_r1 = MR_r7;
	MR_proceed();
MR_def_label(list__foldl_corresponding_5_6,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.foldl_corresponding/5-6", 6,
		MR_ENTRY(MR_do_fail));
	MR_r1 = (MR_Word) MR_string_const("list.foldl_corresponding/5: mismatched list arguments", 53);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl_corresponding_5_6_i23);
MR_def_label(list__foldl_corresponding_5_6,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.foldl_corresponding/5-6", 6,
		MR_ENTRY(MR_do_fail));
	if (MR_LTAGS_TEST(MR_r6,0,0)) {
		MR_GOTO_LAB(list__foldl_corresponding_5_6_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r4;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_fv(5) = MR_r3;
	MR_tempr3 = MR_r5;
	MR_fv(6) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl_corresponding_5_6));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__list__foldl_corresponding_5_6_i8);
MR_def_label(list__foldl_corresponding_5_6,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(3);
	MR_r2 = MR_fv(4);
	MR_r3 = MR_fv(5);
	MR_r4 = MR_fv(1);
	MR_r5 = MR_fv(6);
	MR_r6 = MR_fv(2);
	MR_r7 = MR_tempr1;
	}
	MR_np_localcall_lab(list__foldl_corresponding_5_6,
		list__foldl_corresponding_5_6_i23);
MR_def_label(list__foldl_corresponding_5_6,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl_corresponding/5: mismatched list arguments", 53);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl_corresponding_5_6_i23);
MR_def_label(list__foldl_corresponding_5_6,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module277)
	MR_init_entry1(list__foldl_corresponding_5_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_corresponding_5_7);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_corresponding'/5 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_corresponding_5_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl_corresponding_5_6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module278)
	MR_init_entry1(list__foldl_corresponding_5_8);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_corresponding_5_8);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_corresponding'/5 mode 8 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_corresponding_5_8);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl_corresponding_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module279)
	MR_init_entry1(list__foldl_corresponding_5_9);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_corresponding_5_9);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_corresponding'/5 mode 9 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_corresponding_5_9);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl_corresponding_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module280)
	MR_init_entry1(list__foldl2_corresponding_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_corresponding_7_0);
	MR_init_label4(list__foldl2_corresponding_7_0,28,3,9,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2_corresponding'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_corresponding_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(list__foldl2_corresponding_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__foldl2_corresponding_7_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__foldl2_corresponding_7_0_i8);
	}
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_decr_sp_and_return(8);
MR_def_label(list__foldl2_corresponding_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r7,0,0)) {
		MR_GOTO_LAB(list__foldl2_corresponding_7_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_tempr3 = MR_r6;
	MR_sv(7) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r8;
	MR_r5 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl2_corresponding_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__list__foldl2_corresponding_7_0_i9);
MR_def_label(list__foldl2_corresponding_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(list__foldl2_corresponding_7_0_i28);
	}
MR_def_label(list__foldl2_corresponding_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl2_corresponding/7: mismatched list arguments", 54);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module281)
	MR_init_entry1(list__foldl2_corresponding_7_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_corresponding_7_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2_corresponding'/7 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_corresponding_7_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl2_corresponding_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module282)
	MR_init_entry1(list__foldl2_corresponding_7_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_corresponding_7_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2_corresponding'/7 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_corresponding_7_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl2_corresponding_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module283)
	MR_init_entry1(list__foldl2_corresponding_7_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_corresponding_7_3);
	MR_init_label7(list__foldl2_corresponding_7_3,32,5,3,9,18,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2_corresponding'/7 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_corresponding_7_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(list__foldl2_corresponding_7_3,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__foldl2_corresponding_7_3_i3);
	}
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__foldl2_corresponding_7_3_i5);
	}
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(list__foldl2_corresponding_7_3,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl2_corresponding/7: mismatched list arguments", 54);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl2_corresponding_7_3_i18);
MR_def_label(list__foldl2_corresponding_7_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r7,0,0)) {
		MR_GOTO_LAB(list__foldl2_corresponding_7_3_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_tempr3 = MR_r6;
	MR_sv(7) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r8;
	MR_r5 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl2_corresponding_7_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__list__foldl2_corresponding_7_3_i9);
MR_def_label(list__foldl2_corresponding_7_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__foldl2_corresponding_7_3_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(list__foldl2_corresponding_7_3_i32);
	}
MR_def_label(list__foldl2_corresponding_7_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(list__foldl2_corresponding_7_3,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl2_corresponding/7: mismatched list arguments", 54);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl2_corresponding_7_3_i18);
MR_def_label(list__foldl2_corresponding_7_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module284)
	MR_init_entry1(list__foldl2_corresponding_7_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_corresponding_7_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2_corresponding'/7 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_corresponding_7_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl2_corresponding_7_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module285)
	MR_init_entry1(list__foldl2_corresponding_7_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_corresponding_7_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2_corresponding'/7 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_corresponding_7_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl2_corresponding_7_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module286)
	MR_init_entry1(list__foldl2_corresponding_7_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_corresponding_7_6);
	MR_init_label5(list__foldl2_corresponding_7_6,25,24,8,7,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2_corresponding'/7 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_corresponding_7_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__foldl2_corresponding_7_6_i24);
	}
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__foldl2_corresponding_7_6_i25);
	}
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_proceed();
MR_def_label(list__foldl2_corresponding_7_6,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.foldl2_corresponding/7-6", 7,
		MR_ENTRY(MR_do_fail));
	MR_r1 = (MR_Word) MR_string_const("list.foldl2_corresponding/7: mismatched list arguments", 54);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl2_corresponding_7_6_i23);
MR_def_label(list__foldl2_corresponding_7_6,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.foldl2_corresponding/7-6", 7,
		MR_ENTRY(MR_do_fail));
	if (MR_LTAGS_TEST(MR_r7,0,0)) {
		MR_GOTO_LAB(list__foldl2_corresponding_7_6_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r5;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_fv(5) = MR_r3;
	MR_fv(6) = MR_r4;
	MR_tempr3 = MR_r6;
	MR_fv(7) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r8;
	MR_r5 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl2_corresponding_7_6));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__list__foldl2_corresponding_7_6_i8);
MR_def_label(list__foldl2_corresponding_7_6,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_fv(4);
	MR_r3 = MR_fv(5);
	MR_r4 = MR_fv(6);
	MR_r5 = MR_fv(1);
	MR_r6 = MR_fv(7);
	MR_r7 = MR_fv(2);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	}
	MR_np_localcall_lab(list__foldl2_corresponding_7_6,
		list__foldl2_corresponding_7_6_i23);
MR_def_label(list__foldl2_corresponding_7_6,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl2_corresponding/7: mismatched list arguments", 54);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl2_corresponding_7_6_i23);
MR_def_label(list__foldl2_corresponding_7_6,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module287)
	MR_init_entry1(list__foldl2_corresponding_7_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_corresponding_7_7);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2_corresponding'/7 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_corresponding_7_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl2_corresponding_7_6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module288)
	MR_init_entry1(list__foldl2_corresponding_7_8);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_corresponding_7_8);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2_corresponding'/7 mode 8 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_corresponding_7_8);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl2_corresponding_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module289)
	MR_init_entry1(list__foldl2_corresponding_7_9);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_corresponding_7_9);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2_corresponding'/7 mode 9 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_corresponding_7_9);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl2_corresponding_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module290)
	MR_init_entry1(list__foldl3_corresponding_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl3_corresponding_9_0);
	MR_init_label4(list__foldl3_corresponding_9_0,28,3,9,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3_corresponding'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl3_corresponding_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(list__foldl3_corresponding_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__foldl3_corresponding_9_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__foldl3_corresponding_9_0_i8);
	}
	MR_r1 = MR_r9;
	MR_r2 = MR_r10;
	MR_r3 = MR_r11;
	MR_decr_sp_and_return(9);
MR_def_label(list__foldl3_corresponding_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r8,0,0)) {
		MR_GOTO_LAB(list__foldl3_corresponding_9_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_tempr3 = MR_r7;
	MR_sv(8) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	MR_r6 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl3_corresponding_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__list__foldl3_corresponding_9_0_i9);
MR_def_label(list__foldl3_corresponding_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(list__foldl3_corresponding_9_0_i28);
	}
MR_def_label(list__foldl3_corresponding_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl3_corresponding/9: mismatched list arguments", 54);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module291)
	MR_init_entry1(list__foldl3_corresponding_9_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl3_corresponding_9_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3_corresponding'/9 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl3_corresponding_9_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl3_corresponding_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module292)
	MR_init_entry1(list__foldl3_corresponding_9_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl3_corresponding_9_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3_corresponding'/9 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl3_corresponding_9_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl3_corresponding_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module293)
	MR_init_entry1(list__foldl3_corresponding_9_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl3_corresponding_9_3);
	MR_init_label7(list__foldl3_corresponding_9_3,32,5,3,9,18,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3_corresponding'/9 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl3_corresponding_9_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(list__foldl3_corresponding_9_3,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__foldl3_corresponding_9_3_i3);
	}
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__foldl3_corresponding_9_3_i5);
	}
	MR_r2 = MR_r9;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(list__foldl3_corresponding_9_3,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl3_corresponding/9: mismatched list arguments", 54);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl3_corresponding_9_3_i18);
MR_def_label(list__foldl3_corresponding_9_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r8,0,0)) {
		MR_GOTO_LAB(list__foldl3_corresponding_9_3_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_tempr3 = MR_r7;
	MR_sv(8) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	MR_r6 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl3_corresponding_9_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__list__foldl3_corresponding_9_3_i9);
MR_def_label(list__foldl3_corresponding_9_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__foldl3_corresponding_9_3_i1);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(6);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(list__foldl3_corresponding_9_3_i32);
	}
MR_def_label(list__foldl3_corresponding_9_3,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(list__foldl3_corresponding_9_3,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl3_corresponding/9: mismatched list arguments", 54);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl3_corresponding_9_3_i18);
MR_def_label(list__foldl3_corresponding_9_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module294)
	MR_init_entry1(list__foldl3_corresponding_9_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl3_corresponding_9_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3_corresponding'/9 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl3_corresponding_9_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl3_corresponding_9_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module295)
	MR_init_entry1(list__foldl3_corresponding_9_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl3_corresponding_9_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3_corresponding'/9 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl3_corresponding_9_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl3_corresponding_9_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module296)
	MR_init_entry1(list__foldl_corresponding3_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_corresponding3_6_0);
	MR_init_label4(list__foldl_corresponding3_6_0,61,47,3,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_corresponding3'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_corresponding3_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(list__foldl_corresponding3_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__foldl_corresponding3_6_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__foldl_corresponding3_6_0_i47);
	}
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__foldl_corresponding3_6_0_i47);
	}
	MR_r1 = MR_r9;
	MR_decr_sp_and_return(9);
MR_def_label(list__foldl_corresponding3_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl_corresponding3/6: mismatched list arguments", 54);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(list__foldl_corresponding3_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r7,0,0)) {
		MR_GOTO_LAB(list__foldl_corresponding3_6_0_i47);
	}
	if (MR_LTAGS_TEST(MR_r8,0,0)) {
		MR_GOTO_LAB(list__foldl_corresponding3_6_0_i47);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_tempr3 = MR_r6;
	MR_sv(7) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r7;
	MR_sv(8) = MR_tfield(1, MR_tempr4, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	MR_r5 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl_corresponding3_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__list__foldl_corresponding3_6_0_i17);
MR_def_label(list__foldl_corresponding3_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(2);
	MR_r9 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(list__foldl_corresponding3_6_0_i61);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module297)
	MR_init_entry1(list__foldl_corresponding3_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_corresponding3_6_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_corresponding3'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_corresponding3_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl_corresponding3_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module298)
	MR_init_entry1(list__foldl_corresponding3_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_corresponding3_6_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_corresponding3'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_corresponding3_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl_corresponding3_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module299)
	MR_init_entry1(list__foldl_corresponding3_6_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_corresponding3_6_3);
	MR_init_label10(list__foldl_corresponding3_6_3,69,7,5,10,3,17,42,16,14,23)
	MR_init_label1(list__foldl_corresponding3_6_3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_corresponding3'/6 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_corresponding3_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(list__foldl_corresponding3_6_3,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__foldl_corresponding3_6_3_i3);
	}
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__foldl_corresponding3_6_3_i5);
	}
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__foldl_corresponding3_6_3_i7);
	}
	MR_r2 = MR_r9;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(list__foldl_corresponding3_6_3,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl_corresponding3/6: mismatched list arguments", 54);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl_corresponding3_6_3_i42);
MR_def_label(list__foldl_corresponding3_6_3,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__foldl_corresponding3_6_3_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("list.foldl_corresponding3/6: mismatched list arguments", 54);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl_corresponding3_6_3_i42);
MR_def_label(list__foldl_corresponding3_6_3,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl_corresponding3/6: mismatched list arguments", 54);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl_corresponding3_6_3_i42);
MR_def_label(list__foldl_corresponding3_6_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r7,0,0)) {
		MR_GOTO_LAB(list__foldl_corresponding3_6_3_i14);
	}
	if (MR_LTAGS_TEST(MR_r8,0,0)) {
		MR_GOTO_LAB(list__foldl_corresponding3_6_3_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_tempr3 = MR_r6;
	MR_sv(7) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r7;
	MR_sv(8) = MR_tfield(1, MR_tempr4, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	MR_r5 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl_corresponding3_6_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__list__foldl_corresponding3_6_3_i17);
MR_def_label(list__foldl_corresponding3_6_3,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__foldl_corresponding3_6_3_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(2);
	MR_r9 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(list__foldl_corresponding3_6_3_i69);
	}
MR_def_label(list__foldl_corresponding3_6_3,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(list__foldl_corresponding3_6_3,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl_corresponding3/6: mismatched list arguments", 54);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl_corresponding3_6_3_i42);
MR_def_label(list__foldl_corresponding3_6_3,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__foldl_corresponding3_6_3_i23);
	}
	MR_r1 = (MR_Word) MR_string_const("list.foldl_corresponding3/6: mismatched list arguments", 54);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl_corresponding3_6_3_i42);
MR_def_label(list__foldl_corresponding3_6_3,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl_corresponding3/6: mismatched list arguments", 54);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl_corresponding3_6_3_i42);
MR_def_label(list__foldl_corresponding3_6_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module300)
	MR_init_entry1(list__foldl_corresponding3_6_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_corresponding3_6_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_corresponding3'/6 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_corresponding3_6_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl_corresponding3_6_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module301)
	MR_init_entry1(list__foldl_corresponding3_6_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl_corresponding3_6_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_corresponding3'/6 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl_corresponding3_6_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl_corresponding3_6_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module302)
	MR_init_entry1(list__foldl2_corresponding3_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_corresponding3_8_0);
	MR_init_label4(list__foldl2_corresponding3_8_0,61,47,3,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2_corresponding3'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_corresponding3_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(list__foldl2_corresponding3_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__foldl2_corresponding3_8_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__foldl2_corresponding3_8_0_i47);
	}
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__foldl2_corresponding3_8_0_i47);
	}
	MR_r1 = MR_r10;
	MR_r2 = MR_r11;
	MR_decr_sp_and_return(10);
MR_def_label(list__foldl2_corresponding3_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl2_corresponding3/8: mismatched list arguments", 55);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(list__foldl2_corresponding3_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r8,0,0)) {
		MR_GOTO_LAB(list__foldl2_corresponding3_8_0_i47);
	}
	if (MR_LTAGS_TEST(MR_r9,0,0)) {
		MR_GOTO_LAB(list__foldl2_corresponding3_8_0_i47);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r9;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_tempr3 = MR_r7;
	MR_sv(8) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r8;
	MR_sv(9) = MR_tfield(1, MR_tempr4, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	MR_r5 = MR_r10;
	MR_r6 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl2_corresponding3_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__list__foldl2_corresponding3_8_0_i17);
MR_def_label(list__foldl2_corresponding3_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(list__foldl2_corresponding3_8_0_i61);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module303)
	MR_init_entry1(list__foldl2_corresponding3_8_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_corresponding3_8_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2_corresponding3'/8 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_corresponding3_8_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl2_corresponding3_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module304)
	MR_init_entry1(list__foldl2_corresponding3_8_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl2_corresponding3_8_2);
	MR_init_label10(list__foldl2_corresponding3_8_2,69,7,5,10,3,17,42,16,14,23)
	MR_init_label1(list__foldl2_corresponding3_8_2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2_corresponding3'/8 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl2_corresponding3_8_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(list__foldl2_corresponding3_8_2,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__foldl2_corresponding3_8_2_i3);
	}
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__foldl2_corresponding3_8_2_i5);
	}
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__foldl2_corresponding3_8_2_i7);
	}
	MR_r2 = MR_r10;
	MR_r3 = MR_r11;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(list__foldl2_corresponding3_8_2,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl2_corresponding3/8: mismatched list arguments", 55);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl2_corresponding3_8_2_i42);
MR_def_label(list__foldl2_corresponding3_8_2,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__foldl2_corresponding3_8_2_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("list.foldl2_corresponding3/8: mismatched list arguments", 55);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl2_corresponding3_8_2_i42);
MR_def_label(list__foldl2_corresponding3_8_2,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl2_corresponding3/8: mismatched list arguments", 55);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl2_corresponding3_8_2_i42);
MR_def_label(list__foldl2_corresponding3_8_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r8,0,0)) {
		MR_GOTO_LAB(list__foldl2_corresponding3_8_2_i14);
	}
	if (MR_LTAGS_TEST(MR_r9,0,0)) {
		MR_GOTO_LAB(list__foldl2_corresponding3_8_2_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r9;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_tempr3 = MR_r7;
	MR_sv(8) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r8;
	MR_sv(9) = MR_tfield(1, MR_tempr4, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	MR_r4 = MR_tfield(1, MR_tempr2, 0);
	MR_r5 = MR_r10;
	MR_r6 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl2_corresponding3_8_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__list__foldl2_corresponding3_8_2_i17);
MR_def_label(list__foldl2_corresponding3_8_2,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__foldl2_corresponding3_8_2_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(list__foldl2_corresponding3_8_2_i69);
	}
MR_def_label(list__foldl2_corresponding3_8_2,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(list__foldl2_corresponding3_8_2,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl2_corresponding3/8: mismatched list arguments", 55);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl2_corresponding3_8_2_i42);
MR_def_label(list__foldl2_corresponding3_8_2,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__foldl2_corresponding3_8_2_i23);
	}
	MR_r1 = (MR_Word) MR_string_const("list.foldl2_corresponding3/8: mismatched list arguments", 55);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl2_corresponding3_8_2_i42);
MR_def_label(list__foldl2_corresponding3_8_2,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl2_corresponding3/8: mismatched list arguments", 55);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl2_corresponding3_8_2_i42);
MR_def_label(list__foldl2_corresponding3_8_2,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module305)
	MR_init_entry1(list__foldl3_corresponding3_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl3_corresponding3_10_0);
	MR_init_label4(list__foldl3_corresponding3_10_0,61,47,3,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3_corresponding3'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl3_corresponding3_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(list__foldl3_corresponding3_10_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__foldl3_corresponding3_10_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__foldl3_corresponding3_10_0_i47);
	}
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(list__foldl3_corresponding3_10_0_i47);
	}
	MR_r1 = MR_r11;
	MR_r2 = MR_r12;
	MR_r3 = MR_r13;
	MR_decr_sp_and_return(11);
MR_def_label(list__foldl3_corresponding3_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl3_corresponding3/10: mismatched list arguments", 56);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(list__foldl3_corresponding3_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r9,0,0)) {
		MR_GOTO_LAB(list__foldl3_corresponding3_10_0_i47);
	}
	if (MR_LTAGS_TEST(MR_r10,0,0)) {
		MR_GOTO_LAB(list__foldl3_corresponding3_10_0_i47);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r7;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r10;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_tempr3 = MR_r8;
	MR_sv(9) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r9;
	MR_sv(10) = MR_tfield(1, MR_tempr4, 1);
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr3, 0);
	MR_r4 = MR_tfield(1, MR_tempr4, 0);
	MR_r5 = MR_tfield(1, MR_tempr2, 0);
	MR_r6 = MR_r11;
	MR_r7 = MR_r12;
	MR_r8 = MR_r13;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl3_corresponding3_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__list__foldl3_corresponding3_10_0_i17);
MR_def_label(list__foldl3_corresponding3_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(2);
	MR_r11 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r13 = MR_tempr3;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(list__foldl3_corresponding3_10_0_i61);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module306)
	MR_init_entry1(list__foldl3_corresponding3_10_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl3_corresponding3_10_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3_corresponding3'/10 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl3_corresponding3_10_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl3_corresponding3_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module307)
	MR_init_entry1(list__foldl3_corresponding3_10_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl3_corresponding3_10_2);
	MR_init_label10(list__foldl3_corresponding3_10_2,69,7,5,10,3,17,42,16,14,23)
	MR_init_label1(list__foldl3_corresponding3_10_2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl3_corresponding3'/10 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl3_corresponding3_10_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(list__foldl3_corresponding3_10_2,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__foldl3_corresponding3_10_2_i3);
	}
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__foldl3_corresponding3_10_2_i5);
	}
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(list__foldl3_corresponding3_10_2_i7);
	}
	MR_r2 = MR_r11;
	MR_r3 = MR_r12;
	MR_r4 = MR_r13;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(11);
MR_def_label(list__foldl3_corresponding3_10_2,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl3_corresponding3/10: mismatched list arguments", 56);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl3_corresponding3_10_2_i42);
MR_def_label(list__foldl3_corresponding3_10_2,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(list__foldl3_corresponding3_10_2_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("list.foldl3_corresponding3/10: mismatched list arguments", 56);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl3_corresponding3_10_2_i42);
MR_def_label(list__foldl3_corresponding3_10_2,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl3_corresponding3/10: mismatched list arguments", 56);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl3_corresponding3_10_2_i42);
MR_def_label(list__foldl3_corresponding3_10_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r9,0,0)) {
		MR_GOTO_LAB(list__foldl3_corresponding3_10_2_i14);
	}
	if (MR_LTAGS_TEST(MR_r10,0,0)) {
		MR_GOTO_LAB(list__foldl3_corresponding3_10_2_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r7;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r10;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_tempr3 = MR_r8;
	MR_sv(9) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r9;
	MR_sv(10) = MR_tfield(1, MR_tempr4, 1);
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr3, 0);
	MR_r4 = MR_tfield(1, MR_tempr4, 0);
	MR_r5 = MR_tfield(1, MR_tempr2, 0);
	MR_r6 = MR_r11;
	MR_r7 = MR_r12;
	MR_r8 = MR_r13;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl3_corresponding3_10_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__list__foldl3_corresponding3_10_2_i17);
MR_def_label(list__foldl3_corresponding3_10_2,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__foldl3_corresponding3_10_2_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(2);
	MR_r11 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r13 = MR_tempr3;
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(list__foldl3_corresponding3_10_2_i69);
	}
MR_def_label(list__foldl3_corresponding3_10_2,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(11);
MR_def_label(list__foldl3_corresponding3_10_2,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl3_corresponding3/10: mismatched list arguments", 56);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl3_corresponding3_10_2_i42);
MR_def_label(list__foldl3_corresponding3_10_2,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(list__foldl3_corresponding3_10_2_i23);
	}
	MR_r1 = (MR_Word) MR_string_const("list.foldl3_corresponding3/10: mismatched list arguments", 56);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl3_corresponding3_10_2_i42);
MR_def_label(list__foldl3_corresponding3_10_2,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl3_corresponding3/10: mismatched list arguments", 56);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl3_corresponding3_10_2_i42);
MR_def_label(list__foldl3_corresponding3_10_2,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module308)
	MR_init_entry1(list__foldl4_corresponding3_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl4_corresponding3_12_0);
	MR_init_label4(list__foldl4_corresponding3_12_0,61,47,3,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl4_corresponding3'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl4_corresponding3_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(list__foldl4_corresponding3_12_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__foldl4_corresponding3_12_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(list__foldl4_corresponding3_12_0_i47);
	}
	if (MR_LTAGS_TESTR(MR_r11,0,0)) {
		MR_GOTO_LAB(list__foldl4_corresponding3_12_0_i47);
	}
	MR_r1 = MR_r12;
	MR_r2 = MR_r13;
	MR_r3 = MR_r14;
	MR_r4 = MR_r15;
	MR_decr_sp_and_return(12);
MR_def_label(list__foldl4_corresponding3_12_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl4_corresponding3/12: mismatched list arguments", 56);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(list__foldl4_corresponding3_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r10,0,0)) {
		MR_GOTO_LAB(list__foldl4_corresponding3_12_0_i47);
	}
	if (MR_LTAGS_TEST(MR_r11,0,0)) {
		MR_GOTO_LAB(list__foldl4_corresponding3_12_0_i47);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r8;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r11;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_tempr3 = MR_r9;
	MR_sv(10) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r10;
	MR_sv(11) = MR_tfield(1, MR_tempr4, 1);
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr3, 0);
	MR_r4 = MR_tfield(1, MR_tempr4, 0);
	MR_r5 = MR_tfield(1, MR_tempr2, 0);
	MR_r6 = MR_r12;
	MR_r7 = MR_r13;
	MR_r8 = MR_r14;
	MR_r9 = MR_r15;
	MR_r2 = (MR_Integer) 7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl4_corresponding3_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__list__foldl4_corresponding3_12_0_i17);
MR_def_label(list__foldl4_corresponding3_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(11);
	MR_r11 = MR_sv(2);
	MR_r12 = MR_tempr1;
	MR_r13 = MR_tempr2;
	MR_r14 = MR_tempr3;
	MR_r15 = MR_tempr4;
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(list__foldl4_corresponding3_12_0_i61);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module309)
	MR_init_entry1(list__foldl4_corresponding3_12_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl4_corresponding3_12_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl4_corresponding3'/12 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl4_corresponding3_12_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__foldl4_corresponding3_12_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module310)
	MR_init_entry1(list__foldl4_corresponding3_12_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__foldl4_corresponding3_12_2);
	MR_init_label10(list__foldl4_corresponding3_12_2,69,7,5,10,3,17,42,16,14,23)
	MR_init_label1(list__foldl4_corresponding3_12_2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl4_corresponding3'/12 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__foldl4_corresponding3_12_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(list__foldl4_corresponding3_12_2,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__foldl4_corresponding3_12_2_i3);
	}
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(list__foldl4_corresponding3_12_2_i5);
	}
	if (MR_LTAGS_TESTR(MR_r11,0,0)) {
		MR_GOTO_LAB(list__foldl4_corresponding3_12_2_i7);
	}
	MR_r2 = MR_r12;
	MR_r3 = MR_r13;
	MR_r4 = MR_r14;
	MR_r5 = MR_r15;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(12);
MR_def_label(list__foldl4_corresponding3_12_2,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl4_corresponding3/12: mismatched list arguments", 56);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl4_corresponding3_12_2_i42);
MR_def_label(list__foldl4_corresponding3_12_2,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r11,0,0)) {
		MR_GOTO_LAB(list__foldl4_corresponding3_12_2_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("list.foldl4_corresponding3/12: mismatched list arguments", 56);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl4_corresponding3_12_2_i42);
MR_def_label(list__foldl4_corresponding3_12_2,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl4_corresponding3/12: mismatched list arguments", 56);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl4_corresponding3_12_2_i42);
MR_def_label(list__foldl4_corresponding3_12_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r10,0,0)) {
		MR_GOTO_LAB(list__foldl4_corresponding3_12_2_i14);
	}
	if (MR_LTAGS_TEST(MR_r11,0,0)) {
		MR_GOTO_LAB(list__foldl4_corresponding3_12_2_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r8;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r11;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_tempr3 = MR_r9;
	MR_sv(10) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r10;
	MR_sv(11) = MR_tfield(1, MR_tempr4, 1);
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr3, 0);
	MR_r4 = MR_tfield(1, MR_tempr4, 0);
	MR_r5 = MR_tfield(1, MR_tempr2, 0);
	MR_r6 = MR_r12;
	MR_r7 = MR_r13;
	MR_r8 = MR_r14;
	MR_r9 = MR_r15;
	MR_r2 = (MR_Integer) 7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__foldl4_corresponding3_12_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__list__foldl4_corresponding3_12_2_i17);
MR_def_label(list__foldl4_corresponding3_12_2,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__foldl4_corresponding3_12_2_i1);
	}
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(1);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(11);
	MR_r11 = MR_sv(2);
	MR_r12 = MR_tempr1;
	MR_r13 = MR_tempr2;
	MR_r14 = MR_tempr3;
	MR_r15 = MR_tempr4;
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(list__foldl4_corresponding3_12_2_i69);
	}
MR_def_label(list__foldl4_corresponding3_12_2,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(12);
MR_def_label(list__foldl4_corresponding3_12_2,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl4_corresponding3/12: mismatched list arguments", 56);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl4_corresponding3_12_2_i42);
MR_def_label(list__foldl4_corresponding3_12_2,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r11,0,0)) {
		MR_GOTO_LAB(list__foldl4_corresponding3_12_2_i23);
	}
	MR_r1 = (MR_Word) MR_string_const("list.foldl4_corresponding3/12: mismatched list arguments", 56);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl4_corresponding3_12_2_i42);
MR_def_label(list__foldl4_corresponding3_12_2,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.foldl4_corresponding3/12: mismatched list arguments", 56);
	MR_np_call_localret_ent(require__error_1_0,
		list__foldl4_corresponding3_12_2_i42);
MR_def_label(list__foldl4_corresponding3_12_2,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module311)
	MR_init_entry1(list__map_foldl_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl_5_0);
	MR_init_label3(list__map_foldl_5_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(list__map_foldl_5_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r6;
	MR_proceed();
MR_def_label(list__map_foldl_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_foldl_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__map_foldl_5_0_i4);
MR_def_label(list__map_foldl_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr2;
	}
	MR_np_localcall_lab(list__map_foldl_5_0,
		list__map_foldl_5_0_i5);
MR_def_label(list__map_foldl_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module312)
	MR_init_entry1(list__map_foldl_5_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl_5_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl'/5 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module313)
	MR_init_entry1(list__map_foldl_5_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl_5_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl'/5 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl_5_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module314)
	MR_init_entry1(list__map_foldl_5_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl_5_3);
	MR_init_label4(list__map_foldl_5_3,32,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl'/5 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl_5_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(list__map_foldl_5_3_i32);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map_foldl_5_3,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_foldl_5_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__map_foldl_5_3_i4);
MR_def_label(list__map_foldl_5_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_foldl_5_3_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr2;
	}
	MR_np_localcall_lab(list__map_foldl_5_3,
		list__map_foldl_5_3_i6);
MR_def_label(list__map_foldl_5_3,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_foldl_5_3_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(list__map_foldl_5_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module315)
	MR_init_entry1(list__map_foldl_5_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl_5_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl'/5 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl_5_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl_5_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module316)
	MR_init_entry1(list__map_foldl_5_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl_5_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl'/5 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl_5_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl_5_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module317)
	MR_init_entry1(list__map_foldl_5_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl_5_6);
	MR_init_label4(list__map_foldl_5_6,28,3,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl'/5 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl_5_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(list__map_foldl_5_6,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(list__map_foldl_5_6_i3);
	}
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__map_foldl_5_6_i1);
	}
	MR_r2 = MR_r7;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(list__map_foldl_5_6,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r6,0,0)) {
		MR_GOTO_LAB(list__map_foldl_5_6_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r6;
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tfield(1, MR_tempr3, 0);
	MR_r4 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_foldl_5_6));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__list__map_foldl_5_6_i6);
MR_def_label(list__map_foldl_5_6,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_foldl_5_6_i1);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(list__map_foldl_5_6_i28);
	}
MR_def_label(list__map_foldl_5_6,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module318)
	MR_init_entry1(list__map_foldl_5_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl_5_7);
	MR_init_label3(list__map_foldl_5_7,16,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl'/5 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl_5_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(list__map_foldl_5_7_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r6;
	MR_proceed();
MR_def_label(list__map_foldl_5_7,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.map_foldl/5-7", 6,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(4) = MR_r1;
	MR_fv(5) = MR_r2;
	MR_fv(6) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_foldl_5_7));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__map_foldl_5_7_i3);
MR_def_label(list__map_foldl_5_7,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_r1 = MR_fv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_fv(5);
	MR_r3 = MR_fv(6);
	MR_r4 = MR_fv(1);
	MR_r5 = MR_fv(2);
	MR_r6 = MR_tempr1;
	}
	MR_np_localcall_lab(list__map_foldl_5_7,
		list__map_foldl_5_7_i4);
MR_def_label(list__map_foldl_5_7,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module319)
	MR_init_entry1(list__map_foldl_5_8);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl_5_8);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl'/5 mode 8 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl_5_8);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl_5_7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module320)
	MR_init_entry1(list__map_foldl_5_9);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl_5_9);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl'/5 mode 9 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl_5_9);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module321)
	MR_init_entry1(list__map_foldl_5_10);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl_5_10);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl'/5 mode 10 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl_5_10);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module322)
	MR_init_entry1(list__map_foldl_5_11);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl_5_11);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl'/5 mode 11 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl_5_11);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module323)
	MR_init_entry1(list__map_foldl2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl2_7_0);
	MR_init_label3(list__map_foldl2_7_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl2_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__map_foldl2_7_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_proceed();
MR_def_label(list__map_foldl2_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_foldl2_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__list__map_foldl2_7_0_i4);
MR_def_label(list__map_foldl2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	}
	MR_np_localcall_lab(list__map_foldl2_7_0,
		list__map_foldl2_7_0_i5);
MR_def_label(list__map_foldl2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module324)
	MR_init_entry1(list__map_foldl2_7_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl2_7_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl2'/7 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl2_7_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl2_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module325)
	MR_init_entry1(list__map_foldl2_7_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl2_7_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl2'/7 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl2_7_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl2_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module326)
	MR_init_entry1(list__map_foldl2_7_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl2_7_3);
	MR_init_label4(list__map_foldl2_7_3,32,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl2'/7 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl2_7_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__map_foldl2_7_3_i32);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map_foldl2_7_3,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_foldl2_7_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__list__map_foldl2_7_3_i4);
MR_def_label(list__map_foldl2_7_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_foldl2_7_3_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	}
	MR_np_localcall_lab(list__map_foldl2_7_3,
		list__map_foldl2_7_3_i6);
MR_def_label(list__map_foldl2_7_3,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_foldl2_7_3_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(list__map_foldl2_7_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module327)
	MR_init_entry1(list__map_foldl2_7_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl2_7_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl2'/7 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl2_7_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl2_7_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module328)
	MR_init_entry1(list__map_foldl2_7_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl2_7_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl2'/7 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl2_7_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl2_7_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module329)
	MR_init_entry1(list__map_foldl2_7_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl2_7_6);
	MR_init_label4(list__map_foldl2_7_6,28,3,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl2'/7 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl2_7_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(list__map_foldl2_7_6,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__map_foldl2_7_6_i3);
	}
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map_foldl2_7_6_i1);
	}
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(list__map_foldl2_7_6,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map_foldl2_7_6_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r7;
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tfield(1, MR_tempr3, 0);
	MR_r4 = MR_r8;
	MR_r5 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_foldl2_7_6));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__list__map_foldl2_7_6_i6);
MR_def_label(list__map_foldl2_7_6,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_foldl2_7_6_i1);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(list__map_foldl2_7_6_i28);
	}
MR_def_label(list__map_foldl2_7_6,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module330)
	MR_init_entry1(list__map_foldl2_7_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl2_7_7);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl2'/7 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl2_7_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl2_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module331)
	MR_init_entry1(list__map_foldl2_7_8);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl2_7_8);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl2'/7 mode 8 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl2_7_8);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl2_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module332)
	MR_init_entry1(list__map_foldl2_7_9);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl2_7_9);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl2'/7 mode 9 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl2_7_9);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl2_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module333)
	MR_init_entry1(list__map_foldl2_7_10);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl2_7_10);
	MR_init_label3(list__map_foldl2_7_10,16,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl2'/7 mode 10 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl2_7_10);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__map_foldl2_7_10_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_proceed();
MR_def_label(list__map_foldl2_7_10,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.map_foldl2/7-10", 7,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(4) = MR_r1;
	MR_fv(5) = MR_r2;
	MR_fv(6) = MR_r3;
	MR_fv(7) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_foldl2_7_10));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__list__map_foldl2_7_10_i3);
MR_def_label(list__map_foldl2_7_10,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_r1 = MR_fv(4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_fv(5);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_fv(6);
	MR_r4 = MR_fv(7);
	MR_r5 = MR_fv(1);
	MR_r6 = MR_fv(2);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	}
	MR_np_localcall_lab(list__map_foldl2_7_10,
		list__map_foldl2_7_10_i4);
MR_def_label(list__map_foldl2_7_10,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module334)
	MR_init_entry1(list__map_foldl3_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl3_9_0);
	MR_init_label3(list__map_foldl3_9_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl3'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl3_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map_foldl3_9_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_proceed();
MR_def_label(list__map_foldl3_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_foldl3_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__list__map_foldl3_9_0_i4);
MR_def_label(list__map_foldl3_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r10 = MR_tempr4;
	}
	MR_np_localcall_lab(list__map_foldl3_9_0,
		list__map_foldl3_9_0_i5);
MR_def_label(list__map_foldl3_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module335)
	MR_init_entry1(list__map_foldl3_9_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl3_9_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl3'/9 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl3_9_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl3_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module336)
	MR_init_entry1(list__map_foldl3_9_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl3_9_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl3'/9 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl3_9_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl3_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module337)
	MR_init_entry1(list__map_foldl3_9_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl3_9_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl3'/9 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl3_9_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl3_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module338)
	MR_init_entry1(list__map_foldl3_9_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl3_9_4);
	MR_init_label4(list__map_foldl3_9_4,32,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl3'/9 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl3_9_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map_foldl3_9_4_i32);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map_foldl3_9_4,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_foldl3_9_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__list__map_foldl3_9_4_i4);
MR_def_label(list__map_foldl3_9_4,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_foldl3_9_4_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(1);
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r10 = MR_tempr4;
	}
	MR_np_localcall_lab(list__map_foldl3_9_4,
		list__map_foldl3_9_4_i6);
MR_def_label(list__map_foldl3_9_4,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_foldl3_9_4_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(list__map_foldl3_9_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module339)
	MR_init_entry1(list__map_foldl3_9_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl3_9_5);
	MR_init_label3(list__map_foldl3_9_5,16,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl3'/9 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl3_9_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map_foldl3_9_5_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_proceed();
MR_def_label(list__map_foldl3_9_5,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.map_foldl3/9-5", 8,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(4) = MR_r1;
	MR_fv(5) = MR_r2;
	MR_fv(6) = MR_r3;
	MR_fv(7) = MR_r4;
	MR_fv(8) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_foldl3_9_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__list__map_foldl3_9_5_i3);
MR_def_label(list__map_foldl3_9_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_r1 = MR_fv(4);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_fv(5);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_fv(6);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_fv(7);
	MR_r5 = MR_fv(8);
	MR_r6 = MR_fv(1);
	MR_r7 = MR_fv(2);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	}
	MR_np_localcall_lab(list__map_foldl3_9_5,
		list__map_foldl3_9_5_i4);
MR_def_label(list__map_foldl3_9_5,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module340)
	MR_init_entry1(list__map_foldl4_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl4_11_0);
	MR_init_label3(list__map_foldl4_11_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl4'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl4_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map_foldl4_11_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r9;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_proceed();
MR_def_label(list__map_foldl4_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	MR_r6 = MR_r12;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_foldl4_11_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__list__map_foldl4_11_0_i4);
MR_def_label(list__map_foldl4_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(1);
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_r11 = MR_tempr4;
	MR_r12 = MR_tempr5;
	}
	MR_np_localcall_lab(list__map_foldl4_11_0,
		list__map_foldl4_11_0_i5);
MR_def_label(list__map_foldl4_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module341)
	MR_init_entry1(list__map_foldl4_11_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl4_11_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl4'/11 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl4_11_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl4_11_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module342)
	MR_init_entry1(list__map_foldl4_11_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl4_11_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl4'/11 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl4_11_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl4_11_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module343)
	MR_init_entry1(list__map_foldl4_11_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl4_11_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl4'/11 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl4_11_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl4_11_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module344)
	MR_init_entry1(list__map_foldl4_11_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl4_11_4);
	MR_init_label4(list__map_foldl4_11_4,32,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl4'/11 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl4_11_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map_foldl4_11_4_i32);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	MR_r6 = MR_r12;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map_foldl4_11_4,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	MR_r6 = MR_r12;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_foldl4_11_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__list__map_foldl4_11_4_i4);
MR_def_label(list__map_foldl4_11_4,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_foldl4_11_4_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(8);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(1);
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_r11 = MR_tempr4;
	MR_r12 = MR_tempr5;
	}
	MR_np_localcall_lab(list__map_foldl4_11_4,
		list__map_foldl4_11_4_i6);
MR_def_label(list__map_foldl4_11_4,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_foldl4_11_4_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(list__map_foldl4_11_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module345)
	MR_init_entry1(list__map_foldl4_11_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl4_11_5);
	MR_init_label3(list__map_foldl4_11_5,16,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl4'/11 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl4_11_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map_foldl4_11_5_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r9;
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_proceed();
MR_def_label(list__map_foldl4_11_5,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.map_foldl4/11-5", 9,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(4) = MR_r1;
	MR_fv(5) = MR_r2;
	MR_fv(6) = MR_r3;
	MR_fv(7) = MR_r4;
	MR_fv(8) = MR_r5;
	MR_fv(9) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	MR_r6 = MR_r12;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_foldl4_11_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__list__map_foldl4_11_5_i3);
MR_def_label(list__map_foldl4_11_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_r1 = MR_fv(4);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_fv(5);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_fv(6);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_fv(7);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_fv(8);
	MR_r6 = MR_fv(9);
	MR_r7 = MR_fv(1);
	MR_r8 = MR_fv(2);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_r12 = MR_tempr4;
	}
	MR_np_localcall_lab(list__map_foldl4_11_5,
		list__map_foldl4_11_5_i4);
MR_def_label(list__map_foldl4_11_5,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module346)
	MR_init_entry1(list__map_foldl5_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl5_13_0);
	MR_init_label3(list__map_foldl5_13_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl5'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl5_13_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map_foldl5_13_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r10;
	MR_r3 = MR_r11;
	MR_r4 = MR_r12;
	MR_r5 = MR_r13;
	MR_r6 = MR_r14;
	MR_proceed();
MR_def_label(list__map_foldl5_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r8;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r9;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	MR_r6 = MR_r12;
	MR_r7 = MR_r13;
	MR_r8 = MR_r14;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_foldl5_13_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__list__map_foldl5_13_0_i4);
MR_def_label(list__map_foldl5_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(6);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(1);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_tempr6 = MR_r6;
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(2);
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_r12 = MR_tempr4;
	MR_r13 = MR_tempr5;
	MR_r14 = MR_tempr6;
	}
	MR_np_localcall_lab(list__map_foldl5_13_0,
		list__map_foldl5_13_0_i5);
MR_def_label(list__map_foldl5_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module347)
	MR_init_entry1(list__map_foldl5_13_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl5_13_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl5'/13 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl5_13_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl5_13_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module348)
	MR_init_entry1(list__map_foldl5_13_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl5_13_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl5'/13 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl5_13_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl5_13_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module349)
	MR_init_entry1(list__map_foldl5_13_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl5_13_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl5'/13 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl5_13_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl5_13_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module350)
	MR_init_entry1(list__map_foldl5_13_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl5_13_4);
	MR_init_label4(list__map_foldl5_13_4,32,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl5'/13 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl5_13_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map_foldl5_13_4_i32);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	MR_r7 = MR_r14;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map_foldl5_13_4,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r8;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r9;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	MR_r6 = MR_r12;
	MR_r7 = MR_r13;
	MR_r8 = MR_r14;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_foldl5_13_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__list__map_foldl5_13_4_i4);
MR_def_label(list__map_foldl5_13_4,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_foldl5_13_4_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(6);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(1);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(8);
	MR_tempr6 = MR_r7;
	MR_r7 = MR_sv(9);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(2);
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	MR_r12 = MR_tempr4;
	MR_r13 = MR_tempr5;
	MR_r14 = MR_tempr6;
	}
	MR_np_localcall_lab(list__map_foldl5_13_4,
		list__map_foldl5_13_4_i6);
MR_def_label(list__map_foldl5_13_4,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_foldl5_13_4_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
	}
MR_def_label(list__map_foldl5_13_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module351)
	MR_init_entry1(list__map_foldl5_13_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl5_13_5);
	MR_init_label3(list__map_foldl5_13_5,16,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl5'/13 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl5_13_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map_foldl5_13_5_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r10;
	MR_r3 = MR_r11;
	MR_r4 = MR_r12;
	MR_r5 = MR_r13;
	MR_r6 = MR_r14;
	MR_proceed();
MR_def_label(list__map_foldl5_13_5,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.map_foldl5/13-5", 10,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r8;
	MR_fv(2) = MR_tempr1;
	MR_tempr2 = MR_r9;
	MR_fv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(5) = MR_r1;
	MR_fv(6) = MR_r2;
	MR_fv(7) = MR_r3;
	MR_fv(1) = MR_r4;
	MR_fv(8) = MR_r5;
	MR_fv(9) = MR_r6;
	MR_fv(10) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	MR_r6 = MR_r12;
	MR_r7 = MR_r13;
	MR_r8 = MR_r14;
	MR_r2 = (MR_Integer) 6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_foldl5_13_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__list__map_foldl5_13_5_i3);
MR_def_label(list__map_foldl5_13_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(4) = MR_r1;
	MR_r1 = MR_fv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_fv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_fv(7);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_fv(1);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_fv(8);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_fv(9);
	MR_r7 = MR_fv(10);
	MR_r8 = MR_fv(2);
	MR_r9 = MR_fv(3);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_r14 = MR_tempr5;
	}
	MR_np_localcall_lab(list__map_foldl5_13_5,
		list__map_foldl5_13_5_i4);
MR_def_label(list__map_foldl5_13_5,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module352)
	MR_init_entry1(list__map_foldl6_15_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl6_15_0);
	MR_init_label3(list__map_foldl6_15_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl6'/15 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl6_15_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(list__map_foldl6_15_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r11;
	MR_r3 = MR_r12;
	MR_r4 = MR_r13;
	MR_r5 = MR_r14;
	MR_r6 = MR_r15;
	MR_r7 = MR_r16;
	MR_proceed();
MR_def_label(list__map_foldl6_15_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r9;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r10;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_sv(10) = MR_r8;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	MR_r7 = MR_r14;
	MR_r8 = MR_r15;
	MR_r9 = MR_r16;
	MR_r2 = (MR_Integer) 7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_foldl6_15_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__list__map_foldl6_15_0_i4);
MR_def_label(list__map_foldl6_15_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_tempr6 = MR_r6;
	MR_r6 = MR_sv(8);
	MR_tempr7 = MR_r7;
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(10);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(1);
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_r14 = MR_tempr5;
	MR_r15 = MR_tempr6;
	MR_r16 = MR_tempr7;
	}
	MR_np_localcall_lab(list__map_foldl6_15_0,
		list__map_foldl6_15_0_i5);
MR_def_label(list__map_foldl6_15_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module353)
	MR_init_entry1(list__map_foldl6_15_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl6_15_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl6'/15 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl6_15_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl6_15_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module354)
	MR_init_entry1(list__map_foldl6_15_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl6_15_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl6'/15 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl6_15_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl6_15_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module355)
	MR_init_entry1(list__map_foldl6_15_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl6_15_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl6'/15 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl6_15_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map_foldl6_15_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module356)
	MR_init_entry1(list__map_foldl6_15_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl6_15_4);
	MR_init_label4(list__map_foldl6_15_4,32,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl6'/15 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl6_15_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(list__map_foldl6_15_4_i32);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r11;
	MR_r4 = MR_r12;
	MR_r5 = MR_r13;
	MR_r6 = MR_r14;
	MR_r7 = MR_r15;
	MR_r8 = MR_r16;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map_foldl6_15_4,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r9;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r10;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_sv(10) = MR_r8;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	MR_r7 = MR_r14;
	MR_r8 = MR_r15;
	MR_r9 = MR_r16;
	MR_r2 = (MR_Integer) 7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_foldl6_15_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__list__map_foldl6_15_4_i4);
MR_def_label(list__map_foldl6_15_4,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_foldl6_15_4_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(8);
	MR_tempr6 = MR_r7;
	MR_r7 = MR_sv(9);
	MR_tempr7 = MR_r8;
	MR_r8 = MR_sv(10);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(1);
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	MR_r14 = MR_tempr5;
	MR_r15 = MR_tempr6;
	MR_r16 = MR_tempr7;
	}
	MR_np_localcall_lab(list__map_foldl6_15_4,
		list__map_foldl6_15_4_i6);
MR_def_label(list__map_foldl6_15_4,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map_foldl6_15_4_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(11);
	}
MR_def_label(list__map_foldl6_15_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module357)
	MR_init_entry1(list__map_foldl6_15_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map_foldl6_15_5);
	MR_init_label3(list__map_foldl6_15_5,16,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_foldl6'/15 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map_foldl6_15_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(list__map_foldl6_15_5_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r11;
	MR_r3 = MR_r12;
	MR_r4 = MR_r13;
	MR_r5 = MR_r14;
	MR_r6 = MR_r15;
	MR_r7 = MR_r16;
	MR_proceed();
MR_def_label(list__map_foldl6_15_5,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.map_foldl6/15-5", 11,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r9;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r10;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(4) = MR_r1;
	MR_fv(5) = MR_r2;
	MR_fv(6) = MR_r3;
	MR_fv(7) = MR_r4;
	MR_fv(8) = MR_r5;
	MR_fv(9) = MR_r6;
	MR_fv(10) = MR_r7;
	MR_fv(11) = MR_r8;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	MR_r7 = MR_r14;
	MR_r8 = MR_r15;
	MR_r9 = MR_r16;
	MR_r2 = (MR_Integer) 7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map_foldl6_15_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_compact),
		mercury__list__map_foldl6_15_5_i3);
MR_def_label(list__map_foldl6_15_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_r1 = MR_fv(4);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_fv(5);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_fv(6);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_fv(7);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_fv(8);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_fv(9);
	MR_tempr6 = MR_r7;
	MR_r7 = MR_fv(10);
	MR_r8 = MR_fv(11);
	MR_r9 = MR_fv(1);
	MR_r10 = MR_fv(2);
	MR_r11 = MR_tempr1;
	MR_r12 = MR_tempr2;
	MR_r13 = MR_tempr3;
	MR_r14 = MR_tempr4;
	MR_r15 = MR_tempr5;
	MR_r16 = MR_tempr6;
	}
	MR_np_localcall_lab(list__map_foldl6_15_5,
		list__map_foldl6_15_5_i4);
MR_def_label(list__map_foldl6_15_5,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module358)
	MR_init_entry1(list__map2_foldl_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl_6_0);
	MR_init_label3(list__map2_foldl_6_0,18,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__map2_foldl_6_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r7;
	MR_proceed();
MR_def_label(list__map2_foldl_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map2_foldl_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__map2_foldl_6_0_i4);
MR_def_label(list__map2_foldl_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	}
	MR_np_localcall_lab(list__map2_foldl_6_0,
		list__map2_foldl_6_0_i5);
MR_def_label(list__map2_foldl_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module359)
	MR_init_entry1(list__map2_foldl_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl_6_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map2_foldl_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module360)
	MR_init_entry1(list__map2_foldl_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl_6_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map2_foldl_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module361)
	MR_init_entry1(list__map2_foldl_6_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl_6_3);
	MR_init_label4(list__map2_foldl_6_3,33,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl'/6 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__map2_foldl_6_3_i33);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r7;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map2_foldl_6_3,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map2_foldl_6_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__map2_foldl_6_3_i4);
MR_def_label(list__map2_foldl_6_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map2_foldl_6_3_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	}
	MR_np_localcall_lab(list__map2_foldl_6_3,
		list__map2_foldl_6_3_i6);
MR_def_label(list__map2_foldl_6_3,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map2_foldl_6_3_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(list__map2_foldl_6_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module362)
	MR_init_entry1(list__map2_foldl_6_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl_6_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl'/6 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl_6_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map2_foldl_6_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module363)
	MR_init_entry1(list__map2_foldl_6_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl_6_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl'/6 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl_6_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map2_foldl_6_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module364)
	MR_init_entry1(list__map2_foldl_6_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl_6_6);
	MR_init_label3(list__map2_foldl_6_6,17,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl'/6 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl_6_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(list__map2_foldl_6_6_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r7;
	MR_proceed();
MR_def_label(list__map2_foldl_6_6,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.map2_foldl/6-6", 8,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(5) = MR_r1;
	MR_fv(6) = MR_r2;
	MR_fv(7) = MR_r3;
	MR_fv(8) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map2_foldl_6_6));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__map2_foldl_6_6_i3);
MR_def_label(list__map2_foldl_6_6,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_r1 = MR_fv(5);
	MR_r2 = MR_fv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_fv(7);
	MR_r4 = MR_fv(8);
	MR_r5 = MR_fv(1);
	MR_r6 = MR_fv(2);
	MR_r7 = MR_tempr1;
	}
	MR_np_localcall_lab(list__map2_foldl_6_6,
		list__map2_foldl_6_6_i4);
MR_def_label(list__map2_foldl_6_6,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_fv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module365)
	MR_init_entry1(list__map2_foldl_6_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl_6_7);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl'/6 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl_6_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map2_foldl_6_6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module366)
	MR_init_entry1(list__map2_foldl_6_8);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl_6_8);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl'/6 mode 8 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl_6_8);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map2_foldl_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module367)
	MR_init_entry1(list__map2_foldl_6_9);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl_6_9);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl'/6 mode 9 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl_6_9);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map2_foldl_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module368)
	MR_init_entry1(list__map2_foldl2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl2_8_0);
	MR_init_label3(list__map2_foldl2_8_0,18,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl2_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map2_foldl2_8_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_proceed();
MR_def_label(list__map2_foldl2_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map2_foldl2_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__list__map2_foldl2_8_0_i4);
MR_def_label(list__map2_foldl2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_r9 = MR_tempr4;
	}
	MR_np_localcall_lab(list__map2_foldl2_8_0,
		list__map2_foldl2_8_0_i5);
MR_def_label(list__map2_foldl2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module369)
	MR_init_entry1(list__map2_foldl2_8_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl2_8_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl2'/8 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl2_8_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map2_foldl2_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module370)
	MR_init_entry1(list__map2_foldl2_8_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl2_8_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl2'/8 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl2_8_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map2_foldl2_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module371)
	MR_init_entry1(list__map2_foldl2_8_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl2_8_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl2'/8 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl2_8_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map2_foldl2_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module372)
	MR_init_entry1(list__map2_foldl2_8_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl2_8_4);
	MR_init_label4(list__map2_foldl2_8_4,33,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl2'/8 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl2_8_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map2_foldl2_8_4_i33);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r8;
	MR_r5 = MR_r9;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map2_foldl2_8_4,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map2_foldl2_8_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__list__map2_foldl2_8_4_i4);
MR_def_label(list__map2_foldl2_8_4,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map2_foldl2_8_4_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_r9 = MR_tempr4;
	}
	MR_np_localcall_lab(list__map2_foldl2_8_4,
		list__map2_foldl2_8_4_i6);
MR_def_label(list__map2_foldl2_8_4,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map2_foldl2_8_4_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(list__map2_foldl2_8_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module373)
	MR_init_entry1(list__map2_foldl2_8_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl2_8_5);
	MR_init_label3(list__map2_foldl2_8_5,17,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl2'/8 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl2_8_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map2_foldl2_8_5_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_proceed();
MR_def_label(list__map2_foldl2_8_5,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.map2_foldl2/8-5", 9,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(5) = MR_r1;
	MR_fv(6) = MR_r2;
	MR_fv(7) = MR_r3;
	MR_fv(8) = MR_r4;
	MR_fv(9) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map2_foldl2_8_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__list__map2_foldl2_8_5_i3);
MR_def_label(list__map2_foldl2_8_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_r1 = MR_fv(5);
	MR_r2 = MR_fv(6);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_fv(7);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_fv(8);
	MR_r5 = MR_fv(9);
	MR_r6 = MR_fv(1);
	MR_r7 = MR_fv(2);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	}
	MR_np_localcall_lab(list__map2_foldl2_8_5,
		list__map2_foldl2_8_5_i4);
MR_def_label(list__map2_foldl2_8_5,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_fv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module374)
	MR_init_entry1(list__map2_foldl3_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl3_10_0);
	MR_init_label3(list__map2_foldl3_10_0,18,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl3'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl3_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map2_foldl3_10_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	MR_proceed();
MR_def_label(list__map2_foldl3_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map2_foldl3_10_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__list__map2_foldl3_10_0_i4);
MR_def_label(list__map2_foldl3_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r10 = MR_tempr4;
	MR_r11 = MR_tempr5;
	}
	MR_np_localcall_lab(list__map2_foldl3_10_0,
		list__map2_foldl3_10_0_i5);
MR_def_label(list__map2_foldl3_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module375)
	MR_init_entry1(list__map2_foldl3_10_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl3_10_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl3'/10 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl3_10_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map2_foldl3_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module376)
	MR_init_entry1(list__map2_foldl3_10_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl3_10_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl3'/10 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl3_10_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map2_foldl3_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module377)
	MR_init_entry1(list__map2_foldl3_10_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl3_10_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl3'/10 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl3_10_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map2_foldl3_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module378)
	MR_init_entry1(list__map2_foldl3_10_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl3_10_4);
	MR_init_label4(list__map2_foldl3_10_4,33,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl3'/10 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl3_10_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map2_foldl3_10_4_i33);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	MR_r6 = MR_r11;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map2_foldl3_10_4,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map2_foldl3_10_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__list__map2_foldl3_10_4_i4);
MR_def_label(list__map2_foldl3_10_4,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map2_foldl3_10_4_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(8);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_r10 = MR_tempr4;
	MR_r11 = MR_tempr5;
	}
	MR_np_localcall_lab(list__map2_foldl3_10_4,
		list__map2_foldl3_10_4_i6);
MR_def_label(list__map2_foldl3_10_4,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map2_foldl3_10_4_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(list__map2_foldl3_10_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module379)
	MR_init_entry1(list__map2_foldl3_10_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl3_10_5);
	MR_init_label3(list__map2_foldl3_10_5,17,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl3'/10 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl3_10_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map2_foldl3_10_5_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	MR_proceed();
MR_def_label(list__map2_foldl3_10_5,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.map2_foldl3/10-5", 10,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(5) = MR_r1;
	MR_fv(6) = MR_r2;
	MR_fv(7) = MR_r3;
	MR_fv(8) = MR_r4;
	MR_fv(9) = MR_r5;
	MR_fv(10) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map2_foldl3_10_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_4),
		mercury__list__map2_foldl3_10_5_i3);
MR_def_label(list__map2_foldl3_10_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_r1 = MR_fv(5);
	MR_r2 = MR_fv(6);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_fv(7);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_fv(8);
	MR_tempr3 = MR_r5;
	MR_r5 = MR_fv(9);
	MR_r6 = MR_fv(10);
	MR_r7 = MR_fv(1);
	MR_r8 = MR_fv(2);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr3;
	}
	MR_np_localcall_lab(list__map2_foldl3_10_5,
		list__map2_foldl3_10_5_i4);
MR_def_label(list__map2_foldl3_10_5,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_fv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module380)
	MR_init_entry1(list__map2_foldl4_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl4_12_0);
	MR_init_label3(list__map2_foldl4_12_0,18,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl4'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl4_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map2_foldl4_12_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	MR_proceed();
MR_def_label(list__map2_foldl4_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r8;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r9;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map2_foldl4_12_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__list__map2_foldl4_12_0_i4);
MR_def_label(list__map2_foldl4_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_tempr6 = MR_r6;
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_r11 = MR_tempr4;
	MR_r12 = MR_tempr5;
	MR_r13 = MR_tempr6;
	}
	MR_np_localcall_lab(list__map2_foldl4_12_0,
		list__map2_foldl4_12_0_i5);
MR_def_label(list__map2_foldl4_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module381)
	MR_init_entry1(list__map2_foldl4_12_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl4_12_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl4'/12 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl4_12_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map2_foldl4_12_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module382)
	MR_init_entry1(list__map2_foldl4_12_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl4_12_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl4'/12 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl4_12_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map2_foldl4_12_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module383)
	MR_init_entry1(list__map2_foldl4_12_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl4_12_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl4'/12 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl4_12_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map2_foldl4_12_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module384)
	MR_init_entry1(list__map2_foldl4_12_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl4_12_4);
	MR_init_label4(list__map2_foldl4_12_4,33,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl4'/12 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl4_12_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map2_foldl4_12_4_i33);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	MR_r6 = MR_r12;
	MR_r7 = MR_r13;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map2_foldl4_12_4,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r8;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r9;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map2_foldl4_12_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__list__map2_foldl4_12_4_i4);
MR_def_label(list__map2_foldl4_12_4,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map2_foldl4_12_4_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(8);
	MR_tempr6 = MR_r7;
	MR_r7 = MR_sv(9);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_r10 = MR_tempr3;
	MR_r11 = MR_tempr4;
	MR_r12 = MR_tempr5;
	MR_r13 = MR_tempr6;
	}
	MR_np_localcall_lab(list__map2_foldl4_12_4,
		list__map2_foldl4_12_4_i6);
MR_def_label(list__map2_foldl4_12_4,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map2_foldl4_12_4_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
	}
MR_def_label(list__map2_foldl4_12_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module385)
	MR_init_entry1(list__map2_foldl4_12_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map2_foldl4_12_5);
	MR_init_label3(list__map2_foldl4_12_5,17,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map2_foldl4'/12 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map2_foldl4_12_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(list__map2_foldl4_12_5_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	MR_proceed();
MR_def_label(list__map2_foldl4_12_5,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.map2_foldl4/12-5", 11,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r8;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r9;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(5) = MR_r1;
	MR_fv(6) = MR_r2;
	MR_fv(7) = MR_r3;
	MR_fv(8) = MR_r4;
	MR_fv(9) = MR_r5;
	MR_fv(10) = MR_r6;
	MR_fv(11) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r10;
	MR_r4 = MR_r11;
	MR_r5 = MR_r12;
	MR_r6 = MR_r13;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map2_foldl4_12_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_5),
		mercury__list__map2_foldl4_12_5_i3);
MR_def_label(list__map2_foldl4_12_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_r1 = MR_fv(5);
	MR_r2 = MR_fv(6);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_fv(7);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_fv(8);
	MR_tempr3 = MR_r5;
	MR_r5 = MR_fv(9);
	MR_tempr4 = MR_r6;
	MR_r6 = MR_fv(10);
	MR_r7 = MR_fv(11);
	MR_r8 = MR_fv(1);
	MR_r9 = MR_fv(2);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_tempr2;
	MR_r12 = MR_tempr3;
	MR_r13 = MR_tempr4;
	}
	MR_np_localcall_lab(list__map2_foldl4_12_5,
		list__map2_foldl4_12_5_i4);
MR_def_label(list__map2_foldl4_12_5,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_fv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module386)
	MR_init_entry1(list__map3_foldl_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map3_foldl_7_0);
	MR_init_label3(list__map3_foldl_7_0,19,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map3_foldl'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map3_foldl_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map3_foldl_7_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r8;
	MR_proceed();
MR_def_label(list__map3_foldl_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r8;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map3_foldl_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__map3_foldl_7_0_i4);
MR_def_label(list__map3_foldl_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr4;
	}
	MR_np_localcall_lab(list__map3_foldl_7_0,
		list__map3_foldl_7_0_i5);
MR_def_label(list__map3_foldl_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module387)
	MR_init_entry1(list__map3_foldl_7_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map3_foldl_7_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map3_foldl'/7 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map3_foldl_7_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map3_foldl_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module388)
	MR_init_entry1(list__map3_foldl_7_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map3_foldl_7_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map3_foldl'/7 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map3_foldl_7_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map3_foldl_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module389)
	MR_init_entry1(list__map3_foldl_7_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map3_foldl_7_3);
	MR_init_label4(list__map3_foldl_7_3,34,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map3_foldl'/7 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map3_foldl_7_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map3_foldl_7_3_i34);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_r8;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map3_foldl_7_3,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r8;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map3_foldl_7_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__map3_foldl_7_3_i4);
MR_def_label(list__map3_foldl_7_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map3_foldl_7_3_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr4;
	}
	MR_np_localcall_lab(list__map3_foldl_7_3,
		list__map3_foldl_7_3_i6);
MR_def_label(list__map3_foldl_7_3,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map3_foldl_7_3_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_r4;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(list__map3_foldl_7_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module390)
	MR_init_entry1(list__map3_foldl_7_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map3_foldl_7_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map3_foldl'/7 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map3_foldl_7_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map3_foldl_7_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module391)
	MR_init_entry1(list__map3_foldl_7_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map3_foldl_7_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map3_foldl'/7 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map3_foldl_7_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map3_foldl_7_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module392)
	MR_init_entry1(list__map3_foldl_7_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map3_foldl_7_6);
	MR_init_label3(list__map3_foldl_7_6,18,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map3_foldl'/7 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map3_foldl_7_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(list__map3_foldl_7_6_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r8;
	MR_proceed();
MR_def_label(list__map3_foldl_7_6,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.map3_foldl/7-6", 10,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(6) = MR_r1;
	MR_fv(7) = MR_r2;
	MR_fv(8) = MR_r3;
	MR_fv(9) = MR_r4;
	MR_fv(10) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r8;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map3_foldl_7_6));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__map3_foldl_7_6_i3);
MR_def_label(list__map3_foldl_7_6,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_fv(5) = MR_r3;
	MR_r1 = MR_fv(6);
	MR_r2 = MR_fv(7);
	MR_r3 = MR_fv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_fv(9);
	MR_r5 = MR_fv(10);
	MR_r6 = MR_fv(1);
	MR_r7 = MR_fv(2);
	MR_r8 = MR_tempr1;
	}
	MR_np_localcall_lab(list__map3_foldl_7_6,
		list__map3_foldl_7_6_i4);
MR_def_label(list__map3_foldl_7_6,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_fv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_fv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module393)
	MR_init_entry1(list__map3_foldl_7_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map3_foldl_7_7);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map3_foldl'/7 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map3_foldl_7_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map3_foldl_7_6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module394)
	MR_init_entry1(list__map3_foldl_7_8);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map3_foldl_7_8);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map3_foldl'/7 mode 8 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map3_foldl_7_8);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map3_foldl_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module395)
	MR_init_entry1(list__map3_foldl_7_9);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map3_foldl_7_9);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map3_foldl'/7 mode 9 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map3_foldl_7_9);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map3_foldl_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module396)
	MR_init_entry1(list__map3_foldl2_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map3_foldl2_9_0);
	MR_init_label3(list__map3_foldl2_9_0,19,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map3_foldl2'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map3_foldl2_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map3_foldl2_9_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	MR_proceed();
MR_def_label(list__map3_foldl2_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map3_foldl2_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__list__map3_foldl2_9_0_i4);
MR_def_label(list__map3_foldl2_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr4;
	MR_r10 = MR_tempr5;
	}
	MR_np_localcall_lab(list__map3_foldl2_9_0,
		list__map3_foldl2_9_0_i5);
MR_def_label(list__map3_foldl2_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module397)
	MR_init_entry1(list__map3_foldl2_9_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map3_foldl2_9_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map3_foldl2'/9 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map3_foldl2_9_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map3_foldl2_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module398)
	MR_init_entry1(list__map3_foldl2_9_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map3_foldl2_9_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map3_foldl2'/9 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map3_foldl2_9_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map3_foldl2_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module399)
	MR_init_entry1(list__map3_foldl2_9_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map3_foldl2_9_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map3_foldl2'/9 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map3_foldl2_9_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map3_foldl2_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module400)
	MR_init_entry1(list__map3_foldl2_9_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map3_foldl2_9_4);
	MR_init_label4(list__map3_foldl2_9_4,34,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map3_foldl2'/9 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map3_foldl2_9_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map3_foldl2_9_4_i34);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_r9;
	MR_r6 = MR_r10;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map3_foldl2_9_4,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map3_foldl2_9_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__list__map3_foldl2_9_4_i4);
MR_def_label(list__map3_foldl2_9_4,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map3_foldl2_9_4_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_tempr4 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(8);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr4;
	MR_r10 = MR_tempr5;
	}
	MR_np_localcall_lab(list__map3_foldl2_9_4,
		list__map3_foldl2_9_4_i6);
MR_def_label(list__map3_foldl2_9_4,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map3_foldl2_9_4_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_r4;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(list__map3_foldl2_9_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module401)
	MR_init_entry1(list__map3_foldl2_9_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map3_foldl2_9_5);
	MR_init_label3(list__map3_foldl2_9_5,18,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map3_foldl2'/9 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map3_foldl2_9_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map3_foldl2_9_5_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	MR_proceed();
MR_def_label(list__map3_foldl2_9_5,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.map3_foldl2/9-5", 11,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(6) = MR_r1;
	MR_fv(7) = MR_r2;
	MR_fv(8) = MR_r3;
	MR_fv(9) = MR_r4;
	MR_fv(10) = MR_r5;
	MR_fv(11) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map3_foldl2_9_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__list__map3_foldl2_9_5_i3);
MR_def_label(list__map3_foldl2_9_5,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_fv(5) = MR_r3;
	MR_r1 = MR_fv(6);
	MR_r2 = MR_fv(7);
	MR_r3 = MR_fv(8);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_fv(9);
	MR_tempr2 = MR_r5;
	MR_r5 = MR_fv(10);
	MR_r6 = MR_fv(11);
	MR_r7 = MR_fv(1);
	MR_r8 = MR_fv(2);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_tempr2;
	}
	MR_np_localcall_lab(list__map3_foldl2_9_5,
		list__map3_foldl2_9_5_i4);
MR_def_label(list__map3_foldl2_9_5,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_fv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_fv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module402)
	MR_init_entry1(list__map4_foldl_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map4_foldl_8_0);
	MR_init_label3(list__map4_foldl_8_0,20,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map4_foldl'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map4_foldl_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map4_foldl_8_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_r9;
	MR_proceed();
MR_def_label(list__map4_foldl_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map4_foldl_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__map4_foldl_8_0_i4);
MR_def_label(list__map4_foldl_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_tempr4 = MR_sv(4);
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_tempr5 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr5;
	}
	MR_np_localcall_lab(list__map4_foldl_8_0,
		list__map4_foldl_8_0_i5);
MR_def_label(list__map4_foldl_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr4, 1) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module403)
	MR_init_entry1(list__map4_foldl_8_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map4_foldl_8_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map4_foldl'/8 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map4_foldl_8_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map4_foldl_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module404)
	MR_init_entry1(list__map4_foldl_8_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map4_foldl_8_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map4_foldl'/8 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map4_foldl_8_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map4_foldl_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module405)
	MR_init_entry1(list__map4_foldl_8_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map4_foldl_8_3);
	MR_init_label4(list__map4_foldl_8_3,35,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map4_foldl'/8 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map4_foldl_8_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map4_foldl_8_3_i35);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_r9;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(list__map4_foldl_8_3,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map4_foldl_8_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__map4_foldl_8_3_i4);
MR_def_label(list__map4_foldl_8_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map4_foldl_8_3_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_tempr4 = MR_sv(4);
	MR_sv(4) = MR_r5;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_tempr5 = MR_r6;
	MR_r6 = MR_sv(8);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr5;
	}
	MR_np_localcall_lab(list__map4_foldl_8_3,
		list__map4_foldl_8_3_i6);
MR_def_label(list__map4_foldl_8_3,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__map4_foldl_8_3_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr4, 1) = MR_r5;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(list__map4_foldl_8_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module406)
	MR_init_entry1(list__map4_foldl_8_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map4_foldl_8_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map4_foldl'/8 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map4_foldl_8_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map4_foldl_8_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module407)
	MR_init_entry1(list__map4_foldl_8_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map4_foldl_8_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map4_foldl'/8 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map4_foldl_8_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map4_foldl_8_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module408)
	MR_init_entry1(list__map4_foldl_8_6);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map4_foldl_8_6);
	MR_init_label3(list__map4_foldl_8_6,19,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map4_foldl'/8 mode 6 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map4_foldl_8_6);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(list__map4_foldl_8_6_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_r9;
	MR_proceed();
MR_def_label(list__map4_foldl_8_6,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred list.map4_foldl/8-6", 12,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r7;
	MR_fv(1) = MR_tempr1;
	MR_tempr2 = MR_r8;
	MR_fv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_fv(7) = MR_r1;
	MR_fv(8) = MR_r2;
	MR_fv(9) = MR_r3;
	MR_fv(10) = MR_r4;
	MR_fv(11) = MR_r5;
	MR_fv(12) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_r9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__map4_foldl_8_6));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__map4_foldl_8_6_i3);
MR_def_label(list__map4_foldl_8_6,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = MR_r1;
	MR_fv(4) = MR_r2;
	MR_fv(5) = MR_r3;
	MR_fv(6) = MR_r4;
	MR_r1 = MR_fv(7);
	MR_r2 = MR_fv(8);
	MR_r3 = MR_fv(9);
	MR_r4 = MR_fv(10);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_fv(11);
	MR_r6 = MR_fv(12);
	MR_r7 = MR_fv(1);
	MR_r8 = MR_fv(2);
	MR_r9 = MR_tempr1;
	}
	MR_np_localcall_lab(list__map4_foldl_8_6,
		list__map4_foldl_8_6_i4);
MR_def_label(list__map4_foldl_8_6,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_fv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_fv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_fv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_fv(6);
	MR_tfield(1, MR_tempr4, 1) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module409)
	MR_init_entry1(list__map4_foldl_8_7);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map4_foldl_8_7);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map4_foldl'/8 mode 7 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map4_foldl_8_7);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map4_foldl_8_6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module410)
	MR_init_entry1(list__map4_foldl_8_8);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map4_foldl_8_8);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map4_foldl'/8 mode 8 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map4_foldl_8_8);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map4_foldl_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module411)
	MR_init_entry1(list__map4_foldl_8_9);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__map4_foldl_8_9);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map4_foldl'/8 mode 9 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__map4_foldl_8_9);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__map4_foldl_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module412)
	MR_init_entry1(list__filter_map_foldl_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__filter_map_foldl_5_0);
	MR_init_label5(list__filter_map_foldl_5_0,25,3,6,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_map_foldl'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__filter_map_foldl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(list__filter_map_foldl_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(list__filter_map_foldl_5_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(7);
MR_def_label(list__filter_map_foldl_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r6;
	MR_sv(1) = MR_tempr3;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__filter_map_foldl_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__filter_map_foldl_5_0_i6);
MR_def_label(list__filter_map_foldl_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__filter_map_foldl_5_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr2;
	}
	MR_np_localcall_lab(list__filter_map_foldl_5_0,
		list__filter_map_foldl_5_0_i8);
MR_def_label(list__filter_map_foldl_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(list__filter_map_foldl_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(list__filter_map_foldl_5_0_i25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module413)
	MR_init_entry1(list__all_true_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__all_true_2_0);
	MR_init_label4(list__all_true_2_0,17,4,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'all_true'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__all_true_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(list__all_true_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(list__all_true_2_0_i2);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__all_true_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__all_true_2_0_i4);
MR_def_label(list__all_true_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__all_true_2_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(list__all_true_2_0_i17);
MR_def_label(list__all_true_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(list__all_true_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module414)
	MR_init_entry1(list__all_false_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__all_false_2_0);
	MR_init_label4(list__all_false_2_0,19,6,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'all_false'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__all_false_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(list__all_false_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(list__all_false_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__all_false_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__all_false_2_0_i6);
MR_def_label(list__all_false_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(list__all_false_2_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(list__all_false_2_0_i19);
MR_def_label(list__all_false_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(list__all_false_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module415)
	MR_init_entry1(list__find_first_match_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__find_first_match_3_0);
	MR_init_label4(list__find_first_match_3_0,20,5,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_first_match'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__find_first_match_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(list__find_first_match_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(list__find_first_match_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__find_first_match_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__find_first_match_3_0_i5);
MR_def_label(list__find_first_match_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__find_first_match_3_0_i3);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(list__find_first_match_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(list__find_first_match_3_0_i20);
MR_def_label(list__find_first_match_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module416)
	MR_init_entry1(list__filter_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__filter_3_0);
	MR_init_label5(list__filter_3_0,25,3,6,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__filter_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(list__filter_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(list__filter_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(list__filter_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__filter_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__filter_3_0_i6);
MR_def_label(list__filter_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__filter_3_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(list__filter_3_0,
		list__filter_3_0_i8);
MR_def_label(list__filter_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(list__filter_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(list__filter_3_0_i25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module417)
	MR_init_entry1(fn__list__filter_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__filter_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__filter_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__filter_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module418)
	MR_init_entry1(list__negated_filter_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__negated_filter_3_0);
	MR_init_label5(list__negated_filter_3_0,25,3,6,4,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'negated_filter'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__negated_filter_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(list__negated_filter_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(list__negated_filter_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(list__negated_filter_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__negated_filter_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__negated_filter_3_0_i6);
MR_def_label(list__negated_filter_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__negated_filter_3_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(list__negated_filter_3_0_i25);
MR_def_label(list__negated_filter_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(3);
	}
	MR_np_localcall_lab(list__negated_filter_3_0,
		list__negated_filter_3_0_i9);
MR_def_label(list__negated_filter_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module419)
	MR_init_entry1(fn__list__negated_filter_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__negated_filter_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'negated_filter'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__negated_filter_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(list__negated_filter_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module420)
	MR_init_entry1(list__filter_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__filter_4_0);
	MR_init_label5(list__filter_4_0,30,6,8,4,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__filter_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(list__filter_4_0_i30);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__filter_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__filter_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__filter_4_0_i6);
MR_def_label(list__filter_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__filter_4_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(list__filter_4_0,
		list__filter_4_0_i8);
MR_def_label(list__filter_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(list__filter_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(3);
	}
	MR_np_localcall_lab(list__filter_4_0,
		list__filter_4_0_i10);
MR_def_label(list__filter_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module421)
	MR_init_entry1(list__filter_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__filter_map_3_0);
	MR_init_label5(list__filter_map_3_0,25,3,6,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__filter_map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(list__filter_map_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(list__filter_map_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(list__filter_map_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__filter_map_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__filter_map_3_0_i6);
MR_def_label(list__filter_map_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__filter_map_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_localcall_lab(list__filter_map_3_0,
		list__filter_map_3_0_i8);
MR_def_label(list__filter_map_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(list__filter_map_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(list__filter_map_3_0_i25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module422)
	MR_init_entry1(fn__list__filter_map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__filter_map_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__filter_map_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module423)
	MR_init_entry1(list__filter_map_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__filter_map_4_0);
	MR_init_label5(list__filter_map_4_0,30,6,8,4,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_map'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__filter_map_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(list__filter_map_4_0_i30);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__filter_map_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr3 = MR_r3;
	MR_sv(3) = MR_tempr3;
	MR_sv(1) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__filter_map_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__filter_map_4_0_i6);
MR_def_label(list__filter_map_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__filter_map_4_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(list__filter_map_4_0,
		list__filter_map_4_0_i8);
MR_def_label(list__filter_map_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(list__filter_map_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(list__filter_map_4_0,
		list__filter_map_4_0_i10);
MR_def_label(list__filter_map_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module424)
	MR_init_entry1(list__find_first_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__find_first_map_3_0);
	MR_init_label4(list__find_first_map_3_0,19,5,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_first_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__find_first_map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(list__find_first_map_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(list__find_first_map_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__find_first_map_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__find_first_map_3_0_i5);
MR_def_label(list__find_first_map_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(list__find_first_map_3_0_i9);
	}
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(list__find_first_map_3_0_i19);
MR_def_label(list__find_first_map_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(list__find_first_map_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module425)
	MR_init_entry1(list__find_first_map2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__find_first_map2_4_0);
	MR_init_label4(list__find_first_map2_4_0,19,5,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_first_map2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__find_first_map2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(list__find_first_map2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(list__find_first_map2_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__find_first_map2_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__find_first_map2_4_0_i5);
MR_def_label(list__find_first_map2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(list__find_first_map2_4_0_i9);
	}
	MR_r4 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(list__find_first_map2_4_0_i19);
MR_def_label(list__find_first_map2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(list__find_first_map2_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module426)
	MR_init_entry1(list__find_first_map3_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__find_first_map3_5_0);
	MR_init_label4(list__find_first_map3_5_0,19,5,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_first_map3'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__find_first_map3_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(list__find_first_map3_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r6,0,0)) {
		MR_GOTO_LAB(list__find_first_map3_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r5;
	MR_sv(1) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__find_first_map3_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__find_first_map3_5_0_i5);
MR_def_label(list__find_first_map3_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(list__find_first_map3_5_0_i9);
	}
	MR_r5 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r6 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(list__find_first_map3_5_0_i19);
MR_def_label(list__find_first_map3_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(list__find_first_map3_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module427)
	MR_init_entry1(list__find_index_of_match_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__find_index_of_match_4_0);
	MR_init_label4(list__find_index_of_match_4_0,20,5,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_index_of_match'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__find_index_of_match_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(list__find_index_of_match_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(list__find_index_of_match_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__find_index_of_match_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__find_index_of_match_4_0_i5);
MR_def_label(list__find_index_of_match_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__find_index_of_match_4_0_i3);
	}
	MR_r2 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(list__find_index_of_match_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(list__find_index_of_match_4_0_i20);
MR_def_label(list__find_index_of_match_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module428)
	MR_init_entry1(list__takewhile_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__takewhile_4_0);
	MR_init_label4(list__takewhile_4_0,28,6,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'takewhile'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__takewhile_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(list__takewhile_4_0_i28);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__takewhile_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__takewhile_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__takewhile_4_0_i6);
MR_def_label(list__takewhile_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__takewhile_4_0_i4);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(list__takewhile_4_0,
		list__takewhile_4_0_i8);
MR_def_label(list__takewhile_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(list__takewhile_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module429)
	MR_init_entry1(list__merge_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__merge_4_0);
	MR_init_label7(list__merge_4_0,5,3,48,9,10,8,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__merge_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(list__merge_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(list__merge_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__merge_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(list__merge_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(list__merge_4_0_i48);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(list__merge_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(7) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(6) = MR_r1;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__merge_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__merge_4_0_i9);
MR_def_label(list__merge_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(list__merge_4_0_i8);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_localcall_lab(list__merge_4_0,
		list__merge_4_0_i10);
MR_def_label(list__merge_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(list__merge_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(list__merge_4_0,
		list__merge_4_0_i12);
MR_def_label(list__merge_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module430)
	MR_init_entry1(list__hosort_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__hosort_5_0);
	MR_init_label10(list__hosort_5_0,89,10,12,15,6,20,22,24,90,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'hosort'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__hosort_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(list__hosort_5_0_i89);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(list__hosort_5_0_i90);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(list__hosort_5_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(list__hosort_5_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(list__hosort_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(list__hosort_5_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__hosort_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__hosort_5_0_i10);
MR_def_label(list__hosort_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(list__hosort_5_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
MR_def_label(list__hosort_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(list__hosort_5_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
MR_def_label(list__hosort_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
	}
MR_def_label(list__hosort_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = ((MR_Integer) MR_tempr1 / (MR_Integer) 2);
	MR_sv(4) = MR_r1;
	MR_r3 = MR_sv(3);
	}
	MR_np_localcall_lab(list__hosort_5_0,
		list__hosort_5_0_i20);
MR_def_label(list__hosort_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__hosort_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_sv(3));
	MR_r4 = MR_tempr2;
	}
	MR_np_localcall_lab(list__hosort_5_0,
		list__hosort_5_0_i22);
MR_def_label(list__hosort_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__hosort_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__merge_4_0,
		list__hosort_5_0_i24);
MR_def_label(list__hosort_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(list__hosort_5_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(list__hosort_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module431)
	MR_init_entry1(list__sort_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__sort_3_0);
	MR_init_label5(list__sort_3_0,2,3,6,8,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sort'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__sort_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		list__sort_3_0_i2);
MR_def_label(list__sort_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(list__sort_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(list__sort_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__hosort_5_0,
		list__sort_3_0_i6);
MR_def_label(list__sort_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__sort_3_0_i5);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		list__sort_3_0_i8);
MR_def_label(list__sort_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__sort_3_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(list__sort_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hosort failed", 13);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module432)
	MR_init_entry1(fn__list__sort_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__sort_2_0);
	MR_init_label5(fn__list__sort_2_0,2,3,6,8,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sort'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__sort_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__list__sort_2_0_i2);
MR_def_label(fn__list__sort_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__list__sort_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(fn__list__sort_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0,
		fn__list__sort_2_0_i6);
MR_def_label(fn__list__sort_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__list__sort_2_0_i5);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		fn__list__sort_2_0_i8);
MR_def_label(fn__list__sort_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__list__sort_2_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(fn__list__sort_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hosort failed", 13);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module433)
	MR_init_entry1(list__remove_adjacent_dups_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__remove_adjacent_dups_2_4_0);
	MR_init_label5(list__remove_adjacent_dups_2_4_0,24,3,6,5,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_adjacent_dups_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__remove_adjacent_dups_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(list__remove_adjacent_dups_2_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(list__remove_adjacent_dups_2_4_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r4;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(list__remove_adjacent_dups_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r2;
	MR_tempr3 = MR_r4;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__remove_adjacent_dups_2_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__remove_adjacent_dups_2_4_0_i6);
MR_def_label(list__remove_adjacent_dups_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(list__remove_adjacent_dups_2_4_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(list__remove_adjacent_dups_2_4_0_i24);
MR_def_label(list__remove_adjacent_dups_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(list__remove_adjacent_dups_2_4_0,
		list__remove_adjacent_dups_2_4_0_i8);
MR_def_label(list__remove_adjacent_dups_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module434)
	MR_init_entry1(list__remove_adjacent_dups_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__remove_adjacent_dups_3_0);
	MR_init_label1(list__remove_adjacent_dups_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_adjacent_dups'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__remove_adjacent_dups_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(list__remove_adjacent_dups_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__remove_adjacent_dups_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_np_tailcall_ent(list__remove_adjacent_dups_2_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module435)
	MR_init_entry1(list__sort_and_remove_dups_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__sort_and_remove_dups_3_0);
	MR_init_label2(list__sort_and_remove_dups_3_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sort_and_remove_dups'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__sort_and_remove_dups_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(list__sort_3_0,
		list__sort_and_remove_dups_3_0_i2);
MR_def_label(list__sort_and_remove_dups_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(list__sort_and_remove_dups_3_0_i4);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(list__sort_and_remove_dups_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__remove_adjacent_dups_2_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module436)
	MR_init_entry1(fn__list__merge_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__merge_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__merge_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module437)
	MR_init_entry1(list__merge_and_remove_dups_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__merge_and_remove_dups_4_0);
	MR_init_label9(list__merge_and_remove_dups_4_0,5,3,58,8,11,10,14,13,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_and_remove_dups'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__merge_and_remove_dups_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(list__merge_and_remove_dups_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(list__merge_and_remove_dups_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(list__merge_and_remove_dups_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(list__merge_and_remove_dups_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(list__merge_and_remove_dups_4_0_i58);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(list__merge_and_remove_dups_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(8) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__merge_and_remove_dups_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__list__merge_and_remove_dups_4_0_i8);
MR_def_label(list__merge_and_remove_dups_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(list__merge_and_remove_dups_4_0_i10);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(list__merge_and_remove_dups_4_0,
		list__merge_and_remove_dups_4_0_i11);
MR_def_label(list__merge_and_remove_dups_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(list__merge_and_remove_dups_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(list__merge_and_remove_dups_4_0_i13);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(5);
	MR_np_localcall_lab(list__merge_and_remove_dups_4_0,
		list__merge_and_remove_dups_4_0_i14);
MR_def_label(list__merge_and_remove_dups_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(list__merge_and_remove_dups_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_localcall_lab(list__merge_and_remove_dups_4_0,
		list__merge_and_remove_dups_4_0_i16);
MR_def_label(list__merge_and_remove_dups_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module438)
	MR_init_entry1(fn__list__merge_and_remove_dups_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__merge_and_remove_dups_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'merge_and_remove_dups'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__merge_and_remove_dups_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module439)
	MR_init_entry1(list__series_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__series_2_5_0);
	MR_init_label4(list__series_2_5_0,15,4,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'series_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__series_2_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(list__series_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__series_2_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__series_2_5_0_i4);
MR_def_label(list__series_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(list__series_2_5_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(list__series_2_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__list__series_2_5_0_i7);
MR_def_label(list__series_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(list__series_2_5_0_i15);
	}
MR_def_label(list__series_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module440)
	MR_init_entry1(fn__list__series_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__series_3_0);
	MR_init_label1(fn__list__series_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'series'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__series_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(list__series_2_5_0,
		fn__list__series_3_0_i2);
MR_def_label(fn__list__series_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module441)
	MR_init_entry1(list__successive_integers_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__list__successive_integers_4_0);
	MR_init_label1(list__successive_integers_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'successive_integers'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__list__successive_integers_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(list__successive_integers_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_np_localtailcall(list__successive_integers_4_0);
	}
MR_def_label(list__successive_integers_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module442)
	MR_init_entry1(fn__f_108_105_115_116_95_95_46_46_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_108_105_115_116_95_95_46_46_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '..'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_108_105_115_116_95_95_46_46_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(list__successive_integers_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module443)
	MR_init_entry1(fn__list__head_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__head_1_0);
	MR_init_label1(fn__list__head_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'head'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__head_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__list__head_1_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__list__head_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module444)
	MR_init_entry1(fn__list__tail_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__tail_1_0);
	MR_init_label1(fn__list__tail_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'tail'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__tail_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__list__tail_1_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__list__tail_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module445)
	MR_init_entry1(fn__list__det_head_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__det_head_1_0);
	MR_init_label1(fn__list__det_head_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_head'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__det_head_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__list__det_head_1_0_i3);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_proceed();
MR_def_label(fn__list__det_head_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.det_head/1: empty list as argument", 39);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module446)
	MR_init_entry1(fn__list__det_tail_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__det_tail_1_0);
	MR_init_label1(fn__list__det_tail_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_tail'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__det_tail_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__list__det_tail_1_0_i3);
	}
	MR_r1 = MR_tfield(1, MR_r2, 1);
	MR_proceed();
MR_def_label(fn__list__det_tail_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.det_tail/1: empty list as argument", 39);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(univ__type_to_univ_2_1);
MR_decl_entry(fn__pretty_printer__format_arg_1_0);

MR_BEGIN_MODULE(list_module447)
	MR_init_entry1(fn__list__list_to_doc_2_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__list_to_doc_2_1_0);
	MR_init_label6(fn__list__list_to_doc_2_1_0,42,46,7,6,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_to_doc_2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__list__list_to_doc_2_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(fn__list__list_to_doc_2_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__list__list_to_doc_2_1_0_i46);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_proceed();
MR_def_label(fn__list__list_to_doc_2_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__list__list_to_doc_2_1_0_i6);
	}
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		fn__list__list_to_doc_2_1_0_i7);
MR_def_label(fn__list__list_to_doc_2_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__pretty_printer__format_arg_1_0);
MR_def_label(fn__list__list_to_doc_2_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		fn__list__list_to_doc_2_1_0_i10);
MR_def_label(fn__list__list_to_doc_2_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__pretty_printer__format_arg_1_0,
		fn__list__list_to_doc_2_1_0_i12);
MR_def_label(fn__list__list_to_doc_2_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(fn__list__list_to_doc_2_1_0_i42);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(2,3,1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module448)
	MR_init_entry1(fn__list__list_to_doc_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__list_to_doc_1_0);
	MR_init_label1(fn__list__list_to_doc_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_to_doc'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__list_to_doc_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_np_call_localret_ent(fn__list__list_to_doc_2_1_0,
		fn__list__list_to_doc_1_0_i3);
MR_def_label(fn__list__list_to_doc_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,5);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,6);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,2,2);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module449)
	MR_init_entry1(fn__list__inst_preserving_append_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__inst_preserving_append_2_0);
	MR_init_label3(fn__list__inst_preserving_append_2_0,5,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_preserving_append'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__list__inst_preserving_append_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__list__inst_preserving_append_2_0_i2);
	}
	MR_r4 = (MR_Word) MR_sp;
MR_def_label(fn__list__inst_preserving_append_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0))
		continue;
	MR_r1 = MR_r3;
	break;
	} /* end while */
MR_def_label(fn__list__inst_preserving_append_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r4))
		continue;
	MR_proceed();
	break;
	} /* end while */
MR_def_label(fn__list__inst_preserving_append_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module450)
	MR_init_entry1(fn__list__empty_list_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__list__empty_list_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'empty_list'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__list__empty_list_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_109_112_116_121_95_108_105_115_116_95_95_91_49_93_95_48_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module451)
	MR_init_entry1(__Unify___list__list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___list__list_1_0);
	MR_init_label5(__Unify___list__list_1_0,30,14,5,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___list__list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(__Unify___list__list_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___list__list_1_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___list__list_1_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Unify___list__list_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___list__list_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___list__list_1_0_i1);
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
		__Unify___list__list_1_0_i7);
MR_def_label(__Unify___list__list_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___list__list_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(__Unify___list__list_1_0_i30);
MR_def_label(__Unify___list__list_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module452)
	MR_init_entry1(__Compare___list__list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___list__list_1_0);
	MR_init_label7(__Compare___list__list_1_0,40,24,7,5,9,11,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___list__list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(__Compare___list__list_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___list__list_1_0_i24);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___list__list_1_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(__Compare___list__list_1_0_i7);
	}
MR_def_label(__Compare___list__list_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___list__list_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___list__list_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(__Compare___list__list_1_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___list__list_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(3);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___list__list_1_0_i11);
MR_def_label(__Compare___list__list_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___list__list_1_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(__Compare___list__list_1_0_i40);
MR_def_label(__Compare___list__list_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module453)
	MR_init_entry1(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__remove_adjacent_dups_2__[T = var(V_2)]_0_1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module454)
	MR_init_entry1(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	MR_init_label5(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,4,6,7,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred__merge_sort_2__[T = var(V_2)]_0_1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r3,1)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0_i2);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(1) = ((MR_Integer) MR_tempr1 / (MR_Integer) 2);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(list__split_list_4_0,
		f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0_i4);
MR_def_label(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0_i3);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_localcall_lab(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0_i6);
MR_def_label(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_sv(1));
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0_i7);
MR_def_label(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	}
MR_def_label(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.merge_sort_2", 17);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module455)
	MR_init_entry1(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	MR_init_label5(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,4,6,7,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred__merge_sort_and_remove_dups_2__[T = var(V_2)]_0_1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r3,1)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0_i2);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(1) = ((MR_Integer) MR_tempr1 / (MR_Integer) 2);
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(list__split_list_4_0,
		f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0_i4);
MR_def_label(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0_i3);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_localcall_lab(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0_i6);
MR_def_label(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_sv(1));
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0_i7);
MR_def_label(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	}
MR_def_label(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("list.merge_sort_and_remove_dups_2", 33);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module456)
	MR_init_entry1(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_init_label1(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred__merge_sort__[T = var(V_2)]_0_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0_i2);
MR_def_label(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,2)
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
	MR_np_tailcall_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module457)
	MR_init_entry1(fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
	MR_init_label1(fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__sort__[T = var(V_2)]_0_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0_i2);
MR_def_label(fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,2)
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
	MR_np_tailcall_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module458)
	MR_init_entry1(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_init_label1(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred__sort__[T = var(V_2)]_0_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0_i2);
MR_def_label(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_111_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,2)
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
	MR_np_tailcall_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module459)
	MR_init_entry1(fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
	MR_init_label1(fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__sort_and_remove_dups__[T = var(V_2)]_0_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0_i2);
MR_def_label(fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,2)
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
	MR_np_tailcall_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module460)
	MR_init_entry1(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_init_label1(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__sort_and_remove_dups__[T = var(V_2)]_0_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__length_2_3_0,
		f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0_i2);
MR_def_label(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,2)
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
	MR_np_tailcall_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module461)
	MR_init_entry1(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred__member__[T = var(V_2)]_0_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module462)
	MR_init_entry1(fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__remove_adjacent_dups__[T = var(V_2)]_0_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module463)
	MR_init_entry1(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__remove_adjacent_dups__[T = var(V_2)]_0_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module464)
	MR_init_entry1(fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__merge_and_remove_dups__[T = var(V_2)]_0_1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module465)
	MR_init_entry1(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred__merge_and_remove_dups__[T = var(V_2)]_0_1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module466)
	MR_init_entry1(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred__merge__[T = var(V_2)]_0_1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module467)
	MR_init_entry1(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_3_0);
	MR_init_label2(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_3_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__reverse_2__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_3_0_i2);
	}
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	}
	break;
	} /* end while */
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module468)
	MR_init_entry1(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_50_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_50_95_95_91_49_93_95_48_3_0);
	MR_init_label3(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_50_95_95_91_49_93_95_48_3_0,20,6,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__zip2__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_50_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_50_95_95_91_49_93_95_48_3_0_i19);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_50_95_95_91_49_93_95_48_3_0_i20);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_50_95_95_91_49_93_95_48_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_50_95_95_91_49_93_95_48_3_0,
		f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_50_95_95_91_49_93_95_48_3_0_i6);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_50_95_95_91_49_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_50_95_95_91_49_93_95_48_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module469)
	MR_init_entry1(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_3_0);
	MR_init_label2(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_3_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__det_last_2__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_3_0_i2);
	}
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0))
		continue;
	break;
	} /* end while */
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_108_97_115_116_95_50_95_95_91_49_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module470)
	MR_init_entry1(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_97_115_116_95_100_101_116_95_50_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_97_115_116_95_100_101_116_95_50_95_95_91_49_93_95_48_4_0);
	MR_init_label3(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_97_115_116_95_100_101_116_95_50_95_95_91_49_93_95_48_4_0,5,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__split_last_det_2__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_97_115_116_95_100_101_116_95_50_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_97_115_116_95_100_101_116_95_50_95_95_91_49_93_95_48_4_0_i2);
	}
	MR_r4 = (MR_Word) MR_sp;
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_97_115_116_95_100_101_116_95_50_95_95_91_49_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0))
		continue;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	}
	break;
	} /* end while */
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_97_115_116_95_100_101_116_95_50_95_95_91_49_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r4))
		continue;
	MR_proceed();
	}
	break;
	} /* end while */
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_97_115_116_95_100_101_116_95_50_95_95_91_49_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module471)
	MR_init_entry1(fn__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_109_112_116_121_95_108_105_115_116_95_95_91_49_93_95_48_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_109_112_116_121_95_108_105_115_116_95_95_91_49_93_95_48_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__empty_list__[1]_0'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_109_112_116_121_95_108_105_115_116_95_95_91_49_93_95_48_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module472)
	MR_init_entry1(fn__f_108_105_115_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_108_105_115_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_108_105_115_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module473)
	MR_init_entry1(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_init_label4(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,23,3,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__TypeSpecOf__pred_or_func__remove_adjacent_dups_2__[T = var(V_2)]_0_1__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r3;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r2, 1);
	MR_r5 = MR_tfield(1, MR_r2, 0);
	if ((MR_r3 != MR_r5)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i5);
	}
	MR_r2 = MR_r4;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i23);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_localcall_lab(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i7);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module474)
	MR_init_entry1(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0);
	MR_init_label2(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__TypeSpecOf__pred__member__[T = var(V_2)]_0_1__[2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_tfield(1, MR_tempr3, 0);
	if ((MR_r2 == MR_tempr2)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0_i3);
	}
	MR_r3 = MR_tempr1;
	MR_np_localtailcall(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0);
	}
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module475)
	MR_init_entry1(fn__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_1_0);
	MR_init_label1(fn__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__TypeSpecOf__pred_or_func__remove_adjacent_dups__[T = var(V_2)]_0_1__[2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_np_tailcall_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module476)
	MR_init_entry1(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0);
	MR_init_label1(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__TypeSpecOf__pred_or_func__remove_adjacent_dups__[T = var(V_2)]_0_1__[2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_np_tailcall_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_109_111_118_101_95_97_100_106_97_99_101_110_116_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module477)
	MR_init_entry1(fn__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__TypeSpecOf__pred_or_func__merge_and_remove_dups__[T = var(V_2)]_0_1__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module478)
	MR_init_entry1(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_init_label10(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,5,3,72,8,9,11,14,13,16,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__TypeSpecOf__pred__merge_and_remove_dups__[T = var(V_2)]_0_1__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i72);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r6 = MR_tfield(1, MR_r2, 1);
	MR_r7 = MR_tfield(1, MR_tempr1, 1);
	MR_r8 = MR_tfield(1, MR_tempr1, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i8);
	}
	MR_r4 = MR_r2;
	MR_r9 = MR_sv(1);
	MR_sv(1) = MR_r8;
	MR_r5 = MR_r7;
	MR_r10 = MR_r6;
	MR_r6 = (MR_Integer) 1;
	MR_r2 = MR_r10;
	MR_r7 = MR_r9;
	MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i11);
	}
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i9);
	}
	MR_r4 = MR_r2;
	MR_r9 = MR_sv(1);
	MR_sv(1) = MR_r8;
	MR_r5 = MR_r7;
	MR_r10 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	MR_r2 = MR_r10;
	MR_r7 = MR_r9;
	MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i11);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r8;
	MR_r5 = MR_r7;
	MR_tempr2 = MR_r6;
	MR_r6 = (MR_Integer) 2;
	MR_r2 = MR_tempr2;
	MR_r7 = MR_tempr1;
	}
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i13);
	}
	MR_sv(1) = MR_r7;
	MR_np_localcall_lab(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i14);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i16);
	}
	MR_sv(1) = MR_r7;
	MR_r3 = MR_r5;
	MR_np_localcall_lab(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i19);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_localcall_lab(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i19);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module479)
	MR_init_entry1(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_init_label10(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,5,3,65,10,11,13,14,15,8,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__TypeSpecOf__pred__merge__[T = var(V_2)]_0_1__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i65);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_tfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i10);
	}
	MR_r6 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_r6;
	MR_r3 = MR_r5;
	MR_r5 = (MR_Integer) 1;
	MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i13);
	}
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_r4)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i11);
	}
	MR_r6 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r4 = MR_r6;
	MR_r3 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i13);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r4 = MR_tempr1;
	MR_r3 = MR_r5;
	MR_r5 = (MR_Integer) 2;
	}
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 == (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i14);
	}
	MR_sv(4) = MR_r1;
	MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i8);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_np_localcall_lab(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i15);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,
		f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0_i17);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module480)
	MR_init_entry1(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0);
	MR_init_label9(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,5,3,58,8,11,10,14,13,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__merge_and_remove_dups__ho5__[1, 3, 4]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0_i58);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	MR_sv(6) = MR_tfield(1, MR_r2, 0);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0_i8);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0_i10);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,
		f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0_i11);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0_i13);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,
		f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0_i14);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,
		f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0_i16);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_104_111_53_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module481)
	MR_init_entry1(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0);
	MR_init_label7(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,5,3,48,9,10,8,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__merge__ho6__[1, 3, 4]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0_i48);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0_i9);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0_i8);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,
		f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0_i10);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,
		f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0_i12);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_54_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module482)
	MR_init_entry1(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0);
	MR_init_label5(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,25,3,6,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__filter_map__ho8__[1, 2, 4, 5, 6]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0_i6);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,
		f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0_i8);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_0_i25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module483)
	MR_init_entry1(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	MR_init_label2(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,13,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldr__ho9__[1, 2, 4, 5, 6]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i13);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,
		f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i4);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0));
	MR_np_tailcall_ent(do_call_closure_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module484)
	MR_init_entry1(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0);
	MR_init_label3(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl__ho10__[1, 2, 4, 5, 6]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i4);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module485)
	MR_init_entry1(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0);
	MR_init_label10(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0,89,10,12,15,6,20,22,24,90,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__hosort__ho11__[1, 3, 4]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0_i89);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0_i90);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_r3, 0);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0_i1);
	}
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0_i10);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = ((MR_Integer) MR_r2 / (MR_Integer) 2);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0,
		f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0_i20);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_sv(1));
	}
	MR_np_localcall_lab(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0,
		f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0_i22);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,
		f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0_i24);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_111_115_111_114_116_95_95_104_111_49_49_95_95_91_49_44_32_51_44_32_52_93_95_48_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(list_module486)
	MR_init_entry1(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0);
	MR_init_label7(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,5,3,48,9,10,8,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__merge__ho12__[1, 3, 4]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0_i48);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0_i9);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 2 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0_i8);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,
		f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0_i10);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,
		f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0_i12);
MR_def_label(f_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_101_114_103_101_95_95_104_111_49_50_95_95_91_49_44_32_51_44_32_52_93_95_48_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__fn__list__cons_2_0);

MR_Word
ML_cons(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3);

MR_Word
ML_cons(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__list__cons_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__list__cons_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__list__empty_list_0_0);

MR_Word
ML_empty_list(MR_Word Mercury__argument1);

MR_Word
ML_empty_list(MR_Word Mercury__argument1)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__list__empty_list_0_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__list__empty_list_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


static void mercury__list_maybe_bunch_0(void)
{
	list_module0();
	list_module1();
	list_module2();
	list_module3();
	list_module4();
	list_module5();
	list_module6();
	list_module7();
	list_module8();
	list_module9();
	list_module10();
	list_module11();
	list_module12();
	list_module13();
	list_module14();
	list_module15();
	list_module16();
	list_module17();
	list_module18();
	list_module19();
	list_module20();
	list_module21();
	list_module22();
	list_module23();
	list_module24();
	list_module25();
	list_module26();
	list_module27();
	list_module28();
	list_module29();
	list_module30();
	list_module31();
	list_module32();
	list_module33();
	list_module34();
	list_module35();
	list_module36();
	list_module37();
	list_module38();
	list_module39();
}

static void mercury__list_maybe_bunch_1(void)
{
	list_module40();
	list_module41();
	list_module42();
	list_module43();
	list_module44();
	list_module45();
	list_module46();
	list_module47();
	list_module48();
	list_module49();
	list_module50();
	list_module51();
	list_module52();
	list_module53();
	list_module54();
	list_module55();
	list_module56();
	list_module57();
	list_module58();
	list_module59();
	list_module60();
	list_module61();
	list_module62();
	list_module63();
	list_module64();
	list_module65();
	list_module66();
	list_module67();
	list_module68();
	list_module69();
	list_module70();
	list_module71();
	list_module72();
	list_module73();
	list_module74();
	list_module75();
	list_module76();
	list_module77();
	list_module78();
	list_module79();
}

static void mercury__list_maybe_bunch_2(void)
{
	list_module80();
	list_module81();
	list_module82();
	list_module83();
	list_module84();
	list_module85();
	list_module86();
	list_module87();
	list_module88();
	list_module89();
	list_module90();
	list_module91();
	list_module92();
	list_module93();
	list_module94();
	list_module95();
	list_module96();
	list_module97();
	list_module98();
	list_module99();
	list_module100();
	list_module101();
	list_module102();
	list_module103();
	list_module104();
	list_module105();
	list_module106();
	list_module107();
	list_module108();
	list_module109();
	list_module110();
	list_module111();
	list_module112();
	list_module113();
	list_module114();
	list_module115();
	list_module116();
	list_module117();
	list_module118();
	list_module119();
}

static void mercury__list_maybe_bunch_3(void)
{
	list_module120();
	list_module121();
	list_module122();
	list_module123();
	list_module124();
	list_module125();
	list_module126();
	list_module127();
	list_module128();
	list_module129();
	list_module130();
	list_module131();
	list_module132();
	list_module133();
	list_module134();
	list_module135();
	list_module136();
	list_module137();
	list_module138();
	list_module139();
	list_module140();
	list_module141();
	list_module142();
	list_module143();
	list_module144();
	list_module145();
	list_module146();
	list_module147();
	list_module148();
	list_module149();
	list_module150();
	list_module151();
	list_module152();
	list_module153();
	list_module154();
	list_module155();
	list_module156();
	list_module157();
	list_module158();
	list_module159();
}

static void mercury__list_maybe_bunch_4(void)
{
	list_module160();
	list_module161();
	list_module162();
	list_module163();
	list_module164();
	list_module165();
	list_module166();
	list_module167();
	list_module168();
	list_module169();
	list_module170();
	list_module171();
	list_module172();
	list_module173();
	list_module174();
	list_module175();
	list_module176();
	list_module177();
	list_module178();
	list_module179();
	list_module180();
	list_module181();
	list_module182();
	list_module183();
	list_module184();
	list_module185();
	list_module186();
	list_module187();
	list_module188();
	list_module189();
	list_module190();
	list_module191();
	list_module192();
	list_module193();
	list_module194();
	list_module195();
	list_module196();
	list_module197();
	list_module198();
	list_module199();
}

static void mercury__list_maybe_bunch_5(void)
{
	list_module200();
	list_module201();
	list_module202();
	list_module203();
	list_module204();
	list_module205();
	list_module206();
	list_module207();
	list_module208();
	list_module209();
	list_module210();
	list_module211();
	list_module212();
	list_module213();
	list_module214();
	list_module215();
	list_module216();
	list_module217();
	list_module218();
	list_module219();
	list_module220();
	list_module221();
	list_module222();
	list_module223();
	list_module224();
	list_module225();
	list_module226();
	list_module227();
	list_module228();
	list_module229();
	list_module230();
	list_module231();
	list_module232();
	list_module233();
	list_module234();
	list_module235();
	list_module236();
	list_module237();
	list_module238();
	list_module239();
}

static void mercury__list_maybe_bunch_6(void)
{
	list_module240();
	list_module241();
	list_module242();
	list_module243();
	list_module244();
	list_module245();
	list_module246();
	list_module247();
	list_module248();
	list_module249();
	list_module250();
	list_module251();
	list_module252();
	list_module253();
	list_module254();
	list_module255();
	list_module256();
	list_module257();
	list_module258();
	list_module259();
	list_module260();
	list_module261();
	list_module262();
	list_module263();
	list_module264();
	list_module265();
	list_module266();
	list_module267();
	list_module268();
	list_module269();
	list_module270();
	list_module271();
	list_module272();
	list_module273();
	list_module274();
	list_module275();
	list_module276();
	list_module277();
	list_module278();
	list_module279();
}

static void mercury__list_maybe_bunch_7(void)
{
	list_module280();
	list_module281();
	list_module282();
	list_module283();
	list_module284();
	list_module285();
	list_module286();
	list_module287();
	list_module288();
	list_module289();
	list_module290();
	list_module291();
	list_module292();
	list_module293();
	list_module294();
	list_module295();
	list_module296();
	list_module297();
	list_module298();
	list_module299();
	list_module300();
	list_module301();
	list_module302();
	list_module303();
	list_module304();
	list_module305();
	list_module306();
	list_module307();
	list_module308();
	list_module309();
	list_module310();
	list_module311();
	list_module312();
	list_module313();
	list_module314();
	list_module315();
	list_module316();
	list_module317();
	list_module318();
	list_module319();
}

static void mercury__list_maybe_bunch_8(void)
{
	list_module320();
	list_module321();
	list_module322();
	list_module323();
	list_module324();
	list_module325();
	list_module326();
	list_module327();
	list_module328();
	list_module329();
	list_module330();
	list_module331();
	list_module332();
	list_module333();
	list_module334();
	list_module335();
	list_module336();
	list_module337();
	list_module338();
	list_module339();
	list_module340();
	list_module341();
	list_module342();
	list_module343();
	list_module344();
	list_module345();
	list_module346();
	list_module347();
	list_module348();
	list_module349();
	list_module350();
	list_module351();
	list_module352();
	list_module353();
	list_module354();
	list_module355();
	list_module356();
	list_module357();
	list_module358();
	list_module359();
}

static void mercury__list_maybe_bunch_9(void)
{
	list_module360();
	list_module361();
	list_module362();
	list_module363();
	list_module364();
	list_module365();
	list_module366();
	list_module367();
	list_module368();
	list_module369();
	list_module370();
	list_module371();
	list_module372();
	list_module373();
	list_module374();
	list_module375();
	list_module376();
	list_module377();
	list_module378();
	list_module379();
	list_module380();
	list_module381();
	list_module382();
	list_module383();
	list_module384();
	list_module385();
	list_module386();
	list_module387();
	list_module388();
	list_module389();
	list_module390();
	list_module391();
	list_module392();
	list_module393();
	list_module394();
	list_module395();
	list_module396();
	list_module397();
	list_module398();
	list_module399();
}

static void mercury__list_maybe_bunch_10(void)
{
	list_module400();
	list_module401();
	list_module402();
	list_module403();
	list_module404();
	list_module405();
	list_module406();
	list_module407();
	list_module408();
	list_module409();
	list_module410();
	list_module411();
	list_module412();
	list_module413();
	list_module414();
	list_module415();
	list_module416();
	list_module417();
	list_module418();
	list_module419();
	list_module420();
	list_module421();
	list_module422();
	list_module423();
	list_module424();
	list_module425();
	list_module426();
	list_module427();
	list_module428();
	list_module429();
	list_module430();
	list_module431();
	list_module432();
	list_module433();
	list_module434();
	list_module435();
	list_module436();
	list_module437();
	list_module438();
	list_module439();
}

static void mercury__list_maybe_bunch_11(void)
{
	list_module440();
	list_module441();
	list_module442();
	list_module443();
	list_module444();
	list_module445();
	list_module446();
	list_module447();
	list_module448();
	list_module449();
	list_module450();
	list_module451();
	list_module452();
	list_module453();
	list_module454();
	list_module455();
	list_module456();
	list_module457();
	list_module458();
	list_module459();
	list_module460();
	list_module461();
	list_module462();
	list_module463();
	list_module464();
	list_module465();
	list_module466();
	list_module467();
	list_module468();
	list_module469();
	list_module470();
	list_module471();
	list_module472();
	list_module473();
	list_module474();
	list_module475();
	list_module476();
	list_module477();
	list_module478();
	list_module479();
}

static void mercury__list_maybe_bunch_12(void)
{
	list_module480();
	list_module481();
	list_module482();
	list_module483();
	list_module484();
	list_module485();
	list_module486();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__list__init(void);
void mercury__list__init_type_tables(void);
void mercury__list__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__list__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__list__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__list__init_threadscope_string_table(void);
#endif

void mercury__list__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__list_maybe_bunch_0();
	mercury__list_maybe_bunch_1();
	mercury__list_maybe_bunch_2();
	mercury__list_maybe_bunch_3();
	mercury__list_maybe_bunch_4();
	mercury__list_maybe_bunch_5();
	mercury__list_maybe_bunch_6();
	mercury__list_maybe_bunch_7();
	mercury__list_maybe_bunch_8();
	mercury__list_maybe_bunch_9();
	mercury__list_maybe_bunch_10();
	mercury__list_maybe_bunch_11();
	mercury__list_maybe_bunch_12();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_list__type_ctor_info_list_1,
		list__list_1_0);
	mercury__list__init_debugger();
}

void mercury__list__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_list__type_ctor_info_list_1);
	}
}


void mercury__list__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__list__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__list);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__list__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__list__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
