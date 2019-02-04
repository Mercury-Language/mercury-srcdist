/*
** Automatically generated from `pprint.m'
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
INIT mercury__pprint__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "io.int"
#include "io.mh"

#line 28 "pprint.c"
#line 536 "io.int"
#include "string.mh"

#line 32 "pprint.c"
#line 248 "array.int"
#include "array.mh"

#line 36 "pprint.c"
#line 70 "version_array.int"
#include "version_array.mh"

#line 40 "pprint.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 44 "pprint.c"
#line 30 "time.int2"
#include "time.mh"

#line 48 "pprint.c"
#line 55 "array.opt"
#include "stm_builtin.mh"

#line 52 "pprint.c"
#line 57 "array.opt"
#include "store.mh"

#line 56 "pprint.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "pprint.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 64 "pprint.c"
#line 3 "float.opt"
#include "float.mh"

#line 68 "pprint.c"
#line 3 "math.opt"
#include "math.mh"

#line 72 "pprint.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 76 "pprint.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 80 "pprint.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 84 "pprint.c"
#line 4 "char.opt"
#include "char.mh"

#line 88 "pprint.c"
#line 4 "int.opt"
#include "int.mh"

#line 92 "pprint.c"
#line 156 "io.opt"
#include "dir.mh"

#line 96 "pprint.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 100 "pprint.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 104 "pprint.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 108 "pprint.c"
#line 7 "hash_table.opt"
#include "hash_table.mh"

#line 112 "pprint.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 116 "pprint.c"
#line 117 "pprint.c"
#include "pprint.mh"

#line 120 "pprint.c"
#line 121 "pprint.c"
#ifndef PPRINT_DECL_GUARD
#define PPRINT_DECL_GUARD

#line 125 "pprint.c"
#line 126 "pprint.c"

#endif
#line 129 "pprint.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_pprint__doc__arity1__character__arity0__[],
	mercury_data_base_typeclass_info_pprint__doc__arity1__float__arity0__[],
	mercury_data_base_typeclass_info_pprint__doc__arity1__int__arity0__[],
	mercury_data_base_typeclass_info_pprint__doc__arity1__string__arity0__[],
	mercury_data_base_typeclass_info_pprint__doc__arity1__pprint__doc__arity0__[];

extern const MR_TypeClassDeclStruct
	mercury_data_pprint__type_class_decl_doc_1;

extern const MR_TypeCtorInfo_Struct
	mercury_data_pprint__type_ctor_info_depth_0,
	mercury_data_pprint__type_ctor_info_doc_0,
	mercury_data_pprint__type_ctor_info_map_pair_2;
MR_decl_label10(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0, 48,3,4,5,8,7,11,10,13,15)
MR_decl_label2(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0, 17,18)
MR_decl_label10(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1, 48,3,4,5,8,7,11,10,13,15)
MR_decl_label2(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1, 17,18)
MR_decl_label10(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0, 48,3,4,5,8,7,11,10,13,15)
MR_decl_label2(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0, 17,18)
MR_decl_label10(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0, 70,4,5,3,7,9,8,12,11,15)
MR_decl_label8(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0, 14,19,18,17,25,24,27,28)
MR_decl_label3(pprint__dynamic_cast_to_list_2_0, 3,6,1)
MR_decl_label3(pprint__dynamic_cast_to_map_2_0, 4,7,1)
MR_decl_label3(pprint__dynamic_cast_to_map_pair_2_0, 4,7,1)
MR_decl_label3(pprint__dynamic_cast_to_robdd_2_0, 3,6,1)
MR_decl_label3(pprint__dynamic_cast_to_version_array_2_0, 3,6,1)
MR_decl_label1(pprint__layout_best_5_0, 2)
MR_decl_label1(pprint__layout_best_5_1, 2)
MR_decl_label10(pprint__layout_flat__ho48_6_0, 47,5,8,7,11,10,13,15,17,53)
MR_decl_label10(pprint__layout_flat__ho49_6_0, 48,3,4,5,8,7,11,10,13,15)
MR_decl_label1(pprint__layout_flat__ho49_6_0, 17)
MR_decl_label10(pprint__lb_8_0, 70,4,5,3,7,9,8,12,11,15)
MR_decl_label8(pprint__lb_8_0, 14,19,18,17,25,24,27,28)
MR_decl_label10(pprint__lb_8_1, 70,4,5,3,7,9,8,12,11,15)
MR_decl_label8(pprint__lb_8_1, 14,19,18,17,25,24,27,28)
MR_decl_label10(pprint__lb__ho40_8_0, 70,4,5,3,7,9,8,12,11,15)
MR_decl_label8(pprint__lb__ho40_8_0, 14,19,18,17,25,24,27,28)
MR_decl_label10(pprint__lb__ho41_8_0, 67,4,3,5,6,10,9,13,12,17)
MR_decl_label5(pprint__lb__ho41_8_0, 16,15,23,22,25)
MR_decl_label1(pprint__write_4_0, 2)
MR_decl_label2(pprint__write_5_0, 2,3)
MR_decl_label2(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_0, 13,4)
MR_decl_label8(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0, 37,2,7,6,4,14,13,16)
MR_decl_label4(pprint__string__next_boundary__ho17__ho50_4_0, 25,8,2,3)
MR_decl_label4(pprint__string__next_boundary__ho38_4_0, 23,6,2,3)
MR_decl_label5(pprint__string__words_2__ho39_4_0, 2,3,4,5,7)
MR_decl_label3(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_0, 6,7,2)
MR_decl_label3(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_54_95_95_91_50_93_95_48_2_0, 6,7,2)
MR_decl_label3(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_55_95_95_91_51_44_32_52_93_95_48_2_0, 17,4,5)
MR_decl_label3(fn__pprint__list__map__ho35_2_0, 6,7,2)
MR_decl_label2(fn__f_112_112_114_105_110_116_95_95_43_43_2_0, 2,3)
MR_decl_label1(fn__f_112_112_114_105_110_116_95_95_60_47_62_2_0, 3)
MR_decl_label1(fn__pprint__adjusted_by_2_0, 2)
MR_decl_label8(fn__pprint__array_to_doc_2_0, 4,5,6,8,9,10,11,13)
MR_decl_label4(fn__pprint__bracketed_3_0, 3,4,6,7)
MR_decl_label2(fn__pprint__colon_line_0_0, 4,5)
MR_decl_label2(fn__pprint__colon_space_line_0_0, 4,5)
MR_decl_label2(fn__pprint__comma_line_0_0, 4,5)
MR_decl_label2(fn__pprint__comma_space_line_0_0, 4,5)
MR_decl_label2(fn__pprint__extend_2_0, 2,3)
MR_decl_label10(fn__pprint__ff_2_0, 66,5,9,8,14,13,17,20,23,2)
MR_decl_label1(fn__pprint__ff_2_0, 1)
MR_decl_label10(fn__pprint__generic_term_to_doc_3_0, 3,4,10,2,13,14,20,24,25,26)
MR_decl_label10(fn__pprint__generic_term_to_doc_3_0, 27,16,35,38,39,41,42,43,31,51)
MR_decl_label10(fn__pprint__generic_term_to_doc_3_0, 54,55,56,58,59,60,61,62,63,64)
MR_decl_label10(fn__pprint__generic_term_to_doc_3_0, 65,66,67,46,76,80,81,82,83,84)
MR_decl_label10(fn__pprint__generic_term_to_doc_3_0, 85,86,87,88,89,90,91,92,93,71)
MR_decl_label5(fn__pprint__generic_term_to_doc_3_0, 95,100,101,102,103)
MR_decl_label1(fn__pprint__group_1_0, 2)
MR_decl_label1(fn__pprint__label_2_0, 2)
MR_decl_label2(fn__pprint__list_to_doc_2_0, 3,4)
MR_decl_label6(fn__pprint__map_pair_to_doc_2_0, 3,5,6,7,9,11)
MR_decl_label9(fn__pprint__map_to_doc_2_0, 3,4,7,8,10,11,12,13,15)
MR_decl_label1(fn__pprint__maybe_parens_3_0, 2)
MR_decl_label1(fn__pprint__nest_2_0, 2)
MR_decl_label10(fn__pprint__packed_3_0, 60,8,7,10,11,12,5,16,17,19)
MR_decl_label5(fn__pprint__packed_3_0, 20,22,14,26,27)
MR_decl_label1(fn__pprint__packed_cs_to_depth_2_0, 3)
MR_decl_label1(fn__pprint__packed_cs_univ_args_2_0, 3)
MR_decl_label5(fn__pprint__poly_1_0, 3,9,7,12,11)
MR_decl_label7(fn__pprint__robdd_to_doc_2_0, 6,7,8,10,11,12,13)
MR_decl_label2(fn__pprint__semic_line_0_0, 4,5)
MR_decl_label2(fn__pprint__semic_space_line_0_0, 4,5)
MR_decl_label6(fn__pprint__separated_3_0, 32,4,8,9,10,11)
MR_decl_label2(fn__pprint__space_line_0_0, 4,5)
MR_decl_label6(fn__pprint__sparse_bitset_to_doc_2_0, 4,5,6,7,8,10)
MR_decl_label10(fn__pprint__to_doc_3_0, 5,8,2,3,13,11,20,17,27,26)
MR_decl_label10(fn__pprint__to_doc_3_0, 32,31,37,36,41,40,45,44,50,49)
MR_decl_label2(fn__pprint__to_doc_3_0, 55,54)
MR_decl_label2(fn__pprint__to_string_2_0, 2,3)
MR_decl_label5(fn__pprint__tuple_to_doc_2_0, 2,4,5,8,9)
MR_decl_label1(fn__pprint__var_to_doc_2_0, 4)
MR_decl_label8(fn__pprint__version_array_to_doc_2_0, 4,5,6,8,9,10,11,13)
MR_decl_label3(fn__pprint__word_wrapped_1_0, 4,5,6)
MR_decl_label4(fn__f_112_112_114_105_110_116_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0, 25,4,27,2)
MR_decl_label10(__Unify___pprint__doc_0_0, 111,5,6,7,13,11,17,21,54,25)
MR_decl_label1(__Unify___pprint__doc_0_0, 1)
MR_decl_label3(__Unify___pprint__map_pair_2_0, 4,8,1)
MR_decl_label2(__Compare___pprint__depth_0_0, 2,3)
MR_decl_label10(__Compare___pprint__doc_0_0, 413,7,8,9,10,11,12,5,16,17)
MR_decl_label10(__Compare___pprint__doc_0_0, 18,19,20,21,14,25,26,30,31,33)
MR_decl_label10(__Compare___pprint__doc_0_0, 27,38,39,40,23,44,45,46,49,47)
MR_decl_label10(__Compare___pprint__doc_0_0, 54,55,42,59,60,61,62,66,67,69)
MR_decl_label10(__Compare___pprint__doc_0_0, 63,74,57,78,79,80,81,82,83,76)
MR_decl_label10(__Compare___pprint__doc_0_0, 88,89,90,180,91,92,93,97,98,101)
MR_decl_label10(__Compare___pprint__doc_0_0, 86,107,108,109,110,111,112,193,113,194)
MR_decl_label3(__Compare___pprint__doc_0_0, 114,195,472)
MR_decl_label4(__Compare___pprint__map_pair_2_0, 3,2,5,21)
MR_def_extern_entry(fn__pprint__doc_2_0)
MR_def_extern_entry(fn__pprint__doc_1_0)
MR_def_extern_entry(fn__f_112_112_114_105_110_116_95_95_60_62_2_0)
MR_def_extern_entry(fn__f_112_112_114_105_110_116_95_95_43_43_2_0)
MR_def_extern_entry(fn__pprint__nil_0_0)
MR_def_extern_entry(fn__pprint__text_1_0)
MR_def_extern_entry(fn__pprint__line_0_0)
MR_def_extern_entry(fn__pprint__nest_2_0)
MR_def_extern_entry(fn__pprint__label_2_0)
MR_def_extern_entry(fn__pprint__group_1_0)
MR_def_extern_entry(fn__pprint__poly_1_0)
MR_def_extern_entry(fn__f_112_112_114_105_110_116_95_95_60_47_62_2_0)
MR_def_extern_entry(fn__pprint__bracketed_3_0)
MR_def_extern_entry(fn__pprint__parentheses_1_0)
MR_def_extern_entry(fn__pprint__brackets_1_0)
MR_def_extern_entry(fn__pprint__braces_1_0)
MR_def_extern_entry(fn__pprint__ellipsis_0_0)
MR_def_extern_entry(fn__pprint__packed_3_0)
MR_def_extern_entry(fn__pprint__packed_2_0)
MR_def_extern_entry(fn__pprint__packed_cs_1_0)
MR_def_extern_entry(fn__pprint__packed_cs_2_0)
MR_def_extern_entry(fn__pprint__packed_cs_to_depth_2_0)
MR_def_extern_entry(fn__pprint__packed_cs_univ_args_2_0)
MR_def_extern_entry(fn__pprint__separated_3_0)
MR_def_extern_entry(fn__pprint__comma_0_0)
MR_def_extern_entry(fn__pprint__semic_0_0)
MR_def_extern_entry(fn__pprint__colon_0_0)
MR_def_extern_entry(fn__pprint__space_0_0)
MR_def_extern_entry(fn__pprint__comma_space_0_0)
MR_def_extern_entry(fn__pprint__semic_space_0_0)
MR_def_extern_entry(fn__pprint__colon_space_0_0)
MR_def_extern_entry(fn__pprint__comma_line_0_0)
MR_def_extern_entry(fn__pprint__semic_line_0_0)
MR_def_extern_entry(fn__pprint__colon_line_0_0)
MR_def_extern_entry(fn__pprint__space_line_0_0)
MR_def_extern_entry(fn__pprint__comma_space_line_0_0)
MR_def_extern_entry(fn__pprint__semic_space_line_0_0)
MR_def_extern_entry(fn__pprint__colon_space_line_0_0)
MR_def_extern_entry(fn__pprint__word_wrapped_1_0)
MR_decl_static(fn__pprint__maybe_parens_3_0)
MR_decl_static(fn__pprint__adjusted_by_2_0)
MR_decl_static(pprint__dynamic_cast_to_version_array_2_0)
MR_decl_static(pprint__dynamic_cast_to_list_2_0)
MR_decl_static(pprint__dynamic_cast_to_map_2_0)
MR_decl_static(pprint__dynamic_cast_to_map_pair_2_0)
MR_decl_static(pprint__dynamic_cast_to_robdd_2_0)
MR_decl_static(fn__pprint__list_to_doc_2_0)
MR_decl_static(fn__pprint__sparse_bitset_to_doc_2_0)
MR_decl_static(fn__pprint__array_to_doc_2_0)
MR_decl_static(fn__pprint__version_array_to_doc_2_0)
MR_decl_static(fn__pprint__tuple_to_doc_2_0)
MR_decl_static(fn__pprint__map_to_doc_2_0)
MR_decl_static(fn__pprint__robdd_to_doc_2_0)
MR_def_extern_entry(fn__pprint__to_doc_2_0)
MR_def_extern_entry(fn__pprint__to_doc_3_0)
MR_decl_static(fn__pprint__generic_term_to_doc_3_0)
MR_decl_static(fn__pprint__univ_to_doc_3_0)
MR_decl_static(fn__pprint__var_to_doc_2_0)
MR_decl_static(fn__pprint__map_pair_to_doc_2_0)
MR_def_extern_entry(fn__pprint__to_doc_1_0)
MR_decl_static(fn__pprint__ff_2_0)
MR_decl_static(fn__pprint__extend_2_0)
MR_def_extern_entry(pprint__lb_8_0)
MR_def_extern_entry(pprint__lb_8_1)
MR_def_extern_entry(pprint__layout_best_5_0)
MR_def_extern_entry(pprint__layout_best_5_1)
MR_def_extern_entry(fn__pprint__to_string_2_0)
MR_def_extern_entry(pprint__write_4_0)
MR_def_extern_entry(pprint__write_5_0)
MR_def_extern_entry(__Unify___pprint__depth_0_0)
MR_def_extern_entry(__Compare___pprint__depth_0_0)
MR_def_extern_entry(__Unify___pprint__doc_0_0)
MR_def_extern_entry(__Compare___pprint__doc_0_0)
MR_def_extern_entry(__Unify___pprint__map_pair_2_0)
MR_def_extern_entry(__Compare___pprint__map_pair_2_0)
MR_def_extern_entry(fn__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_0)
MR_def_extern_entry(fn__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_0)
MR_def_extern_entry(fn__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_0)
MR_def_extern_entry(fn__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_0)
MR_def_extern_entry(fn__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_0)
MR_decl_static(pprint__IntroducedFrom__pred__to_string__443__1_3_0)
MR_decl_static(fn__pprint__list__map__ho35_2_0)
MR_decl_static(pprint__string__next_boundary__ho38_4_0)
MR_decl_static(pprint__string__words_2__ho39_4_0)
MR_decl_static(pprint__lb__ho40_8_0)
MR_decl_static(pprint__lb__ho41_8_0)
MR_decl_static(pprint__layout_flat__ho48_6_0)
MR_decl_static(pprint__layout_flat__ho49_6_0)
MR_decl_static(pprint__string__next_boundary__ho17__ho50_4_0)
MR_decl_static(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0)
MR_decl_static(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1)
MR_decl_static(fn__f_112_112_114_105_110_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_def_extern_entry(fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_99_104_97_114_97_99_116_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0)
MR_def_extern_entry(fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_102_108_111_97_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0)
MR_def_extern_entry(fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_105_110_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0)
MR_def_extern_entry(fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_115_116_114_105_110_103_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0)
MR_def_extern_entry(fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0)
MR_decl_static(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_0)
MR_decl_static(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_54_95_95_91_50_93_95_48_2_0)
MR_decl_static(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_55_95_95_91_51_44_32_52_93_95_48_2_0)
MR_decl_static(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0)
MR_decl_static(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_0)
MR_decl_static(fn__f_112_112_114_105_110_116_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0)
MR_decl_static(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0)
MR_decl_static(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0)

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_sparse_bitset__type_ctor_info_sparse_bitset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_enum__enum__arity1__int__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_ops__type_ctor_info_mercury_op_table_0;
static const struct mercury_type_0 mercury_common_0[8] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_pprint__doc__arity1__pprint__doc__arity0__,
MR_CTOR0_ADDR(pprint, doc)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_pprint__doc__arity1__string__arity0__,
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(sparse_bitset, sparse_bitset),
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__int__arity0__,
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(sparse_bitset, sparse_bitset),
MR_TAG_COMMON(0,0,4)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_pprint__doc__arity1__int__arity0__,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__,
MR_CTOR0_ADDR(ops, mercury_op_table)
}
},
};

static const struct mercury_type_1 mercury_common_1[9] =
{
{
1,
MR_string_const("...", 3)
},
{
1,
MR_string_const(",", 1)
},
{
1,
MR_string_const(";", 1)
},
{
1,
MR_string_const(":", 1)
},
{
1,
MR_string_const(" ", 1)
},
{
1,
MR_string_const(", ", 2)
},
{
1,
MR_string_const("; ", 2)
},
{
1,
MR_string_const(": ", 2)
},
{
1,
MR_string_const(" -> ", 4)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_pprint__type_ctor_info_depth_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___pprint__depth_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___pprint__depth_0_0)),
	"pprint",
	"depth",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_pprint__du_functor_desc_doc_0_0 = {
	"NIL",
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
extern const MR_TypeCtorInfo_Struct mercury_data_pprint__type_ctor_info_doc_0;

const MR_PseudoTypeInfo mercury_data_pprint__field_types_doc_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_pprint__type_ctor_info_doc_0,
	(MR_PseudoTypeInfo) &mercury_data_pprint__type_ctor_info_doc_0
};

static const MR_DuFunctorDesc mercury_data_pprint__du_functor_desc_doc_0_1 = {
	"SEQ",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_pprint__field_types_doc_0_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_pprint__field_types_doc_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_pprint__type_ctor_info_doc_0
};

static const MR_DuFunctorDesc mercury_data_pprint__du_functor_desc_doc_0_2 = {
	"NEST",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_pprint__field_types_doc_0_2,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_pprint__field_types_doc_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_pprint__type_ctor_info_doc_0
};

static const MR_DuFunctorDesc mercury_data_pprint__du_functor_desc_doc_0_3 = {
	"LABEL",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_pprint__field_types_doc_0_3,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_pprint__field_types_doc_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_pprint__du_functor_desc_doc_0_4 = {
	"TEXT",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_pprint__field_types_doc_0_4,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_pprint__du_functor_desc_doc_0_5 = {
	"LINE",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_pprint__field_types_doc_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_pprint__type_ctor_info_doc_0
};

static const MR_DuFunctorDesc mercury_data_pprint__du_functor_desc_doc_0_6 = {
	"GROUP",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	6,
	(MR_PseudoTypeInfo *) mercury_data_pprint__field_types_doc_0_6,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;

const MR_PseudoTypeInfo mercury_data_pprint__field_types_doc_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_univ__type_ctor_info_univ_0
};

static const MR_DuFunctorDesc mercury_data_pprint__du_functor_desc_doc_0_7 = {
	"DOC",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	7,
	(MR_PseudoTypeInfo *) mercury_data_pprint__field_types_doc_0_7,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_pprint__du_stag_ordered_doc_0_0[] = {
	&mercury_data_pprint__du_functor_desc_doc_0_0,
	&mercury_data_pprint__du_functor_desc_doc_0_5

};

const MR_DuFunctorDescPtr mercury_data_pprint__du_stag_ordered_doc_0_1[] = {
	&mercury_data_pprint__du_functor_desc_doc_0_1

};

const MR_DuFunctorDescPtr mercury_data_pprint__du_stag_ordered_doc_0_2[] = {
	&mercury_data_pprint__du_functor_desc_doc_0_2

};

const MR_DuFunctorDescPtr mercury_data_pprint__du_stag_ordered_doc_0_3[] = {
	&mercury_data_pprint__du_functor_desc_doc_0_3,
	&mercury_data_pprint__du_functor_desc_doc_0_4,
	&mercury_data_pprint__du_functor_desc_doc_0_6,
	&mercury_data_pprint__du_functor_desc_doc_0_7

};

const MR_DuPtagLayout mercury_data_pprint__du_ptag_ordered_doc_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_pprint__du_stag_ordered_doc_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_pprint__du_stag_ordered_doc_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_pprint__du_stag_ordered_doc_0_2 },
	{ 4, MR_SECTAG_REMOTE,
	mercury_data_pprint__du_stag_ordered_doc_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_pprint__du_name_ordered_doc_0[] = {
	&mercury_data_pprint__du_functor_desc_doc_0_7,
	&mercury_data_pprint__du_functor_desc_doc_0_6,
	&mercury_data_pprint__du_functor_desc_doc_0_3,
	&mercury_data_pprint__du_functor_desc_doc_0_5,
	&mercury_data_pprint__du_functor_desc_doc_0_2,
	&mercury_data_pprint__du_functor_desc_doc_0_0,
	&mercury_data_pprint__du_functor_desc_doc_0_1,
	&mercury_data_pprint__du_functor_desc_doc_0_4
};

const MR_Integer mercury_data_pprint__functor_number_map_doc_0[] = {
	5,
	6,
	4,
	2,
	7,
	3,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_pprint__type_ctor_info_doc_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___pprint__doc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___pprint__doc_0_0)),
	"pprint",
	"doc",
	{ (void *)mercury_data_pprint__du_name_ordered_doc_0 },
	{ (void *)mercury_data_pprint__du_ptag_ordered_doc_0 },
	8,
	4,
	mercury_data_pprint__functor_number_map_doc_0
};

const MR_PseudoTypeInfo mercury_data_pprint__field_types_map_pair_2_0[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
};

static const MR_DuFunctorDesc mercury_data_pprint__du_functor_desc_map_pair_2_0 = {
	"map_pair",
	2,
	3,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_pprint__field_types_map_pair_2_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_pprint__du_stag_ordered_map_pair_2_0[] = {
	&mercury_data_pprint__du_functor_desc_map_pair_2_0

};

const MR_DuPtagLayout mercury_data_pprint__du_ptag_ordered_map_pair_2[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_pprint__du_stag_ordered_map_pair_2_0 }

};

const MR_DuFunctorDescPtr mercury_data_pprint__du_name_ordered_map_pair_2[] = {
	&mercury_data_pprint__du_functor_desc_map_pair_2_0
};

const MR_Integer mercury_data_pprint__functor_number_map_map_pair_2[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_pprint__type_ctor_info_map_pair_2 = {
	2,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___pprint__map_pair_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___pprint__map_pair_2_0)),
	"pprint",
	"map_pair",
	{ (void *)mercury_data_pprint__du_name_ordered_map_pair_2 },
	{ (void *)mercury_data_pprint__du_ptag_ordered_map_pair_2 },
	1,
	4,
	mercury_data_pprint__functor_number_map_map_pair_2
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_pprint__doc__arity1__character__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 1,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_0))
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_pprint__doc__arity1__float__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 1,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_0))
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_pprint__doc__arity1__int__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 1,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_0))
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_pprint__doc__arity1__string__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 1,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_0))
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_pprint__doc__arity1__pprint__doc__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 1,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_0))
};

const MR_ConstString mercury_data_pprint__type_class_id_var_names_doc_1[] = {
	"T",
};

const MR_TypeClassMethod mercury_data_pprint__type_class_id_method_ids_doc_1[] = {
	{ "doc", 3, MR_FUNCTION },
};

static const MR_TypeClassId mercury_data_pprint__type_class_id_doc_1 = {
	"pprint",
	"doc",
	1,
	1,
	1,
	mercury_data_pprint__type_class_id_var_names_doc_1,
	mercury_data_pprint__type_class_id_method_ids_doc_1
};

const MR_TypeClassDeclStruct mercury_data_pprint__type_class_decl_doc_1 = {
	&mercury_data_pprint__type_class_id_doc_1,
	0,
	0,
	NULL
};



MR_declare_entry(mercury__do_call_class_method_2);

MR_BEGIN_MODULE(pprint_module0)
	MR_init_entry1(fn__pprint__doc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__doc_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'doc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__doc_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__doc_2_0));
	MR_np_tailcall_ent(do_call_class_method_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module1)
	MR_init_entry1(fn__pprint__doc_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__doc_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'doc'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__doc_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__doc_1_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 882 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_r4 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__doc_1_0));
	MR_np_tailcall_ent(do_call_class_method_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module2)
	MR_init_entry1(fn__f_112_112_114_105_110_116_95_95_60_62_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_112_114_105_110_116_95_95_60_62_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '<>'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_112_112_114_105_110_116_95_95_60_62_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module3)
	MR_init_entry1(fn__f_112_112_114_105_110_116_95_95_43_43_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_112_114_105_110_116_95_95_43_43_2_0);
	MR_init_label2(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '++'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_112_112_114_105_110_116_95_95_43_43_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__f_112_112_114_105_110_116_95_95_43_43_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 957 "pprint.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__f_112_112_114_105_110_116_95_95_43_43_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__f_112_112_114_105_110_116_95_95_43_43_2_0_i2);
MR_def_label(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__f_112_112_114_105_110_116_95_95_43_43_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 987 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__f_112_112_114_105_110_116_95_95_43_43_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__f_112_112_114_105_110_116_95_95_43_43_2_0_i3);
MR_def_label(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module4)
	MR_init_entry1(fn__pprint__nil_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__nil_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nil'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__nil_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module5)
	MR_init_entry1(fn__pprint__text_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__text_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'text'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__text_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module6)
	MR_init_entry1(fn__pprint__line_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__line_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'line'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__line_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module7)
	MR_init_entry1(fn__pprint__nest_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__nest_2_0);
	MR_init_label1(fn__pprint__nest_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nest'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__nest_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__nest_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 1117 "pprint.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__nest_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__nest_2_0_i2);
MR_def_label(fn__pprint__nest_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	MR_tfield(2, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module8)
	MR_init_entry1(fn__pprint__label_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__label_2_0);
	MR_init_label1(fn__pprint__label_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'label'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__label_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__label_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 1176 "pprint.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__label_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__label_2_0_i2);
MR_def_label(fn__pprint__label_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module9)
	MR_init_entry1(fn__pprint__group_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__group_1_0);
	MR_init_label1(fn__pprint__group_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'group'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__group_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__group_1_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 1234 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_r4 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__group_1_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__group_1_0_i2);
MR_def_label(fn__pprint__group_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_char_list_2_1);
MR_decl_entry(string__format_3_0);
MR_decl_entry(string__int_to_base_string_3_0);

MR_BEGIN_MODULE(pprint_module10)
	MR_init_entry1(fn__pprint__poly_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__poly_1_0);
	MR_init_label5(fn__pprint__poly_1_0,3,9,7,12,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'poly'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__poly_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(fn__pprint__poly_1_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(3, MR_r1, 0);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_char_list_2_1,
		fn__pprint__poly_1_0_i9);
MR_def_label(fn__pprint__poly_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__pprint__poly_1_0_i7);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("%f", 2);
	MR_np_call_localret_ent(string__format_3_0,
		fn__pprint__poly_1_0_i9);
MR_def_label(fn__pprint__poly_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__pprint__poly_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__pprint__poly_1_0_i11);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		fn__pprint__poly_1_0_i12);
MR_def_label(fn__pprint__poly_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(fn__pprint__poly_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module11)
	MR_init_entry1(fn__f_112_112_114_105_110_116_95_95_60_47_62_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_112_114_105_110_116_95_95_60_47_62_2_0);
	MR_init_label1(fn__f_112_112_114_105_110_116_95_95_60_47_62_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '</>'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_112_112_114_105_110_116_95_95_60_47_62_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,
		fn__f_112_112_114_105_110_116_95_95_60_47_62_2_0_i3);
MR_def_label(fn__f_112_112_114_105_110_116_95_95_60_47_62_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module12)
	MR_init_entry1(fn__pprint__bracketed_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__bracketed_3_0);
	MR_init_label4(fn__pprint__bracketed_3_0,3,4,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bracketed'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__bracketed_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__bracketed_3_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 1423 "pprint.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r6;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__bracketed_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__bracketed_3_0_i3);
MR_def_label(fn__pprint__bracketed_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__bracketed_3_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 1456 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__bracketed_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__bracketed_3_0_i4);
MR_def_label(fn__pprint__bracketed_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__bracketed_3_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 1492 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__bracketed_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__bracketed_3_0_i6);
MR_def_label(fn__pprint__bracketed_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__bracketed_3_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 1521 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__bracketed_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__bracketed_3_0_i7);
MR_def_label(fn__pprint__bracketed_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module13)
	MR_init_entry1(fn__pprint__parentheses_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__parentheses_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parentheses'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__parentheses_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("(", 1);
	MR_r5 = (MR_Word) MR_string_const(")", 1);
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(fn__pprint__bracketed_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module14)
	MR_init_entry1(fn__pprint__brackets_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__brackets_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'brackets'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__brackets_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("[", 1);
	MR_r5 = (MR_Word) MR_string_const("]", 1);
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(fn__pprint__bracketed_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module15)
	MR_init_entry1(fn__pprint__braces_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__braces_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'braces'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__braces_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("{", 1);
	MR_r5 = (MR_Word) MR_string_const("}", 1);
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(fn__pprint__bracketed_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module16)
	MR_init_entry1(fn__pprint__ellipsis_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__ellipsis_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ellipsis'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__ellipsis_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module17)
	MR_init_entry1(fn__pprint__packed_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__packed_3_0);
	MR_init_label10(fn__pprint__packed_3_0,60,8,7,10,11,12,5,16,17,19)
	MR_init_label5(fn__pprint__packed_3_0,20,22,14,26,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'packed'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__packed_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(fn__pprint__packed_3_0_i60);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__pprint__packed_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r6 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(fn__pprint__packed_3_0_i5);
	}
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	if (((MR_Integer) 0 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__pprint__packed_3_0_i7);
	}
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__packed_3_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 1717 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r2;
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__packed_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__packed_3_0_i8);
MR_def_label(fn__pprint__packed_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 1);
	MR_GOTO_LAB(fn__pprint__packed_3_0_i10);
MR_def_label(fn__pprint__packed_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_r1 = MR_sv(5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 1);
MR_def_label(fn__pprint__packed_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,
		fn__pprint__packed_3_0_i11);
MR_def_label(fn__pprint__packed_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__packed_3_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 1761 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__packed_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__packed_3_0_i12);
MR_def_label(fn__pprint__packed_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
MR_def_label(fn__pprint__packed_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__pprint__packed_3_0_i14);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__packed_3_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 1803 "pprint.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(6) = MR_r6;
	MR_r1 = MR_r2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(1, MR_r5, 0);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__packed_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__packed_3_0_i16);
MR_def_label(fn__pprint__packed_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__packed_3_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 1837 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__packed_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__packed_3_0_i17);
MR_def_label(fn__pprint__packed_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 1);
	}
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,
		fn__pprint__packed_3_0_i19);
MR_def_label(fn__pprint__packed_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__packed_3_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 1878 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__packed_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__packed_3_0_i20);
MR_def_label(fn__pprint__packed_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	}
	MR_np_localcall_lab(fn__pprint__packed_3_0,
		fn__pprint__packed_3_0_i22);
MR_def_label(fn__pprint__packed_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0);
	}
MR_def_label(fn__pprint__packed_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,
		fn__pprint__packed_3_0_i26);
MR_def_label(fn__pprint__packed_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__packed_3_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 1947 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__packed_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__packed_3_0_i27);
MR_def_label(fn__pprint__packed_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module18)
	MR_init_entry1(fn__pprint__packed_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__packed_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'packed'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__packed_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__packed_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 2007 "pprint.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(fn__pprint__packed_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module19)
	MR_init_entry1(fn__pprint__packed_cs_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__packed_cs_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'packed_cs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__packed_cs_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__packed_cs_1_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 2052 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const(", ", 2);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(fn__pprint__packed_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module20)
	MR_init_entry1(fn__pprint__packed_cs_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__packed_cs_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'packed_cs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__packed_cs_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = (MR_Word) MR_string_const(", ", 2);
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(fn__pprint__packed_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module21)
	MR_init_entry1(fn__pprint__packed_cs_to_depth_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__packed_cs_to_depth_2_0);
	MR_init_label1(fn__pprint__packed_cs_to_depth_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'packed_cs_to_depth'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__packed_cs_to_depth_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_55_95_95_91_51_44_32_52_93_95_48_2_0,
		fn__pprint__packed_cs_to_depth_2_0_i3);
MR_def_label(fn__pprint__packed_cs_to_depth_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(", ", 2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__pprint__packed_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module22)
	MR_init_entry1(fn__pprint__packed_cs_univ_args_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__packed_cs_univ_args_2_0);
	MR_init_label1(fn__pprint__packed_cs_univ_args_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'packed_cs_univ_args'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__packed_cs_univ_args_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_54_95_95_91_50_93_95_48_2_0,
		fn__pprint__packed_cs_univ_args_2_0_i3);
MR_def_label(fn__pprint__packed_cs_univ_args_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const(", ", 2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__pprint__packed_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(pprint_module23)
	MR_init_entry1(fn__pprint__separated_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__separated_3_0);
	MR_init_label6(fn__pprint__separated_3_0,32,4,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'separated'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__separated_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(fn__pprint__separated_3_0_i32);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__pprint__separated_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_r6 = MR_tfield(1, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(fn__pprint__separated_3_0_i4);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r6;
	MR_decr_sp(7);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__separated_3_0));
	MR_np_tailcall_ent(do_call_closure_1);
	}
MR_def_label(fn__pprint__separated_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(6) = MR_r4;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__separated_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__pprint__separated_3_0_i8);
MR_def_label(fn__pprint__separated_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	}
	MR_np_localcall_lab(fn__pprint__separated_3_0,
		fn__pprint__separated_3_0_i9);
MR_def_label(fn__pprint__separated_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__separated_3_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 2271 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__separated_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__separated_3_0_i10);
MR_def_label(fn__pprint__separated_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__separated_3_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 2302 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__separated_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__separated_3_0_i11);
MR_def_label(fn__pprint__separated_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module24)
	MR_init_entry1(fn__pprint__comma_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__comma_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'comma'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__comma_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module25)
	MR_init_entry1(fn__pprint__semic_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__semic_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'semic'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__semic_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module26)
	MR_init_entry1(fn__pprint__colon_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__colon_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'colon'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__colon_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module27)
	MR_init_entry1(fn__pprint__space_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__space_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'space'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__space_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module28)
	MR_init_entry1(fn__pprint__comma_space_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__comma_space_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'comma_space'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__comma_space_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module29)
	MR_init_entry1(fn__pprint__semic_space_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__semic_space_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'semic_space'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__semic_space_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module30)
	MR_init_entry1(fn__pprint__colon_space_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__colon_space_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'colon_space'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__colon_space_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module31)
	MR_init_entry1(fn__pprint__comma_line_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__comma_line_0_0);
	MR_init_label2(fn__pprint__comma_line_0_0,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'comma_line'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__comma_line_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__comma_line_0_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 2523 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r4 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__comma_line_0_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__comma_line_0_0_i4);
MR_def_label(fn__pprint__comma_line_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__comma_line_0_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 2550 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__comma_line_0_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__comma_line_0_0_i5);
MR_def_label(fn__pprint__comma_line_0_0,5)
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


MR_BEGIN_MODULE(pprint_module32)
	MR_init_entry1(fn__pprint__semic_line_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__semic_line_0_0);
	MR_init_label2(fn__pprint__semic_line_0_0,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'semic_line'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__semic_line_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__semic_line_0_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 2605 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r4 = (MR_Word) MR_string_const(";", 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__semic_line_0_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__semic_line_0_0_i4);
MR_def_label(fn__pprint__semic_line_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__semic_line_0_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 2632 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__semic_line_0_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__semic_line_0_0_i5);
MR_def_label(fn__pprint__semic_line_0_0,5)
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


MR_BEGIN_MODULE(pprint_module33)
	MR_init_entry1(fn__pprint__colon_line_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__colon_line_0_0);
	MR_init_label2(fn__pprint__colon_line_0_0,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'colon_line'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__colon_line_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__colon_line_0_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 2687 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r4 = (MR_Word) MR_string_const(":", 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__colon_line_0_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__colon_line_0_0_i4);
MR_def_label(fn__pprint__colon_line_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__colon_line_0_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 2714 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__colon_line_0_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__colon_line_0_0_i5);
MR_def_label(fn__pprint__colon_line_0_0,5)
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


MR_BEGIN_MODULE(pprint_module34)
	MR_init_entry1(fn__pprint__space_line_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__space_line_0_0);
	MR_init_label2(fn__pprint__space_line_0_0,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'space_line'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__space_line_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__space_line_0_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 2769 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r4 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__space_line_0_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__space_line_0_0_i4);
MR_def_label(fn__pprint__space_line_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__space_line_0_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 2796 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__space_line_0_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__space_line_0_0_i5);
MR_def_label(fn__pprint__space_line_0_0,5)
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


MR_BEGIN_MODULE(pprint_module35)
	MR_init_entry1(fn__pprint__comma_space_line_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__comma_space_line_0_0);
	MR_init_label2(fn__pprint__comma_space_line_0_0,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'comma_space_line'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__comma_space_line_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__comma_space_line_0_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 2851 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r4 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__comma_space_line_0_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__comma_space_line_0_0_i4);
MR_def_label(fn__pprint__comma_space_line_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__comma_space_line_0_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 2878 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__comma_space_line_0_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__comma_space_line_0_0_i5);
MR_def_label(fn__pprint__comma_space_line_0_0,5)
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


MR_BEGIN_MODULE(pprint_module36)
	MR_init_entry1(fn__pprint__semic_space_line_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__semic_space_line_0_0);
	MR_init_label2(fn__pprint__semic_space_line_0_0,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'semic_space_line'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__semic_space_line_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__semic_space_line_0_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 2933 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r4 = (MR_Word) MR_string_const("; ", 2);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__semic_space_line_0_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__semic_space_line_0_0_i4);
MR_def_label(fn__pprint__semic_space_line_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__semic_space_line_0_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 2960 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__semic_space_line_0_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__semic_space_line_0_0_i5);
MR_def_label(fn__pprint__semic_space_line_0_0,5)
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


MR_BEGIN_MODULE(pprint_module37)
	MR_init_entry1(fn__pprint__colon_space_line_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__colon_space_line_0_0);
	MR_init_label2(fn__pprint__colon_space_line_0_0,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'colon_space_line'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__colon_space_line_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__colon_space_line_0_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 3015 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r4 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__colon_space_line_0_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__colon_space_line_0_0_i4);
MR_def_label(fn__pprint__colon_space_line_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__colon_space_line_0_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 3042 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__colon_space_line_0_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__colon_space_line_0_0_i5);
MR_def_label(fn__pprint__colon_space_line_0_0,5)
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


MR_BEGIN_MODULE(pprint_module38)
	MR_init_entry1(fn__pprint__word_wrapped_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__word_wrapped_1_0);
	MR_init_label3(fn__pprint__word_wrapped_1_0,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'word_wrapped'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__word_wrapped_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,1,4);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(pprint__string__next_boundary__ho38_4_0,
		fn__pprint__word_wrapped_1_0_i4);
MR_def_label(fn__pprint__word_wrapped_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(pprint__string__words_2__ho39_4_0,
		fn__pprint__word_wrapped_1_0_i5);
MR_def_label(fn__pprint__word_wrapped_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__pprint__list__map__ho35_2_0,
		fn__pprint__word_wrapped_1_0_i6);
MR_def_label(fn__pprint__word_wrapped_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__pprint__packed_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module39)
	MR_init_entry1(fn__pprint__maybe_parens_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__maybe_parens_3_0);
	MR_init_label1(fn__pprint__maybe_parens_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_parens'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pprint__maybe_parens_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(fn__pprint__maybe_parens_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = (MR_Word) MR_string_const("(", 1);
	MR_r5 = (MR_Word) MR_string_const(")", 1);
	MR_r6 = MR_tempr1;
	MR_np_tailcall_ent(fn__pprint__bracketed_3_0);
	}
MR_def_label(fn__pprint__maybe_parens_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module40)
	MR_init_entry1(fn__pprint__adjusted_by_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__adjusted_by_2_0);
	MR_init_label1(fn__pprint__adjusted_by_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'adjusted_by'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pprint__adjusted_by_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__pprint__adjusted_by_2_0_i2);
	}
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
MR_def_label(fn__pprint__adjusted_by_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_type_desc__type_ctor_info_type_desc_0;
MR_decl_entry(__Unify___list__list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_version_array__type_ctor_info_version_array_1;
MR_decl_entry(private_builtin__typed_unify_2_1);

MR_BEGIN_MODULE(pprint_module41)
	MR_init_entry1(pprint__dynamic_cast_to_version_array_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pprint__dynamic_cast_to_version_array_2_0);
	MR_init_label3(pprint__dynamic_cast_to_version_array_2_0,3,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dynamic_cast_to_version_array'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pprint__dynamic_cast_to_version_array_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__pprint__dynamic_cast_to_version_array_2_0
	TypeInfo_for_T = MR_r1;
{
#line 57 "type_desc.opt"
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
#line 3233 "pprint.c"
	MR_r4 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgTypes;
#define	MR_PROC_LABEL	mercury__pprint__dynamic_cast_to_version_array_2_0
	TypeDesc = MR_r4;
{
#line 77 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
};}
#line 3259 "pprint.c"
	MR_tempr1 = ArgTypes;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(pprint__dynamic_cast_to_version_array_2_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		pprint__dynamic_cast_to_version_array_2_0_i3);
MR_def_label(pprint__dynamic_cast_to_version_array_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pprint__dynamic_cast_to_version_array_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__pprint__dynamic_cast_to_version_array_2_0
	TypeInfo = MR_sv(1);
{
#line 73 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;
;}
#line 3293 "pprint.c"
	MR_tempr1 = TypeInfo_for_T;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		pprint__dynamic_cast_to_version_array_2_0_i6);
MR_def_label(pprint__dynamic_cast_to_version_array_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pprint__dynamic_cast_to_version_array_2_0_i1);
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
MR_def_label(pprint__dynamic_cast_to_version_array_2_0,1)
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

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

MR_BEGIN_MODULE(pprint_module42)
	MR_init_entry1(pprint__dynamic_cast_to_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pprint__dynamic_cast_to_list_2_0);
	MR_init_label3(pprint__dynamic_cast_to_list_2_0,3,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dynamic_cast_to_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pprint__dynamic_cast_to_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__pprint__dynamic_cast_to_list_2_0
	TypeInfo_for_T = MR_r1;
{
#line 57 "type_desc.opt"
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
#line 3375 "pprint.c"
	MR_r4 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgTypes;
#define	MR_PROC_LABEL	mercury__pprint__dynamic_cast_to_list_2_0
	TypeDesc = MR_r4;
{
#line 77 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
};}
#line 3401 "pprint.c"
	MR_tempr1 = ArgTypes;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(pprint__dynamic_cast_to_list_2_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		pprint__dynamic_cast_to_list_2_0_i3);
MR_def_label(pprint__dynamic_cast_to_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pprint__dynamic_cast_to_list_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__pprint__dynamic_cast_to_list_2_0
	TypeInfo = MR_sv(1);
{
#line 73 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;
;}
#line 3435 "pprint.c"
	MR_tempr1 = TypeInfo_for_T;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		pprint__dynamic_cast_to_list_2_0_i6);
MR_def_label(pprint__dynamic_cast_to_list_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pprint__dynamic_cast_to_list_2_0_i1);
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
MR_def_label(pprint__dynamic_cast_to_list_2_0,1)
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

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;

MR_BEGIN_MODULE(pprint_module43)
	MR_init_entry1(pprint__dynamic_cast_to_map_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pprint__dynamic_cast_to_map_2_0);
	MR_init_label3(pprint__dynamic_cast_to_map_2_0,4,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dynamic_cast_to_map'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pprint__dynamic_cast_to_map_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__pprint__dynamic_cast_to_map_2_0
	TypeInfo_for_T = MR_r1;
{
#line 57 "type_desc.opt"
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
#line 3517 "pprint.c"
	MR_r4 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgTypes;
#define	MR_PROC_LABEL	mercury__pprint__dynamic_cast_to_map_2_0
	TypeDesc = MR_r4;
{
#line 77 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
};}
#line 3543 "pprint.c"
	MR_tempr1 = ArgTypes;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(pprint__dynamic_cast_to_map_2_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(pprint__dynamic_cast_to_map_2_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		pprint__dynamic_cast_to_map_2_0_i4);
MR_def_label(pprint__dynamic_cast_to_map_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pprint__dynamic_cast_to_map_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__pprint__dynamic_cast_to_map_2_0
	TypeInfo = MR_sv(3);
{
#line 73 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;
;}
#line 3583 "pprint.c"
	MR_tempr1 = TypeInfo_for_T;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__pprint__dynamic_cast_to_map_2_0
	TypeInfo = MR_sv(1);
{
#line 73 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;
;}
#line 3597 "pprint.c"
	MR_tempr2 = TypeInfo_for_T;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tfield(0, MR_r2, 2) = MR_tempr2;
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		pprint__dynamic_cast_to_map_2_0_i7);
MR_def_label(pprint__dynamic_cast_to_map_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pprint__dynamic_cast_to_map_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(pprint__dynamic_cast_to_map_2_0,1)
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


MR_BEGIN_MODULE(pprint_module44)
	MR_init_entry1(pprint__dynamic_cast_to_map_pair_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pprint__dynamic_cast_to_map_pair_2_0);
	MR_init_label3(pprint__dynamic_cast_to_map_pair_2_0,4,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dynamic_cast_to_map_pair'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pprint__dynamic_cast_to_map_pair_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__pprint__dynamic_cast_to_map_pair_2_0
	TypeInfo_for_T = MR_r1;
{
#line 57 "type_desc.opt"
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
#line 3681 "pprint.c"
	MR_r4 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgTypes;
#define	MR_PROC_LABEL	mercury__pprint__dynamic_cast_to_map_pair_2_0
	TypeDesc = MR_r4;
{
#line 77 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
};}
#line 3707 "pprint.c"
	MR_tempr1 = ArgTypes;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(pprint__dynamic_cast_to_map_pair_2_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(pprint__dynamic_cast_to_map_pair_2_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		pprint__dynamic_cast_to_map_pair_2_0_i4);
MR_def_label(pprint__dynamic_cast_to_map_pair_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pprint__dynamic_cast_to_map_pair_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__pprint__dynamic_cast_to_map_pair_2_0
	TypeInfo = MR_sv(3);
{
#line 73 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;
;}
#line 3747 "pprint.c"
	MR_tempr1 = TypeInfo_for_T;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__pprint__dynamic_cast_to_map_pair_2_0
	TypeInfo = MR_sv(1);
{
#line 73 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;
;}
#line 3761 "pprint.c"
	MR_tempr2 = TypeInfo_for_T;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR_ADDR(pprint, map_pair, 2);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tfield(0, MR_r2, 2) = MR_tempr2;
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		pprint__dynamic_cast_to_map_pair_2_0_i7);
MR_def_label(pprint__dynamic_cast_to_map_pair_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pprint__dynamic_cast_to_map_pair_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(pprint__dynamic_cast_to_map_pair_2_0,1)
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

extern const MR_TypeCtorInfo_Struct mercury_data_robdd__type_ctor_info_robdd_1;

MR_BEGIN_MODULE(pprint_module45)
	MR_init_entry1(pprint__dynamic_cast_to_robdd_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pprint__dynamic_cast_to_robdd_2_0);
	MR_init_label3(pprint__dynamic_cast_to_robdd_2_0,3,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dynamic_cast_to_robdd'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pprint__dynamic_cast_to_robdd_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__pprint__dynamic_cast_to_robdd_2_0
	TypeInfo_for_T = MR_r1;
{
#line 57 "type_desc.opt"
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
#line 3846 "pprint.c"
	MR_r4 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgTypes;
#define	MR_PROC_LABEL	mercury__pprint__dynamic_cast_to_robdd_2_0
	TypeDesc = MR_r4;
{
#line 77 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
};}
#line 3872 "pprint.c"
	MR_tempr1 = ArgTypes;
#undef	MR_PROC_LABEL
	}
	MR_r5 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(pprint__dynamic_cast_to_robdd_2_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		pprint__dynamic_cast_to_robdd_2_0_i3);
MR_def_label(pprint__dynamic_cast_to_robdd_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pprint__dynamic_cast_to_robdd_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__pprint__dynamic_cast_to_robdd_2_0
	TypeInfo = MR_sv(1);
{
#line 73 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;
;}
#line 3906 "pprint.c"
	MR_tempr1 = TypeInfo_for_T;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(robdd, robdd);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		pprint__dynamic_cast_to_robdd_2_0_i6);
MR_def_label(pprint__dynamic_cast_to_robdd_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pprint__dynamic_cast_to_robdd_2_0_i1);
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
MR_def_label(pprint__dynamic_cast_to_robdd_2_0,1)
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


MR_BEGIN_MODULE(pprint_module46)
	MR_init_entry1(fn__pprint__list_to_doc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__list_to_doc_2_0);
	MR_init_label2(fn__pprint__list_to_doc_2_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_to_doc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pprint__list_to_doc_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_np_call_localret_ent(fn__pprint__packed_cs_to_depth_2_0,
		fn__pprint__list_to_doc_2_0_i3);
MR_def_label(fn__pprint__list_to_doc_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__list_to_doc_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 3984 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__list_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__list_to_doc_2_0_i4);
MR_def_label(fn__pprint__list_to_doc_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("[", 1);
	MR_r5 = (MR_Word) MR_string_const("]", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__pprint__bracketed_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module47)
	MR_init_entry1(fn__pprint__sparse_bitset_to_doc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__sparse_bitset_to_doc_2_0);
	MR_init_label6(fn__pprint__sparse_bitset_to_doc_2_0,4,5,6,7,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sparse_bitset_to_doc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pprint__sparse_bitset_to_doc_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeClassInfo;
	MR_Integer	Index;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__pprint__sparse_bitset_to_doc_2_0
	TypeClassInfo = MR_r1;
	Index = (MR_Integer) 1;
{
#line 132 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);
;}
#line 4052 "pprint.c"
	MR_tempr1 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_0,
		fn__pprint__sparse_bitset_to_doc_2_0_i4);
MR_def_label(fn__pprint__sparse_bitset_to_doc_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pprint__list_to_doc_2_0,
		fn__pprint__sparse_bitset_to_doc_2_0_i5);
MR_def_label(fn__pprint__sparse_bitset_to_doc_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_string_const("(", 1);
	MR_r5 = (MR_Word) MR_string_const(")", 1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pprint__bracketed_3_0,
		fn__pprint__sparse_bitset_to_doc_2_0_i6);
MR_def_label(fn__pprint__sparse_bitset_to_doc_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__sparse_bitset_to_doc_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 4106 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = (MR_Word) MR_string_const("sparse_bitset", 13);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__sparse_bitset_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__sparse_bitset_to_doc_2_0_i7);
MR_def_label(fn__pprint__sparse_bitset_to_doc_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__sparse_bitset_to_doc_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 4133 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__sparse_bitset_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__sparse_bitset_to_doc_2_0_i8);
MR_def_label(fn__pprint__sparse_bitset_to_doc_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__sparse_bitset_to_doc_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 4170 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__sparse_bitset_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__sparse_bitset_to_doc_2_0_i10);
MR_def_label(fn__pprint__sparse_bitset_to_doc_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__fetch_items_4_0);

MR_BEGIN_MODULE(pprint_module48)
	MR_init_entry1(fn__pprint__array_to_doc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__array_to_doc_2_0);
	MR_init_label8(fn__pprint__array_to_doc_2_0,4,5,6,8,9,10,11,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'array_to_doc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pprint__array_to_doc_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Min;
#define	MR_PROC_LABEL	mercury__fn__pprint__array_to_doc_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r3, Array);
{
#line 238 "array.opt"

    /* Array not used */
    Min = 0;
