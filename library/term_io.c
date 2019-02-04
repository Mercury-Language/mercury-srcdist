/*
** Automatically generated from `term_io.m'
** by the Mercury compiler,
** version rotd-2007-06-30, configured for i686-pc-linux-gnu.
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
INIT mercury__term_io__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "io.int"
#include "io.mh"

#line 27 "term_io.c"
#line 538 "io.int"
#include "string.mh"

#line 31 "term_io.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 35 "term_io.c"
#line 28 "time.int2"
#include "time.mh"

#line 39 "term_io.c"
#line 30 "array.int2"
#include "array.mh"

#line 43 "term_io.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 47 "term_io.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 51 "term_io.c"
#line 23 "store.opt"
#include "store.mh"

#line 55 "term_io.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 59 "term_io.c"
#line 103 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 63 "term_io.c"
#line 4 "char.opt"
#include "char.mh"

#line 67 "term_io.c"
#line 4 "int.opt"
#include "int.mh"

#line 71 "term_io.c"
#line 3 "math.opt"
#include "math.mh"

#line 75 "term_io.c"
#line 3 "float.opt"
#include "float.mh"

#line 79 "term_io.c"
#line 148 "io.opt"
#include "dir.mh"

#line 83 "term_io.c"
#line 156 "io.opt"
#include "table_builtin.mh"

#line 87 "term_io.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 91 "term_io.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 95 "term_io.c"
#line 96 "term_io.c"
#include "term_io.mh"

#line 99 "term_io.c"
#line 100 "term_io.c"
#ifndef TERM_IO_DECL_GUARD
#define TERM_IO_DECL_GUARD

#line 104 "term_io.c"
#line 105 "term_io.c"

#endif
#line 108 "term_io.c"

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

struct mercury_type_5 {
	MR_Integer f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_term_io__type_ctor_info_read_term_1,
	mercury_data_term_io__type_ctor_info_read_term_0,
	mercury_data_term_io__type_ctor_info_adjacent_to_graphic_token_0;
MR_decl_label3(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_6_0, 11,3,13)
MR_decl_label3(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_50_48_95_95_91_52_44_32_53_93_95_48_6_0, 11,3,2)
MR_decl_label4(term_io__string__all_match_2__ho15_3_0, 17,3,7,1)
MR_decl_label3(term_io__string__foldl_substring_2__ho21_6_0, 11,3,2)
MR_decl_label8(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0, 7,8,9,5,12,17,20,15)
MR_decl_label8(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0, 11,29,31,4,2,33,35,36)
MR_decl_label2(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0, 2,3)
MR_decl_label1(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0, 2)
MR_decl_label8(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0, 4,5,6,7,8,3,2,15)
MR_decl_label3(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0, 12,11,18)
MR_decl_label1(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0, 2)
MR_decl_label2(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_0, 2,3)
MR_decl_label7(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0, 53,5,9,8,12,27,1)
MR_decl_label1(term_io__is_mercury_punctuation_char_1_0, 1)
MR_decl_label8(term_io__quote_atom_agt_5_0, 7,8,9,5,12,17,20,15)
MR_decl_label8(term_io__quote_atom_agt_5_0, 11,29,31,4,2,33,35,37)
MR_decl_label1(term_io__quote_atom_agt_5_0, 38)
MR_decl_label2(term_io__quote_char_3_0, 2,3)
MR_decl_label1(term_io__quote_string_3_0, 2)
MR_decl_label2(term_io__quote_string_4_0, 2,3)
MR_decl_label3(term_io__read_term_3_0, 2,3,4)
MR_decl_label3(term_io__read_term_with_op_table_4_0, 2,3,4)
MR_decl_label1(term_io__write_arg_term_8_0, 2)
MR_decl_label4(term_io__write_constant_4_0, 4,16,7,17)
MR_decl_label8(term_io__write_escaped_char_4_0, 4,5,6,7,8,3,10,2)
MR_decl_label5(term_io__write_escaped_char_4_0, 17,15,14,13,21)
MR_decl_label1(term_io__write_escaped_string_4_0, 2)
MR_decl_label7(term_io__write_list_tail_8_0, 75,5,2,3,15,8,17)
MR_decl_label1(term_io__write_term_4_0, 2)
MR_decl_label1(term_io__write_term_2_8_0, 2)
MR_decl_label8(term_io__write_term_3_9_0, 10,11,12,4,18,14,24,25)
MR_decl_label8(term_io__write_term_3_9_0, 19,31,32,33,27,41,42,43)
MR_decl_label8(term_io__write_term_3_9_0, 44,35,51,53,54,56,57,59)
MR_decl_label8(term_io__write_term_3_9_0, 60,46,47,68,70,71,72,74)
MR_decl_label8(term_io__write_term_3_9_0, 75,76,77,63,64,86,88,89)
MR_decl_label8(term_io__write_term_3_9_0, 90,92,91,93,94,101,99,97)
MR_decl_label8(term_io__write_term_3_9_0, 105,106,107,111,112,80,81,121)
MR_decl_label8(term_io__write_term_3_9_0, 123,124,126,127,129,128,130,131)
MR_decl_label8(term_io__write_term_3_9_0, 133,134,115,116,141,143,144,145)
MR_decl_label8(term_io__write_term_3_9_0, 137,138,147,151,152,153,154,3)
MR_decl_label1(term_io__write_term_3_9_0, 2)
MR_decl_label4(term_io__write_term_args_8_0, 12,4,5,3)
MR_decl_label2(term_io__write_term_nl_4_0, 2,3)
MR_decl_label2(term_io__write_term_nl_with_op_table_5_0, 2,3)
MR_decl_label1(term_io__write_term_with_op_table_5_0, 2)
MR_decl_label7(term_io__write_variable_2_8_0, 3,2,7,6,9,10,11)
MR_decl_label8(fn__term_io__add_escaped_char_2_0, 4,5,6,7,8,3,2,16)
MR_decl_label3(fn__term_io__add_escaped_char_2_0, 13,12,20)
MR_decl_label8(fn__term_io__escaped_char_1_0, 4,5,6,7,8,3,10,2)
MR_decl_label3(fn__term_io__escaped_char_1_0, 17,14,13)
MR_decl_label3(fn__term_io__escaped_string_1_0, 2,4,5)
MR_decl_label4(fn__term_io__format_constant_agt_2_0, 4,6,8,10)
MR_decl_label3(fn__term_io__mercury_escape_char_1_0, 2,3,4)
MR_decl_label8(fn__term_io__quoted_atom_agt_2_0, 7,8,9,5,12,17,20,15)
MR_decl_label8(fn__term_io__quoted_atom_agt_2_0, 11,29,31,4,2,33,36,34)
MR_decl_label1(fn__term_io__quoted_char_1_0, 2)
MR_decl_label1(fn__term_io__quoted_string_1_0, 2)
MR_decl_label5(__Unify___term_io__read_term_1_0, 8,10,6,24,1)
MR_decl_label2(__Compare___term_io__adjacent_to_graphic_token_0_0, 2,3)
MR_decl_label8(__Compare___term_io__read_term_1_0, 60,25,29,31,6,50,9,12)
MR_decl_label5(__Compare___term_io__read_term_1_0, 13,16,54,19,40)
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
MR_def_extern_entry(fn__term_io__escaped_char_1_0)
MR_def_extern_entry(fn__term_io__quoted_char_1_0)
MR_def_extern_entry(term_io__quote_char_3_0)
MR_def_extern_entry(term_io__quote_char_4_0)
MR_def_extern_entry(term_io__write_escaped_char_4_0)
MR_def_extern_entry(term_io__write_escaped_char_3_0)
MR_def_extern_entry(term_io__write_escaped_string_3_0)
MR_def_extern_entry(fn__term_io__add_escaped_char_2_0)
MR_def_extern_entry(__Unify___term_io__adjacent_to_graphic_token_0_0)
MR_def_extern_entry(__Compare___term_io__adjacent_to_graphic_token_0_0)
MR_def_extern_entry(__Unify___term_io__read_term_0_0)
MR_def_extern_entry(__Compare___term_io__read_term_0_0)
MR_def_extern_entry(__Unify___term_io__read_term_1_0)
MR_def_extern_entry(__Compare___term_io__read_term_1_0)
MR_def_extern_entry(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_5_0)
MR_def_extern_entry(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_4_0)
MR_def_extern_entry(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_4_0)
MR_def_extern_entry(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_4_0)
MR_def_extern_entry(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_4_0)
MR_def_extern_entry(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_4_0)
MR_decl_static(term_io__string__all_match_2__ho15_3_0)
MR_decl_static(term_io__string__foldl_substring_2__ho21_6_0)
MR_def_extern_entry(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0)
MR_decl_static(fn__f_116_101_114_109_95_105_111_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_def_extern_entry(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0)
MR_def_extern_entry(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0)
MR_def_extern_entry(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0)
MR_def_extern_entry(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0)
MR_def_extern_entry(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0)
MR_def_extern_entry(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_6_0)
MR_decl_static(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_50_48_95_95_91_52_44_32_53_93_95_48_6_0)

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
static const struct mercury_type_3 mercury_common_3[1] =
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

static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
-67043329,
-134217727,
2013265921
}
},
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
	13,
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
	13,
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
	13,
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

MR_decl_entry(io__stream_name_4_0);
MR_decl_entry(lexer__get_token_4_0);
MR_decl_entry(lexer__get_token_list_2_5_0);
MR_decl_entry(parser__parse_tokens_with_op_table_4_0);

MR_BEGIN_MODULE(term_io_module0)
	MR_init_entry1(term_io__read_term_with_op_table_4_0);
	MR_init_label3(term_io__read_term_with_op_table_4_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__read_term_with_op_table_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__read_term_with_op_table_4_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 566 "term_io.c"
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
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(lexer__get_token_4_0,
		term_io__read_term_with_op_table_4_0_i3);
MR_def_label(term_io__read_term_with_op_table_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(lexer__get_token_list_2_5_0,
		term_io__read_term_with_op_table_4_0_i4);
MR_def_label(term_io__read_term_with_op_table_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parser__parse_tokens_with_op_table_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module1)
	MR_init_entry1(term_io__read_term_3_0);
	MR_init_label3(term_io__read_term_3_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__read_term_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__read_term_3_0
	MR_OBTAIN_GLOBAL_LOCK("input_stream_2");
{
#line 1396 "io.opt"

    Stream = mercury_current_text_input();
    MR_update_io(IO0, IO);
;}
#line 631 "term_io.c"
	MR_RELEASE_GLOBAL_LOCK("input_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__stream_name_4_0,
		term_io__read_term_3_0_i2);
MR_def_label(term_io__read_term_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(lexer__get_token_4_0,
		term_io__read_term_3_0_i3);
MR_def_label(term_io__read_term_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(lexer__get_token_list_2_5_0,
		term_io__read_term_3_0_i4);
MR_def_label(term_io__read_term_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parser__parse_tokens_with_op_table_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module2)
	MR_init_entry1(term_io__write_escaped_string_4_0);
	MR_init_label1(term_io__write_escaped_string_4_0,2)
MR_BEGIN_CODE

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
#line 218 "string.opt"

    Length = strlen(Str);
;}
#line 688 "term_io.c"
	MR_r6 = Length;
#undef	MR_PROC_LABEL
	}
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__term_io__write_escaped_string_4_0
	Str = (MR_String) MR_r4;
{
#line 218 "string.opt"

    Length = strlen(Str);
;}
#line 702 "term_io.c"
	MR_r8 = Length;
#undef	MR_PROC_LABEL
	}
	MR_r9 = ((MR_Integer) MR_r8 - (MR_Integer) 0);
	MR_r8 = (MR_Integer) 0;
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r9)) {
		MR_GOTO_LAB(term_io__write_escaped_string_4_0_i2);
	}
	MR_r7 = MR_r5;
	MR_r5 = MR_r8;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_50_48_95_95_91_52_44_32_53_93_95_48_6_0);
MR_def_label(term_io__write_escaped_string_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r5;
	MR_r5 = MR_r8;
	MR_r6 = MR_r9;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_50_48_95_95_91_52_44_32_53_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_3);

MR_BEGIN_MODULE(term_io_module3)
	MR_init_entry1(term_io__quote_string_4_0);
	MR_init_label2(term_io__quote_string_4_0,2,3)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r4 = (MR_Integer) 34;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__quote_string_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_io__quote_string_4_0_i2);
MR_def_label(term_io__quote_string_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(term_io__write_escaped_string_4_0,
		term_io__quote_string_4_0_i3);
MR_def_label(term_io__quote_string_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Integer) 34;
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__quote_string_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module4)
	MR_init_entry1(term_io__quote_string_3_0);
	MR_init_label1(term_io__quote_string_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__quote_string_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__quote_string_3_0
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1400 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 809 "term_io.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,0);
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__quote_string_3_0
	Stream = (MercuryFilePtr) MR_tempr1;
	Character = (MR_Integer) 34;
	MR_save_registers();
{
#line 1321 "io.opt"

    if (MR_PUTCH(*Stream, Character) < 0) {
        mercury_output_error(Stream);
    }
    if (Character == '\n') {
        MR_line_number(*Stream)++;
    }
    MR_update_io(IO0, IO);
;}
#line 837 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0,
		term_io__quote_string_3_0_i2);
MR_def_label(term_io__quote_string_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__quote_string_3_0
	Stream = (MercuryFilePtr) MR_sv(2);
	Character = (MR_Integer) 34;
	MR_save_registers();
{
#line 1321 "io.opt"

    if (MR_PUTCH(*Stream, Character) < 0) {
        mercury_output_error(Stream);
    }
    if (Character == '\n') {
        MR_line_number(*Stream)++;
    }
    MR_update_io(IO0, IO);
;}
#line 871 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_char_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
MR_decl_entry(list__member_2_1);
MR_decl_entry(lexer__graphic_token_char_1_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(char__lower_upper_2_0);

MR_BEGIN_MODULE(term_io_module5)
	MR_init_entry1(term_io__quote_atom_agt_5_0);
	MR_init_label8(term_io__quote_atom_agt_5_0,7,8,9,5,12,17,20,15)
	MR_init_label8(term_io__quote_atom_agt_5_0,11,29,31,4,2,33,35,37)
	MR_init_label1(term_io__quote_atom_agt_5_0,38)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__quote_atom_agt_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i7);
	}
	MR_sv(3) = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(6) = MR_r2;
	MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i4);
MR_def_label(term_io__quote_atom_agt_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const(";", 1)) != 0)) {
		MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i8);
	}
	MR_sv(3) = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(6) = MR_r2;
	MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i4);
MR_def_label(term_io__quote_atom_agt_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i9);
	}
	MR_sv(3) = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(6) = MR_r2;
	MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i4);
MR_def_label(term_io__quote_atom_agt_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("{}", 2)) != 0)) {
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
	}
	MR_np_call_localret_ent(string__to_char_list_2_0,
		term_io__quote_atom_agt_5_0_i12);
MR_def_label(term_io__quote_atom_agt_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(9) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(10));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(term_io__quote_atom_agt_5_0_i15);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(list__member_2_1,
		term_io__quote_atom_agt_5_0_i17);
MR_def_label(term_io__quote_atom_agt_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(lexer__graphic_token_char_1_0,
		term_io__quote_atom_agt_5_0_i20);
MR_def_label(term_io__quote_atom_agt_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(10));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i11);
MR_def_label(term_io__quote_atom_agt_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i11);
	}
	MR_r6 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_EQ(MR_r6,35)) {
		MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i11);
	}
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i11);
	}
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
	MR_Char	First;
	MR_String	Rest;
#define	MR_PROC_LABEL	mercury__term_io__quote_atom_agt_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_sv(2);
{
#line 285 "string.opt"
{
    First = Str[0];
    if (First == '\0') {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        Str++;
        /*
        ** We need to make a copy to ensure that the pointer is word-aligned.
        */
        MR_allocate_aligned_string_msg(Rest, strlen(Str), MR_PROC_LABEL);
        strcpy(Rest, Str);
        SUCCESS_INDICATOR = MR_TRUE;
    }
};}
#line 1029 "term_io.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i2);
	MR_r1 = First;
	MR_tempr1 = (MR_Word) Rest;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(char__lower_upper_2_0,
		term_io__quote_atom_agt_5_0_i29);
