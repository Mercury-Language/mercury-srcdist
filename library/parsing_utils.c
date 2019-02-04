/*
** Automatically generated from `parsing_utils.m'
** by the Mercury compiler,
** version rotd-2009-09-15, configured for i686-pc-linux-gnu.
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
INIT mercury__parsing_utils__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 149 "array.int"
#include "array.mh"

#line 27 "parsing_utils.c"
#line 136 "io.int2"
#include "io.mh"

#line 31 "parsing_utils.c"
#line 144 "io.int2"
#include "string.mh"

#line 35 "parsing_utils.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "parsing_utils.c"
#line 28 "time.int2"
#include "time.mh"

#line 43 "parsing_utils.c"
#line 48 "array.opt"
#include "stm_builtin.mh"

#line 47 "parsing_utils.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 51 "parsing_utils.c"
#line 150 "io.opt"
#include "dir.mh"

#line 55 "parsing_utils.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 59 "parsing_utils.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 63 "parsing_utils.c"
#line 112 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 67 "parsing_utils.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 71 "parsing_utils.c"
#line 20 "store.opt"
#include "store.mh"

#line 75 "parsing_utils.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 79 "parsing_utils.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 83 "parsing_utils.c"
#line 4 "char.opt"
#include "char.mh"

#line 87 "parsing_utils.c"
#line 3 "float.opt"
#include "float.mh"

#line 91 "parsing_utils.c"
#line 3 "math.opt"
#include "math.mh"

#line 95 "parsing_utils.c"
#line 4 "int.opt"
#include "int.mh"

#line 99 "parsing_utils.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 103 "parsing_utils.c"
#line 104 "parsing_utils.c"
#include "parsing_utils.mh"

#line 107 "parsing_utils.c"
#line 108 "parsing_utils.c"
#ifndef PARSING_UTILS_DECL_GUARD
#define PARSING_UTILS_DECL_GUARD

#line 112 "parsing_utils.c"
#line 113 "parsing_utils.c"

#endif
#line 116 "parsing_utils.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_parsing_utils__type_ctor_info_line_numbers_0,
	mercury_data_parsing_utils__type_ctor_info_parser_1,
	mercury_data_parsing_utils__type_ctor_info_parser_with_state_2,
	mercury_data_parsing_utils__type_ctor_info_ps_0,
	mercury_data_parsing_utils__type_ctor_info_src_0;
MR_decl_label5(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0, 33,3,5,2,1)
MR_decl_label5(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0, 33,3,5,2,1)
MR_decl_label4(parsing_utils__brackets_7_0, 2,4,6,1)
MR_decl_label4(parsing_utils__brackets_9_0, 2,4,6,1)
MR_decl_label1(parsing_utils__char_in_class_5_0, 1)
MR_decl_label4(parsing_utils__comma_separated_list_5_0, 2,4,6,1)
MR_decl_label4(parsing_utils__comma_separated_list_7_0, 2,4,6,1)
MR_decl_label5(parsing_utils__digits_5_0, 4,6,2,8,1)
MR_decl_label7(parsing_utils__digits_2_5_0, 48,6,8,4,10,2,15)
MR_decl_label1(parsing_utils__eof_4_0, 1)
MR_decl_label2(parsing_utils__float_literal_4_0, 2,1)
MR_decl_label8(parsing_utils__float_literal_as_string_4_0, 3,4,5,7,9,12,15,14)
MR_decl_label7(parsing_utils__float_literal_as_string_4_0, 17,18,11,20,21,22,1)
MR_decl_label4(parsing_utils__identifier_6_0, 2,4,6,1)
MR_decl_label3(parsing_utils__identifier_2_5_0, 16,4,2)
MR_decl_label1(parsing_utils__input_substring_4_0, 1)
MR_decl_label3(parsing_utils__int_literal_4_0, 2,4,1)
MR_decl_label8(parsing_utils__int_literal_as_string_4_0, 3,2,7,10,12,8,14,16)
MR_decl_label8(parsing_utils__int_literal_as_string_4_0, 17,20,22,19,24,25,26,1)
MR_decl_label4(parsing_utils__keyword_6_0, 2,6,8,1)
MR_decl_label2(parsing_utils__match_string_4_0, 2,1)
MR_decl_label2(parsing_utils__match_string_2_5_0, 5,1)
MR_decl_label1(parsing_utils__next_char_4_0, 1)
MR_decl_label6(parsing_utils__offset_to_line_number_and_position_2_6_0, 26,3,4,2,8,10)
MR_decl_label4(parsing_utils__one_or_more_5_0, 2,4,6,1)
MR_decl_label4(parsing_utils__one_or_more_7_0, 2,4,6,1)
MR_decl_label3(parsing_utils__optional_5_0, 4,2,1)
MR_decl_label3(parsing_utils__optional_7_0, 4,2,1)
MR_decl_label3(parsing_utils__punct_5_0, 2,4,1)
MR_decl_label4(parsing_utils__separated_list_6_0, 2,4,6,1)
MR_decl_label4(parsing_utils__separated_list_8_0, 2,4,6,1)
MR_decl_label2(parsing_utils__skip_to_eol_4_0, 6,1)
MR_decl_label3(parsing_utils__string_literal_5_0, 2,4,1)
MR_decl_label3(parsing_utils__string_literal_2_5_0, 2,3,1)
MR_decl_label5(parsing_utils__whitespace_4_0, 4,6,2,3,1)
MR_decl_label3(parsing_utils__zero_or_more_5_0, 2,4,1)
MR_decl_label3(parsing_utils__zero_or_more_7_0, 2,4,1)
MR_decl_label4(parsing_utils__zero_or_more_2_6_0, 26,4,2,1)
MR_decl_label4(parsing_utils__zero_or_more_2_8_0, 26,4,2,1)
MR_decl_label1(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0, 2)
MR_decl_label3(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0, 2,10,1)
MR_decl_label2(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_49_48_95_95_91_50_93_95_48_4_0, 4,2)
MR_decl_label2(fn__parsing_utils__skip_whitespace_2_0, 4,2)
MR_decl_label1(fn__parsing_utils__src_to_line_numbers_1_0, 3)
MR_decl_label2(__Unify___parsing_utils__src_0_0, 6,1)
MR_decl_label2(__Compare___parsing_utils__ps_0_0, 2,3)
MR_decl_label8(__Compare___parsing_utils__src_0_0, 3,2,6,7,9,13,14,17)
MR_decl_label1(__Compare___parsing_utils__src_0_0, 49)
MR_def_extern_entry(parsing_utils__new_src_and_ps_4_0)
MR_def_extern_entry(parsing_utils__new_src_and_ps_3_0)
MR_def_extern_entry(parsing_utils__current_offset_4_0)
MR_def_extern_entry(fn__parsing_utils__src_to_line_numbers_1_0)
MR_def_extern_entry(parsing_utils__offset_to_line_number_and_position_2_6_0)
MR_def_extern_entry(parsing_utils__offset_to_line_number_and_position_4_0)
MR_def_extern_entry(parsing_utils__input_substring_4_0)
MR_def_extern_entry(parsing_utils__next_char_4_0)
MR_def_extern_entry(parsing_utils__char_in_class_5_0)
MR_def_extern_entry(parsing_utils__skip_whitespace_3_0)
MR_def_extern_entry(parsing_utils__match_string_2_5_0)
MR_def_extern_entry(parsing_utils__match_string_4_0)
MR_def_extern_entry(parsing_utils__punct_5_0)
MR_def_extern_entry(parsing_utils__keyword_6_0)
MR_def_extern_entry(parsing_utils__identifier_2_5_0)
MR_def_extern_entry(parsing_utils__identifier_6_0)
MR_def_extern_entry(parsing_utils__whitespace_4_0)
MR_def_extern_entry(parsing_utils__skip_to_eol_4_0)
MR_def_extern_entry(parsing_utils__eof_4_0)
MR_decl_static(parsing_utils__digits_2_5_0)
MR_decl_static(parsing_utils__digits_5_0)
MR_def_extern_entry(parsing_utils__float_literal_as_string_4_0)
MR_def_extern_entry(parsing_utils__float_literal_4_0)
MR_def_extern_entry(parsing_utils__optional_5_0)
MR_def_extern_entry(parsing_utils__int_literal_as_string_4_0)
MR_def_extern_entry(parsing_utils__int_literal_4_0)
MR_decl_static(parsing_utils__string_literal_2_5_0)
MR_def_extern_entry(parsing_utils__string_literal_5_0)
MR_def_extern_entry(parsing_utils__zero_or_more_2_6_0)
MR_def_extern_entry(parsing_utils__zero_or_more_5_0)
MR_def_extern_entry(parsing_utils__one_or_more_5_0)
MR_def_extern_entry(parsing_utils__brackets_7_0)
MR_def_extern_entry(parsing_utils__separated_list_6_0)
MR_def_extern_entry(parsing_utils__comma_separated_list_5_0)
MR_def_extern_entry(parsing_utils__optional_7_0)
MR_def_extern_entry(parsing_utils__zero_or_more_2_8_0)
MR_def_extern_entry(parsing_utils__zero_or_more_7_0)
MR_def_extern_entry(parsing_utils__one_or_more_7_0)
MR_def_extern_entry(parsing_utils__brackets_9_0)
MR_def_extern_entry(parsing_utils__separated_list_8_0)
MR_def_extern_entry(parsing_utils__comma_separated_list_7_0)
MR_def_extern_entry(fn__parsing_utils__skip_whitespace_2_0)
MR_def_extern_entry(__Unify___parsing_utils__line_numbers_0_0)
MR_def_extern_entry(__Compare___parsing_utils__line_numbers_0_0)
MR_def_extern_entry(__Unify___parsing_utils__parser_1_0)
MR_def_extern_entry(__Compare___parsing_utils__parser_1_0)
MR_def_extern_entry(__Unify___parsing_utils__parser_with_state_2_0)
MR_def_extern_entry(__Compare___parsing_utils__parser_with_state_2_0)
MR_def_extern_entry(__Unify___parsing_utils__ps_0_0)
MR_def_extern_entry(__Compare___parsing_utils__ps_0_0)
MR_def_extern_entry(__Unify___parsing_utils__src_0_0)
MR_def_extern_entry(__Compare___parsing_utils__src_0_0)
MR_def_extern_entry(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_117_114_114_101_110_116_95_111_102_102_115_101_116_95_95_91_49_93_95_48_4_0)
MR_decl_static(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0)
MR_decl_static(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0)
MR_decl_static(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_49_48_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0)
MR_decl_static(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0)

static const MR_UserClosureId
mercury_data__closure_layout__parsing_utils__new_src_and_ps_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parsing_utils__type_ctor_info_src_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__parsing_utils__new_src_and_ps_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parsing_utils, src),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(fn__parsing_utils__skip_whitespace_2_0),
0
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_array__type_ctor_info_array_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_array__ti_array_1builtin__type_ctor_info_int_0 = {
	&mercury_data_array__type_ctor_info_array_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parsing_utils__type_ctor_info_line_numbers_0 = {
	0,
	13,
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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parsing_utils__type_ctor_info_src_0;

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
	13,
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
	13,
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
	13,
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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;

static const MR_VA_TypeInfo_Struct3 mercury_data___vti_func_3parsing_utils__type_ctor_info_src_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
	&mercury_data_builtin__type_ctor_info_func_0,
	3,
{	(MR_TypeInfo) &mercury_data_parsing_utils__type_ctor_info_src_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_parsing_utils__field_types_src_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data___vti_func_3parsing_utils__type_ctor_info_src_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_parsing_utils__field_names_src_0_0[] = {
	"input_length",
	"input_string",
	"skip_ws_func"
};

static const MR_DuFunctorDesc mercury_data_parsing_utils__du_functor_desc_src_0_0 = {
	"src",
	3,
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
	13,
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
mercury_data__closure_layout__parsing_utils__new_src_and_ps_3_0_1 = {
{
MR_FUNCTION,
"parsing_utils",
"parsing_utils",
"skip_whitespace",
3,
0
},
"parsing_utils",
"",
0,
""
};


MR_BEGIN_MODULE(parsing_utils_module0)
	MR_init_entry1(parsing_utils__new_src_and_ps_4_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'new_src_and_ps'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__new_src_and_ps_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__parsing_utils__new_src_and_ps_4_0
	Str = (MR_String) MR_r1;
{
#line 208 "string.opt"

    Length = strlen(Str);
;}
#line 487 "parsing_utils.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module1)
	MR_init_entry1(parsing_utils__new_src_and_ps_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'new_src_and_ps'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__new_src_and_ps_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__parsing_utils__new_src_and_ps_3_0
	Str = (MR_String) MR_r1;
{
#line 208 "string.opt"

    Length = strlen(Str);
;}
#line 531 "parsing_utils.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 0;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module2)
	MR_init_entry1(parsing_utils__current_offset_4_0);
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

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(array__from_list_2_0);

MR_BEGIN_MODULE(parsing_utils_module3)
	MR_init_entry1(fn__parsing_utils__src_to_line_numbers_1_0);
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
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = ((MR_Integer) MR_ctfield(1, MR_tempr1, 0) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_49_48_95_95_91_50_93_95_48_4_0,
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

MR_BEGIN_MODULE(parsing_utils_module4)
	MR_init_entry1(parsing_utils__offset_to_line_number_and_position_2_6_0);
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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = (((MR_Integer) MR_tempr1 + (MR_Integer) MR_tempr2) / (MR_Integer) 2);
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


MR_BEGIN_MODULE(parsing_utils_module5)
	MR_init_entry1(parsing_utils__offset_to_line_number_and_position_4_0);
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
#line 113 "array.opt"

    Max = Array->size;
;}
#line 738 "parsing_utils.c"
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


MR_BEGIN_MODULE(parsing_utils_module6)
	MR_init_entry1(parsing_utils__input_substring_4_0);
	MR_init_label1(parsing_utils__input_substring_4_0,1)
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(parsing_utils__input_substring_4_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr2 = ((MR_Integer) MR_r3 - (MR_Integer) MR_r2);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__parsing_utils__input_substring_4_0
	Str = (MR_String) MR_tempr1;
	Start = MR_r2;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 796 "parsing_utils.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parsing_utils__input_substring_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module7)
	MR_init_entry1(parsing_utils__next_char_4_0);
	MR_init_label1(parsing_utils__next_char_4_0,1)
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(parsing_utils__next_char_4_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__parsing_utils__next_char_4_0
	Str = (MR_String) MR_tempr1;
	Index = MR_r2;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 848 "parsing_utils.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_tempr2 + (MR_Integer) 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parsing_utils__next_char_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module8)
	MR_init_entry1(parsing_utils__char_in_class_5_0);
	MR_init_label1(parsing_utils__char_in_class_5_0,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'char_in_class'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__char_in_class_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(parsing_utils__char_in_class_5_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__parsing_utils__char_in_class_5_0
	Str = (MR_String) MR_tempr1;
	Index = MR_r3;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 903 "parsing_utils.c"
	MR_r2 = Ch;
#undef	MR_PROC_LABEL
	}
	{
	MR_String	Str;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__parsing_utils__char_in_class_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Str = (MR_String) MR_r1;
	Ch = MR_r2;
{
#line 486 "string.opt"

    SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
;}
#line 921 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(parsing_utils__char_in_class_5_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parsing_utils__char_in_class_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(parsing_utils_module9)
	MR_init_entry1(parsing_utils__skip_whitespace_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'skip_whitespace'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__skip_whitespace_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__skip_whitespace_3_0));
	MR_np_tailcall_ent(do_call_closure_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module10)
	MR_init_entry1(parsing_utils__match_string_2_5_0);
	MR_init_label2(parsing_utils__match_string_2_5_0,5,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'match_string_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__match_string_2_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(parsing_utils__match_string_2_5_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__parsing_utils__match_string_2_5_0
	Str = (MR_String) MR_r3;
	Index = MR_r2;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 1004 "parsing_utils.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = ((MR_Integer) MR_r4 + (MR_Integer) MR_r2);
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__parsing_utils__match_string_2_5_0
	Str = (MR_String) MR_r5;
	Index = MR_tempr2;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 1021 "parsing_utils.c"
	MR_tempr2 = Ch;
#undef	MR_PROC_LABEL
	}
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(parsing_utils__match_string_2_5_0_i1);
	}
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_np_localtailcall(parsing_utils__match_string_2_5_0);
	}
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


MR_BEGIN_MODULE(parsing_utils_module11)
	MR_init_entry1(parsing_utils__match_string_4_0);
	MR_init_label2(parsing_utils__match_string_4_0,2,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'match_string'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__match_string_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__parsing_utils__match_string_4_0
	Str = (MR_String) MR_r1;
{
#line 208 "string.opt"

    Length = strlen(Str);
;}
#line 1074 "parsing_utils.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_tempr5 = MR_r3;
	MR_tempr2 = ((MR_Integer) MR_tempr5 + (MR_Integer) MR_tempr1);
	MR_tempr6 = MR_r2;
	MR_tempr3 = MR_ctfield(0, MR_tempr6, 0);
	if (((MR_Integer) MR_tempr2 > (MR_Integer) MR_tempr3)) {
		MR_GOTO_LAB(parsing_utils__match_string_4_0_i1);
	}
	MR_sv(1) = ((MR_Integer) MR_tempr5 + (MR_Integer) MR_tempr1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_tempr6;
	MR_r2 = (MR_Integer) 0;
	MR_tempr4 = MR_tempr5;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_ctfield(0, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(parsing_utils__match_string_2_5_0,
		parsing_utils__match_string_4_0_i2);
MR_def_label(parsing_utils__match_string_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__match_string_4_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__match_string_4_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module12)
	MR_init_entry1(parsing_utils__punct_5_0);
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
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__parsing_utils__punct_5_0
	Str = (MR_String) MR_r1;
{
#line 208 "string.opt"

    Length = strlen(Str);
;}
#line 1148 "parsing_utils.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_tempr4 = MR_r3;
	MR_tempr2 = ((MR_Integer) MR_tempr4 + (MR_Integer) MR_tempr1);
	MR_tempr5 = MR_r2;
	MR_tempr3 = MR_ctfield(0, MR_tempr5, 0);
	if (((MR_Integer) MR_tempr2 > (MR_Integer) MR_tempr3)) {
		MR_GOTO_LAB(parsing_utils__punct_5_0_i1);
	}
	MR_sv(1) = MR_tempr5;
	MR_sv(2) = ((MR_Integer) MR_tempr4 + (MR_Integer) MR_tempr1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_tempr3 = MR_tempr4;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_ctfield(0, MR_sv(1), 1);
	}
	MR_np_call_localret_ent(parsing_utils__match_string_2_5_0,
		parsing_utils__punct_5_0_i2);
MR_def_label(parsing_utils__punct_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__punct_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__punct_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__punct_5_0_i4);
MR_def_label(parsing_utils__punct_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__punct_5_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module13)
	MR_init_entry1(parsing_utils__keyword_6_0);
	MR_init_label4(parsing_utils__keyword_6_0,2,6,8,1)
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
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	{
	MR_String	Str;
	MR_Integer	Length;
#define	MR_PROC_LABEL	mercury__parsing_utils__keyword_6_0
	Str = (MR_String) MR_r2;
{
#line 208 "string.opt"

    Length = strlen(Str);
;}
#line 1234 "parsing_utils.c"
	MR_tempr1 = Length;
#undef	MR_PROC_LABEL
	}
	MR_tempr4 = MR_r4;
	MR_tempr2 = ((MR_Integer) MR_tempr4 + (MR_Integer) MR_tempr1);
	MR_tempr5 = MR_r3;
	MR_tempr3 = MR_ctfield(0, MR_tempr5, 0);
	if (((MR_Integer) MR_tempr2 > (MR_Integer) MR_tempr3)) {
		MR_GOTO_LAB(parsing_utils__keyword_6_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr5;
	MR_sv(3) = ((MR_Integer) MR_tempr4 + (MR_Integer) MR_tempr1);
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr2;
	MR_r5 = MR_ctfield(0, MR_sv(2), 1);
	}
	MR_np_call_localret_ent(parsing_utils__match_string_2_5_0,
		parsing_utils__keyword_6_0_i2);
MR_def_label(parsing_utils__keyword_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__keyword_6_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parsing_utils__char_in_class_5_0,
		parsing_utils__keyword_6_0_i6);
MR_def_label(parsing_utils__keyword_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parsing_utils__keyword_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__keyword_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__keyword_6_0_i8);
MR_def_label(parsing_utils__keyword_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__keyword_6_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module14)
	MR_init_entry1(parsing_utils__identifier_2_5_0);
	MR_init_label3(parsing_utils__identifier_2_5_0,16,4,2)
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
MR_def_label(parsing_utils__identifier_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(parsing_utils__char_in_class_5_0,
		parsing_utils__identifier_2_5_0_i4);
MR_def_label(parsing_utils__identifier_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__identifier_2_5_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parsing_utils__identifier_2_5_0_i16);
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


MR_BEGIN_MODULE(parsing_utils_module15)
	MR_init_entry1(parsing_utils__identifier_6_0);
	MR_init_label4(parsing_utils__identifier_6_0,2,4,6,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'identifier'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__identifier_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(parsing_utils__char_in_class_5_0,
		parsing_utils__identifier_6_0_i2);
MR_def_label(parsing_utils__identifier_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__identifier_6_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parsing_utils__identifier_2_5_0,
		parsing_utils__identifier_6_0_i4);
MR_def_label(parsing_utils__identifier_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__identifier_6_0_i1);
	}
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__identifier_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__identifier_6_0_i6);
MR_def_label(parsing_utils__identifier_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (((MR_Integer) MR_sv(1) > (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(parsing_utils__identifier_6_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_sv(3);
	MR_tempr2 = ((MR_Integer) MR_sv(1) - (MR_Integer) MR_tempr4);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__parsing_utils__identifier_6_0
	Str = (MR_String) MR_tempr1;
	Start = MR_tempr4;
	Count = MR_tempr2;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 1427 "parsing_utils.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parsing_utils__identifier_6_0,1)
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

MR_decl_entry(char__is_whitespace_1_0);

MR_BEGIN_MODULE(parsing_utils_module16)
	MR_init_entry1(parsing_utils__whitespace_4_0);
	MR_init_label5(parsing_utils__whitespace_4_0,4,6,2,3,1)
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
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(parsing_utils__whitespace_4_0_i3);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__parsing_utils__whitespace_4_0
	Str = (MR_String) MR_tempr1;
	Index = MR_r2;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 1487 "parsing_utils.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = ((MR_Integer) MR_tempr3 + (MR_Integer) 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		parsing_utils__whitespace_4_0_i4);
MR_def_label(parsing_utils__whitespace_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__whitespace_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__whitespace_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__whitespace_4_0_i6);
MR_def_label(parsing_utils__whitespace_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__whitespace_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
MR_def_label(parsing_utils__whitespace_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__parsing_utils__whitespace_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 1536 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(parsing_utils__whitespace_4_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parsing_utils__whitespace_4_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module17)
	MR_init_entry1(parsing_utils__skip_to_eol_4_0);
	MR_init_label2(parsing_utils__skip_to_eol_4_0,6,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'skip_to_eol'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__skip_to_eol_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(parsing_utils__skip_to_eol_4_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__parsing_utils__skip_to_eol_4_0
	Str = (MR_String) MR_tempr1;
	Index = MR_r2;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 1598 "parsing_utils.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r3 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	if (MR_INT_EQ(MR_tempr1,10)) {
		MR_GOTO_LAB(parsing_utils__skip_to_eol_4_0_i6);
	}
	MR_r2 = MR_r3;
	MR_np_localtailcall(parsing_utils__skip_to_eol_4_0);
	}
MR_def_label(parsing_utils__skip_to_eol_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__skip_to_eol_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module18)
	MR_init_entry1(parsing_utils__eof_4_0);
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
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
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

MR_decl_entry(char__lower_upper_2_0);
MR_decl_entry(char__int_to_digit_2_1);

MR_BEGIN_MODULE(parsing_utils_module19)
	MR_init_entry1(parsing_utils__digits_2_5_0);
	MR_init_label7(parsing_utils__digits_2_5_0,48,6,8,4,10,2,15)
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
MR_def_label(parsing_utils__digits_2_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(parsing_utils__digits_2_5_0_i15);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__parsing_utils__digits_2_5_0
	Str = (MR_String) MR_tempr1;
	Index = MR_r3;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 1700 "parsing_utils.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r3;
	MR_sv(5) = ((MR_Integer) MR_tempr3 + (MR_Integer) 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__lower_upper_2_0,
		parsing_utils__digits_2_5_0_i6);
MR_def_label(parsing_utils__digits_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__digits_2_5_0_i4);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__int_to_digit_2_1,
		parsing_utils__digits_2_5_0_i8);
MR_def_label(parsing_utils__digits_2_5_0,8)
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
	MR_GOTO_LAB(parsing_utils__digits_2_5_0_i48);
MR_def_label(parsing_utils__digits_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(char__int_to_digit_2_1,
		parsing_utils__digits_2_5_0_i10);
MR_def_label(parsing_utils__digits_2_5_0,10)
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
	MR_GOTO_LAB(parsing_utils__digits_2_5_0_i48);
MR_def_label(parsing_utils__digits_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
MR_def_label(parsing_utils__digits_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module20)
	MR_init_entry1(parsing_utils__digits_5_0);
	MR_init_label5(parsing_utils__digits_5_0,4,6,2,8,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'digits'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parsing_utils__digits_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(parsing_utils__digits_5_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__parsing_utils__digits_5_0
	Str = (MR_String) MR_tempr1;
	Index = MR_r3;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 1810 "parsing_utils.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__lower_upper_2_0,
		parsing_utils__digits_5_0_i4);
MR_def_label(parsing_utils__digits_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__digits_5_0_i2);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__int_to_digit_2_1,
		parsing_utils__digits_5_0_i6);
MR_def_label(parsing_utils__digits_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__digits_5_0_i1);
	}
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(parsing_utils__digits_5_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parsing_utils__digits_2_5_0);
MR_def_label(parsing_utils__digits_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(char__int_to_digit_2_1,
		parsing_utils__digits_5_0_i8);
MR_def_label(parsing_utils__digits_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__digits_5_0_i1);
	}
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(parsing_utils__digits_5_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parsing_utils__digits_2_5_0);
MR_def_label(parsing_utils__digits_5_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module21)
	MR_init_entry1(parsing_utils__float_literal_as_string_4_0);
	MR_init_label8(parsing_utils__float_literal_as_string_4_0,3,4,5,7,9,12,15,14)
	MR_init_label7(parsing_utils__float_literal_as_string_4_0,17,18,11,20,21,22,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'float_literal_as_string'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__float_literal_as_string_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i3);
	}
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__parsing_utils__float_literal_as_string_4_0
	Str = (MR_String) MR_r4;
	Index = MR_r2;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 1919 "parsing_utils.c"
	MR_r4 = Ch;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) 45 != (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i3);
	}
	MR_sv(3) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r1 = (MR_Integer) 10;
	MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i4);
	}
MR_def_label(parsing_utils__float_literal_as_string_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r1 = (MR_Integer) 10;
MR_def_label(parsing_utils__float_literal_as_string_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(parsing_utils__digits_5_0,
		parsing_utils__float_literal_as_string_4_0_i5);
MR_def_label(parsing_utils__float_literal_as_string_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__float_literal_as_string_4_0_i7);
MR_def_label(parsing_utils__float_literal_as_string_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	if (((MR_Integer) 46 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	MR_r1 = (MR_Integer) 10;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parsing_utils__digits_5_0,
		parsing_utils__float_literal_as_string_4_0_i9);
MR_def_label(parsing_utils__float_literal_as_string_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("eE", 2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parsing_utils__char_in_class_5_0,
		parsing_utils__float_literal_as_string_4_0_i12);
MR_def_label(parsing_utils__float_literal_as_string_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__float_literal_as_string_4_0_i15);
MR_def_label(parsing_utils__float_literal_as_string_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i14);
	}
	if (((MR_Integer) 45 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i14);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = (MR_Integer) 10;
	MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i17);
MR_def_label(parsing_utils__float_literal_as_string_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = (MR_Integer) 10;
MR_def_label(parsing_utils__float_literal_as_string_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(parsing_utils__digits_5_0,
		parsing_utils__float_literal_as_string_4_0_i18);
MR_def_label(parsing_utils__float_literal_as_string_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_sv(2) = MR_r3;
	MR_r1 = MR_ctfield(0, MR_r2, 2);
	MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i20);
MR_def_label(parsing_utils__float_literal_as_string_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_ctfield(0, MR_r2, 2);
MR_def_label(parsing_utils__float_literal_as_string_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__float_literal_as_string_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__float_literal_as_string_4_0_i21);
MR_def_label(parsing_utils__float_literal_as_string_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(parsing_utils__input_substring_4_0,
		parsing_utils__float_literal_as_string_4_0_i22);
MR_def_label(parsing_utils__float_literal_as_string_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__float_literal_as_string_4_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__float_literal_as_string_4_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module22)
	MR_init_entry1(parsing_utils__float_literal_4_0);
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
#line 357 "string.opt"
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
#line 2108 "parsing_utils.c"
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


MR_BEGIN_MODULE(parsing_utils_module23)
	MR_init_entry1(parsing_utils__optional_5_0);
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
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 2189 "parsing_utils.c"
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


MR_BEGIN_MODULE(parsing_utils_module24)
	MR_init_entry1(parsing_utils__int_literal_as_string_4_0);
	MR_init_label8(parsing_utils__int_literal_as_string_4_0,3,2,7,10,12,8,14,16)
	MR_init_label8(parsing_utils__int_literal_as_string_4_0,17,20,22,19,24,25,26,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'int_literal_as_string'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__int_literal_as_string_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parsing_utils__char_in_class_5_0,
		parsing_utils__int_literal_as_string_4_0_i3);
MR_def_label(parsing_utils__int_literal_as_string_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i2);
	}
	MR_r1 = MR_r3;
	MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i7);
MR_def_label(parsing_utils__int_literal_as_string_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__parsing_utils__int_literal_as_string_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 2258 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(3);
MR_def_label(parsing_utils__int_literal_as_string_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__parsing_utils__int_literal_as_string_4_0
	Str = (MR_String) MR_tempr1;
	Index = MR_r1;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 2287 "parsing_utils.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_sv(4) = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__lower_upper_2_0,
		parsing_utils__int_literal_as_string_4_0_i10);
MR_def_label(parsing_utils__int_literal_as_string_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i8);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__int_to_digit_2_1,
		parsing_utils__int_literal_as_string_4_0_i12);
MR_def_label(parsing_utils__int_literal_as_string_4_0,12)
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
	MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i16);
MR_def_label(parsing_utils__int_literal_as_string_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__int_to_digit_2_1,
		parsing_utils__int_literal_as_string_4_0_i14);
MR_def_label(parsing_utils__int_literal_as_string_4_0,14)
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
MR_def_label(parsing_utils__int_literal_as_string_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(parsing_utils__digits_2_5_0,
		parsing_utils__int_literal_as_string_4_0_i17);
MR_def_label(parsing_utils__int_literal_as_string_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parsing_utils__next_char_4_0,
		parsing_utils__int_literal_as_string_4_0_i20);
MR_def_label(parsing_utils__int_literal_as_string_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i19);
	}
	if (((MR_Integer) 46 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i19);
	}
	MR_r1 = (MR_Integer) 10;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parsing_utils__digits_5_0,
		parsing_utils__int_literal_as_string_4_0_i22);
MR_def_label(parsing_utils__int_literal_as_string_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i1);
	}
MR_def_label(parsing_utils__int_literal_as_string_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_117_114_114_101_110_116_95_111_102_102_115_101_116_95_95_91_49_93_95_48_4_0,
		parsing_utils__int_literal_as_string_4_0_i24);
MR_def_label(parsing_utils__int_literal_as_string_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parsing_utils__skip_whitespace_3_0,
		parsing_utils__int_literal_as_string_4_0_i25);
MR_def_label(parsing_utils__int_literal_as_string_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(parsing_utils__input_substring_4_0,
		parsing_utils__int_literal_as_string_4_0_i26);
MR_def_label(parsing_utils__int_literal_as_string_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__int_literal_as_string_4_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parsing_utils__int_literal_as_string_4_0,1)
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

MR_decl_entry(string__base_string_to_int_3_0);

MR_BEGIN_MODULE(parsing_utils_module25)
	MR_init_entry1(parsing_utils__int_literal_4_0);
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


MR_BEGIN_MODULE(parsing_utils_module26)
	MR_init_entry1(parsing_utils__string_literal_2_5_0);
	MR_init_label3(parsing_utils__string_literal_2_5_0,2,3,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'string_literal_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parsing_utils__string_literal_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(parsing_utils__string_literal_2_5_0_i1);
	}
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__parsing_utils__string_literal_2_5_0
	Str = (MR_String) MR_r4;
	Index = MR_r3;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 2504 "parsing_utils.c"
	MR_r4 = Ch;
#undef	MR_PROC_LABEL
	}
	MR_r5 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	if ((MR_r4 != MR_r2)) {
		MR_GOTO_LAB(parsing_utils__string_literal_2_5_0_i2);
	}
	MR_r3 = MR_r5;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parsing_utils__string_literal_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,92)) {
		MR_GOTO_LAB(parsing_utils__string_literal_2_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(parsing_utils__string_literal_2_5_0_i1);
	}
	MR_r3 = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_np_localtailcall(parsing_utils__string_literal_2_5_0);
	}
MR_def_label(parsing_utils__string_literal_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r5;
	MR_np_localtailcall(parsing_utils__string_literal_2_5_0);
MR_def_label(parsing_utils__string_literal_2_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module27)
	MR_init_entry1(parsing_utils__string_literal_5_0);
	MR_init_label3(parsing_utils__string_literal_5_0,2,4,1)
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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(parsing_utils__string_literal_5_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__parsing_utils__string_literal_5_0
	Str = (MR_String) MR_tempr1;
	Index = MR_r3;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 2581 "parsing_utils.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(parsing_utils__string_literal_5_0_i1);
	}
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	}
	MR_np_call_localret_ent(parsing_utils__string_literal_2_5_0,
		parsing_utils__string_literal_5_0_i2);
MR_def_label(parsing_utils__string_literal_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__string_literal_5_0_i1);
	}
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__string_literal_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__string_literal_5_0_i4);
MR_def_label(parsing_utils__string_literal_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_tempr5 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr5, 0);
	if (((MR_Integer) MR_tempr1 > (MR_Integer) MR_tempr2)) {
		MR_GOTO_LAB(parsing_utils__string_literal_5_0_i1);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tempr1 - (MR_Integer) MR_tempr3);
	{
	MR_String	Str;
	MR_Integer	Start;
	MR_Integer	Count;
	MR_String	SubString;
#define	MR_PROC_LABEL	mercury__parsing_utils__string_literal_5_0
	Str = (MR_String) MR_tempr2;
	Start = MR_tempr3;
	Count = MR_tempr4;
{
#line 667 "string.opt"
{
    MR_Integer len;

    MR_allocate_aligned_string_msg(SubString, Count, MR_PROC_LABEL);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
};}
#line 2643 "parsing_utils.c"
	MR_r2 = (MR_Word) SubString;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_r1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
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


MR_BEGIN_MODULE(parsing_utils_module28)
	MR_init_entry1(parsing_utils__zero_or_more_2_6_0);
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
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r4;
	MR_tempr3 = MR_r5;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
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
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 2736 "parsing_utils.c"
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

MR_BEGIN_MODULE(parsing_utils_module29)
	MR_init_entry1(parsing_utils__zero_or_more_5_0);
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


MR_BEGIN_MODULE(parsing_utils_module30)
	MR_init_entry1(parsing_utils__one_or_more_5_0);
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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
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
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
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


MR_BEGIN_MODULE(parsing_utils_module31)
	MR_init_entry1(parsing_utils__brackets_7_0);
	MR_init_label4(parsing_utils__brackets_7_0,2,4,6,1)
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
	MR_np_call_localret_ent(parsing_utils__punct_5_0,
		parsing_utils__brackets_7_0_i2);
MR_def_label(parsing_utils__brackets_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__brackets_7_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__brackets_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__brackets_7_0_i4);
MR_def_label(parsing_utils__brackets_7_0,4)
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
	MR_np_call_localret_ent(parsing_utils__punct_5_0,
		parsing_utils__brackets_7_0_i6);
MR_def_label(parsing_utils__brackets_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__brackets_7_0_i1);
	}
	MR_r2 = MR_sv(1);
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


MR_BEGIN_MODULE(parsing_utils_module32)
	MR_init_entry1(parsing_utils__separated_list_6_0);
	MR_init_label4(parsing_utils__separated_list_6_0,2,4,6,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'separated_list'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__separated_list_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r5;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__separated_list_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__separated_list_6_0_i2);
MR_def_label(parsing_utils__separated_list_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__separated_list_6_0_i1);
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
	MR_np_call_localret_ent(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0,
		parsing_utils__separated_list_6_0_i4);
MR_def_label(parsing_utils__separated_list_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__separated_list_6_0_i1);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(list__reverse_2_0,
		parsing_utils__separated_list_6_0_i6);
MR_def_label(parsing_utils__separated_list_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parsing_utils__separated_list_6_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module33)
	MR_init_entry1(parsing_utils__comma_separated_list_5_0);
	MR_init_label4(parsing_utils__comma_separated_list_5_0,2,4,6,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'comma_separated_list'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__comma_separated_list_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r4;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__comma_separated_list_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__parsing_utils__comma_separated_list_5_0_i2);
MR_def_label(parsing_utils__comma_separated_list_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__comma_separated_list_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0,
		parsing_utils__comma_separated_list_5_0_i4);
MR_def_label(parsing_utils__comma_separated_list_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__comma_separated_list_5_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(list__reverse_2_0,
		parsing_utils__comma_separated_list_5_0_i6);
MR_def_label(parsing_utils__comma_separated_list_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parsing_utils__comma_separated_list_5_0,1)
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

MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(parsing_utils_module34)
	MR_init_entry1(parsing_utils__optional_7_0);
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
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 3208 "parsing_utils.c"
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


MR_BEGIN_MODULE(parsing_utils_module35)
	MR_init_entry1(parsing_utils__zero_or_more_2_8_0);
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
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 3313 "parsing_utils.c"
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


MR_BEGIN_MODULE(parsing_utils_module36)
	MR_init_entry1(parsing_utils__zero_or_more_7_0);
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


MR_BEGIN_MODULE(parsing_utils_module37)
	MR_init_entry1(parsing_utils__one_or_more_7_0);
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
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
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


MR_BEGIN_MODULE(parsing_utils_module38)
	MR_init_entry1(parsing_utils__brackets_9_0);
	MR_init_label4(parsing_utils__brackets_9_0,2,4,6,1)
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
	MR_np_call_localret_ent(parsing_utils__punct_5_0,
		parsing_utils__brackets_9_0_i2);
MR_def_label(parsing_utils__brackets_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__brackets_9_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__brackets_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__parsing_utils__brackets_9_0_i4);
MR_def_label(parsing_utils__brackets_9_0,4)
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
	MR_np_call_localret_ent(parsing_utils__punct_5_0,
		parsing_utils__brackets_9_0_i6);
MR_def_label(parsing_utils__brackets_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__brackets_9_0_i1);
	}
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
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


MR_BEGIN_MODULE(parsing_utils_module39)
	MR_init_entry1(parsing_utils__separated_list_8_0);
	MR_init_label4(parsing_utils__separated_list_8_0,2,4,6,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'separated_list'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__separated_list_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r6;
	MR_r4 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__separated_list_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__parsing_utils__separated_list_8_0_i2);
MR_def_label(parsing_utils__separated_list_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__separated_list_8_0_i1);
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
	MR_np_call_localret_ent(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0,
		parsing_utils__separated_list_8_0_i4);
MR_def_label(parsing_utils__separated_list_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__separated_list_8_0_i1);
	}
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(list__reverse_2_0,
		parsing_utils__separated_list_8_0_i6);
MR_def_label(parsing_utils__separated_list_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parsing_utils__separated_list_8_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module40)
	MR_init_entry1(parsing_utils__comma_separated_list_7_0);
	MR_init_label4(parsing_utils__comma_separated_list_7_0,2,4,6,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'comma_separated_list'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parsing_utils__comma_separated_list_7_0);
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
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(parsing_utils__comma_separated_list_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__parsing_utils__comma_separated_list_7_0_i2);
MR_def_label(parsing_utils__comma_separated_list_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__comma_separated_list_7_0_i1);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const(",", 1);
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_tempr2 = MR_r4;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0,
		parsing_utils__comma_separated_list_7_0_i4);
MR_def_label(parsing_utils__comma_separated_list_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parsing_utils__comma_separated_list_7_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(list__reverse_2_0,
		parsing_utils__comma_separated_list_7_0_i6);
MR_def_label(parsing_utils__comma_separated_list_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parsing_utils__comma_separated_list_7_0,1)
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


MR_BEGIN_MODULE(parsing_utils_module41)
	MR_init_entry1(fn__parsing_utils__skip_whitespace_2_0);
	MR_init_label2(fn__parsing_utils__skip_whitespace_2_0,4,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'skip_whitespace'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parsing_utils__skip_whitespace_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(parsing_utils__whitespace_4_0,
		fn__parsing_utils__skip_whitespace_2_0_i4);
MR_def_label(fn__parsing_utils__skip_whitespace_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parsing_utils__skip_whitespace_2_0_i2);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(2);
MR_def_label(fn__parsing_utils__skip_whitespace_2_0,2)
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

MR_decl_entry(__Unify___array__array_1_0);

MR_BEGIN_MODULE(parsing_utils_module42)
	MR_init_entry1(__Unify___parsing_utils__line_numbers_0_0);
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

MR_BEGIN_MODULE(parsing_utils_module43)
	MR_init_entry1(__Compare___parsing_utils__line_numbers_0_0);
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


MR_BEGIN_MODULE(parsing_utils_module44)
	MR_init_entry1(__Unify___parsing_utils__parser_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parsing_utils__parser_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module45)
	MR_init_entry1(__Compare___parsing_utils__parser_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parsing_utils__parser_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module46)
	MR_init_entry1(__Unify___parsing_utils__parser_with_state_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parsing_utils__parser_with_state_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module47)
	MR_init_entry1(__Compare___parsing_utils__parser_with_state_2_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parsing_utils__parser_with_state_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module48)
	MR_init_entry1(__Unify___parsing_utils__ps_0_0);
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


MR_BEGIN_MODULE(parsing_utils_module49)
	MR_init_entry1(__Compare___parsing_utils__ps_0_0);
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


MR_BEGIN_MODULE(parsing_utils_module50)
	MR_init_entry1(__Unify___parsing_utils__src_0_0);
	MR_init_label2(__Unify___parsing_utils__src_0_0,6,1)
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
		MR_GOTO_LAB(__Unify___parsing_utils__src_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___parsing_utils__src_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___parsing_utils__src_0_0_i1);
	}
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
	}
MR_def_label(__Unify___parsing_utils__src_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parsing_utils__src_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module51)
	MR_init_entry1(__Compare___parsing_utils__src_0_0);
	MR_init_label8(__Compare___parsing_utils__src_0_0,3,2,6,7,9,13,14,17)
	MR_init_label1(__Compare___parsing_utils__src_0_0,49)
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
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
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
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_tempr2, 0);
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
		MR_GOTO_LAB(__Compare___parsing_utils__src_0_0_i49);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___parsing_utils__src_0_0
	S1 = (MR_String) MR_r3;
	S2 = (MR_String) MR_r2;
{
#line 139 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 4139 "parsing_utils.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___parsing_utils__src_0_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___parsing_utils__src_0_0_i17);
MR_def_label(__Compare___parsing_utils__src_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___parsing_utils__src_0_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___parsing_utils__src_0_0_i17);
MR_def_label(__Compare___parsing_utils__src_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___parsing_utils__src_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parsing_utils__src_0_0_i49);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
MR_def_label(__Compare___parsing_utils__src_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module52)
	MR_init_entry1(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_117_114_114_101_110_116_95_111_102_102_115_101_116_95_95_91_49_93_95_48_4_0);
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

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(parsing_utils_module53)
	MR_init_entry1(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_init_label1(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__builtin_compare_pred__[2, 3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 4223 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_string_const("attempted higher-order comparison", 33);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_112_114_101_100_95_95_91_50_44_32_51_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module54)
	MR_init_entry1(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_init_label3(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,2,10,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__builtin_unify_pred__[1, 2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 4266 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0_i2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("attempted higher-order unification", 34);
	MR_np_call_localret_ent(require__error_1_0,
		f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0_i10);
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 4289 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_117_110_105_102_121_95_112_114_101_100_95_95_91_49_44_32_50_93_95_48_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module55)
	MR_init_entry1(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
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


MR_BEGIN_MODULE(parsing_utils_module56)
	MR_init_entry1(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_49_48_95_95_91_50_93_95_48_4_0);
	MR_init_label2(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_49_48_95_95_91_50_93_95_48_4_0,4,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__fold_down__ho10__[2]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_49_48_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_49_48_95_95_91_50_93_95_48_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_r5 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	{
	MR_String	Str;
	MR_Integer	Index;
	MR_Char	Ch;
#define	MR_PROC_LABEL	mercury__fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_49_48_95_95_91_50_93_95_48_4_0
	Str = (MR_String) MR_r1;
	Index = MR_tempr2;
{
#line 515 "string.opt"

    Ch = Str[Index];
;}
#line 4367 "parsing_utils.c"
	MR_tempr1 = Ch;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_tempr1,10)) {
		MR_GOTO_LAB(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_49_48_95_95_91_50_93_95_48_4_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_tempr1;
	MR_np_localtailcall(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_49_48_95_95_91_50_93_95_48_4_0);
	}
MR_def_label(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_49_48_95_95_91_50_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r5;
	MR_np_localtailcall(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_49_48_95_95_91_50_93_95_48_4_0);
MR_def_label(fn__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_105_110_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_49_48_95_95_91_50_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module57)
	MR_init_entry1(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0);
	MR_init_label5(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0,33,3,5,2,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__zero_or_more_2__ho12__[1, 4, 5]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(parsing_utils__punct_5_0,
		f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0_i3);
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0_i5);
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0_i33);
	}
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 4469 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_50_95_95_91_49_44_32_52_44_32_53_93_95_48_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parsing_utils_module58)
	MR_init_entry1(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0);
	MR_init_label5(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0,33,3,5,2,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__zero_or_more_2__ho13__[1, 2, 5, 6, 7]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(parsing_utils__punct_5_0,
		f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0_i3);
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0_i2);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0_i5);
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0_i33);
	}
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 78 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;
;}
#line 4572 "parsing_utils.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(f_112_97_114_115_105_110_103_95_117_116_105_108_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_101_114_111_95_111_114_95_109_111_114_101_95_50_95_95_104_111_49_51_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_55_93_95_48_8_0,1)
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
		mercury_data_parsing_utils__type_ctor_info_line_numbers_0,
		parsing_utils__line_numbers_0_0);
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
		&mercury_data_parsing_utils__type_ctor_info_line_numbers_0);
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