;}
#line 4224 "pprint.c"
	MR_tempr1 = Min;
#undef	MR_PROC_LABEL
	}
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__array_to_doc_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r3, Array);
{
#line 246 "array.opt"

    Max = Array->size - 1;
;}
#line 4238 "pprint.c"
	MR_r4 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(array__fetch_items_4_0,
		fn__pprint__array_to_doc_2_0_i4);
MR_def_label(fn__pprint__array_to_doc_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(4) - (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pprint__packed_cs_to_depth_2_0,
		fn__pprint__array_to_doc_2_0_i5);
MR_def_label(fn__pprint__array_to_doc_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__array_to_doc_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 4278 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__array_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__array_to_doc_2_0_i6);
MR_def_label(fn__pprint__array_to_doc_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_string_const("[", 1);
	MR_r5 = (MR_Word) MR_string_const("]", 1);
	}
	MR_np_call_localret_ent(fn__pprint__bracketed_3_0,
		fn__pprint__array_to_doc_2_0_i8);
MR_def_label(fn__pprint__array_to_doc_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_string_const("(", 1);
	MR_r5 = (MR_Word) MR_string_const(")", 1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pprint__bracketed_3_0,
		fn__pprint__array_to_doc_2_0_i9);
MR_def_label(fn__pprint__array_to_doc_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__array_to_doc_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 4338 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r4 = (MR_Word) MR_string_const("array", 5);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__array_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__array_to_doc_2_0_i10);
MR_def_label(fn__pprint__array_to_doc_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__array_to_doc_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 4365 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__array_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__array_to_doc_2_0_i11);
MR_def_label(fn__pprint__array_to_doc_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__array_to_doc_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 4402 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__array_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__array_to_doc_2_0_i13);
MR_def_label(fn__pprint__array_to_doc_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module49)
	MR_init_entry1(fn__pprint__version_array_to_doc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__version_array_to_doc_2_0);
	MR_init_label8(fn__pprint__version_array_to_doc_2_0,4,5,6,8,9,10,11,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'version_array_to_doc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pprint__version_array_to_doc_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__pprint__version_array_to_doc_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 165 "version_array.opt"

    N = ML_va_size_dolock(VA);
;}
#line 4455 "pprint.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0,
		fn__pprint__version_array_to_doc_2_0_i4);
MR_def_label(fn__pprint__version_array_to_doc_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pprint__packed_cs_to_depth_2_0,
		fn__pprint__version_array_to_doc_2_0_i5);
MR_def_label(fn__pprint__version_array_to_doc_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__version_array_to_doc_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 4497 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__version_array_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__version_array_to_doc_2_0_i6);
MR_def_label(fn__pprint__version_array_to_doc_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_string_const("[", 1);
	MR_r5 = (MR_Word) MR_string_const("]", 1);
	}
	MR_np_call_localret_ent(fn__pprint__bracketed_3_0,
		fn__pprint__version_array_to_doc_2_0_i8);
MR_def_label(fn__pprint__version_array_to_doc_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_string_const("(", 1);
	MR_r5 = (MR_Word) MR_string_const(")", 1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pprint__bracketed_3_0,
		fn__pprint__version_array_to_doc_2_0_i9);
MR_def_label(fn__pprint__version_array_to_doc_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__version_array_to_doc_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 4557 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = (MR_Word) MR_string_const("version_array", 13);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__version_array_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__version_array_to_doc_2_0_i10);
MR_def_label(fn__pprint__version_array_to_doc_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__version_array_to_doc_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 4584 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__version_array_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__version_array_to_doc_2_0_i11);
MR_def_label(fn__pprint__version_array_to_doc_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__version_array_to_doc_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 4621 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__version_array_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__version_array_to_doc_2_0_i13);
MR_def_label(fn__pprint__version_array_to_doc_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(deconstruct__deconstruct_5_1);

MR_BEGIN_MODULE(pprint_module50)
	MR_init_entry1(fn__pprint__tuple_to_doc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__tuple_to_doc_2_0);
	MR_init_label5(fn__pprint__tuple_to_doc_2_0,2,4,5,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'tuple_to_doc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pprint__tuple_to_doc_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(deconstruct__deconstruct_5_1,
		fn__pprint__tuple_to_doc_2_0_i2);
MR_def_label(fn__pprint__tuple_to_doc_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(fn__pprint__packed_cs_univ_args_2_0,
		fn__pprint__tuple_to_doc_2_0_i4);
MR_def_label(fn__pprint__tuple_to_doc_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__tuple_to_doc_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 4694 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__tuple_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__tuple_to_doc_2_0_i5);
MR_def_label(fn__pprint__tuple_to_doc_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("{", 1);
	MR_r5 = (MR_Word) MR_string_const("}", 1);
	}
	MR_np_call_localret_ent(fn__pprint__bracketed_3_0,
		fn__pprint__tuple_to_doc_2_0_i8);
MR_def_label(fn__pprint__tuple_to_doc_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__tuple_to_doc_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 4740 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__tuple_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__tuple_to_doc_2_0_i9);
MR_def_label(fn__pprint__tuple_to_doc_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(tree234__tree234_to_assoc_list_2_3_0);

MR_BEGIN_MODULE(pprint_module51)
	MR_init_entry1(fn__pprint__map_to_doc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__map_to_doc_2_0);
	MR_init_label9(fn__pprint__map_to_doc_2_0,3,4,7,8,10,11,12,13,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_to_doc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pprint__map_to_doc_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pprint, map_pair, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(tree234__tree234_to_assoc_list_2_3_0,
		fn__pprint__map_to_doc_2_0_i3);
MR_def_label(fn__pprint__map_to_doc_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_0,
		fn__pprint__map_to_doc_2_0_i4);
MR_def_label(fn__pprint__map_to_doc_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (((MR_Integer) MR_tempr2 - (MR_Integer) 1) - (MR_Integer) 1);
	MR_r3 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__pprint__packed_cs_to_depth_2_0,
		fn__pprint__map_to_doc_2_0_i7);
MR_def_label(fn__pprint__map_to_doc_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__map_to_doc_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 4833 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__map_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__map_to_doc_2_0_i8);
MR_def_label(fn__pprint__map_to_doc_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_string_const("[", 1);
	MR_r5 = (MR_Word) MR_string_const("]", 1);
	}
	MR_np_call_localret_ent(fn__pprint__bracketed_3_0,
		fn__pprint__map_to_doc_2_0_i10);
MR_def_label(fn__pprint__map_to_doc_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_string_const("(", 1);
	MR_r5 = (MR_Word) MR_string_const(")", 1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pprint__bracketed_3_0,
		fn__pprint__map_to_doc_2_0_i11);
MR_def_label(fn__pprint__map_to_doc_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__map_to_doc_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 4893 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r4 = (MR_Word) MR_string_const("map", 3);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__map_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__map_to_doc_2_0_i12);
MR_def_label(fn__pprint__map_to_doc_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__map_to_doc_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 4920 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__map_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__map_to_doc_2_0_i13);
MR_def_label(fn__pprint__map_to_doc_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__map_to_doc_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 4957 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__map_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__map_to_doc_2_0_i15);
MR_def_label(fn__pprint__map_to_doc_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_robdd__type_ctor_info_literal_1;
MR_decl_entry(fn__robdd__dnf_1_0);

MR_BEGIN_MODULE(pprint_module52)
	MR_init_entry1(fn__pprint__robdd_to_doc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__robdd_to_doc_2_0);
	MR_init_label7(fn__pprint__robdd_to_doc_2_0,6,7,8,10,11,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'robdd_to_doc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pprint__robdd_to_doc_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(robdd, literal);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_sv(4) = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(fn__robdd__dnf_1_0,
		fn__pprint__robdd_to_doc_2_0_i6);
MR_def_label(fn__pprint__robdd_to_doc_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(4) - (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pprint__packed_cs_to_depth_2_0,
		fn__pprint__robdd_to_doc_2_0_i7);
MR_def_label(fn__pprint__robdd_to_doc_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__robdd_to_doc_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 5042 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__robdd_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__robdd_to_doc_2_0_i8);
MR_def_label(fn__pprint__robdd_to_doc_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_string_const("[", 1);
	MR_r5 = (MR_Word) MR_string_const("]", 1);
	}
	MR_np_call_localret_ent(fn__pprint__bracketed_3_0,
		fn__pprint__robdd_to_doc_2_0_i10);
MR_def_label(fn__pprint__robdd_to_doc_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_string_const("(", 1);
	MR_r5 = (MR_Word) MR_string_const(")", 1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pprint__bracketed_3_0,
		fn__pprint__robdd_to_doc_2_0_i11);
MR_def_label(fn__pprint__robdd_to_doc_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__robdd_to_doc_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 5102 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r4 = (MR_Word) MR_string_const("robdd_dnf", 9);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__robdd_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__robdd_to_doc_2_0_i12);
MR_def_label(fn__pprint__robdd_to_doc_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__robdd_to_doc_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 5129 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__robdd_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__robdd_to_doc_2_0_i13);
MR_def_label(fn__pprint__robdd_to_doc_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module53)
	MR_init_entry1(fn__pprint__to_doc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__to_doc_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_doc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__to_doc_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 1000;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(fn__pprint__to_doc_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__[];
MR_decl_entry(array__dynamic_cast_to_array_2_0);
MR_decl_entry(deconstruct__functor_4_1);

MR_BEGIN_MODULE(pprint_module54)
	MR_init_entry1(fn__pprint__to_doc_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__to_doc_3_0);
	MR_init_label10(fn__pprint__to_doc_3_0,5,8,2,3,13,11,20,17,27,26)
	MR_init_label10(fn__pprint__to_doc_3_0,32,31,37,36,41,40,45,44,50,49)
	MR_init_label2(fn__pprint__to_doc_3_0,55,54)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_doc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__to_doc_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__pprint__to_doc_3_0
	TypeInfo_for_T = MR_r1;
{
#line 57 "type_desc.opt"
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
#line 5229 "pprint.c"
	MR_r5 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeDesc;
	MR_Word	TypeCtorDesc;
	MR_Word	ArgTypes;
#define	MR_PROC_LABEL	mercury__fn__pprint__to_doc_3_0
	TypeDesc = MR_r5;
{
#line 77 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
};}
#line 5255 "pprint.c"
	MR_tempr1 = ArgTypes;
#undef	MR_PROC_LABEL
	}
	MR_r6 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__pprint__to_doc_3_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(type_desc, type_desc);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		fn__pprint__to_doc_3_0_i5);
MR_def_label(fn__pprint__to_doc_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__pprint__to_doc_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__fn__pprint__to_doc_3_0
	TypeInfo = MR_sv(5);
{
#line 73 "type_desc.opt"

    TypeInfo_for_T = TypeInfo;
;}
#line 5291 "pprint.c"
	MR_tempr1 = TypeInfo_for_T;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		fn__pprint__to_doc_3_0_i8);
MR_def_label(fn__pprint__to_doc_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__pprint__to_doc_3_0_i2);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__pprint__var_to_doc_2_0);
	}
MR_def_label(fn__pprint__to_doc_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(4);
MR_def_label(fn__pprint__to_doc_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		fn__pprint__to_doc_3_0_i13);
MR_def_label(fn__pprint__to_doc_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__pprint__to_doc_3_0_i11);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__pprint__sparse_bitset_to_doc_2_0);
	}
MR_def_label(fn__pprint__to_doc_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		fn__pprint__to_doc_3_0_i20);
MR_def_label(fn__pprint__to_doc_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__pprint__to_doc_3_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__;
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__pprint__sparse_bitset_to_doc_2_0);
	}
MR_def_label(fn__pprint__to_doc_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(pprint__dynamic_cast_to_list_2_0,
		fn__pprint__to_doc_3_0_i27);
MR_def_label(fn__pprint__to_doc_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__pprint__to_doc_3_0_i26);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__pprint__list_to_doc_2_0);
MR_def_label(fn__pprint__to_doc_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(array__dynamic_cast_to_array_2_0,
		fn__pprint__to_doc_3_0_i32);
MR_def_label(fn__pprint__to_doc_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__pprint__to_doc_3_0_i31);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__pprint__array_to_doc_2_0);
MR_def_label(fn__pprint__to_doc_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(pprint__dynamic_cast_to_version_array_2_0,
		fn__pprint__to_doc_3_0_i37);
MR_def_label(fn__pprint__to_doc_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__pprint__to_doc_3_0_i36);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__pprint__version_array_to_doc_2_0);
MR_def_label(fn__pprint__to_doc_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(deconstruct__functor_4_1,
		fn__pprint__to_doc_3_0_i41);
MR_def_label(fn__pprint__to_doc_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp(MR_string_const("{}", 2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(fn__pprint__to_doc_3_0_i40);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__pprint__tuple_to_doc_2_0);
MR_def_label(fn__pprint__to_doc_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(pprint__dynamic_cast_to_map_2_0,
		fn__pprint__to_doc_3_0_i45);
MR_def_label(fn__pprint__to_doc_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__pprint__to_doc_3_0_i44);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__pprint__map_to_doc_2_0);
MR_def_label(fn__pprint__to_doc_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(pprint__dynamic_cast_to_map_pair_2_0,
		fn__pprint__to_doc_3_0_i50);
MR_def_label(fn__pprint__to_doc_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__pprint__to_doc_3_0_i49);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__pprint__map_pair_to_doc_2_0);
MR_def_label(fn__pprint__to_doc_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(pprint__dynamic_cast_to_robdd_2_0,
		fn__pprint__to_doc_3_0_i55);
MR_def_label(fn__pprint__to_doc_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__pprint__to_doc_3_0_i54);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__pprint__robdd_to_doc_2_0);
MR_def_label(fn__pprint__to_doc_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__pprint__generic_term_to_doc_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ops__init_mercury_op_table_0_0);
MR_decl_entry(ops__lookup_prefix_op_4_0);
MR_decl_entry(ops__lookup_postfix_op_4_0);
MR_decl_entry(ops__lookup_infix_op_5_0);
MR_decl_entry(ops__lookup_binary_prefix_op_5_0);

MR_BEGIN_MODULE(pprint_module55)
	MR_init_entry1(fn__pprint__generic_term_to_doc_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__generic_term_to_doc_3_0);
	MR_init_label10(fn__pprint__generic_term_to_doc_3_0,3,4,10,2,13,14,20,24,25,26)
	MR_init_label10(fn__pprint__generic_term_to_doc_3_0,27,16,35,38,39,41,42,43,31,51)
	MR_init_label10(fn__pprint__generic_term_to_doc_3_0,54,55,56,58,59,60,61,62,63,64)
	MR_init_label10(fn__pprint__generic_term_to_doc_3_0,65,66,67,46,76,80,81,82,83,84)
	MR_init_label10(fn__pprint__generic_term_to_doc_3_0,85,86,87,88,89,90,91,92,93,71)
	MR_init_label5(fn__pprint__generic_term_to_doc_3_0,95,100,101,102,103)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generic_term_to_doc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pprint__generic_term_to_doc_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	if (MR_INT_GT(MR_r2,0)) {
		MR_GOTO_LAB(fn__pprint__generic_term_to_doc_3_0_i2);
	}
	MR_r2 = MR_r4;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(deconstruct__functor_4_1,
		fn__pprint__generic_term_to_doc_3_0_i3);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__pprint__generic_term_to_doc_3_0_i4);
	}
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(fn__pprint__text_1_0);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = (MR_Word) MR_string_const("/", 1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,
		fn__pprint__generic_term_to_doc_3_0_i10);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0);
	}
MR_def_label(fn__pprint__generic_term_to_doc_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(deconstruct__deconstruct_5_1,
		fn__pprint__generic_term_to_doc_3_0_i13);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__ops__init_mercury_op_table_0_0,
		fn__pprint__generic_term_to_doc_3_0_i14);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__pprint__generic_term_to_doc_3_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__pprint__generic_term_to_doc_3_0_i16);
	}
	MR_sv(4) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(ops__lookup_prefix_op_4_0,
		fn__pprint__generic_term_to_doc_3_0_i20);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__pprint__generic_term_to_doc_3_0_i16);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__pprint__space_0_0,
		fn__pprint__generic_term_to_doc_3_0_i24);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__pprint__adjusted_by_2_0,
		fn__pprint__generic_term_to_doc_3_0_i25);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__pprint__univ_to_doc_3_0,
		fn__pprint__generic_term_to_doc_3_0_i26);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,
		fn__pprint__generic_term_to_doc_3_0_i27);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,
		fn__pprint__generic_term_to_doc_3_0_i43);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__pprint__generic_term_to_doc_3_0_i31);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__pprint__generic_term_to_doc_3_0_i31);
	}
	MR_sv(4) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(ops__lookup_postfix_op_4_0,
		fn__pprint__generic_term_to_doc_3_0_i35);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__pprint__generic_term_to_doc_3_0_i31);
	}
	MR_sv(7) = ((MR_Integer) MR_sv(7) - (MR_Integer) 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__pprint__adjusted_by_2_0,
		fn__pprint__generic_term_to_doc_3_0_i38);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__pprint__univ_to_doc_3_0,
		fn__pprint__generic_term_to_doc_3_0_i39);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_np_call_localret_ent(fn__pprint__space_0_0,
		fn__pprint__generic_term_to_doc_3_0_i41);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,
		fn__pprint__generic_term_to_doc_3_0_i42);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,
		fn__pprint__generic_term_to_doc_3_0_i43);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(fn__pprint__maybe_parens_3_0);
	}
