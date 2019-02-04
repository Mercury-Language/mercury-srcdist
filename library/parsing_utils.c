/*
** Automatically generated from `parsing_utils.m'
** by the Mercury compiler,
** version rotd-2011-07-01, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__parsing_utils__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 202 "array.int"
#include "array.mh"

#line 28 "parsing_utils.c"
#line 140 "io.int2"
#include "io.mh"

#line 32 "parsing_utils.c"
#line 150 "io.int2"
#include "string.mh"

#line 36 "parsing_utils.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 40 "parsing_utils.c"
#line 30 "time.int2"
#include "time.mh"

#line 44 "parsing_utils.c"
#line 59 "array.opt"
#include "stm_builtin.mh"

#line 48 "parsing_utils.c"
#line 61 "array.opt"
#include "store.mh"

#line 52 "parsing_utils.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 56 "parsing_utils.c"
#line 156 "io.opt"
#include "dir.mh"

#line 60 "parsing_utils.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 64 "parsing_utils.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 68 "parsing_utils.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 72 "parsing_utils.c"
#line 3 "float.opt"
#include "float.mh"

#line 76 "parsing_utils.c"
#line 3 "math.opt"
#include "math.mh"

#line 80 "parsing_utils.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 84 "parsing_utils.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 88 "parsing_utils.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 92 "parsing_utils.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 96 "parsing_utils.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 100 "parsing_utils.c"
#line 4 "char.opt"
#include "char.mh"

#line 104 "parsing_utils.c"
#line 4 "int.opt"
#include "int.mh"

#line 108 "parsing_utils.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "parsing_utils.c"
#line 113 "parsing_utils.c"
#include "parsing_utils.mh"

#line 116 "parsing_utils.c"
#line 117 "parsing_utils.c"
#ifndef PARSING_UTILS_DECL_GUARD
#define PARSING_UTILS_DECL_GUARD

#line 121 "parsing_utils.c"
#line 122 "parsing_utils.c"

#endif
#line 125 "parsing_utils.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_parsing_utils__type_ctor_info_fail_message_info_0,
	mercury_data_parsing_utils__type_ctor_info_line_numbers_0,
	mercury_data_parsing_utils__type_ctor_info_parse_result_1,
	mercury_data_parsing_utils__type_ctor_info_parser_1,
	mercury_data_parsing_utils__type_ctor_info_parser_with_state_2,
	mercury_data_parsing_utils__type_ctor_info_ps_0,
	mercury_data_parsing_utils__type_ctor_info_skip_whitespace_pred_0,
	mercury_data_parsing_utils__type_ctor_info_src_0;
MR_decl_label6(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0, 41,3,5,7,2,1)
MR_decl_label6(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0, 41,3,5,7,2,1)
MR_decl_label6(parsing_utils__brackets_7_0, 2,4,6,8,10,1)
MR_decl_label6(parsing_utils__brackets_9_0, 2,4,6,8,10,1)
MR_decl_label2(parsing_utils__char_in_class_5_0, 2,1)
MR_decl_label7(parsing_utils__digits_2_5_0, 49,3,7,9,5,11,2)
MR_decl_label1(parsing_utils__eof_4_0, 1)
MR_decl_label4(parsing_utils__fail_with_message_5_0, 4,5,8,1)
MR_decl_label2(parsing_utils__float_literal_4_0, 2,1)
MR_decl_label10(parsing_utils__float_literal_as_string_4_0, 3,2,5,6,10,12,8,14,16,17)
MR_decl_label10(parsing_utils__float_literal_as_string_4_0, 19,21,25,27,23,29,31,32,35,40)
MR_decl_label10(parsing_utils__float_literal_as_string_4_0, 39,42,43,47,49,45,51,53,54,34)
MR_decl_label4(parsing_utils__float_literal_as_string_4_0, 56,57,59,1)
MR_decl_label5(parsing_utils__identifier_6_0, 2,6,8,10,1)
MR_decl_label3(parsing_utils__identifier_2_5_0, 24,3,2)
MR_decl_label5(parsing_utils__ikeyword_6_0, 2,5,17,4,9)
MR_decl_label4(parsing_utils__imatch_string_4_0, 2,3,6,1)
MR_decl_label10(parsing_utils__imatch_string_2_5_0, 35,3,4,7,5,9,12,10,14,17)
MR_decl_label1(parsing_utils__imatch_string_2_5_0, 1)
MR_decl_label3(parsing_utils__input_substring_4_0, 2,3,1)
MR_decl_label3(parsing_utils__int_literal_4_0, 2,4,1)
MR_decl_label10(parsing_utils__int_literal_as_string_4_0, 3,2,9,10,14,16,12,18,20,21)
MR_decl_label10(parsing_utils__int_literal_as_string_4_0, 24,26,30,32,28,34,36,37,23,39)
MR_decl_label2(parsing_utils__int_literal_as_string_4_0, 41,1)
MR_decl_label5(parsing_utils__keyword_6_0, 2,5,17,4,9)
MR_decl_label4(parsing_utils__match_string_4_0, 2,3,6,1)
MR_decl_label2(parsing_utils__match_string_2_5_0, 5,1)
MR_decl_label2(parsing_utils__new_src_and_ps_3_0, 4,5)
MR_decl_label2(parsing_utils__new_src_and_ps_4_0, 3,4)
MR_decl_label3(parsing_utils__next_char_4_0, 4,5,1)
MR_decl_label6(parsing_utils__offset_to_line_number_and_position_2_6_0, 26,3,4,2,8,10)
MR_decl_label4(parsing_utils__one_or_more_5_0, 2,4,6,1)
MR_decl_label4(parsing_utils__one_or_more_7_0, 2,4,6,1)
MR_decl_label3(parsing_utils__optional_5_0, 4,2,1)
MR_decl_label3(parsing_utils__optional_7_0, 4,2,1)
MR_decl_label9(parsing_utils__parse_3_0, 4,5,10,8,13,14,15,17,18)
MR_decl_label8(parsing_utils__parse_4_0, 2,5,3,8,9,10,12,13)
MR_decl_label3(parsing_utils__punct_5_0, 2,4,1)
MR_decl_label5(parsing_utils__separated_list_6_0, 4,6,8,2,1)
MR_decl_label5(parsing_utils__separated_list_8_0, 4,6,8,2,1)
MR_decl_label4(parsing_utils__skip_to_eol_4_0, 18,2,8,1)
MR_decl_label2(parsing_utils__skip_whitespace_3_0, 2,1)
MR_decl_label5(parsing_utils__string_literal_5_0, 2,4,8,10,1)
MR_decl_label6(parsing_utils__string_literal_2_5_0, 34,2,7,23,14,1)
MR_decl_label5(parsing_utils__whitespace_4_0, 32,3,5,2,1)
MR_decl_label3(parsing_utils__zero_or_more_5_0, 2,4,1)
MR_decl_label3(parsing_utils__zero_or_more_7_0, 2,4,1)
MR_decl_label4(parsing_utils__zero_or_more_2_6_0, 26,4,2,1)
MR_decl_label4(parsing_utils__zero_or_more_2_8_0, 26,4,2,1)
MR_decl_label4(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_56_95_95_91_50_93_95_48_4_0, 19,4,3,2)
MR_decl_label2(fn__parsing_utils__IntroducedFrom__func__new_src_and_ps__408__1_3_0, 3,2)
MR_decl_label1(fn__parsing_utils__src_to_line_numbers_1_0, 3)
MR_decl_label2(__Unify___parsing_utils__fail_message_info_0_0, 6,1)
MR_decl_label4(__Unify___parsing_utils__parse_result_1_0, 7,18,5,1)
MR_decl_label4(__Unify___parsing_utils__src_0_0, 4,6,10,1)
MR_decl_label6(__Compare___parsing_utils__fail_message_info_0_0, 3,2,6,7,9,31)
MR_decl_label10(__Compare___parsing_utils__parse_result_1_0, 9,14,15,17,20,48,7,5,27,29)
MR_decl_label2(__Compare___parsing_utils__ps_0_0, 2,3)
MR_decl_label10(__Compare___parsing_utils__src_0_0, 3,2,6,7,9,14,15,18,22,26)
MR_decl_label1(__Compare___parsing_utils__src_0_0, 66)
MR_def_extern_entry(parsing_utils__new_src_and_ps_4_0)
MR_def_extern_entry(fn__parsing_utils__src_to_line_numbers_1_0)
MR_def_extern_entry(parsing_utils__offset_to_line_number_and_position_2_6_0)
MR_def_extern_entry(parsing_utils__offset_to_line_number_and_position_4_0)
MR_def_extern_entry(parsing_utils__parse_4_0)
MR_def_extern_entry(parsing_utils__parse_3_0)
MR_def_extern_entry(parsing_utils__new_src_and_ps_3_0)
MR_def_extern_entry(parsing_utils__current_offset_4_0)
MR_def_extern_entry(parsing_utils__input_substring_4_0)
MR_def_extern_entry(parsing_utils__next_char_4_0)
MR_def_extern_entry(parsing_utils__char_in_class_5_0)
MR_def_extern_entry(parsing_utils__skip_whitespace_3_0)
MR_decl_static(parsing_utils__match_string_2_5_0)
MR_def_extern_entry(parsing_utils__match_string_4_0)
MR_def_extern_entry(parsing_utils__punct_5_0)
MR_def_extern_entry(parsing_utils__keyword_6_0)
MR_decl_static(parsing_utils__imatch_string_2_5_0)
MR_def_extern_entry(parsing_utils__imatch_string_4_0)
MR_def_extern_entry(parsing_utils__ikeyword_6_0)
MR_def_extern_entry(parsing_utils__identifier_2_5_0)
MR_def_extern_entry(parsing_utils__identifier_6_0)
MR_def_extern_entry(parsing_utils__whitespace_4_0)
MR_def_extern_entry(parsing_utils__skip_to_eol_4_0)
MR_def_extern_entry(parsing_utils__eof_4_0)
MR_decl_static(parsing_utils__digits_2_5_0)
MR_def_extern_entry(parsing_utils__float_literal_as_string_4_0)
MR_def_extern_entry(parsing_utils__float_literal_4_0)
MR_def_extern_entry(parsing_utils__optional_5_0)
MR_def_extern_entry(parsing_utils__int_literal_as_string_4_0)
MR_def_extern_entry(parsing_utils__int_literal_4_0)
MR_def_extern_entry(parsing_utils__string_literal_2_5_0)
MR_def_extern_entry(parsing_utils__string_literal_5_0)
MR_def_extern_entry(parsing_utils__zero_or_more_2_6_0)
MR_def_extern_entry(parsing_utils__zero_or_more_5_0)
MR_def_extern_entry(parsing_utils__one_or_more_5_0)
MR_def_extern_entry(parsing_utils__brackets_7_0)
MR_def_extern_entry(parsing_utils__separated_list_6_0)
MR_def_extern_entry(parsing_utils__comma_separated_list_5_0)
MR_def_extern_entry(parsing_utils__fail_with_message_5_0)
MR_def_extern_entry(parsing_utils__fail_with_message_6_0)
MR_def_extern_entry(parsing_utils__optional_7_0)
MR_def_extern_entry(parsing_utils__zero_or_more_2_8_0)
MR_def_extern_entry(parsing_utils__zero_or_more_7_0)
MR_def_extern_entry(parsing_utils__one_or_more_7_0)
MR_def_extern_entry(parsing_utils__brackets_9_0)
MR_def_extern_entry(parsing_utils__separated_list_8_0)
MR_def_extern_entry(parsing_utils__comma_separated_list_7_0)
MR_def_extern_entry(__Unify___parsing_utils__fail_message_info_0_0)
MR_def_extern_entry(__Compare___parsing_utils__fail_message_info_0_0)
MR_def_extern_entry(__Unify___parsing_utils__line_numbers_0_0)
MR_def_extern_entry(__Compare___parsing_utils__line_numbers_0_0)
MR_def_extern_entry(__Unify___parsing_utils__parse_result_1_0)
MR_def_extern_entry(__Compare___parsing_utils__parse_result_1_0)
MR_def_extern_entry(__Unify___parsing_utils__parser_1_0)
MR_def_extern_entry(__Compare___parsing_utils__parser_1_0)
MR_def_extern_entry(__Unify___parsing_utils__parser_with_state_2_0)
MR_def_extern_entry(__Compare___parsing_utils__parser_with_state_2_0)
MR_def_extern_entry(__Unify___parsing_utils__ps_0_0)
MR_def_extern_entry(__Compare___parsing_utils__ps_0_0)
MR_def_extern_entry(__Unify___parsing_utils__skip_whitespace_pred_0_0)
MR_def_extern_entry(__Compare___parsing_utils__skip_whitespace_pred_0_0)
MR_def_extern_entry(__Unify___parsing_utils__src_0_0)
MR_def_extern_entry(__Compare___parsing_utils__src_0_0)
MR_decl_static(fn__parsing_utils__IntroducedFrom__func__new_src_and_ps__408__1_3_0)
MR_def_extern_entry(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_117_114_114_101_110_116_95_111_102_102_115_101_116_95_95_91_49_93_95_48_4_0)
MR_def_extern_entry(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_105_108_95_119_105_116_104_95_109_101_115_115_97_103_101_95_95_91_54_93_95_48_6_0)
MR_decl_static(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_56_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0)
MR_decl_static(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
0,
MR_tbmkword(0, 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parsing_utils__type_ctor_info_src_0;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
4,
{
MR_CTOR0_ADDR(parsing_utils, src),
MR_CTOR0_ADDR(unit, unit),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parsing_utils__new_src_and_ps_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parsing_utils__type_ctor_info_src_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__parsing_utils__parse_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
static const MR_UserClosureId
mercury_data__closure_layout__parsing_utils__parse_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__parsing_utils__new_src_and_ps_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parsing_utils__new_src_and_ps_3_0_2;
static const struct mercury_type_3 mercury_common_3[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__parsing_utils__new_src_and_ps_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,0),
MR_CTOR0_ADDR(parsing_utils, src),
MR_INT_CTOR_ADDR,
MR_COMMON(2,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parsing_utils__parse_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(parsing_utils, src),
MR_CTOR0_ADDR(unit, unit),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parsing_utils__parse_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,0),
MR_CTOR0_ADDR(parsing_utils, src),
MR_INT_CTOR_ADDR,
MR_COMMON(2,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parsing_utils__new_src_and_ps_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(parsing_utils, src),
MR_CTOR0_ADDR(unit, unit),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parsing_utils__new_src_and_ps_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,0),
MR_CTOR0_ADDR(parsing_utils, src),
MR_INT_CTOR_ADDR,
MR_COMMON(2,0)
}
},
};

static const struct mercury_type_4 mercury_common_4[2] =
{
{
MR_COMMON(3,1),
MR_ENTRY_AP(parsing_utils__whitespace_4_0),
0
},
{
MR_COMMON(3,3),
MR_ENTRY_AP(parsing_utils__whitespace_4_0),
0
},
};

static const struct mercury_type_5 mercury_common_5[2] =
{
{
MR_COMMON(3,2),
MR_ENTRY_AP(fn__parsing_utils__IntroducedFrom__func__new_src_and_ps__408__1_3_0),
1,
MR_TAG_COMMON(0,4,0)
},
{
MR_COMMON(3,4),
MR_ENTRY_AP(fn__parsing_utils__IntroducedFrom__func__new_src_and_ps__408__1_3_0),
1,
MR_TAG_COMMON(0,4,1)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_PseudoTypeInfo mercury_data_parsing_utils__field_types_fail_message_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_parsing_utils__du_functor_desc_fail_message_info_0_0 = {
	"fail_message_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parsing_utils__field_types_fail_message_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parsing_utils__du_stag_ordered_fail_message_info_0_0[] = {
	&mercury_data_parsing_utils__du_functor_desc_fail_message_info_0_0

};

const MR_DuPtagLayout mercury_data_parsing_utils__du_ptag_ordered_fail_message_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parsing_utils__du_stag_ordered_fail_message_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parsing_utils__du_name_ordered_fail_message_info_0[] = {
	&mercury_data_parsing_utils__du_functor_desc_fail_message_info_0_0
};

const MR_Integer mercury_data_parsing_utils__functor_number_map_fail_message_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parsing_utils__type_ctor_info_fail_message_info_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parsing_utils__fail_message_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parsing_utils__fail_message_info_0_0)),
	"parsing_utils",
	"fail_message_info",
	{ (void *)mercury_data_parsing_utils__du_name_ordered_fail_message_info_0 },
	{ (void *)mercury_data_parsing_utils__du_ptag_ordered_fail_message_info_0 },
	1,
	4,
	mercury_data_parsing_utils__functor_number_map_fail_message_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_array__type_ctor_info_array_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1builtin__type_ctor_info_int_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parsing_utils__type_ctor_info_line_numbers_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parsing_utils__line_numbers_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parsing_utils__line_numbers_0_0)),
	"parsing_utils",
	"line_numbers",
	{ 0 },
	{ (void *)&mercury_data_array__ti_array_1builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parsing_utils__field_types_parse_result_1_0[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_parsing_utils__du_functor_desc_parse_result_1_0 = {
	"ok",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parsing_utils__field_types_parse_result_1_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parsing_utils__field_types_parse_result_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parsing_utils__field_names_parse_result_1_1[] = {
	"error_message",
	"error_line",
	"error_col"
};

static const MR_DuFunctorDesc mercury_data_parsing_utils__du_functor_desc_parse_result_1_1 = {
	"error",
	3,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_parsing_utils__field_types_parse_result_1_1,
	mercury_data_parsing_utils__field_names_parse_result_1_1,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parsing_utils__du_stag_ordered_parse_result_1_0[] = {
	&mercury_data_parsing_utils__du_functor_desc_parse_result_1_0

};

const MR_DuFunctorDescPtr mercury_data_parsing_utils__du_stag_ordered_parse_result_1_1[] = {
	&mercury_data_parsing_utils__du_functor_desc_parse_result_1_1

};

const MR_DuPtagLayout mercury_data_parsing_utils__du_ptag_ordered_parse_result_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parsing_utils__du_stag_ordered_parse_result_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parsing_utils__du_stag_ordered_parse_result_1_1 }

};

const MR_DuFunctorDescPtr mercury_data_parsing_utils__du_name_ordered_parse_result_1[] = {
	&mercury_data_parsing_utils__du_functor_desc_parse_result_1_1,
	&mercury_data_parsing_utils__du_functor_desc_parse_result_1_0
};

const MR_Integer mercury_data_parsing_utils__functor_number_map_parse_result_1[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parsing_utils__type_ctor_info_parse_result_1 = {
	1,
	14,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parsing_utils__parse_result_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parsing_utils__parse_result_1_0)),
	"parsing_utils",
	"parse_result",
	{ (void *)mercury_data_parsing_utils__du_name_ordered_parse_result_1 },
	{ (void *)mercury_data_parsing_utils__du_ptag_ordered_parse_result_1 },
	2,
	4,
	mercury_data_parsing_utils__functor_number_map_parse_result_1
};

static const MR_VA_PseudoTypeInfo_Struct4 mercury_data___vpti_pred_4__plain_parsing_utils__type_ctor_info_src_0__pseudo_1__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	4,
{	(MR_PseudoTypeInfo) &mercury_data_parsing_utils__type_ctor_info_src_0,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parsing_utils__type_ctor_info_parser_1 = {
	1,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parsing_utils__parser_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parsing_utils__parser_1_0)),
	"parsing_utils",
	"parser",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_4__plain_parsing_utils__type_ctor_info_src_0__pseudo_1__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_VA_PseudoTypeInfo_Struct6 mercury_data___vpti_pred_6__plain_parsing_utils__type_ctor_info_src_0__pseudo_1__pseudo_2__pseudo_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	6,
{	(MR_PseudoTypeInfo) &mercury_data_parsing_utils__type_ctor_info_src_0,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parsing_utils__type_ctor_info_parser_with_state_2 = {
	2,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parsing_utils__parser_with_state_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parsing_utils__parser_with_state_2_0)),
	"parsing_utils",
	"parser_with_state",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_6__plain_parsing_utils__type_ctor_info_src_0__pseudo_1__pseudo_2__pseudo_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_parsing_utils__type_ctor_info_ps_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parsing_utils__ps_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parsing_utils__ps_0_0)),
	"parsing_utils",
	"ps",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_VA_TypeInfo_Struct4 mercury_data___vti_pred_4parsing_utils__type_ctor_info_src_0unit__type_ctor_info_unit_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	4,
{	(MR_TypeInfo) &mercury_data_parsing_utils__type_ctor_info_src_0,
	(MR_TypeInfo) &mercury_data_unit__type_ctor_info_unit_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parsing_utils__type_ctor_info_skip_whitespace_pred_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parsing_utils__skip_whitespace_pred_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parsing_utils__skip_whitespace_pred_0_0)),
	"parsing_utils",
	"skip_whitespace_pred",
	{ 0 },
	{ (void *)&mercury_data___vti_pred_4parsing_utils__type_ctor_info_src_0unit__type_ctor_info_unit_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

static const MR_VA_TypeInfo_Struct3 mercury_data___vti_func_3parsing_utils__type_ctor_info_src_0builtin__type_ctor_info_int_0maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
	&mercury_data_builtin__type_ctor_info_func_0,
	3,
{	(MR_TypeInfo) &mercury_data_parsing_utils__type_ctor_info_src_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mutvar__type_ctor_info_mutvar_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_mutvar__ti_mutvar_1builtin__type_ctor_info_int_0 = {
	&mercury_data_mutvar__type_ctor_info_mutvar_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parsing_utils__type_ctor_info_fail_message_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_mutvar__ti_mutvar_1parsing_utils__type_ctor_info_fail_message_info_0 = {
	&mercury_data_mutvar__type_ctor_info_mutvar_1,
{	(MR_TypeInfo) &mercury_data_parsing_utils__type_ctor_info_fail_message_info_0
}};

const MR_PseudoTypeInfo mercury_data_parsing_utils__field_types_src_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data___vti_func_3parsing_utils__type_ctor_info_src_0builtin__type_ctor_info_int_0maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mutvar__ti_mutvar_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mutvar__ti_mutvar_1parsing_utils__type_ctor_info_fail_message_info_0
};

const MR_ConstString mercury_data_parsing_utils__field_names_src_0_0[] = {
	"input_length",
	"input_string",
	"skip_ws_func",
	"furthest_offset",
	"last_fail_message"
};

static const MR_DuFunctorDesc mercury_data_parsing_utils__du_functor_desc_src_0_0 = {
	"src",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parsing_utils__field_types_src_0_0,
	mercury_data_parsing_utils__field_names_src_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parsing_utils__du_stag_ordered_src_0_0[] = {
	&mercury_data_parsing_utils__du_functor_desc_src_0_0

};

const MR_DuPtagLayout mercury_data_parsing_utils__du_ptag_ordered_src_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parsing_utils__du_stag_ordered_src_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parsing_utils__du_name_ordered_src_0[] = {
	&mercury_data_parsing_utils__du_functor_desc_src_0_0
};

const MR_Integer mercury_data_parsing_utils__functor_number_map_src_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parsing_utils__type_ctor_info_src_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parsing_utils__src_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parsing_utils__src_0_0)),
	"parsing_utils",
	"src",
	{ (void *)mercury_data_parsing_utils__du_name_ordered_src_0 },
	{ (void *)mercury_data_parsing_utils__du_ptag_ordered_src_0 },
	1,
	4,
	mercury_data_parsing_utils__functor_number_map_src_0
};


static const MR_UserClosureId
mercury_data__closure_layout__parsing_utils__new_src_and_ps_3_0_2 = {
{
MR_FUNCTION,
"parsing_utils",
"parsing_utils",
"lambda_parsing_utils_m_408",
4,
0
},
"parsing_utils",
"parsing_utils.m",
404,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__parsing_utils__new_src_and_ps_3_0_1 = {
{
MR_PREDICATE,
"parsing_utils",
"parsing_utils",
"whitespace",
4,
0
},
"parsing_utils",
"",
0,
"-1"
};

static const MR_UserClosureId
mercury_data__closure_layout__parsing_utils__parse_3_0_2 = {
{
MR_FUNCTION,
"parsing_utils",
"parsing_utils",
"lambda_parsing_utils_m_408",
4,
0
},
"parsing_utils",
"parsing_utils.m",
404,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__parsing_utils__parse_3_0_1 = {
{
MR_PREDICATE,
"parsing_utils",
"parsing_utils",
"whitespace",
4,
0
},
"parsing_utils",
"",
0,
"-1"
};

static const MR_UserClosureId
mercury_data__closure_layout__parsing_utils__new_src_and_ps_4_0_1 = {
{
MR_FUNCTION,
"parsing_utils",
"parsing_utils",
"lambda_parsing_utils_m_408",
4,
0
},
"parsing_utils",
"parsing_utils.m",
404,
"14"
};


MR_decl_entry(mutvar__new_mutvar_2_1);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

MR_BEGIN_MODULE(parsing_utils_module0)
	MR_init_entry1(parsing_utils__new_src_and_ps_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__new_src_and_ps_4_0);
	MR_init_label2(parsing_utils__new_src_and_ps_4_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_src_and_ps'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__new_src_and_ps_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parsing_utils, fail_message_info);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(mutvar__new_mutvar_2_1,
		parsing_utils__new_src_and_ps_4_0_i3);
MR_def_label(parsing_utils__new_src_and_ps_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(mutvar__new_mutvar_2_1,
		parsing_utils__new_src_and_ps_4_0_i4);
MR_def_label(parsing_utils__new_src_and_ps_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__parsing_utils__IntroducedFrom__func__new_src_and_ps__408__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__parsing_utils__new_src_and_ps_4_0
	Str = (MR_String) MR_sv(1);
{
#line 230 "string.opt"

    Length = strlen(Str);
;}
#line 943 "parsing_utils.c"
	MR_tempr2 = Length;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tfield(0, MR_tempr3, 4) = MR_sv(3);
	MR_r1 = MR_tempr3;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__from_list_2_0);

MR_BEGIN_MODULE(parsing_utils_module1)
	MR_init_entry1(fn__parsing_utils__src_to_line_numbers_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parsing_utils__src_to_line_numbers_1_0);
	MR_init_label1(fn__parsing_utils__src_to_line_numbers_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'src_to_line_numbers'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parsing_utils__src_to_line_numbers_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = ((MR_Integer) MR_tfield(1, MR_tempr1, 0) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_56_95_95_91_50_93_95_48_4_0,
		fn__parsing_utils__src_to_line_numbers_1_0_i3);
MR_def_label(fn__parsing_utils__src_to_line_numbers_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(array__from_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(array__lookup_3_0);

MR_BEGIN_MODULE(parsing_utils_module2)
	MR_init_entry1(parsing_utils__offset_to_line_number_and_position_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__offset_to_line_number_and_position_2_6_0);
	MR_init_label6(parsing_utils__offset_to_line_number_and_position_2_6_0,26,3,4,2,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'offset_to_line_number_and_position_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__offset_to_line_number_and_position_2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(parsing_utils__offset_to_line_number_and_position_2_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(parsing_utils__offset_to_line_number_and_position_2_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = (((MR_Integer) MR_r2 + (MR_Integer) MR_tempr1) / (MR_Integer) 2);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		parsing_utils__offset_to_line_number_and_position_2_6_0_i3);
MR_def_label(parsing_utils__offset_to_line_number_and_position_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(parsing_utils__offset_to_line_number_and_position_2_6_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(parsing_utils__offset_to_line_number_and_position_2_6_0_i26);
MR_def_label(parsing_utils__offset_to_line_number_and_position_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(parsing_utils__offset_to_line_number_and_position_2_6_0_i26);
MR_def_label(parsing_utils__offset_to_line_number_and_position_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(parsing_utils__offset_to_line_number_and_position_2_6_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = (((MR_Integer) 1 + (MR_Integer) MR_r4) - (MR_Integer) 0);
	MR_decr_sp_and_return(6);
MR_def_label(parsing_utils__offset_to_line_number_and_position_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(array__lookup_3_0,
		parsing_utils__offset_to_line_number_and_position_2_6_0_i10);
MR_def_label(parsing_utils__offset_to_line_number_and_position_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) 1 + (MR_Integer) MR_sv(2));
	MR_r2 = (((MR_Integer) 1 + (MR_Integer) MR_sv(4)) - ((MR_Integer) MR_tempr1 + (MR_Integer) 1));
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module3)
	MR_init_entry1(parsing_utils__offset_to_line_number_and_position_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__offset_to_line_number_and_position_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'offset_to_line_number_and_position'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__offset_to_line_number_and_position_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__parsing_utils__offset_to_line_number_and_position_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r1, Array);
{
#line 211 "array.opt"

    Max = Array->size;
;}
#line 1128 "parsing_utils.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(parsing_utils__offset_to_line_number_and_position_2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);
MR_decl_entry(mutvar__get_mutvar_2_0);

MR_BEGIN_MODULE(parsing_utils_module4)
	MR_init_entry1(parsing_utils__parse_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__parse_4_0);
	MR_init_label8(parsing_utils__parse_4_0,2,5,3,8,9,10,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__parse_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(parsing_utils__new_src_and_ps_4_0,
		parsing_utils__parse_4_0_i2);
MR_def_label(parsing_utils__parse_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__parse_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__parse_4_0_i5);
MR_def_label(parsing_utils__parse_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__parse_4_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(parsing_utils__parse_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parsing_utils, fail_message_info);
	MR_r2 = MR_tfield(0, MR_sv(1), 4);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		parsing_utils__parse_4_0_i8);
MR_def_label(parsing_utils__parse_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_sv(1), 3);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		parsing_utils__parse_4_0_i9);
MR_def_label(parsing_utils__parse_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(parsing_utils__parse_4_0_i10);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__parsing_utils__src_to_line_numbers_1_0,
		parsing_utils__parse_4_0_i12);
MR_def_label(parsing_utils__parse_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__parsing_utils__src_to_line_numbers_1_0,
		parsing_utils__parse_4_0_i12);
MR_def_label(parsing_utils__parse_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__parsing_utils__parse_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r1, Array);
{
#line 211 "array.opt"

    Max = Array->size;
;}
#line 1241 "parsing_utils.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(parsing_utils__offset_to_line_number_and_position_2_6_0,
		parsing_utils__parse_4_0_i13);
MR_def_label(parsing_utils__parse_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_r2;
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__parsing_utils__parse_4_0
	X = MR_tempr1;
{
#line 102 "builtin.opt"

    Y = X;
;}
#line 1269 "parsing_utils.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module5)
	MR_init_entry1(parsing_utils__parse_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__parse_3_0);
	MR_init_label9(parsing_utils__parse_3_0,4,5,10,8,13,14,15,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__parse_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parsing_utils, fail_message_info);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(mutvar__new_mutvar_2_1,
		parsing_utils__parse_3_0_i4);
MR_def_label(parsing_utils__parse_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(mutvar__new_mutvar_2_1,
		parsing_utils__parse_3_0_i5);
MR_def_label(parsing_utils__parse_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__parsing_utils__parse_3_0
	Str = (MR_String) MR_sv(1);
{
#line 230 "string.opt"

    Length = strlen(Str);
;}
#line 1326 "parsing_utils.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_tfield(0, MR_r2, 4) = MR_sv(4);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__parse_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__parse_3_0_i10);
MR_def_label(parsing_utils__parse_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__parse_3_0_i8);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(parsing_utils__parse_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parsing_utils, fail_message_info);
	MR_r2 = MR_tfield(0, MR_r2, 4);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		parsing_utils__parse_3_0_i13);
MR_def_label(parsing_utils__parse_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_sv(1), 3);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		parsing_utils__parse_3_0_i14);
MR_def_label(parsing_utils__parse_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(parsing_utils__parse_3_0_i15);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__parsing_utils__src_to_line_numbers_1_0,
		parsing_utils__parse_3_0_i17);
MR_def_label(parsing_utils__parse_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__parsing_utils__src_to_line_numbers_1_0,
		parsing_utils__parse_3_0_i17);
MR_def_label(parsing_utils__parse_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_ArrayPtr	Array;
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__parsing_utils__parse_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, MR_r1, Array);
{
#line 211 "array.opt"

    Max = Array->size;
;}
#line 1402 "parsing_utils.c"
	MR_tempr1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(parsing_utils__offset_to_line_number_and_position_2_6_0,
		parsing_utils__parse_3_0_i18);
MR_def_label(parsing_utils__parse_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_r2;
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__parsing_utils__parse_3_0
	X = MR_tempr1;
{
#line 102 "builtin.opt"

    Y = X;
;}
#line 1430 "parsing_utils.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module6)
	MR_init_entry1(parsing_utils__new_src_and_ps_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__new_src_and_ps_3_0);
	MR_init_label2(parsing_utils__new_src_and_ps_3_0,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_src_and_ps'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__new_src_and_ps_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parsing_utils, fail_message_info);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(mutvar__new_mutvar_2_1,
		parsing_utils__new_src_and_ps_3_0_i4);
MR_def_label(parsing_utils__new_src_and_ps_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(mutvar__new_mutvar_2_1,
		parsing_utils__new_src_and_ps_3_0_i5);
MR_def_label(parsing_utils__new_src_and_ps_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__parsing_utils__new_src_and_ps_3_0
	Str = (MR_String) MR_sv(1);
{
#line 230 "string.opt"

    Length = strlen(Str);
;}
#line 1486 "parsing_utils.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_tfield(0, MR_tempr2, 3) = MR_r1;
	MR_tfield(0, MR_tempr2, 4) = MR_sv(3);
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module7)
	MR_init_entry1(parsing_utils__current_offset_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__current_offset_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'current_offset'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__current_offset_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_117_114_114_101_110_116_95_111_102_102_115_101_116_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mutvar__set_mutvar_2_0);

MR_BEGIN_MODULE(parsing_utils_module8)
	MR_init_entry1(parsing_utils__input_substring_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__input_substring_4_0);
	MR_init_label3(parsing_utils__input_substring_4_0,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'input_substring'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__input_substring_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(parsing_utils__input_substring_4_0_i1);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	End;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__parsing_utils__input_substring_4_0
	Str = (MR_String) MR_tempr1;
	Start = MR_r2;
	End = MR_r3;
{
#line 779 "string.opt"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 1572 "parsing_utils.c"
	MR_tempr2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(0, MR_r1, 3);
	MR_sv(4) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		parsing_utils__input_substring_4_0_i2);
MR_def_label(parsing_utils__input_substring_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(1) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(parsing_utils__input_substring_4_0_i3);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		parsing_utils__input_substring_4_0_i3);
MR_def_label(parsing_utils__input_substring_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(parsing_utils__input_substring_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module9)
	MR_init_entry1(parsing_utils__next_char_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__next_char_4_0);
	MR_init_label3(parsing_utils__next_char_4_0,4,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'next_char'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__next_char_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(parsing_utils__next_char_4_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	NextIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__parsing_utils__next_char_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_tempr1;
	Index = MR_r2;
{
#line 585 "string.opt"

    int pos = Index;
    Ch = MR_utf8_get_next(Str, &pos);
    NextIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 1651 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(parsing_utils__next_char_4_0_i1);
	MR_tempr1 = NextIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(0, MR_r1, 3);
	MR_sv(5) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		parsing_utils__next_char_4_0_i4);
MR_def_label(parsing_utils__next_char_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(2) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(parsing_utils__next_char_4_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		parsing_utils__next_char_4_0_i5);
MR_def_label(parsing_utils__next_char_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(parsing_utils__next_char_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module10)
	MR_init_entry1(parsing_utils__char_in_class_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__char_in_class_5_0);
	MR_init_label2(parsing_utils__char_in_class_5_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'char_in_class'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__char_in_class_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__char_in_class_5_0_i2);
MR_def_label(parsing_utils__char_in_class_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__char_in_class_5_0_i1);
	}
	{
	MR_String	Str;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__parsing_utils__char_in_class_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_sv(1);
	Ch = MR_r2;
{
#line 531 "string.opt"

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }
;}
#line 1747 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(parsing_utils__char_in_class_5_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__char_in_class_5_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module11)
	MR_init_entry1(parsing_utils__skip_whitespace_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__skip_whitespace_3_0);
	MR_init_label2(parsing_utils__skip_whitespace_3_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'skip_whitespace'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__skip_whitespace_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__skip_whitespace_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__skip_whitespace_3_0_i2);
MR_def_label(parsing_utils__skip_whitespace_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parsing_utils__skip_whitespace_3_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__skip_whitespace_3_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module12)
	MR_init_entry1(parsing_utils__match_string_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__match_string_2_5_0);
	MR_init_label2(parsing_utils__match_string_2_5_0,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'match_string_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parsing_utils__match_string_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(parsing_utils__match_string_2_5_0_i5);
	}
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__parsing_utils__match_string_2_5_0
	Str = (MR_String) MR_r3;
	Index = MR_r2;
{
#line 609 "string.opt"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];
;}
#line 1850 "parsing_utils.c"
	MR_r6 = Code;
#undef	MR_PROC_LABEL
	}
	MR_r7 = ((MR_Integer) MR_r4 + (MR_Integer) MR_r2);
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__parsing_utils__match_string_2_5_0
	Str = (MR_String) MR_r5;
	Index = MR_r7;
{
#line 609 "string.opt"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];
;}
#line 1868 "parsing_utils.c"
	MR_r7 = Code;
#undef	MR_PROC_LABEL
	}
	if ((MR_r6 != MR_r7)) {
		MR_GOTO_LAB(parsing_utils__match_string_2_5_0_i1);
	}
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_np_localtailcall(parsing_utils__match_string_2_5_0);
MR_def_label(parsing_utils__match_string_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__match_string_2_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module13)
	MR_init_entry1(parsing_utils__match_string_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__match_string_4_0);
	MR_init_label4(parsing_utils__match_string_4_0,2,3,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'match_string'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__match_string_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_r2, 3);
	MR_sv(5) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		parsing_utils__match_string_4_0_i2);
MR_def_label(parsing_utils__match_string_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(parsing_utils__match_string_4_0_i3);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		parsing_utils__match_string_4_0_i3);
MR_def_label(parsing_utils__match_string_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(3);
	MR_r4 = MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__parsing_utils__match_string_4_0
	Str = (MR_String) MR_r3;
{
#line 230 "string.opt"

    Length = strlen(Str);
;}
#line 1944 "parsing_utils.c"
	MR_r1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_r1);
	MR_tempr4 = MR_sv(2);
	MR_tempr3 = MR_tfield(0, MR_tempr4, 0);
	if (((MR_Integer) MR_tempr2 > (MR_Integer) MR_tempr3)) {
		MR_GOTO_LAB(parsing_utils__match_string_4_0_i1);
	}
	MR_sv(3) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_r5 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(parsing_utils__match_string_2_5_0,
		parsing_utils__match_string_4_0_i6);
MR_def_label(parsing_utils__match_string_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__match_string_4_0_i1);
	}
	MR_r2 = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_sv(1));
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__match_string_4_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module14)
	MR_init_entry1(parsing_utils__punct_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__punct_5_0);
	MR_init_label3(parsing_utils__punct_5_0,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'punct'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__punct_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(parsing_utils__match_string_4_0,
		parsing_utils__punct_5_0_i2);
MR_def_label(parsing_utils__punct_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__punct_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__punct_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__punct_5_0_i4);
MR_def_label(parsing_utils__punct_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parsing_utils__punct_5_0_i1);
	}
	MR_r3 = MR_tfield(1, MR_r1, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__punct_5_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module15)
	MR_init_entry1(parsing_utils__keyword_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__keyword_6_0);
	MR_init_label5(parsing_utils__keyword_6_0,2,5,17,4,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'keyword'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__keyword_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(parsing_utils__match_string_4_0,
		parsing_utils__keyword_6_0_i2);
MR_def_label(parsing_utils__keyword_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__keyword_6_0_i17);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__keyword_6_0_i5);
MR_def_label(parsing_utils__keyword_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__keyword_6_0_i4);
	}
	{
	MR_String	Str;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__parsing_utils__keyword_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_sv(1);
	Ch = MR_r2;
{
#line 531 "string.opt"

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }
;}
#line 2106 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(parsing_utils__keyword_6_0_i4);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(parsing_utils__keyword_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(parsing_utils__keyword_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__keyword_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__keyword_6_0_i9);
MR_def_label(parsing_utils__keyword_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parsing_utils__keyword_6_0_i17);
	}
	MR_r3 = MR_tfield(1, MR_r1, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__det_from_int_2_0);
MR_decl_entry(char__lower_upper_2_0);

MR_BEGIN_MODULE(parsing_utils_module16)
	MR_init_entry1(parsing_utils__imatch_string_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__imatch_string_2_5_0);
	MR_init_label10(parsing_utils__imatch_string_2_5_0,35,3,4,7,5,9,12,10,14,17)
	MR_init_label1(parsing_utils__imatch_string_2_5_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'imatch_string_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parsing_utils__imatch_string_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(parsing_utils__imatch_string_2_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(parsing_utils__imatch_string_2_5_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__parsing_utils__imatch_string_2_5_0
	Str = (MR_String) MR_r3;
	Index = MR_r2;
{
#line 609 "string.opt"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];
;}
#line 2186 "parsing_utils.c"
	MR_tempr1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_r4 + (MR_Integer) MR_r2);
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__parsing_utils__imatch_string_2_5_0
	Str = (MR_String) MR_r5;
	Index = MR_tempr2;
{
#line 609 "string.opt"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];
;}
#line 2204 "parsing_utils.c"
	MR_tempr2 = Code;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__det_from_int_2_0,
		parsing_utils__imatch_string_2_5_0_i3);
MR_def_label(parsing_utils__imatch_string_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__det_from_int_2_0,
		parsing_utils__imatch_string_2_5_0_i4);
MR_def_label(parsing_utils__imatch_string_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(char__lower_upper_2_0,
		parsing_utils__imatch_string_2_5_0_i7);
MR_def_label(parsing_utils__imatch_string_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__imatch_string_2_5_0_i5);
	}
	MR_r1 = MR_sv(7);
	MR_sv(6) = MR_r2;
	MR_GOTO_LAB(parsing_utils__imatch_string_2_5_0_i9);
MR_def_label(parsing_utils__imatch_string_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
MR_def_label(parsing_utils__imatch_string_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		parsing_utils__imatch_string_2_5_0_i12);
MR_def_label(parsing_utils__imatch_string_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__imatch_string_2_5_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_GOTO_LAB(parsing_utils__imatch_string_2_5_0_i14);
MR_def_label(parsing_utils__imatch_string_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r2 = MR_r6;
MR_def_label(parsing_utils__imatch_string_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(6) != MR_r2)) {
		MR_GOTO_LAB(parsing_utils__imatch_string_2_5_0_i1);
	}
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(parsing_utils__imatch_string_2_5_0_i35);
MR_def_label(parsing_utils__imatch_string_2_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(parsing_utils__imatch_string_2_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module17)
	MR_init_entry1(parsing_utils__imatch_string_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__imatch_string_4_0);
	MR_init_label4(parsing_utils__imatch_string_4_0,2,3,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'imatch_string'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__imatch_string_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_r2, 3);
	MR_sv(5) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mutvar__get_mutvar_2_0,
		parsing_utils__imatch_string_4_0_i2);
MR_def_label(parsing_utils__imatch_string_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(parsing_utils__imatch_string_4_0_i3);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		parsing_utils__imatch_string_4_0_i3);
MR_def_label(parsing_utils__imatch_string_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(3);
	MR_r4 = MR_tempr1;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__parsing_utils__imatch_string_4_0
	Str = (MR_String) MR_r3;
{
#line 230 "string.opt"

    Length = strlen(Str);
;}
#line 2341 "parsing_utils.c"
	MR_r1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_tempr1 + (MR_Integer) MR_r1);
	MR_tempr4 = MR_sv(2);
	MR_tempr3 = MR_tfield(0, MR_tempr4, 0);
	if (((MR_Integer) MR_tempr2 > (MR_Integer) MR_tempr3)) {
		MR_GOTO_LAB(parsing_utils__imatch_string_4_0_i1);
	}
	MR_sv(3) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_r5 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(parsing_utils__imatch_string_2_5_0,
		parsing_utils__imatch_string_4_0_i6);
MR_def_label(parsing_utils__imatch_string_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__imatch_string_4_0_i1);
	}
	MR_r2 = ((MR_Integer) MR_sv(3) + (MR_Integer) MR_sv(1));
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__imatch_string_4_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module18)
	MR_init_entry1(parsing_utils__ikeyword_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__ikeyword_6_0);
	MR_init_label5(parsing_utils__ikeyword_6_0,2,5,17,4,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ikeyword'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__ikeyword_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(parsing_utils__imatch_string_4_0,
		parsing_utils__ikeyword_6_0_i2);
MR_def_label(parsing_utils__ikeyword_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__ikeyword_6_0_i17);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__ikeyword_6_0_i5);
MR_def_label(parsing_utils__ikeyword_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__ikeyword_6_0_i4);
	}
	{
	MR_String	Str;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__parsing_utils__ikeyword_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_sv(1);
	Ch = MR_r2;
{
#line 531 "string.opt"

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }
;}
#line 2445 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(parsing_utils__ikeyword_6_0_i4);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(parsing_utils__ikeyword_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(parsing_utils__ikeyword_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__ikeyword_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__ikeyword_6_0_i9);
MR_def_label(parsing_utils__ikeyword_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parsing_utils__ikeyword_6_0_i17);
	}
	MR_r3 = MR_tfield(1, MR_r1, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module19)
	MR_init_entry1(parsing_utils__identifier_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__identifier_2_5_0);
	MR_init_label3(parsing_utils__identifier_2_5_0,24,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'identifier_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__identifier_2_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(parsing_utils__identifier_2_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__identifier_2_5_0_i3);
MR_def_label(parsing_utils__identifier_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__identifier_2_5_0_i2);
	}
	{
	MR_String	Str;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__parsing_utils__identifier_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_sv(1);
	Ch = MR_r2;
{
#line 531 "string.opt"

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }
;}
#line 2543 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(parsing_utils__identifier_2_5_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parsing_utils__identifier_2_5_0_i24);
MR_def_label(parsing_utils__identifier_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module20)
	MR_init_entry1(parsing_utils__identifier_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__identifier_6_0);
	MR_init_label5(parsing_utils__identifier_6_0,2,6,8,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'identifier'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__identifier_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__identifier_6_0_i2);
MR_def_label(parsing_utils__identifier_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__identifier_6_0_i1);
	}
	{
	MR_String	Str;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__parsing_utils__identifier_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_sv(1);
	Ch = MR_r2;
{
#line 531 "string.opt"

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }
;}
#line 2622 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(parsing_utils__identifier_6_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parsing_utils__identifier_2_5_0,
		parsing_utils__identifier_6_0_i6);
MR_def_label(parsing_utils__identifier_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__identifier_6_0_i1);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__identifier_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__identifier_6_0_i8);
MR_def_label(parsing_utils__identifier_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parsing_utils__identifier_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parsing_utils__input_substring_4_0,
		parsing_utils__identifier_6_0_i10);
MR_def_label(parsing_utils__identifier_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__identifier_6_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__identifier_6_0,1)
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

MR_decl_entry(char__is_whitespace_1_0);

MR_BEGIN_MODULE(parsing_utils_module21)
	MR_init_entry1(parsing_utils__whitespace_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__whitespace_4_0);
	MR_init_label5(parsing_utils__whitespace_4_0,32,3,5,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'whitespace'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__whitespace_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(parsing_utils__whitespace_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__whitespace_4_0_i3);
MR_def_label(parsing_utils__whitespace_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__whitespace_4_0_i2);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		parsing_utils__whitespace_4_0_i5);
MR_def_label(parsing_utils__whitespace_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__whitespace_4_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parsing_utils__whitespace_4_0_i32);
MR_def_label(parsing_utils__whitespace_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__parsing_utils__whitespace_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 88 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 2738 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(parsing_utils__whitespace_4_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(parsing_utils__whitespace_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module22)
	MR_init_entry1(parsing_utils__skip_to_eol_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__skip_to_eol_4_0);
	MR_init_label4(parsing_utils__skip_to_eol_4_0,18,2,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'skip_to_eol'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__skip_to_eol_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(parsing_utils__skip_to_eol_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__skip_to_eol_4_0_i2);
MR_def_label(parsing_utils__skip_to_eol_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__skip_to_eol_4_0_i1);
	}
	if (MR_INT_EQ(MR_r2,10)) {
		MR_GOTO_LAB(parsing_utils__skip_to_eol_4_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(parsing_utils__skip_to_eol_4_0_i18);
MR_def_label(parsing_utils__skip_to_eol_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(parsing_utils__skip_to_eol_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module23)
	MR_init_entry1(parsing_utils__eof_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__eof_4_0);
	MR_init_label1(parsing_utils__eof_4_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eof'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__eof_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if ((MR_r2 != MR_tempr1)) {
		MR_GOTO_LAB(parsing_utils__eof_4_0_i1);
	}
	MR_tempr1 = MR_r2;
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parsing_utils__eof_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__int_to_digit_2_1);

MR_BEGIN_MODULE(parsing_utils_module24)
	MR_init_entry1(parsing_utils__digits_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__digits_2_5_0);
	MR_init_label7(parsing_utils__digits_2_5_0,49,3,7,9,5,11,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'digits_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parsing_utils__digits_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(parsing_utils__digits_2_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__digits_2_5_0_i3);
MR_def_label(parsing_utils__digits_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__digits_2_5_0_i2);
	}
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		parsing_utils__digits_2_5_0_i7);
MR_def_label(parsing_utils__digits_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__digits_2_5_0_i5);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__int_to_digit_2_1,
		parsing_utils__digits_2_5_0_i9);
MR_def_label(parsing_utils__digits_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__digits_2_5_0_i2);
	}
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(parsing_utils__digits_2_5_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(parsing_utils__digits_2_5_0_i49);
MR_def_label(parsing_utils__digits_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(char__int_to_digit_2_1,
		parsing_utils__digits_2_5_0_i11);
MR_def_label(parsing_utils__digits_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__digits_2_5_0_i2);
	}
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(parsing_utils__digits_2_5_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(parsing_utils__digits_2_5_0_i49);
MR_def_label(parsing_utils__digits_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module25)
	MR_init_entry1(parsing_utils__float_literal_as_string_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__float_literal_as_string_4_0);
	MR_init_label10(parsing_utils__float_literal_as_string_4_0,3,2,5,6,10,12,8,14,16,17)
	MR_init_label10(parsing_utils__float_literal_as_string_4_0,19,21,25,27,23,29,31,32,35,40)
	MR_init_label10(parsing_utils__float_literal_as_string_4_0,39,42,43,47,49,45,51,53,54,34)
	MR_init_label4(parsing_utils__float_literal_as_string_4_0,56,57,59,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'float_literal_as_string'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__float_literal_as_string_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__float_literal_as_string_4_0_i3);
MR_def_label(parsing_utils__float_literal_as_string_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i2);
	}
	if (((MR_Integer) 45 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i5);
MR_def_label(parsing_utils__float_literal_as_string_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
MR_def_label(parsing_utils__float_literal_as_string_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__float_literal_as_string_4_0_i6);
MR_def_label(parsing_utils__float_literal_as_string_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		parsing_utils__float_literal_as_string_4_0_i10);
MR_def_label(parsing_utils__float_literal_as_string_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i8);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__int_to_digit_2_1,
		parsing_utils__float_literal_as_string_4_0_i12);
MR_def_label(parsing_utils__float_literal_as_string_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	if (MR_INT_GE(MR_r2,10)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r1 = (MR_Integer) 10;
	MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i16);
MR_def_label(parsing_utils__float_literal_as_string_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(char__int_to_digit_2_1,
		parsing_utils__float_literal_as_string_4_0_i14);
MR_def_label(parsing_utils__float_literal_as_string_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	if (MR_INT_GE(MR_r2,10)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r1 = (MR_Integer) 10;
MR_def_label(parsing_utils__float_literal_as_string_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(parsing_utils__digits_2_5_0,
		parsing_utils__float_literal_as_string_4_0_i17);
MR_def_label(parsing_utils__float_literal_as_string_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__float_literal_as_string_4_0_i19);
MR_def_label(parsing_utils__float_literal_as_string_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	if (((MR_Integer) 46 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__float_literal_as_string_4_0_i21);
MR_def_label(parsing_utils__float_literal_as_string_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		parsing_utils__float_literal_as_string_4_0_i25);
MR_def_label(parsing_utils__float_literal_as_string_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i23);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__int_to_digit_2_1,
		parsing_utils__float_literal_as_string_4_0_i27);
MR_def_label(parsing_utils__float_literal_as_string_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	if (MR_INT_GE(MR_r2,10)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r1 = (MR_Integer) 10;
	MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i31);
MR_def_label(parsing_utils__float_literal_as_string_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(char__int_to_digit_2_1,
		parsing_utils__float_literal_as_string_4_0_i29);
MR_def_label(parsing_utils__float_literal_as_string_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	if (MR_INT_GE(MR_r2,10)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r1 = (MR_Integer) 10;
MR_def_label(parsing_utils__float_literal_as_string_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(parsing_utils__digits_2_5_0,
		parsing_utils__float_literal_as_string_4_0_i32);
MR_def_label(parsing_utils__float_literal_as_string_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__float_literal_as_string_4_0_i35);
MR_def_label(parsing_utils__float_literal_as_string_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i34);
	}
	{
	MR_String	Str;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__parsing_utils__float_literal_as_string_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) (MR_Word) MR_string_const("eE", 2);
	Ch = MR_r2;
{
#line 531 "string.opt"

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }
;}
#line 3156 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i34);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__float_literal_as_string_4_0_i40);
MR_def_label(parsing_utils__float_literal_as_string_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i39);
	}
	if (((MR_Integer) 45 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i39);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i42);
MR_def_label(parsing_utils__float_literal_as_string_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(parsing_utils__float_literal_as_string_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__float_literal_as_string_4_0_i43);
MR_def_label(parsing_utils__float_literal_as_string_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		parsing_utils__float_literal_as_string_4_0_i47);
MR_def_label(parsing_utils__float_literal_as_string_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i45);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__int_to_digit_2_1,
		parsing_utils__float_literal_as_string_4_0_i49);
MR_def_label(parsing_utils__float_literal_as_string_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	if (MR_INT_GE(MR_r2,10)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r1 = (MR_Integer) 10;
	MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i53);
MR_def_label(parsing_utils__float_literal_as_string_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(char__int_to_digit_2_1,
		parsing_utils__float_literal_as_string_4_0_i51);
MR_def_label(parsing_utils__float_literal_as_string_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	if (MR_INT_GE(MR_r2,10)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r1 = (MR_Integer) 10;
MR_def_label(parsing_utils__float_literal_as_string_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(parsing_utils__digits_2_5_0,
		parsing_utils__float_literal_as_string_4_0_i54);
MR_def_label(parsing_utils__float_literal_as_string_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i56);
	}
MR_def_label(parsing_utils__float_literal_as_string_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(parsing_utils__float_literal_as_string_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(parsing_utils__skip_whitespace_3_0,
		parsing_utils__float_literal_as_string_4_0_i57);
MR_def_label(parsing_utils__float_literal_as_string_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(parsing_utils__input_substring_4_0,
		parsing_utils__float_literal_as_string_4_0_i59);
MR_def_label(parsing_utils__float_literal_as_string_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__float_literal_as_string_4_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module26)
	MR_init_entry1(parsing_utils__float_literal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__float_literal_4_0);
	MR_init_label2(parsing_utils__float_literal_4_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'float_literal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__float_literal_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(parsing_utils__float_literal_as_string_4_0,
		parsing_utils__float_literal_4_0_i2);
MR_def_label(parsing_utils__float_literal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_4_0_i1);
	}
	{
	MR_String	FloatString;
	MR_Float	FloatVal;
#define	MR_PROC_LABEL	mercury__parsing_utils__float_literal_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	FloatString = (MR_String) MR_r2;
{
#line 404 "string.opt"
{
    /*
    ** The %c checks for any erroneous characters appearing after the float;
    ** if there are then sscanf() will return 2 rather than 1.
    */
    char    tmpc;
    SUCCESS_INDICATOR =
        (!MR_isspace(FloatString[0])) &&
        (sscanf(FloatString, MR_FLT_FMT "%c", &FloatVal, &tmpc) == 1);
        /* MR_TRUE if sscanf succeeds, MR_FALSE otherwise */
};}
#line 3351 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(parsing_utils__float_literal_4_0_i1);
	MR_r2 = MR_float_to_word(FloatVal);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__float_literal_4_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module27)
	MR_init_entry1(parsing_utils__optional_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__optional_5_0);
	MR_init_label3(parsing_utils__optional_5_0,4,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optional'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__optional_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__optional_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__optional_5_0_i4);
MR_def_label(parsing_utils__optional_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__optional_5_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parsing_utils__optional_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	{
#define	MR_PROC_LABEL	mercury__parsing_utils__optional_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 88 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 3432 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(parsing_utils__optional_5_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parsing_utils__optional_5_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module28)
	MR_init_entry1(parsing_utils__int_literal_as_string_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__int_literal_as_string_4_0);
	MR_init_label10(parsing_utils__int_literal_as_string_4_0,3,2,9,10,14,16,12,18,20,21)
	MR_init_label10(parsing_utils__int_literal_as_string_4_0,24,26,30,32,28,34,36,37,23,39)
	MR_init_label2(parsing_utils__int_literal_as_string_4_0,41,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'int_literal_as_string'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__int_literal_as_string_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__int_literal_as_string_4_0_i3);
MR_def_label(parsing_utils__int_literal_as_string_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i2);
	}
	{
	MR_String	Str;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__parsing_utils__int_literal_as_string_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) (MR_Word) MR_string_const("-", 1);
	Ch = MR_r2;
{
#line 531 "string.opt"

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }
;}
#line 3508 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i9);
MR_def_label(parsing_utils__int_literal_as_string_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__parsing_utils__int_literal_as_string_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 88 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 3529 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(parsing_utils__int_literal_as_string_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__int_literal_as_string_4_0_i10);
MR_def_label(parsing_utils__int_literal_as_string_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i1);
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		parsing_utils__int_literal_as_string_4_0_i14);
MR_def_label(parsing_utils__int_literal_as_string_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i12);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__int_to_digit_2_1,
		parsing_utils__int_literal_as_string_4_0_i16);