MR_def_label(term_io__quote_atom_agt_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i2);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__term_io__quote_atom_agt_5_0
	Str = (MR_String) MR_sv(3);
{
#line 218 "string.opt"

    Length = strlen(Str);
;}
#line 1058 "term_io.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(term_io__string__all_match_2__ho15_3_0,
		term_io__quote_atom_agt_5_0_i31);
MR_def_label(term_io__quote_atom_agt_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i2);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(5);
MR_def_label(term_io__quote_atom_agt_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i33);
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
MR_def_label(term_io__quote_atom_agt_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(term_io__quote_atom_agt_5_0_i35);
	}
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__quote_atom_agt_5_0));
	MR_np_tailcall_ent(do_call_class_method_3);
MR_def_label(term_io__quote_atom_agt_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r4 = (MR_Integer) 39;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__quote_atom_agt_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__term_io__quote_atom_agt_5_0_i37);
MR_def_label(term_io__quote_atom_agt_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(term_io__write_escaped_string_4_0,
		term_io__quote_atom_agt_5_0_i38);
MR_def_label(term_io__quote_atom_agt_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Integer) 39;
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__quote_atom_agt_5_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module6)
	MR_init_entry1(term_io__quote_atom_agt_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__quote_atom_agt_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__quote_atom_agt_4_0
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1400 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 1164 "term_io.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module7)
	MR_init_entry1(term_io__write_constant_4_0);
	MR_init_label4(term_io__write_constant_4_0,4,16,7,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__write_constant_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(term_io__write_constant_4_0_i4) MR_AND
		MR_LABEL_AP(term_io__write_constant_4_0_i16) MR_AND
		MR_LABEL_AP(term_io__write_constant_4_0_i7) MR_AND
		MR_LABEL_AP(term_io__write_constant_4_0_i17));
MR_def_label(term_io__write_constant_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(term_io__quote_atom_agt_4_0);
MR_def_label(term_io__write_constant_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	{
	MR_Integer	Val;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_constant_4_0
	Val = MR_tempr1;
	MR_save_registers();
{
#line 526 "io.opt"

    MercuryFilePtr out = mercury_current_text_output();
    if (ML_fprintf(out, "%ld", (long) Val) < 0) {
        mercury_output_error(out);
    }
    MR_update_io(IO0, IO);
;}
#line 1225 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
	}
MR_def_label(term_io__write_constant_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_tailcall_ent(term_io__quote_string_3_0);
MR_def_label(term_io__write_constant_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	{
	MR_Float	Val;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_constant_4_0
	Val = MR_word_to_float(MR_tempr1);
	MR_save_registers();
{
#line 536 "io.opt"

    char buf[MR_SPRINTF_FLOAT_BUF_SIZE];
    MercuryFilePtr out;

    MR_sprintf_float(buf, Val);
    out = mercury_current_text_output();
    if (ML_fprintf(out, "%s", buf) < 0) {
        mercury_output_error(out);
    }
    MR_update_io(IO0, IO);
;}
#line 1264 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module8)
	MR_init_entry1(term_io__write_constant_3_0);
MR_BEGIN_CODE

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
	MR_init_label7(term_io__write_variable_2_8_0,3,2,7,6,9,10,11)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_tempr3 = MR_r5;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_ctfield(0, MR_tempr3, 2);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term_io__write_variable_2_8_0_i3);
MR_def_label(term_io__write_variable_2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__write_variable_2_8_0_i2);
	}
	MR_r1 = MR_sv(6);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(term_io__write_term_2_8_0);
MR_def_label(term_io__write_variable_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_ctfield(0, MR_sv(3), 1);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term_io__write_variable_2_8_0_i7);
MR_def_label(term_io__write_variable_2_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__write_variable_2_8_0_i6);
	}
	{
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_variable_2_8_0
	Message = (MR_String) MR_r2;
	MR_save_registers();
{
#line 502 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);
    MR_update_io(IO0, IO);
;}
#line 1386 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(7);
MR_def_label(term_io__write_variable_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		term_io__write_variable_2_8_0_i9);
MR_def_label(term_io__write_variable_2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(string__append_3_2,
		term_io__write_variable_2_8_0_i10);
MR_def_label(term_io__write_variable_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(varset__name_var_4_0,
		term_io__write_variable_2_8_0_i11);
MR_def_label(term_io__write_variable_2_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	{
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_variable_2_8_0
	Message = (MR_String) MR_tempr1;
	MR_save_registers();
{
#line 502 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);
    MR_update_io(IO0, IO);
;}
#line 1436 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
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
	MR_init_label1(term_io__write_term_2_8_0,2)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 8;
	}
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
	MR_init_label1(term_io__write_arg_term_8_0,2)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 9;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__write_arg_term_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_1),
		mercury__term_io__write_arg_term_8_0_i2);
MR_def_label(term_io__write_arg_term_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(term_io__write_term_3_9_0);
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
	MR_init_label8(term_io__write_term_3_9_0,10,11,12,4,18,14,24,25)
	MR_init_label8(term_io__write_term_3_9_0,19,31,32,33,27,41,42,43)
	MR_init_label8(term_io__write_term_3_9_0,44,35,51,53,54,56,57,59)
	MR_init_label8(term_io__write_term_3_9_0,60,46,47,68,70,71,72,74)
	MR_init_label8(term_io__write_term_3_9_0,75,76,77,63,64,86,88,89)
	MR_init_label8(term_io__write_term_3_9_0,90,92,91,93,94,101,99,97)
	MR_init_label8(term_io__write_term_3_9_0,105,106,107,111,112,80,81,121)
	MR_init_label8(term_io__write_term_3_9_0,123,124,126,127,129,128,130,131)
	MR_init_label8(term_io__write_term_3_9_0,133,134,115,116,141,143,144,145)
	MR_init_label8(term_io__write_term_3_9_0,137,138,147,151,152,153,154,3)
	MR_init_label1(term_io__write_term_3_9_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__write_term_3_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 1);
	MR_sv(6) = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 0);
	MR_sv(5) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i4);
	}
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i4);
	}
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i4);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 1);
	MR_r4 = MR_tempr3;
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i4);
	}
	MR_r9 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i4);
	}
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Integer) 91;
	}
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i10);
MR_def_label(term_io__write_term_3_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(term_io__write_arg_term_8_0,
		term_io__write_term_3_9_0_i11);
MR_def_label(term_io__write_term_3_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(term_io__write_list_tail_8_0,
		term_io__write_term_3_9_0_i12);
MR_def_label(term_io__write_term_3_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Integer) 93;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i154);
MR_def_label(term_io__write_term_3_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i14);
	}
	MR_r4 = MR_ctfield(0, MR_sv(5), 0);
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i14);
	}
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i14);
	}
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_r1 = (MR_Word) MR_string_const("[]", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		term_io__write_term_3_9_0_i18);
MR_def_label(term_io__write_term_3_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(15);
MR_def_label(term_io__write_term_3_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i19);
	}
	MR_r4 = MR_ctfield(0, MR_sv(5), 0);
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("{}", 2)) != 0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i19);
	}
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i19);
	}
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("{ ", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		term_io__write_term_3_9_0_i24);
MR_def_label(term_io__write_term_3_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(term_io__write_term_2_8_0,
		term_io__write_term_3_9_0_i25);
MR_def_label(term_io__write_term_3_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const(" }", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		term_io__write_term_3_9_0_i154);
MR_def_label(term_io__write_term_3_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i27);
	}
	MR_r4 = MR_ctfield(0, MR_sv(5), 0);
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("{}", 2)) != 0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i27);
	}
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i27);
	}
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Integer) 123;
	}
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i31);
MR_def_label(term_io__write_term_3_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(term_io__write_arg_term_8_0,
		term_io__write_term_3_9_0_i32);
MR_def_label(term_io__write_term_3_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(term_io__write_term_args_8_0,
		term_io__write_term_3_9_0_i33);
MR_def_label(term_io__write_term_3_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Integer) 125;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i154);
MR_def_label(term_io__write_term_3_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i35);
	}
	MR_r9 = MR_ctfield(0, MR_sv(5), 0);
	if ((strcmp((char *)MR_r9, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i35);
	}
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i35);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(6);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r9 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i35);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 1);
	MR_r10 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i35);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r1;
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	}
	MR_np_call_localret_ent(term_io__write_variable_2_8_0,
		term_io__write_term_3_9_0_i41);