MR_def_label(fn__pprint__generic_term_to_doc_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__pprint__generic_term_to_doc_3_0_i46);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__pprint__generic_term_to_doc_3_0_i46);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__pprint__generic_term_to_doc_3_0_i46);
	}
	MR_sv(4) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(ops__lookup_infix_op_5_0,
		fn__pprint__generic_term_to_doc_3_0_i51);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__pprint__generic_term_to_doc_3_0_i46);
	}
	MR_sv(2) = MR_r4;
	MR_sv(5) = ((MR_Integer) MR_sv(7) - (MR_Integer) 1);
	MR_sv(8) = MR_r2;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__pprint__adjusted_by_2_0,
		fn__pprint__generic_term_to_doc_3_0_i54);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__pprint__univ_to_doc_3_0,
		fn__pprint__generic_term_to_doc_3_0_i55);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__pprint__space_0_0,
		fn__pprint__generic_term_to_doc_3_0_i56);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_np_call_localret_ent(fn__pprint__space_0_0,
		fn__pprint__generic_term_to_doc_3_0_i58);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__pprint__line_0_0,
		fn__pprint__generic_term_to_doc_3_0_i59);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = ((MR_Integer) MR_tempr1 - (MR_Integer) 2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__pprint__adjusted_by_2_0,
		fn__pprint__generic_term_to_doc_3_0_i60);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__pprint__univ_to_doc_3_0,
		fn__pprint__generic_term_to_doc_3_0_i61);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pprint__nest_2_0,
		fn__pprint__generic_term_to_doc_3_0_i62);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,
		fn__pprint__generic_term_to_doc_3_0_i63);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pprint__group_1_0,
		fn__pprint__generic_term_to_doc_3_0_i64);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,
		fn__pprint__generic_term_to_doc_3_0_i65);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,
		fn__pprint__generic_term_to_doc_3_0_i66);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,
		fn__pprint__generic_term_to_doc_3_0_i67);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,
		fn__pprint__generic_term_to_doc_3_0_i93);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__pprint__generic_term_to_doc_3_0_i71);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__pprint__generic_term_to_doc_3_0_i71);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__pprint__generic_term_to_doc_3_0_i71);
	}
	MR_sv(4) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(ops__lookup_binary_prefix_op_5_0,
		fn__pprint__generic_term_to_doc_3_0_i76);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__pprint__generic_term_to_doc_3_0_i71);
	}
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(8) = MR_r2;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__pprint__space_0_0,
		fn__pprint__generic_term_to_doc_3_0_i80);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(6) = ((MR_Integer) MR_sv(7) - (MR_Integer) 2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pprint__adjusted_by_2_0,
		fn__pprint__generic_term_to_doc_3_0_i81);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__pprint__univ_to_doc_3_0,
		fn__pprint__generic_term_to_doc_3_0_i82);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__pprint__space_0_0,
		fn__pprint__generic_term_to_doc_3_0_i83);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__pprint__line_0_0,
		fn__pprint__generic_term_to_doc_3_0_i84);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = ((MR_Integer) MR_tempr1 - (MR_Integer) 2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__pprint__adjusted_by_2_0,
		fn__pprint__generic_term_to_doc_3_0_i85);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__pprint__univ_to_doc_3_0,
		fn__pprint__generic_term_to_doc_3_0_i86);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pprint__nest_2_0,
		fn__pprint__generic_term_to_doc_3_0_i87);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,
		fn__pprint__generic_term_to_doc_3_0_i88);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pprint__group_1_0,
		fn__pprint__generic_term_to_doc_3_0_i89);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,
		fn__pprint__generic_term_to_doc_3_0_i90);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,
		fn__pprint__generic_term_to_doc_3_0_i91);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,
		fn__pprint__generic_term_to_doc_3_0_i92);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,
		fn__pprint__generic_term_to_doc_3_0_i93);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(fn__pprint__maybe_parens_3_0);
	}