MR_def_label(parsing_utils__int_literal_as_string_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i1);
	}
	if (MR_INT_GE(MR_r2,10)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r1 = (MR_Integer) 10;
	MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i20);
MR_def_label(parsing_utils__int_literal_as_string_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(char__int_to_digit_2_1,
		parsing_utils__int_literal_as_string_4_0_i18);
MR_def_label(parsing_utils__int_literal_as_string_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i1);
	}
	if (MR_INT_GE(MR_r2,10)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r1 = (MR_Integer) 10;
MR_def_label(parsing_utils__int_literal_as_string_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(parsing_utils__digits_2_5_0,
		parsing_utils__int_literal_as_string_4_0_i21);
MR_def_label(parsing_utils__int_literal_as_string_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__int_literal_as_string_4_0_i24);
MR_def_label(parsing_utils__int_literal_as_string_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i23);
	}
	if (((MR_Integer) 46 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__int_literal_as_string_4_0_i26);
MR_def_label(parsing_utils__int_literal_as_string_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i23);
	}
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		parsing_utils__int_literal_as_string_4_0_i30);
MR_def_label(parsing_utils__int_literal_as_string_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i28);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__int_to_digit_2_1,
		parsing_utils__int_literal_as_string_4_0_i32);
MR_def_label(parsing_utils__int_literal_as_string_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i23);
	}
	if (MR_INT_GE(MR_r2,10)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i23);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r1 = (MR_Integer) 10;
	MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i36);
