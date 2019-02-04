/*
** Automatically generated from `term_io.m'
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
INIT mercury__term_io__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "io.int"
#include "io.mh"

#line 28 "term_io.c"
#line 536 "io.int"
#include "string.mh"

#line 32 "term_io.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 36 "term_io.c"
#line 30 "time.int2"
#include "time.mh"

#line 40 "term_io.c"
#line 33 "array.int2"
#include "array.mh"

#line 44 "term_io.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 48 "term_io.c"
#line 59 "array.opt"
#include "stm_builtin.mh"

#line 52 "term_io.c"
#line 61 "array.opt"
#include "store.mh"

#line 56 "term_io.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 60 "term_io.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 64 "term_io.c"
#line 38 "pretty_printer.opt"
#include "version_array.mh"

#line 68 "term_io.c"
#line 3 "float.opt"
#include "float.mh"

#line 72 "term_io.c"
#line 3 "math.opt"
#include "math.mh"

#line 76 "term_io.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 80 "term_io.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 84 "term_io.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 88 "term_io.c"
#line 4 "char.opt"
#include "char.mh"

#line 92 "term_io.c"
#line 4 "int.opt"
#include "int.mh"

#line 96 "term_io.c"
#line 156 "io.opt"
#include "dir.mh"

#line 100 "term_io.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 104 "term_io.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 108 "term_io.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "term_io.c"
#line 113 "term_io.c"
#include "term_io.mh"

#line 116 "term_io.c"
#line 117 "term_io.c"
#ifndef TERM_IO_DECL_GUARD
#define TERM_IO_DECL_GUARD

#line 121 "term_io.c"
#line 122 "term_io.c"

#endif
#line 125 "term_io.c"

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
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[4];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[5];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_term_io__type_ctor_info_adjacent_to_graphic_token_0,
	mercury_data_term_io__type_ctor_info_read_term_1,
	mercury_data_term_io__type_ctor_info_read_term_0;
MR_decl_label3(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_0, 28,6,30)
MR_decl_label3(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_51_95_95_91_52_44_32_53_93_95_48_6_0, 28,6,3)
MR_decl_label4(term_io__string__all_match_2__ho26_3_0, 23,5,9,1)
MR_decl_label3(term_io__string__foldl_between_2__ho34_6_0, 28,6,3)
MR_decl_label10(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0, 7,8,9,5,12,20,17,43,11,24)
MR_decl_label7(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0, 25,4,2,29,31,33,34)
MR_decl_label2(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0, 2,3)
MR_decl_label10(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0, 4,5,6,7,8,3,10,2,17,15)
MR_decl_label10(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0, 21,22,23,24,25,26,27,28,29,30)
MR_decl_label10(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0, 31,32,33,34,35,36,37,38,39,40)
MR_decl_label10(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0, 41,42,43,44,45,46,47,48,49,50)
MR_decl_label6(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0, 51,52,19,14,13,55)
MR_decl_label1(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0, 2)
MR_decl_label3(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_0, 2,3,4)
MR_decl_label3(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_0, 2,3,4)
MR_decl_label7(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0, 69,9,7,13,26,4,1)
MR_decl_label10(term_io__encode_escaped_char_2_0, 4,5,6,7,8,3,2,16,20,21)
MR_decl_label10(term_io__encode_escaped_char_2_0, 22,23,24,25,26,27,28,29,30,31)
MR_decl_label10(term_io__encode_escaped_char_2_0, 32,33,34,35,36,37,38,39,40,41)
MR_decl_label10(term_io__encode_escaped_char_2_0, 42,43,44,45,46,47,48,49,50,51)
MR_decl_label4(term_io__encode_escaped_char_2_0, 18,13,54,1)
MR_decl_label8(term_io__encode_escaped_char_2_1, 2,5,9,10,11,12,13,1)
MR_decl_label1(term_io__is_mercury_punctuation_char_1_0, 2)
MR_decl_label10(term_io__quote_atom_agt_5_0, 7,8,9,5,12,20,17,43,11,24)
MR_decl_label7(term_io__quote_atom_agt_5_0, 25,4,2,29,31,33,34)
MR_decl_label3(term_io__quote_char_3_0, 2,3,4)
MR_decl_label2(term_io__quote_string_3_0, 6,7)
MR_decl_label2(term_io__quote_string_4_0, 2,3)
MR_decl_label3(term_io__read_term_with_op_table_4_0, 2,3,4)
MR_decl_label10(term_io__string_is_escaped_char_2_0, 4,5,6,7,8,3,11,2,18,22)
MR_decl_label10(term_io__string_is_escaped_char_2_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label10(term_io__string_is_escaped_char_2_0, 33,34,35,36,37,38,39,40,41,42)
MR_decl_label10(term_io__string_is_escaped_char_2_0, 43,44,45,46,47,48,49,50,51,52)
MR_decl_label4(term_io__string_is_escaped_char_2_0, 53,20,15,14)
MR_decl_label10(term_io__string_is_escaped_char_2_1, 2,12,10,5,60,61,62,63,64,58)
MR_decl_label4(term_io__string_is_escaped_char_2_1, 68,69,127,1)
MR_decl_label1(term_io__write_arg_term_8_0, 2)
MR_decl_label4(term_io__write_constant_4_0, 3,5,34,8)
MR_decl_label10(term_io__write_escaped_char_4_0, 4,5,6,7,8,3,10,2,17,15)
MR_decl_label10(term_io__write_escaped_char_4_0, 21,22,23,24,25,26,27,28,29,30)
MR_decl_label10(term_io__write_escaped_char_4_0, 31,32,33,34,35,36,37,38,39,40)
MR_decl_label10(term_io__write_escaped_char_4_0, 41,42,43,44,45,46,47,48,49,50)
MR_decl_label6(term_io__write_escaped_char_4_0, 51,52,19,14,13,55)
MR_decl_label1(term_io__write_escaped_string_4_0, 2)
MR_decl_label8(term_io__write_list_tail_8_0, 78,7,2,3,17,18,10,20)
MR_decl_label1(term_io__write_term_4_0, 3)
MR_decl_label1(term_io__write_term_2_8_0, 2)
MR_decl_label10(term_io__write_term_3_9_0, 10,11,12,4,18,14,24,25,19,31)
MR_decl_label10(term_io__write_term_3_9_0, 32,33,27,41,42,43,44,35,51,53)
MR_decl_label10(term_io__write_term_3_9_0, 58,57,60,61,63,64,46,47,73,75)
MR_decl_label10(term_io__write_term_3_9_0, 80,79,81,83,84,85,86,68,69,96)
MR_decl_label10(term_io__write_term_3_9_0, 98,103,102,104,106,105,107,108,115,113)
MR_decl_label10(term_io__write_term_3_9_0, 111,119,120,121,125,126,90,91,136,138)
MR_decl_label10(term_io__write_term_3_9_0, 143,142,145,146,148,147,149,150,152,153)
MR_decl_label10(term_io__write_term_3_9_0, 130,131,161,163,164,165,157,158,167,171)
MR_decl_label5(term_io__write_term_3_9_0, 172,173,174,3,2)
MR_decl_label4(term_io__write_term_args_8_0, 11,3,4,5)
MR_decl_label2(term_io__write_term_nl_4_0, 3,4)
MR_decl_label2(term_io__write_term_nl_with_op_table_5_0, 2,3)
MR_decl_label1(term_io__write_term_with_op_table_5_0, 2)
MR_decl_label7(term_io__write_variable_2_8_0, 5,2,10,8,12,13,14)
MR_decl_label10(fn__term_io__add_escaped_char_2_0, 4,5,6,7,8,3,2,19,23,24)
MR_decl_label10(fn__term_io__add_escaped_char_2_0, 25,26,27,28,29,30,31,32,33,34)
MR_decl_label10(fn__term_io__add_escaped_char_2_0, 35,36,37,38,39,40,41,42,43,44)
MR_decl_label10(fn__term_io__add_escaped_char_2_0, 45,46,47,48,49,50,51,52,53,54)
MR_decl_label4(fn__term_io__add_escaped_char_2_0, 21,16,15,59)
MR_decl_label3(fn__term_io__escaped_string_1_0, 2,4,5)
MR_decl_label4(fn__term_io__format_constant_agt_2_0, 3,5,7,9)
MR_decl_label3(fn__term_io__mercury_escape_char_1_0, 2,3,4)
MR_decl_label10(fn__term_io__quoted_atom_agt_2_0, 7,8,9,5,12,20,17,44,11,24)
MR_decl_label6(fn__term_io__quoted_atom_agt_2_0, 25,4,2,29,32,30)
MR_decl_label2(fn__term_io__quoted_char_1_0, 2,3)
MR_decl_label1(fn__term_io__quoted_string_1_0, 2)
MR_decl_label5(__Unify___term_io__read_term_1_0, 5,20,6,9,1)
MR_decl_label2(__Compare___term_io__adjacent_to_graphic_token_0_0, 2,3)
MR_decl_label10(__Compare___term_io__read_term_1_0, 7,5,42,11,15,16,19,61,22,62)
MR_decl_label5(__Compare___term_io__read_term_1_0, 9,28,29,31,36)
MR_def_extern_entry(term_io__read_term_with_op_table_4_0)
MR_def_extern_entry(term_io__read_term_3_0)
MR_def_extern_entry(term_io__write_escaped_string_4_0)
MR_def_extern_entry(term_io__quote_string_4_0)
MR_def_extern_entry(term_io__quote_string_3_0)
MR_def_extern_entry(term_io__quote_atom_agt_5_0)
MR_def_extern_entry(term_io__quote_atom_agt_4_0)
MR_def_extern_entry(term_io__write_constant_4_0)
MR_def_extern_entry(term_io__write_constant_3_0)
MR_def_extern_entry(term_io__write_variable_2_8_0)
MR_def_extern_entry(term_io__write_term_2_8_0)
MR_decl_static(term_io__write_arg_term_8_0)
MR_def_extern_entry(term_io__write_term_3_9_0)
MR_decl_static(term_io__write_list_tail_8_0)
MR_decl_static(term_io__write_term_args_8_0)
MR_def_extern_entry(term_io__write_term_with_op_table_5_0)
MR_def_extern_entry(term_io__write_term_4_0)
MR_def_extern_entry(term_io__write_term_nl_with_op_table_5_0)
MR_def_extern_entry(term_io__write_term_nl_4_0)
MR_def_extern_entry(fn__term_io__escaped_string_1_0)
MR_def_extern_entry(fn__term_io__quoted_string_1_0)
MR_def_extern_entry(fn__term_io__quoted_atom_agt_2_0)
MR_def_extern_entry(fn__term_io__format_constant_agt_2_0)
MR_def_extern_entry(fn__term_io__format_constant_1_0)
MR_def_extern_entry(term_io__write_variable_with_op_table_5_0)
MR_def_extern_entry(term_io__write_variable_4_0)
MR_def_extern_entry(term_io__quote_atom_3_0)
MR_def_extern_entry(term_io__quote_atom_4_0)
MR_def_extern_entry(fn__term_io__quoted_atom_1_0)
MR_def_extern_entry(fn__term_io__mercury_escape_char_1_0)
MR_def_extern_entry(term_io__is_mercury_punctuation_char_1_0)
MR_def_extern_entry(term_io__string_is_escaped_char_2_0)
MR_def_extern_entry(term_io__string_is_escaped_char_2_1)
MR_def_extern_entry(fn__term_io__escaped_char_1_0)
MR_def_extern_entry(fn__term_io__quoted_char_1_0)
MR_def_extern_entry(term_io__quote_char_3_0)
MR_def_extern_entry(term_io__quote_char_4_0)
MR_def_extern_entry(term_io__write_escaped_char_4_0)
MR_def_extern_entry(term_io__write_escaped_char_3_0)
MR_def_extern_entry(term_io__write_escaped_string_3_0)
MR_def_extern_entry(term_io__encode_escaped_char_2_0)
MR_def_extern_entry(term_io__encode_escaped_char_2_1)
MR_def_extern_entry(fn__term_io__add_escaped_char_2_0)
MR_def_extern_entry(__Unify___term_io__adjacent_to_graphic_token_0_0)
MR_def_extern_entry(__Compare___term_io__adjacent_to_graphic_token_0_0)
MR_def_extern_entry(__Unify___term_io__read_term_0_0)
MR_def_extern_entry(__Compare___term_io__read_term_0_0)
MR_def_extern_entry(__Unify___term_io__read_term_1_0)
MR_def_extern_entry(__Compare___term_io__read_term_1_0)
MR_def_extern_entry(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0)
MR_def_extern_entry(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0)
MR_def_extern_entry(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0)
MR_def_extern_entry(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0)
MR_def_extern_entry(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0)
MR_def_extern_entry(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0)
MR_decl_static(term_io__string__all_match_2__ho26_3_0)
MR_decl_static(term_io__string__foldl_between_2__ho34_6_0)
MR_def_extern_entry(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0)
MR_decl_static(fn__f_116_101_114_109_95_105_111_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_def_extern_entry(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_0)
MR_decl_static(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_51_95_95_91_52_44_32_53_93_95_48_6_0)

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_ops__type_ctor_info_mercury_op_table_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__,
MR_CTOR0_ADDR(ops, mercury_op_table)
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_1 mercury_common_1[1] =
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
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__,
MR_TAG_COMMON(0,1,0),
MR_CTOR0_ADDR(io, output_stream),
MR_IO_CTOR_ADDR
}
},
};

extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__,
MR_TAG_COMMON(0,2,0),
MR_CTOR0_ADDR(io, output_stream),
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__,
MR_TAG_COMMON(0,2,0),
MR_CTOR0_ADDR(io, output_stream),
MR_CHAR_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_4 mercury_common_4[2] =
{
{
MR_string_const("\"", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const("\'", 1),
MR_tbmkword(0, 0)
},
};

static const MR_EnumFunctorDesc mercury_data_term_io__enum_functor_desc_adjacent_to_graphic_token_0_0 = {
	"maybe_adjacent_to_graphic_token",
	0
};

static const MR_EnumFunctorDesc mercury_data_term_io__enum_functor_desc_adjacent_to_graphic_token_0_1 = {
	"not_adjacent_to_graphic_token",
	1
};

const MR_EnumFunctorDescPtr mercury_data_term_io__enum_value_ordered_adjacent_to_graphic_token_0[] = {
	&mercury_data_term_io__enum_functor_desc_adjacent_to_graphic_token_0_0,
	&mercury_data_term_io__enum_functor_desc_adjacent_to_graphic_token_0_1
};

const MR_EnumFunctorDescPtr mercury_data_term_io__enum_name_ordered_adjacent_to_graphic_token_0[] = {
	&mercury_data_term_io__enum_functor_desc_adjacent_to_graphic_token_0_0,
	&mercury_data_term_io__enum_functor_desc_adjacent_to_graphic_token_0_1
};

const MR_Integer mercury_data_term_io__functor_number_map_adjacent_to_graphic_token_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_term_io__type_ctor_info_adjacent_to_graphic_token_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term_io__adjacent_to_graphic_token_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term_io__adjacent_to_graphic_token_0_0)),
	"term_io",
	"adjacent_to_graphic_token",
	{ (void *)mercury_data_term_io__enum_name_ordered_adjacent_to_graphic_token_0 },
	{ (void *)mercury_data_term_io__enum_value_ordered_adjacent_to_graphic_token_0 },
	2,
	4,
	mercury_data_term_io__functor_number_map_adjacent_to_graphic_token_0
};

static const MR_DuFunctorDesc mercury_data_term_io__du_functor_desc_read_term_1_0 = {
	"eof",
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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_term_io__field_types_read_term_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_term_io__du_functor_desc_read_term_1_1 = {
	"error",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_term_io__field_types_read_term_1_1,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_varset__pti_varset_1__pseudo_1 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_PseudoTypeInfo) 1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_term__pti_term_1__pseudo_1 = {
	&mercury_data_term__type_ctor_info_term_1,
{	(MR_PseudoTypeInfo) 1
}};

const MR_PseudoTypeInfo mercury_data_term_io__field_types_read_term_1_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__pti_varset_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_term__pti_term_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_term_io__du_functor_desc_read_term_1_2 = {
	"term",
	2,
	3,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_term_io__field_types_read_term_1_2,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_term_io__du_stag_ordered_read_term_1_0[] = {
	&mercury_data_term_io__du_functor_desc_read_term_1_0

};

const MR_DuFunctorDescPtr mercury_data_term_io__du_stag_ordered_read_term_1_1[] = {
	&mercury_data_term_io__du_functor_desc_read_term_1_1

};

const MR_DuFunctorDescPtr mercury_data_term_io__du_stag_ordered_read_term_1_2[] = {
	&mercury_data_term_io__du_functor_desc_read_term_1_2

};

const MR_DuPtagLayout mercury_data_term_io__du_ptag_ordered_read_term_1[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_term_io__du_stag_ordered_read_term_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_term_io__du_stag_ordered_read_term_1_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_term_io__du_stag_ordered_read_term_1_2 }

};

const MR_DuFunctorDescPtr mercury_data_term_io__du_name_ordered_read_term_1[] = {
	&mercury_data_term_io__du_functor_desc_read_term_1_0,
	&mercury_data_term_io__du_functor_desc_read_term_1_1,
	&mercury_data_term_io__du_functor_desc_read_term_1_2
};

const MR_Integer mercury_data_term_io__functor_number_map_read_term_1[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_term_io__type_ctor_info_read_term_1 = {
	1,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term_io__read_term_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term_io__read_term_1_0)),
	"term_io",
	"read_term",
	{ (void *)mercury_data_term_io__du_name_ordered_read_term_1 },
	{ (void *)mercury_data_term_io__du_ptag_ordered_read_term_1 },
	3,
	4,
	mercury_data_term_io__functor_number_map_read_term_1
};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term_io__ti_read_term_1term__type_ctor_info_generic_0 = {
	&mercury_data_term_io__type_ctor_info_read_term_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

const MR_TypeCtorInfo_Struct mercury_data_term_io__type_ctor_info_read_term_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___term_io__read_term_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___term_io__read_term_0_0)),
	"term_io",
	"read_term",
	{ 0 },
	{ (void *)&mercury_data_term_io__ti_read_term_1term__type_ctor_info_generic_0 },
	-1,
	0,
	NULL
};



MR_decl_entry(io__stream_name_4_0);
MR_decl_entry(lexer__get_token_5_0);
MR_decl_entry(lexer__get_token_list_2_6_0);
MR_decl_entry(parser__parse_tokens_with_op_table_4_0);

MR_BEGIN_MODULE(term_io_module0)
	MR_init_entry1(term_io__read_term_with_op_table_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__read_term_with_op_table_4_0);
	MR_init_label3(term_io__read_term_with_op_table_4_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_term_with_op_table'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__read_term_with_op_table_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__read_term_with_op_table_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1360 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 601 "term_io.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__stream_name_4_0,
		term_io__read_term_with_op_table_4_0_i2);
MR_def_label(term_io__read_term_with_op_table_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__read_term_with_op_table_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1360 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 629 "term_io.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__get_token_5_0,
		term_io__read_term_with_op_table_4_0_i3);
MR_def_label(term_io__read_term_with_op_table_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(lexer__get_token_list_2_6_0,
		term_io__read_term_with_op_table_4_0_i4);
MR_def_label(term_io__read_term_with_op_table_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parser__parse_tokens_with_op_table_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module1)
	MR_init_entry1(term_io__read_term_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__read_term_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_term'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__read_term_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_tailcall_ent(term_io__read_term_with_op_table_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module2)
	MR_init_entry1(term_io__write_escaped_string_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__write_escaped_string_4_0);
	MR_init_label1(term_io__write_escaped_string_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_escaped_string'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__write_escaped_string_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__term_io__write_escaped_string_4_0
	Str = (MR_String) MR_r4;
{
#line 230 "string.opt"

    Length = strlen(Str);
;}
#line 719 "term_io.c"
	MR_r6 = Length;
#undef	MR_PROC_LABEL
	}
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__term_io__write_escaped_string_4_0
	Str = (MR_String) MR_r4;
{
#line 230 "string.opt"

    Length = strlen(Str);
;}
#line 733 "term_io.c"
	MR_r8 = Length;
#undef	MR_PROC_LABEL
	}
	MR_r9 = (MR_Integer) 0;
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(term_io__write_escaped_string_4_0_i2);
	}
	MR_r7 = MR_r5;
	MR_r5 = MR_r9;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_51_95_95_91_52_44_32_53_93_95_48_6_0);
MR_def_label(term_io__write_escaped_string_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r5;
	MR_r5 = MR_r9;
	MR_r6 = MR_r8;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_51_95_95_91_52_44_32_53_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_3);

MR_BEGIN_MODULE(term_io_module3)
	MR_init_entry1(term_io__quote_string_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__quote_string_4_0);
	MR_init_label2(term_io__quote_string_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'quote_string'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__quote_string_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_r4 = (MR_Integer) 34;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__quote_string_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_io__quote_string_4_0_i2);
MR_def_label(term_io__quote_string_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(term_io__write_escaped_string_4_0,
		term_io__quote_string_4_0_i3);
MR_def_label(term_io__quote_string_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Integer) 34;
	MR_r5 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__quote_string_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module4)
	MR_init_entry1(term_io__quote_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__quote_string_3_0);
	MR_init_label2(term_io__quote_string_3_0,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'quote_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__quote_string_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__quote_string_3_0
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1364 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 849 "term_io.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 34;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__quote_string_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_io__quote_string_3_0_i6);
MR_def_label(term_io__quote_string_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,
		term_io__quote_string_3_0_i7);
MR_def_label(term_io__quote_string_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Integer) 34;
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__quote_string_3_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__unsafe_index_3_0);
MR_decl_entry(char__lower_upper_2_0);

MR_BEGIN_MODULE(term_io_module5)
	MR_init_entry1(term_io__quote_atom_agt_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__quote_atom_agt_5_0);
	MR_init_label10(term_io__quote_atom_agt_5_0,7,8,9,5,12,20,17,43,11,24)
	MR_init_label7(term_io__quote_atom_agt_5_0,25,4,2,29,31,33,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'quote_atom_agt'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__quote_atom_agt_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i7);
	}
	MR_sv(3) = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(6) = MR_r2;
	MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i4);
MR_def_label(term_io__quote_atom_agt_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const(";", 1)) != 0)) {
		MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i8);
	}
	MR_sv(3) = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(6) = MR_r2;
	MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i4);
MR_def_label(term_io__quote_atom_agt_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i9);
	}
	MR_sv(3) = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(6) = MR_r2;
	MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i4);
MR_def_label(term_io__quote_atom_agt_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("{}", 2)) != 0)) {
		MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i5);
	}
	MR_sv(3) = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(6) = MR_r2;
	MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i4);
MR_def_label(term_io__quote_atom_agt_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(term_io__string__all_match_2__ho26_3_0,
		term_io__quote_atom_agt_5_0_i12);
MR_def_label(term_io__quote_atom_agt_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i11);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i11);
	}
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__term_io__quote_atom_agt_5_0
	Str = (MR_String) MR_sv(2);
{
#line 230 "string.opt"

    Length = strlen(Str);
;}
#line 978 "term_io.c"
	MR_r3 = Length;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Index;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__term_io__quote_atom_agt_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Index = (MR_Integer) 0;
	Length = MR_r3;
{
#line 992 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);
;}
#line 1003 "term_io.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i17);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		term_io__quote_atom_agt_5_0_i20);
MR_def_label(term_io__quote_atom_agt_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 35 == (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i11);
	}
MR_def_label(term_io__quote_atom_agt_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i11);
	}
MR_def_label(term_io__quote_atom_agt_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i4);
MR_def_label(term_io__quote_atom_agt_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__term_io__quote_atom_agt_5_0
	Str = (MR_String) MR_sv(2);
{
#line 230 "string.opt"

    Length = strlen(Str);
;}
#line 1044 "term_io.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Index;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__term_io__quote_atom_agt_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Index = (MR_Integer) 0;
	Length = MR_tempr1;
{
#line 992 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);
;}
#line 1069 "term_io.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		term_io__quote_atom_agt_5_0_i24);
MR_def_label(term_io__quote_atom_agt_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(char__lower_upper_2_0,
		term_io__quote_atom_agt_5_0_i25);
MR_def_label(term_io__quote_atom_agt_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i2);
	}
	{
	MR_String	S;
#define	MR_PROC_LABEL	mercury__term_io__quote_atom_agt_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	S = (MR_String) MR_sv(2);
{
#line 471 "string.opt"

    const char  *p;

    SUCCESS_INDICATOR = MR_TRUE;
    for (p = S; *p != '\0'; p++) {
        switch (*p) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':

            case 'a': case 'b': case 'c': case 'd': case 'e':
            case 'f': case 'g': case 'h': case 'i': case 'j':
            case 'k': case 'l': case 'm': case 'n': case 'o':
            case 'p': case 'q': case 'r': case 's': case 't':
            case 'u': case 'v': case 'w': case 'x': case 'y':
            case 'z':

            case 'A': case 'B': case 'C': case 'D': case 'E':
            case 'F': case 'G': case 'H': case 'I': case 'J':
            case 'K': case 'L': case 'M': case 'N': case 'O':
            case 'P': case 'Q': case 'R': case 'S': case 'T':
            case 'U': case 'V': case 'W': case 'X': case 'Y':
            case 'Z':

            case '_':
                continue;

            default:
                SUCCESS_INDICATOR = MR_FALSE;
                break;
        }
    }
;}
#line 1130 "term_io.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i43);
MR_def_label(term_io__quote_atom_agt_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i29);
MR_def_label(term_io__quote_atom_agt_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r2 = (MR_Integer) 1;
	MR_r5 = MR_tempr1;
	}
MR_def_label(term_io__quote_atom_agt_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i31);
	}
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__quote_atom_agt_5_0));
	MR_np_tailcall_ent(do_call_class_method_3);
MR_def_label(term_io__quote_atom_agt_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r4 = (MR_Integer) 39;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__quote_atom_agt_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_io__quote_atom_agt_5_0_i33);
MR_def_label(term_io__quote_atom_agt_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(term_io__write_escaped_string_4_0,
		term_io__quote_atom_agt_5_0_i34);
MR_def_label(term_io__quote_atom_agt_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Integer) 39;
	MR_r5 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__quote_atom_agt_5_0));
	MR_np_tailcall_ent(do_call_class_method_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module6)
	MR_init_entry1(term_io__quote_atom_agt_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__quote_atom_agt_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'quote_atom_agt'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__quote_atom_agt_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__quote_atom_agt_4_0
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1364 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 1236 "term_io.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tempr4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module7)
	MR_init_entry1(term_io__write_constant_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__write_constant_4_0);
	MR_init_label4(term_io__write_constant_4_0,3,5,34,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_constant'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__write_constant_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(term_io__write_constant_4_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(term_io__quote_atom_agt_4_0);
MR_def_label(term_io__write_constant_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(term_io__write_constant_4_0_i5);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	{
	MR_Integer	Val;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_constant_4_0
	Val = MR_tempr1;
	MR_save_registers();
{
#line 554 "io.opt"

    MercuryFilePtr out = mercury_current_text_output();
    if (ML_fprintf(out, "%ld", (long) Val) < 0) {
        mercury_output_error(out);
    }
    MR_update_io(IO0, IO);
;}
#line 1302 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
	}
MR_def_label(term_io__write_constant_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(term_io__write_constant_4_0_i34);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_tailcall_ent(term_io__quote_string_3_0);
MR_def_label(term_io__write_constant_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(term_io__write_constant_4_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	{
	MR_Float	Val;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_constant_4_0
	Val = MR_word_to_float(MR_tempr1);
	MR_save_registers();
{
#line 563 "io.opt"

    char buf[MR_SPRINTF_FLOAT_BUF_SIZE];
    MercuryFilePtr out;

    MR_sprintf_float(buf, Val);
    out = mercury_current_text_output();
    if (ML_fprintf(out, "%s", buf) < 0) {
        mercury_output_error(out);
    }
    MR_update_io(IO0, IO);
;}
#line 1347 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
	}
MR_def_label(term_io__write_constant_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	{
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_constant_4_0
	Character = (MR_Integer) 36;
	MR_save_registers();
{
#line 529 "io.opt"

    MercuryFilePtr out = mercury_current_text_output();
    char    buf[5];
    size_t  len;
    int     i;
    if (Character <= 0x7f) {
        if (MR_PUTCH(*out, Character) < 0) {
            mercury_output_error(out);
        }
        if (Character == '\n') {
            MR_line_number(*out)++;
        }
    } else {
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*out, buf[i]) < 0) {
                mercury_output_error(out);
                break;
            }
        }
    }
    MR_update_io(IO0, IO);
;}
#line 1392 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_constant_4_0
	Message = (MR_String) MR_sv(1);
	MR_save_registers();
{
#line 520 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);
    MR_update_io(IO0, IO);
;}
#line 1411 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module8)
	MR_init_entry1(term_io__write_constant_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__write_constant_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_constant'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__write_constant_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_np_tailcall_ent(term_io__write_constant_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
MR_decl_entry(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(string__int_to_base_string_3_0);
MR_decl_entry(string__append_3_2);
MR_decl_entry(varset__name_var_4_0);

MR_BEGIN_MODULE(term_io_module9)
	MR_init_entry1(term_io__write_variable_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__write_variable_2_8_0);
	MR_init_label7(term_io__write_variable_2_8_0,5,2,10,8,12,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_variable_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__write_variable_2_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_tempr3 = MR_r5;
	MR_sv(1) = MR_tempr3;
	MR_sv(3) = MR_r6;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(0, MR_tempr3, 2);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term_io__write_variable_2_8_0_i5);
MR_def_label(term_io__write_variable_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__write_variable_2_8_0_i2);
	}
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(term_io__write_term_2_8_0);
	}
MR_def_label(term_io__write_variable_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_tfield(0, MR_sv(1), 1);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term_io__write_variable_2_8_0_i10);
MR_def_label(term_io__write_variable_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__write_variable_2_8_0_i8);
	}
	{
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_variable_2_8_0
	Message = (MR_String) MR_r2;
	MR_save_registers();
{
#line 520 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);
    MR_update_io(IO0, IO);
;}
#line 1542 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(7);
MR_def_label(term_io__write_variable_2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		term_io__write_variable_2_8_0_i12);
MR_def_label(term_io__write_variable_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		term_io__write_variable_2_8_0_i13);
MR_def_label(term_io__write_variable_2_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(varset__name_var_4_0,
		term_io__write_variable_2_8_0_i14);
MR_def_label(term_io__write_variable_2_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	{
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_variable_2_8_0
	Message = (MR_String) MR_tempr1;
	MR_save_registers();
{
#line 520 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);
    MR_update_io(IO0, IO);
;}
#line 1596 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_1);

MR_BEGIN_MODULE(term_io_module10)
	MR_init_entry1(term_io__write_term_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__write_term_2_8_0);
	MR_init_label1(term_io__write_term_2_8_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_term_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__write_term_2_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 8;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__write_term_2_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__term_io__write_term_2_8_0_i2);
MR_def_label(term_io__write_term_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(term_io__write_term_3_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module11)
	MR_init_entry1(term_io__write_arg_term_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__write_arg_term_8_0);
	MR_init_label1(term_io__write_arg_term_8_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_arg_term'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_io__write_arg_term_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 9;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__write_arg_term_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__term_io__write_arg_term_8_0_i2);
MR_def_label(term_io__write_arg_term_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(term_io__write_term_3_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_char_3_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(ops__lookup_prefix_op_4_0);
MR_decl_entry(io__output_stream_3_0);
MR_decl_entry(ops__lookup_postfix_op_4_0);
MR_decl_entry(ops__lookup_infix_op_5_0);
MR_decl_entry(ops__lookup_binary_prefix_op_5_0);
MR_decl_entry(ops__lookup_op_2_0);
MR_decl_entry(fn__ops__max_priority_1_0);

MR_BEGIN_MODULE(term_io_module12)
	MR_init_entry1(term_io__write_term_3_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__write_term_3_9_0);
	MR_init_label10(term_io__write_term_3_9_0,10,11,12,4,18,14,24,25,19,31)
	MR_init_label10(term_io__write_term_3_9_0,32,33,27,41,42,43,44,35,51,53)
	MR_init_label10(term_io__write_term_3_9_0,58,57,60,61,63,64,46,47,73,75)
	MR_init_label10(term_io__write_term_3_9_0,80,79,81,83,84,85,86,68,69,96)
	MR_init_label10(term_io__write_term_3_9_0,98,103,102,104,106,105,107,108,115,113)
	MR_init_label10(term_io__write_term_3_9_0,111,119,120,121,125,126,90,91,136,138)
	MR_init_label10(term_io__write_term_3_9_0,143,142,145,146,148,147,149,150,152,153)
	MR_init_label10(term_io__write_term_3_9_0,130,131,161,163,164,165,157,158,167,171)
	MR_init_label5(term_io__write_term_3_9_0,172,173,174,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_term_3'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__write_term_3_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_sv(7) = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr5, 0);
	MR_sv(1) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i4);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i4);
	}
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i4);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i4);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i4);
	}
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(9) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Integer) 91;
	}
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i10);
MR_def_label(term_io__write_term_3_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(term_io__write_arg_term_8_0,
		term_io__write_term_3_9_0_i11);
MR_def_label(term_io__write_term_3_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(term_io__write_list_tail_8_0,
		term_io__write_term_3_9_0_i12);
MR_def_label(term_io__write_term_3_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Integer) 93;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i174);
MR_def_label(term_io__write_term_3_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i14);
	}
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i14);
	}
	MR_sv(4) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_r1 = (MR_Word) MR_string_const("[]", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		term_io__write_term_3_9_0_i18);
MR_def_label(term_io__write_term_3_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(16);
MR_def_label(term_io__write_term_3_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("{}", 2)) != 0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i19);
	}
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i19);
	}
	MR_tempr2 = MR_sv(7);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i19);
	}
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(9) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("{ ", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		term_io__write_term_3_9_0_i24);
MR_def_label(term_io__write_term_3_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(term_io__write_term_2_8_0,
		term_io__write_term_3_9_0_i25);
MR_def_label(term_io__write_term_3_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const(" }", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		term_io__write_term_3_9_0_i174);
MR_def_label(term_io__write_term_3_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i27);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("{}", 2)) != 0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i27);
	}
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i27);
	}
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_tempr2 = MR_sv(7);
	MR_sv(9) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Integer) 123;
	}
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i31);
MR_def_label(term_io__write_term_3_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(term_io__write_arg_term_8_0,
		term_io__write_term_3_9_0_i32);
MR_def_label(term_io__write_term_3_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(term_io__write_term_args_8_0,
		term_io__write_term_3_9_0_i33);
MR_def_label(term_io__write_term_3_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Integer) 125;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i174);
MR_def_label(term_io__write_term_3_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i35);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i35);
	}
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i35);
	}
	MR_tempr3 = MR_sv(7);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i35);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i35);
	}
	MR_sv(2) = MR_r3;
	MR_sv(9) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r1;
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	}
	MR_np_call_localret_ent(term_io__write_variable_2_8_0,
		term_io__write_term_3_9_0_i41);
MR_def_label(term_io__write_term_3_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i42);
MR_def_label(term_io__write_term_3_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(1);
	MR_np_call_localret_ent(term_io__write_arg_term_8_0,
		term_io__write_term_3_9_0_i43);
MR_def_label(term_io__write_term_3_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(term_io__write_term_args_8_0,
		term_io__write_term_3_9_0_i44);
MR_def_label(term_io__write_term_3_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Integer) 41;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i174);
MR_def_label(term_io__write_term_3_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i47);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(7);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i47);
	}
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i47);
	}
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tempr3;
	MR_sv(9) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(8) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tfield(0, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(ops__lookup_prefix_op_4_0,
		term_io__write_term_3_9_0_i51);
MR_def_label(term_io__write_term_3_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i46);
	}
	MR_sv(7) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(io__output_stream_3_0,
		term_io__write_term_3_9_0_i53);
MR_def_label(term_io__write_term_3_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r6 = MR_tempr1;
	if (((MR_Integer) MR_sv(7) <= (MR_Integer) MR_sv(9))) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i57);
	}
	MR_sv(6) = MR_r1;
	MR_sv(14) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Integer) 40;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__write_term_3_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_io__write_term_3_9_0_i58);
MR_def_label(term_io__write_term_3_9_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(term_io__write_constant_3_0,
		term_io__write_term_3_9_0_i60);
MR_def_label(term_io__write_term_3_9_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(14) = MR_r6;
	MR_np_call_localret_ent(term_io__write_constant_3_0,
		term_io__write_term_3_9_0_i60);
MR_def_label(term_io__write_term_3_9_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i61);
MR_def_label(term_io__write_term_3_9_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i63);
	}
	MR_r3 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_r5 = ((MR_Integer) MR_sv(7) - (MR_Integer) 1);
	MR_r2 = MR_sv(12);
	MR_r1 = MR_sv(13);
	MR_np_localcall_lab(term_io__write_term_3_9_0,
		term_io__write_term_3_9_0_i64);
MR_def_label(term_io__write_term_3_9_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(7);
	MR_r2 = MR_sv(12);
	MR_r1 = MR_sv(13);
	MR_np_localcall_lab(term_io__write_term_3_9_0,
		term_io__write_term_3_9_0_i64);
MR_def_label(term_io__write_term_3_9_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(7) <= (MR_Integer) MR_sv(9))) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i2);
	}
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(14);
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Integer) 41;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__write_term_3_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_io__write_term_3_9_0_i174);
MR_def_label(term_io__write_term_3_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_r2 = MR_sv(12);
	MR_r1 = MR_sv(13);
MR_def_label(term_io__write_term_3_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i69);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(7);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i69);
	}
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i69);
	}
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tempr3;
	MR_sv(9) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(8) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tfield(0, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(ops__lookup_postfix_op_4_0,
		term_io__write_term_3_9_0_i73);
MR_def_label(term_io__write_term_3_9_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i68);
	}
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_np_call_localret_ent(io__output_stream_3_0,
		term_io__write_term_3_9_0_i75);
MR_def_label(term_io__write_term_3_9_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r6 = MR_tempr1;
	if (((MR_Integer) MR_sv(5) <= (MR_Integer) MR_sv(9))) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i79);
	}
	MR_sv(7) = MR_r1;
	MR_sv(14) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = (MR_Integer) 40;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__write_term_3_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_io__write_term_3_9_0_i80);
MR_def_label(term_io__write_term_3_9_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_r2 = MR_sv(12);
	MR_r1 = MR_sv(13);
	MR_GOTO_LAB(term_io__write_term_3_9_0_i81);
MR_def_label(term_io__write_term_3_9_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(14) = MR_r6;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(12);
	MR_r1 = MR_sv(13);
MR_def_label(term_io__write_term_3_9_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i83);
	}
	MR_r5 = ((MR_Integer) MR_sv(5) - (MR_Integer) 1);
	MR_np_localcall_lab(term_io__write_term_3_9_0,
		term_io__write_term_3_9_0_i84);
MR_def_label(term_io__write_term_3_9_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(5);
	MR_np_localcall_lab(term_io__write_term_3_9_0,
		term_io__write_term_3_9_0_i84);
MR_def_label(term_io__write_term_3_9_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i85);
MR_def_label(term_io__write_term_3_9_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(term_io__write_constant_3_0,
		term_io__write_term_3_9_0_i86);
MR_def_label(term_io__write_term_3_9_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(5) <= (MR_Integer) MR_sv(9))) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i174);
	}
	MR_r1 = MR_sv(14);
	MR_r3 = MR_sv(7);
	MR_r4 = (MR_Integer) 41;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__write_term_3_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_io__write_term_3_9_0_i174);
MR_def_label(term_io__write_term_3_9_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_r2 = MR_sv(12);
	MR_r1 = MR_sv(13);
MR_def_label(term_io__write_term_3_9_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i91);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(7);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i91);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i91);
	}
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i91);
	}
	MR_tempr4 = MR_r3;
	MR_sv(2) = MR_tempr4;
	MR_sv(9) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(8) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(10) = MR_tfield(0, MR_sv(1), 0);
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(ops__lookup_infix_op_5_0,
		term_io__write_term_3_9_0_i96);
MR_def_label(term_io__write_term_3_9_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i90);
	}
	MR_sv(7) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(11) = MR_r2;
	MR_np_call_localret_ent(io__output_stream_3_0,
		term_io__write_term_3_9_0_i98);
MR_def_label(term_io__write_term_3_9_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r6 = MR_tempr1;
	if (((MR_Integer) MR_sv(11) <= (MR_Integer) MR_sv(9))) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i102);
	}
	MR_sv(14) = MR_r1;
	MR_sv(15) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(14);
	MR_r4 = (MR_Integer) 40;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__write_term_3_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_io__write_term_3_9_0_i103);
MR_def_label(term_io__write_term_3_9_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_r2 = MR_sv(12);
	MR_r1 = MR_sv(13);
	MR_GOTO_LAB(term_io__write_term_3_9_0_i104);
MR_def_label(term_io__write_term_3_9_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(15) = MR_r6;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_sv(14) = MR_r1;
	MR_r2 = MR_sv(12);
	MR_r1 = MR_sv(13);
MR_def_label(term_io__write_term_3_9_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i106);
	}
	MR_r5 = ((MR_Integer) MR_sv(11) - (MR_Integer) 1);
	MR_GOTO_LAB(term_io__write_term_3_9_0_i105);
MR_def_label(term_io__write_term_3_9_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(11);
MR_def_label(term_io__write_term_3_9_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r1;
	MR_np_localcall_lab(term_io__write_term_3_9_0,
		term_io__write_term_3_9_0_i107);
MR_def_label(term_io__write_term_3_9_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(10), MR_string_const(",", 1)) != 0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i108);
	}
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		term_io__write_term_3_9_0_i121);
MR_def_label(term_io__write_term_3_9_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(10), MR_string_const(".", 1)) != 0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i111);
	}
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0,
		term_io__write_term_3_9_0_i115);
MR_def_label(term_io__write_term_3_9_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i113);
	}
	MR_r1 = (MR_Word) MR_string_const("\'.\'", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		term_io__write_term_3_9_0_i121);
MR_def_label(term_io__write_term_3_9_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		term_io__write_term_3_9_0_i121);
MR_def_label(term_io__write_term_3_9_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i119);
MR_def_label(term_io__write_term_3_9_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(term_io__write_constant_3_0,
		term_io__write_term_3_9_0_i120);
MR_def_label(term_io__write_term_3_9_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i121);
MR_def_label(term_io__write_term_3_9_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_r2 = MR_sv(12);
	MR_r1 = MR_sv(13);
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i125);
	}
	MR_r5 = ((MR_Integer) MR_sv(11) - (MR_Integer) 1);
	MR_np_localcall_lab(term_io__write_term_3_9_0,
		term_io__write_term_3_9_0_i126);
MR_def_label(term_io__write_term_3_9_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(11);
	MR_np_localcall_lab(term_io__write_term_3_9_0,
		term_io__write_term_3_9_0_i126);
MR_def_label(term_io__write_term_3_9_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(11) <= (MR_Integer) MR_sv(9))) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i2);
	}
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(15);
	MR_r3 = MR_sv(14);
	MR_r4 = (MR_Integer) 41;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__write_term_3_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_io__write_term_3_9_0_i174);
MR_def_label(term_io__write_term_3_9_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_r2 = MR_sv(12);
	MR_r1 = MR_sv(13);
MR_def_label(term_io__write_term_3_9_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i131);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(7);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i131);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i131);
	}
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i131);
	}
	MR_tempr4 = MR_r3;
	MR_sv(2) = MR_tempr4;
	MR_sv(9) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(14) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(10) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tfield(0, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(ops__lookup_binary_prefix_op_5_0,
		term_io__write_term_3_9_0_i136);
MR_def_label(term_io__write_term_3_9_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i130);
	}
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(io__output_stream_3_0,
		term_io__write_term_3_9_0_i138);
MR_def_label(term_io__write_term_3_9_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r6 = MR_tempr1;
	if (((MR_Integer) MR_sv(6) <= (MR_Integer) MR_sv(9))) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i142);
	}
	MR_sv(5) = MR_r1;
	MR_sv(11) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Integer) 40;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__write_term_3_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_io__write_term_3_9_0_i143);
MR_def_label(term_io__write_term_3_9_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(term_io__write_constant_3_0,
		term_io__write_term_3_9_0_i145);
MR_def_label(term_io__write_term_3_9_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(11) = MR_r6;
	MR_np_call_localret_ent(term_io__write_constant_3_0,
		term_io__write_term_3_9_0_i145);
MR_def_label(term_io__write_term_3_9_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i146);
MR_def_label(term_io__write_term_3_9_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i148);
	}
	MR_r3 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_r5 = ((MR_Integer) MR_sv(6) - (MR_Integer) 1);
	MR_r4 = MR_sv(14);
	MR_r2 = MR_sv(12);
	MR_r1 = MR_sv(13);
	MR_GOTO_LAB(term_io__write_term_3_9_0_i147);
MR_def_label(term_io__write_term_3_9_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_r5 = MR_sv(6);
	MR_r4 = MR_sv(14);
	MR_r2 = MR_sv(12);
	MR_r1 = MR_sv(13);
MR_def_label(term_io__write_term_3_9_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r1;
	MR_np_localcall_lab(term_io__write_term_3_9_0,
		term_io__write_term_3_9_0_i149);
MR_def_label(term_io__write_term_3_9_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i150);
MR_def_label(term_io__write_term_3_9_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i152);
	}
	MR_r3 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(6) - (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_r2 = MR_sv(12);
	MR_r1 = MR_sv(13);
	MR_np_localcall_lab(term_io__write_term_3_9_0,
		term_io__write_term_3_9_0_i153);
MR_def_label(term_io__write_term_3_9_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_r2 = MR_sv(12);
	MR_r1 = MR_sv(13);
	MR_np_localcall_lab(term_io__write_term_3_9_0,
		term_io__write_term_3_9_0_i153);
MR_def_label(term_io__write_term_3_9_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(6) <= (MR_Integer) MR_sv(9))) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i2);
	}
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Integer) 41;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__write_term_3_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_io__write_term_3_9_0_i174);
MR_def_label(term_io__write_term_3_9_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_r2 = MR_sv(12);
	MR_r1 = MR_sv(13);
MR_def_label(term_io__write_term_3_9_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i158);
	}
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i158);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(9) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(ops__lookup_op_2_0,
		term_io__write_term_3_9_0_i161);
MR_def_label(term_io__write_term_3_9_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i157);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__ops__max_priority_1_0,
		term_io__write_term_3_9_0_i163);
MR_def_label(term_io__write_term_3_9_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(9) > (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i157);
	}
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i164);
MR_def_label(term_io__write_term_3_9_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(term_io__write_constant_3_0,
		term_io__write_term_3_9_0_i165);
MR_def_label(term_io__write_term_3_9_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i167);
MR_def_label(term_io__write_term_3_9_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_r2 = MR_sv(12);
	MR_r1 = MR_sv(13);
MR_def_label(term_io__write_term_3_9_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(term_io__write_constant_4_0,
		term_io__write_term_3_9_0_i167);
MR_def_label(term_io__write_term_3_9_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(9) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Integer) 40;
	}
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i171);
MR_def_label(term_io__write_term_3_9_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(3);
	MR_np_call_localret_ent(term_io__write_arg_term_8_0,
		term_io__write_term_3_9_0_i172);
MR_def_label(term_io__write_term_3_9_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(term_io__write_term_args_8_0,
		term_io__write_term_3_9_0_i173);
MR_def_label(term_io__write_term_3_9_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Integer) 41;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i174);
MR_def_label(term_io__write_term_3_9_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(16);
MR_def_label(term_io__write_term_3_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(term_io__write_variable_2_8_0);
MR_def_label(term_io__write_term_3_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module13)
	MR_init_entry1(term_io__write_list_tail_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__write_list_tail_8_0);
	MR_init_label8(term_io__write_list_tail_8_0,78,7,2,3,17,18,10,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_list_tail'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_io__write_list_tail_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(term_io__write_list_tail_8_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(term_io__write_list_tail_8_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR1_ADDR(term, term);
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_tempr3 = MR_r5;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(0, MR_tempr3, 2);
	MR_r5 = MR_tfield(1, MR_sv(2), 0);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term_io__write_list_tail_8_0_i7);
MR_def_label(term_io__write_list_tail_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__write_list_tail_8_0_i2);
	}
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(term_io__write_list_tail_8_0_i78);
	}
MR_def_label(term_io__write_list_tail_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(7);
MR_def_label(term_io__write_list_tail_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(term_io__write_list_tail_8_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 0);
	MR_r8 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(term_io__write_list_tail_8_0_i10);
	}
	MR_r9 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r9, MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(term_io__write_list_tail_8_0_i10);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr5, 1);
	MR_r8 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(term_io__write_list_tail_8_0_i10);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	MR_r9 = MR_tempr3;
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(term_io__write_list_tail_8_0_i10);
	}
	MR_r10 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(term_io__write_list_tail_8_0_i10);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r1;
	{
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_list_tail_8_0
	Message = (MR_String) (MR_Word) MR_string_const(", ", 2);
	MR_save_registers();
{
#line 520 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);
    MR_update_io(IO0, IO);
;}
#line 2876 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r2 = (MR_Integer) 9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__write_list_tail_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__term_io__write_list_tail_8_0_i17);
MR_def_label(term_io__write_list_tail_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	}
	MR_np_call_localret_ent(term_io__write_term_3_9_0,
		term_io__write_list_tail_8_0_i18);
MR_def_label(term_io__write_list_tail_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(term_io__write_list_tail_8_0_i78);
	}
MR_def_label(term_io__write_list_tail_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(term_io__write_list_tail_8_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	MR_r8 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(term_io__write_list_tail_8_0_i20);
	}
	MR_r9 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r9, MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(term_io__write_list_tail_8_0_i20);
	}
	MR_r8 = MR_tfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(term_io__write_list_tail_8_0_i20);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(8);
	}
MR_def_label(term_io__write_list_tail_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r1;
	{
	MR_Word MR_tempr1;
	{
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_list_tail_8_0
	Message = (MR_String) (MR_Word) MR_string_const(" | ", 3);
	MR_save_registers();
{
#line 520 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);
    MR_update_io(IO0, IO);
;}
#line 2967 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(term_io__write_term_2_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module14)
	MR_init_entry1(term_io__write_term_args_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__write_term_args_8_0);
	MR_init_label4(term_io__write_term_args_8_0,11,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_term_args'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_io__write_term_args_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(term_io__write_term_args_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(term_io__write_term_args_8_0_i3);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(8);
MR_def_label(term_io__write_term_args_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r1;
	{
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_term_args_8_0
	Message = (MR_String) (MR_Word) MR_string_const(", ", 2);
	MR_save_registers();
{
#line 520 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);
    MR_update_io(IO0, IO);
;}
#line 3039 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r2 = (MR_Integer) 9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__write_term_args_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__term_io__write_term_args_8_0_i4);
MR_def_label(term_io__write_term_args_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	}
	MR_np_call_localret_ent(term_io__write_term_3_9_0,
		term_io__write_term_args_8_0_i5);
MR_def_label(term_io__write_term_args_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(term_io__write_term_args_8_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module15)
	MR_init_entry1(term_io__write_term_with_op_table_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__write_term_with_op_table_5_0);
	MR_init_label1(term_io__write_term_with_op_table_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_term_with_op_table'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__write_term_with_op_table_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 8;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__write_term_with_op_table_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__term_io__write_term_with_op_table_5_0_i2);
MR_def_label(term_io__write_term_with_op_table_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r6 = MR_sv(2);
	MR_r7 = (MR_Integer) 0;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(term_io__write_term_3_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module16)
	MR_init_entry1(term_io__write_term_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__write_term_4_0);
	MR_init_label1(term_io__write_term_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_term'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__write_term_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 8;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__write_term_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__term_io__write_term_4_0_i3);
MR_def_label(term_io__write_term_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r6 = MR_sv(1);
	MR_r7 = (MR_Integer) 0;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(term_io__write_term_3_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module17)
	MR_init_entry1(term_io__write_term_nl_with_op_table_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__write_term_nl_with_op_table_5_0);
	MR_init_label2(term_io__write_term_nl_with_op_table_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_term_nl_with_op_table'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__write_term_nl_with_op_table_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 8;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__write_term_nl_with_op_table_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__term_io__write_term_nl_with_op_table_5_0_i2);
MR_def_label(term_io__write_term_nl_with_op_table_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r6 = MR_sv(2);
	MR_r7 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(term_io__write_term_3_9_0,
		term_io__write_term_nl_with_op_table_5_0_i3);
MR_def_label(term_io__write_term_nl_with_op_table_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_term_nl_with_op_table_5_0
	Message = (MR_String) (MR_Word) MR_string_const(".\n", 2);
	MR_save_registers();
{
#line 520 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);
    MR_update_io(IO0, IO);
;}
#line 3241 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module18)
	MR_init_entry1(term_io__write_term_nl_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__write_term_nl_4_0);
	MR_init_label2(term_io__write_term_nl_4_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_term_nl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__write_term_nl_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 8;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__write_term_nl_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__term_io__write_term_nl_4_0_i3);
MR_def_label(term_io__write_term_nl_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r6 = MR_sv(1);
	MR_r7 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(term_io__write_term_3_9_0,
		term_io__write_term_nl_4_0_i4);
MR_def_label(term_io__write_term_nl_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_term_nl_4_0
	Message = (MR_String) (MR_Word) MR_string_const(".\n", 2);
	MR_save_registers();
{
#line 520 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);
    MR_update_io(IO0, IO);
;}
#line 3309 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);
MR_decl_entry(fn__string__append_list_1_0);

MR_BEGIN_MODULE(term_io_module19)
	MR_init_entry1(fn__term_io__escaped_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term_io__escaped_string_1_0);
	MR_init_label3(fn__term_io__escaped_string_1_0,2,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'escaped_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term_io__escaped_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__term_io__escaped_string_1_0
	Str = (MR_String) MR_r1;
{
#line 230 "string.opt"

    Length = strlen(Str);
;}
#line 3351 "term_io.c"
	MR_r3 = Length;
#undef	MR_PROC_LABEL
	}
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__term_io__escaped_string_1_0
	Str = (MR_String) MR_r1;
{
#line 230 "string.opt"

    Length = strlen(Str);
;}
#line 3365 "term_io.c"
	MR_r5 = Length;
#undef	MR_PROC_LABEL
	}
	MR_r2 = (MR_Integer) 0;
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(fn__term_io__escaped_string_1_0_i2);
	}
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(term_io__string__foldl_between_2__ho34_6_0,
		fn__term_io__escaped_string_1_0_i4);
MR_def_label(fn__term_io__escaped_string_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r5;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(term_io__string__foldl_between_2__ho34_6_0,
		fn__term_io__escaped_string_1_0_i4);
MR_def_label(fn__term_io__escaped_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		fn__term_io__escaped_string_1_0_i5);
MR_def_label(fn__term_io__escaped_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module20)
	MR_init_entry1(fn__term_io__quoted_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term_io__quoted_string_1_0);
	MR_init_label1(fn__term_io__quoted_string_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'quoted_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term_io__quoted_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__term_io__escaped_string_1_0,
		fn__term_io__quoted_string_1_0_i2);
MR_def_label(fn__term_io__quoted_string_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("\"", 1);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module21)
	MR_init_entry1(fn__term_io__quoted_atom_agt_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term_io__quoted_atom_agt_2_0);
	MR_init_label10(fn__term_io__quoted_atom_agt_2_0,7,8,9,5,12,20,17,44,11,24)
	MR_init_label6(fn__term_io__quoted_atom_agt_2_0,25,4,2,29,32,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'quoted_atom_agt'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term_io__quoted_atom_agt_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i7);
	}
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i4);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const(";", 1)) != 0)) {
		MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i8);
	}
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i4);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i9);
	}
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i4);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("{}", 2)) != 0)) {
		MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i5);
	}
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i4);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(term_io__string__all_match_2__ho26_3_0,
		fn__term_io__quoted_atom_agt_2_0_i12);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i11);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i11);
	}
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__term_io__quoted_atom_agt_2_0
	Str = (MR_String) MR_sv(1);
{
#line 230 "string.opt"

    Length = strlen(Str);
;}
#line 3508 "term_io.c"
	MR_r3 = Length;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Index;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__term_io__quoted_atom_agt_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Index = (MR_Integer) 0;
	Length = MR_r3;
{
#line 992 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);
;}
#line 3533 "term_io.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i17);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		fn__term_io__quoted_atom_agt_2_0_i20);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 35 == (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i11);
	}
MR_def_label(fn__term_io__quoted_atom_agt_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i11);
	}
MR_def_label(fn__term_io__quoted_atom_agt_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i4);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__term_io__quoted_atom_agt_2_0
	Str = (MR_String) MR_sv(1);
{
#line 230 "string.opt"

    Length = strlen(Str);
;}
#line 3571 "term_io.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Index;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__term_io__quoted_atom_agt_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Index = (MR_Integer) 0;
	Length = MR_tempr1;
{
#line 992 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);
;}
#line 3596 "term_io.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		fn__term_io__quoted_atom_agt_2_0_i24);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(char__lower_upper_2_0,
		fn__term_io__quoted_atom_agt_2_0_i25);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i2);
	}
	{
	MR_String	S;
#define	MR_PROC_LABEL	mercury__fn__term_io__quoted_atom_agt_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	S = (MR_String) MR_sv(1);
{
#line 471 "string.opt"

    const char  *p;

    SUCCESS_INDICATOR = MR_TRUE;
    for (p = S; *p != '\0'; p++) {
        switch (*p) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':

            case 'a': case 'b': case 'c': case 'd': case 'e':
            case 'f': case 'g': case 'h': case 'i': case 'j':
            case 'k': case 'l': case 'm': case 'n': case 'o':
            case 'p': case 'q': case 'r': case 's': case 't':
            case 'u': case 'v': case 'w': case 'x': case 'y':
            case 'z':

            case 'A': case 'B': case 'C': case 'D': case 'E':
            case 'F': case 'G': case 'H': case 'I': case 'J':
            case 'K': case 'L': case 'M': case 'N': case 'O':
            case 'P': case 'Q': case 'R': case 'S': case 'T':
            case 'U': case 'V': case 'W': case 'X': case 'Y':
            case 'Z':

            case '_':
                continue;

            default:
                SUCCESS_INDICATOR = MR_FALSE;
                break;
        }
    }
;}
#line 3657 "term_io.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i44);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i29);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
MR_def_label(fn__term_io__quoted_atom_agt_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i30);
	}
	MR_np_call_localret_ent(fn__term_io__escaped_string_1_0,
		fn__term_io__quoted_atom_agt_2_0_i32);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("\'", 1);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module22)
	MR_init_entry1(fn__term_io__format_constant_agt_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term_io__format_constant_agt_2_0);
	MR_init_label4(fn__term_io__format_constant_agt_2_0,3,5,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_constant_agt'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term_io__format_constant_agt_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__term_io__format_constant_agt_2_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(fn__term_io__quoted_atom_agt_2_0);
MR_def_label(fn__term_io__format_constant_agt_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__term_io__format_constant_agt_2_0_i5);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = (MR_Integer) 10;
	MR_np_tailcall_ent(string__int_to_base_string_3_0);
MR_def_label(fn__term_io__format_constant_agt_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__term_io__format_constant_agt_2_0_i7);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_tailcall_ent(fn__term_io__quoted_string_1_0);
MR_def_label(fn__term_io__format_constant_agt_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__term_io__format_constant_agt_2_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	{
	MR_Float	Flt;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__fn__term_io__format_constant_agt_2_0
	Flt = MR_word_to_float(MR_tempr1);
{
#line 297 "string.opt"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
};}
#line 3756 "term_io.c"
	MR_r1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
MR_def_label(fn__term_io__format_constant_agt_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\044", 1);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(string__append_3_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module23)
	MR_init_entry1(fn__term_io__format_constant_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term_io__format_constant_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'format_constant'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term_io__format_constant_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_np_tailcall_ent(fn__term_io__format_constant_agt_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module24)
	MR_init_entry1(term_io__write_variable_with_op_table_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__write_variable_with_op_table_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_variable_with_op_table'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__write_variable_with_op_table_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = (MR_Integer) 0;
	MR_np_tailcall_ent(term_io__write_variable_2_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module25)
	MR_init_entry1(term_io__write_variable_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__write_variable_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_variable'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__write_variable_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_r3;
	MR_r6 = (MR_Integer) 0;
	MR_np_tailcall_ent(term_io__write_variable_2_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module26)
	MR_init_entry1(term_io__quote_atom_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__quote_atom_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'quote_atom'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__quote_atom_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_np_tailcall_ent(term_io__quote_atom_agt_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module27)
	MR_init_entry1(term_io__quote_atom_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__quote_atom_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'quote_atom'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__quote_atom_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Integer) 1;
	MR_r6 = MR_tempr1;
	MR_np_tailcall_ent(term_io__quote_atom_agt_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module28)
	MR_init_entry1(fn__term_io__quoted_atom_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term_io__quoted_atom_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'quoted_atom'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term_io__quoted_atom_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_np_tailcall_ent(fn__term_io__quoted_atom_agt_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__pad_left_4_0);

MR_BEGIN_MODULE(term_io_module29)
	MR_init_entry1(fn__term_io__mercury_escape_char_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term_io__mercury_escape_char_1_0);
	MR_init_label3(fn__term_io__mercury_escape_char_1_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_escape_char'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term_io__mercury_escape_char_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__fn__term_io__mercury_escape_char_1_0
	Character = MR_r1;
{
#line 62 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 3949 "term_io.c"
	MR_r1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		fn__term_io__mercury_escape_char_1_0_i2);
MR_def_label(fn__term_io__mercury_escape_char_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 48;
	MR_r3 = (MR_Integer) 3;
	MR_np_call_localret_ent(string__pad_left_4_0,
		fn__term_io__mercury_escape_char_1_0_i3);
MR_def_label(fn__term_io__mercury_escape_char_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\\", 1);
	MR_np_call_localret_ent(string__append_3_2,
		fn__term_io__mercury_escape_char_1_0_i4);
MR_def_label(fn__term_io__mercury_escape_char_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__append_3_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module30)
	MR_init_entry1(term_io__is_mercury_punctuation_char_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__is_mercury_punctuation_char_1_0);
	MR_init_label1(term_io__is_mercury_punctuation_char_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_mercury_punctuation_char'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__is_mercury_punctuation_char_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,32)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,33)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,34)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,35)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,36)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,37)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,38)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,39)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,40)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,41)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,42)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,43)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,44)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,45)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,46)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,47)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,58)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,59)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,60)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,61)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,62)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,63)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,64)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,91)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,92)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,93)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,94)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,95)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,96)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,123)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,124)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,125)) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i2);
	}
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 126);
	MR_proceed();
MR_def_label(term_io__is_mercury_punctuation_char_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_char_list_2_1);
MR_decl_entry(char__is_alnum_1_0);

MR_BEGIN_MODULE(term_io_module31)
	MR_init_entry1(term_io__string_is_escaped_char_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__string_is_escaped_char_2_0);
	MR_init_label10(term_io__string_is_escaped_char_2_0,4,5,6,7,8,3,11,2,18,22)
	MR_init_label10(term_io__string_is_escaped_char_2_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label10(term_io__string_is_escaped_char_2_0,33,34,35,36,37,38,39,40,41,42)
	MR_init_label10(term_io__string_is_escaped_char_2_0,43,44,45,46,47,48,49,50,51,52)
	MR_init_label4(term_io__string_is_escaped_char_2_0,53,20,15,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_is_escaped_char'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__string_is_escaped_char_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,8)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 98;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i3);
MR_def_label(term_io__string_is_escaped_char_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,9)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 116;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i3);
MR_def_label(term_io__string_is_escaped_char_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 110;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i3);
MR_def_label(term_io__string_is_escaped_char_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,34)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 34;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i3);
MR_def_label(term_io__string_is_escaped_char_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,39)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 39;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i3);
MR_def_label(term_io__string_is_escaped_char_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 92;
MR_def_label(term_io__string_is_escaped_char_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_char_list_2_1,
		term_io__string_is_escaped_char_2_0_i11);
MR_def_label(term_io__string_is_escaped_char_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_3_2);
	}
MR_def_label(term_io__string_is_escaped_char_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__is_alnum_1_0,
		term_io__string_is_escaped_char_2_0_i18);
MR_def_label(term_io__string_is_escaped_char_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
	}
	MR_r1 = MR_sv(1);
	if (MR_INT_NE(MR_r1,32)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i22);
	}
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,33)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i23);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,34)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i25);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,36)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i26);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,37)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i27);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,38)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i28);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,39)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i29);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,40)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i30);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,41)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i31);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i32);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,43)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i33);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,44)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i34);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,45)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i35);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i36);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i37);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,58)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i38);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,59)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i39);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,60)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i40);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,61)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i41);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,62)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i42);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,63)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i43);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,64)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i44);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,91)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i45);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i46);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,93)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i47);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,94)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i48);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,95)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i49);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,96)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i50);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,123)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i51);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,124)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i52);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,125)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i53);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,126)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i20);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i15);
MR_def_label(term_io__string_is_escaped_char_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__term_io__string_is_escaped_char_2_0
	Character = MR_r1;
{
#line 62 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 4445 "term_io.c"
	MR_r2 = Int;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LT(MR_r2,128)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_0_i14);
	}
	MR_sv(1) = MR_r1;
MR_def_label(term_io__string_is_escaped_char_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__to_char_list_2_1);
MR_def_label(term_io__string_is_escaped_char_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__term_io__mercury_escape_char_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_char_list_2_0);
MR_decl_entry(string__from_char_list_2_0);
MR_decl_entry(string__base_string_to_int_3_0);

MR_BEGIN_MODULE(term_io_module32)
	MR_init_entry1(term_io__string_is_escaped_char_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__string_is_escaped_char_2_1);
	MR_init_label10(term_io__string_is_escaped_char_2_1,2,12,10,5,60,61,62,63,64,58)
	MR_init_label4(term_io__string_is_escaped_char_2_1,68,69,127,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_is_escaped_char'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__string_is_escaped_char_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		term_io__string_is_escaped_char_2_1_i2);
MR_def_label(term_io__string_is_escaped_char_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i5);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_alnum_1_0,
		term_io__string_is_escaped_char_2_1_i12);
MR_def_label(term_io__string_is_escaped_char_2_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i10);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_io__string_is_escaped_char_2_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	if (MR_INT_EQ(MR_r2,32)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,33)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,34)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,35)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,36)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,37)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,38)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,39)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,40)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,41)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,42)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,43)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,44)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,45)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,46)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,47)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,58)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,59)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,60)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,61)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,62)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,63)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,64)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,91)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,92)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,93)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,94)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,95)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,96)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,123)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,124)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,125)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,126)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__term_io__string_is_escaped_char_2_1
	Character = MR_r2;
{
#line 62 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 4633 "term_io.c"
	MR_tempr1 = Int;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_tempr1,128)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,8)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,9)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,10)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,34)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_EQ(MR_r2,39)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i127);
	}
	if (MR_INT_NE(MR_r2,92)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i1);
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(term_io__string_is_escaped_char_2_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r3,92)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i1);
	}
	MR_r3 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i58);
	}
	MR_r3 = MR_tfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_r3,34)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i60);
	}
	MR_r2 = (MR_Integer) 34;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_io__string_is_escaped_char_2_1,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,39)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i61);
	}
	MR_r2 = (MR_Integer) 39;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_io__string_is_escaped_char_2_1,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,92)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i62);
	}
	MR_r2 = (MR_Integer) 92;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_io__string_is_escaped_char_2_1,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,98)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i63);
	}
	MR_r2 = (MR_Integer) 8;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_io__string_is_escaped_char_2_1,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,110)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i64);
	}
	MR_r2 = (MR_Integer) 10;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_io__string_is_escaped_char_2_1,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,116)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i1);
	}
	MR_r2 = (MR_Integer) 9;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_io__string_is_escaped_char_2_1,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i1);
	}
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(string__from_char_list_2_0,
		term_io__string_is_escaped_char_2_1_i68);
MR_def_label(term_io__string_is_escaped_char_2_1,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 8;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		term_io__string_is_escaped_char_2_1_i69);
MR_def_label(term_io__string_is_escaped_char_2_1,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i1);
	}
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__term_io__string_is_escaped_char_2_1
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r2;
{
#line 55 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 4777 "term_io.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(term_io__string_is_escaped_char_2_1_i1);
	MR_r2 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(term_io__string_is_escaped_char_2_1,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_io__string_is_escaped_char_2_1,1)
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


MR_BEGIN_MODULE(term_io_module33)
	MR_init_entry1(fn__term_io__escaped_char_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term_io__escaped_char_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'escaped_char'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term_io__escaped_char_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(term_io__string_is_escaped_char_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module34)
	MR_init_entry1(fn__term_io__quoted_char_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term_io__quoted_char_1_0);
	MR_init_label2(fn__term_io__quoted_char_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'quoted_char'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term_io__quoted_char_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(term_io__string_is_escaped_char_2_0,
		fn__term_io__quoted_char_1_0_i2);
MR_def_label(fn__term_io__quoted_char_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(string__append_3_2,
		fn__term_io__quoted_char_1_0_i3);
MR_def_label(fn__term_io__quoted_char_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\'", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__append_3_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module35)
	MR_init_entry1(term_io__quote_char_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__quote_char_3_0);
	MR_init_label3(term_io__quote_char_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'quote_char'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__quote_char_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(term_io__string_is_escaped_char_2_0,
		term_io__quote_char_3_0_i2);
MR_def_label(term_io__quote_char_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(string__append_3_2,
		term_io__quote_char_3_0_i3);
MR_def_label(term_io__quote_char_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\'", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		term_io__quote_char_3_0_i4);
MR_def_label(term_io__quote_char_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__quote_char_3_0
	Message = (MR_String) MR_r1;
	MR_save_registers();
{
#line 520 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);
    MR_update_io(IO0, IO);
;}
#line 4913 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module36)
	MR_init_entry1(term_io__quote_char_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__quote_char_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'quote_char'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__quote_char_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module37)
	MR_init_entry1(term_io__write_escaped_char_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__write_escaped_char_4_0);
	MR_init_label10(term_io__write_escaped_char_4_0,4,5,6,7,8,3,10,2,17,15)
	MR_init_label10(term_io__write_escaped_char_4_0,21,22,23,24,25,26,27,28,29,30)
	MR_init_label10(term_io__write_escaped_char_4_0,31,32,33,34,35,36,37,38,39,40)
	MR_init_label10(term_io__write_escaped_char_4_0,41,42,43,44,45,46,47,48,49,50)
	MR_init_label6(term_io__write_escaped_char_4_0,51,52,19,14,13,55)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_escaped_char'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__write_escaped_char_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r4,8)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i4);
	}
	MR_sv(2) = MR_r4;
	MR_r6 = MR_r2;
	MR_r2 = (MR_Integer) 98;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r6;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i3);
MR_def_label(term_io__write_escaped_char_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,9)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i5);
	}
	MR_sv(2) = MR_r4;
	MR_r6 = MR_r2;
	MR_r2 = (MR_Integer) 116;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r6;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i3);
MR_def_label(term_io__write_escaped_char_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,10)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i6);
	}
	MR_sv(2) = MR_r4;
	MR_r6 = MR_r2;
	MR_r2 = (MR_Integer) 110;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r6;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i3);
MR_def_label(term_io__write_escaped_char_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,34)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i7);
	}
	MR_sv(2) = MR_r4;
	MR_r6 = MR_r2;
	MR_r2 = (MR_Integer) 34;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r6;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i3);
MR_def_label(term_io__write_escaped_char_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,39)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i8);
	}
	MR_sv(2) = MR_r4;
	MR_r6 = MR_r2;
	MR_r2 = (MR_Integer) 39;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r6;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i3);
MR_def_label(term_io__write_escaped_char_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,92)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i2);
	}
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 92;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(term_io__write_escaped_char_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r4 = (MR_Integer) 92;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__write_escaped_char_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_io__write_escaped_char_4_0_i10);
MR_def_label(term_io__write_escaped_char_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__write_escaped_char_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
	}
MR_def_label(term_io__write_escaped_char_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_alnum_1_0,
		term_io__write_escaped_char_4_0_i17);
MR_def_label(term_io__write_escaped_char_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i15);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	if (MR_INT_NE(MR_r4,32)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i21);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,33)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i22);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,34)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i23);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,35)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i24);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,36)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i25);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,37)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i26);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,38)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i27);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,39)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i28);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,40)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i29);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,41)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i30);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,42)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i31);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,43)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i32);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,44)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i33);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,45)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i34);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,46)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i35);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,47)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i36);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,58)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i37);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,59)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i38);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,60)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i39);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,61)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i40);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,62)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i41);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,63)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i42);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,64)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i43);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,91)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i44);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,92)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i45);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,93)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i46);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,94)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i47);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,95)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i48);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,96)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i49);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,123)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i50);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,124)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i51);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,125)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i52);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,126)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i19);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i14);
MR_def_label(term_io__write_escaped_char_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__term_io__write_escaped_char_4_0
	Character = MR_r4;
{
#line 62 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 5368 "term_io.c"
	MR_tempr1 = Int;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LT(MR_tempr1,128)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i13);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	}
MR_def_label(term_io__write_escaped_char_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__write_escaped_char_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
MR_def_label(term_io__write_escaped_char_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(fn__term_io__mercury_escape_char_1_0,
		term_io__write_escaped_char_4_0_i55);
MR_def_label(term_io__write_escaped_char_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__write_escaped_char_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module38)
	MR_init_entry1(term_io__write_escaped_char_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__write_escaped_char_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_escaped_char'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__write_escaped_char_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_escaped_char_3_0
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1364 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 5442 "term_io.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module39)
	MR_init_entry1(term_io__write_escaped_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__write_escaped_string_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_escaped_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__write_escaped_string_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_escaped_string_3_0
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1364 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 5488 "term_io.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module40)
	MR_init_entry1(term_io__encode_escaped_char_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__encode_escaped_char_2_0);
	MR_init_label10(term_io__encode_escaped_char_2_0,4,5,6,7,8,3,2,16,20,21)
	MR_init_label10(term_io__encode_escaped_char_2_0,22,23,24,25,26,27,28,29,30,31)
	MR_init_label10(term_io__encode_escaped_char_2_0,32,33,34,35,36,37,38,39,40,41)
	MR_init_label10(term_io__encode_escaped_char_2_0,42,43,44,45,46,47,48,49,50,51)
	MR_init_label4(term_io__encode_escaped_char_2_0,18,13,54,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'encode_escaped_char'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__encode_escaped_char_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,8)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 98;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i3);
MR_def_label(term_io__encode_escaped_char_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,9)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 116;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i3);
MR_def_label(term_io__encode_escaped_char_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 110;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i3);
MR_def_label(term_io__encode_escaped_char_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,34)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 34;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i3);
MR_def_label(term_io__encode_escaped_char_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,39)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 39;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i3);
MR_def_label(term_io__encode_escaped_char_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 92;
MR_def_label(term_io__encode_escaped_char_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Integer) 92;
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(string__from_char_list_2_0,
		term_io__encode_escaped_char_2_0_i54);
MR_def_label(term_io__encode_escaped_char_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__is_alnum_1_0,
		term_io__encode_escaped_char_2_0_i16);
MR_def_label(term_io__encode_escaped_char_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
	}
	MR_r1 = MR_sv(1);
	if (MR_INT_NE(MR_r1,32)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i20);
	}
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,33)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i21);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,34)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i22);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i23);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,36)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,37)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i25);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,38)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i26);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,39)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i27);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,40)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i28);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,41)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i29);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i30);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,43)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i31);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,44)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i32);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,45)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i33);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i34);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i35);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,58)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i36);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,59)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i37);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,60)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i38);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,61)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i39);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,62)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i40);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,63)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i41);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,64)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i42);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,91)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i43);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i44);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,93)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i45);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,94)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i46);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,95)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i47);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,96)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i48);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,123)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i49);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,124)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i50);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,125)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i51);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,126)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i13);
MR_def_label(term_io__encode_escaped_char_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__term_io__encode_escaped_char_2_0
	Character = MR_r1;
{
#line 62 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 5833 "term_io.c"
	MR_r2 = Int;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LT(MR_r2,128)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_0_i1);
	}
	MR_sv(1) = MR_r1;
MR_def_label(term_io__encode_escaped_char_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(string__from_char_list_2_0,
		term_io__encode_escaped_char_2_0_i54);
MR_def_label(term_io__encode_escaped_char_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_io__encode_escaped_char_2_0,1)
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


MR_BEGIN_MODULE(term_io_module41)
	MR_init_entry1(term_io__encode_escaped_char_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__encode_escaped_char_2_1);
	MR_init_label8(term_io__encode_escaped_char_2_1,2,5,9,10,11,12,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'encode_escaped_char'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__encode_escaped_char_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		term_io__encode_escaped_char_2_1_i2);
MR_def_label(term_io__encode_escaped_char_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_1_i1);
	}
	MR_r3 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_1_i5);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_io__encode_escaped_char_2_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r4,92)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_1_i1);
	}
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_r4,34)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_1_i9);
	}
	MR_r2 = (MR_Integer) 34;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(term_io__encode_escaped_char_2_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,39)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_1_i10);
	}
	MR_r2 = (MR_Integer) 39;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_io__encode_escaped_char_2_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,92)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_1_i11);
	}
	MR_r2 = (MR_Integer) 92;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_io__encode_escaped_char_2_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,98)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_1_i12);
	}
	MR_r2 = (MR_Integer) 8;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_io__encode_escaped_char_2_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,110)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_1_i13);
	}
	MR_r2 = (MR_Integer) 10;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_io__encode_escaped_char_2_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,116)) {
		MR_GOTO_LAB(term_io__encode_escaped_char_2_1_i1);
	}
	MR_r2 = (MR_Integer) 9;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(term_io__encode_escaped_char_2_1,1)
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


MR_BEGIN_MODULE(term_io_module42)
	MR_init_entry1(fn__term_io__add_escaped_char_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__term_io__add_escaped_char_2_0);
	MR_init_label10(fn__term_io__add_escaped_char_2_0,4,5,6,7,8,3,2,19,23,24)
	MR_init_label10(fn__term_io__add_escaped_char_2_0,25,26,27,28,29,30,31,32,33,34)
	MR_init_label10(fn__term_io__add_escaped_char_2_0,35,36,37,38,39,40,41,42,43,44)
	MR_init_label10(fn__term_io__add_escaped_char_2_0,45,46,47,48,49,50,51,52,53,54)
	MR_init_label4(fn__term_io__add_escaped_char_2_0,21,16,15,59)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_escaped_char'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term_io__add_escaped_char_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,8)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 98;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i3);
MR_def_label(fn__term_io__add_escaped_char_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,9)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 116;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i3);
MR_def_label(fn__term_io__add_escaped_char_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 110;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i3);
MR_def_label(fn__term_io__add_escaped_char_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,34)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 34;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i3);
MR_def_label(fn__term_io__add_escaped_char_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,39)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 39;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i3);
MR_def_label(fn__term_io__add_escaped_char_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 92;
MR_def_label(fn__term_io__add_escaped_char_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Integer) 92;
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(string__from_char_list_2_0,
		fn__term_io__add_escaped_char_2_0_i59);
MR_def_label(fn__term_io__add_escaped_char_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(char__is_alnum_1_0,
		fn__term_io__add_escaped_char_2_0_i19);
MR_def_label(fn__term_io__add_escaped_char_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (MR_INT_NE(MR_r1,32)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i23);
	}
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,33)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,34)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i25);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i26);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,36)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i27);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,37)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i28);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,38)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i29);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,39)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i30);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,40)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i31);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,41)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i32);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i33);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,43)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i34);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,44)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i35);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,45)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i36);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,46)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i37);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,47)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i38);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,58)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i39);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,59)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i40);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,60)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i41);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,61)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i42);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,62)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i43);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,63)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i44);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,64)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i45);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,91)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i46);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i47);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,93)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i48);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,94)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i49);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,95)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i50);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,96)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i51);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,123)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i52);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,124)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i53);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,125)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i54);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,126)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i21);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__fn__term_io__add_escaped_char_2_0
	Character = MR_r1;
{
#line 62 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 6354 "term_io.c"
	MR_tempr1 = Int;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LT(MR_tempr1,128)) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i15);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	}
MR_def_label(fn__term_io__add_escaped_char_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(string__to_char_list_2_1,
		fn__term_io__add_escaped_char_2_0_i59);
MR_def_label(fn__term_io__add_escaped_char_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__term_io__mercury_escape_char_1_0,
		fn__term_io__add_escaped_char_2_0_i59);
MR_def_label(fn__term_io__add_escaped_char_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module43)
	MR_init_entry1(__Unify___term_io__adjacent_to_graphic_token_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___term_io__adjacent_to_graphic_token_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term_io__adjacent_to_graphic_token_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module44)
	MR_init_entry1(__Compare___term_io__adjacent_to_graphic_token_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___term_io__adjacent_to_graphic_token_0_0);
	MR_init_label2(__Compare___term_io__adjacent_to_graphic_token_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term_io__adjacent_to_graphic_token_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___term_io__adjacent_to_graphic_token_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___term_io__adjacent_to_graphic_token_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___term_io__adjacent_to_graphic_token_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___term_io__adjacent_to_graphic_token_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module45)
	MR_init_entry1(__Unify___term_io__read_term_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___term_io__read_term_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term_io__read_term_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___term_io__read_term_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module46)
	MR_init_entry1(__Compare___term_io__read_term_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___term_io__read_term_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term_io__read_term_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___term_io__read_term_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___term__term_1_0);

MR_BEGIN_MODULE(term_io_module47)
	MR_init_entry1(__Unify___term_io__read_term_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___term_io__read_term_1_0);
	MR_init_label5(__Unify___term_io__read_term_1_0,5,20,6,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term_io__read_term_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___term_io__read_term_1_0_i20);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___term_io__read_term_1_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___term_io__read_term_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___term_io__read_term_1_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___term_io__read_term_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___term_io__read_term_1_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Unify___term_io__read_term_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___term_io__read_term_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___term_io__read_term_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr2, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___term_io__read_term_1_0_i9);
MR_def_label(__Unify___term_io__read_term_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___term_io__read_term_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___term__term_1_0);
MR_def_label(__Unify___term_io__read_term_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___term__term_1_0);

MR_BEGIN_MODULE(term_io_module48)
	MR_init_entry1(__Compare___term_io__read_term_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___term_io__read_term_1_0);
	MR_init_label10(__Compare___term_io__read_term_1_0,7,5,42,11,15,16,19,61,22,62)
	MR_init_label5(__Compare___term_io__read_term_1_0,9,28,29,31,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term_io__read_term_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i62);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(4);
	MR_proceed();
MR_def_label(__Compare___term_io__read_term_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i61);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___term_io__read_term_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i11);
	}
MR_def_label(__Compare___term_io__read_term_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___term_io__read_term_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i61);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(3);
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_r5 = MR_tfield(1, MR_tempr2, 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___term_io__read_term_1_0
	S1 = (MR_String) MR_r4;
	S2 = (MR_String) MR_r5;
{
#line 129 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 6686 "term_io.c"
	MR_r4 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i15);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 1;
	MR_sv(3) = MR_r2;
	MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i19);
	}
MR_def_label(__Compare___term_io__read_term_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i16);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_sv(3) = MR_r2;
	MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i19);
MR_def_label(__Compare___term_io__read_term_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 2;
	MR_sv(3) = MR_r2;
MR_def_label(__Compare___term_io__read_term_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i36);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(3);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i22);
	}
MR_def_label(__Compare___term_io__read_term_1_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___term_io__read_term_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i42);
	}
MR_def_label(__Compare___term_io__read_term_1_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___term_io__read_term_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i28);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___term_io__read_term_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i29);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___term_io__read_term_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(3);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(2, MR_tempr3, 0);
	MR_r3 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___term_io__read_term_1_0_i31);
MR_def_label(__Compare___term_io__read_term_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i36);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___term__term_1_0);
MR_def_label(__Compare___term_io__read_term_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module49)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0);
	MR_init_label10(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0,7,8,9,5,12,20,17,43,11,24)
	MR_init_label7(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0,25,4,2,29,31,33,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__quote_atom_agt__[Stream = io.output_stream, State = io.state]_0_1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i7);
	}
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i4);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const(";", 1)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i8);
	}
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i4);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i9);
	}
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i4);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("{}", 2)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i5);
	}
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i4);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(term_io__string__all_match_2__ho26_3_0,
		f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i12);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i11);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i11);
	}
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0
	Str = (MR_String) MR_sv(2);
{
#line 230 "string.opt"

    Length = strlen(Str);
;}
#line 6868 "term_io.c"
	MR_r3 = Length;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Index;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Index = (MR_Integer) 0;
	Length = MR_r3;
{
#line 992 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);
;}
#line 6893 "term_io.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i17);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i20);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 35 == (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i11);
	}
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i11);
	}
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i4);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0
	Str = (MR_String) MR_sv(2);
{
#line 230 "string.opt"

    Length = strlen(Str);
;}
#line 6933 "term_io.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Index;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Index = (MR_Integer) 0;
	Length = MR_tempr1;
{
#line 992 "string.opt"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);
;}
#line 6958 "term_io.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i24);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(char__lower_upper_2_0,
		f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i25);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i2);
	}
	{
	MR_String	S;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	S = (MR_String) MR_sv(2);
{
#line 471 "string.opt"

    const char  *p;

    SUCCESS_INDICATOR = MR_TRUE;
    for (p = S; *p != '\0'; p++) {
        switch (*p) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':

            case 'a': case 'b': case 'c': case 'd': case 'e':
            case 'f': case 'g': case 'h': case 'i': case 'j':
            case 'k': case 'l': case 'm': case 'n': case 'o':
            case 'p': case 'q': case 'r': case 's': case 't':
            case 'u': case 'v': case 'w': case 'x': case 'y':
            case 'z':

            case 'A': case 'B': case 'C': case 'D': case 'E':
            case 'F': case 'G': case 'H': case 'I': case 'J':
            case 'K': case 'L': case 'M': case 'N': case 'O':
            case 'P': case 'Q': case 'R': case 'S': case 'T':
            case 'U': case 'V': case 'W': case 'X': case 'Y':
            case 'Z':

            case '_':
                continue;

            default:
                SUCCESS_INDICATOR = MR_FALSE;
                break;
        }
    }
;}
#line 7019 "term_io.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i43);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i29);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i31);
	}
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0));
	MR_np_tailcall_ent(do_call_class_method_3);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = (MR_Integer) 39;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i33);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,
		f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0_i34);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Integer) 39;
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module50)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__quote_char__[Stream = io.output_stream, State = io.state]_0_1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module51)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0);
	MR_init_label10(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,4,5,6,7,8,3,10,2,17,15)
	MR_init_label10(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,21,22,23,24,25,26,27,28,29,30)
	MR_init_label10(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,31,32,33,34,35,36,37,38,39,40)
	MR_init_label10(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,41,42,43,44,45,46,47,48,49,50)
	MR_init_label6(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,51,52,19,14,13,55)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__write_escaped_char__[Stream = io.output_stream, State = io.state]_0_1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r4,8)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i4);
	}
	MR_sv(2) = MR_r4;
	MR_r6 = MR_r2;
	MR_r2 = (MR_Integer) 98;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r6;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i3);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,9)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i5);
	}
	MR_sv(2) = MR_r4;
	MR_r6 = MR_r2;
	MR_r2 = (MR_Integer) 116;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r6;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i3);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,10)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i6);
	}
	MR_sv(2) = MR_r4;
	MR_r6 = MR_r2;
	MR_r2 = (MR_Integer) 110;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r6;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i3);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,34)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i7);
	}
	MR_sv(2) = MR_r4;
	MR_r6 = MR_r2;
	MR_r2 = (MR_Integer) 34;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r6;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i3);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,39)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i8);
	}
	MR_sv(2) = MR_r4;
	MR_r6 = MR_r2;
	MR_r2 = (MR_Integer) 39;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r6;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i3);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,92)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i2);
	}
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 92;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r4 = (MR_Integer) 92;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i10);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_alnum_1_0,
		f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i17);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i15);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	if (MR_INT_NE(MR_r4,32)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i21);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,33)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i22);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,34)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i23);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,35)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i24);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,36)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i25);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,37)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i26);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,38)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i27);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,39)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i28);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,40)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i29);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,41)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i30);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,42)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i31);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,43)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i32);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,44)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i33);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,45)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i34);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,46)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i35);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,47)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i36);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,58)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i37);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,59)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i38);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,60)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i39);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,61)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i40);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,62)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i41);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,63)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i42);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,64)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i43);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,91)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i44);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,92)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i45);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,93)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i46);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,94)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i47);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,95)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i48);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,96)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i49);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,123)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i50);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,124)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i51);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,125)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i52);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,126)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i19);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i14);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0
	Character = MR_r4;
{
#line 62 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 7515 "term_io.c"
	MR_tempr1 = Int;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LT(MR_tempr1,128)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i13);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	}
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(fn__term_io__mercury_escape_char_1_0,
		f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i55);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module52)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0);
	MR_init_label1(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__write_escaped_string__[Stream = io.output_stream, State = io.state]_0_1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0
	Str = (MR_String) MR_r4;
{
#line 230 "string.opt"

    Length = strlen(Str);
;}
#line 7584 "term_io.c"
	MR_r6 = Length;
#undef	MR_PROC_LABEL
	}
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0
	Str = (MR_String) MR_r4;
{
#line 230 "string.opt"

    Length = strlen(Str);
;}
#line 7598 "term_io.c"
	MR_r8 = Length;
#undef	MR_PROC_LABEL
	}
	MR_r9 = (MR_Integer) 0;
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i2);
	}
	MR_r5 = MR_r9;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_0);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r9;
	MR_r6 = MR_r8;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module53)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__quote_atom__[Stream = io.output_stream, State = io.state]_0_1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = (MR_Integer) 1;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module54)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0);
	MR_init_label2(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'TypeSpecOf__pred_or_func__quote_string__[Stream = io.output_stream, State = io.state]_0_1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_r4 = (MR_Integer) 34;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i2);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,
		f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0_i3);
MR_def_label(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Integer) 34;
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(lexer__graphic_token_char_1_0);

MR_BEGIN_MODULE(term_io_module55)
	MR_init_entry1(term_io__string__all_match_2__ho26_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__string__all_match_2__ho26_3_0);
	MR_init_label4(term_io__string__all_match_2__ho26_3_0,23,5,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'all_match_2__ho26'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_io__string__all_match_2__ho26_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(term_io__string__all_match_2__ho26_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__term_io__string__all_match_2__ho26_3_0
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
#line 7733 "term_io.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(term_io__string__all_match_2__ho26_3_0_i9);
	MR_r2 = NextIndex;
	MR_tempr1 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(lexer__graphic_token_char_1_0,
		term_io__string__all_match_2__ho26_3_0_i5);
MR_def_label(term_io__string__all_match_2__ho26_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__string__all_match_2__ho26_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(term_io__string__all_match_2__ho26_3_0_i23);
MR_def_label(term_io__string__all_match_2__ho26_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(term_io__string__all_match_2__ho26_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module56)
	MR_init_entry1(term_io__string__foldl_between_2__ho34_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__term_io__string__foldl_between_2__ho34_6_0);
	MR_init_label3(term_io__string__foldl_between_2__ho34_6_0,28,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl_between_2__ho34'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_io__string__foldl_between_2__ho34_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(term_io__string__foldl_between_2__ho34_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(term_io__string__foldl_between_2__ho34_6_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__term_io__string__foldl_between_2__ho34_6_0
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
#line 7813 "term_io.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(term_io__string__foldl_between_2__ho34_6_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_tempr1 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(term_io__string__foldl_between_2__ho34_6_0_i3);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(fn__term_io__add_escaped_char_2_0,
		term_io__string__foldl_between_2__ho34_6_0_i6);
MR_def_label(term_io__string__foldl_between_2__ho34_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(term_io__string__foldl_between_2__ho34_6_0_i28);
	}
MR_def_label(term_io__string__foldl_between_2__ho34_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module57)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_0);
	MR_init_label3(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__quote_char__[2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(term_io__string_is_escaped_char_2_0,
		f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_0_i2);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(string__append_3_2,
		f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_0_i3);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\'", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_0_i4);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_2);

MR_BEGIN_MODULE(term_io_module58)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0);
	MR_init_label7(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0,69,9,7,13,26,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__starts_with_digit__[1]_0'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i4);
	}
	MR_tempr2 = MR_tfield(0, MR_r1, 1);
	MR_r6 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i1);
	}
	MR_r7 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i7);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i9);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i69);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r7, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r6, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_tfield(0, MR_r5, 0);
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i13);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i69);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r5,1)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i26);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r1 = ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 0));
	MR_decr_sp_and_return(2);
	}
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module59)
	MR_init_entry1(fn__f_116_101_114_109_95_105_111_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_116_101_114_109_95_105_111_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_116_101_114_109_95_105_111_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module60)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_0);
	MR_init_label3(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__TypeSpecOf__pred_or_func__quote_char__[Stream = io.output_stream, State = io.state]_0_1__[2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(term_io__string_is_escaped_char_2_0,
		f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_0_i2);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(string__append_3_2,
		f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_0_i3);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\'", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_0_i4);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_95_95_91_50_93_95_48_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module61)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_0);
	MR_init_label3(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_0,28,6,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl_between_2__ho30__[4, 5]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_0_i30);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r4;
	Index = MR_r5;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 8139 "term_io.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_0_i30);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_tempr1 > (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_0_i30);
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_48_95_49_4_0,
		f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_0_i6);
MR_def_label(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_0_i28);
MR_def_label(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_48_95_95_91_52_44_32_53_93_95_48_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module62)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_51_95_95_91_52_44_32_53_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_51_95_95_91_52_44_32_53_93_95_48_6_0);
	MR_init_label3(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_51_95_95_91_52_44_32_53_93_95_48_6_0,28,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__foldl_between_2__ho33__[4, 5]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_51_95_95_91_52_44_32_53_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_51_95_95_91_52_44_32_53_93_95_48_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_51_95_95_91_52_44_32_53_93_95_48_6_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_51_95_95_91_52_44_32_53_93_95_48_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r4;
	Index = MR_r5;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 8222 "term_io.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_51_95_95_91_52_44_32_53_93_95_48_6_0_i3);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_tempr1 > (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_51_95_95_91_52_44_32_53_93_95_48_6_0_i3);
	}
	MR_sv(2) = MR_r4;
	MR_sv(1) = MR_r6;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(term_io__write_escaped_char_4_0,
		f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_51_95_95_91_52_44_32_53_93_95_48_6_0_i6);
MR_def_label(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_51_95_95_91_52_44_32_53_93_95_48_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_51_95_95_91_52_44_32_53_93_95_48_6_0_i28);
	}
MR_def_label(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_51_95_95_91_52_44_32_53_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__term_io_maybe_bunch_0(void)
{
	term_io_module0();
	term_io_module1();
	term_io_module2();
	term_io_module3();
	term_io_module4();
	term_io_module5();
	term_io_module6();
	term_io_module7();
	term_io_module8();
	term_io_module9();
	term_io_module10();
	term_io_module11();
	term_io_module12();
	term_io_module13();
	term_io_module14();
	term_io_module15();
	term_io_module16();
	term_io_module17();
	term_io_module18();
	term_io_module19();
	term_io_module20();
	term_io_module21();
	term_io_module22();
	term_io_module23();
	term_io_module24();
	term_io_module25();
	term_io_module26();
	term_io_module27();
	term_io_module28();
	term_io_module29();
	term_io_module30();
	term_io_module31();
	term_io_module32();
	term_io_module33();
	term_io_module34();
	term_io_module35();
	term_io_module36();
	term_io_module37();
	term_io_module38();
	term_io_module39();
}

static void mercury__term_io_maybe_bunch_1(void)
{
	term_io_module40();
	term_io_module41();
	term_io_module42();
	term_io_module43();
	term_io_module44();
	term_io_module45();
	term_io_module46();
	term_io_module47();
	term_io_module48();
	term_io_module49();
	term_io_module50();
	term_io_module51();
	term_io_module52();
	term_io_module53();
	term_io_module54();
	term_io_module55();
	term_io_module56();
	term_io_module57();
	term_io_module58();
	term_io_module59();
	term_io_module60();
	term_io_module61();
	term_io_module62();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__term_io__init(void);
void mercury__term_io__init_type_tables(void);
void mercury__term_io__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__term_io__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__term_io__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__term_io__init_threadscope_string_table(void);
#endif

void mercury__term_io__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__term_io_maybe_bunch_0();
	mercury__term_io_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term_io__type_ctor_info_adjacent_to_graphic_token_0,
		term_io__adjacent_to_graphic_token_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term_io__type_ctor_info_read_term_1,
		term_io__read_term_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term_io__type_ctor_info_read_term_0,
		term_io__read_term_0_0);
	mercury__term_io__init_debugger();
}

void mercury__term_io__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_term_io__type_ctor_info_adjacent_to_graphic_token_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term_io__type_ctor_info_read_term_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term_io__type_ctor_info_read_term_0);
	}
}


void mercury__term_io__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__term_io__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__term_io);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__term_io__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__term_io__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