MR_def_label(fn__pprint__generic_term_to_doc_3_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__pprint__generic_term_to_doc_3_0_i95);
	}
	MR_r1 = MR_sv(9);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(fn__pprint__text_1_0);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__pprint__packed_cs_univ_args_2_0,
		fn__pprint__generic_term_to_doc_3_0_i100);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pprint__nest_2_0,
		fn__pprint__generic_term_to_doc_3_0_i101);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pprint__parentheses_1_0,
		fn__pprint__generic_term_to_doc_3_0_i102);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,
		fn__pprint__generic_term_to_doc_3_0_i103);
MR_def_label(fn__pprint__generic_term_to_doc_3_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(fn__pprint__group_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module56)
	MR_init_entry1(fn__pprint__univ_to_doc_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__univ_to_doc_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'univ_to_doc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pprint__univ_to_doc_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_tempr4 = MR_r3;
	MR_r1 = MR_tfield(0, MR_tempr4, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_tempr4;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(0, MR_tempr3, 1);
	MR_np_tailcall_ent(fn__pprint__to_doc_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_1);

MR_BEGIN_MODULE(pprint_module57)
	MR_init_entry1(fn__pprint__var_to_doc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__var_to_doc_2_0);
	MR_init_label1(fn__pprint__var_to_doc_2_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_to_doc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pprint__var_to_doc_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) (MR_Word *) &mercury_data_base_typeclass_info_enum__enum__arity1__term__var__arity1__;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__var_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__fn__pprint__var_to_doc_2_0_i4);
MR_def_label(fn__pprint__var_to_doc_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 1000;
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__pprint__to_doc_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module58)
	MR_init_entry1(fn__pprint__map_pair_to_doc_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__map_pair_to_doc_2_0);
	MR_init_label6(fn__pprint__map_pair_to_doc_2_0,3,5,6,7,9,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_pair_to_doc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pprint__map_pair_to_doc_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(0, MR_r4, 1);
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r3 = (MR_Integer) 1000;
	MR_r4 = MR_tfield(0, MR_r4, 0);
	}
	MR_np_call_localret_ent(fn__pprint__to_doc_3_0,
		fn__pprint__map_pair_to_doc_2_0_i3);
MR_def_label(fn__pprint__map_pair_to_doc_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,1,8);
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r3 = (MR_Integer) 1000;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__pprint__to_doc_3_0,
		fn__pprint__map_pair_to_doc_2_0_i5);
MR_def_label(fn__pprint__map_pair_to_doc_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,
		fn__pprint__map_pair_to_doc_2_0_i6);
MR_def_label(fn__pprint__map_pair_to_doc_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__map_pair_to_doc_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 6345 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__map_pair_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__map_pair_to_doc_2_0_i7);
MR_def_label(fn__pprint__map_pair_to_doc_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__map_pair_to_doc_2_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 6381 "pprint.c"
	MR_r3 = Max;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__pprint__map_pair_to_doc_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__pprint__map_pair_to_doc_2_0_i9);
MR_def_label(fn__pprint__map_pair_to_doc_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0,
		fn__pprint__map_pair_to_doc_2_0_i11);
MR_def_label(fn__pprint__map_pair_to_doc_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_112_112_114_105_110_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module59)
	MR_init_entry1(fn__pprint__to_doc_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__to_doc_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_doc'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__to_doc_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__pprint__to_doc_1_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 6454 "pprint.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1000;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(fn__pprint__to_doc_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__count_codepoints_2_0);

MR_BEGIN_MODULE(pprint_module60)
	MR_init_entry1(fn__pprint__ff_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__ff_2_0);
	MR_init_label10(fn__pprint__ff_2_0,66,5,9,8,14,13,17,20,23,2)
	MR_init_label1(fn__pprint__ff_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ff'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pprint__ff_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(fn__pprint__ff_2_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	if (MR_LTAGS_TEST(MR_r1,0,1)) {
		MR_GOTO_LAB(fn__pprint__ff_2_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__pprint__ff_2_0_i2);
	}
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__pprint__ff_2_0_i5);
	}
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	/* continue */
	} /* end while */