MR_def_label(parsing_utils__int_literal_as_string_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(char__int_to_digit_2_1,
		parsing_utils__int_literal_as_string_4_0_i34);
MR_def_label(parsing_utils__int_literal_as_string_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i23);
	}
	if (MR_INT_GE(MR_r2,10)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i23);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r1 = (MR_Integer) 10;
MR_def_label(parsing_utils__int_literal_as_string_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(parsing_utils__digits_2_5_0,
		parsing_utils__int_literal_as_string_4_0_i37);
MR_def_label(parsing_utils__int_literal_as_string_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i1);
	}
MR_def_label(parsing_utils__int_literal_as_string_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__int_literal_as_string_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__int_literal_as_string_4_0_i39);
MR_def_label(parsing_utils__int_literal_as_string_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(parsing_utils__input_substring_4_0,
		parsing_utils__int_literal_as_string_4_0_i41);
MR_def_label(parsing_utils__int_literal_as_string_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__int_literal_as_string_4_0,1)
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

MR_decl_entry(string__base_string_to_int_3_0);

MR_BEGIN_MODULE(parsing_utils_module29)
	MR_init_entry1(parsing_utils__int_literal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__int_literal_4_0);
	MR_init_label3(parsing_utils__int_literal_4_0,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'int_literal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__int_literal_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(parsing_utils__int_literal_as_string_4_0,
		parsing_utils__int_literal_4_0_i2);
MR_def_label(parsing_utils__int_literal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__int_literal_4_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(string__base_string_to_int_3_0,
		parsing_utils__int_literal_4_0_i4);
MR_def_label(parsing_utils__int_literal_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__int_literal_4_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__int_literal_4_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module30)
	MR_init_entry1(parsing_utils__string_literal_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__string_literal_2_5_0);
	MR_init_label6(parsing_utils__string_literal_2_5_0,34,2,7,23,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_literal_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__string_literal_2_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(parsing_utils__string_literal_2_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__string_literal_2_5_0_i2);
MR_def_label(parsing_utils__string_literal_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__string_literal_2_5_0_i1);
	}
	if ((MR_r2 == MR_sv(2))) {
		MR_GOTO_LAB(parsing_utils__string_literal_2_5_0_i14);
	}
	if (MR_INT_NE(MR_r2,92)) {
		MR_GOTO_LAB(parsing_utils__string_literal_2_5_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__string_literal_2_5_0_i7);
MR_def_label(parsing_utils__string_literal_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__string_literal_2_5_0_i1);
	}
MR_def_label(parsing_utils__string_literal_2_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(parsing_utils__string_literal_2_5_0_i34);
MR_def_label(parsing_utils__string_literal_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(parsing_utils__string_literal_2_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module31)
	MR_init_entry1(parsing_utils__string_literal_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__string_literal_5_0);
	MR_init_label5(parsing_utils__string_literal_5_0,2,4,8,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_literal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__string_literal_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__string_literal_5_0_i2);
MR_def_label(parsing_utils__string_literal_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__string_literal_5_0_i1);
	}
	if ((MR_sv(1) != MR_r2)) {
		MR_GOTO_LAB(parsing_utils__string_literal_5_0_i1);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parsing_utils__string_literal_2_5_0,
		parsing_utils__string_literal_5_0_i4);
MR_def_label(parsing_utils__string_literal_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__string_literal_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Integer	PrevIndex;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__parsing_utils__string_literal_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_tempr1;
	Index = MR_r3;
{
#line 603 "string.opt"

    int pos = Index;
    Ch = MR_utf8_prev_get(Str, &pos);
    PrevIndex = pos;
    SUCCESS_INDICATOR = (Ch > 0);
;}
#line 3913 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(parsing_utils__string_literal_5_0_i1);
	MR_tempr1 = PrevIndex;
	MR_tempr2 = (MR_UnsignedChar) Ch;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	if ((MR_sv(1) != MR_tempr2)) {
		MR_GOTO_LAB(parsing_utils__string_literal_5_0_i1);
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 2);
	MR_r2 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__string_literal_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__string_literal_5_0_i8);
MR_def_label(parsing_utils__string_literal_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parsing_utils__string_literal_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parsing_utils__input_substring_4_0,
		parsing_utils__string_literal_5_0_i10);
MR_def_label(parsing_utils__string_literal_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__string_literal_5_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__string_literal_5_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module32)
	MR_init_entry1(parsing_utils__zero_or_more_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__zero_or_more_2_6_0);
	MR_init_label4(parsing_utils__zero_or_more_2_6_0,26,4,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'zero_or_more_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__zero_or_more_2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(parsing_utils__zero_or_more_2_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__zero_or_more_2_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__zero_or_more_2_6_0_i4);
MR_def_label(parsing_utils__zero_or_more_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__zero_or_more_2_6_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(parsing_utils__zero_or_more_2_6_0_i26);
	}
MR_def_label(parsing_utils__zero_or_more_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	{
#define	MR_PROC_LABEL	mercury__parsing_utils__zero_or_more_2_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 88 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 4038 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(parsing_utils__zero_or_more_2_6_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(parsing_utils__zero_or_more_2_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(parsing_utils_module33)
	MR_init_entry1(parsing_utils__zero_or_more_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__zero_or_more_5_0);
	MR_init_label3(parsing_utils__zero_or_more_5_0,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'zero_or_more'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__zero_or_more_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(parsing_utils__zero_or_more_2_6_0,
		parsing_utils__zero_or_more_5_0_i2);
MR_def_label(parsing_utils__zero_or_more_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__zero_or_more_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		parsing_utils__zero_or_more_5_0_i4);
MR_def_label(parsing_utils__zero_or_more_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__zero_or_more_5_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module34)
	MR_init_entry1(parsing_utils__one_or_more_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__one_or_more_5_0);
	MR_init_label4(parsing_utils__one_or_more_5_0,2,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'one_or_more'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__one_or_more_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__one_or_more_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__one_or_more_5_0_i2);
MR_def_label(parsing_utils__one_or_more_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__one_or_more_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(parsing_utils__zero_or_more_2_6_0,
		parsing_utils__one_or_more_5_0_i4);
MR_def_label(parsing_utils__one_or_more_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__one_or_more_5_0_i1);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(list__reverse_2_0,
		parsing_utils__one_or_more_5_0_i6);
MR_def_label(parsing_utils__one_or_more_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__one_or_more_5_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module35)
	MR_init_entry1(parsing_utils__brackets_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__brackets_7_0);
	MR_init_label6(parsing_utils__brackets_7_0,2,4,6,8,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'brackets'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__brackets_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r6;
	}
	MR_np_call_localret_ent(parsing_utils__match_string_4_0,
		parsing_utils__brackets_7_0_i2);
MR_def_label(parsing_utils__brackets_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__brackets_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__brackets_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__brackets_7_0_i4);
MR_def_label(parsing_utils__brackets_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parsing_utils__brackets_7_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__brackets_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__brackets_7_0_i6);
MR_def_label(parsing_utils__brackets_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__brackets_7_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(parsing_utils__match_string_4_0,
		parsing_utils__brackets_7_0_i8);
MR_def_label(parsing_utils__brackets_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__brackets_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__brackets_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__brackets_7_0_i10);
MR_def_label(parsing_utils__brackets_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parsing_utils__brackets_7_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_r1, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__brackets_7_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module36)
	MR_init_entry1(parsing_utils__separated_list_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__separated_list_6_0);
	MR_init_label5(parsing_utils__separated_list_6_0,4,6,8,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'separated_list'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__separated_list_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__separated_list_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__separated_list_6_0_i4);
MR_def_label(parsing_utils__separated_list_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__separated_list_6_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0,
		parsing_utils__separated_list_6_0_i6);
MR_def_label(parsing_utils__separated_list_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__separated_list_6_0_i1);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(list__reverse_2_0,
		parsing_utils__separated_list_6_0_i8);
MR_def_label(parsing_utils__separated_list_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__separated_list_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parsing_utils__separated_list_6_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module37)
	MR_init_entry1(parsing_utils__comma_separated_list_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__comma_separated_list_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'comma_separated_list'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__comma_separated_list_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const(",", 1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(parsing_utils__separated_list_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__typed_unify_2_1);

MR_BEGIN_MODULE(parsing_utils_module38)
	MR_init_entry1(parsing_utils__fail_with_message_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__fail_with_message_5_0);
	MR_init_label4(parsing_utils__fail_with_message_5_0,4,5,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fail_with_message'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__fail_with_message_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tempr4 = MR_r3;
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parsing_utils, fail_message_info);
	MR_r2 = MR_tfield(0, MR_tempr4, 4);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		parsing_utils__fail_with_message_5_0_i4);
MR_def_label(parsing_utils__fail_with_message_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(mutvar__set_mutvar_2_0,
		parsing_utils__fail_with_message_5_0_i5);
MR_def_label(parsing_utils__fail_with_message_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__parsing_utils__fail_with_message_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 91 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;
;}
#line 4497 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(parsing_utils__fail_with_message_5_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(private_builtin__typed_unify_2_1,
		parsing_utils__fail_with_message_5_0_i8);
MR_def_label(parsing_utils__fail_with_message_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__fail_with_message_5_0_i1);
	}
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__fail_with_message_5_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module39)
	MR_init_entry1(parsing_utils__fail_with_message_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__fail_with_message_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fail_with_message'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__fail_with_message_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_105_108_95_119_105_116_104_95_109_101_115_115_97_103_101_95_95_91_54_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(parsing_utils_module40)
	MR_init_entry1(parsing_utils__optional_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__optional_7_0);
	MR_init_label3(parsing_utils__optional_7_0,4,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optional'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__optional_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__optional_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__parsing_utils__optional_7_0_i4);
MR_def_label(parsing_utils__optional_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__optional_7_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parsing_utils__optional_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	{
#define	MR_PROC_LABEL	mercury__parsing_utils__optional_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 88 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 4614 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(parsing_utils__optional_7_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parsing_utils__optional_7_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module41)
	MR_init_entry1(parsing_utils__zero_or_more_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__zero_or_more_2_8_0);
	MR_init_label4(parsing_utils__zero_or_more_2_8_0,26,4,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'zero_or_more_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__zero_or_more_2_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(parsing_utils__zero_or_more_2_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r5;
	MR_tempr3 = MR_r6;
	MR_sv(4) = MR_tempr3;
	MR_tempr4 = MR_r7;
	MR_sv(5) = MR_tempr4;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__zero_or_more_2_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__parsing_utils__zero_or_more_2_8_0_i4);
MR_def_label(parsing_utils__zero_or_more_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__zero_or_more_2_8_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(parsing_utils__zero_or_more_2_8_0_i26);
	}
MR_def_label(parsing_utils__zero_or_more_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_tempr3 = MR_sv(5);
	{
#define	MR_PROC_LABEL	mercury__parsing_utils__zero_or_more_2_8_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 88 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 4719 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(parsing_utils__zero_or_more_2_8_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
	}
MR_def_label(parsing_utils__zero_or_more_2_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module42)
	MR_init_entry1(parsing_utils__zero_or_more_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__zero_or_more_7_0);
	MR_init_label3(parsing_utils__zero_or_more_7_0,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'zero_or_more'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__zero_or_more_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(parsing_utils__zero_or_more_2_8_0,
		parsing_utils__zero_or_more_7_0_i2);
MR_def_label(parsing_utils__zero_or_more_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__zero_or_more_7_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		parsing_utils__zero_or_more_7_0_i4);
MR_def_label(parsing_utils__zero_or_more_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__zero_or_more_7_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module43)
	MR_init_entry1(parsing_utils__one_or_more_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__one_or_more_7_0);
	MR_init_label4(parsing_utils__one_or_more_7_0,2,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'one_or_more'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__one_or_more_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__one_or_more_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__parsing_utils__one_or_more_7_0_i2);
MR_def_label(parsing_utils__one_or_more_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__one_or_more_7_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	}
	MR_np_call_localret_ent(parsing_utils__zero_or_more_2_8_0,
		parsing_utils__one_or_more_7_0_i4);
MR_def_label(parsing_utils__one_or_more_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__one_or_more_7_0_i1);
	}
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		parsing_utils__one_or_more_7_0_i6);
MR_def_label(parsing_utils__one_or_more_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__one_or_more_7_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module44)
	MR_init_entry1(parsing_utils__brackets_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__brackets_9_0);
	MR_init_label6(parsing_utils__brackets_9_0,2,4,6,8,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'brackets'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__brackets_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r7;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r8;
	}
	MR_np_call_localret_ent(parsing_utils__match_string_4_0,
		parsing_utils__brackets_9_0_i2);
MR_def_label(parsing_utils__brackets_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__brackets_9_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__brackets_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__brackets_9_0_i4);
MR_def_label(parsing_utils__brackets_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parsing_utils__brackets_9_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__brackets_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__parsing_utils__brackets_9_0_i6);
MR_def_label(parsing_utils__brackets_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__brackets_9_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(parsing_utils__match_string_4_0,
		parsing_utils__brackets_9_0_i8);
MR_def_label(parsing_utils__brackets_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__brackets_9_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__brackets_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__brackets_9_0_i10);
MR_def_label(parsing_utils__brackets_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parsing_utils__brackets_9_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(1, MR_r1, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__brackets_9_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module45)
	MR_init_entry1(parsing_utils__separated_list_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__separated_list_8_0);
	MR_init_label5(parsing_utils__separated_list_8_0,4,6,8,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'separated_list'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__separated_list_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r6;
	MR_sv(4) = MR_tempr3;
	MR_tempr4 = MR_r7;
	MR_sv(5) = MR_tempr4;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__separated_list_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__parsing_utils__separated_list_8_0_i4);
MR_def_label(parsing_utils__separated_list_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__separated_list_8_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_tempr3 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0,
		parsing_utils__separated_list_8_0_i6);
MR_def_label(parsing_utils__separated_list_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__separated_list_8_0_i1);
	}
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(list__reverse_2_0,
		parsing_utils__separated_list_8_0_i8);
MR_def_label(parsing_utils__separated_list_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__separated_list_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_tempr2 = MR_sv(5);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parsing_utils__separated_list_8_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module46)
	MR_init_entry1(parsing_utils__comma_separated_list_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parsing_utils__comma_separated_list_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'comma_separated_list'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__comma_separated_list_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const(",", 1);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	MR_np_tailcall_ent(parsing_utils__separated_list_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(parsing_utils_module47)
	MR_init_entry1(__Unify___parsing_utils__fail_message_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parsing_utils__fail_message_info_0_0);
	MR_init_label2(__Unify___parsing_utils__fail_message_info_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parsing_utils__fail_message_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parsing_utils__fail_message_info_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___parsing_utils__fail_message_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
MR_def_label(__Unify___parsing_utils__fail_message_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parsing_utils__fail_message_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(parsing_utils_module48)
	MR_init_entry1(__Compare___parsing_utils__fail_message_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parsing_utils__fail_message_info_0_0);
	MR_init_label6(__Compare___parsing_utils__fail_message_info_0_0,3,2,6,7,9,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parsing_utils__fail_message_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parsing_utils__fail_message_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parsing_utils__fail_message_info_0_0_i2);
MR_def_label(__Compare___parsing_utils__fail_message_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parsing_utils__fail_message_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___parsing_utils__fail_message_info_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___parsing_utils__fail_message_info_0_0_i9);
	}
MR_def_label(__Compare___parsing_utils__fail_message_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___parsing_utils__fail_message_info_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___parsing_utils__fail_message_info_0_0_i9);
MR_def_label(__Compare___parsing_utils__fail_message_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___parsing_utils__fail_message_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parsing_utils__fail_message_info_0_0_i31);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
	}
MR_def_label(__Compare___parsing_utils__fail_message_info_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___array__array_1_0);

MR_BEGIN_MODULE(parsing_utils_module49)
	MR_init_entry1(__Unify___parsing_utils__line_numbers_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parsing_utils__line_numbers_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parsing_utils__line_numbers_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___array__array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___array__array_1_0);

MR_BEGIN_MODULE(parsing_utils_module50)
	MR_init_entry1(__Compare___parsing_utils__line_numbers_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parsing_utils__line_numbers_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parsing_utils__line_numbers_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___array__array_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(parsing_utils_module51)
	MR_init_entry1(__Unify___parsing_utils__parse_result_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parsing_utils__parse_result_1_0);
	MR_init_label4(__Unify___parsing_utils__parse_result_1_0,7,18,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parsing_utils__parse_result_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___parsing_utils__parse_result_1_0_i18);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___parsing_utils__parse_result_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___parsing_utils__parse_result_1_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr4, 2);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___parsing_utils__parse_result_1_0_i7);
MR_def_label(__Unify___parsing_utils__parse_result_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parsing_utils__parse_result_1_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___parsing_utils__parse_result_1_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___parsing_utils__parse_result_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parsing_utils__parse_result_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___parsing_utils__parse_result_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___parsing_utils__parse_result_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(parsing_utils_module52)
	MR_init_entry1(__Compare___parsing_utils__parse_result_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parsing_utils__parse_result_1_0);
	MR_init_label10(__Compare___parsing_utils__parse_result_1_0,9,14,15,17,20,48,7,5,27,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parsing_utils__parse_result_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___parsing_utils__parse_result_1_0_i48);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___parsing_utils__parse_result_1_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___parsing_utils__parse_result_1_0_i7);
	}
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_tempr3 = MR_tfield(1, MR_tempr2, 2);
	MR_tempr4 = MR_tfield(1, MR_tempr2, 1);
	MR_tempr5 = MR_tempr1;
	MR_sv(1) = MR_tempr4;
	MR_tempr6 = MR_tempr2;
	MR_sv(2) = MR_tempr3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(1, MR_tempr5, 0);
	MR_r3 = MR_tfield(1, MR_tempr6, 0);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___parsing_utils__parse_result_1_0_i9);
MR_def_label(__Compare___parsing_utils__parse_result_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parsing_utils__parse_result_1_0_i29);
	}
	if (((MR_Integer) MR_sv(4) >= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(__Compare___parsing_utils__parse_result_1_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___parsing_utils__parse_result_1_0_i17);
MR_def_label(__Compare___parsing_utils__parse_result_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(4) != MR_sv(1))) {
		MR_GOTO_LAB(__Compare___parsing_utils__parse_result_1_0_i15);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___parsing_utils__parse_result_1_0_i17);
MR_def_label(__Compare___parsing_utils__parse_result_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___parsing_utils__parse_result_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parsing_utils__parse_result_1_0_i29);
	}
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(__Compare___parsing_utils__parse_result_1_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___parsing_utils__parse_result_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_sv(2))) {
		MR_GOTO_LAB(__Compare___parsing_utils__parse_result_1_0_i7);
	}
MR_def_label(__Compare___parsing_utils__parse_result_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___parsing_utils__parse_result_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___parsing_utils__parse_result_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___parsing_utils__parse_result_1_0_i27);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___parsing_utils__parse_result_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___parsing_utils__parse_result_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(parsing_utils_module53)
	MR_init_entry1(__Unify___parsing_utils__parser_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parsing_utils__parser_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parsing_utils__parser_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(parsing_utils_module54)
	MR_init_entry1(__Compare___parsing_utils__parser_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parsing_utils__parser_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parsing_utils__parser_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module55)
	MR_init_entry1(__Unify___parsing_utils__parser_with_state_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parsing_utils__parser_with_state_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parsing_utils__parser_with_state_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module56)
	MR_init_entry1(__Compare___parsing_utils__parser_with_state_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parsing_utils__parser_with_state_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parsing_utils__parser_with_state_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module57)
	MR_init_entry1(__Unify___parsing_utils__ps_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parsing_utils__ps_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parsing_utils__ps_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module58)
	MR_init_entry1(__Compare___parsing_utils__ps_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parsing_utils__ps_0_0);
	MR_init_label2(__Compare___parsing_utils__ps_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parsing_utils__ps_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___parsing_utils__ps_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___parsing_utils__ps_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___parsing_utils__ps_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parsing_utils__ps_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module59)
	MR_init_entry1(__Unify___parsing_utils__skip_whitespace_pred_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parsing_utils__skip_whitespace_pred_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parsing_utils__skip_whitespace_pred_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module60)
	MR_init_entry1(__Compare___parsing_utils__skip_whitespace_pred_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parsing_utils__skip_whitespace_pred_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parsing_utils__skip_whitespace_pred_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mutvar__mutvar_1_0);

MR_BEGIN_MODULE(parsing_utils_module61)
	MR_init_entry1(__Unify___parsing_utils__src_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parsing_utils__src_0_0);
	MR_init_label4(__Unify___parsing_utils__src_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parsing_utils__src_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parsing_utils__src_0_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___parsing_utils__src_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___parsing_utils__src_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 3);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 4);
	MR_r1 = MR_tfield(0, MR_tempr3, 2);
	MR_r2 = MR_tfield(0, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(private_builtin__builtin_unify_pred_2_0,
		__Unify___parsing_utils__src_0_0_i4);
MR_def_label(__Unify___parsing_utils__src_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parsing_utils__src_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mutvar__mutvar_1_0,
		__Unify___parsing_utils__src_0_0_i6);
MR_def_label(__Unify___parsing_utils__src_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parsing_utils__src_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parsing_utils, fail_message_info);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___mutvar__mutvar_1_0);
MR_def_label(__Unify___parsing_utils__src_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parsing_utils__src_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mutvar__mutvar_1_0);

MR_BEGIN_MODULE(parsing_utils_module62)
	MR_init_entry1(__Compare___parsing_utils__src_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parsing_utils__src_0_0);
	MR_init_label10(__Compare___parsing_utils__src_0_0,3,2,6,7,9,14,15,18,22,26)
	MR_init_label1(__Compare___parsing_utils__src_0_0,66)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parsing_utils__src_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parsing_utils__src_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parsing_utils__src_0_0_i2);
MR_def_label(__Compare___parsing_utils__src_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parsing_utils__src_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___parsing_utils__src_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___parsing_utils__src_0_0_i9);
	}
MR_def_label(__Compare___parsing_utils__src_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___parsing_utils__src_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___parsing_utils__src_0_0_i9);
MR_def_label(__Compare___parsing_utils__src_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___parsing_utils__src_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parsing_utils__src_0_0_i66);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___parsing_utils__src_0_0
	S1 = (MR_String) MR_r3;
	S2 = (MR_String) MR_sv(5);
{
#line 129 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 5911 "parsing_utils.c"
	MR_r3 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___parsing_utils__src_0_0_i14);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___parsing_utils__src_0_0_i18);
MR_def_label(__Compare___parsing_utils__src_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___parsing_utils__src_0_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___parsing_utils__src_0_0_i18);
MR_def_label(__Compare___parsing_utils__src_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___parsing_utils__src_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parsing_utils__src_0_0_i66);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_pred_3_0,
		__Compare___parsing_utils__src_0_0_i22);
MR_def_label(__Compare___parsing_utils__src_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parsing_utils__src_0_0_i66);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___mutvar__mutvar_1_0,
		__Compare___parsing_utils__src_0_0_i26);
MR_def_label(__Compare___parsing_utils__src_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parsing_utils__src_0_0_i66);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parsing_utils, fail_message_info);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___mutvar__mutvar_1_0);
MR_def_label(__Compare___parsing_utils__src_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module63)
	MR_init_entry1(fn__parsing_utils__IntroducedFrom__func__new_src_and_ps__408__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parsing_utils__IntroducedFrom__func__new_src_and_ps__408__1_3_0);
	MR_init_label2(fn__parsing_utils__IntroducedFrom__func__new_src_and_ps__408__1_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__new_src_and_ps__408__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parsing_utils__IntroducedFrom__func__new_src_and_ps__408__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__parsing_utils__IntroducedFrom__func__new_src_and_ps__408__1_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__parsing_utils__IntroducedFrom__func__new_src_and_ps__408__1_3_0_i3);
MR_def_label(fn__parsing_utils__IntroducedFrom__func__new_src_and_ps__408__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parsing_utils__IntroducedFrom__func__new_src_and_ps__408__1_3_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r3;
	MR_decr_sp_and_return(1);
MR_def_label(fn__parsing_utils__IntroducedFrom__func__new_src_and_ps__408__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module64)
	MR_init_entry1(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_117_114_114_101_110_116_95_111_102_102_115_101_116_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_117_114_114_101_110_116_95_111_102_102_115_101_116_95_95_91_49_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__current_offset__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_117_114_114_101_110_116_95_111_102_102_115_101_116_95_95_91_49_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module65)
	MR_init_entry1(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_105_108_95_119_105_116_104_95_109_101_115_115_97_103_101_95_95_91_54_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_105_108_95_119_105_116_104_95_109_101_115_115_97_103_101_95_95_91_54_93_95_48_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__fail_with_message__[6]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_105_108_95_119_105_116_104_95_109_101_115_115_97_103_101_95_95_91_54_93_95_48_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(parsing_utils__fail_with_message_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module66)
	MR_init_entry1(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__unsafe_index_3_0);

MR_BEGIN_MODULE(parsing_utils_module67)
	MR_init_entry1(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_56_95_95_91_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_56_95_95_91_50_93_95_48_4_0);
	MR_init_label4(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_56_95_95_91_50_93_95_48_4_0,19,4,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__fold_down__ho8__[2]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_56_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_56_95_95_91_50_93_95_48_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_56_95_95_91_50_93_95_48_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__unsafe_index_3_0,
		fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_56_95_95_91_50_93_95_48_4_0_i4);
MR_def_label(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_56_95_95_91_50_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_56_95_95_91_50_93_95_48_4_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_56_95_95_91_50_93_95_48_4_0_i19);
	}
MR_def_label(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_56_95_95_91_50_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_56_95_95_91_50_93_95_48_4_0_i19);
MR_def_label(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_56_95_95_91_50_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module68)
	MR_init_entry1(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0);
	MR_init_label6(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0,41,3,5,7,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__zero_or_more_2__ho11__[1, 4, 5]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(parsing_utils__match_string_4_0,
		f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0_i3);
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0_i5);
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0_i7);
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0_i41);
	}
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 88 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 6247 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_49_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module69)
	MR_init_entry1(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0);
	MR_init_label6(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0,41,3,5,7,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__zero_or_more_2__ho12__[1, 2, 5, 6, 7]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(parsing_utils__match_string_4_0,
		f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0_i3);
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0_i5);
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0_i7);
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0_i41);
	}
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 88 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 6366 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__parsing_utils_maybe_bunch_0(void)
{
	parsing_utils_module0();
	parsing_utils_module1();
	parsing_utils_module2();
	parsing_utils_module3();
	parsing_utils_module4();
	parsing_utils_module5();
	parsing_utils_module6();
	parsing_utils_module7();
	parsing_utils_module8();
	parsing_utils_module9();
	parsing_utils_module10();
	parsing_utils_module11();
	parsing_utils_module12();
	parsing_utils_module13();
	parsing_utils_module14();
	parsing_utils_module15();
	parsing_utils_module16();
	parsing_utils_module17();
	parsing_utils_module18();
	parsing_utils_module19();
	parsing_utils_module20();
	parsing_utils_module21();
	parsing_utils_module22();
	parsing_utils_module23();
	parsing_utils_module24();
	parsing_utils_module25();
	parsing_utils_module26();
	parsing_utils_module27();
	parsing_utils_module28();
	parsing_utils_module29();
	parsing_utils_module30();
	parsing_utils_module31();
	parsing_utils_module32();
	parsing_utils_module33();
	parsing_utils_module34();
	parsing_utils_module35();
	parsing_utils_module36();
	parsing_utils_module37();
	parsing_utils_module38();
	parsing_utils_module39();
}