MR_def_label(term_io__write_term_3_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i42);
MR_def_label(term_io__write_term_3_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_np_call_localret_ent(term_io__write_arg_term_8_0,
		term_io__write_term_3_9_0_i43);
MR_def_label(term_io__write_term_3_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(term_io__write_term_args_8_0,
		term_io__write_term_3_9_0_i44);
MR_def_label(term_io__write_term_3_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Integer) 41;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i154);
MR_def_label(term_io__write_term_3_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i47);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(6);
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i47);
	}
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i47);
	}
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 0);
	MR_tempr3 = MR_r2;
	MR_sv(13) = MR_tempr3;
	MR_sv(14) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_ctfield(0, MR_sv(5), 0);
	}
	MR_np_call_localret_ent(ops__lookup_prefix_op_4_0,
		term_io__write_term_3_9_0_i51);
MR_def_label(term_io__write_term_3_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i46);
	}
	MR_sv(6) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_np_call_localret_ent(io__output_stream_3_0,
		term_io__write_term_3_9_0_i53);
MR_def_label(term_io__write_term_3_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(6) <= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i54);
	}
	MR_sv(9) = MR_r1;
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_term_3_9_0
	Stream = (MercuryFilePtr) MR_r1;
	Character = (MR_Integer) 40;
	MR_save_registers();
{
#line 1321 "io.opt"

    if (MR_PUTCH(*Stream, Character) < 0) {
        mercury_output_error(Stream);
    }
    if (Character == '\n') {
        MR_line_number(*Stream)++;
    }
    MR_update_io(IO0, IO);
;}
#line 1907 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(term_io__write_constant_3_0,
		term_io__write_term_3_9_0_i56);
MR_def_label(term_io__write_term_3_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(term_io__write_constant_3_0,
		term_io__write_term_3_9_0_i56);
MR_def_label(term_io__write_term_3_9_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i57);
MR_def_label(term_io__write_term_3_9_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i59);
	}
	MR_r3 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r5 = ((MR_Integer) MR_sv(6) - (MR_Integer) 1);
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(14);
	MR_np_localcall_lab(term_io__write_term_3_9_0,
		term_io__write_term_3_9_0_i60);
MR_def_label(term_io__write_term_3_9_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(14);
	MR_np_localcall_lab(term_io__write_term_3_9_0,
		term_io__write_term_3_9_0_i60);
MR_def_label(term_io__write_term_3_9_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(6) <= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_term_3_9_0
	Stream = (MercuryFilePtr) MR_sv(9);
	Character = (MR_Integer) 41;
	MR_save_registers();
{
#line 1321 "io.opt"

    if (MR_PUTCH(*Stream, Character) < 0) {
        mercury_output_error(Stream);
    }
    if (Character == '\n') {
        MR_line_number(*Stream)++;
    }
    MR_update_io(IO0, IO);
;}
#line 1979 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(15);
MR_def_label(term_io__write_term_3_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(14);
MR_def_label(term_io__write_term_3_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i64);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(6);
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i64);
	}
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i64);
	}
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 0);
	MR_tempr3 = MR_r2;
	MR_sv(13) = MR_tempr3;
	MR_sv(14) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_ctfield(0, MR_sv(5), 0);
	}
	MR_np_call_localret_ent(ops__lookup_postfix_op_4_0,
		term_io__write_term_3_9_0_i68);
MR_def_label(term_io__write_term_3_9_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i63);
	}
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_np_call_localret_ent(io__output_stream_3_0,
		term_io__write_term_3_9_0_i70);
MR_def_label(term_io__write_term_3_9_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(8) <= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i71);
	}
	MR_sv(6) = MR_r1;
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_term_3_9_0
	Stream = (MercuryFilePtr) MR_r1;
	Character = (MR_Integer) 40;
	MR_save_registers();
{
#line 1321 "io.opt"

    if (MR_PUTCH(*Stream, Character) < 0) {
        mercury_output_error(Stream);
    }
    if (Character == '\n') {
        MR_line_number(*Stream)++;
    }
    MR_update_io(IO0, IO);
;}
#line 2061 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(14);
	MR_GOTO_LAB(term_io__write_term_3_9_0_i72);