MR_def_label(fn__pprint__ff_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__pprint__ff_2_0_i8);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_localcall_lab(fn__pprint__ff_2_0,
		fn__pprint__ff_2_0_i9);
MR_def_label(fn__pprint__ff_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__pprint__ff_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__pprint__ff_2_0_i66);
MR_def_label(fn__pprint__ff_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__pprint__ff_2_0_i13);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = (MR_Integer) 1000;
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__pprint__to_doc_3_0,
		fn__pprint__ff_2_0_i14);
MR_def_label(fn__pprint__ff_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__pprint__ff_2_0_i66);
MR_def_label(fn__pprint__ff_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__pprint__ff_2_0_i17);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__pprint__ff_2_0_i66);
MR_def_label(fn__pprint__ff_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__pprint__ff_2_0_i20);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__pprint__ff_2_0_i66);
MR_def_label(fn__pprint__ff_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(string__count_codepoints_2_0,
		fn__pprint__ff_2_0_i23);
MR_def_label(fn__pprint__ff_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__pprint__ff_2_0_i1);
	}
	MR_r2 = ((MR_Integer) MR_sv(1) - (MR_Integer) MR_r1);
MR_def_label(fn__pprint__ff_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(fn__pprint__ff_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
MR_decl_entry(fn__list__duplicate_2_3_0);
MR_decl_entry(string__from_char_list_2_0);
MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(pprint_module61)
	MR_init_entry1(fn__pprint__extend_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__extend_2_0);
	MR_init_label2(fn__pprint__extend_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'extend'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pprint__extend_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r3 = (MR_Integer) 32;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__list__duplicate_2_3_0,
		fn__pprint__extend_2_0_i2);
MR_def_label(fn__pprint__extend_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_char_list_2_0,
		fn__pprint__extend_2_0_i3);
MR_def_label(fn__pprint__extend_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_3_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__count_codepoints_1_0);
MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(pprint_module62)
	MR_init_entry1(pprint__lb_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pprint__lb_8_0);
	MR_init_label10(pprint__lb_8_0,70,4,5,3,7,9,8,12,11,15)
	MR_init_label8(pprint__lb_8_0,14,19,18,17,25,24,27,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lb'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pprint__lb_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(pprint__lb_8_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,1)) {
		MR_GOTO_LAB(pprint__lb_8_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(3) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__count_codepoints_1_0,
		pprint__lb_8_0_i4);
MR_def_label(pprint__lb_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_r3 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pprint__lb_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__pprint__lb_8_0_i5);
MR_def_label(pprint__lb_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pprint__lb_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__pprint__lb_8_0_i28);
MR_def_label(pprint__lb_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(pprint__lb_8_0_i7);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(8);
MR_def_label(pprint__lb_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(pprint__lb_8_0_i8);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(3) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r5;
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__pprint__extend_2_0,
		pprint__lb_8_0_i9);
MR_def_label(pprint__lb_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(pprint__lb_8_0_i70);
	}
MR_def_label(pprint__lb_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(pprint__lb_8_0_i11);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r5;
	MR_sv(4) = MR_tfield(1, MR_r6, 1);
	MR_sv(7) = MR_r1;
	MR_r6 = MR_tfield(1, MR_r6, 0);
	MR_np_localcall_lab(pprint__lb_8_0,
		pprint__lb_8_0_i12);
MR_def_label(pprint__lb_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(pprint__lb_8_0_i70);
	}
MR_def_label(pprint__lb_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,3)) {
		MR_GOTO_LAB(pprint__lb_8_0_i14);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(3) = MR_r7;
	MR_sv(7) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	MR_r3 = (MR_Integer) 1000;
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__pprint__to_doc_3_0,
		pprint__lb_8_0_i15);
MR_def_label(pprint__lb_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(pprint__lb_8_0_i70);
	}
MR_def_label(pprint__lb_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,2)) {
		MR_GOTO_LAB(pprint__lb_8_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(3, MR_r6, 1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r5;
	MR_sv(3) = MR_r7;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_tempr2 - (MR_Integer) MR_tempr3);
	}
	MR_np_call_localret_ent(fn__pprint__ff_2_0,
		pprint__lb_8_0_i19);
MR_def_label(pprint__lb_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pprint__lb_8_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0);
MR_def_label(pprint__lb_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(pprint__lb_8_0_i70);
MR_def_label(pprint__lb_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,0)) {
		MR_GOTO_LAB(pprint__lb_8_0_i24);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(3) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r5;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(string__append_3_2,
		pprint__lb_8_0_i25);
MR_def_label(pprint__lb_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(pprint__lb_8_0_i70);
	}
MR_def_label(pprint__lb_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(3) = MR_r7;
	MR_sv(2) = MR_tfield(3, MR_r6, 1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__count_codepoints_1_0,
		pprint__lb_8_0_i27);
MR_def_label(pprint__lb_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pprint__lb_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__pprint__lb_8_0_i28);
MR_def_label(pprint__lb_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module63)
	MR_init_entry1(pprint__lb_8_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pprint__lb_8_1);
	MR_init_label10(pprint__lb_8_1,70,4,5,3,7,9,8,12,11,15)
	MR_init_label8(pprint__lb_8_1,14,19,18,17,25,24,27,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lb'/8 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pprint__lb_8_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(pprint__lb_8_1,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,1)) {
		MR_GOTO_LAB(pprint__lb_8_1_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(3) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__count_codepoints_1_0,
		pprint__lb_8_1_i4);
MR_def_label(pprint__lb_8_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_r3 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pprint__lb_8_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__pprint__lb_8_1_i5);
MR_def_label(pprint__lb_8_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pprint__lb_8_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__pprint__lb_8_1_i28);
MR_def_label(pprint__lb_8_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(pprint__lb_8_1_i7);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(8);
MR_def_label(pprint__lb_8_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(pprint__lb_8_1_i8);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(3) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r5;
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__pprint__extend_2_0,
		pprint__lb_8_1_i9);
MR_def_label(pprint__lb_8_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(pprint__lb_8_1_i70);
	}
MR_def_label(pprint__lb_8_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(pprint__lb_8_1_i11);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r5;
	MR_sv(4) = MR_tfield(1, MR_r6, 1);
	MR_sv(7) = MR_r1;
	MR_r6 = MR_tfield(1, MR_r6, 0);
	MR_np_localcall_lab(pprint__lb_8_1,
		pprint__lb_8_1_i12);
MR_def_label(pprint__lb_8_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(pprint__lb_8_1_i70);
	}
MR_def_label(pprint__lb_8_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,3)) {
		MR_GOTO_LAB(pprint__lb_8_1_i14);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(3) = MR_r7;
	MR_sv(7) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	MR_r3 = (MR_Integer) 1000;
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__pprint__to_doc_3_0,
		pprint__lb_8_1_i15);
MR_def_label(pprint__lb_8_1,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(pprint__lb_8_1_i70);
	}
MR_def_label(pprint__lb_8_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,2)) {
		MR_GOTO_LAB(pprint__lb_8_1_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(3, MR_r6, 1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r5;
	MR_sv(3) = MR_r7;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_tempr2 - (MR_Integer) MR_tempr3);
	}
	MR_np_call_localret_ent(fn__pprint__ff_2_0,
		pprint__lb_8_1_i19);
MR_def_label(pprint__lb_8_1,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pprint__lb_8_1_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1);
MR_def_label(pprint__lb_8_1,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(pprint__lb_8_1_i70);
MR_def_label(pprint__lb_8_1,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,0)) {
		MR_GOTO_LAB(pprint__lb_8_1_i24);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(3) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r5;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(string__append_3_2,
		pprint__lb_8_1_i25);
MR_def_label(pprint__lb_8_1,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(pprint__lb_8_1_i70);
	}
MR_def_label(pprint__lb_8_1,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(3) = MR_r7;
	MR_sv(2) = MR_tfield(3, MR_r6, 1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__count_codepoints_1_0,
		pprint__lb_8_1_i27);
MR_def_label(pprint__lb_8_1,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = ((MR_Integer) MR_sv(4) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pprint__lb_8_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__pprint__lb_8_1_i28);
MR_def_label(pprint__lb_8_1,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module64)
	MR_init_entry1(pprint__layout_best_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pprint__layout_best_5_0);
	MR_init_label1(pprint__layout_best_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'layout_best'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pprint__layout_best_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Integer) 0;
	MR_tempr2 = MR_r5;
	MR_r5 = (MR_Word) MR_string_const("", 0);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(pprint__lb_8_0,
		pprint__layout_best_5_0_i2);
MR_def_label(pprint__layout_best_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module65)
	MR_init_entry1(pprint__layout_best_5_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pprint__layout_best_5_1);
	MR_init_label1(pprint__layout_best_5_1,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'layout_best'/5 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pprint__layout_best_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Integer) 0;
	MR_tempr2 = MR_r5;
	MR_r5 = (MR_Word) MR_string_const("", 0);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(pprint__lb_8_1,
		pprint__layout_best_5_1_i2);
MR_def_label(pprint__layout_best_5_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);
MR_decl_entry(fn__string__append_list_1_0);

MR_BEGIN_MODULE(pprint_module66)
	MR_init_entry1(fn__pprint__to_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__to_string_2_0);
	MR_init_label2(fn__pprint__to_string_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__to_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(pprint__lb__ho40_8_0,
		fn__pprint__to_string_2_0_i2);
MR_def_label(fn__pprint__to_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(list__reverse_2_0,
		fn__pprint__to_string_2_0_i3);
MR_def_label(fn__pprint__to_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module67)
	MR_init_entry1(pprint__write_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pprint__write_4_0);
	MR_init_label1(pprint__write_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pprint__write_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__pprint__write_4_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 7346 "pprint.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pprint__write_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__pprint__write_4_0_i2);
MR_def_label(pprint__write_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(pprint__lb__ho41_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module68)
	MR_init_entry1(pprint__write_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pprint__write_5_0);
	MR_init_label2(pprint__write_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__pprint__write_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__pprint__write_5_0
{
#line 140 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = LONG_MAX;
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }
;}
#line 7411 "pprint.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r5;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(pprint__write_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__pprint__write_5_0_i2);
MR_def_label(pprint__write_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Word) MR_string_const("", 0);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0,
		pprint__write_5_0_i3);
MR_def_label(pprint__write_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module69)
	MR_init_entry1(__Unify___pprint__depth_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___pprint__depth_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___pprint__depth_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module70)
	MR_init_entry1(__Compare___pprint__depth_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___pprint__depth_0_0);
	MR_init_label2(__Compare___pprint__depth_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___pprint__depth_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___pprint__depth_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___pprint__depth_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___pprint__depth_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___pprint__depth_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___univ__univ_0_0);

MR_BEGIN_MODULE(pprint_module71)
	MR_init_entry1(__Unify___pprint__doc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___pprint__doc_0_0);
	MR_init_label10(__Unify___pprint__doc_0_0,111,5,6,7,13,11,17,21,54,25)
	MR_init_label1(__Unify___pprint__doc_0_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___pprint__doc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(__Unify___pprint__doc_0_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___pprint__doc_0_0_i54);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,1)) {
		MR_GOTO_LAB(__Unify___pprint__doc_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___pprint__doc_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___pprint__doc_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___pprint__doc_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___pprint__doc_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___pprint__doc_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(2, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(2, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___pprint__doc_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr3, 1);
	MR_r2 = MR_tfield(2, MR_tempr4, 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(__Unify___pprint__doc_0_0_i111);
	}
MR_def_label(__Unify___pprint__doc_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___pprint__doc_0_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___pprint__doc_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_localcall_lab(__Unify___pprint__doc_0_0,
		__Unify___pprint__doc_0_0_i13);
MR_def_label(__Unify___pprint__doc_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___pprint__doc_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(__Unify___pprint__doc_0_0_i111);
MR_def_label(__Unify___pprint__doc_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Unify___pprint__doc_0_0_i17);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___pprint__doc_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___pprint__doc_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr3, 2);
	MR_r2 = MR_tfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___univ__univ_0_0);
	}
MR_def_label(__Unify___pprint__doc_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Unify___pprint__doc_0_0_i21);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___pprint__doc_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(__Unify___pprint__doc_0_0_i111);
MR_def_label(__Unify___pprint__doc_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___pprint__doc_0_0_i25);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___pprint__doc_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___pprint__doc_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr3, 2);
	MR_r2 = MR_tfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(__Unify___pprint__doc_0_0_i111);
	}
MR_def_label(__Unify___pprint__doc_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___pprint__doc_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___pprint__doc_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___pprint__doc_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___univ__univ_0_0);

MR_BEGIN_MODULE(pprint_module72)
	MR_init_entry1(__Compare___pprint__doc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___pprint__doc_0_0);
	MR_init_label10(__Compare___pprint__doc_0_0,413,7,8,9,10,11,12,5,16,17)
	MR_init_label10(__Compare___pprint__doc_0_0,18,19,20,21,14,25,26,30,31,33)
	MR_init_label10(__Compare___pprint__doc_0_0,27,38,39,40,23,44,45,46,49,47)
	MR_init_label10(__Compare___pprint__doc_0_0,54,55,42,59,60,61,62,66,67,69)
	MR_init_label10(__Compare___pprint__doc_0_0,63,74,57,78,79,80,81,82,83,76)
	MR_init_label10(__Compare___pprint__doc_0_0,88,89,90,180,91,92,93,97,98,101)
	MR_init_label10(__Compare___pprint__doc_0_0,86,107,108,109,110,111,112,193,113,194)
	MR_init_label3(__Compare___pprint__doc_0_0,114,195,472)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___pprint__doc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(__Compare___pprint__doc_0_0,413)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i195);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i8);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i193);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i14);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i18);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i21);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i194);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i23);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i25);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i26);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i27);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_r3 = MR_tfield(2, MR_tempr2, 1);
	MR_r4 = MR_tfield(2, MR_tempr1, 0);
	MR_r5 = MR_tfield(2, MR_tempr2, 0);
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i30);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Integer) 1;
	MR_sv(1) = MR_r2;
	MR_GOTO_LAB(__Compare___pprint__doc_0_0_i33);
	}