static void mercury__parsing_utils_maybe_bunch_1(void)
{
	parsing_utils_module40();
	parsing_utils_module41();
	parsing_utils_module42();
	parsing_utils_module43();
	parsing_utils_module44();
	parsing_utils_module45();
	parsing_utils_module46();
	parsing_utils_module47();
	parsing_utils_module48();
	parsing_utils_module49();
	parsing_utils_module50();
	parsing_utils_module51();
	parsing_utils_module52();
	parsing_utils_module53();
	parsing_utils_module54();
	parsing_utils_module55();
	parsing_utils_module56();
	parsing_utils_module57();
	parsing_utils_module58();
	parsing_utils_module59();
	parsing_utils_module60();
	parsing_utils_module61();
	parsing_utils_module62();
	parsing_utils_module63();
	parsing_utils_module64();
	parsing_utils_module65();
	parsing_utils_module66();
	parsing_utils_module67();
	parsing_utils_module68();
	parsing_utils_module69();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__parsing_utils__init(void);
void mercury__parsing_utils__init_type_tables(void);
void mercury__parsing_utils__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__parsing_utils__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__parsing_utils__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__parsing_utils__init_threadscope_string_table(void);
#endif

void mercury__parsing_utils__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__parsing_utils_maybe_bunch_0();
	mercury__parsing_utils_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parsing_utils__type_ctor_info_fail_message_info_0,
		parsing_utils__fail_message_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parsing_utils__type_ctor_info_line_numbers_0,
		parsing_utils__line_numbers_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parsing_utils__type_ctor_info_parse_result_1,
		parsing_utils__parse_result_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parsing_utils__type_ctor_info_parser_1,
		parsing_utils__parser_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parsing_utils__type_ctor_info_parser_with_state_2,
		parsing_utils__parser_with_state_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parsing_utils__type_ctor_info_ps_0,
		parsing_utils__ps_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parsing_utils__type_ctor_info_skip_whitespace_pred_0,
		parsing_utils__skip_whitespace_pred_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parsing_utils__type_ctor_info_src_0,
		parsing_utils__src_0_0);
	mercury__parsing_utils__init_debugger();
}

void mercury__parsing_utils__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_parsing_utils__type_ctor_info_fail_message_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parsing_utils__type_ctor_info_line_numbers_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parsing_utils__type_ctor_info_parse_result_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parsing_utils__type_ctor_info_parser_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parsing_utils__type_ctor_info_parser_with_state_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parsing_utils__type_ctor_info_ps_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parsing_utils__type_ctor_info_skip_whitespace_pred_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parsing_utils__type_ctor_info_src_0);
	}
}


void mercury__parsing_utils__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__parsing_utils__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__parsing_utils);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__parsing_utils__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__parsing_utils__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