MR_def_label(term_io__write_term_3_9_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_sv(6) = MR_r1;
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(14);
MR_def_label(term_io__write_term_3_9_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i74);
	}
	MR_r5 = ((MR_Integer) MR_sv(8) - (MR_Integer) 1);
	MR_np_localcall_lab(term_io__write_term_3_9_0,
		term_io__write_term_3_9_0_i75);
MR_def_label(term_io__write_term_3_9_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(8);
	MR_np_localcall_lab(term_io__write_term_3_9_0,
		term_io__write_term_3_9_0_i75);
MR_def_label(term_io__write_term_3_9_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i76);
MR_def_label(term_io__write_term_3_9_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(term_io__write_constant_3_0,
		term_io__write_term_3_9_0_i77);
MR_def_label(term_io__write_term_3_9_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(8) <= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i154);
	}
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_term_3_9_0
	Stream = (MercuryFilePtr) MR_sv(6);
	Character = (MR_Integer) 41;
	MR_save_registers();
{
#line 1321 "io.opt"

    if (MR_PUTCH(*Stream, Character) < 0) {
        mercury_output_error(Stream);
    }
    if (Character == '\n') {
        MR_line_number(*Stream)++;
    }
    MR_update_io(IO0, IO);
;}
#line 2133 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(15);
MR_def_label(term_io__write_term_3_9_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(14);
MR_def_label(term_io__write_term_3_9_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i81);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr2 = MR_sv(6);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i81);
	}
	MR_r9 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i81);
	}
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i81);
	}
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(11) = MR_ctfield(0, MR_sv(5), 0);
	MR_tempr4 = MR_r2;
	MR_sv(13) = MR_tempr4;
	MR_sv(14) = MR_r1;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(ops__lookup_infix_op_5_0,
		term_io__write_term_3_9_0_i86);
MR_def_label(term_io__write_term_3_9_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i80);
	}
	MR_sv(6) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(12) = MR_r2;
	MR_np_call_localret_ent(io__output_stream_3_0,
		term_io__write_term_3_9_0_i88);
MR_def_label(term_io__write_term_3_9_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(12) <= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i89);
	}
	MR_sv(10) = MR_r1;
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_term_3_9_0
	Stream = (MercuryFilePtr) MR_r1;
	Character = (MR_Integer) 40;
	MR_save_registers();
{
#line 1321 "io.opt"

    if (MR_PUTCH(*Stream, Character) < 0) {
        mercury_output_error(Stream);
    }
    if (Character == '\n') {
        MR_line_number(*Stream)++;
    }
    MR_update_io(IO0, IO);
;}
#line 2223 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(14);
	MR_GOTO_LAB(term_io__write_term_3_9_0_i90);
MR_def_label(term_io__write_term_3_9_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_sv(10) = MR_r1;
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(14);
MR_def_label(term_io__write_term_3_9_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i92);
	}
	MR_r5 = ((MR_Integer) MR_sv(12) - (MR_Integer) 1);
	MR_GOTO_LAB(term_io__write_term_3_9_0_i91);
MR_def_label(term_io__write_term_3_9_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(12);
MR_def_label(term_io__write_term_3_9_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r1;
	MR_np_localcall_lab(term_io__write_term_3_9_0,
		term_io__write_term_3_9_0_i93);
MR_def_label(term_io__write_term_3_9_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(11), (char *)(MR_Word) MR_string_const(",", 1)) != 0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i94);
	}
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		term_io__write_term_3_9_0_i107);
MR_def_label(term_io__write_term_3_9_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(11), (char *)(MR_Word) MR_string_const(".", 1)) != 0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i97);
	}
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0,
		term_io__write_term_3_9_0_i101);
MR_def_label(term_io__write_term_3_9_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i99);
	}
	MR_r1 = (MR_Word) MR_string_const("\'.\'", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		term_io__write_term_3_9_0_i107);
MR_def_label(term_io__write_term_3_9_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		term_io__write_term_3_9_0_i107);
MR_def_label(term_io__write_term_3_9_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i105);
MR_def_label(term_io__write_term_3_9_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(term_io__write_constant_3_0,
		term_io__write_term_3_9_0_i106);
MR_def_label(term_io__write_term_3_9_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i107);
MR_def_label(term_io__write_term_3_9_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(8);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(14);
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i111);
	}
	MR_r5 = ((MR_Integer) MR_sv(12) - (MR_Integer) 1);
	MR_np_localcall_lab(term_io__write_term_3_9_0,
		term_io__write_term_3_9_0_i112);
MR_def_label(term_io__write_term_3_9_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(12);
	MR_np_localcall_lab(term_io__write_term_3_9_0,
		term_io__write_term_3_9_0_i112);
MR_def_label(term_io__write_term_3_9_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(12) <= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_term_3_9_0
	Stream = (MercuryFilePtr) MR_sv(10);
	Character = (MR_Integer) 41;
	MR_save_registers();
{
#line 1321 "io.opt"

    if (MR_PUTCH(*Stream, Character) < 0) {
        mercury_output_error(Stream);
    }
    if (Character == '\n') {
        MR_line_number(*Stream)++;
    }
    MR_update_io(IO0, IO);
;}
#line 2360 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(15);
MR_def_label(term_io__write_term_3_9_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(14);
MR_def_label(term_io__write_term_3_9_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i116);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr2 = MR_sv(6);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i116);
	}
	MR_r9 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i116);
	}
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i116);
	}
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(10) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(11) = MR_ctfield(1, MR_tempr1, 0);
	MR_tempr4 = MR_r2;
	MR_sv(13) = MR_tempr4;
	MR_sv(14) = MR_r1;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_ctfield(0, MR_sv(5), 0);
	}
	MR_np_call_localret_ent(ops__lookup_binary_prefix_op_5_0,
		term_io__write_term_3_9_0_i121);
MR_def_label(term_io__write_term_3_9_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i115);
	}
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(9) = MR_r2;
	MR_np_call_localret_ent(io__output_stream_3_0,
		term_io__write_term_3_9_0_i123);
MR_def_label(term_io__write_term_3_9_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(9) <= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i124);
	}
	MR_sv(8) = MR_r1;
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_term_3_9_0
	Stream = (MercuryFilePtr) MR_r1;
	Character = (MR_Integer) 40;
	MR_save_registers();
{
#line 1321 "io.opt"

    if (MR_PUTCH(*Stream, Character) < 0) {
        mercury_output_error(Stream);
    }
    if (Character == '\n') {
        MR_line_number(*Stream)++;
    }
    MR_update_io(IO0, IO);
;}
#line 2449 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(term_io__write_constant_3_0,
		term_io__write_term_3_9_0_i126);
MR_def_label(term_io__write_term_3_9_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(term_io__write_constant_3_0,
		term_io__write_term_3_9_0_i126);
MR_def_label(term_io__write_term_3_9_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i127);
MR_def_label(term_io__write_term_3_9_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i129);
	}
	MR_r3 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r5 = ((MR_Integer) MR_sv(9) - (MR_Integer) 1);
	MR_r4 = MR_sv(10);
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(14);
	MR_GOTO_LAB(term_io__write_term_3_9_0_i128);
MR_def_label(term_io__write_term_3_9_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r5 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(14);
MR_def_label(term_io__write_term_3_9_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r1;
	MR_np_localcall_lab(term_io__write_term_3_9_0,
		term_io__write_term_3_9_0_i130);
MR_def_label(term_io__write_term_3_9_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i131);
MR_def_label(term_io__write_term_3_9_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i133);
	}
	MR_r3 = MR_sv(1);
	MR_r5 = ((MR_Integer) MR_sv(9) - (MR_Integer) 1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r4 = MR_sv(11);
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(14);
	MR_np_localcall_lab(term_io__write_term_3_9_0,
		term_io__write_term_3_9_0_i134);
MR_def_label(term_io__write_term_3_9_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r4 = MR_sv(11);
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(14);
	MR_np_localcall_lab(term_io__write_term_3_9_0,
		term_io__write_term_3_9_0_i134);
MR_def_label(term_io__write_term_3_9_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(9) <= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_term_3_9_0
	Stream = (MercuryFilePtr) MR_sv(8);
	Character = (MR_Integer) 41;
	MR_save_registers();
{
#line 1321 "io.opt"

    if (MR_PUTCH(*Stream, Character) < 0) {
        mercury_output_error(Stream);
    }
    if (Character == '\n') {
        MR_line_number(*Stream)++;
    }
    MR_update_io(IO0, IO);
;}
#line 2557 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(15);
MR_def_label(term_io__write_term_3_9_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(14);
MR_def_label(term_io__write_term_3_9_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i138);
	}
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i138);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_tempr2 = MR_r2;
	MR_sv(13) = MR_tempr2;
	MR_sv(14) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_sv(5), 0);
	}
	MR_np_call_localret_ent(ops__lookup_op_2_0,
		term_io__write_term_3_9_0_i141);
MR_def_label(term_io__write_term_3_9_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i137);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__ops__max_priority_1_0,
		term_io__write_term_3_9_0_i143);