MR_def_label(__Compare___pprint__doc_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_r5)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i31);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_sv(1) = MR_r2;
	MR_GOTO_LAB(__Compare___pprint__doc_0_0_i33);
MR_def_label(__Compare___pprint__doc_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Integer) 2;
	MR_sv(1) = MR_r2;
MR_def_label(__Compare___pprint__doc_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i472);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(__Compare___pprint__doc_0_0_i413);
	}
MR_def_label(__Compare___pprint__doc_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i38);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i39);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i40);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i194);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i42);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i44);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i45);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i46);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i47);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(2) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_localcall_lab(__Compare___pprint__doc_0_0,
		__Compare___pprint__doc_0_0_i49);
MR_def_label(__Compare___pprint__doc_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i472);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(__Compare___pprint__doc_0_0_i413);
MR_def_label(__Compare___pprint__doc_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i54);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i55);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i194);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i57);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i59);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i60);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i61);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i62);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i63);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(1);
	MR_r3 = MR_tfield(3, MR_tempr2, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tfield(3, MR_tempr2, 1);
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i66);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Integer) 1;
	MR_sv(1) = MR_r2;
	MR_GOTO_LAB(__Compare___pprint__doc_0_0_i69);
	}
MR_def_label(__Compare___pprint__doc_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_r5)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i67);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_sv(1) = MR_r2;
	MR_GOTO_LAB(__Compare___pprint__doc_0_0_i69);