MR_def_label(term_io__write_term_3_9_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(2) > (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i137);
	}
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i144);
MR_def_label(term_io__write_term_3_9_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(term_io__write_constant_3_0,
		term_io__write_term_3_9_0_i145);
MR_def_label(term_io__write_term_3_9_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i147);
MR_def_label(term_io__write_term_3_9_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r2 = MR_sv(13);
	MR_r1 = MR_sv(14);
MR_def_label(term_io__write_term_3_9_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(term_io__write_constant_4_0,
		term_io__write_term_3_9_0_i147);
MR_def_label(term_io__write_term_3_9_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(term_io__write_term_3_9_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Integer) 40;
	}
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i151);
MR_def_label(term_io__write_term_3_9_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(term_io__write_arg_term_8_0,
		term_io__write_term_3_9_0_i152);
MR_def_label(term_io__write_term_3_9_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(term_io__write_term_args_8_0,
		term_io__write_term_3_9_0_i153);
MR_def_label(term_io__write_term_3_9_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Integer) 41;
	MR_np_call_localret_ent(io__write_char_3_0,
		term_io__write_term_3_9_0_i154);
MR_def_label(term_io__write_term_3_9_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(15);
MR_def_label(term_io__write_term_3_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(1, MR_r4, 0);
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(term_io__write_variable_2_8_0);
MR_def_label(term_io__write_term_3_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module13)
	MR_init_entry1(term_io__write_list_tail_8_0);
	MR_init_label7(term_io__write_list_tail_8_0,75,5,2,3,15,8,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_io__write_list_tail_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(term_io__write_list_tail_8_0,75)
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
	MR_r4 = MR_ctfield(0, MR_tempr3, 2);
	MR_r5 = MR_ctfield(1, MR_sv(2), 0);
	}
	MR_np_call_localret_ent(f_116_114_101_101_50_51_52_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		term_io__write_list_tail_8_0_i5);
MR_def_label(term_io__write_list_tail_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__write_list_tail_8_0_i2);
	}
	MR_r1 = MR_sv(7);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(term_io__write_list_tail_8_0_i75);
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
		MR_GOTO_LAB(term_io__write_list_tail_8_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 0);
	MR_r8 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(term_io__write_list_tail_8_0_i8);
	}
	MR_r9 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_r9, (char *)(MR_Word) MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(term_io__write_list_tail_8_0_i8);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 1);
	MR_r8 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(term_io__write_list_tail_8_0_i8);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 1);
	MR_r9 = MR_tempr3;
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(term_io__write_list_tail_8_0_i8);
	}
	MR_r10 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(term_io__write_list_tail_8_0_i8);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 0);
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
#line 502 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);
    MR_update_io(IO0, IO);
;}
#line 2821 "term_io.c"
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
	}
	MR_np_call_localret_ent(term_io__write_arg_term_8_0,
		term_io__write_list_tail_8_0_i15);
MR_def_label(term_io__write_list_tail_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(term_io__write_list_tail_8_0_i75);
MR_def_label(term_io__write_list_tail_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(term_io__write_list_tail_8_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r8 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(term_io__write_list_tail_8_0_i17);
	}
	MR_r9 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_r9, (char *)(MR_Word) MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(term_io__write_list_tail_8_0_i17);
	}
	MR_r8 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(term_io__write_list_tail_8_0_i17);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(8);
	}
MR_def_label(term_io__write_list_tail_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r1;
	{
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_list_tail_8_0
	Message = (MR_String) (MR_Word) MR_string_const(" | ", 3);
	MR_save_registers();
{
#line 502 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);
    MR_update_io(IO0, IO);
;}
#line 2892 "term_io.c"
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
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module14)
	MR_init_entry1(term_io__write_term_args_8_0);
	MR_init_label4(term_io__write_term_args_8_0,12,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_io__write_term_args_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(term_io__write_term_args_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(term_io__write_term_args_8_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
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
#line 502 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);
    MR_update_io(IO0, IO);
;}
#line 2955 "term_io.c"
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
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_np_call_localret_ent(term_io__write_term_3_9_0,
		term_io__write_term_args_8_0_i5);
MR_def_label(term_io__write_term_args_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(term_io__write_term_args_8_0_i12);
MR_def_label(term_io__write_term_args_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module15)
	MR_init_entry1(term_io__write_term_with_op_table_5_0);
	MR_init_label1(term_io__write_term_with_op_table_5_0,2)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 8;
	}
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
	MR_init_label1(term_io__write_term_4_0,2)
MR_BEGIN_CODE

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
		mercury__term_io__write_term_4_0_i2);
MR_def_label(term_io__write_term_4_0,2)
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
	MR_init_label2(term_io__write_term_nl_with_op_table_5_0,2,3)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 8;
	}
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
#line 502 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);
    MR_update_io(IO0, IO);
;}
#line 3152 "term_io.c"
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
	MR_init_label2(term_io__write_term_nl_4_0,2,3)
MR_BEGIN_CODE

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
		mercury__term_io__write_term_nl_4_0_i2);
MR_def_label(term_io__write_term_nl_4_0,2)
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
		term_io__write_term_nl_4_0_i3);
MR_def_label(term_io__write_term_nl_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_term_nl_4_0
	Message = (MR_String) (MR_Word) MR_string_const(".\n", 2);
	MR_save_registers();
{
#line 502 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);
    MR_update_io(IO0, IO);
;}
#line 3217 "term_io.c"
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

MR_decl_entry(list__reverse_2_3_0);

MR_BEGIN_MODULE(term_io_module19)
	MR_init_entry1(fn__term_io__escaped_string_1_0);
	MR_init_label3(fn__term_io__escaped_string_1_0,2,4,5)
MR_BEGIN_CODE

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
#line 218 "string.opt"

    Length = strlen(Str);
;}
#line 3255 "term_io.c"
	MR_r3 = Length;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__term_io__escaped_string_1_0
	Str = (MR_String) MR_r1;
{
#line 218 "string.opt"

    Length = strlen(Str);
;}
#line 3271 "term_io.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_r6 = ((MR_Integer) MR_tempr1 - (MR_Integer) 0);
	MR_r2 = (MR_Integer) 0;
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(fn__term_io__escaped_string_1_0_i2);
	}
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(term_io__string__foldl_substring_2__ho21_6_0,
		fn__term_io__escaped_string_1_0_i4);
MR_def_label(fn__term_io__escaped_string_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r6;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(term_io__string__foldl_substring_2__ho21_6_0,
		fn__term_io__escaped_string_1_0_i4);
MR_def_label(fn__term_io__escaped_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(list__reverse_2_3_0,
		fn__term_io__escaped_string_1_0_i5);
MR_def_label(fn__term_io__escaped_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__fn__term_io__escaped_string_1_0
	Strs = MR_r1;
{
#line 706 "string.opt"
{
    MR_Word list = Strs;
    MR_Word tmp;
    size_t  len;

    /* Determine the total length of all strings */
    len = 0;
    while (!MR_list_is_empty(list)) {
        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
    }

    /* Allocate enough word aligned memory for the string */
    MR_allocate_aligned_string_msg(Str, len, MR_PROC_LABEL);

    /* Copy the strings into the new memory */
    len = 0;
    list = Strs;
    while (!MR_list_is_empty(list)) {
        strcpy((MR_String) Str + len, (MR_String) MR_list_head(list));
        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
    }

    Str[len] = '\0';
};}
#line 3332 "term_io.c"
	MR_r1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module20)
	MR_init_entry1(fn__term_io__quoted_string_1_0);
	MR_init_label1(fn__term_io__quoted_string_1_0,2)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\"", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__fn__term_io__quoted_string_1_0
	Strs = MR_tempr2;
{
#line 706 "string.opt"
{
    MR_Word list = Strs;
    MR_Word tmp;
    size_t  len;

    /* Determine the total length of all strings */
    len = 0;
    while (!MR_list_is_empty(list)) {
        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
    }

    /* Allocate enough word aligned memory for the string */
    MR_allocate_aligned_string_msg(Str, len, MR_PROC_LABEL);

    /* Copy the strings into the new memory */
    len = 0;
    list = Strs;
    while (!MR_list_is_empty(list)) {
        strcpy((MR_String) Str + len, (MR_String) MR_list_head(list));
        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
    }

    Str[len] = '\0';
};}
#line 3402 "term_io.c"
	MR_r1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module21)
	MR_init_entry1(fn__term_io__quoted_atom_agt_2_0);
	MR_init_label8(fn__term_io__quoted_atom_agt_2_0,7,8,9,5,12,17,20,15)
	MR_init_label8(fn__term_io__quoted_atom_agt_2_0,11,29,31,4,2,33,36,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term_io__quoted_atom_agt_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i7);
	}
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i4);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const(";", 1)) != 0)) {
		MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i8);
	}
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i4);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i9);
	}
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i4);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("{}", 2)) != 0)) {
		MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i5);
	}
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i4);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		fn__term_io__quoted_atom_agt_2_0_i12);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(5) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(6));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(fn__term_io__quoted_atom_agt_2_0_i15);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__member_2_1,
		fn__term_io__quoted_atom_agt_2_0_i17);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(lexer__graphic_token_char_1_0,
		fn__term_io__quoted_atom_agt_2_0_i20);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(6));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i11);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i11);
	}
	MR_r2 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_EQ(MR_r2,35)) {
		MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i11);
	}
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i11);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i4);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Char	First;
	MR_String	Rest;
#define	MR_PROC_LABEL	mercury__fn__term_io__quoted_atom_agt_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_sv(1);
{
#line 285 "string.opt"
{
    First = Str[0];
    if (First == '\0') {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        Str++;
        /*
        ** We need to make a copy to ensure that the pointer is word-aligned.
        */
        MR_allocate_aligned_string_msg(Rest, strlen(Str), MR_PROC_LABEL);
        strcpy(Rest, Str);
        SUCCESS_INDICATOR = MR_TRUE;
    }
};}
#line 3532 "term_io.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i2);
	MR_r1 = First;
	MR_tempr1 = (MR_Word) Rest;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(char__lower_upper_2_0,
		fn__term_io__quoted_atom_agt_2_0_i29);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__fn__term_io__quoted_atom_agt_2_0
	Str = (MR_String) MR_sv(2);
{
#line 218 "string.opt"

    Length = strlen(Str);
;}
#line 3561 "term_io.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(term_io__string__all_match_2__ho15_3_0,
		fn__term_io__quoted_atom_agt_2_0_i31);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i2);
	}
	MR_r1 = MR_sv(1);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i33);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
MR_def_label(fn__term_io__quoted_atom_agt_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(fn__term_io__quoted_atom_agt_2_0_i34);
	}
	MR_np_call_localret_ent(fn__term_io__escaped_string_1_0,
		fn__term_io__quoted_atom_agt_2_0_i36);
MR_def_label(fn__term_io__quoted_atom_agt_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\'", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	{
	MR_Word	Strs;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__fn__term_io__quoted_atom_agt_2_0
	Strs = MR_tempr2;
{
#line 706 "string.opt"
{
    MR_Word list = Strs;
    MR_Word tmp;
    size_t  len;

    /* Determine the total length of all strings */
    len = 0;
    while (!MR_list_is_empty(list)) {
        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
    }

    /* Allocate enough word aligned memory for the string */
    MR_allocate_aligned_string_msg(Str, len, MR_PROC_LABEL);

    /* Copy the strings into the new memory */
    len = 0;
    list = Strs;
    while (!MR_list_is_empty(list)) {
        strcpy((MR_String) Str + len, (MR_String) MR_list_head(list));
        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
    }

    Str[len] = '\0';
};}
#line 3634 "term_io.c"
	MR_r1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	}
MR_def_label(fn__term_io__quoted_atom_agt_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module22)
	MR_init_entry1(fn__term_io__format_constant_agt_2_0);
	MR_init_label4(fn__term_io__format_constant_agt_2_0,4,6,8,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term_io__format_constant_agt_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__term_io__format_constant_agt_2_0_i4) MR_AND
		MR_LABEL_AP(fn__term_io__format_constant_agt_2_0_i6) MR_AND
		MR_LABEL_AP(fn__term_io__format_constant_agt_2_0_i8) MR_AND
		MR_LABEL_AP(fn__term_io__format_constant_agt_2_0_i10));
MR_def_label(fn__term_io__format_constant_agt_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(fn__term_io__quoted_atom_agt_2_0);
MR_def_label(fn__term_io__format_constant_agt_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = (MR_Integer) 10;
	MR_np_tailcall_ent(string__int_to_base_string_3_0);
MR_def_label(fn__term_io__format_constant_agt_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_tailcall_ent(fn__term_io__quoted_string_1_0);
MR_def_label(fn__term_io__format_constant_agt_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	{
	MR_Float	Flt;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__fn__term_io__format_constant_agt_2_0
	Flt = MR_word_to_float(MR_tempr1);
{
#line 266 "string.opt"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str);
};}
#line 3697 "term_io.c"
	MR_r1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module23)
	MR_init_entry1(fn__term_io__format_constant_1_0);
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__write_variable_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r5 = MR_r3;
	MR_r6 = (MR_Integer) 0;
	MR_np_tailcall_ent(term_io__write_variable_2_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module26)
	MR_init_entry1(term_io__quote_atom_3_0);
MR_BEGIN_CODE

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
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__quote_atom_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r5;
	MR_r5 = (MR_Integer) 1;
	MR_np_tailcall_ent(term_io__quote_atom_agt_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module28)
	MR_init_entry1(fn__term_io__quoted_atom_1_0);
MR_BEGIN_CODE

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
	MR_init_label3(fn__term_io__mercury_escape_char_1_0,2,3,4)
MR_BEGIN_CODE

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
#line 47 "char.opt"

    Int = (MR_UnsignedChar) Character;
;}
#line 3852 "term_io.c"
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
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\", 1);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__append_3_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module30)
	MR_init_entry1(term_io__is_mercury_punctuation_char_1_0);
	MR_init_label1(term_io__is_mercury_punctuation_char_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__is_mercury_punctuation_char_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((MR_Unsigned) ((MR_Integer) MR_r1 - (MR_Integer) 32) <= 94))) {
		MR_GOTO_LAB(term_io__is_mercury_punctuation_char_1_0_i1);
	}
	MR_r1 = (((MR_Integer) 1 << (((MR_Integer) MR_r1 - (MR_Integer) 32) & (MR_Integer) 31)) & (MR_Integer) MR_ctfield(0, MR_COMMON(5,0), (((MR_Integer) MR_r1 - (MR_Integer) 32) >> (MR_Integer) 5)));
	MR_proceed();
MR_def_label(term_io__is_mercury_punctuation_char_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_char_list_2_1);
MR_decl_entry(char__is_alnum_1_0);

MR_BEGIN_MODULE(term_io_module31)
	MR_init_entry1(fn__term_io__escaped_char_1_0);
	MR_init_label8(fn__term_io__escaped_char_1_0,4,5,6,7,8,3,10,2)
	MR_init_label3(fn__term_io__escaped_char_1_0,17,14,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term_io__escaped_char_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,8)) {
		MR_GOTO_LAB(fn__term_io__escaped_char_1_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 98;
	MR_GOTO_LAB(fn__term_io__escaped_char_1_0_i3);
MR_def_label(fn__term_io__escaped_char_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,9)) {
		MR_GOTO_LAB(fn__term_io__escaped_char_1_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 116;
	MR_GOTO_LAB(fn__term_io__escaped_char_1_0_i3);
MR_def_label(fn__term_io__escaped_char_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(fn__term_io__escaped_char_1_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 110;
	MR_GOTO_LAB(fn__term_io__escaped_char_1_0_i3);
MR_def_label(fn__term_io__escaped_char_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,34)) {
		MR_GOTO_LAB(fn__term_io__escaped_char_1_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 34;
	MR_GOTO_LAB(fn__term_io__escaped_char_1_0_i3);
MR_def_label(fn__term_io__escaped_char_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,39)) {
		MR_GOTO_LAB(fn__term_io__escaped_char_1_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 39;
	MR_GOTO_LAB(fn__term_io__escaped_char_1_0_i3);
MR_def_label(fn__term_io__escaped_char_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,92)) {
		MR_GOTO_LAB(fn__term_io__escaped_char_1_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 92;
MR_def_label(fn__term_io__escaped_char_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_char_list_2_1,
		fn__term_io__escaped_char_1_0_i10);
MR_def_label(fn__term_io__escaped_char_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_3_2);
MR_def_label(fn__term_io__escaped_char_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__is_alnum_1_0,
		fn__term_io__escaped_char_1_0_i17);
MR_def_label(fn__term_io__escaped_char_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__term_io__escaped_char_1_0_i14);
	}
	MR_r1 = MR_sv(1);
	if (!(((MR_Unsigned) ((MR_Integer) MR_r1 - (MR_Integer) 32) <= 94))) {
		MR_GOTO_LAB(fn__term_io__escaped_char_1_0_i13);
	}
	if (!((((MR_Integer) 1 << (((MR_Integer) MR_r1 - (MR_Integer) 32) & (MR_Integer) 31)) & (MR_Integer) MR_ctfield(0, MR_COMMON(5,0), (((MR_Integer) MR_r1 - (MR_Integer) 32) >> (MR_Integer) 5))))) {
		MR_GOTO_LAB(fn__term_io__escaped_char_1_0_i13);
	}
MR_def_label(fn__term_io__escaped_char_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__to_char_list_2_1);
MR_def_label(fn__term_io__escaped_char_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__term_io__mercury_escape_char_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__format_3_0);

MR_BEGIN_MODULE(term_io_module32)
	MR_init_entry1(fn__term_io__quoted_char_1_0);
	MR_init_label1(fn__term_io__quoted_char_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__term_io__quoted_char_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__term_io__escaped_char_1_0,
		fn__term_io__quoted_char_1_0_i2);
MR_def_label(fn__term_io__quoted_char_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("\'%s\'", 4);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__format_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module33)
	MR_init_entry1(term_io__quote_char_3_0);
	MR_init_label2(term_io__quote_char_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__quote_char_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__term_io__escaped_char_1_0,
		term_io__quote_char_3_0_i2);
MR_def_label(term_io__quote_char_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("\'%s\'", 4);
	}
	MR_np_call_localret_ent(string__format_3_0,
		term_io__quote_char_3_0_i3);
MR_def_label(term_io__quote_char_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__quote_char_3_0
	Message = (MR_String) MR_r1;
	MR_save_registers();
{
#line 502 "io.opt"

    mercury_print_string(mercury_current_text_output(), Message);
    MR_update_io(IO0, IO);
;}
#line 4109 "term_io.c"
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


MR_BEGIN_MODULE(term_io_module34)
	MR_init_entry1(term_io__quote_char_4_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(term_io_module35)
	MR_init_entry1(term_io__write_escaped_char_4_0);
	MR_init_label8(term_io__write_escaped_char_4_0,4,5,6,7,8,3,10,2)
	MR_init_label5(term_io__write_escaped_char_4_0,17,15,14,13,21)
MR_BEGIN_CODE

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
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 98;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i3);
MR_def_label(term_io__write_escaped_char_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,9)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i5);
	}
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 116;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i3);
MR_def_label(term_io__write_escaped_char_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,10)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i6);
	}
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 110;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i3);
MR_def_label(term_io__write_escaped_char_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,34)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i7);
	}
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 34;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i3);
MR_def_label(term_io__write_escaped_char_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,39)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i8);
	}
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 39;
	MR_GOTO_LAB(term_io__write_escaped_char_4_0_i3);