MR_def_label(__Compare___pprint__doc_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Integer) 2;
	MR_sv(1) = MR_r2;
MR_def_label(__Compare___pprint__doc_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i472);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___univ__univ_0_0);
	}
MR_def_label(__Compare___pprint__doc_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i74);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i193);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i76);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i78);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i79);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i80);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i81);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i82);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i83);
	}
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(__Compare___pprint__doc_0_0_i413);
MR_def_label(__Compare___pprint__doc_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i193);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i86);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i88);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i89);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i90);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i91);
	}
MR_def_label(__Compare___pprint__doc_0_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i92);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i93);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i194);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(1);
	MR_r3 = MR_tfield(3, MR_tempr2, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tfield(3, MR_tempr2, 1);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___pprint__doc_0_0
	S1 = (MR_String) MR_r4;
	S2 = (MR_String) MR_r5;
{
#line 129 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 8210 "pprint.c"
	MR_r4 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i97);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Integer) 1;
	MR_sv(1) = MR_r2;
	MR_GOTO_LAB(__Compare___pprint__doc_0_0_i101);
	}
MR_def_label(__Compare___pprint__doc_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i98);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_sv(1) = MR_r2;
	MR_GOTO_LAB(__Compare___pprint__doc_0_0_i101);
MR_def_label(__Compare___pprint__doc_0_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Integer) 2;
	MR_sv(1) = MR_r2;
MR_def_label(__Compare___pprint__doc_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i472);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(__Compare___pprint__doc_0_0_i413);
	}
MR_def_label(__Compare___pprint__doc_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i107);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i108);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i109);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i110);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i111);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i112);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i113);
	}
MR_def_label(__Compare___pprint__doc_0_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___pprint__doc_0_0
	S1 = (MR_String) MR_r2;
	S2 = (MR_String) MR_tempr1;
{
#line 129 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 8319 "pprint.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i114);
	}
	}
MR_def_label(__Compare___pprint__doc_0_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___pprint__doc_0_0_i180);
	}
MR_def_label(__Compare___pprint__doc_0_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___pprint__doc_0_0,472)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(pprint_module73)
	MR_init_entry1(__Unify___pprint__map_pair_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___pprint__map_pair_2_0);
	MR_init_label3(__Unify___pprint__map_pair_2_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___pprint__map_pair_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___pprint__map_pair_2_0_i8);
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
		__Unify___pprint__map_pair_2_0_i4);
MR_def_label(__Unify___pprint__map_pair_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___pprint__map_pair_2_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___pprint__map_pair_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___pprint__map_pair_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(pprint_module74)
	MR_init_entry1(__Compare___pprint__map_pair_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___pprint__map_pair_2_0);
	MR_init_label4(__Compare___pprint__map_pair_2_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___pprint__map_pair_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___pprint__map_pair_2_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_GOTO_LAB(__Compare___pprint__map_pair_2_0_i2);
MR_def_label(__Compare___pprint__map_pair_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___pprint__map_pair_2_0,2)
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
		__Compare___pprint__map_pair_2_0_i5);
MR_def_label(__Compare___pprint__map_pair_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___pprint__map_pair_2_0_i21);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___pprint__map_pair_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module75)
	MR_init_entry1(fn__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_99_104_97_114_97_99_116_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module76)
	MR_init_entry1(fn__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_102_108_111_97_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module77)
	MR_init_entry1(fn__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_105_110_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module78)
	MR_init_entry1(fn__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_115_116_114_105_110_103_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module79)
	MR_init_entry1(fn__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module80)
	MR_init_entry1(pprint__IntroducedFrom__pred__to_string__443__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pprint__IntroducedFrom__pred__to_string__443__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__to_string__443__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pprint__IntroducedFrom__pred__to_string__443__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module81)
	MR_init_entry1(fn__pprint__list__map__ho35_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__pprint__list__map__ho35_2_0);
	MR_init_label3(fn__pprint__list__map__ho35_2_0,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map__ho35'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__pprint__list__map__ho35_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__pprint__list__map__ho35_2_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(fn__pprint__list__map__ho35_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	break;
	} /* end while */
MR_def_label(fn__pprint__list__map__ho35_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	break;
	} /* end while */
MR_def_label(fn__pprint__list__map__ho35_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_whitespace_1_0);

MR_BEGIN_MODULE(pprint_module82)
	MR_init_entry1(pprint__string__next_boundary__ho38_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pprint__string__next_boundary__ho38_4_0);
	MR_init_label4(pprint__string__next_boundary__ho38_4_0,23,6,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'next_boundary__ho38'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pprint__string__next_boundary__ho38_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(pprint__string__next_boundary__ho38_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__pprint__string__next_boundary__ho38_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r2;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 8716 "pprint.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(pprint__string__next_boundary__ho38_4_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		pprint__string__next_boundary__ho38_4_0_i6);
MR_def_label(pprint__string__next_boundary__ho38_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pprint__string__next_boundary__ho38_4_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(pprint__string__next_boundary__ho38_4_0_i23);
MR_def_label(pprint__string__next_boundary__ho38_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
MR_def_label(pprint__string__next_boundary__ho38_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module83)
	MR_init_entry1(pprint__string__words_2__ho39_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pprint__string__words_2__ho39_4_0);
	MR_init_label5(pprint__string__words_2__ho39_4_0,2,3,4,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'words_2__ho39'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pprint__string__words_2__ho39_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(pprint__string__next_boundary__ho17__ho50_4_0,
		pprint__string__words_2__ho39_4_0_i2);
MR_def_label(pprint__string__words_2__ho39_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(2))) {
		MR_GOTO_LAB(pprint__string__words_2__ho39_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(pprint__string__words_2__ho39_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__pprint__string__words_2__ho39_4_0
	Str = (MR_String) MR_sv(1);
	Start = MR_sv(2);
	End = MR_r1;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 8804 "pprint.c"
	MR_tempr1 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(pprint__string__next_boundary__ho38_4_0,
		pprint__string__words_2__ho39_4_0_i4);
MR_def_label(pprint__string__words_2__ho39_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_r1)) {
		MR_GOTO_LAB(pprint__string__words_2__ho39_4_0_i5);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(pprint__string__words_2__ho39_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(pprint__string__words_2__ho39_4_0,
		pprint__string__words_2__ho39_4_0_i7);
MR_def_label(pprint__string__words_2__ho39_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(pprint_module84)
	MR_init_entry1(pprint__lb__ho40_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pprint__lb__ho40_8_0);
	MR_init_label10(pprint__lb__ho40_8_0,70,4,5,3,7,9,8,12,11,15)
	MR_init_label8(pprint__lb__ho40_8_0,14,19,18,17,25,24,27,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lb__ho40'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pprint__lb__ho40_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(pprint__lb__ho40_8_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,1)) {
		MR_GOTO_LAB(pprint__lb__ho40_8_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__count_codepoints_2_0,
		pprint__lb__ho40_8_0_i4);
MR_def_label(pprint__lb__ho40_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(pprint__IntroducedFrom__pred__to_string__443__1_3_0,
		pprint__lb__ho40_8_0_i5);
MR_def_label(pprint__lb__ho40_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(pprint__IntroducedFrom__pred__to_string__443__1_3_0,
		pprint__lb__ho40_8_0_i28);
MR_def_label(pprint__lb__ho40_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(pprint__lb__ho40_8_0_i7);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(6);
MR_def_label(pprint__lb__ho40_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(pprint__lb__ho40_8_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__pprint__extend_2_0,
		pprint__lb__ho40_8_0_i9);
MR_def_label(pprint__lb__ho40_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(pprint__lb__ho40_8_0_i70);
	}
MR_def_label(pprint__lb__ho40_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(pprint__lb__ho40_8_0_i11);
	}
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r4, 1);
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_localcall_lab(pprint__lb__ho40_8_0,
		pprint__lb__ho40_8_0_i12);
MR_def_label(pprint__lb__ho40_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(pprint__lb__ho40_8_0_i70);
	}
MR_def_label(pprint__lb__ho40_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,3)) {
		MR_GOTO_LAB(pprint__lb__ho40_8_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	MR_r3 = (MR_Integer) 1000;
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__pprint__to_doc_3_0,
		pprint__lb__ho40_8_0_i15);
MR_def_label(pprint__lb__ho40_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(pprint__lb__ho40_8_0_i70);
	}
MR_def_label(pprint__lb__ho40_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(pprint__lb__ho40_8_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r4, 1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_sv(1) - (MR_Integer) MR_r2);
	}
	MR_np_call_localret_ent(fn__pprint__ff_2_0,
		pprint__lb__ho40_8_0_i19);
MR_def_label(pprint__lb__ho40_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pprint__lb__ho40_8_0_i18);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(pprint__layout_flat__ho49_6_0);
MR_def_label(pprint__lb__ho40_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(pprint__lb__ho40_8_0_i70);
MR_def_label(pprint__lb__ho40_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(pprint__lb__ho40_8_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		pprint__lb__ho40_8_0_i25);
MR_def_label(pprint__lb__ho40_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(pprint__lb__ho40_8_0_i70);
	}
MR_def_label(pprint__lb__ho40_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_sv(1) = MR_tfield(3, MR_r4, 1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(string__count_codepoints_2_0,
		pprint__lb__ho40_8_0_i27);
MR_def_label(pprint__lb__ho40_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_r1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(pprint__IntroducedFrom__pred__to_string__443__1_3_0,
		pprint__lb__ho40_8_0_i28);
MR_def_label(pprint__lb__ho40_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module85)
	MR_init_entry1(pprint__lb__ho41_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pprint__lb__ho41_8_0);
	MR_init_label10(pprint__lb__ho41_8_0,67,4,3,5,6,10,9,13,12,17)
	MR_init_label5(pprint__lb__ho41_8_0,16,15,23,22,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lb__ho41'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pprint__lb__ho41_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(pprint__lb__ho41_8_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,1)) {
		MR_GOTO_LAB(pprint__lb__ho41_8_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__count_codepoints_1_0,
		pprint__lb__ho41_8_0_i4);
MR_def_label(pprint__lb__ho41_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	{
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__pprint__lb__ho41_8_0
	Message = (MR_String) (MR_Word) MR_string_const("\n", 1);
	MR_save_registers();
{
#line 520 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);
    MR_update_io(IO0, IO);
;}
#line 9144 "pprint.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__pprint__lb__ho41_8_0
	Message = (MR_String) MR_sv(3);
	MR_save_registers();
{
#line 520 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);
    MR_update_io(IO0, IO);
;}
#line 9163 "pprint.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(pprint__lb__ho41_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(pprint__lb__ho41_8_0_i5);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(pprint__lb__ho41_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(pprint__lb__ho41_8_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__pprint__extend_2_0,
		pprint__lb__ho41_8_0_i23);
MR_def_label(pprint__lb__ho41_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(pprint__lb__ho41_8_0_i9);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r4, 1);
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_localcall_lab(pprint__lb__ho41_8_0,
		pprint__lb__ho41_8_0_i10);
MR_def_label(pprint__lb__ho41_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(pprint__lb__ho41_8_0_i67);
	}
MR_def_label(pprint__lb__ho41_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,3)) {
		MR_GOTO_LAB(pprint__lb__ho41_8_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	MR_r3 = (MR_Integer) 1000;
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__pprint__to_doc_3_0,
		pprint__lb__ho41_8_0_i13);
MR_def_label(pprint__lb__ho41_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(pprint__lb__ho41_8_0_i67);
	}
MR_def_label(pprint__lb__ho41_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(pprint__lb__ho41_8_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r4, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_sv(1) - (MR_Integer) MR_r2);
	}
	MR_np_call_localret_ent(fn__pprint__ff_2_0,
		pprint__lb__ho41_8_0_i17);
MR_def_label(pprint__lb__ho41_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(pprint__lb__ho41_8_0_i16);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(pprint__layout_flat__ho48_6_0);
MR_def_label(pprint__lb__ho41_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(pprint__lb__ho41_8_0_i67);
MR_def_label(pprint__lb__ho41_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(pprint__lb__ho41_8_0_i22);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = MR_r3;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(string__append_3_2,
		pprint__lb__ho41_8_0_i23);
MR_def_label(pprint__lb__ho41_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(pprint__lb__ho41_8_0_i67);
	}
MR_def_label(pprint__lb__ho41_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r4, 1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__count_codepoints_1_0,
		pprint__lb__ho41_8_0_i25);
MR_def_label(pprint__lb__ho41_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	{
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__pprint__lb__ho41_8_0
	Message = (MR_String) MR_tempr1;
	MR_save_registers();
{
#line 520 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);
    MR_update_io(IO0, IO);
;}
#line 9338 "pprint.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module86)
	MR_init_entry1(pprint__layout_flat__ho48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pprint__layout_flat__ho48_6_0);
	MR_init_label10(pprint__layout_flat__ho48_6_0,47,5,8,7,11,10,13,15,17,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'layout_flat__ho48'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pprint__layout_flat__ho48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(pprint__layout_flat__ho48_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	if (MR_LTAGS_TEST(MR_r2,0,1)) {
		MR_GOTO_LAB(pprint__layout_flat__ho48_6_0_i53);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(pprint__layout_flat__ho48_6_0_i53);
	}
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(pprint__layout_flat__ho48_6_0_i5);
	}
	MR_r2 = MR_tfield(2, MR_r2, 1);
	MR_succip_word = MR_sv(3);
	/* continue */
	} /* end while */
MR_def_label(pprint__layout_flat__ho48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(pprint__layout_flat__ho48_6_0_i7);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_localcall_lab(pprint__layout_flat__ho48_6_0,
		pprint__layout_flat__ho48_6_0_i8);
MR_def_label(pprint__layout_flat__ho48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(pprint__layout_flat__ho48_6_0_i47);
MR_def_label(pprint__layout_flat__ho48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(pprint__layout_flat__ho48_6_0_i10);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = (MR_Integer) 1000;
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__pprint__to_doc_3_0,
		pprint__layout_flat__ho48_6_0_i11);
MR_def_label(pprint__layout_flat__ho48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(pprint__layout_flat__ho48_6_0_i47);
	}
MR_def_label(pprint__layout_flat__ho48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(pprint__layout_flat__ho48_6_0_i13);
	}
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(pprint__layout_flat__ho48_6_0_i47);
MR_def_label(pprint__layout_flat__ho48_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(pprint__layout_flat__ho48_6_0_i15);
	}
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(pprint__layout_flat__ho48_6_0_i47);
MR_def_label(pprint__layout_flat__ho48_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__count_codepoints_2_0,
		pprint__layout_flat__ho48_6_0_i17);
MR_def_label(pprint__layout_flat__ho48_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	{
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__pprint__layout_flat__ho48_6_0
	Message = (MR_String) MR_sv(2);
	MR_save_registers();
{
#line 520 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);
    MR_update_io(IO0, IO);
;}
#line 9465 "pprint.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
MR_def_label(pprint__layout_flat__ho48_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module87)
	MR_init_entry1(pprint__layout_flat__ho49_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pprint__layout_flat__ho49_6_0);
	MR_init_label10(pprint__layout_flat__ho49_6_0,48,3,4,5,8,7,11,10,13,15)
	MR_init_label1(pprint__layout_flat__ho49_6_0,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'layout_flat__ho49'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pprint__layout_flat__ho49_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(pprint__layout_flat__ho49_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(pprint__layout_flat__ho49_6_0_i3);
	}
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(pprint__layout_flat__ho49_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(pprint__layout_flat__ho49_6_0_i4);
	}
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(pprint__layout_flat__ho49_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(pprint__layout_flat__ho49_6_0_i5);
	}
	MR_r2 = MR_tfield(2, MR_r2, 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(pprint__layout_flat__ho49_6_0_i48);
MR_def_label(pprint__layout_flat__ho49_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(pprint__layout_flat__ho49_6_0_i7);
	}
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_localcall_lab(pprint__layout_flat__ho49_6_0,
		pprint__layout_flat__ho49_6_0_i8);
MR_def_label(pprint__layout_flat__ho49_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(pprint__layout_flat__ho49_6_0_i48);
	}
MR_def_label(pprint__layout_flat__ho49_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(pprint__layout_flat__ho49_6_0_i10);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = (MR_Integer) 1000;
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__pprint__to_doc_3_0,
		pprint__layout_flat__ho49_6_0_i11);
MR_def_label(pprint__layout_flat__ho49_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(pprint__layout_flat__ho49_6_0_i48);
	}
MR_def_label(pprint__layout_flat__ho49_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(pprint__layout_flat__ho49_6_0_i13);
	}
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(pprint__layout_flat__ho49_6_0_i48);
MR_def_label(pprint__layout_flat__ho49_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(pprint__layout_flat__ho49_6_0_i15);
	}
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(pprint__layout_flat__ho49_6_0_i48);
MR_def_label(pprint__layout_flat__ho49_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(string__count_codepoints_2_0,
		pprint__layout_flat__ho49_6_0_i17);
MR_def_label(pprint__layout_flat__ho49_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module88)
	MR_init_entry1(pprint__string__next_boundary__ho17__ho50_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__pprint__string__next_boundary__ho17__ho50_4_0);
	MR_init_label4(pprint__string__next_boundary__ho17__ho50_4_0,25,8,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'next_boundary__ho17__ho50'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(pprint__string__next_boundary__ho17__ho50_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(pprint__string__next_boundary__ho17__ho50_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__pprint__string__next_boundary__ho17__ho50_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Index = MR_r2;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 9645 "pprint.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(pprint__string__next_boundary__ho17__ho50_4_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		pprint__string__next_boundary__ho17__ho50_4_0_i8);
MR_def_label(pprint__string__next_boundary__ho17__ho50_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(pprint__string__next_boundary__ho17__ho50_4_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(pprint__string__next_boundary__ho17__ho50_4_0_i25);
	}
MR_def_label(pprint__string__next_boundary__ho17__ho50_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
MR_def_label(pprint__string__next_boundary__ho17__ho50_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module89)
	MR_init_entry1(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0);
	MR_init_label10(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0,48,3,4,5,8,7,11,10,13,15)
	MR_init_label2(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__layout_flat__[1]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0_i4);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0_i5);
	}
	MR_r3 = MR_tfield(2, MR_r3, 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0_i48);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_r3, 1);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_localcall_lab(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0,
		f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0_i8);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0_i48);
	}
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0_i10);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	MR_r3 = (MR_Integer) 1000;
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__pprint__to_doc_3_0,
		f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0_i11);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0_i48);
	}
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0_i13);
	}
	MR_r3 = MR_tfield(3, MR_r3, 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0_i48);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0_i15);
	}
	MR_r3 = MR_tfield(3, MR_r3, 2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0_i48);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_tfield(3, MR_r3, 1);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(string__count_codepoints_2_0,
		f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0_i17);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_r1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0_i18);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module90)
	MR_init_entry1(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1);
	MR_init_label10(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1,48,3,4,5,8,7,11,10,13,15)
	MR_init_label2(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__layout_flat__[1]_1'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1_i4);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1_i5);
	}
	MR_r3 = MR_tfield(2, MR_r3, 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1_i48);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1_i7);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_r3, 1);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_localcall_lab(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1,
		f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1_i8);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1_i48);
	}
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1_i10);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	MR_r3 = (MR_Integer) 1000;
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__pprint__to_doc_3_0,
		f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1_i11);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1_i48);
	}
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1_i13);
	}
	MR_r3 = MR_tfield(3, MR_r3, 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1_i48);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1_i15);
	}
	MR_r3 = MR_tfield(3, MR_r3, 2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1_i48);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_tfield(3, MR_r3, 1);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(string__count_codepoints_2_0,
		f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1_i17);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_r1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1_i18);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_1,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module91)
	MR_init_entry1(fn__f_112_112_114_105_110_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_112_114_105_110_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_112_112_114_105_110_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module92)
	MR_init_entry1(fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_99_104_97_114_97_99_116_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_99_104_97_114_97_99_116_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_99_104_97_114_97_99_116_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(fn__pprint__poly_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module93)
	MR_init_entry1(fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_102_108_111_97_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_102_108_111_97_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_102_108_111_97_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(fn__pprint__poly_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module94)
	MR_init_entry1(fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_105_110_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_105_110_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_105_110_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(fn__pprint__poly_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module95)
	MR_init_entry1(fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_115_116_114_105_110_103_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_115_116_114_105_110_103_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_115_116_114_105_110_103_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module96)
	MR_init_entry1(fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module97)
	MR_init_entry1(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_0);
	MR_init_label3(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_0,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__map__ho25__[1, 2, 3, 4, 5, 6, 7, 8, 9]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	break;
	} /* end while */
MR_def_label(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	break;
	} /* end while */
MR_def_label(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module98)
	MR_init_entry1(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_54_95_95_91_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_54_95_95_91_50_93_95_48_2_0);
	MR_init_label3(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_54_95_95_91_50_93_95_48_2_0,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__map__ho36__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_54_95_95_91_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_54_95_95_91_50_93_95_48_2_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_54_95_95_91_50_93_95_48_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	}
	break;
	} /* end while */
MR_def_label(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_54_95_95_91_50_93_95_48_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	break;
	} /* end while */
MR_def_label(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_54_95_95_91_50_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module99)
	MR_init_entry1(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_55_95_95_91_51_44_32_52_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_55_95_95_91_51_44_32_52_93_95_48_2_0);
	MR_init_label3(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_55_95_95_91_51_44_32_52_93_95_48_2_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__map__ho37__[3, 4]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_55_95_95_91_51_44_32_52_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_55_95_95_91_51_44_32_52_93_95_48_2_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_55_95_95_91_51_44_32_52_93_95_48_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Integer) 1000;
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__pprint__to_doc_3_0,
		fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_55_95_95_91_51_44_32_52_93_95_48_2_0_i4);
MR_def_label(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_55_95_95_91_51_44_32_52_93_95_48_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_55_95_95_91_51_44_32_52_93_95_48_2_0,
		fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_55_95_95_91_51_44_32_52_93_95_48_2_0_i5);
MR_def_label(fn__f_112_112_114_105_110_116_95_95_108_105_115_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_55_95_95_91_51_44_32_52_93_95_48_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_3);
MR_decl_entry(stream__put_4_0);

MR_BEGIN_MODULE(pprint_module100)
	MR_init_entry1(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0);
	MR_init_label10(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0,70,4,5,3,7,9,8,12,11,15)
	MR_init_label8(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0,14,19,18,17,25,24,27,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__lb__ho42__[3, 4]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,1)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(2) = MR_r7;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__count_codepoints_2_0,
		f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0_i4);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = (MR_Word) MR_string_const("\n", 1);
	MR_r5 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0_i5);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0_i28);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0_i7);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(8);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0_i8);
	}
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(2) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_r5;
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__pprint__extend_2_0,
		f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0_i9);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0_i70);
	}
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0_i11);
	}
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(3) = MR_tfield(1, MR_r6, 1);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r6 = MR_tfield(1, MR_r6, 0);
	MR_np_localcall_lab(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0,
		f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0_i12);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0_i70);
	}
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,3)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0_i14);
	}
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(2) = MR_r7;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	MR_r3 = (MR_Integer) 1000;
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__pprint__to_doc_3_0,
		f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0_i15);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0_i70);
	}
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,2)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(3, MR_r6, 1);
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_r5;
	MR_sv(2) = MR_r7;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_tempr2 - (MR_Integer) MR_tempr3);
	}
	MR_np_call_localret_ent(fn__pprint__ff_2_0,
		f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0_i19);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0_i18);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0_i70);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,0)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0_i24);
	}
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(2) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_r5;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0_i25);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0_i70);
	}
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_sv(2) = MR_r7;
	MR_sv(1) = MR_tfield(3, MR_r6, 1);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(string__count_codepoints_2_0,
		f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0_i27);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(stream__put_4_0,
		f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0_i28);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_50_95_95_91_51_44_32_52_93_95_48_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module101)
	MR_init_entry1(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_0);
	MR_init_label2(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_0,13,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_foldr_pred__ho44__[1, 2, 3, 4, 5, 6, 7, 9]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_0_i13);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_0,
		f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_0_i4);