MR_def_label(term_io__write_escaped_char_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,92)) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i2);
	}
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 92;
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
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__write_escaped_char_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_sv(5);
	if (!(((MR_Unsigned) ((MR_Integer) MR_tempr1 - (MR_Integer) 32) <= 94))) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i13);
	}
	if (!((((MR_Integer) 1 << (((MR_Integer) MR_tempr1 - (MR_Integer) 32) & (MR_Integer) 31)) & (MR_Integer) MR_ctfield(0, MR_COMMON(5,0), (((MR_Integer) MR_tempr1 - (MR_Integer) 32) >> (MR_Integer) 5))))) {
		MR_GOTO_LAB(term_io__write_escaped_char_4_0_i13);
	}
	MR_r1 = MR_tempr2;
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
		term_io__write_escaped_char_4_0_i21);
MR_def_label(term_io__write_escaped_char_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(term_io__write_escaped_char_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module36)
	MR_init_entry1(term_io__write_escaped_char_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__write_escaped_char_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_escaped_char_3_0
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1400 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 4335 "term_io.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module37)
	MR_init_entry1(term_io__write_escaped_string_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__term_io__write_escaped_string_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MercuryFilePtr	Stream;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__term_io__write_escaped_string_3_0
	MR_OBTAIN_GLOBAL_LOCK("output_stream_2");
{
#line 1400 "io.opt"

    Stream = mercury_current_text_output();
    MR_update_io(IO0, IO);
;}
#line 4375 "term_io.c"
	MR_RELEASE_GLOBAL_LOCK("output_stream_2");
	MR_tempr1 = (MR_Word) Stream;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__from_char_list_2_0);

MR_BEGIN_MODULE(term_io_module38)
	MR_init_entry1(fn__term_io__add_escaped_char_2_0);
	MR_init_label8(fn__term_io__add_escaped_char_2_0,4,5,6,7,8,3,2,16)
	MR_init_label3(fn__term_io__add_escaped_char_2_0,13,12,20)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Integer) 92;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__from_char_list_2_0,
		fn__term_io__add_escaped_char_2_0_i20);
MR_def_label(fn__term_io__add_escaped_char_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(char__is_alnum_1_0,
		fn__term_io__add_escaped_char_2_0_i16);
MR_def_label(fn__term_io__add_escaped_char_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (!(((MR_Unsigned) ((MR_Integer) MR_r1 - (MR_Integer) 32) <= 94))) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i12);
	}
	if (!((((MR_Integer) 1 << (((MR_Integer) MR_r1 - (MR_Integer) 32) & (MR_Integer) 31)) & (MR_Integer) MR_ctfield(0, MR_COMMON(5,0), (((MR_Integer) MR_r1 - (MR_Integer) 32) >> (MR_Integer) 5))))) {
		MR_GOTO_LAB(fn__term_io__add_escaped_char_2_0_i12);
	}
MR_def_label(fn__term_io__add_escaped_char_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(string__to_char_list_2_1,
		fn__term_io__add_escaped_char_2_0_i20);
MR_def_label(fn__term_io__add_escaped_char_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__term_io__mercury_escape_char_1_0,
		fn__term_io__add_escaped_char_2_0_i20);
MR_def_label(fn__term_io__add_escaped_char_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module39)
	MR_init_entry1(__Unify___term_io__adjacent_to_graphic_token_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(term_io_module40)
	MR_init_entry1(__Compare___term_io__adjacent_to_graphic_token_0_0);
	MR_init_label2(__Compare___term_io__adjacent_to_graphic_token_0_0,2,3)
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(term_io_module41)
	MR_init_entry1(__Unify___term_io__read_term_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(term_io_module42)
	MR_init_entry1(__Compare___term_io__read_term_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(term_io_module43)
	MR_init_entry1(__Unify___term_io__read_term_1_0);
	MR_init_label5(__Unify___term_io__read_term_1_0,8,10,6,24,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___term_io__read_term_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___term_io__read_term_1_0_i24);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(__Unify___term_io__read_term_1_0_i6);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(__Unify___term_io__read_term_1_0_i8);
	}
	MR_r1 = (MR_sv(2) == MR_r1);
	MR_decr_sp(4);
	MR_proceed();
MR_def_label(__Unify___term_io__read_term_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___term_io__read_term_1_0_i1);
	}
	MR_sv(1) = MR_ctfield(2, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(2, MR_tempr2, 0);
	MR_r3 = MR_ctfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___term_io__read_term_1_0_i10);
MR_def_label(__Unify___term_io__read_term_1_0,10)
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
MR_def_label(__Unify___term_io__read_term_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___term_io__read_term_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr3 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___term_io__read_term_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr3, 1);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Unify___term_io__read_term_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
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

MR_BEGIN_MODULE(term_io_module44)
	MR_init_entry1(__Compare___term_io__read_term_1_0);
	MR_init_label8(__Compare___term_io__read_term_1_0,60,25,29,31,6,50,9,12)
	MR_init_label5(__Compare___term_io__read_term_1_0,13,16,54,19,40)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___term_io__read_term_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i60);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i6);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i25);
	}
	MR_tempr2 = MR_sv(2);
	if (MR_PTAG_TEST(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i54);
	}
	if (MR_PTAG_TEST(MR_tempr2,2)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i54);
	}
	}
MR_def_label(__Compare___term_io__read_term_1_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___term_io__read_term_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i50);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i29);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___term_io__read_term_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(2, MR_r2, 1);
	MR_tempr2 = MR_ctfield(2, MR_r3, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(2, MR_r2, 0);
	MR_r3 = MR_ctfield(2, MR_r3, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___term_io__read_term_1_0_i31);
MR_def_label(__Compare___term_io__read_term_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i40);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___term__term_1_0);
MR_def_label(__Compare___term_io__read_term_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i9);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i54);
	}
	}
MR_def_label(__Compare___term_io__read_term_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___term_io__read_term_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_r5 = MR_ctfield(1, MR_tempr2, 1);
	MR_r6 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___term_io__read_term_1_0
	S1 = (MR_String) MR_r6;
	S2 = (MR_String) MR_r2;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 4841 "term_io.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i12);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 1;
	MR_sv(2) = MR_r4;
	MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i16);
	}
MR_def_label(__Compare___term_io__read_term_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i13);
	}
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 0;
	MR_sv(2) = MR_r4;
	MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i16);
MR_def_label(__Compare___term_io__read_term_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Integer) 2;
	MR_sv(2) = MR_r4;
MR_def_label(__Compare___term_io__read_term_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i40);
	}
	MR_r5 = MR_sv(1);
	MR_r4 = MR_sv(2);
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i19);
	}
MR_def_label(__Compare___term_io__read_term_1_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___term_io__read_term_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_r5)) {
		MR_GOTO_LAB(__Compare___term_io__read_term_1_0_i50);
	}
	MR_r1 = (MR_Integer) 0;
MR_def_label(__Compare___term_io__read_term_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module45)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module46)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module47)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module48)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module49)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module50)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_105_111_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_alnum_or_underscore_1_0);