MR_def_label(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Bits;
#define	MR_PROC_LABEL	mercury__f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_0
{
#line 162 "int.opt"

    Bits = ML_BITS_PER_INT;
;}
#line 10632 "pprint.c"
	MR_r5 = Bits;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_tempr2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__require__func_error_1_0);

MR_BEGIN_MODULE(pprint_module102)
	MR_init_entry1(fn__f_112_112_114_105_110_116_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_112_114_105_110_116_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0);
	MR_init_label4(fn__f_112_112_114_105_110_116_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0,25,4,27,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__do_foldr_func__ho45__[1, 2, 4, 5]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_112_112_114_105_110_116_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__f_112_112_114_105_110_116_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	if (((MR_Integer) 0 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__f_112_112_114_105_110_116_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__f_112_112_114_105_110_116_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	I = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 286 "version_array.opt"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 10697 "pprint.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__f_112_112_114_105_110_116_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0_i4);
	MR_tempr1 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = ((MR_Integer) MR_r4 - (MR_Integer) 1);
	MR_succip_word = MR_sv(3);
	continue;
	}
	break;
	} /* end while */
MR_def_label(fn__f_112_112_114_105_110_116_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__f_112_112_114_105_110_116_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0_i27);
MR_def_label(fn__f_112_112_114_105_110_116_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__f_112_112_114_105_110_116_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0_i25);
MR_def_label(fn__f_112_112_114_105_110_116_95_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(pprint_module103)
	MR_init_entry1(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0);
	MR_init_label8(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0,37,2,7,6,4,14,13,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__fold_bits__ho46__[1, 2, 3, 4, 5, 6, 7, 10]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0_i2);
	}
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(6);
MR_def_label(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0_i4);
	}
	MR_sv(2) = MR_r6;
	MR_r2 = (MR_Integer) 2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0_i7);
MR_def_label(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("sparse_bitset.m: \140enum.from_int/1\' failed", 41);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0_i13);
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
	MR_np_localcall_lab(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0,
		f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0_i14);
MR_def_label(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0,14)
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
	MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0_i37);
	}
MR_def_label(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0,13)
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
	MR_np_localcall_lab(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0,
		f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0_i16);
MR_def_label(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0,16)
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
	MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_115_112_97_114_115_101_95_98_105_116_115_101_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_0_i37);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(pprint_module104)
	MR_init_entry1(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0);
	MR_init_label10(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0,48,3,4,5,8,7,11,10,13,15)
	MR_init_label2(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__layout_flat__ho47__[3, 4]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,1)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(6);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0_i4);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(6);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0_i5);
	}
	MR_r4 = MR_tfield(2, MR_r4, 1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0_i48);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0_i7);
	}
	MR_sv(2) = MR_tfield(1, MR_r4, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_localcall_lab(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0,
		f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0_i8);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0_i48);
	}
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,3)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0_i10);
	}
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	MR_r3 = (MR_Integer) 1000;
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__pprint__to_doc_3_0,
		f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0_i11);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0_i48);
	}
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0_i13);
	}
	MR_r4 = MR_tfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0_i48);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0_i15);
	}
	MR_r4 = MR_tfield(3, MR_r4, 2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0_i48);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r5;
	MR_sv(3) = MR_tfield(3, MR_r4, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(string__count_codepoints_2_0,
		f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0_i17);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0_i18);
MR_def_label(f_112_112_114_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_55_95_95_91_51_44_32_52_93_95_48_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__pprint_maybe_bunch_0(void)
{
	pprint_module0();
	pprint_module1();
	pprint_module2();
	pprint_module3();
	pprint_module4();
	pprint_module5();
	pprint_module6();
	pprint_module7();
	pprint_module8();
	pprint_module9();
	pprint_module10();
	pprint_module11();
	pprint_module12();
	pprint_module13();
	pprint_module14();
	pprint_module15();
	pprint_module16();
	pprint_module17();
	pprint_module18();
	pprint_module19();
	pprint_module20();
	pprint_module21();
	pprint_module22();
	pprint_module23();
	pprint_module24();
	pprint_module25();
	pprint_module26();
	pprint_module27();
	pprint_module28();
	pprint_module29();
	pprint_module30();
	pprint_module31();
	pprint_module32();
	pprint_module33();
	pprint_module34();
	pprint_module35();
	pprint_module36();
	pprint_module37();
	pprint_module38();
	pprint_module39();
}

static void mercury__pprint_maybe_bunch_1(void)
{
	pprint_module40();
	pprint_module41();
	pprint_module42();
	pprint_module43();
	pprint_module44();
	pprint_module45();
	pprint_module46();
	pprint_module47();
	pprint_module48();
	pprint_module49();
	pprint_module50();
	pprint_module51();
	pprint_module52();
	pprint_module53();
	pprint_module54();
	pprint_module55();
	pprint_module56();
	pprint_module57();
	pprint_module58();
	pprint_module59();
	pprint_module60();
	pprint_module61();
	pprint_module62();
	pprint_module63();
	pprint_module64();
	pprint_module65();
	pprint_module66();
	pprint_module67();
	pprint_module68();
	pprint_module69();
	pprint_module70();
	pprint_module71();
	pprint_module72();
	pprint_module73();
	pprint_module74();
	pprint_module75();
	pprint_module76();
	pprint_module77();
	pprint_module78();
	pprint_module79();
}

static void mercury__pprint_maybe_bunch_2(void)
{
	pprint_module80();
	pprint_module81();
	pprint_module82();
	pprint_module83();
	pprint_module84();
	pprint_module85();
	pprint_module86();
	pprint_module87();
	pprint_module88();
	pprint_module89();
	pprint_module90();
	pprint_module91();
	pprint_module92();
	pprint_module93();
	pprint_module94();
	pprint_module95();
	pprint_module96();
	pprint_module97();
	pprint_module98();
	pprint_module99();
	pprint_module100();
	pprint_module101();
	pprint_module102();
	pprint_module103();
	pprint_module104();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__pprint__init(void);
void mercury__pprint__init_type_tables(void);
void mercury__pprint__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__pprint__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__pprint__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__pprint__init_threadscope_string_table(void);
#endif

void mercury__pprint__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__pprint_maybe_bunch_0();
	mercury__pprint_maybe_bunch_1();
	mercury__pprint_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_pprint__type_ctor_info_depth_0,
		pprint__depth_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_pprint__type_ctor_info_doc_0,
		pprint__doc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_pprint__type_ctor_info_map_pair_2,
		pprint__map_pair_2_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_pprint__doc__arity1__character__arity0__, 5) =
			MR_ENTRY_AP(fn__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_pprint__doc__arity1__float__arity0__, 5) =
			MR_ENTRY_AP(fn__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_pprint__doc__arity1__int__arity0__, 5) =
			MR_ENTRY_AP(fn__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_pprint__doc__arity1__string__arity0__, 5) =
			MR_ENTRY_AP(fn__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_pprint__doc__arity1__pprint__doc__arity0__, 5) =
			MR_ENTRY_AP(fn__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__pprint__init_debugger();
}

void mercury__pprint__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_pprint__type_ctor_info_depth_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_pprint__type_ctor_info_doc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_pprint__type_ctor_info_map_pair_2);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_pprint__type_class_decl_doc_1);
	}
}


void mercury__pprint__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__pprint__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__pprint);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__pprint__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__pprint__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