MR_BEGIN_MODULE(term_io_module51)
	MR_init_entry1(term_io__string__all_match_2__ho15_3_0);
	MR_init_label4(term_io__string__all_match_2__ho15_3_0,17,3,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_io__string__all_match_2__ho15_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(term_io__string__all_match_2__ho15_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r1,0)) {
		MR_GOTO_LAB(term_io__string__all_match_2__ho15_3_0_i7);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__term_io__string__all_match_2__ho15_3_0
	Str = (MR_String) MR_r2;
	Index = MR_r1;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 5051 "term_io.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		term_io__string__all_match_2__ho15_3_0_i3);
MR_def_label(term_io__string__all_match_2__ho15_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(term_io__string__all_match_2__ho15_3_0_i1);
	}
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(term_io__string__all_match_2__ho15_3_0_i17);
MR_def_label(term_io__string__all_match_2__ho15_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(term_io__string__all_match_2__ho15_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module52)
	MR_init_entry1(term_io__string__foldl_substring_2__ho21_6_0);
	MR_init_label3(term_io__string__foldl_substring_2__ho21_6_0,11,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(term_io__string__foldl_substring_2__ho21_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(term_io__string__foldl_substring_2__ho21_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(term_io__string__foldl_substring_2__ho21_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__term_io__string__foldl_substring_2__ho21_6_0
	Str = (MR_String) MR_r1;
	Index = MR_r2;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 5117 "term_io.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(fn__term_io__add_escaped_char_2_0,
		term_io__string__foldl_substring_2__ho21_6_0_i3);
MR_def_label(term_io__string__foldl_substring_2__ho21_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(term_io__string__foldl_substring_2__ho21_6_0_i11);
MR_def_label(term_io__string__foldl_substring_2__ho21_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module53)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_0);
	MR_init_label2(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_0,2,3)
MR_BEGIN_CODE

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
	MR_np_call_localret_ent(fn__term_io__escaped_char_1_0,
		f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_0_i2);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("\'%s\'", 4);
	}
	MR_np_call_localret_ent(string__format_3_0,
		f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_0_i3);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_50_93_95_48_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ops__lookup_mercury_postfix_op_4_0);
MR_decl_entry(ops__lookup_mercury_infix_op_5_0);

MR_BEGIN_MODULE(term_io_module54)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0);
	MR_init_label7(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0,53,5,9,8,12,27,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i5);
	}
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i27);
	}
	MR_r1 = (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3));
	MR_decr_sp_and_return(2);
	}
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i1);
	}
	MR_r5 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i8);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	}
	MR_np_call_localret_ent(ops__lookup_mercury_postfix_op_4_0,
		f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i9);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i53);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r5, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r4, 0);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	}
	MR_np_call_localret_ent(ops__lookup_mercury_infix_op_5_0,
		f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i12);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0_i53);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_97_114_116_115_95_119_105_116_104_95_100_105_103_105_116_95_95_91_49_93_95_48_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module55)
	MR_init_entry1(fn__f_116_101_114_109_95_105_111_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(term_io_module56)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0);
	MR_init_label8(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0,7,8,9,5,12,17,20,15)
	MR_init_label8(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0,11,29,31,4,2,33,35,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i7);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i4);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const(";", 1)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i8);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i4);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i9);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i4);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("{}", 2)) != 0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i4);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_char_list_2_0,
		f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i12);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(7) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(8));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i15);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__member_2_1,
		f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i17);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(lexer__graphic_token_char_1_0,
		f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i20);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(8));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i11);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i11);
	}
	MR_r2 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_EQ(MR_r2,35)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i11);
	}
	if (MR_INT_EQ(MR_sv(3),1)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i4);
	}
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Char	First;
	MR_String	Rest;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_sv(2);
{
#line 285 "string.opt"
{
    First = Str[0];
    if (First == '\0') {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        Str++;
        /*
        ** We need to make a copy to ensure that the pointer is word-aligned.
        */
        MR_allocate_aligned_string_msg(Rest, strlen(Str), MR_PROC_LABEL);
        strcpy(Rest, Str);
        SUCCESS_INDICATOR = MR_TRUE;
    }
};}
#line 5447 "term_io.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i2);
	MR_r1 = First;
	MR_tempr1 = (MR_Word) Rest;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(char__lower_upper_2_0,
		f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i29);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i2);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0
	Str = (MR_String) MR_sv(3);
{
#line 218 "string.opt"

    Length = strlen(Str);
;}
#line 5476 "term_io.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(term_io__string__all_match_2__ho15_3_0,
		f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i31);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i2);
	}
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i33);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r1 = (MR_Integer) 1;
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i35);
	}
	{
	MercuryFilePtr	Stream;
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Message = (MR_String) MR_sv(2);
	MR_save_registers();
{
#line 1317 "io.opt"

    mercury_print_string(Stream, Message);
    MR_update_io(IO0, IO);
;}
#line 5520 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(9);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = (MR_Integer) 39;
	MR_save_registers();
{
#line 1321 "io.opt"

    if (MR_PUTCH(*Stream, Character) < 0) {
        mercury_output_error(Stream);
    }
    if (Character == '\n') {
        MR_line_number(*Stream)++;
    }
    MR_update_io(IO0, IO);
;}
#line 5549 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0,
		f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0_i36);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = (MR_Integer) 39;
	MR_save_registers();
{
#line 1321 "io.opt"

    if (MR_PUTCH(*Stream, Character) < 0) {
        mercury_output_error(Stream);
    }
    if (Character == '\n') {
        MR_line_number(*Stream)++;
    }
    MR_update_io(IO0, IO);
;}
#line 5582 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module57)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0);
	MR_init_label2(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__term_io__escaped_char_1_0,
		f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0_i2);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("\'%s\'", 4);
	}
	MR_np_call_localret_ent(string__format_3_0,
		f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0_i3);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Message = (MR_String) MR_r1;
	MR_save_registers();
{
#line 1317 "io.opt"

    mercury_print_string(Stream, Message);
    MR_update_io(IO0, IO);
;}
#line 5644 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module58)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0);
	MR_init_label8(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0,4,5,6,7,8,3,2,15)
	MR_init_label3(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0,12,11,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,8)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 98;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0_i3);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,9)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 116;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0_i3);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,10)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 110;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0_i3);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,34)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 34;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0_i3);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,39)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 39;
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0_i3);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,92)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 92;
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = (MR_Integer) 92;
	MR_save_registers();
{
#line 1321 "io.opt"

    if (MR_PUTCH(*Stream, Character) < 0) {
        mercury_output_error(Stream);
    }
    if (Character == '\n') {
        MR_line_number(*Stream)++;
    }
    MR_update_io(IO0, IO);
;}
#line 5748 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_sv(2);
	MR_save_registers();
{
#line 1321 "io.opt"

    if (MR_PUTCH(*Stream, Character) < 0) {
        mercury_output_error(Stream);
    }
    if (Character == '\n') {
        MR_line_number(*Stream)++;
    }
    MR_update_io(IO0, IO);
;}
#line 5774 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
	}
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_alnum_1_0,
		f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0_i15);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0_i12);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	if (!(((MR_Unsigned) ((MR_Integer) MR_tempr1 - (MR_Integer) 32) <= 94))) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0_i11);
	}
	if (!((((MR_Integer) 1 << (((MR_Integer) MR_tempr1 - (MR_Integer) 32) & (MR_Integer) 31)) & (MR_Integer) MR_ctfield(0, MR_COMMON(5,0), (((MR_Integer) MR_tempr1 - (MR_Integer) 32) >> (MR_Integer) 5))))) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0_i11);
	}
	}
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = MR_sv(2);
	MR_save_registers();
{
#line 1321 "io.opt"

    if (MR_PUTCH(*Stream, Character) < 0) {
        mercury_output_error(Stream);
    }
    if (Character == '\n') {
        MR_line_number(*Stream)++;
    }
    MR_update_io(IO0, IO);
;}
#line 5832 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__term_io__mercury_escape_char_1_0,
		f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0_i18);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_String	Message;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Message = (MR_String) MR_r1;
	MR_save_registers();
{
#line 1317 "io.opt"

    mercury_print_string(Stream, Message);
    MR_update_io(IO0, IO);
;}
#line 5862 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module59)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0);
	MR_init_label1(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0
	Str = (MR_String) MR_r3;
{
#line 218 "string.opt"

    Length = strlen(Str);
;}
#line 5899 "term_io.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0
	Str = (MR_String) MR_r3;
{
#line 218 "string.opt"

    Length = strlen(Str);
;}
#line 5913 "term_io.c"
	MR_r7 = Length;
#undef	MR_PROC_LABEL
	}
	MR_r8 = ((MR_Integer) MR_r7 - (MR_Integer) 0);
	MR_r7 = (MR_Integer) 0;
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r8)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r7;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_6_0);
	}
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module60)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 1;
	MR_np_tailcall_ent(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module61)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0);
	MR_init_label1(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0
	Stream = (MercuryFilePtr) MR_r2;
	Character = (MR_Integer) 34;
	MR_save_registers();
{
#line 1321 "io.opt"

    if (MR_PUTCH(*Stream, Character) < 0) {
        mercury_output_error(Stream);
    }
    if (Character == '\n') {
        MR_line_number(*Stream)++;
    }
    MR_update_io(IO0, IO);
;}
#line 5997 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0,
		f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0_i2);
MR_def_label(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MercuryFilePtr	Stream;
	MR_Char	Character;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_113_117_111_116_101_95_115_116_114_105_110_103_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_50_93_95_48_4_0
	Stream = (MercuryFilePtr) MR_sv(1);
	Character = (MR_Integer) 34;
	MR_save_registers();
{
#line 1321 "io.opt"

    if (MR_PUTCH(*Stream, Character) < 0) {
        mercury_output_error(Stream);
    }
    if (Character == '\n') {
        MR_line_number(*Stream)++;
    }
    MR_update_io(IO0, IO);
;}
#line 6030 "term_io.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module62)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_6_0);
	MR_init_label3(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_6_0,11,3,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_6_0_i13);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_6_0
	Str = (MR_String) MR_r2;
	Index = MR_r3;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 6076 "term_io.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_116_101_114_109_95_105_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_119_114_105_116_101_95_101_115_99_97_112_101_100_95_99_104_97_114_95_95_91_83_116_114_101_97_109_32_61_32_40_105_111_46_111_117_116_112_117_116_95_115_116_114_101_97_109_41_44_32_83_116_97_116_101_32_61_32_40_105_111_46_115_116_97_116_101_41_93_95_48_95_49_95_95_91_49_44_32_50_93_95_48_4_0,
		f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_6_0_i3);
MR_def_label(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_6_0_i11);
MR_def_label(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(term_io_module63)
	MR_init_entry1(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_50_48_95_95_91_52_44_32_53_93_95_48_6_0);
	MR_init_label3(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_50_48_95_95_91_52_44_32_53_93_95_48_6_0,11,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_50_48_95_95_91_52_44_32_53_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_50_48_95_95_91_52_44_32_53_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_50_48_95_95_91_52_44_32_53_93_95_48_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_50_48_95_95_91_52_44_32_53_93_95_48_6_0
	Str = (MR_String) MR_r4;
	Index = MR_r5;
{
#line 507 "string.opt"

    Ch = Str[Index];
;}
#line 6138 "term_io.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(term_io__write_escaped_char_4_0,
		f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_50_48_95_95_91_52_44_32_53_93_95_48_6_0_i3);
MR_def_label(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_50_48_95_95_91_52_44_32_53_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r6 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_50_48_95_95_91_52_44_32_53_93_95_48_6_0_i11);
MR_def_label(f_116_101_114_109_95_105_111_95_95_115_116_114_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_115_117_98_115_116_114_105_110_103_95_50_95_95_104_111_50_48_95_95_91_52_44_32_53_93_95_48_6_0,2)
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
	term_io_module63();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__term_io__init(void);
void mercury__term_io__init_type_tables(void);
void mercury__term_io__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__term_io__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__term_io__init_complexity_procs(void);
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
		mercury_data_term_io__type_ctor_info_read_term_1,
		term_io__read_term_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term_io__type_ctor_info_read_term_0,
		term_io__read_term_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_term_io__type_ctor_info_adjacent_to_graphic_token_0,
		term_io__adjacent_to_graphic_token_0_0);
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
		&mercury_data_term_io__type_ctor_info_read_term_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term_io__type_ctor_info_read_term_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_term_io__type_ctor_info_adjacent_to_graphic_token_0);
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

void mercury__term_io__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__term_io__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
